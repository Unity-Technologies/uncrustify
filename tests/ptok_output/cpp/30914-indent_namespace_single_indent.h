Line [Parent]            Text
1    [NONE]              namespace
1    [NAMESPACE]         ns1
1    [NAMESPACE]         {
1    [NONE]              
2    [NONE]              namespace
2    [NAMESPACE]         ns2
2    [NAMESPACE]         {
2    [NONE]              
3    [NONE]              namespace
3    [NAMESPACE]         ns3
3    [NAMESPACE]         {
3    [NONE]              
4    [FUNC_PROTO]        void
4    [NONE]              a
4    [FUNC_PROTO]        (
4    [FUNC_PROTO]        )
4    [FUNC_PROTO]        ;
4    [NONE]              
5    [NAMESPACE]         }
5    [NONE]              
6    [NAMESPACE]         }
6    [NONE]              
7    [NAMESPACE]         }
7    [NONE]              
9    [NONE]              extern
9    [EXTERN]            "C"
9    [EXTERN]            {
9    [NONE]              
10   [NONE]              namespace
10   [NAMESPACE]         ns1
10   [NAMESPACE]         {
10   [NONE]              
11   [NONE]              namespace
11   [NAMESPACE]         ns2
11   [NAMESPACE]         {
11   [NONE]              
12   [NONE]              namespace
12   [NAMESPACE]         ns3
12   [NAMESPACE]         {
12   [NONE]              
13   [FUNC_PROTO]        void
13   [NONE]              b
13   [FUNC_PROTO]        (
13   [FUNC_PROTO]        )
13   [FUNC_PROTO]        ;
13   [NONE]              
14   [NAMESPACE]         }
14   [NONE]              
15   [NAMESPACE]         }
15   [NONE]              
16   [NAMESPACE]         }
16   [NONE]              
17   [EXTERN]            }
17   [NONE]              
19   [NONE]              namespace
19   [NAMESPACE]         ns1
19   [NAMESPACE]         {
19   [NONE]              
20   [NONE]              extern
20   [EXTERN]            "C"
20   [EXTERN]            {
20   [NONE]              
21   [NONE]              namespace
21   [NAMESPACE]         ns2
21   [NAMESPACE]         {
21   [NONE]              
22   [NONE]              namespace
22   [NAMESPACE]         ns3
22   [NAMESPACE]         {
22   [NONE]              
23   [FUNC_PROTO]        void
23   [NONE]              c
23   [FUNC_PROTO]        (
23   [FUNC_PROTO]        )
23   [FUNC_PROTO]        ;
23   [NONE]              
24   [NAMESPACE]         }
24   [NONE]              
25   [NAMESPACE]         }
25   [NONE]              
26   [EXTERN]            }
26   [NONE]              
27   [NAMESPACE]         }
27   [NONE]              
29   [NONE]              namespace
29   [NAMESPACE]         ns1
29   [NAMESPACE]         {
29   [NONE]              
30   [NONE]              namespace
30   [NAMESPACE]         ns2
30   [NAMESPACE]         {
30   [NONE]              
31   [NONE]              extern
31   [EXTERN]            "C"
31   [EXTERN]            {
31   [NONE]              
32   [NONE]              namespace
32   [NAMESPACE]         ns3
32   [NAMESPACE]         {
32   [NONE]              
33   [FUNC_PROTO]        void
33   [NONE]              d
33   [FUNC_PROTO]        (
33   [FUNC_PROTO]        )
33   [FUNC_PROTO]        ;
33   [NONE]              
34   [NAMESPACE]         }
34   [NONE]              
35   [EXTERN]            }
35   [NONE]              
36   [NAMESPACE]         }
36   [NONE]              
37   [NAMESPACE]         }
37   [NONE]              
39   [NONE]              namespace
39   [NAMESPACE]         ns1
39   [NAMESPACE]         {
39   [NONE]              
40   [NONE]              namespace
40   [NAMESPACE]         ns2
40   [NAMESPACE]         {
40   [NONE]              
41   [NONE]              namespace
41   [NAMESPACE]         ns3
41   [NAMESPACE]         {
41   [NONE]              
42   [NONE]              extern
42   [EXTERN]            "C"
42   [EXTERN]            {
42   [NONE]              
43   [FUNC_PROTO]        void
43   [NONE]              e
43   [FUNC_PROTO]        (
43   [FUNC_PROTO]        )
43   [FUNC_PROTO]        ;
43   [NONE]              
44   [EXTERN]            }
44   [NONE]              
45   [NAMESPACE]         }
45   [NONE]              
46   [NAMESPACE]         }
46   [NONE]              
47   [NAMESPACE]         }
47   [NONE]              
49   [PP_DEFINE]         #
49   [NONE]              define
49   [NONE]              M1
49   [MACRO_FUNC]        (
49   [NONE]              ns1
49   [NONE]              ,
49   [NONE]              ns2
49   [NONE]              ,
49   [NONE]              ns3
49   [NONE]              ,
49   [NONE]              f
49   [MACRO_FUNC]        )
49   [NONE]              \
50   [NONE]              namespace
50   [NAMESPACE]         ns1
50   [NAMESPACE]         {
50   [NONE]              \
51   [NONE]              namespace
51   [NAMESPACE]         ns2
51   [NAMESPACE]         {
51   [NONE]              \
52   [NONE]              namespace
52   [NAMESPACE]         ns3
52   [NAMESPACE]         {
52   [NONE]              \
53   [NONE]              void
53   [NONE]              f
53   [FUNC_CALL]         (
53   [FUNC_CALL]         )
53   [NONE]              ;
53   [NONE]              \
54   [NAMESPACE]         }
54   [NONE]              \
55   [NAMESPACE]         }
55   [NONE]              \
56   [NAMESPACE]         }
56   [NONE]              
58   [PP_DEFINE]         #
58   [NONE]              define
58   [NONE]              M2
58   [MACRO_FUNC]        (
58   [NONE]              ns1
58   [NONE]              ,
58   [NONE]              ns2
58   [NONE]              ,
58   [NONE]              ns3
58   [NONE]              ,
58   [NONE]              f
58   [MACRO_FUNC]        )
58   [NONE]              \
59   [NONE]              extern
59   [EXTERN]            "C"
59   [EXTERN]            {
59   [NONE]              \
60   [NONE]              namespace
60   [NAMESPACE]         ns1
60   [NAMESPACE]         {
60   [NONE]              \
61   [NONE]              namespace
61   [NAMESPACE]         ns2
61   [NAMESPACE]         {
61   [NONE]              \
62   [NONE]              namespace
62   [NAMESPACE]         ns3
62   [NAMESPACE]         {
62   [NONE]              \
63   [NONE]              void
63   [NONE]              b
63   [FUNC_CALL]         (
63   [FUNC_CALL]         )
63   [NONE]              ;
63   [NONE]              \
64   [NAMESPACE]         }
64   [NONE]              \
65   [NAMESPACE]         }
65   [NONE]              \
66   [NAMESPACE]         }
66   [NONE]              \
67   [EXTERN]            }
67   [NONE]              
69   [PP_DEFINE]         #
69   [NONE]              define
69   [NONE]              M3
69   [MACRO_FUNC]        (
69   [NONE]              ns1
69   [NONE]              ,
69   [NONE]              ns2
69   [NONE]              ,
69   [NONE]              ns3
69   [NONE]              ,
69   [NONE]              f
69   [MACRO_FUNC]        )
69   [NONE]              \
70   [NONE]              namespace
70   [NAMESPACE]         ns1
70   [NAMESPACE]         {
70   [NONE]              \
71   [NONE]              extern
71   [EXTERN]            "C"
71   [EXTERN]            {
71   [NONE]              \
72   [NONE]              namespace
72   [NAMESPACE]         ns2
72   [NAMESPACE]         {
72   [NONE]              \
73   [NONE]              namespace
73   [NAMESPACE]         ns3
73   [NAMESPACE]         {
73   [NONE]              \
74   [NONE]              void
74   [NONE]              c
74   [FUNC_CALL]         (
74   [FUNC_CALL]         )
74   [NONE]              ;
74   [NONE]              \
75   [NAMESPACE]         }
75   [NONE]              \
76   [NAMESPACE]         }
76   [NONE]              \
77   [EXTERN]            }
77   [NONE]              \
78   [NAMESPACE]         }
78   [NONE]              
80   [PP_DEFINE]         #
80   [NONE]              define
80   [NONE]              M4
80   [MACRO_FUNC]        (
80   [NONE]              ns1
80   [NONE]              ,
80   [NONE]              ns2
80   [NONE]              ,
80   [NONE]              ns3
80   [NONE]              ,
80   [NONE]              f
80   [MACRO_FUNC]        )
80   [NONE]              \
81   [NONE]              namespace
81   [NAMESPACE]         ns1
81   [NAMESPACE]         {
81   [NONE]              \
82   [NONE]              namespace
82   [NAMESPACE]         ns2
82   [NAMESPACE]         {
82   [NONE]              \
83   [NONE]              extern
83   [EXTERN]            "C"
83   [EXTERN]            {
83   [NONE]              \
84   [NONE]              namespace
84   [NAMESPACE]         ns3
84   [NAMESPACE]         {
84   [NONE]              \
85   [NONE]              void
85   [NONE]              d
85   [FUNC_CALL]         (
85   [FUNC_CALL]         )
85   [NONE]              ;
85   [NONE]              \
86   [NAMESPACE]         }
86   [NONE]              \
87   [EXTERN]            }
87   [NONE]              \
88   [NAMESPACE]         }
88   [NONE]              \
89   [NAMESPACE]         }
89   [NONE]              
91   [PP_DEFINE]         #
91   [NONE]              define
91   [NONE]              M5
91   [MACRO_FUNC]        (
91   [NONE]              ns1
91   [NONE]              ,
91   [NONE]              ns2
91   [NONE]              ,
91   [NONE]              ns3
91   [NONE]              ,
91   [NONE]              f
91   [MACRO_FUNC]        )
91   [NONE]              \
92   [NONE]              namespace
92   [NAMESPACE]         ns1
92   [NAMESPACE]         {
92   [NONE]              \
93   [NONE]              namespace
93   [NAMESPACE]         ns2
93   [NAMESPACE]         {
93   [NONE]              \
94   [NONE]              namespace
94   [NAMESPACE]         ns3
94   [NAMESPACE]         {
94   [NONE]              \
95   [NONE]              extern
95   [EXTERN]            "C"
95   [EXTERN]            {
95   [NONE]              \
96   [NONE]              void
96   [NONE]              e
96   [FUNC_CALL]         (
96   [FUNC_CALL]         )
96   [NONE]              ;
96   [NONE]              \
97   [EXTERN]            }
97   [NONE]              \
98   [NAMESPACE]         }
98   [NONE]              \
99   [NAMESPACE]         }
99   [NONE]              \
100  [NAMESPACE]         }
100  [NONE]              