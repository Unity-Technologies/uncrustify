Line [Parent]            Text
1    [COMMENT_WHOLE]     // Example of function definitions inside of preprocessor statements
1    [NONE]              
2    [COMMENT_WHOLE]     // Config uses more than tested option, uses:
2    [NONE]              
3    [COMMENT_WHOLE]     // pp_if_indent_code  = true	  to enable preprocesser indent
3    [NONE]              
4    [COMMENT_WHOLE]     // pp_indent_func_def = false	  to override preprocessor indent for function definitions
4    [NONE]              
5    [NONE]              int
5    [NONE]              x
5    [NONE]              =
5    [NONE]              1
5    [NONE]              ;
5    [NONE]              
6    [PP_IF]             #
6    [NONE]              if
6    [C_CAST]            (
6    [C_CAST]            USE_AWESOME_FUNCTIONS
6    [C_CAST]            )
6    [NONE]              
7    [FUNC_DEF]          void
7    [FUNC_DEF]          MyClass
7    [FUNC_DEF]          ::
7    [NONE]              SomeAwesomeFunction
7    [FUNC_DEF]          (
7    [FUNC_DEF]          )
7    [NONE]              
8    [FUNC_DEF]          {
8    [NONE]              
9    [NONE]              DoSomethingInAFunction
9    [FUNC_CALL]         (
9    [FUNC_CALL]         )
9    [NONE]              ;
9    [NONE]              
10   [FUNC_DEF]          }
10   [NONE]              
11   [PP_ENDIF]          #
11   [NONE]              endif