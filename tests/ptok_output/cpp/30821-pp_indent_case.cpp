Line [Parent]            Text
1    [COMMENT_WHOLE]     // Example for case in a preprocesser statement
1    [NONE]              
2    [COMMENT_WHOLE]     // Config uses more than tested option, uses:
2    [NONE]              
3    [COMMENT_WHOLE]     // pp_if_indent_code  = true	  to enable preprocesser indent
3    [NONE]              
4    [COMMENT_WHOLE]     // pp_indent_case	  = false	  to override preprocessor indent for case blocks
4    [NONE]              
5    [NONE]              switch
5    [SWITCH]            (
5    [NONE]              ...
5    [SWITCH]            )
5    [NONE]              
6    [SWITCH]            {
6    [NONE]              
7    [NONE]              case
7    [NONE]              1
7    [NONE]              :
7    [NONE]              
8    [NONE]              case
8    [NONE]              2
8    [NONE]              :
8    [NONE]              
9    [CASE]              {
9    [NONE]              
10   [NONE]              int
10   [NONE]              v
10   [NONE]              ;
10   [NONE]              
11   [NONE]              ...
11   [NONE]              
12   [CASE]              }
12   [NONE]              
13   [NONE]              break
13   [NONE]              ;
13   [NONE]              
15   [PP_IF]             #
15   [NONE]              if
15   [NONE]              (
15   [NONE]              USE_FIVE
15   [NONE]              )
15   [NONE]              
16   [NONE]              case
16   [NONE]              3
16   [NONE]              :
16   [NONE]              
17   [NONE]              doFive
17   [FUNC_CALL]         (
17   [FUNC_CALL]         )
17   [NONE]              ;
17   [NONE]              
18   [NONE]              break
18   [NONE]              ;
18   [NONE]              
19   [PP_ENDIF]          #
19   [NONE]              endif
19   [NONE]              
21   [NONE]              default
21   [NONE]              :
21   [NONE]              
22   [NONE]              break
22   [NONE]              ;
22   [NONE]              
23   [SWITCH]            }