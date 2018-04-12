Line [Parent]            Text
1    [COMMENT_WHOLE]     /**␍␤ * This is your typical header comment␍␤ */
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
9    [NONE]              
10   [FOR]               {
10   [NONE]              
11   [COMMENT_WHOLE]     /* comment in virtual braces */
11   [NONE]              
12   [NONE]              res
12   [NONE]              +=
12   [NONE]              idx
12   [NONE]              ;
12   [NONE]              
13   [FOR]               }
13   [NONE]              
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
21   [NONE]              return
21   [RETURN]            (
21   [NONE]              res
21   [RETURN]            )
21   [NONE]              ;
21   [NONE]              
22   [FUNC_DEF]          }
22   [NONE]              
24   [COMMENT_WHOLE]     // col1 comment in level 0
24   [NONE]              
26   [COMMENT_WHOLE]     /*␍␤   Silly multiline comment.␍␤␍␤   Oh yes.␍␤␍␤   Really␍␤*/
32   [NONE]              