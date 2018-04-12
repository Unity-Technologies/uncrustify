Line [Parent]            Text
1    [COMMENT_WHOLE]     /********************/
1    [NONE]              
2    [COMMENT_WHOLE]     /* Before Unrustify */
2    [NONE]              
3    [COMMENT_WHOLE]     /********************/
3    [NONE]              
5    [PP_DEFINE]         #
5    [NONE]              define
5    [NONE]              MACRO
5    [MACRO_FUNC]        (
5    [NONE]              cond
5    [NONE]              ,
5    [NONE]              action
5    [MACRO_FUNC]        )
5    [NONE]              if
5    [IF]                (
5    [NONE]              (
5    [NONE]              cond
5    [NONE]              )
5    [IF]                )
5    [IF]                
5    [C_CAST]            (
5    [C_CAST]            action
5    [C_CAST]            )
5    [NONE]              
7    [FUNC_DEF]          void
7    [NONE]              hurz
7    [FUNC_DEF]          (
7    [NONE]              murks
7    [FUNC_DEF]          )
7    [NONE]              
8    [FUNC_DEF]          {
8    [NONE]              
9    [NONE]              if
9    [IF]                (
9    [NONE]              murks
9    [NONE]              =
9    [NONE]              4
9    [IF]                )
9    [IF]                {
9    [COMMENT_END]       // This comment belongs to (murks = 4)
9    [NONE]              
10   [NONE]              schrott
10   [FUNC_CALL]         (
10   [FUNC_CALL]         )
10   [NONE]              ;
10   [COMMENT_END]       // And this to schrott()
10   [NONE]              
10   [IF]                }
10   [NONE]              
11   [PP_IF]             #
11   [NONE]              ifdef
11   [NONE]              SCHNIEPEL
11   [NONE]              
12   [NONE]              else
12   [NONE]              if
12   [ELSEIF]            (
12   [NONE]              murks
12   [NONE]              =
12   [NONE]              6
12   [ELSEIF]            )
12   [ELSEIF]            {
12   [COMMENT_END]       // This comment belongs to (murks = 6)
12   [NONE]              
13   [COMMENT_WHOLE]     // I had to write more comment than one line
13   [NONE]              
14   [COMMENT_WHOLE]     // so I inserted some comment only blocks
14   [NONE]              
15   [NONE]              schniepel
15   [FUNC_CALL]         (
15   [FUNC_CALL]         )
15   [NONE]              ;
15   [NONE]              
15   [ELSEIF]            }
15   [NONE]              
16   [PP_ENDIF]          #
16   [NONE]              endif
16   [COMMENT_END]       // SCHNIEPEL
16   [NONE]              
17   [NONE]              else
17   [ELSE]              {
17   [NONE]              
18   [NONE]              flursen
18   [FUNC_CALL]         (
18   [FUNC_CALL]         )
18   [NONE]              ;
18   [NONE]              
18   [ELSE]              }
18   [NONE]              
20   [NONE]              if
20   [IF]                (
20   [NONE]              murks
20   [NONE]              =
20   [NONE]              4
20   [IF]                )
20   [COMMENT_END]       // This comment belongs to (murks = 4)
20   [NONE]              
21   [PP_IF]             #
21   [NONE]              ifdef
21   [NONE]              FOO
21   [NONE]              
21   [IF]                {
21   [NONE]              
22   [NONE]              foo
22   [FUNC_CALL]         (
22   [FUNC_CALL]         )
22   [NONE]              ;
22   [NONE]              
22   [IF]                }
22   [NONE]              
23   [PP_ELSE]           #
23   [NONE]              else
23   [NONE]              
23   [IF]                {
23   [NONE]              
24   [NONE]              bar
24   [FUNC_CALL]         (
24   [FUNC_CALL]         )
24   [NONE]              ;
24   [NONE]              
24   [IF]                }
24   [NONE]              
25   [PP_ENDIF]          #
25   [NONE]              endif
25   [NONE]              
26   [NONE]              if
26   [IF]                (
26   [NONE]              murks
26   [NONE]              =
26   [NONE]              4
26   [IF]                )
27   [IF]                {
26   [COMMENT_END]       // This comment belongs to (murks = 4)
27   [NONE]              
28   [NONE]              schrott
28   [FUNC_CALL]         (
28   [FUNC_CALL]         )
28   [NONE]              ;
28   [COMMENT_END]       // And this to schrott()
28   [NONE]              
29   [IF]                }
29   [NONE]              
30   [NONE]              return
30   [NONE]              ;
30   [NONE]              
31   [FUNC_DEF]          }
31   [COMMENT_END]       // hurz()
31   [NONE]              