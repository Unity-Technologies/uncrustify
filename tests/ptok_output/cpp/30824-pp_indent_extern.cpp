Line [Parent]            Text
1    [COMMENT_WHOLE]     // Example for extern "C" blocks inside preprocessor statements
1    [NONE]              
2    [COMMENT_WHOLE]     // Config uses more than tested option, uses:
2    [NONE]              
3    [COMMENT_WHOLE]     // pp_if_indent_code  = true	  to enable preprocesser indent
3    [NONE]              
4    [COMMENT_WHOLE]     // pp_indent_extern	  = false	  to override preprocessor indent for braces
4    [NONE]              
5    [NONE]              int
5    [NONE]              x
5    [NONE]              =
5    [NONE]              1
5    [NONE]              ;
5    [NONE]              
6    [PP_IF]             #
6    [NONE]              ifdef
6    [NONE]              __cplusplus
6    [NONE]              
7    [NONE]              extern
7    [EXTERN]            "C"
7    [EXTERN]            {
7    [NONE]              
9    [FUNC_PROTO]        void
9    [NONE]              some_c_function
9    [NONE]              
10   [FUNC_PROTO]        (
10   [NONE]              
11   [NONE]              void
11   [NONE]              
12   [FUNC_PROTO]        )
12   [FUNC_PROTO]        ;
12   [NONE]              
13   [EXTERN]            }
13   [NONE]              
14   [PP_ENDIF]          #
14   [NONE]              endif