#
# Generate punctuator_table.h from punctuators.cpp
#
# This script is meant to be executed with `cmake -P` from a custom command,
#

function(generate_punctuator_table)
   execute_process (COMMAND python ../scripts/punc.py
                    OUTPUT_FILE punctuator_table.h)
endfunction()

generate_punctuator_table()
