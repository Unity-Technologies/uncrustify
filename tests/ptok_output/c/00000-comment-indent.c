Line [Parent]            Text
1    [COMMENT_WHOLE]     /**␤ * This is your typical header comment␤ */
3    [NONE]              
4    [FUNC_DEF]          int
4    [NONE]              foo
4    [FUNC_DEF]          (
4    [NONE]              int
4    [NONE]              bar
4    [FUNC_DEF]          )
4    [NONE]              
5    [FUNC_DEF]          {
5    [NONE]              
6    [NONE]              int
6    [NONE]              idx
6    [NONE]              ;
6    [NONE]              
7    [NONE]              int
7    [NONE]              res
7    [NONE]              =
7    [NONE]              0
7    [NONE]              ;
7    [COMMENT_END]       // trailing comment
7    [NONE]              
8    [COMMENT_WHOLE]     // that spans two lines
8    [NONE]              
9    [NONE]              for
9    [FOR]               (
9    [NONE]              idx
9    [NONE]              =
9    [NONE]              1
9    [FOR]               ;
9    [NONE]              idx
9    [NONE]              <
9    [NONE]              bar
9    [FOR]               ;
9    [NONE]              idx
9    [NONE]              ++
9    [FOR]               )
9    [FOR]               
9    [NONE]              
10   [COMMENT_WHOLE]     /* comment in virtual braces */
10   [NONE]              
11   [NONE]              res
11   [NONE]              +=
11   [NONE]              idx
11   [NONE]              ;
11   [FOR]               
11   [NONE]              
13   [NONE]              res
13   [NONE]              *=
13   [NONE]              idx
13   [NONE]              ;
13   [COMMENT_END]       // some comment
13   [NONE]              
15   [COMMENT_WHOLE]     // almost continued, but a NL in between
15   [NONE]              
17   [COMMENT_WHOLE]     // col1 comment in level 1
17   [NONE]              
18   [COMMENT_WHOLE]     // second comment
18   [NONE]              
19   [NONE]              return
19   [RETURN]            (
19   [NONE]              res
19   [RETURN]            )
19   [NONE]              ;
19   [NONE]              
20   [FUNC_DEF]          }
20   [NONE]              
22   [COMMENT_WHOLE]     // col1 comment in level 0
22   [NONE]              
23   [COMMENT_WHOLE]     // and another
23   [NONE]              
25   [FUNC_DEF]          void
25   [NONE]              foo
25   [FUNC_DEF]          (
25   [FUNC_DEF]          )
25   [NONE]              
26   [FUNC_DEF]          {
26   [NONE]              
27   [NONE]              if
27   [IF]                (
27   [NONE]              bar
27   [IF]                )
27   [NONE]              
28   [IF]                {
28   [NONE]              
29   [NONE]              foo
29   [FUNC_CALL]         (
29   [FUNC_CALL]         )
29   [NONE]              ;
29   [NONE]              
30   [IF]                }
30   [NONE]              
31   [COMMENT_START]     /*else if( bar2 )␤ {␤   foo2();␤ }␤ */
35   [NONE]              else
35   [NONE]              if
35   [ELSEIF]            (
35   [NONE]              bar3
35   [ELSEIF]            )
35   [NONE]              
36   [ELSEIF]            {
36   [NONE]              
37   [NONE]              foo3
37   [FUNC_CALL]         (
37   [FUNC_CALL]         )
37   [NONE]              ;
37   [NONE]              
38   [ELSEIF]            }
38   [NONE]              
39   [FUNC_DEF]          }
39   [NONE]              