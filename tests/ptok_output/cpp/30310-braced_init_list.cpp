Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              include
1    [NONE]              <vector>
1    [NONE]              
2    [PP_INCLUDE]        #
2    [NONE]              include
2    [NONE]              <algorithm>
2    [NONE]              
4    [NONE]              using
4    [NONE]              some_type
4    [NONE]              =
4    [NONE]              int
4    [NONE]              ;
4    [NONE]              
5    [NONE]              namespace
5    [NAMESPACE]         Ns
5    [NAMESPACE]         {
5    [NONE]              
6    [NONE]              using
6    [NONE]              some_type
6    [NONE]              =
6    [NONE]              int
6    [NONE]              ;
6    [NONE]              
7    [NAMESPACE]         }
7    [NONE]              
9    [NONE]              class
9    [CLASS]             BracedInitListBase
9    [CLASS]             {
9    [NONE]              
10   [NONE]              public
10   [NONE]              :
10   [NONE]              
11   [NONE]              BracedInitListBase
11   [FUNC_CLASS_DEF]    (
11   [FUNC_CLASS_DEF]    )
11   [NONE]              
12   [NONE]              :
12   [NONE]              a
12   [FUNC_CTOR_VAR]     {
12   [NONE]              int
12   [BRACED_INIT_LIST]    {
12   [NONE]              1
12   [BRACED_INIT_LIST]    }
12   [FUNC_CTOR_VAR]     }
12   [NONE]              ,
12   [NONE]              
13   [NONE]              b
13   [FUNC_CTOR_VAR]     (
13   [NONE]              int
13   [CPP_CAST]          (
13   [NONE]              some_type
13   [FUNC_CTOR_VAR]     (
13   [FUNC_CTOR_VAR]     1
13   [FUNC_CTOR_VAR]     )
13   [CPP_CAST]          )
13   [FUNC_CTOR_VAR]     )
13   [NONE]              ,
13   [NONE]              
14   [NONE]              c
14   [FUNC_CTOR_VAR]     (
14   [NONE]              int
14   [BRACED_INIT_LIST]    {
14   [NONE]              some_type
14   [FUNC_CTOR_VAR]     (
14   [FUNC_CTOR_VAR]     1
14   [FUNC_CTOR_VAR]     )
14   [BRACED_INIT_LIST]    }
14   [FUNC_CTOR_VAR]     )
14   [NONE]              ,
14   [NONE]              
15   [NONE]              d
15   [FUNC_CTOR_VAR]     {
15   [NONE]              int
15   [CPP_CAST]          (
15   [NONE]              some_type
15   [FUNC_CTOR_VAR]     (
15   [FUNC_CTOR_VAR]     1
15   [FUNC_CTOR_VAR]     )
15   [CPP_CAST]          )
15   [FUNC_CTOR_VAR]     }
15   [NONE]              ,
15   [NONE]              
16   [NONE]              e
16   [FUNC_CTOR_VAR]     {
16   [NONE]              some_type
16   [BRACED_INIT_LIST]    {
16   [NONE]              some_type
16   [BRACED_INIT_LIST]    {
16   [NONE]              a
16   [BRACED_INIT_LIST]    }
16   [BRACED_INIT_LIST]    }
16   [FUNC_CTOR_VAR]     }
16   [NONE]              
17   [FUNC_CLASS_DEF]    {
17   [NONE]              
18   [FUNC_CLASS_DEF]    }
18   [NONE]              
20   [FUNC_DEF]          virtual
20   [FUNC_DEF]          int
20   [NONE]              getA
20   [FUNC_DEF]          (
20   [FUNC_DEF]          )
20   [FUNC_DEF]          const
20   [FUNC_DEF]          {
20   [NONE]              
21   [NONE]              return
21   [NONE]              a
21   [NONE]              ;
21   [NONE]              
22   [FUNC_DEF]          }
22   [NONE]              
23   [NONE]              private
23   [NONE]              :
23   [NONE]              
24   [NONE]              int
24   [NONE]              a
24   [BRACED_INIT_LIST]    {
24   [BRACED_INIT_LIST]    }
24   [NONE]              ;
24   [NONE]              
25   [NONE]              int
25   [NONE]              b
25   [BRACED_INIT_LIST]    {
25   [NONE]              1
25   [BRACED_INIT_LIST]    }
25   [NONE]              ;
25   [NONE]              
26   [NONE]              int
26   [NONE]              c
26   [NONE]              =
26   [BRACED_INIT_LIST]    {
26   [NONE]              1
26   [BRACED_INIT_LIST]    }
26   [NONE]              ;
26   [NONE]              
27   [NONE]              int
27   [NONE]              d
27   [NONE]              =
27   [NONE]              int
27   [BRACED_INIT_LIST]    {
27   [NONE]              1
27   [BRACED_INIT_LIST]    }
27   [NONE]              ;
27   [NONE]              
28   [NONE]              some_type
28   [NONE]              e
28   [BRACED_INIT_LIST]    {
28   [NONE]              1
28   [BRACED_INIT_LIST]    }
28   [NONE]              ;
28   [NONE]              
29   [NONE]              some_type
29   [NONE]              f
29   [NONE]              =
29   [BRACED_INIT_LIST]    {
29   [NONE]              1
29   [BRACED_INIT_LIST]    }
29   [NONE]              ;
29   [NONE]              
30   [NONE]              some_type
30   [NONE]              g
30   [NONE]              =
30   [NONE]              some_type
30   [BRACED_INIT_LIST]    {
30   [NONE]              1
30   [BRACED_INIT_LIST]    }
30   [NONE]              ;
30   [NONE]              
31   [NONE]              std
31   [NONE]              ::
31   [NONE]              vector
31   [TEMPLATE]          <
31   [NONE]              some_type
31   [TEMPLATE]          >
31   [NONE]              h
31   [BRACED_INIT_LIST]    {
31   [NONE]              some_type
31   [BRACED_INIT_LIST]    {
31   [NONE]              4
31   [BRACED_INIT_LIST]    }
31   [NONE]              ,
31   [NONE]              5
31   [BRACED_INIT_LIST]    }
31   [NONE]              ;
31   [NONE]              
32   [NONE]              ::
32   [NONE]              std
32   [NONE]              ::
32   [NONE]              vector
32   [TEMPLATE]          <
32   [NONE]              some_type
32   [TEMPLATE]          >
32   [NONE]              i
32   [NONE]              =
32   [NONE]              ::
32   [NONE]              std
32   [NONE]              ::
32   [NONE]              vector
32   [TEMPLATE]          <
32   [NONE]              some_type
32   [TEMPLATE]          >
32   [BRACED_INIT_LIST]    {
32   [NONE]              4
32   [NONE]              ,
32   [NONE]              some_type
32   [BRACED_INIT_LIST]    {
32   [NONE]              5
32   [BRACED_INIT_LIST]    }
32   [BRACED_INIT_LIST]    }
32   [NONE]              ;
32   [NONE]              
33   [NONE]              some_type
33   [NONE]              j
33   [NONE]              =
33   [NONE]              ::
33   [NONE]              std
33   [NONE]              ::
33   [NONE]              vector
33   [TEMPLATE]          <
33   [NONE]              some_type
33   [TEMPLATE]          >
33   [BRACED_INIT_LIST]    {
33   [NONE]              4
33   [NONE]              ,
33   [NONE]              some_type
33   [BRACED_INIT_LIST]    {
33   [NONE]              5
33   [BRACED_INIT_LIST]    }
33   [BRACED_INIT_LIST]    }
33   [NONE]              [
33   [NONE]              1
33   [NONE]              ]
33   [NONE]              ;
33   [NONE]              
34   [NONE]              some_type
34   [NONE]              k
34   [NONE]              [
34   [NONE]              2
34   [NONE]              ]
34   [BRACED_INIT_LIST]    {
34   [NONE]              1
34   [NONE]              ,
34   [NONE]              2
34   [BRACED_INIT_LIST]    }
34   [NONE]              ;
34   [NONE]              
35   [NONE]              some_type
35   [NONE]              l
35   [NONE]              [
35   [NONE]              2
35   [NONE]              ]
35   [NONE]              =
35   [BRACED_INIT_LIST]    {
35   [NONE]              1
35   [NONE]              ,
35   [NONE]              2
35   [BRACED_INIT_LIST]    }
35   [NONE]              ;
35   [NONE]              
37   [NONE]              union
37   [UNION]             SomeUnion
37   [UNION]             {
37   [NONE]              
38   [NONE]              int
38   [NONE]              a
38   [NONE]              ;
38   [NONE]              
39   [NONE]              some_type
39   [NONE]              b
39   [BRACED_INIT_LIST]    {
39   [BRACED_INIT_LIST]    }
39   [NONE]              ;
39   [NONE]              
40   [UNION]             }
40   [UNION]             ;
40   [NONE]              
41   [CLASS]             }
41   [CLASS]             ;
41   [NONE]              
43   [NONE]              class
43   [CLASS]             BracedInitListDerived
43   [NONE]              :
43   [NONE]              public
43   [NONE]              BracedInitListBase
43   [CLASS]             {
43   [NONE]              
44   [NONE]              public
44   [NONE]              :
44   [NONE]              
45   [FUNC_DEF]          int
45   [NONE]              getA
45   [FUNC_DEF]          (
45   [FUNC_DEF]          )
45   [FUNC_DEF]          const
45   [FUNC_DEF]          override
45   [FUNC_DEF]          {
45   [NONE]              
46   [NONE]              return
46   [NONE]              BracedInitListBase
46   [NONE]              ::
46   [NONE]              getA
46   [FUNC_CALL]         (
46   [FUNC_CALL]         )
46   [NONE]              ;
46   [NONE]              
47   [FUNC_DEF]          }
47   [NONE]              
48   [CLASS]             }
48   [CLASS]             ;
48   [NONE]              
50   [FUNC_DEF]          some_type
50   [NONE]              inc
50   [FUNC_DEF]          (
50   [NONE]              some_type
50   [NONE]              a
50   [FUNC_DEF]          )
50   [NONE]              
51   [FUNC_DEF]          {
51   [NONE]              
52   [NONE]              return
52   [NONE]              some_type
52   [BRACED_INIT_LIST]    {
52   [NONE]              ++
52   [NONE]              a
52   [BRACED_INIT_LIST]    }
52   [NONE]              ;
52   [NONE]              
53   [FUNC_DEF]          }
53   [NONE]              
55   [FUNC_DEF]          some_type
55   [NONE]              sum
55   [FUNC_DEF]          (
55   [NONE]              some_type
55   [NONE]              a
55   [NONE]              ,
55   [NONE]              some_type
55   [NONE]              b
55   [FUNC_PROTO]        =
55   [NONE]              some_type
55   [BRACED_INIT_LIST]    {
55   [NONE]              1
55   [BRACED_INIT_LIST]    }
55   [FUNC_DEF]          )
55   [NONE]              
56   [FUNC_DEF]          {
56   [NONE]              
57   [NONE]              return
57   [NONE]              a
57   [NONE]              +
57   [NONE]              inc
57   [FUNC_CALL]         (
57   [NONE]              some_type
57   [BRACED_INIT_LIST]    {
57   [NONE]              b
57   [NONE]              -
57   [NONE]              some_type
57   [BRACED_INIT_LIST]    {
57   [NONE]              1
57   [BRACED_INIT_LIST]    }
57   [BRACED_INIT_LIST]    }
57   [FUNC_CALL]         )
57   [NONE]              ;
57   [NONE]              
58   [FUNC_DEF]          }
58   [NONE]              
60   [FUNC_DEF]          void
60   [NONE]              braced_init_list_int
60   [FUNC_DEF]          (
60   [FUNC_DEF]          )
60   [NONE]              
61   [FUNC_DEF]          {
61   [NONE]              
62   [NONE]              {
62   [NONE]              
63   [NONE]              int
63   [NONE]              a
63   [BRACED_INIT_LIST]    {
63   [BRACED_INIT_LIST]    }
63   [NONE]              ;
63   [NONE]              
64   [NONE]              int
64   [NONE]              b
64   [NONE]              =
64   [BRACED_INIT_LIST]    {
64   [BRACED_INIT_LIST]    }
64   [NONE]              ;
64   [NONE]              
65   [NONE]              int
65   [NONE]              c
65   [NONE]              =
65   [NONE]              int
65   [BRACED_INIT_LIST]    {
65   [BRACED_INIT_LIST]    }
65   [NONE]              ;
65   [NONE]              
66   [NONE]              int
66   [NONE]              d
66   [NONE]              =
66   [NONE]              int
66   [BRACED_INIT_LIST]    {
66   [NONE]              int
66   [BRACED_INIT_LIST]    {
66   [BRACED_INIT_LIST]    }
66   [BRACED_INIT_LIST]    }
66   [NONE]              ;
66   [NONE]              
67   [NONE]              int
67   [BRACED_INIT_LIST]    {
67   [BRACED_INIT_LIST]    }
67   [NONE]              ;
67   [NONE]              
68   [NONE]              int
68   [BRACED_INIT_LIST]    {
68   [NONE]              int
68   [BRACED_INIT_LIST]    {
68   [BRACED_INIT_LIST]    }
68   [BRACED_INIT_LIST]    }
68   [NONE]              ;
68   [NONE]              
69   [NONE]              }
69   [NONE]              
70   [NONE]              {
70   [NONE]              
71   [NONE]              int
71   [NONE]              a
71   [BRACED_INIT_LIST]    {
71   [NONE]              1
71   [BRACED_INIT_LIST]    }
71   [NONE]              ;
71   [NONE]              
72   [NONE]              int
72   [NONE]              b
72   [NONE]              =
72   [BRACED_INIT_LIST]    {
72   [NONE]              1
72   [BRACED_INIT_LIST]    }
72   [NONE]              ;
72   [NONE]              
73   [NONE]              int
73   [NONE]              c
73   [NONE]              =
73   [NONE]              int
73   [BRACED_INIT_LIST]    {
73   [NONE]              1
73   [BRACED_INIT_LIST]    }
73   [NONE]              ;
73   [NONE]              
74   [NONE]              int
74   [NONE]              d
74   [NONE]              =
74   [NONE]              int
74   [BRACED_INIT_LIST]    {
74   [NONE]              int
74   [BRACED_INIT_LIST]    {
74   [NONE]              1
74   [BRACED_INIT_LIST]    }
74   [BRACED_INIT_LIST]    }
74   [NONE]              ;
74   [NONE]              
75   [NONE]              int
75   [BRACED_INIT_LIST]    {
75   [NONE]              1
75   [BRACED_INIT_LIST]    }
75   [NONE]              ;
75   [NONE]              
76   [NONE]              int
76   [BRACED_INIT_LIST]    {
76   [NONE]              int
76   [BRACED_INIT_LIST]    {
76   [NONE]              1
76   [BRACED_INIT_LIST]    }
76   [BRACED_INIT_LIST]    }
76   [NONE]              ;
76   [NONE]              
77   [NONE]              }
77   [NONE]              
78   [FUNC_DEF]          }
78   [NONE]              
80   [FUNC_DEF]          void
80   [NONE]              braced_init_list_some_type
80   [FUNC_DEF]          (
80   [FUNC_DEF]          )
80   [NONE]              
81   [FUNC_DEF]          {
81   [NONE]              
82   [NONE]              {
82   [NONE]              
83   [NONE]              some_type
83   [NONE]              a
83   [BRACED_INIT_LIST]    {
83   [BRACED_INIT_LIST]    }
83   [NONE]              ;
83   [NONE]              
84   [NONE]              some_type
84   [NONE]              b
84   [NONE]              =
84   [BRACED_INIT_LIST]    {
84   [BRACED_INIT_LIST]    }
84   [NONE]              ;
84   [NONE]              
85   [NONE]              some_type
85   [NONE]              c
85   [NONE]              =
85   [NONE]              some_type
85   [BRACED_INIT_LIST]    {
85   [BRACED_INIT_LIST]    }
85   [NONE]              ;
85   [NONE]              
86   [NONE]              some_type
86   [NONE]              d
86   [NONE]              =
86   [NONE]              some_type
86   [BRACED_INIT_LIST]    {
86   [NONE]              some_type
86   [BRACED_INIT_LIST]    {
86   [BRACED_INIT_LIST]    }
86   [BRACED_INIT_LIST]    }
86   [NONE]              ;
86   [NONE]              
87   [NONE]              some_type
87   [BRACED_INIT_LIST]    {
87   [BRACED_INIT_LIST]    }
87   [NONE]              ;
87   [NONE]              
88   [NONE]              some_type
88   [BRACED_INIT_LIST]    {
88   [NONE]              some_type
88   [BRACED_INIT_LIST]    {
88   [BRACED_INIT_LIST]    }
88   [BRACED_INIT_LIST]    }
88   [NONE]              ;
88   [NONE]              
89   [NONE]              }
89   [NONE]              
90   [NONE]              {
90   [NONE]              
91   [NONE]              some_type
91   [NONE]              a
91   [BRACED_INIT_LIST]    {
91   [NONE]              1
91   [BRACED_INIT_LIST]    }
91   [NONE]              ;
91   [NONE]              
92   [NONE]              some_type
92   [NONE]              b
92   [NONE]              =
92   [BRACED_INIT_LIST]    {
92   [NONE]              1
92   [BRACED_INIT_LIST]    }
92   [NONE]              ;
92   [NONE]              
93   [NONE]              some_type
93   [NONE]              c
93   [NONE]              =
93   [NONE]              some_type
93   [BRACED_INIT_LIST]    {
93   [NONE]              1
93   [BRACED_INIT_LIST]    }
93   [NONE]              ;
93   [NONE]              
94   [NONE]              some_type
94   [NONE]              d
94   [NONE]              =
94   [NONE]              some_type
94   [BRACED_INIT_LIST]    {
94   [NONE]              some_type
94   [BRACED_INIT_LIST]    {
94   [NONE]              1
94   [BRACED_INIT_LIST]    }
94   [BRACED_INIT_LIST]    }
94   [NONE]              ;
94   [NONE]              
95   [NONE]              some_type
95   [BRACED_INIT_LIST]    {
95   [NONE]              1
95   [BRACED_INIT_LIST]    }
95   [NONE]              ;
95   [NONE]              
96   [NONE]              some_type
96   [BRACED_INIT_LIST]    {
96   [NONE]              some_type
96   [BRACED_INIT_LIST]    {
96   [NONE]              1
96   [BRACED_INIT_LIST]    }
96   [BRACED_INIT_LIST]    }
96   [NONE]              ;
96   [NONE]              
97   [NONE]              }
97   [NONE]              
98   [NONE]              {
98   [NONE]              
99   [NONE]              ::
99   [NONE]              some_type
99   [NONE]              a
99   [BRACED_INIT_LIST]    {
99   [NONE]              1
99   [BRACED_INIT_LIST]    }
99   [NONE]              ;
99   [NONE]              
100  [NONE]              ::
100  [NONE]              some_type
100  [NONE]              b
100  [NONE]              =
100  [BRACED_INIT_LIST]    {
100  [NONE]              1
100  [BRACED_INIT_LIST]    }
100  [NONE]              ;
100  [NONE]              
101  [NONE]              ::
101  [NONE]              some_type
101  [NONE]              c
101  [NONE]              =
101  [NONE]              ::
101  [NONE]              some_type
101  [BRACED_INIT_LIST]    {
101  [NONE]              1
101  [BRACED_INIT_LIST]    }
101  [NONE]              ;
101  [NONE]              
102  [NONE]              ::
102  [NONE]              some_type
102  [NONE]              d
102  [NONE]              =
102  [NONE]              ::
102  [NONE]              some_type
102  [BRACED_INIT_LIST]    {
102  [NONE]              ::
102  [NONE]              some_type
102  [BRACED_INIT_LIST]    {
102  [NONE]              1
102  [BRACED_INIT_LIST]    }
102  [BRACED_INIT_LIST]    }
102  [NONE]              ;
102  [NONE]              
103  [NONE]              ::
103  [NONE]              some_type
103  [BRACED_INIT_LIST]    {
103  [NONE]              1
103  [BRACED_INIT_LIST]    }
103  [NONE]              ;
103  [NONE]              
104  [NONE]              ::
104  [NONE]              some_type
104  [BRACED_INIT_LIST]    {
104  [NONE]              ::
104  [NONE]              some_type
104  [BRACED_INIT_LIST]    {
104  [NONE]              1
104  [BRACED_INIT_LIST]    }
104  [BRACED_INIT_LIST]    }
104  [NONE]              ;
104  [NONE]              
105  [NONE]              }
105  [NONE]              
106  [NONE]              {
106  [NONE]              
107  [NONE]              Ns
107  [NONE]              ::
107  [NONE]              some_type
107  [NONE]              a
107  [BRACED_INIT_LIST]    {
107  [NONE]              1
107  [BRACED_INIT_LIST]    }
107  [NONE]              ;
107  [NONE]              
108  [NONE]              Ns
108  [NONE]              ::
108  [NONE]              some_type
108  [NONE]              b
108  [NONE]              =
108  [BRACED_INIT_LIST]    {
108  [NONE]              1
108  [BRACED_INIT_LIST]    }
108  [NONE]              ;
108  [NONE]              
109  [NONE]              Ns
109  [NONE]              ::
109  [NONE]              some_type
109  [NONE]              c
109  [NONE]              =
109  [NONE]              Ns
109  [NONE]              ::
109  [NONE]              some_type
109  [BRACED_INIT_LIST]    {
109  [NONE]              1
109  [BRACED_INIT_LIST]    }
109  [NONE]              ;
109  [NONE]              
110  [NONE]              Ns
110  [NONE]              ::
110  [NONE]              some_type
110  [NONE]              d
110  [NONE]              =
110  [NONE]              Ns
110  [NONE]              ::
110  [NONE]              some_type
110  [BRACED_INIT_LIST]    {
110  [NONE]              Ns
110  [NONE]              ::
110  [NONE]              some_type
110  [BRACED_INIT_LIST]    {
110  [NONE]              1
110  [BRACED_INIT_LIST]    }
110  [BRACED_INIT_LIST]    }
110  [NONE]              ;
110  [NONE]              
111  [NONE]              Ns
111  [NONE]              ::
111  [NONE]              some_type
111  [BRACED_INIT_LIST]    {
111  [NONE]              1
111  [BRACED_INIT_LIST]    }
111  [NONE]              ;
111  [NONE]              
112  [NONE]              Ns
112  [NONE]              ::
112  [NONE]              some_type
112  [BRACED_INIT_LIST]    {
112  [NONE]              Ns
112  [NONE]              ::
112  [NONE]              some_type
112  [BRACED_INIT_LIST]    {
112  [NONE]              1
112  [BRACED_INIT_LIST]    }
112  [BRACED_INIT_LIST]    }
112  [NONE]              ;
112  [NONE]              
113  [NONE]              }
113  [NONE]              
114  [NONE]              {
114  [NONE]              
115  [NONE]              ::
115  [NONE]              Ns
115  [NONE]              ::
115  [NONE]              some_type
115  [NONE]              a
115  [BRACED_INIT_LIST]    {
115  [NONE]              1
115  [BRACED_INIT_LIST]    }
115  [NONE]              ;
115  [NONE]              
116  [NONE]              ::
116  [NONE]              Ns
116  [NONE]              ::
116  [NONE]              some_type
116  [NONE]              b
116  [NONE]              =
116  [BRACED_INIT_LIST]    {
116  [NONE]              1
116  [BRACED_INIT_LIST]    }
116  [NONE]              ;
116  [NONE]              
117  [NONE]              ::
117  [NONE]              Ns
117  [NONE]              ::
117  [NONE]              some_type
117  [NONE]              c
117  [NONE]              =
117  [NONE]              ::
117  [NONE]              Ns
117  [NONE]              ::
117  [NONE]              some_type
117  [BRACED_INIT_LIST]    {
117  [NONE]              1
117  [BRACED_INIT_LIST]    }
117  [NONE]              ;
117  [NONE]              
118  [NONE]              ::
118  [NONE]              Ns
118  [NONE]              ::
118  [NONE]              some_type
118  [NONE]              d
118  [NONE]              =
118  [NONE]              ::
118  [NONE]              Ns
118  [NONE]              ::
118  [NONE]              some_type
118  [BRACED_INIT_LIST]    {
118  [NONE]              ::
118  [NONE]              Ns
118  [NONE]              ::
118  [NONE]              some_type
118  [BRACED_INIT_LIST]    {
118  [NONE]              1
118  [BRACED_INIT_LIST]    }
118  [BRACED_INIT_LIST]    }
118  [NONE]              ;
118  [NONE]              
119  [NONE]              ::
119  [NONE]              Ns
119  [NONE]              ::
119  [NONE]              some_type
119  [BRACED_INIT_LIST]    {
119  [NONE]              1
119  [BRACED_INIT_LIST]    }
119  [NONE]              ;
119  [NONE]              
120  [NONE]              ::
120  [NONE]              Ns
120  [NONE]              ::
120  [NONE]              some_type
120  [BRACED_INIT_LIST]    {
120  [NONE]              ::
120  [NONE]              Ns
120  [NONE]              ::
120  [NONE]              some_type
120  [BRACED_INIT_LIST]    {
120  [NONE]              1
120  [BRACED_INIT_LIST]    }
120  [BRACED_INIT_LIST]    }
120  [NONE]              ;
120  [NONE]              
121  [NONE]              }
121  [NONE]              
122  [FUNC_DEF]          }
122  [NONE]              
124  [FUNC_DEF]          void
124  [NONE]              braced_init_list_some_type_auto
124  [FUNC_DEF]          (
124  [FUNC_DEF]          )
124  [NONE]              
125  [FUNC_DEF]          {
125  [NONE]              
126  [NONE]              {
126  [NONE]              
127  [NONE]              auto
127  [NONE]              b
127  [NONE]              =
127  [NONE]              some_type
127  [BRACED_INIT_LIST]    {
127  [BRACED_INIT_LIST]    }
127  [NONE]              ;
127  [NONE]              
128  [NONE]              auto
128  [NONE]              c
128  [NONE]              =
128  [NONE]              some_type
128  [BRACED_INIT_LIST]    {
128  [NONE]              some_type
128  [BRACED_INIT_LIST]    {
128  [BRACED_INIT_LIST]    }
128  [BRACED_INIT_LIST]    }
128  [NONE]              ;
128  [NONE]              
129  [NONE]              }
129  [NONE]              
130  [NONE]              {
130  [NONE]              
131  [NONE]              auto
131  [NONE]              a
131  [NONE]              =
131  [BRACED_INIT_LIST]    {
131  [NONE]              1
131  [BRACED_INIT_LIST]    }
131  [NONE]              ;
131  [NONE]              
132  [NONE]              auto
132  [NONE]              b
132  [NONE]              =
132  [NONE]              some_type
132  [BRACED_INIT_LIST]    {
132  [NONE]              1
132  [BRACED_INIT_LIST]    }
132  [NONE]              ;
132  [NONE]              
133  [NONE]              auto
133  [NONE]              c
133  [NONE]              =
133  [NONE]              some_type
133  [BRACED_INIT_LIST]    {
133  [NONE]              some_type
133  [BRACED_INIT_LIST]    {
133  [NONE]              1
133  [BRACED_INIT_LIST]    }
133  [BRACED_INIT_LIST]    }
133  [NONE]              ;
133  [NONE]              
134  [NONE]              }
134  [NONE]              
135  [NONE]              {
135  [NONE]              
136  [NONE]              auto
136  [NONE]              b
136  [NONE]              =
136  [NONE]              ::
136  [NONE]              some_type
136  [BRACED_INIT_LIST]    {
136  [NONE]              1
136  [BRACED_INIT_LIST]    }
136  [NONE]              ;
136  [NONE]              
137  [NONE]              auto
137  [NONE]              c
137  [NONE]              =
137  [NONE]              ::
137  [NONE]              some_type
137  [BRACED_INIT_LIST]    {
137  [NONE]              ::
137  [NONE]              some_type
137  [BRACED_INIT_LIST]    {
137  [NONE]              1
137  [BRACED_INIT_LIST]    }
137  [BRACED_INIT_LIST]    }
137  [NONE]              ;
137  [NONE]              
138  [NONE]              }
138  [NONE]              
139  [NONE]              {
139  [NONE]              
140  [NONE]              auto
140  [NONE]              b
140  [NONE]              =
140  [NONE]              Ns
140  [NONE]              ::
140  [NONE]              some_type
140  [BRACED_INIT_LIST]    {
140  [NONE]              1
140  [BRACED_INIT_LIST]    }
140  [NONE]              ;
140  [NONE]              
141  [NONE]              auto
141  [NONE]              c
141  [NONE]              =
141  [NONE]              Ns
141  [NONE]              ::
141  [NONE]              some_type
141  [BRACED_INIT_LIST]    {
141  [NONE]              Ns
141  [NONE]              ::
141  [NONE]              some_type
141  [BRACED_INIT_LIST]    {
141  [NONE]              1
141  [BRACED_INIT_LIST]    }
141  [BRACED_INIT_LIST]    }
141  [NONE]              ;
141  [NONE]              
142  [NONE]              }
142  [NONE]              
143  [NONE]              {
143  [NONE]              
144  [NONE]              auto
144  [NONE]              b
144  [NONE]              =
144  [NONE]              ::
144  [NONE]              Ns
144  [NONE]              ::
144  [NONE]              some_type
144  [BRACED_INIT_LIST]    {
144  [NONE]              1
144  [BRACED_INIT_LIST]    }
144  [NONE]              ;
144  [NONE]              
145  [NONE]              auto
145  [NONE]              c
145  [NONE]              =
145  [NONE]              ::
145  [NONE]              Ns
145  [NONE]              ::
145  [NONE]              some_type
145  [BRACED_INIT_LIST]    {
145  [NONE]              ::
145  [NONE]              Ns
145  [NONE]              ::
145  [NONE]              some_type
145  [BRACED_INIT_LIST]    {
145  [NONE]              1
145  [BRACED_INIT_LIST]    }
145  [BRACED_INIT_LIST]    }
145  [NONE]              ;
145  [NONE]              
146  [NONE]              }
146  [NONE]              
147  [FUNC_DEF]          }
147  [NONE]              
149  [FUNC_DEF]          void
149  [NONE]              braced_init_list_function_call
149  [FUNC_DEF]          (
149  [FUNC_DEF]          )
149  [NONE]              
150  [FUNC_DEF]          {
150  [NONE]              
151  [NONE]              {
151  [NONE]              
152  [NONE]              some_type
152  [NONE]              a
152  [BRACED_INIT_LIST]    {
152  [NONE]              sum
152  [FUNC_CALL]         (
152  [NONE]              some_type
152  [BRACED_INIT_LIST]    {
152  [BRACED_INIT_LIST]    }
152  [NONE]              ,
152  [NONE]              some_type
152  [BRACED_INIT_LIST]    {
152  [BRACED_INIT_LIST]    }
152  [FUNC_CALL]         )
152  [BRACED_INIT_LIST]    }
152  [NONE]              ;
152  [NONE]              
153  [NONE]              some_type
153  [NONE]              b
153  [NONE]              =
153  [NONE]              sum
153  [FUNC_CALL]         (
153  [NONE]              some_type
153  [BRACED_INIT_LIST]    {
153  [BRACED_INIT_LIST]    }
153  [NONE]              ,
153  [NONE]              some_type
153  [BRACED_INIT_LIST]    {
153  [BRACED_INIT_LIST]    }
153  [FUNC_CALL]         )
153  [NONE]              ;
153  [NONE]              
154  [NONE]              some_type
154  [NONE]              c
154  [NONE]              =
154  [NONE]              some_type
154  [BRACED_INIT_LIST]    {
154  [NONE]              sum
154  [FUNC_CALL]         (
154  [NONE]              some_type
154  [BRACED_INIT_LIST]    {
154  [BRACED_INIT_LIST]    }
154  [NONE]              ,
154  [NONE]              some_type
154  [BRACED_INIT_LIST]    {
154  [BRACED_INIT_LIST]    }
154  [FUNC_CALL]         )
154  [BRACED_INIT_LIST]    }
154  [NONE]              ;
154  [NONE]              
155  [NONE]              some_type
155  [BRACED_INIT_LIST]    {
155  [NONE]              sum
155  [FUNC_CALL]         (
155  [NONE]              some_type
155  [BRACED_INIT_LIST]    {
155  [BRACED_INIT_LIST]    }
155  [NONE]              ,
155  [NONE]              some_type
155  [BRACED_INIT_LIST]    {
155  [BRACED_INIT_LIST]    }
155  [FUNC_CALL]         )
155  [BRACED_INIT_LIST]    }
155  [NONE]              ;
155  [NONE]              
156  [NONE]              some_type
156  [BRACED_INIT_LIST]    {
156  [NONE]              some_type
156  [BRACED_INIT_LIST]    {
156  [NONE]              sum
156  [FUNC_CALL]         (
156  [NONE]              some_type
156  [BRACED_INIT_LIST]    {
156  [BRACED_INIT_LIST]    }
156  [NONE]              ,
156  [NONE]              some_type
156  [BRACED_INIT_LIST]    {
156  [BRACED_INIT_LIST]    }
156  [FUNC_CALL]         )
156  [BRACED_INIT_LIST]    }
156  [BRACED_INIT_LIST]    }
156  [NONE]              ;
156  [NONE]              
157  [NONE]              }
157  [NONE]              
158  [NONE]              {
158  [NONE]              
159  [NONE]              some_type
159  [NONE]              a
159  [BRACED_INIT_LIST]    {
159  [NONE]              sum
159  [FUNC_CALL]         (
159  [NONE]              some_type
159  [BRACED_INIT_LIST]    {
159  [NONE]              1
159  [BRACED_INIT_LIST]    }
159  [NONE]              ,
159  [NONE]              some_type
159  [BRACED_INIT_LIST]    {
159  [NONE]              1
159  [BRACED_INIT_LIST]    }
159  [FUNC_CALL]         )
159  [BRACED_INIT_LIST]    }
159  [NONE]              ;
159  [NONE]              
160  [NONE]              some_type
160  [NONE]              b
160  [NONE]              =
160  [NONE]              sum
160  [FUNC_CALL]         (
160  [NONE]              some_type
160  [BRACED_INIT_LIST]    {
160  [NONE]              1
160  [BRACED_INIT_LIST]    }
160  [NONE]              ,
160  [NONE]              some_type
160  [BRACED_INIT_LIST]    {
160  [NONE]              1
160  [BRACED_INIT_LIST]    }
160  [FUNC_CALL]         )
160  [NONE]              ;
160  [NONE]              
161  [NONE]              some_type
161  [NONE]              c
161  [NONE]              =
161  [NONE]              some_type
161  [BRACED_INIT_LIST]    {
161  [NONE]              sum
161  [FUNC_CALL]         (
161  [NONE]              some_type
161  [BRACED_INIT_LIST]    {
161  [NONE]              1
161  [BRACED_INIT_LIST]    }
161  [NONE]              ,
161  [NONE]              some_type
161  [BRACED_INIT_LIST]    {
161  [NONE]              1
161  [BRACED_INIT_LIST]    }
161  [FUNC_CALL]         )
161  [BRACED_INIT_LIST]    }
161  [NONE]              ;
161  [NONE]              
162  [NONE]              some_type
162  [BRACED_INIT_LIST]    {
162  [NONE]              sum
162  [FUNC_CALL]         (
162  [NONE]              some_type
162  [BRACED_INIT_LIST]    {
162  [NONE]              a
162  [BRACED_INIT_LIST]    }
162  [NONE]              ,
162  [NONE]              some_type
162  [BRACED_INIT_LIST]    {
162  [NONE]              b
162  [BRACED_INIT_LIST]    }
162  [FUNC_CALL]         )
162  [BRACED_INIT_LIST]    }
162  [NONE]              ;
162  [NONE]              
163  [NONE]              some_type
163  [BRACED_INIT_LIST]    {
163  [NONE]              some_type
163  [BRACED_INIT_LIST]    {
163  [NONE]              sum
163  [FUNC_CALL]         (
163  [NONE]              some_type
163  [BRACED_INIT_LIST]    {
163  [NONE]              a
163  [BRACED_INIT_LIST]    }
163  [NONE]              ,
163  [NONE]              some_type
163  [BRACED_INIT_LIST]    {
163  [NONE]              b
163  [BRACED_INIT_LIST]    }
163  [FUNC_CALL]         )
163  [BRACED_INIT_LIST]    }
163  [BRACED_INIT_LIST]    }
163  [NONE]              ;
163  [NONE]              
164  [NONE]              }
164  [NONE]              
165  [NONE]              {
165  [NONE]              
166  [NONE]              ::
166  [NONE]              some_type
166  [NONE]              a
166  [BRACED_INIT_LIST]    {
166  [NONE]              sum
166  [FUNC_CALL]         (
166  [NONE]              ::
166  [NONE]              some_type
166  [BRACED_INIT_LIST]    {
166  [NONE]              1
166  [BRACED_INIT_LIST]    }
166  [NONE]              ,
166  [NONE]              ::
166  [NONE]              some_type
166  [BRACED_INIT_LIST]    {
166  [NONE]              1
166  [BRACED_INIT_LIST]    }
166  [FUNC_CALL]         )
166  [BRACED_INIT_LIST]    }
166  [NONE]              ;
166  [NONE]              
167  [NONE]              ::
167  [NONE]              some_type
167  [NONE]              b
167  [NONE]              =
167  [NONE]              sum
167  [FUNC_CALL]         (
167  [NONE]              ::
167  [NONE]              some_type
167  [BRACED_INIT_LIST]    {
167  [NONE]              1
167  [BRACED_INIT_LIST]    }
167  [NONE]              ,
167  [NONE]              ::
167  [NONE]              some_type
167  [BRACED_INIT_LIST]    {
167  [NONE]              1
167  [BRACED_INIT_LIST]    }
167  [FUNC_CALL]         )
167  [NONE]              ;
167  [NONE]              
168  [NONE]              ::
168  [NONE]              some_type
168  [NONE]              c
168  [NONE]              =
168  [NONE]              ::
168  [NONE]              some_type
168  [BRACED_INIT_LIST]    {
168  [NONE]              sum
168  [FUNC_CALL]         (
168  [NONE]              ::
168  [NONE]              some_type
168  [BRACED_INIT_LIST]    {
168  [NONE]              1
168  [BRACED_INIT_LIST]    }
168  [NONE]              ,
168  [NONE]              ::
168  [NONE]              some_type
168  [BRACED_INIT_LIST]    {
168  [NONE]              1
168  [BRACED_INIT_LIST]    }
168  [FUNC_CALL]         )
168  [BRACED_INIT_LIST]    }
168  [NONE]              ;
168  [NONE]              
169  [NONE]              ::
169  [NONE]              some_type
169  [BRACED_INIT_LIST]    {
169  [NONE]              sum
169  [FUNC_CALL]         (
169  [NONE]              ::
169  [NONE]              some_type
169  [BRACED_INIT_LIST]    {
169  [NONE]              a
169  [BRACED_INIT_LIST]    }
169  [NONE]              ,
169  [NONE]              ::
169  [NONE]              some_type
169  [BRACED_INIT_LIST]    {
169  [NONE]              b
169  [BRACED_INIT_LIST]    }
169  [FUNC_CALL]         )
169  [BRACED_INIT_LIST]    }
169  [NONE]              ;
169  [NONE]              
170  [NONE]              ::
170  [NONE]              some_type
170  [BRACED_INIT_LIST]    {
170  [NONE]              ::
170  [NONE]              some_type
170  [BRACED_INIT_LIST]    {
170  [NONE]              sum
170  [FUNC_CALL]         (
170  [NONE]              ::
170  [NONE]              some_type
170  [BRACED_INIT_LIST]    {
170  [NONE]              a
170  [BRACED_INIT_LIST]    }
170  [NONE]              ,
170  [NONE]              ::
170  [NONE]              some_type
170  [BRACED_INIT_LIST]    {
170  [NONE]              b
170  [BRACED_INIT_LIST]    }
170  [FUNC_CALL]         )
170  [BRACED_INIT_LIST]    }
170  [BRACED_INIT_LIST]    }
170  [NONE]              ;
170  [NONE]              
171  [NONE]              }
171  [NONE]              
172  [NONE]              {
172  [NONE]              
173  [NONE]              Ns
173  [NONE]              ::
173  [NONE]              some_type
173  [NONE]              a
173  [BRACED_INIT_LIST]    {
173  [NONE]              sum
173  [FUNC_CALL]         (
173  [NONE]              Ns
173  [NONE]              ::
173  [NONE]              some_type
173  [BRACED_INIT_LIST]    {
173  [NONE]              1
173  [BRACED_INIT_LIST]    }
173  [NONE]              ,
173  [NONE]              Ns
173  [NONE]              ::
173  [NONE]              some_type
173  [BRACED_INIT_LIST]    {
173  [NONE]              1
173  [BRACED_INIT_LIST]    }
173  [FUNC_CALL]         )
173  [BRACED_INIT_LIST]    }
173  [NONE]              ;
173  [NONE]              
174  [NONE]              Ns
174  [NONE]              ::
174  [NONE]              some_type
174  [NONE]              b
174  [NONE]              =
174  [NONE]              sum
174  [FUNC_CALL]         (
174  [NONE]              Ns
174  [NONE]              ::
174  [NONE]              some_type
174  [BRACED_INIT_LIST]    {
174  [NONE]              1
174  [BRACED_INIT_LIST]    }
174  [NONE]              ,
174  [NONE]              Ns
174  [NONE]              ::
174  [NONE]              some_type
174  [BRACED_INIT_LIST]    {
174  [NONE]              1
174  [BRACED_INIT_LIST]    }
174  [FUNC_CALL]         )
174  [NONE]              ;
174  [NONE]              
175  [NONE]              Ns
175  [NONE]              ::
175  [NONE]              some_type
175  [NONE]              c
175  [NONE]              =
175  [NONE]              Ns
175  [NONE]              ::
175  [NONE]              some_type
175  [BRACED_INIT_LIST]    {
175  [NONE]              sum
175  [FUNC_CALL]         (
175  [NONE]              Ns
175  [NONE]              ::
175  [NONE]              some_type
175  [BRACED_INIT_LIST]    {
175  [NONE]              1
175  [BRACED_INIT_LIST]    }
175  [NONE]              ,
175  [NONE]              Ns
175  [NONE]              ::
175  [NONE]              some_type
175  [BRACED_INIT_LIST]    {
175  [NONE]              1
175  [BRACED_INIT_LIST]    }
175  [FUNC_CALL]         )
175  [BRACED_INIT_LIST]    }
175  [NONE]              ;
175  [NONE]              
176  [NONE]              Ns
176  [NONE]              ::
176  [NONE]              some_type
176  [BRACED_INIT_LIST]    {
176  [NONE]              sum
176  [FUNC_CALL]         (
176  [NONE]              Ns
176  [NONE]              ::
176  [NONE]              some_type
176  [BRACED_INIT_LIST]    {
176  [NONE]              a
176  [BRACED_INIT_LIST]    }
176  [NONE]              ,
176  [NONE]              Ns
176  [NONE]              ::
176  [NONE]              some_type
176  [BRACED_INIT_LIST]    {
176  [NONE]              b
176  [BRACED_INIT_LIST]    }
176  [FUNC_CALL]         )
176  [BRACED_INIT_LIST]    }
176  [NONE]              ;
176  [NONE]              
177  [NONE]              Ns
177  [NONE]              ::
177  [NONE]              some_type
177  [BRACED_INIT_LIST]    {
177  [NONE]              Ns
177  [NONE]              ::
177  [NONE]              some_type
177  [BRACED_INIT_LIST]    {
177  [NONE]              sum
177  [FUNC_CALL]         (
177  [NONE]              Ns
177  [NONE]              ::
177  [NONE]              some_type
177  [BRACED_INIT_LIST]    {
177  [NONE]              a
177  [BRACED_INIT_LIST]    }
177  [NONE]              ,
177  [NONE]              Ns
177  [NONE]              ::
177  [NONE]              some_type
177  [BRACED_INIT_LIST]    {
177  [NONE]              b
177  [BRACED_INIT_LIST]    }
177  [FUNC_CALL]         )
177  [BRACED_INIT_LIST]    }
177  [BRACED_INIT_LIST]    }
177  [NONE]              ;
177  [NONE]              
178  [NONE]              }
178  [NONE]              
179  [NONE]              {
179  [NONE]              
180  [NONE]              ::
180  [NONE]              Ns
180  [NONE]              ::
180  [NONE]              some_type
180  [NONE]              a
180  [BRACED_INIT_LIST]    {
180  [NONE]              sum
180  [FUNC_CALL]         (
180  [NONE]              ::
180  [NONE]              Ns
180  [NONE]              ::
180  [NONE]              some_type
180  [BRACED_INIT_LIST]    {
180  [NONE]              1
180  [BRACED_INIT_LIST]    }
180  [NONE]              ,
180  [NONE]              ::
180  [NONE]              Ns
180  [NONE]              ::
180  [NONE]              some_type
180  [BRACED_INIT_LIST]    {
180  [NONE]              1
180  [BRACED_INIT_LIST]    }
180  [FUNC_CALL]         )
180  [BRACED_INIT_LIST]    }
180  [NONE]              ;
180  [NONE]              
181  [NONE]              ::
181  [NONE]              Ns
181  [NONE]              ::
181  [NONE]              some_type
181  [NONE]              b
181  [NONE]              =
181  [NONE]              sum
181  [FUNC_CALL]         (
181  [NONE]              ::
181  [NONE]              Ns
181  [NONE]              ::
181  [NONE]              some_type
181  [BRACED_INIT_LIST]    {
181  [NONE]              1
181  [BRACED_INIT_LIST]    }
181  [NONE]              ,
181  [NONE]              ::
181  [NONE]              Ns
181  [NONE]              ::
181  [NONE]              some_type
181  [BRACED_INIT_LIST]    {
181  [NONE]              1
181  [BRACED_INIT_LIST]    }
181  [FUNC_CALL]         )
181  [NONE]              ;
181  [NONE]              
182  [NONE]              ::
182  [NONE]              Ns
182  [NONE]              ::
182  [NONE]              some_type
182  [NONE]              c
182  [NONE]              =
182  [NONE]              ::
182  [NONE]              Ns
182  [NONE]              ::
182  [NONE]              some_type
182  [BRACED_INIT_LIST]    {
182  [NONE]              sum
182  [FUNC_CALL]         (
182  [NONE]              ::
182  [NONE]              Ns
182  [NONE]              ::
182  [NONE]              some_type
182  [BRACED_INIT_LIST]    {
182  [NONE]              1
182  [BRACED_INIT_LIST]    }
182  [NONE]              ,
182  [NONE]              ::
182  [NONE]              Ns
182  [NONE]              ::
182  [NONE]              some_type
182  [BRACED_INIT_LIST]    {
182  [NONE]              1
182  [BRACED_INIT_LIST]    }
182  [FUNC_CALL]         )
182  [BRACED_INIT_LIST]    }
182  [NONE]              ;
182  [NONE]              
183  [NONE]              ::
183  [NONE]              Ns
183  [NONE]              ::
183  [NONE]              some_type
183  [BRACED_INIT_LIST]    {
183  [NONE]              sum
183  [FUNC_CALL]         (
183  [NONE]              ::
183  [NONE]              Ns
183  [NONE]              ::
183  [NONE]              some_type
183  [BRACED_INIT_LIST]    {
183  [NONE]              a
183  [BRACED_INIT_LIST]    }
183  [NONE]              ,
183  [NONE]              ::
183  [NONE]              Ns
183  [NONE]              ::
183  [NONE]              some_type
183  [BRACED_INIT_LIST]    {
183  [NONE]              b
183  [BRACED_INIT_LIST]    }
183  [FUNC_CALL]         )
183  [BRACED_INIT_LIST]    }
183  [NONE]              ;
183  [NONE]              
184  [NONE]              ::
184  [NONE]              Ns
184  [NONE]              ::
184  [NONE]              some_type
184  [BRACED_INIT_LIST]    {
184  [NONE]              ::
184  [NONE]              Ns
184  [NONE]              ::
184  [NONE]              some_type
184  [BRACED_INIT_LIST]    {
184  [NONE]              sum
184  [FUNC_CALL]         (
184  [NONE]              ::
184  [NONE]              Ns
184  [NONE]              ::
184  [NONE]              some_type
184  [BRACED_INIT_LIST]    {
184  [NONE]              a
184  [BRACED_INIT_LIST]    }
184  [NONE]              ,
184  [NONE]              ::
184  [NONE]              Ns
184  [NONE]              ::
184  [NONE]              some_type
184  [BRACED_INIT_LIST]    {
184  [NONE]              b
184  [BRACED_INIT_LIST]    }
184  [FUNC_CALL]         )
184  [BRACED_INIT_LIST]    }
184  [BRACED_INIT_LIST]    }
184  [NONE]              ;
184  [NONE]              
185  [NONE]              }
185  [NONE]              
186  [FUNC_DEF]          }
186  [NONE]              
188  [FUNC_DEF]          void
188  [NONE]              braced_init_list_function_call_newline
188  [FUNC_DEF]          (
188  [FUNC_DEF]          )
188  [NONE]              
189  [FUNC_DEF]          {
189  [NONE]              
190  [NONE]              {
190  [NONE]              
191  [NONE]              some_type
191  [NONE]              a
191  [BRACED_INIT_LIST]    {
191  [NONE]              
192  [NONE]              sum
192  [FUNC_CALL]         (
192  [NONE]              some_type
192  [BRACED_INIT_LIST]    {
192  [BRACED_INIT_LIST]    }
192  [NONE]              ,
192  [NONE]              
193  [NONE]              some_type
193  [BRACED_INIT_LIST]    {
193  [BRACED_INIT_LIST]    }
193  [NONE]              
194  [FUNC_CALL]         )
194  [NONE]              
195  [BRACED_INIT_LIST]    }
195  [NONE]              ;
195  [NONE]              
196  [NONE]              some_type
196  [NONE]              b
196  [NONE]              =
196  [NONE]              sum
196  [FUNC_CALL]         (
196  [NONE]              
197  [NONE]              some_type
197  [BRACED_INIT_LIST]    {
197  [BRACED_INIT_LIST]    }
197  [NONE]              ,
197  [NONE]              some_type
197  [BRACED_INIT_LIST]    {
197  [BRACED_INIT_LIST]    }
197  [FUNC_CALL]         )
197  [NONE]              ;
197  [NONE]              
198  [NONE]              some_type
198  [NONE]              c
198  [NONE]              =
198  [NONE]              some_type
198  [BRACED_INIT_LIST]    {
198  [NONE]              
199  [NONE]              sum
199  [FUNC_CALL]         (
199  [NONE]              
200  [NONE]              some_type
200  [BRACED_INIT_LIST]    {
200  [BRACED_INIT_LIST]    }
200  [NONE]              ,
200  [NONE]              some_type
200  [BRACED_INIT_LIST]    {
200  [BRACED_INIT_LIST]    }
200  [FUNC_CALL]         )
200  [BRACED_INIT_LIST]    }
200  [NONE]              ;
200  [NONE]              
201  [NONE]              some_type
201  [NONE]              
202  [BRACED_INIT_LIST]    {
202  [NONE]              sum
202  [NONE]              
203  [FUNC_CALL]         (
203  [NONE]              some_type
203  [BRACED_INIT_LIST]    {
203  [BRACED_INIT_LIST]    }
203  [NONE]              ,
203  [NONE]              
204  [NONE]              some_type
204  [BRACED_INIT_LIST]    {
204  [BRACED_INIT_LIST]    }
204  [NONE]              
205  [FUNC_CALL]         )
205  [NONE]              
206  [BRACED_INIT_LIST]    }
206  [NONE]              ;
206  [NONE]              
207  [NONE]              some_type
207  [NONE]              
208  [BRACED_INIT_LIST]    {
208  [NONE]              some_type
208  [BRACED_INIT_LIST]    {
208  [NONE]              sum
208  [NONE]              
209  [FUNC_CALL]         (
209  [NONE]              some_type
209  [BRACED_INIT_LIST]    {
209  [BRACED_INIT_LIST]    }
209  [NONE]              ,
209  [NONE]              some_type
209  [BRACED_INIT_LIST]    {
209  [BRACED_INIT_LIST]    }
209  [FUNC_CALL]         )
209  [BRACED_INIT_LIST]    }
209  [BRACED_INIT_LIST]    }
209  [NONE]              ;
209  [NONE]              
210  [NONE]              }
210  [NONE]              
211  [FUNC_DEF]          }
211  [NONE]              
213  [FUNC_DEF]          void
213  [NONE]              braced_init_list_array
213  [FUNC_DEF]          (
213  [FUNC_DEF]          )
213  [NONE]              
214  [FUNC_DEF]          {
214  [NONE]              
215  [NONE]              {
215  [NONE]              
216  [NONE]              some_type
216  [NONE]              a
216  [NONE]              []
216  [BRACED_INIT_LIST]    {
216  [BRACED_INIT_LIST]    }
216  [NONE]              ;
216  [NONE]              
217  [NONE]              some_type
217  [NONE]              b
217  [NONE]              []
217  [NONE]              =
217  [BRACED_INIT_LIST]    {
217  [BRACED_INIT_LIST]    }
217  [NONE]              ;
217  [NONE]              
218  [NONE]              some_type
218  [NONE]              c
218  [NONE]              []
218  [NONE]              =
218  [BRACED_INIT_LIST]    {
218  [BRACED_INIT_LIST]    {
218  [BRACED_INIT_LIST]    }
218  [NONE]              ,
218  [BRACED_INIT_LIST]    {
218  [BRACED_INIT_LIST]    }
218  [BRACED_INIT_LIST]    }
218  [NONE]              ;
218  [NONE]              
219  [NONE]              }
219  [NONE]              
220  [NONE]              {
220  [NONE]              
221  [NONE]              some_type
221  [NONE]              a
221  [NONE]              []
221  [BRACED_INIT_LIST]    {
221  [NONE]              1
221  [NONE]              ,
221  [NONE]              2
221  [BRACED_INIT_LIST]    }
221  [NONE]              ;
221  [NONE]              
222  [NONE]              some_type
222  [NONE]              b
222  [NONE]              []
222  [NONE]              =
222  [BRACED_INIT_LIST]    {
222  [NONE]              1
222  [NONE]              ,
222  [NONE]              2
222  [BRACED_INIT_LIST]    }
222  [NONE]              ;
222  [NONE]              
223  [NONE]              some_type
223  [NONE]              c
223  [NONE]              []
223  [NONE]              =
223  [BRACED_INIT_LIST]    {
223  [NONE]              some_type
223  [BRACED_INIT_LIST]    {
223  [NONE]              1
223  [BRACED_INIT_LIST]    }
223  [NONE]              ,
223  [NONE]              some_type
223  [BRACED_INIT_LIST]    {
223  [NONE]              2
223  [BRACED_INIT_LIST]    }
223  [BRACED_INIT_LIST]    }
223  [NONE]              ;
223  [NONE]              
224  [NONE]              }
224  [NONE]              
225  [FUNC_DEF]          }
225  [NONE]              
227  [FUNC_DEF]          void
227  [NONE]              braced_init_list_template
227  [FUNC_DEF]          (
227  [FUNC_DEF]          )
227  [NONE]              
228  [FUNC_DEF]          {
228  [NONE]              
229  [NONE]              {
229  [NONE]              
230  [NONE]              std
230  [NONE]              ::
230  [NONE]              vector
230  [TEMPLATE]          <
230  [NONE]              some_type
230  [TEMPLATE]          >
230  [NONE]              a
230  [BRACED_INIT_LIST]    {
230  [BRACED_INIT_LIST]    }
230  [NONE]              ;
230  [NONE]              
231  [NONE]              std
231  [NONE]              ::
231  [NONE]              vector
231  [TEMPLATE]          <
231  [NONE]              some_type
231  [TEMPLATE]          >
231  [NONE]              b
231  [NONE]              =
231  [BRACED_INIT_LIST]    {
231  [BRACED_INIT_LIST]    }
231  [NONE]              ;
231  [NONE]              
232  [NONE]              std
232  [NONE]              ::
232  [NONE]              vector
232  [TEMPLATE]          <
232  [NONE]              some_type
232  [TEMPLATE]          >
232  [NONE]              c
232  [NONE]              =
232  [BRACED_INIT_LIST]    {
232  [BRACED_INIT_LIST]    {
232  [BRACED_INIT_LIST]    }
232  [NONE]              ,
232  [BRACED_INIT_LIST]    {
232  [BRACED_INIT_LIST]    }
232  [BRACED_INIT_LIST]    }
232  [NONE]              ;
232  [NONE]              
233  [NONE]              std
233  [NONE]              ::
233  [NONE]              vector
233  [TEMPLATE]          <
233  [NONE]              some_type
233  [TEMPLATE]          >
233  [NONE]              d
233  [NONE]              =
233  [NONE]              std
233  [NONE]              ::
233  [NONE]              vector
233  [TEMPLATE]          <
233  [NONE]              some_type
233  [TEMPLATE]          >
233  [BRACED_INIT_LIST]    {
233  [BRACED_INIT_LIST]    }
233  [NONE]              ;
233  [NONE]              
234  [NONE]              std
234  [NONE]              ::
234  [NONE]              vector
234  [TEMPLATE]          <
234  [NONE]              some_type
234  [TEMPLATE]          >
234  [NONE]              e
234  [NONE]              =
234  [NONE]              std
234  [NONE]              ::
234  [NONE]              vector
234  [TEMPLATE]          <
234  [NONE]              some_type
234  [TEMPLATE]          >
234  [BRACED_INIT_LIST]    {
234  [BRACED_INIT_LIST]    {
234  [BRACED_INIT_LIST]    }
234  [NONE]              ,
234  [BRACED_INIT_LIST]    {
234  [BRACED_INIT_LIST]    }
234  [BRACED_INIT_LIST]    }
234  [NONE]              ;
234  [NONE]              
235  [NONE]              std
235  [NONE]              ::
235  [NONE]              vector
235  [TEMPLATE]          <
235  [NONE]              some_type
235  [TEMPLATE]          >
235  [NONE]              f
235  [NONE]              =
235  [NONE]              std
235  [NONE]              ::
235  [NONE]              vector
235  [TEMPLATE]          <
235  [NONE]              some_type
235  [TEMPLATE]          >
235  [BRACED_INIT_LIST]    {
235  [NONE]              some_type
235  [BRACED_INIT_LIST]    {
235  [BRACED_INIT_LIST]    }
235  [NONE]              ,
235  [NONE]              some_type
235  [BRACED_INIT_LIST]    {
235  [BRACED_INIT_LIST]    }
235  [BRACED_INIT_LIST]    }
235  [NONE]              ;
235  [NONE]              
236  [NONE]              std
236  [NONE]              ::
236  [NONE]              vector
236  [TEMPLATE]          <
236  [NONE]              some_type
236  [TEMPLATE]          >
236  [BRACED_INIT_LIST]    {
236  [BRACED_INIT_LIST]    }
236  [NONE]              ;
236  [NONE]              
237  [NONE]              std
237  [NONE]              ::
237  [NONE]              vector
237  [TEMPLATE]          <
237  [NONE]              some_type
237  [TEMPLATE]          >
237  [BRACED_INIT_LIST]    {
237  [BRACED_INIT_LIST]    {
237  [BRACED_INIT_LIST]    }
237  [NONE]              ,
237  [BRACED_INIT_LIST]    {
237  [BRACED_INIT_LIST]    }
237  [BRACED_INIT_LIST]    }
237  [NONE]              ;
237  [NONE]              
238  [NONE]              std
238  [NONE]              ::
238  [NONE]              vector
238  [TEMPLATE]          <
238  [NONE]              some_type
238  [TEMPLATE]          >
238  [BRACED_INIT_LIST]    {
238  [NONE]              some_type
238  [BRACED_INIT_LIST]    {
238  [BRACED_INIT_LIST]    }
238  [NONE]              ,
238  [NONE]              some_type
238  [BRACED_INIT_LIST]    {
238  [BRACED_INIT_LIST]    }
238  [BRACED_INIT_LIST]    }
238  [NONE]              ;
238  [NONE]              
239  [NONE]              }
239  [NONE]              
240  [NONE]              {
240  [NONE]              
241  [NONE]              std
241  [NONE]              ::
241  [NONE]              vector
241  [TEMPLATE]          <
241  [NONE]              some_type
241  [TEMPLATE]          >
241  [NONE]              a
241  [BRACED_INIT_LIST]    {
241  [NONE]              1
241  [NONE]              ,
241  [NONE]              2
241  [BRACED_INIT_LIST]    }
241  [NONE]              ;
241  [NONE]              
242  [NONE]              std
242  [NONE]              ::
242  [NONE]              vector
242  [TEMPLATE]          <
242  [NONE]              some_type
242  [TEMPLATE]          >
242  [NONE]              b
242  [NONE]              =
242  [BRACED_INIT_LIST]    {
242  [NONE]              1
242  [NONE]              ,
242  [NONE]              2
242  [BRACED_INIT_LIST]    }
242  [NONE]              ;
242  [NONE]              
243  [NONE]              std
243  [NONE]              ::
243  [NONE]              vector
243  [TEMPLATE]          <
243  [NONE]              some_type
243  [TEMPLATE]          >
243  [NONE]              c
243  [NONE]              =
243  [NONE]              std
243  [NONE]              ::
243  [NONE]              vector
243  [TEMPLATE]          <
243  [NONE]              some_type
243  [TEMPLATE]          >
243  [BRACED_INIT_LIST]    {
243  [NONE]              1
243  [NONE]              ,
243  [NONE]              2
243  [BRACED_INIT_LIST]    }
243  [NONE]              ;
243  [NONE]              
244  [NONE]              std
244  [NONE]              ::
244  [NONE]              vector
244  [TEMPLATE]          <
244  [NONE]              some_type
244  [TEMPLATE]          >
244  [NONE]              d
244  [NONE]              =
244  [NONE]              std
244  [NONE]              ::
244  [NONE]              vector
244  [TEMPLATE]          <
244  [NONE]              some_type
244  [TEMPLATE]          >
244  [BRACED_INIT_LIST]    {
244  [NONE]              some_type
244  [BRACED_INIT_LIST]    {
244  [NONE]              1
244  [BRACED_INIT_LIST]    }
244  [NONE]              ,
244  [NONE]              some_type
244  [BRACED_INIT_LIST]    {
244  [NONE]              2
244  [BRACED_INIT_LIST]    }
244  [BRACED_INIT_LIST]    }
244  [NONE]              ;
244  [NONE]              
245  [NONE]              std
245  [NONE]              ::
245  [NONE]              vector
245  [TEMPLATE]          <
245  [NONE]              some_type
245  [TEMPLATE]          >
245  [BRACED_INIT_LIST]    {
245  [NONE]              1
245  [NONE]              ,
245  [NONE]              2
245  [BRACED_INIT_LIST]    }
245  [NONE]              ;
245  [NONE]              
246  [NONE]              std
246  [NONE]              ::
246  [NONE]              vector
246  [TEMPLATE]          <
246  [NONE]              some_type
246  [TEMPLATE]          >
246  [BRACED_INIT_LIST]    {
246  [NONE]              some_type
246  [BRACED_INIT_LIST]    {
246  [NONE]              1
246  [BRACED_INIT_LIST]    }
246  [NONE]              ,
246  [NONE]              some_type
246  [BRACED_INIT_LIST]    {
246  [NONE]              2
246  [BRACED_INIT_LIST]    }
246  [BRACED_INIT_LIST]    }
246  [NONE]              ;
246  [NONE]              
247  [NONE]              }
247  [NONE]              
248  [FUNC_DEF]          }
248  [NONE]              
250  [FUNC_DEF]          void
250  [NONE]              braced_init_list_lambda
250  [FUNC_DEF]          (
250  [FUNC_DEF]          )
250  [NONE]              
251  [FUNC_DEF]          {
251  [NONE]              
252  [NONE]              std
252  [NONE]              ::
252  [NONE]              vector
252  [TEMPLATE]          <
252  [NONE]              some_type
252  [TEMPLATE]          >
252  [NONE]              a
252  [BRACED_INIT_LIST]    {
252  [NONE]              1
252  [NONE]              ,
252  [NONE]              2
252  [BRACED_INIT_LIST]    }
252  [NONE]              ;
252  [NONE]              
253  [NONE]              some_type
253  [NONE]              b
253  [BRACED_INIT_LIST]    {
253  [NONE]              2
253  [BRACED_INIT_LIST]    }
253  [NONE]              ;
253  [NONE]              
255  [NONE]              auto
255  [NONE]              c
255  [NONE]              =
255  [CPP_LAMBDA]        [
255  [CPP_LAMBDA]        ]
255  [CPP_LAMBDA]        {
255  [NONE]              
255  [NONE]              return
255  [NONE]              true
255  [NONE]              ;
255  [NONE]              
255  [CPP_LAMBDA]        }
255  [NONE]              ;
255  [NONE]              
256  [NONE]              auto
256  [NONE]              d
256  [NONE]              =
256  [CPP_LAMBDA]        [
256  [CPP_LAMBDA]        ]
256  [CPP_LAMBDA]        (
256  [CPP_LAMBDA]        )
256  [CPP_LAMBDA]        {
256  [NONE]              
256  [NONE]              return
256  [NONE]              true
256  [NONE]              ;
256  [NONE]              
256  [CPP_LAMBDA]        }
256  [NONE]              ;
256  [NONE]              
258  [NONE]              std
258  [NONE]              ::
258  [NONE]              find_if
258  [FUNC_CALL]         (
258  [NONE]              a
258  [NONE]              .
258  [NONE]              begin
258  [FUNC_CALL]         (
258  [FUNC_CALL]         )
258  [NONE]              ,
258  [NONE]              a
258  [NONE]              .
258  [NONE]              end
258  [FUNC_CALL]         (
258  [FUNC_CALL]         )
258  [NONE]              ,
258  [CPP_LAMBDA]        [
258  [NONE]              &
258  [NONE]              b
258  [CPP_LAMBDA]        ]
258  [CPP_LAMBDA]        (
258  [NONE]              const
258  [NONE]              some_type
258  [NONE]              &
258  [NONE]              v
258  [CPP_LAMBDA]        )
258  [CPP_LAMBDA]        {
258  [NONE]              
258  [NONE]              return
258  [NONE]              v
258  [NONE]              ==
258  [NONE]              b
258  [NONE]              ;
258  [NONE]              
258  [CPP_LAMBDA]        }
258  [FUNC_CALL]         )
258  [NONE]              ;
258  [NONE]              
259  [NONE]              std
259  [NONE]              ::
259  [NONE]              find_if
259  [FUNC_CALL]         (
259  [NONE]              a
259  [NONE]              .
259  [NONE]              begin
259  [FUNC_CALL]         (
259  [FUNC_CALL]         )
259  [NONE]              ,
259  [NONE]              a
259  [NONE]              .
259  [NONE]              end
259  [FUNC_CALL]         (
259  [FUNC_CALL]         )
259  [NONE]              ,
259  [CPP_LAMBDA]        [
259  [CPP_LAMBDA]        ]
259  [CPP_LAMBDA]        (
259  [NONE]              const
259  [NONE]              some_type
259  [NONE]              &
259  [NONE]              v
259  [CPP_LAMBDA]        )
259  [CPP_LAMBDA]        {
259  [NONE]              
259  [NONE]              some_type
259  [NONE]              b
259  [BRACED_INIT_LIST]    {
259  [NONE]              2
259  [BRACED_INIT_LIST]    }
259  [NONE]              ;
259  [NONE]              return
259  [NONE]              v
259  [NONE]              ==
259  [NONE]              b
259  [NONE]              ;
259  [NONE]              
259  [CPP_LAMBDA]        }
259  [FUNC_CALL]         )
259  [NONE]              ;
259  [NONE]              
260  [FUNC_DEF]          }
260  [NONE]              