Line [Parent]            Text
1    [OC_MSG_DECL]       -
1    [OC_MSG_DECL]       (
1    [NONE]              void
1    [OC_MSG_DECL]       )
1    [OC_MSG_DECL]       bar
1    [OC_MSG_DECL]       {
1    [NONE]              if
1    [IF]                (
1    [NONE]              foo
1    [IF]                )
1    [IF]                
1    [OC_MSG]            [
1    [NONE]              _obj
1    [NONE]              bar
1    [OC_MSG]            ]
1    [OC_MSG]            ;
1    [IF]                
1    [OC_MSG_DECL]       }
1    [NONE]              
3    [FUNC_DEF]          void
3    [NONE]              foo
3    [FUNC_DEF]          (
3    [FUNC_DEF]          )
3    [FUNC_DEF]          {
3    [NONE]              if
3    [IF]                (
3    [NONE]              foo
3    [IF]                )
3    [IF]                
3    [NONE]              bar
3    [FUNC_CALL]         (
3    [FUNC_CALL]         )
3    [NONE]              ;
3    [IF]                
3    [NONE]              bar
3    [FUNC_CALL]         (
3    [FUNC_CALL]         )
3    [NONE]              ;
3    [FUNC_DEF]          }
3    [NONE]              
5    [NONE]              class
5    [CLASS]             Foo
5    [NONE]              
6    [CLASS]             {
6    [NONE]              
7    [FUNC_DEF]          void
7    [NONE]              foo
7    [FUNC_DEF]          (
7    [FUNC_DEF]          )
7    [NONE]              
8    [FUNC_DEF]          {
8    [NONE]              
9    [NONE]              if
9    [IF]                (
9    [NONE]              bar
9    [IF]                )
9    [IF]                {
9    [NONE]              bar
9    [FUNC_CALL]         (
9    [FUNC_CALL]         )
9    [IF]                }
9    [NONE]              else
9    [ELSE]              
9    [NONE]              i
9    [NONE]              ++
9    [NONE]              ;
9    [ELSE]              
9    [NONE]              
10   [FUNC_DEF]          }
10   [NONE]              
11   [CLASS]             }
11   [CLASS]             ;
11   [NONE]              