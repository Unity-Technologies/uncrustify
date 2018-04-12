Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        include
1    [PREPROC_BODY]      <list>
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_INCLUDE]        include
2    [PREPROC_BODY]      <map>
2    [NEWLINE]           
3    [PREPROC]           #
3    [PP_INCLUDE]        include
3    [PREPROC_BODY]      <vector>
3    [NEWLINE]           
5    [PREPROC]           #
5    [PP_DEFINE]         define
5    [MACRO_FUNC]        MACRO
5    [FPAREN_OPEN]       (
5    [WORD]              T
5    [FPAREN_CLOSE]      )
5    [FUNC_CALL]         f
5    [ANGLE_OPEN]        <
5    [TYPE]              T
5    [ANGLE_CLOSE]       >
5    [FPAREN_OPEN]       (
5    [FPAREN_CLOSE]      )
5    [NEWLINE]           
7    [CLASS]             class
7    [TYPE]              MyClass
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [PRIVATE]           public
9    [PRIVATE_COLON]     :
9    [NEWLINE]           
10   [TYPE]              std
10   [DC_MEMBER]         ::
10   [TYPE]              map
10   [ANGLE_OPEN]        <
10   [TYPE]              int
10   [COMMA]             ,
10   [TYPE]              bool
10   [ANGLE_CLOSE]       >
10   [WORD]              someData
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [TYPE]              std
11   [DC_MEMBER]         ::
11   [TYPE]              map
11   [ANGLE_OPEN]        <
11   [TYPE]              int
11   [COMMA]             ,
11   [TYPE]              std
11   [DC_MEMBER]         ::
11   [TYPE]              list
11   [ANGLE_OPEN]        <
11   [TYPE]              bool
11   [ANGLE_CLOSE]       >
11   [ANGLE_CLOSE]       >
11   [WORD]              otherData
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [SEMICOLON]         ;
12   [NEWLINE]           
14   [TYPE]              void
14   [FUNC_DEF]          foo
14   [FPAREN_OPEN]       (
14   [FPAREN_CLOSE]      )
14   [NEWLINE]           
15   [BRACE_OPEN]        {
15   [NEWLINE]           
16   [TYPE]              List
16   [ANGLE_OPEN]        <
16   [TYPE]              byte
16   [ANGLE_CLOSE]       >
16   [WORD]              bob
16   [ASSIGN]            =
16   [NEW]               new
16   [FUNC_CALL]         List
16   [ANGLE_OPEN]        <
16   [TYPE]              byte
16   [ANGLE_CLOSE]       >
16   [FPAREN_OPEN]       (
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [NEWLINE]           
20   [TYPE]              A
20   [ANGLE_OPEN]        <
20   [TYPE]              B
20   [ANGLE_CLOSE]       >
20   [WORD]              foo
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [TYPE]              A
21   [ANGLE_OPEN]        <
21   [TYPE]              B
21   [COMMA]             ,
21   [TYPE]              C
21   [ANGLE_CLOSE]       >
21   [WORD]              bar
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [TYPE]              A
22   [ANGLE_OPEN]        <
22   [TYPE]              B
22   [PTR_TYPE]          *
22   [ANGLE_CLOSE]       >
22   [WORD]              baz
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [TYPE]              A
23   [ANGLE_OPEN]        <
23   [TYPE]              B
23   [ANGLE_OPEN]        <
23   [TYPE]              C
23   [ANGLE_CLOSE]       >
23   [ANGLE_CLOSE]       >
23   [WORD]              bay
23   [SEMICOLON]         ;
23   [NEWLINE]           
25   [TYPE]              void
25   [FUNC_DEF]          asd
25   [FPAREN_OPEN]       (
25   [TYPE]              void
25   [FPAREN_CLOSE]      )
25   [NEWLINE]           
26   [BRACE_OPEN]        {
26   [NEWLINE]           
27   [TYPE]              A
27   [ANGLE_OPEN]        <
27   [TYPE]              B
27   [ANGLE_CLOSE]       >
27   [WORD]              foo
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [TYPE]              A
28   [ANGLE_OPEN]        <
28   [TYPE]              B
28   [COMMA]             ,
28   [TYPE]              C
28   [ANGLE_CLOSE]       >
28   [WORD]              bar
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [TYPE]              A
29   [ANGLE_OPEN]        <
29   [TYPE]              B
29   [PTR_TYPE]          *
29   [ANGLE_CLOSE]       >
29   [WORD]              baz
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [TYPE]              A
30   [ANGLE_OPEN]        <
30   [TYPE]              B
30   [ANGLE_OPEN]        <
30   [TYPE]              C
30   [ANGLE_CLOSE]       >
30   [ANGLE_CLOSE]       >
30   [WORD]              bay
30   [SEMICOLON]         ;
30   [NEWLINE]           
31   [IF]                if
31   [SPAREN_OPEN]       (
31   [WORD]              a
31   [COMPARE]           <
31   [WORD]              b
31   [BOOL]              &&
31   [WORD]              b
31   [COMPARE]           >
31   [WORD]              c
31   [SPAREN_CLOSE]      )
31   [NEWLINE]           
32   [BRACE_OPEN]        {
32   [NEWLINE]           
33   [WORD]              a
33   [ASSIGN]            =
33   [WORD]              b
33   [COMPARE]           <
33   [WORD]              c
33   [COMPARE]           >
33   [NUMBER]            0
33   [SEMICOLON]         ;
33   [NEWLINE]           
34   [BRACE_CLOSE]       }
34   [NEWLINE]           
35   [IF]                if
35   [SPAREN_OPEN]       (
35   [TYPE]              a
35   [ANGLE_OPEN]        <
35   [FUNC_CALL]         bar
35   [FPAREN_OPEN]       (
35   [FPAREN_CLOSE]      )
35   [ANGLE_CLOSE]       >
35   [WORD]              c
35   [SPAREN_CLOSE]      )
35   [NEWLINE]           
36   [BRACE_OPEN]        {
36   [NEWLINE]           
37   [BRACE_CLOSE]       }
37   [NEWLINE]           
38   [WORD]              a
38   [COMPARE]           <
38   [FUNC_CALL]         up_lim
38   [FPAREN_OPEN]       (
38   [FPAREN_CLOSE]      )
38   [QUESTION]          ?
38   [FUNC_CALL]         do_hi
38   [FPAREN_OPEN]       (
38   [FPAREN_CLOSE]      )
38   [COND_COLON]        :
38   [WORD]              do_low
38   [SEMICOLON]         ;
38   [NEWLINE]           
39   [WORD]              a
39   [SQUARE_OPEN]       [
39   [TYPE]              a
39   [ANGLE_OPEN]        <
39   [TYPE]              b
39   [ANGLE_CLOSE]       >
39   [WORD]              c
39   [SQUARE_CLOSE]      ]
39   [ASSIGN]            =
39   [WORD]              d
39   [SEMICOLON]         ;
39   [NEWLINE]           
40   [BRACE_CLOSE]       }
40   [NEWLINE]           
42   [TEMPLATE]          template
42   [ANGLE_OPEN]        <
42   [TYPENAME]          typename
42   [TYPE]              T
42   [ANGLE_CLOSE]       >
42   [CLASS]             class
42   [TYPE]              MyClass
42   [NEWLINE]           
43   [BRACE_OPEN]        {
43   [NEWLINE]           
45   [BRACE_CLOSE]       }
45   [NEWLINE]           
47   [TEMPLATE]          template
47   [ANGLE_OPEN]        <
47   [TYPENAME]          typename
47   [TYPE]              T
47   [ANGLE_CLOSE]       >
47   [NEWLINE]           
48   [CLASS]             class
48   [TYPE]              MyClass
48   [NEWLINE]           
49   [BRACE_OPEN]        {
49   [NEWLINE]           
50   [BRACE_CLOSE]       }
50   [NEWLINE]           
52   [TEMPLATE]          template
52   [ANGLE_OPEN]        <
52   [TYPENAME]          typename
52   [TYPE]              A
52   [COMMA]             ,
52   [TYPENAME]          typename
52   [TYPE]              B
52   [COMMA]             ,
52   [TYPENAME]          typename
52   [TYPE]              C
52   [ANGLE_CLOSE]       >
52   [CLASS]             class
52   [TYPE]              MyClass
52   [CLASS_COLON]       :
52   [FUNC_CALL]         myvar
52   [FPAREN_OPEN]       (
52   [NUMBER]            0
52   [FPAREN_CLOSE]      )
52   [COMMA]             ,
52   [NEWLINE]           
53   [FUNC_CALL]         myvar2
53   [FPAREN_OPEN]       (
53   [NUMBER]            0
53   [FPAREN_CLOSE]      )
53   [NEWLINE]           
54   [BRACE_OPEN]        {
54   [NEWLINE]           
56   [BRACE_CLOSE]       }
56   [NEWLINE]           
58   [TEMPLATE]          template
58   [ANGLE_OPEN]        <
58   [TYPENAME]          typename
58   [TYPE]              A
58   [COMMA]             ,
58   [TYPENAME]          typename
58   [TYPE]              B
58   [COMMA]             ,
58   [TYPENAME]          typename
58   [TYPE]              C
58   [ANGLE_CLOSE]       >
58   [CLASS]             class
58   [TYPE]              MyClass
58   [NEWLINE]           
59   [CLASS_COLON]       :
59   [FUNC_CALL]         myvar
59   [FPAREN_OPEN]       (
59   [NUMBER]            0
59   [FPAREN_CLOSE]      )
59   [COMMA]             ,
59   [NEWLINE]           
60   [FUNC_CALL]         myvar2
60   [FPAREN_OPEN]       (
60   [NUMBER]            0
60   [FPAREN_CLOSE]      )
60   [NEWLINE]           
61   [BRACE_OPEN]        {
61   [NEWLINE]           
63   [BRACE_CLOSE]       }
63   [NEWLINE]           
66   [QUALIFIER]         static
66   [TYPE]              int
66   [FUNC_DEF]          max_value
66   [FPAREN_OPEN]       (
66   [FPAREN_CLOSE]      )
66   [NEWLINE]           
67   [BRACE_OPEN]        {
67   [NEWLINE]           
68   [RETURN]            return
68   [PAREN_OPEN]        (
68   [TYPE]              std
68   [DC_MEMBER]         ::
68   [WORD]              numeric_limits
68   [ANGLE_OPEN]        <
68   [TYPE]              int
68   [ANGLE_CLOSE]       >
68   [DC_MEMBER]         ::
68   [WORD]              max
68   [PAREN_CLOSE]       )
68   [FPAREN_OPEN]       (
68   [FPAREN_CLOSE]      )
68   [SEMICOLON]         ;
68   [NEWLINE]           
69   [BRACE_CLOSE]       }
69   [NEWLINE]           
71   [TEMPLATE]          template
71   [ANGLE_OPEN]        <
71   [TYPE]              class
71   [TYPE]              Config_
71   [ANGLE_CLOSE]       >
71   [NEWLINE]           
72   [WORD]              priority_queue
72   [ANGLE_OPEN]        <
72   [TYPE]              Config_
72   [ANGLE_CLOSE]       >
72   [DC_MEMBER]         ::
72   [DESTRUCTOR]        ~
72   [FUNC_CLASS_DEF]    priority_queue
72   [FPAREN_OPEN]       (
72   [FPAREN_CLOSE]      )
72   [BRACE_OPEN]        {
72   [NEWLINE]           
74   [BRACE_CLOSE]       }
74   [NEWLINE]           
76   [TEMPLATE]          template
76   [ANGLE_OPEN]        <
76   [TYPE]              class
76   [TYPE]              T
76   [ANGLE_CLOSE]       >
76   [NEWLINE]           
77   [TYPE]              T
77   [FUNC_DEF]          test
77   [FPAREN_OPEN]       (
77   [TYPE]              T
77   [WORD]              a
77   [FPAREN_CLOSE]      )
77   [BRACE_OPEN]        {
77   [NEWLINE]           
78   [RETURN]            return
78   [WORD]              a
78   [SEMICOLON]         ;
78   [NEWLINE]           
79   [BRACE_CLOSE]       }
79   [NEWLINE]           
81   [TYPE]              int
81   [FUNC_DEF]          main
81   [FPAREN_OPEN]       (
81   [FPAREN_CLOSE]      )
81   [BRACE_OPEN]        {
81   [NEWLINE]           
82   [TYPE]              int
82   [WORD]              k
82   [COMMA]             ,
82   [WORD]              j
82   [SEMICOLON]         ;
82   [NEWLINE]           
83   [TYPE]              h
83   [WORD]              g
83   [ANGLE_OPEN]        <
83   [TYPE]              int
83   [ANGLE_CLOSE]       >
83   [SEMICOLON]         ;
83   [NEWLINE]           
84   [WORD]              k
84   [ASSIGN]            =
84   [FUNC_CALL]         test
84   [ANGLE_OPEN]        <
84   [TYPE]              int
84   [ANGLE_CLOSE]       >
84   [FPAREN_OPEN]       (
84   [WORD]              j
84   [FPAREN_CLOSE]      )
84   [SEMICOLON]         ;
84   [NEWLINE]           
85   [RETURN]            return
85   [NUMBER]            0
85   [SEMICOLON]         ;
85   [NEWLINE]           
86   [BRACE_CLOSE]       }
86   [NEWLINE]           
88   [TEMPLATE]          template
88   [ANGLE_OPEN]        <
88   [TYPENAME]          typename
88   [TYPE]              T
88   [COMMA]             ,
88   [TEMPLATE]          template
88   [ANGLE_OPEN]        <
88   [TYPENAME]          typename
88   [COMMA]             ,
88   [TYPE]              unsigned
88   [TYPE]              int
88   [COMMA]             ,
88   [TYPE]              unsigned
88   [TYPE]              int
88   [ANGLE_CLOSE]       >
88   [TYPE]              class
88   [TYPE]              ConcreteStorageClass
88   [ANGLE_CLOSE]       >
88   [NEWLINE]           
89   [CLASS]             class
89   [TYPE]              RotationMatrix
89   [NEWLINE]           
90   [CLASS_COLON]       :
90   [QUALIFIER]         public
90   [WORD]              StaticBaseMatrix
90   [ANGLE_OPEN]        <
90   [WORD]              T
90   [COMMA]             ,
90   [NUMBER]            3
90   [COMMA]             ,
90   [NUMBER]            3
90   [COMMA]             ,
90   [WORD]              ConcreteStorageClass
90   [ANGLE_CLOSE]       >
90   [NEWLINE]           
91   [BRACE_OPEN]        {
91   [NEWLINE]           
93   [PRIVATE]           public
93   [PRIVATE_COLON]     :
93   [NEWLINE]           
95   [FUNC_CLASS_DEF]    RotationMatrix
95   [FPAREN_OPEN]       (
95   [FPAREN_CLOSE]      )
95   [NEWLINE]           
96   [CONSTR_COLON]      :
96   [FUNC_CTOR_VAR]     StaticBaseMatrix
96   [ANGLE_OPEN]        <
96   [WORD]              T
96   [COMMA]             ,
96   [NUMBER]            3
96   [COMMA]             ,
96   [NUMBER]            3
96   [COMMA]             ,
96   [WORD]              ConcreteStorageClass
96   [ANGLE_CLOSE]       >
96   [FPAREN_OPEN]       (
96   [FPAREN_CLOSE]      )
96   [NEWLINE]           
97   [BRACE_OPEN]        {
97   [NEWLINE]           
98   [COMMENT_CPP]       // do some initialization
98   [NEWLINE]           
99   [BRACE_CLOSE]       }
99   [NEWLINE]           
101  [TYPE]              void
101  [FUNC_DEF]          assign
101  [FPAREN_OPEN]       (
101  [QUALIFIER]         const
101  [TYPE]              OtherClass
101  [ANGLE_OPEN]        <
101  [WORD]              T
101  [COMMA]             ,
101  [NUMBER]            3
101  [COMMA]             ,
101  [NUMBER]            3
101  [ANGLE_CLOSE]       >
101  [BYREF]             &
101  [WORD]              other
101  [FPAREN_CLOSE]      )
101  [NEWLINE]           
102  [BRACE_OPEN]        {
102  [NEWLINE]           
103  [COMMENT_CPP]       // do something
103  [NEWLINE]           
104  [BRACE_CLOSE]       }
104  [NEWLINE]           
106  [BRACE_CLOSE]       }
106  [SEMICOLON]         ;
106  [NEWLINE]           
108  [TYPE]              int
108  [FUNC_DEF]          main
108  [FPAREN_OPEN]       (
108  [FPAREN_CLOSE]      )
108  [NEWLINE]           
109  [BRACE_OPEN]        {
109  [NEWLINE]           
110  [TYPE]              MyClass
110  [ANGLE_OPEN]        <
110  [TYPE]              double
110  [COMMA]             ,
110  [NUMBER]            3
110  [COMMA]             ,
110  [NUMBER]            3
110  [COMMA]             ,
110  [WORD]              MyStorage
110  [ANGLE_CLOSE]       >
110  [WORD]              foo
110  [SEMICOLON]         ;
110  [NEWLINE]           
111  [BRACE_CLOSE]       }
111  [NEWLINE]           
113  [TEMPLATE]          template
113  [ANGLE_OPEN]        <
113  [TYPENAME]          typename
113  [TYPE]              CharT
113  [COMMA]             ,
113  [TYPE]              int
113  [TYPE]              N
113  [COMMA]             ,
113  [TYPENAME]          typename
113  [TYPE]              Traits
113  [ANGLE_CLOSE]       >
113  [NEWLINE]           
114  [QUALIFIER]         inline
114  [TYPE]              std
114  [DC_MEMBER]         ::
114  [TYPE]              basic_ostream
114  [ANGLE_OPEN]        <
114  [TYPE]              CharT
114  [COMMA]             ,
114  [TYPE]              Traits
114  [ANGLE_CLOSE]       >
114  [BYREF]             &
114  [FUNC_DEF]          FWStreamOut
114  [FPAREN_OPEN]       (
114  [TYPE]              std
114  [DC_MEMBER]         ::
114  [TYPE]              basic_ostream
114  [ANGLE_OPEN]        <
114  [TYPE]              CharT
114  [COMMA]             ,
114  [TYPE]              Traits
114  [ANGLE_CLOSE]       >
114  [BYREF]             &
114  [WORD]              os
114  [COMMA]             ,
114  [NEWLINE]           
115  [QUALIFIER]         const
115  [TYPE]              W
115  [DC_MEMBER]         ::
115  [TYPE]              S
115  [ANGLE_OPEN]        <
115  [TYPE]              CharT
115  [COMMA]             ,
115  [TYPE]              N
115  [COMMA]             ,
115  [TYPE]              Traits
115  [ANGLE_CLOSE]       >
115  [BYREF]             &
115  [WORD]              s
115  [FPAREN_CLOSE]      )
115  [NEWLINE]           
116  [BRACE_OPEN]        {
116  [NEWLINE]           
117  [RETURN]            return
117  [OPERATOR]          operator
117  [OPERATOR_VAL]      <<
117  [ANGLE_OPEN]        <
117  [TYPE]              CharT
117  [COMMA]             ,
117  [TYPE]              N
117  [COMMA]             ,
117  [TYPE]              Traits
117  [COMMA]             ,
117  [TYPE]              char
117  [COMMA]             ,
117  [TYPE]              std
117  [DC_MEMBER]         ::
117  [TYPE]              char_traits
117  [ANGLE_OPEN]        <
117  [TYPE]              char
117  [ANGLE_CLOSE]       >
117  [ANGLE_CLOSE]       >
117  [PAREN_OPEN]        (
117  [WORD]              os
117  [COMMA]             ,
117  [WORD]              s
117  [PAREN_CLOSE]       )
117  [SEMICOLON]         ;
117  [NEWLINE]           
118  [BRACE_CLOSE]       }
118  [NEWLINE]           
120  [STRUCT]            struct
120  [TYPE]              foo
120  [BRACE_OPEN]        {
120  [NEWLINE]           
121  [TYPE]              type1
121  [ANGLE_OPEN]        <
121  [TYPE]              int
121  [BYREF]             &
121  [ANGLE_CLOSE]       >
121  [WORD]              bar
121  [SEMICOLON]         ;
121  [NEWLINE]           
122  [BRACE_CLOSE]       }
122  [SEMICOLON]         ;
122  [NEWLINE]           
123  [STRUCT]            struct
123  [TYPE]              foo
123  [BRACE_OPEN]        {
123  [NEWLINE]           
124  [TYPE]              type1
124  [ANGLE_OPEN]        <
124  [TYPE]              int
124  [QUALIFIER]         const
124  [ANGLE_CLOSE]       >
124  [WORD]              bar
124  [SEMICOLON]         ;
124  [NEWLINE]           
125  [BRACE_CLOSE]       }
125  [SEMICOLON]         ;
125  [NEWLINE]           
128  [TEMPLATE]          template
128  [ANGLE_OPEN]        <
128  [TYPE]              int
128  [TYPE]              i
128  [ANGLE_CLOSE]       >
128  [TYPE]              void
128  [FUNC_PROTO]        f
128  [FPAREN_OPEN]       (
128  [FPAREN_CLOSE]      )
128  [SEMICOLON]         ;
128  [NEWLINE]           
129  [TEMPLATE]          template
129  [ANGLE_OPEN]        <
129  [TYPE]              int
129  [TYPE]              i
129  [ANGLE_CLOSE]       >
129  [TYPE]              void
129  [FUNC_DEF]          g
129  [FPAREN_OPEN]       (
129  [FPAREN_CLOSE]      )
129  [BRACE_OPEN]        {
129  [NEWLINE]           
130  [FUNC_CALL]         f
130  [ANGLE_OPEN]        <
130  [WORD]              i
130  [ARITH]             -
130  [NUMBER]            1
130  [ANGLE_CLOSE]       >
130  [FPAREN_OPEN]       (
130  [FPAREN_CLOSE]      )
130  [SEMICOLON]         ;
130  [NEWLINE]           
131  [FUNC_CALL]         f
131  [ANGLE_OPEN]        <
131  [TYPE]              i
131  [ANGLE_CLOSE]       >
131  [FPAREN_OPEN]       (
131  [FPAREN_CLOSE]      )
131  [SEMICOLON]         ;
131  [NEWLINE]           
132  [FUNC_CALL]         f
132  [ANGLE_OPEN]        <
132  [WORD]              i
132  [ARITH]             +
132  [NUMBER]            1
132  [ANGLE_CLOSE]       >
132  [FPAREN_OPEN]       (
132  [FPAREN_CLOSE]      )
132  [SEMICOLON]         ;
132  [NEWLINE]           
133  [FUNC_CALL]         f
133  [ANGLE_OPEN]        <
133  [FUNC_CALL]         bar
133  [FPAREN_OPEN]       (
133  [FPAREN_CLOSE]      )
133  [ANGLE_CLOSE]       >
133  [FPAREN_OPEN]       (
133  [FPAREN_CLOSE]      )
133  [SEMICOLON]         ;
133  [NEWLINE]           
134  [BRACE_CLOSE]       }
134  [NEWLINE]           
135  [TYPE]              void
135  [FUNC_DEF]          h
135  [FPAREN_OPEN]       (
135  [FPAREN_CLOSE]      )
135  [BRACE_OPEN]        {
135  [NEWLINE]           
135  [FUNC_CALL]         g
135  [ANGLE_OPEN]        <
135  [NUMBER]            42
135  [ANGLE_CLOSE]       >
135  [FPAREN_OPEN]       (
135  [FPAREN_CLOSE]      )
135  [SEMICOLON]         ;
135  [NEWLINE]           
135  [BRACE_CLOSE]       }
135  [NEWLINE]           
137  [PREPROC]           #
137  [PP_INCLUDE]        include
137  [PREPROC_BODY]      <vector>
137  [NEWLINE]           
138  [TYPE]              std
138  [DC_MEMBER]         ::
138  [TYPE]              vector
138  [ANGLE_OPEN]        <
138  [TYPE]              int
138  [ANGLE_CLOSE]       >
138  [FUNC_CTOR_VAR]     A
138  [FPAREN_OPEN]       (
138  [NUMBER]            2
138  [FPAREN_CLOSE]      )
138  [SEMICOLON]         ;
138  [NEWLINE]           
139  [TYPE]              std
139  [DC_MEMBER]         ::
139  [TYPE]              vector
139  [ANGLE_OPEN]        <
139  [TYPE]              int
139  [ANGLE_CLOSE]       >
139  [WORD]              B
139  [SEMICOLON]         ;
139  [NEWLINE]           
140  [TYPE]              std
140  [DC_MEMBER]         ::
140  [TYPE]              vector
140  [ANGLE_OPEN]        <
140  [TYPE]              int
140  [ANGLE_CLOSE]       >
140  [FUNC_CTOR_VAR]     C
140  [FPAREN_OPEN]       (
140  [NUMBER]            2
140  [FPAREN_CLOSE]      )
140  [SEMICOLON]         ;
140  [NEWLINE]           
141  [TYPE]              std
141  [DC_MEMBER]         ::
141  [TYPE]              vector
141  [ANGLE_OPEN]        <
141  [TYPE]              int
141  [ANGLE_CLOSE]       >
141  [WORD]              D
141  [SEMICOLON]         ;
141  [NEWLINE]           
143  [TEMPLATE]          template
143  [ANGLE_OPEN]        <
143  [TYPE]              class
143  [TYPE]              T
143  [ANGLE_CLOSE]       >
143  [STRUCT]            struct
143  [TYPE]              X
143  [BRACE_OPEN]        {
143  [TEMPLATE]          template
143  [ANGLE_OPEN]        <
143  [TYPE]              class
143  [TYPE]              U
143  [ANGLE_CLOSE]       >
143  [TYPE]              void
143  [OPERATOR]          operator
143  [FUNC_PROTO]        ()
143  [FPAREN_OPEN]       (
143  [TYPE]              U
143  [FPAREN_CLOSE]      )
143  [SEMICOLON]         ;
143  [BRACE_CLOSE]       }
143  [SEMICOLON]         ;
143  [NEWLINE]           
145  [TEMPLATE]          template
145  [ANGLE_OPEN]        <
145  [TYPE]              class
145  [TYPE]              T
145  [ANGLE_CLOSE]       >
145  [CLASS]             class
145  [TYPE]              Y
145  [BRACE_OPEN]        {
145  [TEMPLATE]          template
145  [ANGLE_OPEN]        <
145  [TYPE]              class
145  [TYPE]              V
145  [ANGLE_CLOSE]       >
145  [TYPE]              void
145  [FUNC_CTOR_VAR]     f
145  [FPAREN_OPEN]       (
145  [WORD]              V
145  [FPAREN_CLOSE]      )
145  [SEMICOLON]         ;
145  [BRACE_CLOSE]       }
145  [SEMICOLON]         ;
145  [NEWLINE]           
147  [TYPE]              void
147  [TPAREN_OPEN]       (
147  [PTR_TYPE]          *
147  [FUNC_VAR]          foobar
147  [TPAREN_CLOSE]      )
147  [FPAREN_OPEN]       (
147  [TYPE]              void
147  [FPAREN_CLOSE]      )
147  [ASSIGN]            =
147  [WORD]              NULL
147  [SEMICOLON]         ;
147  [NEWLINE]           
148  [TYPE]              std
148  [DC_MEMBER]         ::
148  [TYPE]              vector
148  [ANGLE_OPEN]        <
148  [TYPE]              void
148  [PAREN_OPEN]        (
148  [PTR_TYPE]          *
148  [PAREN_CLOSE]       )
148  [FPAREN_OPEN]       (
148  [TYPE]              void
148  [FPAREN_CLOSE]      )
148  [ANGLE_CLOSE]       >
148  [WORD]              functions
148  [SEMICOLON]         ;
148  [NEWLINE]           
150  [PREPROC]           #
150  [PP_DEFINE]         define
150  [MACRO_FUNC]        MACRO
150  [FPAREN_OPEN]       (
150  [WORD]              a
150  [FPAREN_CLOSE]      )
150  [WORD]              a
150  [NEWLINE]           
151  [TEMPLATE]          template
151  [ANGLE_OPEN]        <
151  [TYPENAME]          typename
151  [ASSIGN]            =
151  [TYPE]              int
151  [ANGLE_CLOSE]       >
151  [CLASS]             class
151  [TYPE]              X
151  [SEMICOLON]         ;
151  [NEWLINE]           
152  [FUNC_CALL]         MACRO
152  [FPAREN_OPEN]       (
152  [TYPE]              void
152  [FUNC_PROTO]        f
152  [FPAREN_OPEN]       (
152  [TYPE]              X
152  [ANGLE_OPEN]        <
152  [ANGLE_CLOSE]       >
152  [BYREF]             &
152  [WORD]              x
152  [FPAREN_CLOSE]      )
152  [FPAREN_CLOSE]      )
152  [SEMICOLON]         ;
152  [NEWLINE]           
153  [TYPE]              void
153  [FUNC_PROTO]        g
153  [FPAREN_OPEN]       (
153  [TYPE]              X
153  [ANGLE_OPEN]        <
153  [ANGLE_CLOSE]       >
153  [BYREF]             &
153  [WORD]              x
153  [FPAREN_CLOSE]      )
153  [SEMICOLON]         ;
153  [NEWLINE]           
155  [PREPROC]           #
155  [PP_INCLUDE]        include
155  [PREPROC_BODY]      <vector>
155  [NEWLINE]           
156  [TYPEDEF]           typedef
156  [TYPE]              std
156  [DC_MEMBER]         ::
156  [TYPE]              vector
156  [ANGLE_OPEN]        <
156  [TYPE]              std
156  [DC_MEMBER]         ::
156  [TYPE]              vector
156  [ANGLE_OPEN]        <
156  [TYPE]              int
156  [ANGLE_CLOSE]       >
156  [ANGLE_CLOSE]       >
156  [TYPE]              Table
156  [SEMICOLON]         ;
156  [COMMENT_CPP]       // OK
156  [NEWLINE]           
157  [TYPEDEF]           typedef
157  [TYPE]              std
157  [DC_MEMBER]         ::
157  [TYPE]              vector
157  [ANGLE_OPEN]        <
157  [TYPE]              std
157  [DC_MEMBER]         ::
157  [TYPE]              vector
157  [ANGLE_OPEN]        <
157  [TYPE]              bool
157  [ANGLE_CLOSE]       >
157  [ANGLE_CLOSE]       >
157  [TYPE]              Flags
157  [SEMICOLON]         ;
157  [COMMENT_CPP]       // Error
157  [NEWLINE]           
159  [TYPE]              void
159  [FUNC_PROTO]        func
159  [FPAREN_OPEN]       (
159  [TYPE]              List
159  [ANGLE_OPEN]        <
159  [TYPE]              B
159  [ANGLE_CLOSE]       >
159  [ASSIGN]            =
159  [TYPE]              default_val1
159  [FPAREN_CLOSE]      )
159  [SEMICOLON]         ;
159  [NEWLINE]           
160  [TYPE]              void
160  [FUNC_PROTO]        func
160  [FPAREN_OPEN]       (
160  [TYPE]              List
160  [ANGLE_OPEN]        <
160  [TYPE]              List
160  [ANGLE_OPEN]        <
160  [TYPE]              B
160  [ANGLE_CLOSE]       >
160  [ANGLE_CLOSE]       >
160  [ASSIGN]            =
160  [TYPE]              default_val2
160  [FPAREN_CLOSE]      )
160  [SEMICOLON]         ;
160  [NEWLINE]           
162  [TYPE]              BLAH
162  [ANGLE_OPEN]        <
162  [PAREN_OPEN]        (
162  [NUMBER_FP]         3.14
162  [COMPARE]           >=
162  [NUMBER]            42
162  [PAREN_CLOSE]       )
162  [ANGLE_CLOSE]       >
162  [WORD]              blah
162  [SEMICOLON]         ;
162  [NEWLINE]           
163  [TYPE]              bool
163  [WORD]              X
163  [ASSIGN]            =
163  [WORD]              j
163  [ANGLE_OPEN]        <
163  [NUMBER]            3
163  [ANGLE_CLOSE]       >
163  [COMPARE]           >
163  [NUMBER]            1
163  [SEMICOLON]         ;
163  [NEWLINE]           
165  [TYPE]              void
165  [FUNC_DEF]          foo
165  [FPAREN_OPEN]       (
165  [FPAREN_CLOSE]      )
165  [NEWLINE]           
166  [BRACE_OPEN]        {
166  [NEWLINE]           
167  [TYPE]              A
167  [ANGLE_OPEN]        <
167  [PAREN_OPEN]        (
167  [TYPE]              X
167  [COMPARE]           >
167  [TYPE]              Y
167  [PAREN_CLOSE]       )
167  [ANGLE_CLOSE]       >
167  [WORD]              a
167  [SEMICOLON]         ;
167  [NEWLINE]           
168  [WORD]              a
168  [ASSIGN]            =
168  [TYPE_CAST]         static_cast
168  [ANGLE_OPEN]        <
168  [TYPE]              List
168  [ANGLE_OPEN]        <
168  [TYPE]              B
168  [ANGLE_CLOSE]       >
168  [ANGLE_CLOSE]       >
168  [PAREN_OPEN]        (
168  [WORD]              ld
168  [PAREN_CLOSE]       )
168  [SEMICOLON]         ;
168  [NEWLINE]           
169  [BRACE_CLOSE]       }
169  [NEWLINE]           
171  [TEMPLATE]          template
171  [ANGLE_OPEN]        <
171  [TYPE]              int
171  [TYPE]              i
171  [ANGLE_CLOSE]       >
171  [CLASS]             class
171  [TYPE]              X
171  [BRACE_OPEN]        {
171  [COMMENT]           /* ... */
171  [BRACE_CLOSE]       }
171  [SEMICOLON]         ;
171  [NEWLINE]           
172  [WORD]              X
172  [COMPARE]           <
172  [NUMBER]            1
172  [COMPARE]           >
172  [NUMBER]            2
172  [COMPARE]           >
172  [WORD]              x1
172  [SEMICOLON]         ;
172  [COMMENT_CPP]       // Syntax error.
172  [NEWLINE]           
173  [TYPE]              X
173  [ANGLE_OPEN]        <
173  [PAREN_OPEN]        (
173  [NUMBER]            1
173  [COMPARE]           >
173  [NUMBER]            2
173  [PAREN_CLOSE]       )
173  [ANGLE_CLOSE]       >
173  [WORD]              x2
173  [SEMICOLON]         ;
173  [COMMENT_CPP]       // Okay.
173  [NEWLINE]           
175  [TEMPLATE]          template
175  [ANGLE_OPEN]        <
175  [TYPE]              class
175  [TYPE]              T
175  [ANGLE_CLOSE]       >
175  [CLASS]             class
175  [TYPE]              Y
175  [BRACE_OPEN]        {
175  [COMMENT]           /* ... */
175  [BRACE_CLOSE]       }
175  [SEMICOLON]         ;
175  [NEWLINE]           
176  [TYPE]              Y
176  [ANGLE_OPEN]        <
176  [WORD]              X
176  [ANGLE_OPEN]        <
176  [NUMBER]            1
176  [ANGLE_CLOSE]       >
176  [ANGLE_CLOSE]       >
176  [WORD]              x3
176  [SEMICOLON]         ;
176  [COMMENT_CPP]       // Okay, same as "Y<X<1> > x3;".
176  [NEWLINE]           
177  [TYPE]              Y
177  [ANGLE_OPEN]        <
177  [WORD]              X
177  [ANGLE_OPEN]        <
177  [PAREN_OPEN]        (
177  [NUMBER]            6
177  [ARITH]             >>
177  [NUMBER]            1
177  [PAREN_CLOSE]       )
177  [ANGLE_CLOSE]       >
177  [ANGLE_CLOSE]       >
177  [WORD]              x4
177  [SEMICOLON]         ;
177  [NEWLINE]           
180  [TEMPLATE]          template
180  [ANGLE_OPEN]        <
180  [TYPENAME]          typename
180  [TYPE]              T
180  [ANGLE_CLOSE]       >
180  [NEWLINE]           
181  [TYPE]              int
181  [NEWLINE]           
182  [FUNC_PROTO]        myFunc1
182  [FPAREN_OPEN]       (
182  [TYPENAME]          typename
182  [TYPE]              T
182  [DC_MEMBER]         ::
182  [TYPE]              Subtype
182  [WORD]              val
182  [FPAREN_CLOSE]      )
182  [SEMICOLON]         ;
182  [NEWLINE]           
184  [TYPE]              int
184  [NEWLINE]           
185  [FUNC_PROTO]        myFunc2
185  [FPAREN_OPEN]       (
185  [TYPE]              T
185  [DC_MEMBER]         ::
185  [TYPE]              Subtype
185  [WORD]              val
185  [FPAREN_CLOSE]      )
185  [SEMICOLON]         ;
185  [NEWLINE]           