Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        include
1    [PREPROC_BODY]      <vector>
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_INCLUDE]        include
2    [PREPROC_BODY]      <algorithm>
2    [NEWLINE]           
4    [USING]             using
4    [WORD]              some_type
4    [ASSIGN]            =
4    [TYPE]              int
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [NAMESPACE]         namespace
5    [WORD]              Ns
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [USING]             using
6    [WORD]              some_type
6    [ASSIGN]            =
6    [TYPE]              int
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
9    [CLASS]             class
9    [TYPE]              BracedInitListBase
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [PRIVATE]           public
10   [PRIVATE_COLON]     :
10   [NEWLINE]           
11   [FUNC_CLASS_DEF]    BracedInitListBase
11   [FPAREN_OPEN]       (
11   [FPAREN_CLOSE]      )
11   [NEWLINE]           
12   [CONSTR_COLON]      :
12   [FUNC_CTOR_VAR]     a
12   [FPAREN_OPEN]       {
12   [TYPE]              int
12   [BRACE_OPEN]        {
12   [NUMBER]            1
12   [BRACE_CLOSE]       }
12   [FPAREN_CLOSE]      }
12   [COMMA]             ,
12   [NEWLINE]           
13   [FUNC_CTOR_VAR]     b
13   [FPAREN_OPEN]       (
13   [CPP_CAST]          int
13   [PAREN_OPEN]        (
13   [FUNC_CTOR_VAR]     some_type
13   [FPAREN_OPEN]       (
13   [NUMBER]            1
13   [FPAREN_CLOSE]      )
13   [PAREN_CLOSE]       )
13   [FPAREN_CLOSE]      )
13   [COMMA]             ,
13   [NEWLINE]           
14   [FUNC_CTOR_VAR]     c
14   [FPAREN_OPEN]       (
14   [TYPE]              int
14   [BRACE_OPEN]        {
14   [FUNC_CTOR_VAR]     some_type
14   [FPAREN_OPEN]       (
14   [NUMBER]            1
14   [FPAREN_CLOSE]      )
14   [BRACE_CLOSE]       }
14   [FPAREN_CLOSE]      )
14   [COMMA]             ,
14   [NEWLINE]           
15   [FUNC_CTOR_VAR]     d
15   [FPAREN_OPEN]       {
15   [CPP_CAST]          int
15   [PAREN_OPEN]        (
15   [FUNC_CTOR_VAR]     some_type
15   [FPAREN_OPEN]       (
15   [NUMBER]            1
15   [FPAREN_CLOSE]      )
15   [PAREN_CLOSE]       )
15   [FPAREN_CLOSE]      }
15   [COMMA]             ,
15   [NEWLINE]           
16   [FUNC_CTOR_VAR]     e
16   [FPAREN_OPEN]       {
16   [TYPE]              some_type
16   [BRACE_OPEN]        {
16   [TYPE]              some_type
16   [BRACE_OPEN]        {
16   [WORD]              a
16   [BRACE_CLOSE]       }
16   [BRACE_CLOSE]       }
16   [FPAREN_CLOSE]      }
16   [NEWLINE]           
17   [BRACE_OPEN]        {
17   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [NEWLINE]           
20   [QUALIFIER]         virtual
20   [TYPE]              int
20   [FUNC_DEF]          getA
20   [FPAREN_OPEN]       (
20   [FPAREN_CLOSE]      )
20   [QUALIFIER]         const
20   [BRACE_OPEN]        {
20   [NEWLINE]           
21   [RETURN]            return
21   [WORD]              a
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
23   [PRIVATE]           private
23   [PRIVATE_COLON]     :
23   [NEWLINE]           
24   [TYPE]              int
24   [WORD]              a
24   [BRACE_OPEN]        {
24   [BRACE_CLOSE]       }
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [TYPE]              int
25   [WORD]              b
25   [BRACE_OPEN]        {
25   [NUMBER]            1
25   [BRACE_CLOSE]       }
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [TYPE]              int
26   [WORD]              c
26   [ASSIGN]            =
26   [BRACE_OPEN]        {
26   [NUMBER]            1
26   [BRACE_CLOSE]       }
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [TYPE]              int
27   [WORD]              d
27   [ASSIGN]            =
27   [TYPE]              int
27   [BRACE_OPEN]        {
27   [NUMBER]            1
27   [BRACE_CLOSE]       }
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [TYPE]              some_type
28   [WORD]              e
28   [BRACE_OPEN]        {
28   [NUMBER]            1
28   [BRACE_CLOSE]       }
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [TYPE]              some_type
29   [WORD]              f
29   [ASSIGN]            =
29   [BRACE_OPEN]        {
29   [NUMBER]            1
29   [BRACE_CLOSE]       }
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [TYPE]              some_type
30   [WORD]              g
30   [ASSIGN]            =
30   [WORD]              some_type
30   [BRACE_OPEN]        {
30   [NUMBER]            1
30   [BRACE_CLOSE]       }
30   [SEMICOLON]         ;
30   [NEWLINE]           
31   [TYPE]              std
31   [DC_MEMBER]         ::
31   [TYPE]              vector
31   [ANGLE_OPEN]        <
31   [TYPE]              some_type
31   [ANGLE_CLOSE]       >
31   [WORD]              h
31   [BRACE_OPEN]        {
31   [TYPE]              some_type
31   [BRACE_OPEN]        {
31   [NUMBER]            4
31   [BRACE_CLOSE]       }
31   [COMMA]             ,
31   [NUMBER]            5
31   [BRACE_CLOSE]       }
31   [SEMICOLON]         ;
31   [NEWLINE]           
32   [DC_MEMBER]         ::
32   [TYPE]              std
32   [DC_MEMBER]         ::
32   [TYPE]              vector
32   [ANGLE_OPEN]        <
32   [TYPE]              some_type
32   [ANGLE_CLOSE]       >
32   [WORD]              i
32   [ASSIGN]            =
32   [DC_MEMBER]         ::
32   [TYPE]              std
32   [DC_MEMBER]         ::
32   [WORD]              vector
32   [ANGLE_OPEN]        <
32   [TYPE]              some_type
32   [ANGLE_CLOSE]       >
32   [BRACE_OPEN]        {
32   [NUMBER]            4
32   [COMMA]             ,
32   [WORD]              some_type
32   [BRACE_OPEN]        {
32   [NUMBER]            5
32   [BRACE_CLOSE]       }
32   [BRACE_CLOSE]       }
32   [SEMICOLON]         ;
32   [NEWLINE]           
33   [TYPE]              some_type
33   [WORD]              j
33   [ASSIGN]            =
33   [DC_MEMBER]         ::
33   [TYPE]              std
33   [DC_MEMBER]         ::
33   [WORD]              vector
33   [ANGLE_OPEN]        <
33   [TYPE]              some_type
33   [ANGLE_CLOSE]       >
33   [BRACE_OPEN]        {
33   [NUMBER]            4
33   [COMMA]             ,
33   [WORD]              some_type
33   [BRACE_OPEN]        {
33   [NUMBER]            5
33   [BRACE_CLOSE]       }
33   [BRACE_CLOSE]       }
33   [SQUARE_OPEN]       [
33   [NUMBER]            1
33   [SQUARE_CLOSE]      ]
33   [SEMICOLON]         ;
33   [NEWLINE]           
34   [TYPE]              some_type
34   [WORD]              k
34   [SQUARE_OPEN]       [
34   [NUMBER]            2
34   [SQUARE_CLOSE]      ]
34   [BRACE_OPEN]        {
34   [NUMBER]            1
34   [COMMA]             ,
34   [NUMBER]            2
34   [BRACE_CLOSE]       }
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [TYPE]              some_type
35   [WORD]              l
35   [SQUARE_OPEN]       [
35   [NUMBER]            2
35   [SQUARE_CLOSE]      ]
35   [ASSIGN]            =
35   [BRACE_OPEN]        {
35   [NUMBER]            1
35   [COMMA]             ,
35   [NUMBER]            2
35   [BRACE_CLOSE]       }
35   [SEMICOLON]         ;
35   [NEWLINE]           
37   [UNION]             union
37   [TYPE]              SomeUnion
37   [BRACE_OPEN]        {
37   [NEWLINE]           
38   [TYPE]              int
38   [WORD]              a
38   [SEMICOLON]         ;
38   [NEWLINE]           
39   [TYPE]              some_type
39   [WORD]              b
39   [BRACE_OPEN]        {
39   [BRACE_CLOSE]       }
39   [SEMICOLON]         ;
39   [NEWLINE]           
40   [BRACE_CLOSE]       }
40   [SEMICOLON]         ;
40   [NEWLINE]           
41   [BRACE_CLOSE]       }
41   [SEMICOLON]         ;
41   [NEWLINE]           
43   [CLASS]             class
43   [TYPE]              BracedInitListDerived
43   [CLASS_COLON]       :
43   [QUALIFIER]         public
43   [WORD]              BracedInitListBase
43   [BRACE_OPEN]        {
43   [NEWLINE]           
44   [PRIVATE]           public
44   [PRIVATE_COLON]     :
44   [NEWLINE]           
45   [TYPE]              int
45   [FUNC_DEF]          getA
45   [FPAREN_OPEN]       (
45   [FPAREN_CLOSE]      )
45   [QUALIFIER]         const
45   [QUALIFIER]         override
45   [BRACE_OPEN]        {
45   [NEWLINE]           
46   [RETURN]            return
46   [TYPE]              BracedInitListBase
46   [DC_MEMBER]         ::
46   [FUNC_CALL]         getA
46   [FPAREN_OPEN]       (
46   [FPAREN_CLOSE]      )
46   [SEMICOLON]         ;
46   [NEWLINE]           
47   [BRACE_CLOSE]       }
47   [NEWLINE]           
48   [BRACE_CLOSE]       }
48   [SEMICOLON]         ;
48   [NEWLINE]           
50   [TYPE]              some_type
50   [FUNC_DEF]          inc
50   [FPAREN_OPEN]       (
50   [TYPE]              some_type
50   [WORD]              a
50   [FPAREN_CLOSE]      )
50   [NEWLINE]           
51   [BRACE_OPEN]        {
51   [NEWLINE]           
52   [RETURN]            return
52   [WORD]              some_type
52   [BRACE_OPEN]        {
52   [INCDEC_BEFORE]     ++
52   [WORD]              a
52   [BRACE_CLOSE]       }
52   [SEMICOLON]         ;
52   [NEWLINE]           
53   [BRACE_CLOSE]       }
53   [NEWLINE]           
55   [TYPE]              some_type
55   [FUNC_DEF]          sum
55   [FPAREN_OPEN]       (
55   [TYPE]              some_type
55   [WORD]              a
55   [COMMA]             ,
55   [TYPE]              some_type
55   [WORD]              b
55   [ASSIGN]            =
55   [TYPE]              some_type
55   [BRACE_OPEN]        {
55   [NUMBER]            1
55   [BRACE_CLOSE]       }
55   [FPAREN_CLOSE]      )
55   [NEWLINE]           
56   [BRACE_OPEN]        {
56   [NEWLINE]           
57   [RETURN]            return
57   [WORD]              a
57   [ARITH]             +
57   [FUNC_CALL]         inc
57   [FPAREN_OPEN]       (
57   [TYPE]              some_type
57   [BRACE_OPEN]        {
57   [WORD]              b
57   [ARITH]             -
57   [TYPE]              some_type
57   [BRACE_OPEN]        {
57   [NUMBER]            1
57   [BRACE_CLOSE]       }
57   [BRACE_CLOSE]       }
57   [FPAREN_CLOSE]      )
57   [SEMICOLON]         ;
57   [NEWLINE]           
58   [BRACE_CLOSE]       }
58   [NEWLINE]           
60   [TYPE]              void
60   [FUNC_DEF]          braced_init_list_int
60   [FPAREN_OPEN]       (
60   [FPAREN_CLOSE]      )
60   [NEWLINE]           
61   [BRACE_OPEN]        {
61   [NEWLINE]           
62   [BRACE_OPEN]        {
62   [NEWLINE]           
63   [TYPE]              int
63   [WORD]              a
63   [BRACE_OPEN]        {
63   [BRACE_CLOSE]       }
63   [SEMICOLON]         ;
63   [NEWLINE]           
64   [TYPE]              int
64   [WORD]              b
64   [ASSIGN]            =
64   [BRACE_OPEN]        {
64   [BRACE_CLOSE]       }
64   [SEMICOLON]         ;
64   [NEWLINE]           
65   [TYPE]              int
65   [WORD]              c
65   [ASSIGN]            =
65   [TYPE]              int
65   [BRACE_OPEN]        {
65   [BRACE_CLOSE]       }
65   [SEMICOLON]         ;
65   [NEWLINE]           
66   [TYPE]              int
66   [WORD]              d
66   [ASSIGN]            =
66   [TYPE]              int
66   [BRACE_OPEN]        {
66   [TYPE]              int
66   [BRACE_OPEN]        {
66   [BRACE_CLOSE]       }
66   [BRACE_CLOSE]       }
66   [SEMICOLON]         ;
66   [NEWLINE]           
67   [TYPE]              int
67   [BRACE_OPEN]        {
67   [BRACE_CLOSE]       }
67   [SEMICOLON]         ;
67   [NEWLINE]           
68   [TYPE]              int
68   [BRACE_OPEN]        {
68   [TYPE]              int
68   [BRACE_OPEN]        {
68   [BRACE_CLOSE]       }
68   [BRACE_CLOSE]       }
68   [SEMICOLON]         ;
68   [NEWLINE]           
69   [BRACE_CLOSE]       }
69   [NEWLINE]           
70   [BRACE_OPEN]        {
70   [NEWLINE]           
71   [TYPE]              int
71   [WORD]              a
71   [BRACE_OPEN]        {
71   [NUMBER]            1
71   [BRACE_CLOSE]       }
71   [SEMICOLON]         ;
71   [NEWLINE]           
72   [TYPE]              int
72   [WORD]              b
72   [ASSIGN]            =
72   [BRACE_OPEN]        {
72   [NUMBER]            1
72   [BRACE_CLOSE]       }
72   [SEMICOLON]         ;
72   [NEWLINE]           
73   [TYPE]              int
73   [WORD]              c
73   [ASSIGN]            =
73   [TYPE]              int
73   [BRACE_OPEN]        {
73   [NUMBER]            1
73   [BRACE_CLOSE]       }
73   [SEMICOLON]         ;
73   [NEWLINE]           
74   [TYPE]              int
74   [WORD]              d
74   [ASSIGN]            =
74   [TYPE]              int
74   [BRACE_OPEN]        {
74   [TYPE]              int
74   [BRACE_OPEN]        {
74   [NUMBER]            1
74   [BRACE_CLOSE]       }
74   [BRACE_CLOSE]       }
74   [SEMICOLON]         ;
74   [NEWLINE]           
75   [TYPE]              int
75   [BRACE_OPEN]        {
75   [NUMBER]            1
75   [BRACE_CLOSE]       }
75   [SEMICOLON]         ;
75   [NEWLINE]           
76   [TYPE]              int
76   [BRACE_OPEN]        {
76   [TYPE]              int
76   [BRACE_OPEN]        {
76   [NUMBER]            1
76   [BRACE_CLOSE]       }
76   [BRACE_CLOSE]       }
76   [SEMICOLON]         ;
76   [NEWLINE]           
77   [BRACE_CLOSE]       }
77   [NEWLINE]           
78   [BRACE_CLOSE]       }
78   [NEWLINE]           
80   [TYPE]              void
80   [FUNC_DEF]          braced_init_list_some_type
80   [FPAREN_OPEN]       (
80   [FPAREN_CLOSE]      )
80   [NEWLINE]           
81   [BRACE_OPEN]        {
81   [NEWLINE]           
82   [BRACE_OPEN]        {
82   [NEWLINE]           
83   [TYPE]              some_type
83   [WORD]              a
83   [BRACE_OPEN]        {
83   [BRACE_CLOSE]       }
83   [SEMICOLON]         ;
83   [NEWLINE]           
84   [TYPE]              some_type
84   [WORD]              b
84   [ASSIGN]            =
84   [BRACE_OPEN]        {
84   [BRACE_CLOSE]       }
84   [SEMICOLON]         ;
84   [NEWLINE]           
85   [TYPE]              some_type
85   [WORD]              c
85   [ASSIGN]            =
85   [WORD]              some_type
85   [BRACE_OPEN]        {
85   [BRACE_CLOSE]       }
85   [SEMICOLON]         ;
85   [NEWLINE]           
86   [TYPE]              some_type
86   [WORD]              d
86   [ASSIGN]            =
86   [WORD]              some_type
86   [BRACE_OPEN]        {
86   [TYPE]              some_type
86   [BRACE_OPEN]        {
86   [BRACE_CLOSE]       }
86   [BRACE_CLOSE]       }
86   [SEMICOLON]         ;
86   [NEWLINE]           
87   [TYPE]              some_type
87   [BRACE_OPEN]        {
87   [BRACE_CLOSE]       }
87   [SEMICOLON]         ;
87   [NEWLINE]           
88   [TYPE]              some_type
88   [BRACE_OPEN]        {
88   [TYPE]              some_type
88   [BRACE_OPEN]        {
88   [BRACE_CLOSE]       }
88   [BRACE_CLOSE]       }
88   [SEMICOLON]         ;
88   [NEWLINE]           
89   [BRACE_CLOSE]       }
89   [NEWLINE]           
90   [BRACE_OPEN]        {
90   [NEWLINE]           
91   [TYPE]              some_type
91   [WORD]              a
91   [BRACE_OPEN]        {
91   [NUMBER]            1
91   [BRACE_CLOSE]       }
91   [SEMICOLON]         ;
91   [NEWLINE]           
92   [TYPE]              some_type
92   [WORD]              b
92   [ASSIGN]            =
92   [BRACE_OPEN]        {
92   [NUMBER]            1
92   [BRACE_CLOSE]       }
92   [SEMICOLON]         ;
92   [NEWLINE]           
93   [TYPE]              some_type
93   [WORD]              c
93   [ASSIGN]            =
93   [WORD]              some_type
93   [BRACE_OPEN]        {
93   [NUMBER]            1
93   [BRACE_CLOSE]       }
93   [SEMICOLON]         ;
93   [NEWLINE]           
94   [TYPE]              some_type
94   [WORD]              d
94   [ASSIGN]            =
94   [WORD]              some_type
94   [BRACE_OPEN]        {
94   [TYPE]              some_type
94   [BRACE_OPEN]        {
94   [NUMBER]            1
94   [BRACE_CLOSE]       }
94   [BRACE_CLOSE]       }
94   [SEMICOLON]         ;
94   [NEWLINE]           
95   [TYPE]              some_type
95   [BRACE_OPEN]        {
95   [NUMBER]            1
95   [BRACE_CLOSE]       }
95   [SEMICOLON]         ;
95   [NEWLINE]           
96   [TYPE]              some_type
96   [BRACE_OPEN]        {
96   [TYPE]              some_type
96   [BRACE_OPEN]        {
96   [NUMBER]            1
96   [BRACE_CLOSE]       }
96   [BRACE_CLOSE]       }
96   [SEMICOLON]         ;
96   [NEWLINE]           
97   [BRACE_CLOSE]       }
97   [NEWLINE]           
98   [BRACE_OPEN]        {
98   [NEWLINE]           
99   [DC_MEMBER]         ::
99   [TYPE]              some_type
99   [WORD]              a
99   [BRACE_OPEN]        {
99   [NUMBER]            1
99   [BRACE_CLOSE]       }
99   [SEMICOLON]         ;
99   [NEWLINE]           
100  [DC_MEMBER]         ::
100  [TYPE]              some_type
100  [WORD]              b
100  [ASSIGN]            =
100  [BRACE_OPEN]        {
100  [NUMBER]            1
100  [BRACE_CLOSE]       }
100  [SEMICOLON]         ;
100  [NEWLINE]           
101  [DC_MEMBER]         ::
101  [TYPE]              some_type
101  [WORD]              c
101  [ASSIGN]            =
101  [DC_MEMBER]         ::
101  [WORD]              some_type
101  [BRACE_OPEN]        {
101  [NUMBER]            1
101  [BRACE_CLOSE]       }
101  [SEMICOLON]         ;
101  [NEWLINE]           
102  [DC_MEMBER]         ::
102  [TYPE]              some_type
102  [WORD]              d
102  [ASSIGN]            =
102  [DC_MEMBER]         ::
102  [WORD]              some_type
102  [BRACE_OPEN]        {
102  [DC_MEMBER]         ::
102  [WORD]              some_type
102  [BRACE_OPEN]        {
102  [NUMBER]            1
102  [BRACE_CLOSE]       }
102  [BRACE_CLOSE]       }
102  [SEMICOLON]         ;
102  [NEWLINE]           
103  [DC_MEMBER]         ::
103  [WORD]              some_type
103  [BRACE_OPEN]        {
103  [NUMBER]            1
103  [BRACE_CLOSE]       }
103  [SEMICOLON]         ;
103  [NEWLINE]           
104  [DC_MEMBER]         ::
104  [WORD]              some_type
104  [BRACE_OPEN]        {
104  [DC_MEMBER]         ::
104  [WORD]              some_type
104  [BRACE_OPEN]        {
104  [NUMBER]            1
104  [BRACE_CLOSE]       }
104  [BRACE_CLOSE]       }
104  [SEMICOLON]         ;
104  [NEWLINE]           
105  [BRACE_CLOSE]       }
105  [NEWLINE]           
106  [BRACE_OPEN]        {
106  [NEWLINE]           
107  [TYPE]              Ns
107  [DC_MEMBER]         ::
107  [TYPE]              some_type
107  [WORD]              a
107  [BRACE_OPEN]        {
107  [NUMBER]            1
107  [BRACE_CLOSE]       }
107  [SEMICOLON]         ;
107  [NEWLINE]           
108  [TYPE]              Ns
108  [DC_MEMBER]         ::
108  [TYPE]              some_type
108  [WORD]              b
108  [ASSIGN]            =
108  [BRACE_OPEN]        {
108  [NUMBER]            1
108  [BRACE_CLOSE]       }
108  [SEMICOLON]         ;
108  [NEWLINE]           
109  [TYPE]              Ns
109  [DC_MEMBER]         ::
109  [TYPE]              some_type
109  [WORD]              c
109  [ASSIGN]            =
109  [TYPE]              Ns
109  [DC_MEMBER]         ::
109  [WORD]              some_type
109  [BRACE_OPEN]        {
109  [NUMBER]            1
109  [BRACE_CLOSE]       }
109  [SEMICOLON]         ;
109  [NEWLINE]           
110  [TYPE]              Ns
110  [DC_MEMBER]         ::
110  [TYPE]              some_type
110  [WORD]              d
110  [ASSIGN]            =
110  [TYPE]              Ns
110  [DC_MEMBER]         ::
110  [WORD]              some_type
110  [BRACE_OPEN]        {
110  [TYPE]              Ns
110  [DC_MEMBER]         ::
110  [WORD]              some_type
110  [BRACE_OPEN]        {
110  [NUMBER]            1
110  [BRACE_CLOSE]       }
110  [BRACE_CLOSE]       }
110  [SEMICOLON]         ;
110  [NEWLINE]           
111  [TYPE]              Ns
111  [DC_MEMBER]         ::
111  [WORD]              some_type
111  [BRACE_OPEN]        {
111  [NUMBER]            1
111  [BRACE_CLOSE]       }
111  [SEMICOLON]         ;
111  [NEWLINE]           
112  [TYPE]              Ns
112  [DC_MEMBER]         ::
112  [WORD]              some_type
112  [BRACE_OPEN]        {
112  [TYPE]              Ns
112  [DC_MEMBER]         ::
112  [WORD]              some_type
112  [BRACE_OPEN]        {
112  [NUMBER]            1
112  [BRACE_CLOSE]       }
112  [BRACE_CLOSE]       }
112  [SEMICOLON]         ;
112  [NEWLINE]           
113  [BRACE_CLOSE]       }
113  [NEWLINE]           
114  [BRACE_OPEN]        {
114  [NEWLINE]           
115  [DC_MEMBER]         ::
115  [TYPE]              Ns
115  [DC_MEMBER]         ::
115  [TYPE]              some_type
115  [WORD]              a
115  [BRACE_OPEN]        {
115  [NUMBER]            1
115  [BRACE_CLOSE]       }
115  [SEMICOLON]         ;
115  [NEWLINE]           
116  [DC_MEMBER]         ::
116  [TYPE]              Ns
116  [DC_MEMBER]         ::
116  [TYPE]              some_type
116  [WORD]              b
116  [ASSIGN]            =
116  [BRACE_OPEN]        {
116  [NUMBER]            1
116  [BRACE_CLOSE]       }
116  [SEMICOLON]         ;
116  [NEWLINE]           
117  [DC_MEMBER]         ::
117  [TYPE]              Ns
117  [DC_MEMBER]         ::
117  [TYPE]              some_type
117  [WORD]              c
117  [ASSIGN]            =
117  [DC_MEMBER]         ::
117  [TYPE]              Ns
117  [DC_MEMBER]         ::
117  [WORD]              some_type
117  [BRACE_OPEN]        {
117  [NUMBER]            1
117  [BRACE_CLOSE]       }
117  [SEMICOLON]         ;
117  [NEWLINE]           
118  [DC_MEMBER]         ::
118  [TYPE]              Ns
118  [DC_MEMBER]         ::
118  [TYPE]              some_type
118  [WORD]              d
118  [ASSIGN]            =
118  [DC_MEMBER]         ::
118  [TYPE]              Ns
118  [DC_MEMBER]         ::
118  [WORD]              some_type
118  [BRACE_OPEN]        {
118  [DC_MEMBER]         ::
118  [TYPE]              Ns
118  [DC_MEMBER]         ::
118  [WORD]              some_type
118  [BRACE_OPEN]        {
118  [NUMBER]            1
118  [BRACE_CLOSE]       }
118  [BRACE_CLOSE]       }
118  [SEMICOLON]         ;
118  [NEWLINE]           
119  [DC_MEMBER]         ::
119  [TYPE]              Ns
119  [DC_MEMBER]         ::
119  [WORD]              some_type
119  [BRACE_OPEN]        {
119  [NUMBER]            1
119  [BRACE_CLOSE]       }
119  [SEMICOLON]         ;
119  [NEWLINE]           
120  [DC_MEMBER]         ::
120  [TYPE]              Ns
120  [DC_MEMBER]         ::
120  [WORD]              some_type
120  [BRACE_OPEN]        {
120  [DC_MEMBER]         ::
120  [TYPE]              Ns
120  [DC_MEMBER]         ::
120  [WORD]              some_type
120  [BRACE_OPEN]        {
120  [NUMBER]            1
120  [BRACE_CLOSE]       }
120  [BRACE_CLOSE]       }
120  [SEMICOLON]         ;
120  [NEWLINE]           
121  [BRACE_CLOSE]       }
121  [NEWLINE]           
122  [BRACE_CLOSE]       }
122  [NEWLINE]           
124  [TYPE]              void
124  [FUNC_DEF]          braced_init_list_some_type_auto
124  [FPAREN_OPEN]       (
124  [FPAREN_CLOSE]      )
124  [NEWLINE]           
125  [BRACE_OPEN]        {
125  [NEWLINE]           
126  [BRACE_OPEN]        {
126  [NEWLINE]           
127  [TYPE]              auto
127  [WORD]              b
127  [ASSIGN]            =
127  [WORD]              some_type
127  [BRACE_OPEN]        {
127  [BRACE_CLOSE]       }
127  [SEMICOLON]         ;
127  [NEWLINE]           
128  [TYPE]              auto
128  [WORD]              c
128  [ASSIGN]            =
128  [WORD]              some_type
128  [BRACE_OPEN]        {
128  [TYPE]              some_type
128  [BRACE_OPEN]        {
128  [BRACE_CLOSE]       }
128  [BRACE_CLOSE]       }
128  [SEMICOLON]         ;
128  [NEWLINE]           
129  [BRACE_CLOSE]       }
129  [NEWLINE]           
130  [BRACE_OPEN]        {
130  [NEWLINE]           
131  [TYPE]              auto
131  [WORD]              a
131  [ASSIGN]            =
131  [BRACE_OPEN]        {
131  [NUMBER]            1
131  [BRACE_CLOSE]       }
131  [SEMICOLON]         ;
131  [NEWLINE]           
132  [TYPE]              auto
132  [WORD]              b
132  [ASSIGN]            =
132  [WORD]              some_type
132  [BRACE_OPEN]        {
132  [NUMBER]            1
132  [BRACE_CLOSE]       }
132  [SEMICOLON]         ;
132  [NEWLINE]           
133  [TYPE]              auto
133  [WORD]              c
133  [ASSIGN]            =
133  [WORD]              some_type
133  [BRACE_OPEN]        {
133  [TYPE]              some_type
133  [BRACE_OPEN]        {
133  [NUMBER]            1
133  [BRACE_CLOSE]       }
133  [BRACE_CLOSE]       }
133  [SEMICOLON]         ;
133  [NEWLINE]           
134  [BRACE_CLOSE]       }
134  [NEWLINE]           
135  [BRACE_OPEN]        {
135  [NEWLINE]           
136  [TYPE]              auto
136  [WORD]              b
136  [ASSIGN]            =
136  [DC_MEMBER]         ::
136  [WORD]              some_type
136  [BRACE_OPEN]        {
136  [NUMBER]            1
136  [BRACE_CLOSE]       }
136  [SEMICOLON]         ;
136  [NEWLINE]           
137  [TYPE]              auto
137  [WORD]              c
137  [ASSIGN]            =
137  [DC_MEMBER]         ::
137  [WORD]              some_type
137  [BRACE_OPEN]        {
137  [DC_MEMBER]         ::
137  [WORD]              some_type
137  [BRACE_OPEN]        {
137  [NUMBER]            1
137  [BRACE_CLOSE]       }
137  [BRACE_CLOSE]       }
137  [SEMICOLON]         ;
137  [NEWLINE]           
138  [BRACE_CLOSE]       }
138  [NEWLINE]           
139  [BRACE_OPEN]        {
139  [NEWLINE]           
140  [TYPE]              auto
140  [WORD]              b
140  [ASSIGN]            =
140  [TYPE]              Ns
140  [DC_MEMBER]         ::
140  [WORD]              some_type
140  [BRACE_OPEN]        {
140  [NUMBER]            1
140  [BRACE_CLOSE]       }
140  [SEMICOLON]         ;
140  [NEWLINE]           
141  [TYPE]              auto
141  [WORD]              c
141  [ASSIGN]            =
141  [TYPE]              Ns
141  [DC_MEMBER]         ::
141  [WORD]              some_type
141  [BRACE_OPEN]        {
141  [TYPE]              Ns
141  [DC_MEMBER]         ::
141  [WORD]              some_type
141  [BRACE_OPEN]        {
141  [NUMBER]            1
141  [BRACE_CLOSE]       }
141  [BRACE_CLOSE]       }
141  [SEMICOLON]         ;
141  [NEWLINE]           
142  [BRACE_CLOSE]       }
142  [NEWLINE]           
143  [BRACE_OPEN]        {
143  [NEWLINE]           
144  [TYPE]              auto
144  [WORD]              b
144  [ASSIGN]            =
144  [DC_MEMBER]         ::
144  [TYPE]              Ns
144  [DC_MEMBER]         ::
144  [WORD]              some_type
144  [BRACE_OPEN]        {
144  [NUMBER]            1
144  [BRACE_CLOSE]       }
144  [SEMICOLON]         ;
144  [NEWLINE]           
145  [TYPE]              auto
145  [WORD]              c
145  [ASSIGN]            =
145  [DC_MEMBER]         ::
145  [TYPE]              Ns
145  [DC_MEMBER]         ::
145  [WORD]              some_type
145  [BRACE_OPEN]        {
145  [DC_MEMBER]         ::
145  [TYPE]              Ns
145  [DC_MEMBER]         ::
145  [WORD]              some_type
145  [BRACE_OPEN]        {
145  [NUMBER]            1
145  [BRACE_CLOSE]       }
145  [BRACE_CLOSE]       }
145  [SEMICOLON]         ;
145  [NEWLINE]           
146  [BRACE_CLOSE]       }
146  [NEWLINE]           
147  [BRACE_CLOSE]       }
147  [NEWLINE]           
149  [TYPE]              void
149  [FUNC_DEF]          braced_init_list_function_call
149  [FPAREN_OPEN]       (
149  [FPAREN_CLOSE]      )
149  [NEWLINE]           
150  [BRACE_OPEN]        {
150  [NEWLINE]           
151  [BRACE_OPEN]        {
151  [NEWLINE]           
152  [TYPE]              some_type
152  [WORD]              a
152  [BRACE_OPEN]        {
152  [FUNC_CALL]         sum
152  [FPAREN_OPEN]       (
152  [TYPE]              some_type
152  [BRACE_OPEN]        {
152  [BRACE_CLOSE]       }
152  [COMMA]             ,
152  [TYPE]              some_type
152  [BRACE_OPEN]        {
152  [BRACE_CLOSE]       }
152  [FPAREN_CLOSE]      )
152  [BRACE_CLOSE]       }
152  [SEMICOLON]         ;
152  [NEWLINE]           
153  [TYPE]              some_type
153  [WORD]              b
153  [ASSIGN]            =
153  [FUNC_CALL]         sum
153  [FPAREN_OPEN]       (
153  [TYPE]              some_type
153  [BRACE_OPEN]        {
153  [BRACE_CLOSE]       }
153  [COMMA]             ,
153  [TYPE]              some_type
153  [BRACE_OPEN]        {
153  [BRACE_CLOSE]       }
153  [FPAREN_CLOSE]      )
153  [SEMICOLON]         ;
153  [NEWLINE]           
154  [TYPE]              some_type
154  [WORD]              c
154  [ASSIGN]            =
154  [WORD]              some_type
154  [BRACE_OPEN]        {
154  [FUNC_CALL]         sum
154  [FPAREN_OPEN]       (
154  [TYPE]              some_type
154  [BRACE_OPEN]        {
154  [BRACE_CLOSE]       }
154  [COMMA]             ,
154  [TYPE]              some_type
154  [BRACE_OPEN]        {
154  [BRACE_CLOSE]       }
154  [FPAREN_CLOSE]      )
154  [BRACE_CLOSE]       }
154  [SEMICOLON]         ;
154  [NEWLINE]           
155  [TYPE]              some_type
155  [BRACE_OPEN]        {
155  [FUNC_CALL]         sum
155  [FPAREN_OPEN]       (
155  [TYPE]              some_type
155  [BRACE_OPEN]        {
155  [BRACE_CLOSE]       }
155  [COMMA]             ,
155  [TYPE]              some_type
155  [BRACE_OPEN]        {
155  [BRACE_CLOSE]       }
155  [FPAREN_CLOSE]      )
155  [BRACE_CLOSE]       }
155  [SEMICOLON]         ;
155  [NEWLINE]           
156  [TYPE]              some_type
156  [BRACE_OPEN]        {
156  [TYPE]              some_type
156  [BRACE_OPEN]        {
156  [FUNC_CALL]         sum
156  [FPAREN_OPEN]       (
156  [TYPE]              some_type
156  [BRACE_OPEN]        {
156  [BRACE_CLOSE]       }
156  [COMMA]             ,
156  [TYPE]              some_type
156  [BRACE_OPEN]        {
156  [BRACE_CLOSE]       }
156  [FPAREN_CLOSE]      )
156  [BRACE_CLOSE]       }
156  [BRACE_CLOSE]       }
156  [SEMICOLON]         ;
156  [NEWLINE]           
157  [BRACE_CLOSE]       }
157  [NEWLINE]           
158  [BRACE_OPEN]        {
158  [NEWLINE]           
159  [TYPE]              some_type
159  [WORD]              a
159  [BRACE_OPEN]        {
159  [FUNC_CALL]         sum
159  [FPAREN_OPEN]       (
159  [TYPE]              some_type
159  [BRACE_OPEN]        {
159  [NUMBER]            1
159  [BRACE_CLOSE]       }
159  [COMMA]             ,
159  [TYPE]              some_type
159  [BRACE_OPEN]        {
159  [NUMBER]            1
159  [BRACE_CLOSE]       }
159  [FPAREN_CLOSE]      )
159  [BRACE_CLOSE]       }
159  [SEMICOLON]         ;
159  [NEWLINE]           
160  [TYPE]              some_type
160  [WORD]              b
160  [ASSIGN]            =
160  [FUNC_CALL]         sum
160  [FPAREN_OPEN]       (
160  [TYPE]              some_type
160  [BRACE_OPEN]        {
160  [NUMBER]            1
160  [BRACE_CLOSE]       }
160  [COMMA]             ,
160  [TYPE]              some_type
160  [BRACE_OPEN]        {
160  [NUMBER]            1
160  [BRACE_CLOSE]       }
160  [FPAREN_CLOSE]      )
160  [SEMICOLON]         ;
160  [NEWLINE]           
161  [TYPE]              some_type
161  [WORD]              c
161  [ASSIGN]            =
161  [WORD]              some_type
161  [BRACE_OPEN]        {
161  [FUNC_CALL]         sum
161  [FPAREN_OPEN]       (
161  [TYPE]              some_type
161  [BRACE_OPEN]        {
161  [NUMBER]            1
161  [BRACE_CLOSE]       }
161  [COMMA]             ,
161  [TYPE]              some_type
161  [BRACE_OPEN]        {
161  [NUMBER]            1
161  [BRACE_CLOSE]       }
161  [FPAREN_CLOSE]      )
161  [BRACE_CLOSE]       }
161  [SEMICOLON]         ;
161  [NEWLINE]           
162  [TYPE]              some_type
162  [BRACE_OPEN]        {
162  [FUNC_CALL]         sum
162  [FPAREN_OPEN]       (
162  [TYPE]              some_type
162  [BRACE_OPEN]        {
162  [WORD]              a
162  [BRACE_CLOSE]       }
162  [COMMA]             ,
162  [TYPE]              some_type
162  [BRACE_OPEN]        {
162  [WORD]              b
162  [BRACE_CLOSE]       }
162  [FPAREN_CLOSE]      )
162  [BRACE_CLOSE]       }
162  [SEMICOLON]         ;
162  [NEWLINE]           
163  [TYPE]              some_type
163  [BRACE_OPEN]        {
163  [TYPE]              some_type
163  [BRACE_OPEN]        {
163  [FUNC_CALL]         sum
163  [FPAREN_OPEN]       (
163  [TYPE]              some_type
163  [BRACE_OPEN]        {
163  [WORD]              a
163  [BRACE_CLOSE]       }
163  [COMMA]             ,
163  [TYPE]              some_type
163  [BRACE_OPEN]        {
163  [WORD]              b
163  [BRACE_CLOSE]       }
163  [FPAREN_CLOSE]      )
163  [BRACE_CLOSE]       }
163  [BRACE_CLOSE]       }
163  [SEMICOLON]         ;
163  [NEWLINE]           
164  [BRACE_CLOSE]       }
164  [NEWLINE]           
165  [BRACE_OPEN]        {
165  [NEWLINE]           
166  [DC_MEMBER]         ::
166  [TYPE]              some_type
166  [WORD]              a
166  [BRACE_OPEN]        {
166  [FUNC_CALL]         sum
166  [FPAREN_OPEN]       (
166  [DC_MEMBER]         ::
166  [TYPE]              some_type
166  [BRACE_OPEN]        {
166  [NUMBER]            1
166  [BRACE_CLOSE]       }
166  [COMMA]             ,
166  [DC_MEMBER]         ::
166  [TYPE]              some_type
166  [BRACE_OPEN]        {
166  [NUMBER]            1
166  [BRACE_CLOSE]       }
166  [FPAREN_CLOSE]      )
166  [BRACE_CLOSE]       }
166  [SEMICOLON]         ;
166  [NEWLINE]           
167  [DC_MEMBER]         ::
167  [TYPE]              some_type
167  [WORD]              b
167  [ASSIGN]            =
167  [FUNC_CALL]         sum
167  [FPAREN_OPEN]       (
167  [DC_MEMBER]         ::
167  [TYPE]              some_type
167  [BRACE_OPEN]        {
167  [NUMBER]            1
167  [BRACE_CLOSE]       }
167  [COMMA]             ,
167  [DC_MEMBER]         ::
167  [TYPE]              some_type
167  [BRACE_OPEN]        {
167  [NUMBER]            1
167  [BRACE_CLOSE]       }
167  [FPAREN_CLOSE]      )
167  [SEMICOLON]         ;
167  [NEWLINE]           
168  [DC_MEMBER]         ::
168  [TYPE]              some_type
168  [WORD]              c
168  [ASSIGN]            =
168  [DC_MEMBER]         ::
168  [WORD]              some_type
168  [BRACE_OPEN]        {
168  [FUNC_CALL]         sum
168  [FPAREN_OPEN]       (
168  [DC_MEMBER]         ::
168  [TYPE]              some_type
168  [BRACE_OPEN]        {
168  [NUMBER]            1
168  [BRACE_CLOSE]       }
168  [COMMA]             ,
168  [DC_MEMBER]         ::
168  [TYPE]              some_type
168  [BRACE_OPEN]        {
168  [NUMBER]            1
168  [BRACE_CLOSE]       }
168  [FPAREN_CLOSE]      )
168  [BRACE_CLOSE]       }
168  [SEMICOLON]         ;
168  [NEWLINE]           
169  [DC_MEMBER]         ::
169  [WORD]              some_type
169  [BRACE_OPEN]        {
169  [FUNC_CALL]         sum
169  [FPAREN_OPEN]       (
169  [DC_MEMBER]         ::
169  [TYPE]              some_type
169  [BRACE_OPEN]        {
169  [WORD]              a
169  [BRACE_CLOSE]       }
169  [COMMA]             ,
169  [DC_MEMBER]         ::
169  [TYPE]              some_type
169  [BRACE_OPEN]        {
169  [WORD]              b
169  [BRACE_CLOSE]       }
169  [FPAREN_CLOSE]      )
169  [BRACE_CLOSE]       }
169  [SEMICOLON]         ;
169  [NEWLINE]           
170  [DC_MEMBER]         ::
170  [WORD]              some_type
170  [BRACE_OPEN]        {
170  [DC_MEMBER]         ::
170  [WORD]              some_type
170  [BRACE_OPEN]        {
170  [FUNC_CALL]         sum
170  [FPAREN_OPEN]       (
170  [DC_MEMBER]         ::
170  [TYPE]              some_type
170  [BRACE_OPEN]        {
170  [WORD]              a
170  [BRACE_CLOSE]       }
170  [COMMA]             ,
170  [DC_MEMBER]         ::
170  [TYPE]              some_type
170  [BRACE_OPEN]        {
170  [WORD]              b
170  [BRACE_CLOSE]       }
170  [FPAREN_CLOSE]      )
170  [BRACE_CLOSE]       }
170  [BRACE_CLOSE]       }
170  [SEMICOLON]         ;
170  [NEWLINE]           
171  [BRACE_CLOSE]       }
171  [NEWLINE]           
172  [BRACE_OPEN]        {
172  [NEWLINE]           
173  [TYPE]              Ns
173  [DC_MEMBER]         ::
173  [TYPE]              some_type
173  [WORD]              a
173  [BRACE_OPEN]        {
173  [FUNC_CALL]         sum
173  [FPAREN_OPEN]       (
173  [TYPE]              Ns
173  [DC_MEMBER]         ::
173  [TYPE]              some_type
173  [BRACE_OPEN]        {
173  [NUMBER]            1
173  [BRACE_CLOSE]       }
173  [COMMA]             ,
173  [TYPE]              Ns
173  [DC_MEMBER]         ::
173  [TYPE]              some_type
173  [BRACE_OPEN]        {
173  [NUMBER]            1
173  [BRACE_CLOSE]       }
173  [FPAREN_CLOSE]      )
173  [BRACE_CLOSE]       }
173  [SEMICOLON]         ;
173  [NEWLINE]           
174  [TYPE]              Ns
174  [DC_MEMBER]         ::
174  [TYPE]              some_type
174  [WORD]              b
174  [ASSIGN]            =
174  [FUNC_CALL]         sum
174  [FPAREN_OPEN]       (
174  [TYPE]              Ns
174  [DC_MEMBER]         ::
174  [TYPE]              some_type
174  [BRACE_OPEN]        {
174  [NUMBER]            1
174  [BRACE_CLOSE]       }
174  [COMMA]             ,
174  [TYPE]              Ns
174  [DC_MEMBER]         ::
174  [TYPE]              some_type
174  [BRACE_OPEN]        {
174  [NUMBER]            1
174  [BRACE_CLOSE]       }
174  [FPAREN_CLOSE]      )
174  [SEMICOLON]         ;
174  [NEWLINE]           
175  [TYPE]              Ns
175  [DC_MEMBER]         ::
175  [TYPE]              some_type
175  [WORD]              c
175  [ASSIGN]            =
175  [TYPE]              Ns
175  [DC_MEMBER]         ::
175  [WORD]              some_type
175  [BRACE_OPEN]        {
175  [FUNC_CALL]         sum
175  [FPAREN_OPEN]       (
175  [TYPE]              Ns
175  [DC_MEMBER]         ::
175  [TYPE]              some_type
175  [BRACE_OPEN]        {
175  [NUMBER]            1
175  [BRACE_CLOSE]       }
175  [COMMA]             ,
175  [TYPE]              Ns
175  [DC_MEMBER]         ::
175  [TYPE]              some_type
175  [BRACE_OPEN]        {
175  [NUMBER]            1
175  [BRACE_CLOSE]       }
175  [FPAREN_CLOSE]      )
175  [BRACE_CLOSE]       }
175  [SEMICOLON]         ;
175  [NEWLINE]           
176  [TYPE]              Ns
176  [DC_MEMBER]         ::
176  [WORD]              some_type
176  [BRACE_OPEN]        {
176  [FUNC_CALL]         sum
176  [FPAREN_OPEN]       (
176  [TYPE]              Ns
176  [DC_MEMBER]         ::
176  [TYPE]              some_type
176  [BRACE_OPEN]        {
176  [WORD]              a
176  [BRACE_CLOSE]       }
176  [COMMA]             ,
176  [TYPE]              Ns
176  [DC_MEMBER]         ::
176  [TYPE]              some_type
176  [BRACE_OPEN]        {
176  [WORD]              b
176  [BRACE_CLOSE]       }
176  [FPAREN_CLOSE]      )
176  [BRACE_CLOSE]       }
176  [SEMICOLON]         ;
176  [NEWLINE]           
177  [TYPE]              Ns
177  [DC_MEMBER]         ::
177  [WORD]              some_type
177  [BRACE_OPEN]        {
177  [TYPE]              Ns
177  [DC_MEMBER]         ::
177  [WORD]              some_type
177  [BRACE_OPEN]        {
177  [FUNC_CALL]         sum
177  [FPAREN_OPEN]       (
177  [TYPE]              Ns
177  [DC_MEMBER]         ::
177  [TYPE]              some_type
177  [BRACE_OPEN]        {
177  [WORD]              a
177  [BRACE_CLOSE]       }
177  [COMMA]             ,
177  [TYPE]              Ns
177  [DC_MEMBER]         ::
177  [TYPE]              some_type
177  [BRACE_OPEN]        {
177  [WORD]              b
177  [BRACE_CLOSE]       }
177  [FPAREN_CLOSE]      )
177  [BRACE_CLOSE]       }
177  [BRACE_CLOSE]       }
177  [SEMICOLON]         ;
177  [NEWLINE]           
178  [BRACE_CLOSE]       }
178  [NEWLINE]           
179  [BRACE_OPEN]        {
179  [NEWLINE]           
180  [DC_MEMBER]         ::
180  [TYPE]              Ns
180  [DC_MEMBER]         ::
180  [TYPE]              some_type
180  [WORD]              a
180  [BRACE_OPEN]        {
180  [FUNC_CALL]         sum
180  [FPAREN_OPEN]       (
180  [DC_MEMBER]         ::
180  [TYPE]              Ns
180  [DC_MEMBER]         ::
180  [TYPE]              some_type
180  [BRACE_OPEN]        {
180  [NUMBER]            1
180  [BRACE_CLOSE]       }
180  [COMMA]             ,
180  [DC_MEMBER]         ::
180  [TYPE]              Ns
180  [DC_MEMBER]         ::
180  [TYPE]              some_type
180  [BRACE_OPEN]        {
180  [NUMBER]            1
180  [BRACE_CLOSE]       }
180  [FPAREN_CLOSE]      )
180  [BRACE_CLOSE]       }
180  [SEMICOLON]         ;
180  [NEWLINE]           
181  [DC_MEMBER]         ::
181  [TYPE]              Ns
181  [DC_MEMBER]         ::
181  [TYPE]              some_type
181  [WORD]              b
181  [ASSIGN]            =
181  [FUNC_CALL]         sum
181  [FPAREN_OPEN]       (
181  [DC_MEMBER]         ::
181  [TYPE]              Ns
181  [DC_MEMBER]         ::
181  [TYPE]              some_type
181  [BRACE_OPEN]        {
181  [NUMBER]            1
181  [BRACE_CLOSE]       }
181  [COMMA]             ,
181  [DC_MEMBER]         ::
181  [TYPE]              Ns
181  [DC_MEMBER]         ::
181  [TYPE]              some_type
181  [BRACE_OPEN]        {
181  [NUMBER]            1
181  [BRACE_CLOSE]       }
181  [FPAREN_CLOSE]      )
181  [SEMICOLON]         ;
181  [NEWLINE]           
182  [DC_MEMBER]         ::
182  [TYPE]              Ns
182  [DC_MEMBER]         ::
182  [TYPE]              some_type
182  [WORD]              c
182  [ASSIGN]            =
182  [DC_MEMBER]         ::
182  [TYPE]              Ns
182  [DC_MEMBER]         ::
182  [WORD]              some_type
182  [BRACE_OPEN]        {
182  [FUNC_CALL]         sum
182  [FPAREN_OPEN]       (
182  [DC_MEMBER]         ::
182  [TYPE]              Ns
182  [DC_MEMBER]         ::
182  [TYPE]              some_type
182  [BRACE_OPEN]        {
182  [NUMBER]            1
182  [BRACE_CLOSE]       }
182  [COMMA]             ,
182  [DC_MEMBER]         ::
182  [TYPE]              Ns
182  [DC_MEMBER]         ::
182  [TYPE]              some_type
182  [BRACE_OPEN]        {
182  [NUMBER]            1
182  [BRACE_CLOSE]       }
182  [FPAREN_CLOSE]      )
182  [BRACE_CLOSE]       }
182  [SEMICOLON]         ;
182  [NEWLINE]           
183  [DC_MEMBER]         ::
183  [TYPE]              Ns
183  [DC_MEMBER]         ::
183  [WORD]              some_type
183  [BRACE_OPEN]        {
183  [FUNC_CALL]         sum
183  [FPAREN_OPEN]       (
183  [DC_MEMBER]         ::
183  [TYPE]              Ns
183  [DC_MEMBER]         ::
183  [TYPE]              some_type
183  [BRACE_OPEN]        {
183  [WORD]              a
183  [BRACE_CLOSE]       }
183  [COMMA]             ,
183  [DC_MEMBER]         ::
183  [TYPE]              Ns
183  [DC_MEMBER]         ::
183  [TYPE]              some_type
183  [BRACE_OPEN]        {
183  [WORD]              b
183  [BRACE_CLOSE]       }
183  [FPAREN_CLOSE]      )
183  [BRACE_CLOSE]       }
183  [SEMICOLON]         ;
183  [NEWLINE]           
184  [DC_MEMBER]         ::
184  [TYPE]              Ns
184  [DC_MEMBER]         ::
184  [WORD]              some_type
184  [BRACE_OPEN]        {
184  [DC_MEMBER]         ::
184  [TYPE]              Ns
184  [DC_MEMBER]         ::
184  [WORD]              some_type
184  [BRACE_OPEN]        {
184  [FUNC_CALL]         sum
184  [FPAREN_OPEN]       (
184  [DC_MEMBER]         ::
184  [TYPE]              Ns
184  [DC_MEMBER]         ::
184  [TYPE]              some_type
184  [BRACE_OPEN]        {
184  [WORD]              a
184  [BRACE_CLOSE]       }
184  [COMMA]             ,
184  [DC_MEMBER]         ::
184  [TYPE]              Ns
184  [DC_MEMBER]         ::
184  [TYPE]              some_type
184  [BRACE_OPEN]        {
184  [WORD]              b
184  [BRACE_CLOSE]       }
184  [FPAREN_CLOSE]      )
184  [BRACE_CLOSE]       }
184  [BRACE_CLOSE]       }
184  [SEMICOLON]         ;
184  [NEWLINE]           
185  [BRACE_CLOSE]       }
185  [NEWLINE]           
186  [BRACE_CLOSE]       }
186  [NEWLINE]           
188  [TYPE]              void
188  [FUNC_DEF]          braced_init_list_function_call_newline
188  [FPAREN_OPEN]       (
188  [FPAREN_CLOSE]      )
188  [NEWLINE]           
189  [BRACE_OPEN]        {
189  [NEWLINE]           
190  [BRACE_OPEN]        {
190  [NEWLINE]           
191  [TYPE]              some_type
191  [WORD]              a
191  [BRACE_OPEN]        {
191  [NEWLINE]           
192  [FUNC_CALL]         sum
192  [FPAREN_OPEN]       (
192  [TYPE]              some_type
192  [BRACE_OPEN]        {
192  [BRACE_CLOSE]       }
192  [COMMA]             ,
192  [NEWLINE]           
193  [TYPE]              some_type
193  [BRACE_OPEN]        {
193  [BRACE_CLOSE]       }
193  [NEWLINE]           
194  [FPAREN_CLOSE]      )
194  [NEWLINE]           
195  [BRACE_CLOSE]       }
195  [SEMICOLON]         ;
195  [NEWLINE]           
196  [TYPE]              some_type
196  [WORD]              b
196  [ASSIGN]            =
196  [FUNC_CALL]         sum
196  [FPAREN_OPEN]       (
196  [NEWLINE]           
197  [TYPE]              some_type
197  [BRACE_OPEN]        {
197  [BRACE_CLOSE]       }
197  [COMMA]             ,
197  [TYPE]              some_type
197  [BRACE_OPEN]        {
197  [BRACE_CLOSE]       }
197  [FPAREN_CLOSE]      )
197  [SEMICOLON]         ;
197  [NEWLINE]           
198  [TYPE]              some_type
198  [WORD]              c
198  [ASSIGN]            =
198  [WORD]              some_type
198  [BRACE_OPEN]        {
198  [NEWLINE]           
199  [FUNC_CALL]         sum
199  [FPAREN_OPEN]       (
199  [NEWLINE]           
200  [TYPE]              some_type
200  [BRACE_OPEN]        {
200  [BRACE_CLOSE]       }
200  [COMMA]             ,
200  [TYPE]              some_type
200  [BRACE_OPEN]        {
200  [BRACE_CLOSE]       }
200  [FPAREN_CLOSE]      )
200  [BRACE_CLOSE]       }
200  [SEMICOLON]         ;
200  [NEWLINE]           
201  [TYPE]              some_type
201  [NEWLINE]           
202  [BRACE_OPEN]        {
202  [FUNC_CALL]         sum
202  [NEWLINE]           
203  [FPAREN_OPEN]       (
203  [TYPE]              some_type
203  [BRACE_OPEN]        {
203  [BRACE_CLOSE]       }
203  [COMMA]             ,
203  [NEWLINE]           
204  [TYPE]              some_type
204  [BRACE_OPEN]        {
204  [BRACE_CLOSE]       }
204  [NEWLINE]           
205  [FPAREN_CLOSE]      )
205  [NEWLINE]           
206  [BRACE_CLOSE]       }
206  [SEMICOLON]         ;
206  [NEWLINE]           
207  [TYPE]              some_type
207  [NEWLINE]           
208  [BRACE_OPEN]        {
208  [TYPE]              some_type
208  [BRACE_OPEN]        {
208  [FUNC_CALL]         sum
208  [NEWLINE]           
209  [FPAREN_OPEN]       (
209  [TYPE]              some_type
209  [BRACE_OPEN]        {
209  [BRACE_CLOSE]       }
209  [COMMA]             ,
209  [TYPE]              some_type
209  [BRACE_OPEN]        {
209  [BRACE_CLOSE]       }
209  [FPAREN_CLOSE]      )
209  [BRACE_CLOSE]       }
209  [BRACE_CLOSE]       }
209  [SEMICOLON]         ;
209  [NEWLINE]           
210  [BRACE_CLOSE]       }
210  [NEWLINE]           
211  [BRACE_CLOSE]       }
211  [NEWLINE]           
213  [TYPE]              void
213  [FUNC_DEF]          braced_init_list_array
213  [FPAREN_OPEN]       (
213  [FPAREN_CLOSE]      )
213  [NEWLINE]           
214  [BRACE_OPEN]        {
214  [NEWLINE]           
215  [BRACE_OPEN]        {
215  [NEWLINE]           
216  [TYPE]              some_type
216  [WORD]              a
216  [TSQUARE]           []
216  [BRACE_OPEN]        {
216  [BRACE_CLOSE]       }
216  [SEMICOLON]         ;
216  [NEWLINE]           
217  [TYPE]              some_type
217  [WORD]              b
217  [TSQUARE]           []
217  [ASSIGN]            =
217  [BRACE_OPEN]        {
217  [BRACE_CLOSE]       }
217  [SEMICOLON]         ;
217  [NEWLINE]           
218  [TYPE]              some_type
218  [WORD]              c
218  [TSQUARE]           []
218  [ASSIGN]            =
218  [BRACE_OPEN]        {
218  [BRACE_OPEN]        {
218  [BRACE_CLOSE]       }
218  [COMMA]             ,
218  [BRACE_OPEN]        {
218  [BRACE_CLOSE]       }
218  [BRACE_CLOSE]       }
218  [SEMICOLON]         ;
218  [NEWLINE]           
219  [BRACE_CLOSE]       }
219  [NEWLINE]           
220  [BRACE_OPEN]        {
220  [NEWLINE]           
221  [TYPE]              some_type
221  [WORD]              a
221  [TSQUARE]           []
221  [BRACE_OPEN]        {
221  [NUMBER]            1
221  [COMMA]             ,
221  [NUMBER]            2
221  [BRACE_CLOSE]       }
221  [SEMICOLON]         ;
221  [NEWLINE]           
222  [TYPE]              some_type
222  [WORD]              b
222  [TSQUARE]           []
222  [ASSIGN]            =
222  [BRACE_OPEN]        {
222  [NUMBER]            1
222  [COMMA]             ,
222  [NUMBER]            2
222  [BRACE_CLOSE]       }
222  [SEMICOLON]         ;
222  [NEWLINE]           
223  [TYPE]              some_type
223  [WORD]              c
223  [TSQUARE]           []
223  [ASSIGN]            =
223  [BRACE_OPEN]        {
223  [WORD]              some_type
223  [BRACE_OPEN]        {
223  [NUMBER]            1
223  [BRACE_CLOSE]       }
223  [COMMA]             ,
223  [WORD]              some_type
223  [BRACE_OPEN]        {
223  [NUMBER]            2
223  [BRACE_CLOSE]       }
223  [BRACE_CLOSE]       }
223  [SEMICOLON]         ;
223  [NEWLINE]           
224  [BRACE_CLOSE]       }
224  [NEWLINE]           
225  [BRACE_CLOSE]       }
225  [NEWLINE]           
227  [TYPE]              void
227  [FUNC_DEF]          braced_init_list_template
227  [FPAREN_OPEN]       (
227  [FPAREN_CLOSE]      )
227  [NEWLINE]           
228  [BRACE_OPEN]        {
228  [NEWLINE]           
229  [BRACE_OPEN]        {
229  [NEWLINE]           
230  [TYPE]              std
230  [DC_MEMBER]         ::
230  [TYPE]              vector
230  [ANGLE_OPEN]        <
230  [TYPE]              some_type
230  [ANGLE_CLOSE]       >
230  [WORD]              a
230  [BRACE_OPEN]        {
230  [BRACE_CLOSE]       }
230  [SEMICOLON]         ;
230  [NEWLINE]           
231  [TYPE]              std
231  [DC_MEMBER]         ::
231  [TYPE]              vector
231  [ANGLE_OPEN]        <
231  [TYPE]              some_type
231  [ANGLE_CLOSE]       >
231  [WORD]              b
231  [ASSIGN]            =
231  [BRACE_OPEN]        {
231  [BRACE_CLOSE]       }
231  [SEMICOLON]         ;
231  [NEWLINE]           
232  [TYPE]              std
232  [DC_MEMBER]         ::
232  [TYPE]              vector
232  [ANGLE_OPEN]        <
232  [TYPE]              some_type
232  [ANGLE_CLOSE]       >
232  [WORD]              c
232  [ASSIGN]            =
232  [BRACE_OPEN]        {
232  [BRACE_OPEN]        {
232  [BRACE_CLOSE]       }
232  [COMMA]             ,
232  [BRACE_OPEN]        {
232  [BRACE_CLOSE]       }
232  [BRACE_CLOSE]       }
232  [SEMICOLON]         ;
232  [NEWLINE]           
233  [TYPE]              std
233  [DC_MEMBER]         ::
233  [TYPE]              vector
233  [ANGLE_OPEN]        <
233  [TYPE]              some_type
233  [ANGLE_CLOSE]       >
233  [WORD]              d
233  [ASSIGN]            =
233  [TYPE]              std
233  [DC_MEMBER]         ::
233  [WORD]              vector
233  [ANGLE_OPEN]        <
233  [TYPE]              some_type
233  [ANGLE_CLOSE]       >
233  [BRACE_OPEN]        {
233  [BRACE_CLOSE]       }
233  [SEMICOLON]         ;
233  [NEWLINE]           
234  [TYPE]              std
234  [DC_MEMBER]         ::
234  [TYPE]              vector
234  [ANGLE_OPEN]        <
234  [TYPE]              some_type
234  [ANGLE_CLOSE]       >
234  [WORD]              e
234  [ASSIGN]            =
234  [TYPE]              std
234  [DC_MEMBER]         ::
234  [WORD]              vector
234  [ANGLE_OPEN]        <
234  [TYPE]              some_type
234  [ANGLE_CLOSE]       >
234  [BRACE_OPEN]        {
234  [BRACE_OPEN]        {
234  [BRACE_CLOSE]       }
234  [COMMA]             ,
234  [BRACE_OPEN]        {
234  [BRACE_CLOSE]       }
234  [BRACE_CLOSE]       }
234  [SEMICOLON]         ;
234  [NEWLINE]           
235  [TYPE]              std
235  [DC_MEMBER]         ::
235  [TYPE]              vector
235  [ANGLE_OPEN]        <
235  [TYPE]              some_type
235  [ANGLE_CLOSE]       >
235  [WORD]              f
235  [ASSIGN]            =
235  [TYPE]              std
235  [DC_MEMBER]         ::
235  [WORD]              vector
235  [ANGLE_OPEN]        <
235  [TYPE]              some_type
235  [ANGLE_CLOSE]       >
235  [BRACE_OPEN]        {
235  [TYPE]              some_type
235  [BRACE_OPEN]        {
235  [BRACE_CLOSE]       }
235  [COMMA]             ,
235  [WORD]              some_type
235  [BRACE_OPEN]        {
235  [BRACE_CLOSE]       }
235  [BRACE_CLOSE]       }
235  [SEMICOLON]         ;
235  [NEWLINE]           
236  [TYPE]              std
236  [DC_MEMBER]         ::
236  [WORD]              vector
236  [ANGLE_OPEN]        <
236  [TYPE]              some_type
236  [ANGLE_CLOSE]       >
236  [BRACE_OPEN]        {
236  [BRACE_CLOSE]       }
236  [SEMICOLON]         ;
236  [NEWLINE]           
237  [TYPE]              std
237  [DC_MEMBER]         ::
237  [WORD]              vector
237  [ANGLE_OPEN]        <
237  [TYPE]              some_type
237  [ANGLE_CLOSE]       >
237  [BRACE_OPEN]        {
237  [BRACE_OPEN]        {
237  [BRACE_CLOSE]       }
237  [COMMA]             ,
237  [BRACE_OPEN]        {
237  [BRACE_CLOSE]       }
237  [BRACE_CLOSE]       }
237  [SEMICOLON]         ;
237  [NEWLINE]           
238  [TYPE]              std
238  [DC_MEMBER]         ::
238  [WORD]              vector
238  [ANGLE_OPEN]        <
238  [TYPE]              some_type
238  [ANGLE_CLOSE]       >
238  [BRACE_OPEN]        {
238  [TYPE]              some_type
238  [BRACE_OPEN]        {
238  [BRACE_CLOSE]       }
238  [COMMA]             ,
238  [WORD]              some_type
238  [BRACE_OPEN]        {
238  [BRACE_CLOSE]       }
238  [BRACE_CLOSE]       }
238  [SEMICOLON]         ;
238  [NEWLINE]           
239  [BRACE_CLOSE]       }
239  [NEWLINE]           
240  [BRACE_OPEN]        {
240  [NEWLINE]           
241  [TYPE]              std
241  [DC_MEMBER]         ::
241  [TYPE]              vector
241  [ANGLE_OPEN]        <
241  [TYPE]              some_type
241  [ANGLE_CLOSE]       >
241  [WORD]              a
241  [BRACE_OPEN]        {
241  [NUMBER]            1
241  [COMMA]             ,
241  [NUMBER]            2
241  [BRACE_CLOSE]       }
241  [SEMICOLON]         ;
241  [NEWLINE]           
242  [TYPE]              std
242  [DC_MEMBER]         ::
242  [TYPE]              vector
242  [ANGLE_OPEN]        <
242  [TYPE]              some_type
242  [ANGLE_CLOSE]       >
242  [WORD]              b
242  [ASSIGN]            =
242  [BRACE_OPEN]        {
242  [NUMBER]            1
242  [COMMA]             ,
242  [NUMBER]            2
242  [BRACE_CLOSE]       }
242  [SEMICOLON]         ;
242  [NEWLINE]           
243  [TYPE]              std
243  [DC_MEMBER]         ::
243  [TYPE]              vector
243  [ANGLE_OPEN]        <
243  [TYPE]              some_type
243  [ANGLE_CLOSE]       >
243  [WORD]              c
243  [ASSIGN]            =
243  [TYPE]              std
243  [DC_MEMBER]         ::
243  [WORD]              vector
243  [ANGLE_OPEN]        <
243  [TYPE]              some_type
243  [ANGLE_CLOSE]       >
243  [BRACE_OPEN]        {
243  [NUMBER]            1
243  [COMMA]             ,
243  [NUMBER]            2
243  [BRACE_CLOSE]       }
243  [SEMICOLON]         ;
243  [NEWLINE]           
244  [TYPE]              std
244  [DC_MEMBER]         ::
244  [TYPE]              vector
244  [ANGLE_OPEN]        <
244  [TYPE]              some_type
244  [ANGLE_CLOSE]       >
244  [WORD]              d
244  [ASSIGN]            =
244  [TYPE]              std
244  [DC_MEMBER]         ::
244  [WORD]              vector
244  [ANGLE_OPEN]        <
244  [TYPE]              some_type
244  [ANGLE_CLOSE]       >
244  [BRACE_OPEN]        {
244  [TYPE]              some_type
244  [BRACE_OPEN]        {
244  [NUMBER]            1
244  [BRACE_CLOSE]       }
244  [COMMA]             ,
244  [WORD]              some_type
244  [BRACE_OPEN]        {
244  [NUMBER]            2
244  [BRACE_CLOSE]       }
244  [BRACE_CLOSE]       }
244  [SEMICOLON]         ;
244  [NEWLINE]           
245  [TYPE]              std
245  [DC_MEMBER]         ::
245  [WORD]              vector
245  [ANGLE_OPEN]        <
245  [TYPE]              some_type
245  [ANGLE_CLOSE]       >
245  [BRACE_OPEN]        {
245  [NUMBER]            1
245  [COMMA]             ,
245  [NUMBER]            2
245  [BRACE_CLOSE]       }
245  [SEMICOLON]         ;
245  [NEWLINE]           
246  [TYPE]              std
246  [DC_MEMBER]         ::
246  [WORD]              vector
246  [ANGLE_OPEN]        <
246  [TYPE]              some_type
246  [ANGLE_CLOSE]       >
246  [BRACE_OPEN]        {
246  [TYPE]              some_type
246  [BRACE_OPEN]        {
246  [NUMBER]            1
246  [BRACE_CLOSE]       }
246  [COMMA]             ,
246  [WORD]              some_type
246  [BRACE_OPEN]        {
246  [NUMBER]            2
246  [BRACE_CLOSE]       }
246  [BRACE_CLOSE]       }
246  [SEMICOLON]         ;
246  [NEWLINE]           
247  [BRACE_CLOSE]       }
247  [NEWLINE]           
248  [BRACE_CLOSE]       }
248  [NEWLINE]           
250  [TYPE]              void
250  [FUNC_DEF]          braced_init_list_lambda
250  [FPAREN_OPEN]       (
250  [FPAREN_CLOSE]      )
250  [NEWLINE]           
251  [BRACE_OPEN]        {
251  [NEWLINE]           
252  [TYPE]              std
252  [DC_MEMBER]         ::
252  [TYPE]              vector
252  [ANGLE_OPEN]        <
252  [TYPE]              some_type
252  [ANGLE_CLOSE]       >
252  [WORD]              a
252  [BRACE_OPEN]        {
252  [NUMBER]            1
252  [COMMA]             ,
252  [NUMBER]            2
252  [BRACE_CLOSE]       }
252  [SEMICOLON]         ;
252  [NEWLINE]           
253  [TYPE]              some_type
253  [WORD]              b
253  [BRACE_OPEN]        {
253  [NUMBER]            2
253  [BRACE_CLOSE]       }
253  [SEMICOLON]         ;
253  [NEWLINE]           
255  [TYPE]              auto
255  [WORD]              c
255  [ASSIGN]            =
255  [SQUARE_OPEN]       [
255  [SQUARE_CLOSE]      ]
255  [BRACE_OPEN]        {
255  [NEWLINE]           
255  [RETURN]            return
255  [WORD]              true
255  [SEMICOLON]         ;
255  [NEWLINE]           
255  [BRACE_CLOSE]       }
255  [SEMICOLON]         ;
255  [NEWLINE]           
256  [TYPE]              auto
256  [WORD]              d
256  [ASSIGN]            =
256  [SQUARE_OPEN]       [
256  [SQUARE_CLOSE]      ]
256  [FPAREN_OPEN]       (
256  [FPAREN_CLOSE]      )
256  [BRACE_OPEN]        {
256  [NEWLINE]           
256  [RETURN]            return
256  [WORD]              true
256  [SEMICOLON]         ;
256  [NEWLINE]           
256  [BRACE_CLOSE]       }
256  [SEMICOLON]         ;
256  [NEWLINE]           
258  [TYPE]              std
258  [DC_MEMBER]         ::
258  [FUNC_CALL]         find_if
258  [FPAREN_OPEN]       (
258  [WORD]              a
258  [MEMBER]            .
258  [FUNC_CALL]         begin
258  [FPAREN_OPEN]       (
258  [FPAREN_CLOSE]      )
258  [COMMA]             ,
258  [WORD]              a
258  [MEMBER]            .
258  [FUNC_CALL]         end
258  [FPAREN_OPEN]       (
258  [FPAREN_CLOSE]      )
258  [COMMA]             ,
258  [SQUARE_OPEN]       [
258  [ADDR]              &
258  [WORD]              b
258  [SQUARE_CLOSE]      ]
258  [FPAREN_OPEN]       (
258  [QUALIFIER]         const
258  [TYPE]              some_type
258  [BYREF]             &
258  [WORD]              v
258  [FPAREN_CLOSE]      )
258  [BRACE_OPEN]        {
258  [NEWLINE]           
258  [RETURN]            return
258  [WORD]              v
258  [COMPARE]           ==
258  [WORD]              b
258  [SEMICOLON]         ;
258  [NEWLINE]           
258  [BRACE_CLOSE]       }
258  [FPAREN_CLOSE]      )
258  [SEMICOLON]         ;
258  [NEWLINE]           
259  [TYPE]              std
259  [DC_MEMBER]         ::
259  [FUNC_CALL]         find_if
259  [FPAREN_OPEN]       (
259  [WORD]              a
259  [MEMBER]            .
259  [FUNC_CALL]         begin
259  [FPAREN_OPEN]       (
259  [FPAREN_CLOSE]      )
259  [COMMA]             ,
259  [WORD]              a
259  [MEMBER]            .
259  [FUNC_CALL]         end
259  [FPAREN_OPEN]       (
259  [FPAREN_CLOSE]      )
259  [COMMA]             ,
259  [SQUARE_OPEN]       [
259  [SQUARE_CLOSE]      ]
259  [FPAREN_OPEN]       (
259  [QUALIFIER]         const
259  [TYPE]              some_type
259  [BYREF]             &
259  [WORD]              v
259  [FPAREN_CLOSE]      )
259  [BRACE_OPEN]        {
259  [NEWLINE]           
259  [TYPE]              some_type
259  [TYPE]              b
259  [BRACE_OPEN]        {
259  [NUMBER]            2
259  [BRACE_CLOSE]       }
259  [SEMICOLON]         ;
259  [RETURN]            return
259  [WORD]              v
259  [COMPARE]           ==
259  [WORD]              b
259  [SEMICOLON]         ;
259  [NEWLINE]           
259  [BRACE_CLOSE]       }
259  [FPAREN_CLOSE]      )
259  [SEMICOLON]         ;
259  [NEWLINE]           
260  [BRACE_CLOSE]       }
260  [NEWLINE]           