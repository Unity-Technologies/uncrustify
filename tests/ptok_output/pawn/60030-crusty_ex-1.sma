Line [Parent]            Text
1    [NONE]              public
1    [NONE]              hudtext16
1    [FUNC_DEF]          (
1    [NONE]              textblock
1    [NONE]              []
1    [NONE]              ,
1    [NONE]              colr
1    [NONE]              ,
1    [NONE]              colg
1    [NONE]              ,
1    [NONE]              colb
1    [NONE]              ,
1    [NONE]              posx
1    [NONE]              ,
1    [NONE]              posy
1    [NONE]              ,
1    [NONE]              screen
1    [NONE]              ,
1    [NONE]              time
1    [NONE]              ,
1    [NONE]              id
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              new
3    [NONE]              y
3    [NONE]              ;
3    [NONE]              
4    [NONE]              if
4    [IF]                (
4    [NONE]              contain
4    [FUNC_CALL]         (
4    [NONE]              textblock
4    [NONE]              ,
4    [NONE]              "^n"
4    [FUNC_CALL]         )
4    [NONE]              ==
4    [NONE]              -
4    [NONE]              1
4    [IF]                )
4    [COMMENT_END]       // if there is no linebreak in the text, we can just show it as it is
4    [NONE]              
4    [IF]                {
4    [NONE]              
5    [NONE]              set_hudmessage
5    [FUNC_CALL]         (
5    [NONE]              colr
5    [NONE]              ,
5    [NONE]              colg
5    [NONE]              ,
5    [NONE]              colb
5    [NONE]              ,
5    [NONE]              float
5    [FUNC_CALL]         (
5    [NONE]              posx
5    [FUNC_CALL]         )
5    [NONE]              /
5    [NONE]              1000.0
5    [NONE]              ,
5    [NONE]              float
5    [FUNC_CALL]         (
5    [NONE]              posy
5    [FUNC_CALL]         )
5    [NONE]              /
5    [NONE]              1000.0
5    [NONE]              ,
5    [NONE]              0
5    [NONE]              ,
5    [NONE]              6.0
5    [NONE]              ,
5    [NONE]              float
5    [FUNC_CALL]         (
5    [NONE]              time
5    [FUNC_CALL]         )
5    [NONE]              ,
5    [NONE]              0.2
5    [NONE]              ,
5    [NONE]              0.2
5    [NONE]              ,
5    [NONE]              screen
5    [FUNC_CALL]         )
5    [NONE]              ;
5    [NONE]              
6    [NONE]              show_hudmessage
6    [FUNC_CALL]         (
6    [NONE]              id
6    [NONE]              ,
6    [NONE]              textblock
6    [FUNC_CALL]         )
6    [NONE]              ;
6    [NONE]              
7    [IF]                }
7    [NONE]              
8    [NONE]              else
8    [COMMENT_END]       // more than one line
8    [NONE]              
8    [ELSE]              {
8    [NONE]              
9    [NONE]              new
9    [NONE]              out
9    [NONE]              [
9    [NONE]              128
9    [NONE]              ]
9    [NONE]              ,
9    [NONE]              rowcounter
9    [NONE]              =
9    [NONE]              0
9    [NONE]              ,
9    [NONE]              tmp
9    [NONE]              [
9    [NONE]              512
9    [NONE]              ]
9    [NONE]              ,
9    [NONE]              textremain
9    [NONE]              =
9    [NONE]              true
9    [NONE]              ;
9    [NONE]              y
9    [NONE]              =
9    [NONE]              screen
9    [NONE]              ;
9    [NONE]              
11   [NONE]              new
11   [NONE]              i
11   [NONE]              =
11   [NONE]              contain
11   [FUNC_CALL]         (
11   [NONE]              textblock
11   [NONE]              ,
11   [NONE]              "^n"
11   [FUNC_CALL]         )
11   [NONE]              ;
11   [NONE]              
13   [NONE]              do
13   [NONE]              
14   [DO]                {
14   [NONE]              
15   [DO]                }
15   [NONE]              
16   [NONE]              while
16   [WHILE_OF_DO]       (
16   [NONE]              textremain
16   [NONE]              >
16   [NONE]              0
16   [WHILE_OF_DO]       )
16   [WHILE_OF_DO]       ;
16   [NONE]              
18   [NONE]              copy
18   [FUNC_CALL]         (
18   [NONE]              out
18   [NONE]              ,
18   [NONE]              i
18   [NONE]              ,
18   [NONE]              textblock
18   [FUNC_CALL]         )
18   [NONE]              ;
18   [COMMENT_END]       // we need to get the first line of text before the loop
18   [NONE]              
20   [NONE]              do
20   [NONE]              
21   [DO]                {
21   [NONE]              
22   [DO]                }
22   [NONE]              
23   [NONE]              while
23   [WHILE_OF_DO]       (
23   [NONE]              textremain
23   [WHILE_OF_DO]       )
23   [WHILE_OF_DO]       ;
23   [NONE]              
24   [ELSE]              }
24   [NONE]              
25   [NONE]              return
25   [NONE]              screen
25   [NONE]              -
25   [NONE]              y
25   [NONE]              ;
25   [COMMENT_END]       // we will return how many screens of text we printed
25   [NONE]              
26   [FUNC_DEF]          }
26   [NONE]              