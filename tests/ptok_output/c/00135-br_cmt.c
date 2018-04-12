Line [Parent]            Text
1    [FUNC_DEF]          int
1    [NONE]              main
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              if
3    [IF]                (
3    [NONE]              foo
3    [NONE]              ==
3    [NONE]              bar
3    [IF]                )
3    [NONE]              
4    [IF]                {
4    [COMMENT_END]       /* this works */
4    [NONE]              
5    [NONE]              a
5    [NONE]              ;
5    [NONE]              
6    [IF]                }
6    [NONE]              else
6    [NONE]              
7    [NONE]              if
7    [ELSEIF]            (
7    [NONE]              ranz
7    [NONE]              !=
7    [NONE]              bar
7    [ELSEIF]            )
7    [NONE]              
8    [ELSEIF]            {
8    [COMMENT_END]       /* this works too */
8    [NONE]              
9    [NONE]              b
9    [NONE]              ;
9    [NONE]              
10   [ELSEIF]            }
10   [NONE]              else
10   [NONE]              
11   [ELSE]              {
11   [COMMENT_END]       /* this is broken */
11   [NONE]              
12   [NONE]              c
12   [NONE]              ;
12   [NONE]              
13   [ELSE]              }
13   [NONE]              
14   [FUNC_DEF]          }
14   [NONE]              