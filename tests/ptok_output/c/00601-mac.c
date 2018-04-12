Line [Parent]            Text
1    [COMMENT_WHOLE]     /**␍ * This is your typical header comment␍ */
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
18   [NONE]              return
18   [RETURN]            (
18   [NONE]              res
18   [RETURN]            )
18   [NONE]              ;
18   [NONE]              
19   [FUNC_DEF]          }
19   [NONE]              
21   [COMMENT_WHOLE]     // col1 comment in level 0
21   [NONE]              