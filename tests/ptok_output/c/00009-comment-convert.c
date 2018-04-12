Line [Parent]            Text
1    [COMMENT_WHOLE]     // This is your typical header comment
1    [NONE]              
2    [FUNC_DEF]          int
2    [NONE]              foo
2    [FUNC_DEF]          (
2    [NONE]              int
2    [NONE]              bar
2    [FUNC_DEF]          )
2    [NONE]              
3    [FUNC_DEF]          {
3    [NONE]              
4    [NONE]              int
4    [NONE]              idx
4    [NONE]              ;
4    [NONE]              
5    [NONE]              int
5    [NONE]              res
5    [NONE]              =
5    [NONE]              0
5    [NONE]              ;
5    [COMMENT_END]       // trailing comment
5    [NONE]              
6    [COMMENT_WHOLE]     // that spans two lines
6    [NONE]              
9    [COMMENT_WHOLE]     // Comment with embedded /* C comment */
9    [NONE]              
10   [NONE]              for
10   [FOR]               (
10   [NONE]              idx
10   [NONE]              =
10   [NONE]              1
10   [FOR]               ;
10   [NONE]              idx
10   [NONE]              <
10   [NONE]              bar
10   [FOR]               ;
10   [NONE]              idx
10   [NONE]              ++
10   [FOR]               )
10   [FOR]               
10   [NONE]              
11   [COMMENT_WHOLE]     /* comment in virtual braces */
11   [NONE]              
12   [NONE]              res
12   [NONE]              +=
12   [NONE]              idx
12   [NONE]              ;
12   [FOR]               
12   [NONE]              
14   [COMMENT_WHOLE]     // Multi-line comment with embedded /* C comment */ and junk
14   [NONE]              
15   [COMMENT_WHOLE]     // afterwards
15   [NONE]              
16   [NONE]              res
16   [NONE]              *=
16   [NONE]              idx
16   [NONE]              ;
16   [COMMENT_END]       // some comment
16   [NONE]              
18   [COMMENT_WHOLE]     // almost continued, but a NL in between
18   [NONE]              
20   [COMMENT_WHOLE]     // col1 comment in level 1
20   [NONE]              
21   [COMMENT_WHOLE]     // second comment
21   [NONE]              
22   [NONE]              return
22   [RETURN]            (
22   [NONE]              res
22   [RETURN]            )
22   [NONE]              ;
22   [NONE]              
23   [FUNC_DEF]          }
23   [NONE]              
25   [COMMENT_WHOLE]     // col1 comment in level 0
25   [NONE]              
26   [COMMENT_WHOLE]     // and another
26   [NONE]              