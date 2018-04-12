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
9    [COMMENT_WHOLE]     /* multi-line comment␤    */
10   [NONE]              
11   [NONE]              idx
11   [NONE]              =
11   [NONE]              50
11   [NONE]              ;
11   [NONE]              
12   [COMMENT_WHOLE]     /* single line comment */
12   [NONE]              
13   [NONE]              for
13   [FOR]               (
13   [NONE]              idx
13   [NONE]              =
13   [NONE]              1
13   [FOR]               ;
13   [NONE]              idx
13   [NONE]              <
13   [NONE]              bar
13   [FOR]               ;
13   [NONE]              idx
13   [NONE]              ++
13   [FOR]               )
13   [NONE]              
13   [FOR]               {
13   [NONE]              
14   [COMMENT_WHOLE]     /* comment in virtual braces */
14   [NONE]              
15   [NONE]              res
15   [NONE]              +=
15   [NONE]              idx
15   [NONE]              ;
15   [NONE]              
15   [FOR]               }
15   [NONE]              
17   [NONE]              res
17   [NONE]              *=
17   [NONE]              idx
17   [NONE]              ;
17   [COMMENT_END]       // some comment
17   [NONE]              
19   [COMMENT_WHOLE]     // almost continued, but a NL in between
19   [NONE]              
21   [NONE]              i
21   [NONE]              ++
21   [NONE]              ;
21   [NONE]              
22   [COMMENT_WHOLE]     // col1 comment in level 1
22   [NONE]              
23   [COMMENT_WHOLE]     // second comment
23   [NONE]              
24   [NONE]              return
24   [RETURN]            (
24   [NONE]              res
24   [RETURN]            )
24   [NONE]              ;
24   [NONE]              
25   [FUNC_DEF]          }
25   [NONE]              
27   [COMMENT_WHOLE]     // col1 comment in level 0
27   [NONE]              
28   [COMMENT_WHOLE]     // and another
28   [NONE]              