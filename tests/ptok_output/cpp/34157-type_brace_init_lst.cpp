Line [Parent]            Text
1    [COMMENT_WHOLE]     // Uncrustify does not process the intention of an using alias,
1    [NONE]              
2    [COMMENT_WHOLE]     // unknown_kw will therefore no be parsed as known keyword
2    [NONE]              
3    [NONE]              using
3    [NONE]              unknown_kw
3    [NONE]              =
3    [NONE]              int
3    [NONE]              ;
3    [NONE]              
5    [FUNC_DEF]          int
5    [NONE]              main
5    [FUNC_DEF]          (
5    [FUNC_DEF]          )
5    [NONE]              
6    [FUNC_DEF]          {
6    [NONE]              
7    [COMMENT_WHOLE]     // 'int' is a known c++ keyword
7    [NONE]              
8    [NONE]              auto
8    [NONE]              a0
8    [NONE]              =
8    [NONE]              int
8    [BRACED_INIT_LIST]    {
8    [NONE]              1
8    [NONE]              
8    [BRACED_INIT_LIST]    }
8    [NONE]              ;
8    [NONE]              
9    [NONE]              auto
9    [NONE]              b0
9    [NONE]              =
9    [NONE]              unknown_kw
9    [BRACED_INIT_LIST]    {
9    [NONE]              2
9    [NONE]              
9    [BRACED_INIT_LIST]    }
9    [NONE]              ;
9    [NONE]              
10   [NONE]              auto
10   [NONE]              c0
10   [NONE]              =
10   [NONE]              ::
10   [NONE]              unknown_kw
10   [BRACED_INIT_LIST]    {
10   [NONE]              3
10   [NONE]              
10   [BRACED_INIT_LIST]    }
10   [NONE]              ;
10   [NONE]              
11   [NONE]              auto
11   [NONE]              d0
11   [NONE]              =
11   [C_CAST]            (
11   [C_CAST]            int
11   [C_CAST]            )
11   [NONE]              unknown_kw
11   [BRACED_INIT_LIST]    {
11   [NONE]              4
11   [NONE]              
11   [BRACED_INIT_LIST]    }
11   [NONE]              ;
11   [NONE]              
12   [NONE]              auto
12   [NONE]              e0
12   [NONE]              =
12   [C_CAST]            (
12   [C_CAST]            int
12   [C_CAST]            )
12   [NONE]              ::
12   [NONE]              unknown_kw
12   [BRACED_INIT_LIST]    {
12   [NONE]              5
12   [NONE]              
12   [BRACED_INIT_LIST]    }
12   [NONE]              ;
12   [NONE]              
13   [NONE]              auto
13   [NONE]              f0
13   [NONE]              =
13   [NONE]              static_cast
13   [TYPE_CAST]         <
13   [NONE]              int
13   [TYPE_CAST]         >
13   [TYPE_CAST]         (
13   [NONE]              unknown_kw
13   [BRACED_INIT_LIST]    {
13   [NONE]              6
13   [NONE]              
13   [BRACED_INIT_LIST]    }
13   [TYPE_CAST]         )
13   [NONE]              ;
13   [NONE]              
14   [NONE]              auto
14   [NONE]              g0
14   [NONE]              =
14   [NONE]              static_cast
14   [TYPE_CAST]         <
14   [NONE]              int
14   [TYPE_CAST]         >
14   [TYPE_CAST]         (
14   [NONE]              ::
14   [NONE]              unknown_kw
14   [BRACED_INIT_LIST]    {
14   [NONE]              7
14   [NONE]              
14   [BRACED_INIT_LIST]    }
14   [TYPE_CAST]         )
14   [NONE]              ;
14   [NONE]              
16   [NONE]              auto
16   [NONE]              a1
16   [NONE]              =
16   [NONE]              int
16   [BRACED_INIT_LIST]    {
16   [NONE]              1
16   [NONE]              
16   [BRACED_INIT_LIST]    }
16   [NONE]              ;
16   [NONE]              
17   [NONE]              auto
17   [NONE]              b1
17   [NONE]              =
17   [NONE]              unknown_kw
17   [BRACED_INIT_LIST]    {
17   [NONE]              2
17   [NONE]              
17   [BRACED_INIT_LIST]    }
17   [NONE]              ;
17   [NONE]              
18   [NONE]              auto
18   [NONE]              c1
18   [NONE]              =
18   [NONE]              ::
18   [NONE]              unknown_kw
18   [BRACED_INIT_LIST]    {
18   [NONE]              3
18   [NONE]              
18   [BRACED_INIT_LIST]    }
18   [NONE]              ;
18   [NONE]              
19   [NONE]              auto
19   [NONE]              d1
19   [NONE]              =
19   [C_CAST]            (
19   [C_CAST]            int
19   [C_CAST]            )
19   [NONE]              unknown_kw
19   [BRACED_INIT_LIST]    {
19   [NONE]              4
19   [NONE]              
19   [BRACED_INIT_LIST]    }
19   [NONE]              ;
19   [NONE]              
20   [NONE]              auto
20   [NONE]              e1
20   [NONE]              =
20   [C_CAST]            (
20   [C_CAST]            int
20   [C_CAST]            )
20   [NONE]              ::
20   [NONE]              unknown_kw
20   [BRACED_INIT_LIST]    {
20   [NONE]              5
20   [NONE]              
20   [BRACED_INIT_LIST]    }
20   [NONE]              ;
20   [NONE]              
21   [NONE]              auto
21   [NONE]              f1
21   [NONE]              =
21   [NONE]              static_cast
21   [TYPE_CAST]         <
21   [NONE]              int
21   [TYPE_CAST]         >
21   [TYPE_CAST]         (
21   [NONE]              unknown_kw
21   [BRACED_INIT_LIST]    {
21   [NONE]              6
21   [NONE]              
21   [BRACED_INIT_LIST]    }
21   [TYPE_CAST]         )
21   [NONE]              ;
21   [NONE]              
22   [NONE]              auto
22   [NONE]              g1
22   [NONE]              =
22   [NONE]              static_cast
22   [TYPE_CAST]         <
22   [NONE]              int
22   [TYPE_CAST]         >
22   [TYPE_CAST]         (
22   [NONE]              ::
22   [NONE]              unknown_kw
22   [BRACED_INIT_LIST]    {
22   [NONE]              7
22   [NONE]              
22   [BRACED_INIT_LIST]    }
22   [TYPE_CAST]         )
22   [NONE]              ;
22   [NONE]              
26   [NONE]              auto
26   [NONE]              a2
26   [NONE]              =
26   [NONE]              int
26   [NONE]              
28   [BRACED_INIT_LIST]    {
28   [NONE]              1
28   [NONE]              
28   [BRACED_INIT_LIST]    }
28   [NONE]              ;
28   [NONE]              
29   [NONE]              auto
29   [NONE]              b2
29   [NONE]              =
29   [NONE]              unknown_kw
29   [NONE]              
31   [BRACED_INIT_LIST]    {
31   [NONE]              2
31   [NONE]              
31   [BRACED_INIT_LIST]    }
31   [NONE]              ;
31   [NONE]              
32   [NONE]              auto
32   [NONE]              c2
32   [NONE]              =
32   [NONE]              ::
32   [NONE]              unknown_kw
32   [NONE]              
34   [BRACED_INIT_LIST]    {
34   [NONE]              3
34   [NONE]              
34   [BRACED_INIT_LIST]    }
34   [NONE]              ;
34   [NONE]              
35   [NONE]              auto
35   [NONE]              d2
35   [NONE]              =
35   [C_CAST]            (
35   [C_CAST]            int
35   [C_CAST]            )
35   [NONE]              unknown_kw
35   [NONE]              
37   [BRACED_INIT_LIST]    {
37   [NONE]              4
37   [NONE]              
37   [BRACED_INIT_LIST]    }
37   [NONE]              ;
37   [NONE]              
38   [NONE]              auto
38   [NONE]              e2
38   [NONE]              =
38   [C_CAST]            (
38   [C_CAST]            int
38   [C_CAST]            )
38   [NONE]              ::
38   [NONE]              unknown_kw
38   [NONE]              
40   [BRACED_INIT_LIST]    {
40   [NONE]              5
40   [NONE]              
40   [BRACED_INIT_LIST]    }
40   [NONE]              ;
40   [NONE]              
41   [NONE]              auto
41   [NONE]              f2
41   [NONE]              =
41   [NONE]              static_cast
41   [TYPE_CAST]         <
41   [NONE]              int
41   [TYPE_CAST]         >
41   [TYPE_CAST]         (
41   [NONE]              unknown_kw
41   [NONE]              
43   [BRACED_INIT_LIST]    {
43   [NONE]              6
43   [NONE]              
43   [BRACED_INIT_LIST]    }
43   [TYPE_CAST]         )
43   [NONE]              ;
43   [NONE]              
44   [NONE]              auto
44   [NONE]              g2
44   [NONE]              =
44   [NONE]              static_cast
44   [TYPE_CAST]         <
44   [NONE]              int
44   [TYPE_CAST]         >
44   [TYPE_CAST]         (
44   [NONE]              ::
44   [NONE]              unknown_kw
44   [NONE]              
46   [BRACED_INIT_LIST]    {
46   [NONE]              7
46   [NONE]              
46   [BRACED_INIT_LIST]    }
46   [TYPE_CAST]         )
46   [NONE]              ;
46   [NONE]              
50   [NONE]              auto
50   [NONE]              a1
50   [NONE]              =
50   [NONE]              int
50   [BRACED_INIT_LIST]    {
50   [NONE]              
52   [NONE]              1
52   [NONE]              
54   [BRACED_INIT_LIST]    }
54   [NONE]              ;
54   [NONE]              
55   [NONE]              auto
55   [NONE]              b1
55   [NONE]              =
55   [NONE]              unknown_kw
55   [BRACED_INIT_LIST]    {
55   [NONE]              
57   [NONE]              2
57   [NONE]              
59   [BRACED_INIT_LIST]    }
59   [NONE]              ;
59   [NONE]              
60   [NONE]              auto
60   [NONE]              c1
60   [NONE]              =
60   [NONE]              ::
60   [NONE]              unknown_kw
60   [BRACED_INIT_LIST]    {
60   [NONE]              
62   [NONE]              3
62   [NONE]              
64   [BRACED_INIT_LIST]    }
64   [NONE]              ;
64   [NONE]              
65   [NONE]              auto
65   [NONE]              d1
65   [NONE]              =
65   [C_CAST]            (
65   [C_CAST]            int
65   [C_CAST]            )
65   [NONE]              unknown_kw
65   [BRACED_INIT_LIST]    {
65   [NONE]              
67   [NONE]              4
67   [NONE]              
69   [BRACED_INIT_LIST]    }
69   [NONE]              ;
69   [NONE]              
70   [NONE]              auto
70   [NONE]              e1
70   [NONE]              =
70   [C_CAST]            (
70   [C_CAST]            int
70   [C_CAST]            )
70   [NONE]              ::
70   [NONE]              unknown_kw
70   [BRACED_INIT_LIST]    {
70   [NONE]              
72   [NONE]              5
72   [NONE]              
74   [BRACED_INIT_LIST]    }
74   [NONE]              ;
74   [NONE]              
75   [NONE]              auto
75   [NONE]              f1
75   [NONE]              =
75   [NONE]              static_cast
75   [TYPE_CAST]         <
75   [NONE]              int
75   [TYPE_CAST]         >
75   [TYPE_CAST]         (
75   [NONE]              unknown_kw
75   [BRACED_INIT_LIST]    {
75   [NONE]              
77   [NONE]              6
77   [NONE]              
79   [BRACED_INIT_LIST]    }
79   [TYPE_CAST]         )
79   [NONE]              ;
79   [NONE]              
80   [NONE]              auto
80   [NONE]              g1
80   [NONE]              =
80   [NONE]              static_cast
80   [TYPE_CAST]         <
80   [NONE]              int
80   [TYPE_CAST]         >
80   [TYPE_CAST]         (
80   [NONE]              ::
80   [NONE]              unknown_kw
80   [BRACED_INIT_LIST]    {
80   [NONE]              
82   [NONE]              7
82   [NONE]              
84   [BRACED_INIT_LIST]    }
84   [TYPE_CAST]         )
84   [NONE]              ;
84   [NONE]              
86   [NONE]              return
86   [NONE]              1
86   [NONE]              ;
86   [NONE]              
87   [FUNC_DEF]          }