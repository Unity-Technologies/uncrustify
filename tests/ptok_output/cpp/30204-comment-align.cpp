Line [Parent]            Text
1    [NONE]              template
1    [TEMPLATE]          <
1    [NONE]              class
1    [NONE]              T
1    [TEMPLATE]          >
1    [NONE]              
2    [FUNC_DEF]          inline
2    [FUNC_DEF]          void
2    [NONE]              
3    [NONE]              x3
3    [FUNC_DEF]          (
3    [NONE]              T
3    [NONE]              &
3    [NONE]              a
3    [NONE]              ,
3    [NONE]              T
3    [NONE]              &
3    [NONE]              b
3    [NONE]              ,
3    [NONE]              T
3    [NONE]              &
3    [NONE]              c
3    [FUNC_DEF]          )
3    [NONE]              
4    [FUNC_DEF]          {
4    [NONE]              
5    [NONE]              T
5    [NONE]              temp
5    [NONE]              ;
5    [NONE]              
6    [NONE]              if
6    [IF]                (
6    [NONE]              b
6    [NONE]              <
6    [NONE]              a
6    [IF]                )
6    [NONE]              
7    [IF]                {
7    [NONE]              
8    [NONE]              if
8    [IF]                (
8    [NONE]              c
8    [NONE]              <
8    [NONE]              a
8    [IF]                )
8    [NONE]              
9    [IF]                {
9    [COMMENT_END]       // b , c < a
9    [NONE]              
10   [NONE]              if
10   [IF]                (
10   [NONE]              b
10   [NONE]              <
10   [NONE]              c
10   [IF]                )
10   [NONE]              
11   [IF]                {
11   [COMMENT_END]       // b < c < a
11   [NONE]              
12   [NONE]              temp
12   [NONE]              =
12   [NONE]              a
12   [NONE]              ;
12   [NONE]              
13   [NONE]              a
13   [NONE]              =
13   [NONE]              b
13   [NONE]              ;
13   [NONE]              
14   [NONE]              b
14   [NONE]              =
14   [NONE]              c
14   [NONE]              ;
14   [NONE]              
15   [NONE]              c
15   [NONE]              =
15   [NONE]              temp
15   [NONE]              ;
15   [NONE]              
16   [IF]                }
16   [NONE]              
17   [NONE]              else
17   [NONE]              
18   [ELSE]              {
18   [COMMENT_END]       // c <=b < a
18   [NONE]              
19   [NONE]              std
19   [NONE]              ::
19   [NONE]              swap
19   [FUNC_CALL]         (
19   [NONE]              c
19   [NONE]              ,
19   [NONE]              a
19   [FUNC_CALL]         )
19   [NONE]              ;
19   [NONE]              
20   [ELSE]              }
20   [NONE]              
21   [IF]                }
21   [NONE]              
22   [NONE]              else
22   [NONE]              
23   [ELSE]              {
23   [COMMENT_END]       // b < a <=c
23   [NONE]              
24   [COMMENT_WHOLE]     // second line of comment
24   [NONE]              
25   [NONE]              std
25   [NONE]              ::
25   [NONE]              swap
25   [FUNC_CALL]         (
25   [NONE]              a
25   [NONE]              ,
25   [NONE]              b
25   [FUNC_CALL]         )
25   [NONE]              ;
25   [NONE]              
26   [ELSE]              }
26   [NONE]              
27   [IF]                }
27   [NONE]              
28   [NONE]              0
28   [NONE]              ;
28   [NONE]              
29   [NONE]              0
29   [NONE]              ;
29   [NONE]              
30   [NONE]              0
30   [NONE]              ;
30   [NONE]              
31   [NONE]              if
31   [IF]                (
31   [NONE]              1
31   [IF]                )
31   [IF]                
31   [COMMENT_END]       // always
31   [NONE]              
32   [NONE]              do_something
32   [FUNC_CALL]         (
32   [FUNC_CALL]         )
32   [NONE]              ;
32   [IF]                
32   [NONE]              
33   [FUNC_DEF]          }
33   [NONE]              