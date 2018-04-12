Line [Token]             Text
1    [CLASS]             class
1    [TYPE]              SomeClass
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [PRIVATE]           public
3    [PRIVATE_COLON]     :
3    [NEWLINE]           
4    [COMMENT_CPP]       // Short parameters
4    [NEWLINE]           
5    [TYPE]              TYPE_EXPORT
5    [FUNC_PROTO]        method1
5    [FPAREN_OPEN]       (
5    [TYPE]              int
5    [WORD]              a
5    [COMMA]             ,
5    [NEWLINE]           
6    [TYPE]              float
6    [WORD]              b
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
8    [TYPE]              TYPE_EXPORT
8    [FUNC_PROTO]        method2
8    [FPAREN_OPEN]       (
8    [TYPE]              int
8    [BYREF]             &
8    [WORD]              d
8    [COMMA]             ,
8    [NEWLINE]           
9    [TYPE]              float
9    [WORD]              e
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
11   [TYPE]              TYPE_EXPORT
11   [FUNC_PROTO]        method3
11   [FPAREN_OPEN]       (
11   [TYPE]              int
11   [PTR_TYPE]          *
11   [WORD]              f
11   [COMMA]             ,
11   [NEWLINE]           
12   [TYPE]              float
12   [WORD]              g
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
14   [COMMENT_CPP]       // Parameters with '&' and '*'
14   [NEWLINE]           
15   [TYPE]              TYPE_EXPORT
15   [FUNC_PROTO]        method4
15   [FPAREN_OPEN]       (
15   [TYPE]              int
15   [WORD]              a
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [TYPE]              TYPE_EXPORT
16   [FUNC_PROTO]        method5
16   [FPAREN_OPEN]       (
16   [TYPE]              int
16   [BYREF]             &
16   [WORD]              a
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [TYPE]              TYPE_EXPORT
17   [FUNC_PROTO]        method6
17   [FPAREN_OPEN]       (
17   [TYPE]              int
17   [PTR_TYPE]          *
17   [WORD]              a
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           
19   [TYPE]              TYPE_EXPORT
19   [FUNC_PROTO]        method7
19   [FPAREN_OPEN]       (
19   [TYPE]              float
19   [WORD]              a
19   [FPAREN_CLOSE]      )
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [TYPE]              TYPE_EXPORT
20   [FUNC_PROTO]        method8
20   [FPAREN_OPEN]       (
20   [TYPE]              float
20   [BYREF]             &
20   [WORD]              a
20   [FPAREN_CLOSE]      )
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [TYPE]              TYPE_EXPORT
21   [FUNC_PROTO]        method9
21   [FPAREN_OPEN]       (
21   [TYPE]              float
21   [PTR_TYPE]          *
21   [WORD]              a
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [NEWLINE]           
23   [COMMENT_CPP]       // Single short and long parameters
23   [NEWLINE]           
24   [TYPE]              void
24   [FUNC_PROTO]        method10
24   [FPAREN_OPEN]       (
24   [TYPE]              int
24   [WORD]              a
24   [FPAREN_CLOSE]      )
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [TYPE]              void
25   [FUNC_PROTO]        method11
25   [FPAREN_OPEN]       (
25   [TYPE]              float
25   [BYREF]             &
25   [WORD]              a
25   [FPAREN_CLOSE]      )
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [TYPE]              void
26   [FUNC_PROTO]        method12
26   [FPAREN_OPEN]       (
26   [TYPE]              SomeLongNamespace
26   [DC_MEMBER]         ::
26   [TYPE]              SomeLongType
26   [WORD]              long_parameter_name
26   [FPAREN_CLOSE]      )
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [TYPE]              void
27   [FUNC_PROTO]        method13
27   [FPAREN_OPEN]       (
27   [TYPE]              double
27   [PTR_TYPE]          *
27   [WORD]              a
27   [FPAREN_CLOSE]      )
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [TYPE]              void
28   [FUNC_PROTO]        method14
28   [FPAREN_OPEN]       (
28   [TYPE]              SomeLongType
28   [WORD]              long_parameter_name
28   [FPAREN_CLOSE]      )
28   [SEMICOLON]         ;
28   [NEWLINE]           
30   [COMMENT_CPP]       // Long parameters
30   [NEWLINE]           
31   [TYPE]              void
31   [FUNC_PROTO]        method20
31   [FPAREN_OPEN]       (
31   [TYPE]              int
31   [PTR_TYPE]          *
31   [WORD]              int_param
31   [COMMA]             ,
31   [NEWLINE]           
32   [TYPE]              SomeLongNamespace
32   [DC_MEMBER]         ::
32   [TYPE]              SomeLongType
32   [WORD]              long_parameter_name
32   [COMMA]             ,
32   [NEWLINE]           
33   [TYPE]              float
33   [BYREF]             &
33   [WORD]              float_param
33   [FPAREN_CLOSE]      )
33   [SEMICOLON]         ;
33   [NEWLINE]           
35   [COMMENT_CPP]       // Possible bug: different aligning in method21 and method22
35   [NEWLINE]           
36   [COMMENT_CPP]       // align_func_params_span = 1, align_func_params_thresh = 8
36   [NEWLINE]           
37   [TYPE]              void
37   [FUNC_PROTO]        method21
37   [FPAREN_OPEN]       (
37   [TYPE]              SomeLoooooooooooooongType
37   [WORD]              long_param_1
37   [COMMA]             ,
37   [NEWLINE]           
38   [QUALIFIER]         const
38   [TYPE]              string
38   [BYREF]             &
38   [WORD]              string_param_1
38   [COMMA]             ,
38   [NEWLINE]           
39   [QUALIFIER]         const
39   [TYPE]              TimePoint
39   [BYREF]             &
39   [WORD]              time_param
39   [COMMA]             ,
39   [NEWLINE]           
40   [TYPE]              double
40   [WORD]              double_param_1
40   [COMMA]             ,
40   [NEWLINE]           
41   [TYPE]              double
41   [WORD]              double_param_2
41   [COMMA]             ,
41   [NEWLINE]           
42   [QUALIFIER]         const
42   [TYPE]              string
42   [BYREF]             &
42   [WORD]              string_param_2
42   [COMMA]             ,
42   [NEWLINE]           
43   [TYPE]              SomeLoooooooooooooongType
43   [WORD]              long_param_2
43   [FPAREN_CLOSE]      )
43   [SEMICOLON]         ;
43   [NEWLINE]           
44   [TYPE]              void
44   [FUNC_PROTO]        method22
44   [FPAREN_OPEN]       (
44   [TYPE]              SomeLoooooooooooooongType
44   [WORD]              long_param_1
44   [COMMA]             ,
44   [NEWLINE]           
45   [QUALIFIER]         const
45   [TYPE]              string
45   [BYREF]             &
45   [WORD]              string_param_1
45   [COMMA]             ,
45   [NEWLINE]           
46   [TYPE]              double
46   [WORD]              double_param_1
46   [COMMA]             ,
46   [NEWLINE]           
47   [TYPE]              double
47   [WORD]              double_param_2
47   [COMMA]             ,
47   [NEWLINE]           
48   [QUALIFIER]         const
48   [TYPE]              TimePoint
48   [BYREF]             &
48   [WORD]              time_param
48   [COMMA]             ,
48   [NEWLINE]           
49   [QUALIFIER]         const
49   [TYPE]              string
49   [BYREF]             &
49   [WORD]              string_param_2
49   [COMMA]             ,
49   [NEWLINE]           
50   [TYPE]              SomeLoooooooooooooongType
50   [WORD]              long_param_2
50   [FPAREN_CLOSE]      )
50   [SEMICOLON]         ;
50   [NEWLINE]           
52   [TYPE]              void
52   [FUNC_PROTO]        method23
52   [FPAREN_OPEN]       (
52   [TYPE]              int
52   [WORD]              int_param
52   [COMMA]             ,
52   [NEWLINE]           
53   [TYPE]              int
53   [PTR_TYPE]          *
53   [WORD]              int_ptr_param
53   [COMMA]             ,
53   [NEWLINE]           
54   [TYPE]              float
54   [WORD]              float_param
54   [COMMA]             ,
54   [NEWLINE]           
55   [TYPE]              float
55   [BYREF]             &
55   [WORD]              float_ref_param
55   [COMMA]             ,
55   [NEWLINE]           
56   [TYPE]              SomeLongNamespace
56   [DC_MEMBER]         ::
56   [TYPE]              SomeLongType
56   [WORD]              long_parameter_name
56   [COMMA]             ,
56   [NEWLINE]           
57   [TYPE]              int
57   [PTR_TYPE]          *
57   [WORD]              other_int_param
57   [COMMA]             ,
57   [NEWLINE]           
58   [TYPE]              SomeLooooongType
58   [WORD]              long_parameter_name
58   [COMMA]             ,
58   [NEWLINE]           
59   [TYPE]              SomeLoooooooooongType
59   [WORD]              looong_parameter_name
59   [COMMA]             ,
59   [NEWLINE]           
60   [TYPE]              SomeLongNamespace
60   [DC_MEMBER]         ::
60   [TYPE]              OtherLongNamespace
60   [DC_MEMBER]         ::
60   [TYPE]              SomeLongType
60   [WORD]              very_long_parameter_name
60   [COMMA]             ,
60   [NEWLINE]           
61   [TYPE]              int
61   [PTR_TYPE]          *
61   [WORD]              int_ptr_param
61   [COMMA]             ,
61   [NEWLINE]           
62   [TYPE]              float
62   [WORD]              float_param
62   [COMMA]             ,
62   [NEWLINE]           
63   [TYPE]              float
63   [BYREF]             &
63   [WORD]              float_ref_param
63   [COMMA]             ,
63   [NEWLINE]           
64   [TYPE]              double
64   [BYREF]             &
64   [WORD]              double_param
64   [COMMA]             ,
64   [NEWLINE]           
65   [TYPE]              SomeLongNamespace
65   [DC_MEMBER]         ::
65   [TYPE]              SomeLongType
65   [WORD]              long_parameter_name
65   [COMMA]             ,
65   [NEWLINE]           
66   [TYPE]              int
66   [PTR_TYPE]          *
66   [WORD]              other_int_param
66   [FPAREN_CLOSE]      )
66   [SEMICOLON]         ;
66   [NEWLINE]           
68   [COMMENT_CPP]       // Don't align several parameters in one line
68   [NEWLINE]           
69   [TYPE]              void
69   [FUNC_PROTO]        method30
69   [FPAREN_OPEN]       (
69   [TYPE]              int
69   [PTR_TYPE]          *
69   [WORD]              f
69   [COMMA]             ,
69   [TYPE]              char
69   [WORD]              foo
69   [COMMA]             ,
69   [NEWLINE]           
70   [TYPE]              float
70   [WORD]              g
70   [FPAREN_CLOSE]      )
70   [SEMICOLON]         ;
70   [NEWLINE]           
72   [COMMENT_CPP]       // Short parameters in method definition
72   [NEWLINE]           
73   [TYPE]              void
73   [FUNC_DEF]          method40
73   [FPAREN_OPEN]       (
73   [TYPE]              int
73   [WORD]              a
73   [COMMA]             ,
73   [NEWLINE]           
74   [TYPE]              float
74   [WORD]              b
74   [FPAREN_CLOSE]      )
74   [NEWLINE]           
75   [BRACE_OPEN]        {
75   [NEWLINE]           
76   [TYPE]              int
76   [WORD]              c
76   [SEMICOLON]         ;
76   [NEWLINE]           
78   [IF]                if
78   [SPAREN_OPEN]       (
78   [WORD]              true
78   [SPAREN_CLOSE]      )
78   [VBRACE_OPEN]       
78   [WORD]              callProc
78   [SEMICOLON]         ;
78   [VBRACE_CLOSE]      
78   [NEWLINE]           
79   [COMMENT_CPP]       // do stuff.
79   [NEWLINE]           
80   [BRACE_CLOSE]       }
80   [NEWLINE]           
82   [COMMENT_CPP]       // Long parameters in method definition
82   [NEWLINE]           
83   [TYPE]              void
83   [FUNC_DEF]          method50
83   [FPAREN_OPEN]       (
83   [TYPE]              int
83   [WORD]              int_param
83   [COMMA]             ,
83   [NEWLINE]           
84   [TYPE]              SomeLongNamespace
84   [DC_MEMBER]         ::
84   [TYPE]              OtherLongNamespace
84   [DC_MEMBER]         ::
84   [TYPE]              SomeLongType
84   [WORD]              long_parameter_name
84   [COMMA]             ,
84   [NEWLINE]           
85   [TYPE]              float
85   [WORD]              float_param
85   [COMMA]             ,
85   [NEWLINE]           
86   [TYPE]              double
86   [WORD]              double_param
86   [COMMA]             ,
86   [NEWLINE]           
87   [QUALIFIER]         const
87   [TYPE]              string
87   [BYREF]             &
87   [WORD]              string_param
87   [FPAREN_CLOSE]      )
87   [NEWLINE]           
88   [BRACE_OPEN]        {
88   [NEWLINE]           
89   [FUNC_CALL]         doSomething
89   [FPAREN_OPEN]       (
89   [FPAREN_CLOSE]      )
89   [SEMICOLON]         ;
89   [NEWLINE]           
90   [BRACE_CLOSE]       }
90   [NEWLINE]           
92   [TYPE]              void
92   [FUNC_DEF]          method51
92   [FPAREN_OPEN]       (
92   [NEWLINE]           
93   [TYPE]              int
93   [WORD]              int_param
93   [COMMA]             ,
93   [NEWLINE]           
94   [TYPE]              SomeLongNamespace
94   [DC_MEMBER]         ::
94   [TYPE]              OtherLongNamespace
94   [DC_MEMBER]         ::
94   [TYPE]              SomeLongType
94   [WORD]              long_parameter_name
94   [COMMA]             ,
94   [NEWLINE]           
95   [TYPE]              float
95   [WORD]              float_param
95   [COMMA]             ,
95   [NEWLINE]           
96   [TYPE]              double
96   [WORD]              double_param
96   [COMMA]             ,
96   [NEWLINE]           
97   [QUALIFIER]         const
97   [TYPE]              string
97   [BYREF]             &
97   [WORD]              string_param
97   [FPAREN_CLOSE]      )
97   [NEWLINE]           
98   [BRACE_OPEN]        {
98   [NEWLINE]           
99   [FUNC_CALL]         doSomething
99   [FPAREN_OPEN]       (
99   [FPAREN_CLOSE]      )
99   [SEMICOLON]         ;
99   [NEWLINE]           
100  [BRACE_CLOSE]       }
100  [NEWLINE]           
101  [BRACE_CLOSE]       }
101  [SEMICOLON]         ;
101  [NEWLINE]           