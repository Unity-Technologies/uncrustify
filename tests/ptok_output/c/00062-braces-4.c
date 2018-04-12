Line [Parent]            Text
1    [FUNC_DEF]          int
1    [NONE]              foo
1    [FUNC_DEF]          (
1    [NONE]              int
1    [NONE]              bar
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [PP_IF]             #
3    [NONE]              ifndef
3    [NONE]              CONFIG_1
3    [NONE]              
4    [NONE]              bar
4    [NONE]              -=
4    [NONE]              3
4    [NONE]              ;
4    [NONE]              
5    [PP_ELSE]           #
5    [NONE]              else
5    [NONE]              
6    [NONE]              for
6    [FOR]               (
6    [NONE]              j
6    [NONE]              =
6    [NONE]              0
6    [FOR]               ;
6    [NONE]              j
6    [NONE]              <
6    [NONE]              NR_CPUS
6    [FOR]               ;
6    [NONE]              j
6    [NONE]              ++
6    [FOR]               )
6    [NONE]              
6    [FOR]               {
6    [NONE]              
7    [NONE]              if
7    [IF]                (
7    [NONE]              cpu_online
7    [FUNC_CALL]         (
7    [NONE]              j
7    [FUNC_CALL]         )
7    [IF]                )
7    [NONE]              
7    [IF]                {
7    [NONE]              
8    [NONE]              bar
8    [NONE]              ++
8    [NONE]              ;
8    [NONE]              
8    [IF]                }
8    [NONE]              
8    [FOR]               }
8    [NONE]              
9    [PP_ENDIF]          #
9    [NONE]              endif
9    [NONE]              
10   [NONE]              return
10   [RETURN]            (
10   [NONE]              0
10   [RETURN]            )
10   [NONE]              ;
10   [NONE]              
11   [FUNC_DEF]          }
11   [NONE]              