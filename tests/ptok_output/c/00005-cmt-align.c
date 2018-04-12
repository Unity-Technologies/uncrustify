Line [Parent]            Text
1    [PP_IF]             #
1    [NONE]              ifndef
1    [NONE]              HAVE_FOO
1    [NONE]              
2    [FUNC_DEF]          void
2    [NONE]              foo
2    [FUNC_DEF]          (
2    [NONE]              void
2    [FUNC_DEF]          )
2    [NONE]              
3    [FUNC_DEF]          {
3    [NONE]              
4    [NONE]              if
4    [IF]                (
4    [NONE]              bar
4    [IF]                )
4    [NONE]              
5    [IF]                {
5    [NONE]              
6    [NONE]              call_some_function
6    [FUNC_CALL]         (
6    [FUNC_CALL]         )
6    [NONE]              ;
6    [COMMENT_END]       /* call the function */
6    [NONE]              
7    [NONE]              return
7    [RETURN]            (
7    [NONE]              foo
7    [RETURN]            )
7    [NONE]              ;
7    [COMMENT_END]       /* comment */
7    [NONE]              
8    [IF]                }
8    [COMMENT_END]       /* if (bar) */
8    [NONE]              
9    [FUNC_DEF]          }
9    [NONE]              
10   [PP_ENDIF]          #
10   [NONE]              endif
10   [COMMENT_END]       /* HAVE_FOO */
10   [NONE]              
11   [PP_IF]             #
11   [NONE]              ifndef
11   [NONE]              HAVE_BAR
11   [COMMENT_END]       /* bar isn't available on all HW */
11   [NONE]              
12   [FUNC_DEF]          void
12   [NONE]              bar
12   [FUNC_DEF]          (
12   [NONE]              void
12   [FUNC_DEF]          )
12   [NONE]              
13   [FUNC_DEF]          {
13   [NONE]              
14   [NONE]              if
14   [IF]                (
14   [NONE]              foo
14   [IF]                )
14   [NONE]              
15   [IF]                {
15   [NONE]              
16   [NONE]              call_some_function
16   [FUNC_CALL]         (
16   [FUNC_CALL]         )
16   [NONE]              ;
16   [COMMENT_END]       /* call the function */
16   [NONE]              
17   [NONE]              return
17   [RETURN]            (
17   [NONE]              foo
17   [RETURN]            )
17   [NONE]              ;
17   [COMMENT_END]       /* comment */
17   [NONE]              
18   [IF]                }
18   [COMMENT_END]       /* if (foo) */
18   [NONE]              
19   [FUNC_DEF]          }
19   [NONE]              
20   [PP_ENDIF]          #
20   [NONE]              endif
20   [COMMENT_END]       /* HAVE_BAR */
20   [NONE]              