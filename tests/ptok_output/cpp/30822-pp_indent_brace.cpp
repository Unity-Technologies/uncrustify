Line [Parent]            Text
1    [COMMENT_WHOLE]     // Example for preprocessor statement in a function definition
1    [NONE]              
2    [COMMENT_WHOLE]     // Config uses more than tested option, uses:
2    [NONE]              
3    [COMMENT_WHOLE]     // pp_if_indent_code  = true	  to enable preprocesser indent
3    [NONE]              
4    [COMMENT_WHOLE]     // pp_indent_brace	  = false	  to override preprocessor indent for braces
4    [NONE]              
5    [NONE]              MyClass
5    [NONE]              ::
5    [NONE]              MyClass
5    [FUNC_CLASS_DEF]    (
5    [FUNC_CLASS_DEF]    )
5    [NONE]              
6    [FUNC_CLASS_DEF]    {
6    [NONE]              
7    [NONE]              if
7    [IF]                (
7    [NONE]              isSomething
7    [IF]                )
7    [NONE]              
8    [IF]                {
8    [NONE]              
9    [NONE]              DoSomething
9    [FUNC_CALL]         (
9    [FUNC_CALL]         )
9    [NONE]              ;
9    [NONE]              
10   [IF]                }
10   [NONE]              
12   [PP_IF]             #
12   [NONE]              if
12   [C_CAST]            (
12   [C_CAST]            USE_FIVE
12   [C_CAST]            )
12   [NONE]              
13   [C_CAST]            {
13   [NONE]              
14   [NONE]              DoSomethingAlso
14   [FUNC_CALL]         (
14   [FUNC_CALL]         )
14   [NONE]              ;
14   [NONE]              
15   [C_CAST]            }
15   [NONE]              
16   [PP_ENDIF]          #
16   [NONE]              endif
16   [NONE]              
18   [PP_IF]             #
18   [NONE]              if
18   [C_CAST]            (
18   [C_CAST]            USE_SIX
18   [C_CAST]            )
18   [NONE]              
19   [C_CAST]            {
19   [NONE]              
20   [NONE]              Six
20   [NONE]              mySix
20   [NONE]              ;
20   [NONE]              
21   [NONE]              DoSomethingWithSix
21   [FUNC_CALL]         (
21   [NONE]              mySix
21   [FUNC_CALL]         )
21   [NONE]              ;
21   [NONE]              
22   [C_CAST]            }
22   [NONE]              
23   [PP_ENDIF]          #
23   [NONE]              endif
23   [NONE]              
24   [FUNC_CLASS_DEF]    }