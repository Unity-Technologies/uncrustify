Line [Parent]            Text
1    [NONE]              
2    [FUNC_PROTO]        void
2    [NONE]              func_a
2    [FUNC_PROTO]        (
2    [NONE]              int
2    [NONE]              a
2    [NONE]              ,
2    [NONE]              string
2    [NONE]              b
2    [NONE]              ,
2    [NONE]              char
2    [NONE]              c
2    [FUNC_PROTO]        )
2    [FUNC_PROTO]        ;
2    [NONE]              
4    [FUNC_PROTO]        void
4    [NONE]              func_b
4    [FUNC_PROTO]        (
4    [NONE]              int
4    [NONE]              a
4    [NONE]              ,
4    [NONE]              
5    [NONE]              string
5    [NONE]              b
5    [NONE]              ,
5    [NONE]              char
5    [NONE]              c
5    [FUNC_PROTO]        )
5    [FUNC_PROTO]        ;
5    [NONE]              
7    [FUNC_PROTO]        void
7    [NONE]              func_c
7    [FUNC_PROTO]        (
7    [NONE]              int
7    [NONE]              a
7    [NONE]              ,
7    [NONE]              string
7    [NONE]              b
7    [NONE]              ,
7    [NONE]              char
7    [NONE]              c
7    [NONE]              
8    [FUNC_PROTO]        )
8    [FUNC_PROTO]        ;
8    [NONE]              
10   [FUNC_PROTO]        void
10   [NONE]              func_d
10   [FUNC_PROTO]        (
10   [NONE]              int
10   [NONE]              aaaaaaaaaaaaaa
10   [NONE]              ,
10   [NONE]              string
10   [NONE]              bbbbbbbbbbbbbb
10   [NONE]              ,
10   [NONE]              
10   [NONE]              char
10   [NONE]              cccccccccccccccccc
10   [FUNC_PROTO]        )
10   [FUNC_PROTO]        ;
10   [NONE]              
12   [FUNC_DEF]          void
12   [NONE]              func_a
12   [FUNC_DEF]          (
12   [NONE]              int
12   [NONE]              a
12   [NONE]              ,
12   [NONE]              string
12   [NONE]              b
12   [NONE]              ,
12   [NONE]              char
12   [NONE]              c
12   [FUNC_DEF]          )
12   [NONE]              
13   [FUNC_DEF]          {
13   [NONE]              
14   [NONE]              return
14   [NONE]              ;
14   [NONE]              
15   [FUNC_DEF]          }
15   [NONE]              
17   [FUNC_DEF]          void
17   [NONE]              func_b
17   [FUNC_DEF]          (
17   [NONE]              int
17   [NONE]              a
17   [NONE]              ,
17   [NONE]              
18   [NONE]              string
18   [NONE]              b
18   [NONE]              ,
18   [NONE]              char
18   [NONE]              c
18   [FUNC_DEF]          )
18   [NONE]              
19   [FUNC_DEF]          {
19   [NONE]              
20   [NONE]              return
20   [NONE]              ;
20   [NONE]              
21   [FUNC_DEF]          }
21   [NONE]              
23   [FUNC_DEF]          void
23   [NONE]              func_c
23   [FUNC_DEF]          (
23   [NONE]              int
23   [NONE]              a
23   [NONE]              ,
23   [NONE]              string
23   [NONE]              b
23   [NONE]              ,
23   [NONE]              char
23   [NONE]              c
23   [NONE]              
24   [FUNC_DEF]          )
24   [NONE]              
25   [FUNC_DEF]          {
25   [NONE]              
26   [NONE]              return
26   [NONE]              ;
26   [NONE]              
27   [FUNC_DEF]          }
27   [NONE]              
29   [FUNC_DEF]          void
29   [NONE]              func_d
29   [FUNC_DEF]          (
29   [NONE]              int
29   [NONE]              aaaaaaaaaaaaaa
29   [NONE]              ,
29   [NONE]              string
29   [NONE]              bbbbbbbbbbbbbb
29   [NONE]              ,
29   [NONE]              
29   [NONE]              char
29   [NONE]              cccccccccccccccccc
29   [FUNC_DEF]          )
29   [NONE]              
30   [FUNC_DEF]          {
30   [NONE]              
31   [NONE]              return
31   [NONE]              ;
31   [NONE]              
32   [FUNC_DEF]          }
32   [NONE]              
34   [FUNC_DEF]          void
34   [NONE]              func_call
34   [FUNC_DEF]          (
34   [FUNC_DEF]          )
34   [NONE]              
35   [FUNC_DEF]          {
35   [NONE]              
36   [NONE]              func_a
36   [FUNC_CALL]         (
36   [NONE]              1
36   [NONE]              ,
36   [NONE]              2
36   [NONE]              ,
36   [NONE]              3
36   [FUNC_CALL]         )
36   [NONE]              ;
36   [NONE]              
37   [NONE]              func_b
37   [FUNC_CALL]         (
37   [NONE]              4
37   [NONE]              ,
37   [NONE]              
38   [NONE]              5
38   [NONE]              ,
38   [NONE]              6
38   [FUNC_CALL]         )
38   [NONE]              ;
38   [NONE]              
39   [NONE]              func_c
39   [FUNC_CALL]         (
39   [NONE]              7
39   [NONE]              ,
39   [NONE]              8
39   [NONE]              ,
39   [NONE]              9
39   [NONE]              
40   [FUNC_CALL]         )
40   [NONE]              ;
40   [NONE]              
42   [NONE]              func_d
42   [FUNC_CALL]         (
42   [NONE]              "aaaaaaaaaaaaaaaaaa"
42   [NONE]              ,
42   [NONE]              "bbbbbbbbbbbbbbbbbb"
42   [NONE]              ,
42   [NONE]              
42   [NONE]              "cccccccccccccccccccccc"
42   [FUNC_CALL]         )
42   [NONE]              ;
42   [NONE]              
43   [FUNC_DEF]          }
43   [NONE]              