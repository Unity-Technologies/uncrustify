cmake_minimum_required(VERSION 2.8)

function(add_uncrustify_test name lang config rerun_config input result result_2 output rerun_output test_do)
  add_test(NAME ${name}
    COMMAND ${CMAKE_COMMAND}
      -DTEST_PROGRAM=$<TARGET_FILE:uncrustify>
      -DTEST_LANG=${lang}
      -DTEST_CONFIG=${config}
      -DTEST_RERUN_CONFIG=${rerun_config}
      -DTEST_INPUT=${input}
      -DTEST_RESULT=${result}
      -DTEST_RESULT_2=${result_2}
      -DTEST_OUTPUT=${output}
      -DTEST_TYPE=${test_do}
      -DTEST_RERUN_OUTPUT=${rerun_output}
      -DTEST_DIR=${PROJECT_SOURCE_DIR}/tests
      -P ${PROJECT_SOURCE_DIR}/tests/run_test_all.cmake
  )
  set_tests_properties(${name}
    PROPERTIES LABELS "${lang}"
  )
endfunction()
# Add languages to output_test_lang to do output comparison on those languages
set(output_test_lang vala)

# Add languages to token_test_lang to do token comparison on those languages
set(token_test_lang)

# Add languages to ptoken_test_lang to do parent token comparison on those languages
set(ptoken_test_lang)

# test_lang is the list of languages supported by Uncrustify - regression and staging are specific to UNITY
foreach(test_lang c-sharp c cpp d java pawn objective-c vala ecma imported regression staging)
  # Create dependency on test file so CMake re-runs if changed
  configure_file("${test_lang}.test" "${test_lang}.test" COPYONLY)
  file(READ "${test_lang}.test" content)
  string(REPLACE "\n" ";" lines "${content}")
  
  list(FIND output_test_lang "${test_lang}" cond)
  list(FIND token_test_lang "${test_lang}" t_cond)
  list(FIND ptoken_test_lang "${test_lang}" pt_cond)
  
  if(cond EQUAL -1 AND t_cond EQUAL -1 AND pt_cond EQUAL -1)
  continue()
  endif()
  foreach(line ${lines})
    string(STRIP "${line}" line)
    string(SUBSTRING "${line}" 0 1 first)
    # trailing space avoids double evaluation with older CMake versions
    if(NOT "${first} " STREQUAL "# ")
      if("${line}" MATCHES "^([0-9]+)([!]?)[ ]+([^ ]+)[ ]+([^ ]+)$")
        set(test_number "${CMAKE_MATCH_1}")
        set(test_name "${test_lang}_${test_number}")

        set(test_config config/${CMAKE_MATCH_3})
        set(test_input input/${CMAKE_MATCH_4})

        get_filename_component(test_dir ${CMAKE_MATCH_4} PATH)
        get_filename_component(test_file ${CMAKE_MATCH_4} NAME)

        set(test_expected ${test_dir}/${CMAKE_MATCH_1}-${test_file})
        set(test_output output/${test_expected})
        set(test_result results/${test_expected})
        set(test_result_2 results_2/${test_expected})

        if("${CMAKE_MATCH_2} " STREQUAL "! ")
          string(REGEX REPLACE "\\.[^.]*" ".rerun.cfg"  test_rerun_config ${test_config})
          string(REGEX REPLACE "\\.[^.]*" ".rerun.lang" test_rerun_output ${test_output})
        else()
          set(test_rerun_config ${test_config})
          set(test_rerun_output ${test_output})
        endif()
		
		set(test_do)

		if(cond GREATER -1)
			set(test_do_o -o ${test_result})           
		endif()
		
		if(t_cond GREATER -1)
			set(test_do_t --token tok_${test_result}) 
		endif()
		
		if(pt_cond GREATER -1)
			set(test_do_p --parent ptok_${test_result}) 
		endif()
		
		string(CONCAT test_do ${test_do_o} " " ${test_do_t} " " ${test_do_p}) 
		
		add_uncrustify_test(${test_name} ${test_dir} ${test_config} ${test_rerun_config}
          ${test_input} ${test_result} ${test_result_2} ${test_output} ${test_rerun_output} ${test_do})   

      endif()
    endif()
  endforeach()
endforeach()
