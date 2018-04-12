Line [Parent]            Text
1    [FUNC_DEF]          void
1    [NONE]              foo
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              int
3    [NONE]              error
3    [NONE]              =
3    [NONE]              0
3    [NONE]              ;
3    [NONE]              
4    [PP_IF]             #
4    [NONE]              if
4    [NONE]              defined
4    [NONE]              (
4    [NONE]              SUPPORT_FEATURE
4    [NONE]              )
4    [NONE]              
5    [NONE]              error
5    [NONE]              =
5    [NONE]              feature_bar
5    [FUNC_CALL]         (
5    [FUNC_CALL]         )
5    [NONE]              ;
5    [NONE]              
6    [PP_ELSE]           #
6    [NONE]              else
6    [COMMENT_END]       // feature not supported
6    [NONE]              
7    [COMMENT_WHOLE]     // we call bar otherwise
7    [NONE]              
8    [NONE]              error
8    [NONE]              =
8    [NONE]              bar
8    [FUNC_CALL]         (
8    [FUNC_CALL]         )
8    [NONE]              ;
8    [NONE]              
9    [PP_ENDIF]          #
9    [NONE]              endif
9    [COMMENT_END]       // SUPPORT_FEATURE
9    [NONE]              
10   [COMMENT_WHOLE]     // continue with function logic
10   [NONE]              
11   [NONE]              if
11   [IF]                (
11   [NONE]              error
11   [NONE]              !=
11   [NONE]              0
11   [IF]                )
11   [NONE]              
12   [IF]                {
12   [NONE]              
13   [PP_IF]             #
13   [NONE]              if
13   [NONE]              0
13   [COMMENT_END]       // TODO: this is disabled
13   [NONE]              
14   [COMMENT_WHOLE]     // call final bar
14   [NONE]              
15   [NONE]              error_bar
15   [FUNC_CALL]         (
15   [NONE]              error
15   [FUNC_CALL]         )
15   [NONE]              ;
15   [NONE]              
16   [PP_ENDIF]          #
16   [NONE]              endif
16   [NONE]              
17   [IF]                }
17   [NONE]              
18   [FUNC_DEF]          }
18   [NONE]              