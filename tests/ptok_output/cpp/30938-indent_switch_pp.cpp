Line [Parent]            Text
1    [COMMENT_WHOLE]     // Example for not indenting preprocesser statements inside switch statements
1    [NONE]              
2    [NONE]              switch
2    [SWITCH]            (
2    [NONE]              ...
2    [SWITCH]            )
2    [NONE]              
3    [SWITCH]            {
3    [NONE]              
4    [NONE]              case
4    [NONE]              1
4    [NONE]              :
4    [NONE]              
5    [NONE]              case
5    [NONE]              2
5    [NONE]              :
5    [NONE]              
6    [CASE]              {
6    [NONE]              
7    [NONE]              int
7    [NONE]              v
7    [NONE]              ;
7    [NONE]              
8    [NONE]              ...
8    [NONE]              
9    [CASE]              }
9    [NONE]              
10   [NONE]              break
10   [NONE]              ;
10   [NONE]              
12   [PP_IF]             #
12   [NONE]              if
12   [NONE]              (
12   [NONE]              USE_FIVE
12   [NONE]              )
12   [NONE]              
13   [NONE]              case
13   [NONE]              3
13   [NONE]              :
13   [NONE]              
14   [NONE]              doFive
14   [FUNC_CALL]         (
14   [FUNC_CALL]         )
14   [NONE]              ;
14   [NONE]              
15   [NONE]              break
15   [NONE]              ;
15   [NONE]              
16   [PP_ENDIF]          #
16   [NONE]              endif
16   [NONE]              
18   [NONE]              default
18   [NONE]              :
18   [NONE]              
19   [NONE]              break
19   [NONE]              ;
19   [NONE]              
20   [SWITCH]            }