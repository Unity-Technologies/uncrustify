Line [Parent]            Text
1    [NONE]              
2    [FUNC_DEF]          int
2    [NONE]              foo1
2    [FUNC_DEF]          (
2    [NONE]              int
2    [NONE]              bar
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
6    [NONE]              if
6    [IF]                (
6    [NONE]              b
6    [IF]                )
6    [NONE]              
7    [IF]                {
7    [NONE]              
8    [NONE]              if
8    [IF]                (
8    [NONE]              a
8    [IF]                )
8    [NONE]              
9    [IF]                {
9    [NONE]              
10   [NONE]              if
10   [IF]                (
10   [NONE]              r
10   [IF]                )
10   [NONE]              
11   [IF]                {
11   [NONE]              
12   [NONE]              return
12   [RETURN]            (
12   [NONE]              r
12   [RETURN]            )
12   [NONE]              ;
12   [COMMENT_END]       /* cool */
12   [NONE]              
13   [IF]                }
13   [NONE]              
14   [NONE]              else
14   [COMMENT_END]       /* if (r) */
14   [NONE]              
15   [ELSE]              {
15   [NONE]              
16   [NONE]              return
16   [RETURN]            (
16   [NONE]              bar
16   [RETURN]            )
16   [NONE]              ;
16   [COMMENT_END]       /* uncool */
16   [NONE]              
17   [ELSE]              }
17   [COMMENT_END]       /* if (r) */
17   [NONE]              
18   [IF]                }
18   [COMMENT_END]       /* if (a) */
18   [NONE]              
19   [IF]                }
19   [COMMENT_END]       /* if (b) */
19   [NONE]              
20   [IF]                }
20   [COMMENT_END]       /* if (bar) */
20   [NONE]              
22   [NONE]              return
22   [RETURN]            (
22   [NONE]              -
22   [NONE]              1
22   [RETURN]            )
22   [NONE]              ;
22   [NONE]              
23   [FUNC_DEF]          }
23   [COMMENT_END]       /* foo */
23   [NONE]              
25   [FUNC_DEF]          int
25   [NONE]              foo2
25   [FUNC_DEF]          (
25   [NONE]              int
25   [NONE]              bar
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
29   [NONE]              if
29   [IF]                (
29   [NONE]              b
29   [IF]                )
29   [NONE]              
30   [IF]                {
30   [NONE]              
31   [NONE]              if
31   [IF]                (
31   [NONE]              a
31   [IF]                )
31   [NONE]              
32   [IF]                {
32   [NONE]              
33   [NONE]              if
33   [IF]                (
33   [NONE]              r
33   [IF]                )
33   [NONE]              
34   [IF]                {
34   [NONE]              
35   [NONE]              return
35   [RETURN]            (
35   [NONE]              r
35   [RETURN]            )
35   [NONE]              ;
35   [NONE]              
36   [IF]                }
36   [NONE]              
37   [NONE]              else
37   [NONE]              
38   [ELSE]              {
38   [NONE]              
39   [NONE]              return
39   [RETURN]            (
39   [NONE]              bar
39   [RETURN]            )
39   [NONE]              ;
39   [NONE]              
40   [ELSE]              }
40   [COMMENT_END]       /* if (r) */
40   [NONE]              
41   [IF]                }
41   [COMMENT_END]       /* if (a) */
41   [NONE]              
42   [IF]                }
42   [COMMENT_END]       /* if (b) */
42   [NONE]              
43   [IF]                }
43   [COMMENT_END]       /* if (bar) */
43   [NONE]              
45   [NONE]              return
45   [RETURN]            (
45   [NONE]              -
45   [NONE]              1
45   [RETURN]            )
45   [NONE]              ;
45   [NONE]              
46   [FUNC_DEF]          }
46   [COMMENT_END]       /* foo */
46   [NONE]              