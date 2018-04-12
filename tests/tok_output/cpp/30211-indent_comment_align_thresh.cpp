Line [Token]             Text
1    [COMMENT_CPP]       // First comment
1    [NEWLINE]           
2    [COMMENT_CPP]       // Second comment
2    [NEWLINE]           
4    [COMMENT_CPP]       // First comment
4    [NEWLINE]           
5    [COMMENT_CPP]       // Second comment
5    [NEWLINE]           
7    [COMMENT_CPP]       // Issue #1134
7    [NEWLINE]           
8    [CLASS]             class
8    [TYPE]              MyClass
8    [CLASS_COLON]       :
8    [QUALIFIER]         public
8    [WORD]              BaseClass
8    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [COMMENT_CPP]       //@{ BaseClass interface
10   [NEWLINE]           
11   [PREPROC]           #
11   [PP_IF]             if
11   [WORD]              VERY_LONG_AND_COMPLICATED_DEFINE
11   [NEWLINE]           
12   [TYPE]              void
12   [FUNC_PROTO]        foo
12   [FPAREN_OPEN]       (
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [PREPROC]           #
13   [PP_ENDIF]          endif
13   [COMMENT_CPP]       // VERY_LONG_AND_COMPLICATED_DEFINE
13   [NEWLINE]           
14   [COMMENT_CPP]       //@}
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [SEMICOLON]         ;
15   [NEWLINE]           
17   [COMMENT_CPP]       // Issue #1287
17   [NEWLINE]           
18   [TYPE]              void
18   [FUNC_DEF]          foo
18   [FPAREN_OPEN]       (
18   [FPAREN_CLOSE]      )
18   [NEWLINE]           
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [PREPROC]           #
20   [PP_IF]             if
20   [PP_DEFINED]        defined
20   [PAREN_OPEN]        (
20   [WORD]              SUPPORT_FEATURE
20   [PAREN_CLOSE]       )
20   [NEWLINE]           
21   [FUNC_CALL]         bar
21   [FPAREN_OPEN]       (
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [PREPROC]           #
22   [PP_ENDIF]          endif
22   [COMMENT_CPP]       // SUPPORT_FEATURE
22   [NEWLINE]           
23   [COMMENT_CPP]       // Handle error
23   [NEWLINE]           
24   [IF]                if
24   [SPAREN_OPEN]       (
24   [WORD]              error
24   [COMPARE]           !=
24   [NUMBER]            0
24   [SPAREN_CLOSE]      )
24   [NEWLINE]           
25   [BRACE_OPEN]        {
25   [NEWLINE]           
26   [BRACE_CLOSE]       }
26   [NEWLINE]           
28   [PREPROC]           #
28   [PP_IF]             if
28   [PP_DEFINED]        defined
28   [PAREN_OPEN]        (
28   [WORD]              SUPPORT_FEATURE
28   [PAREN_CLOSE]       )
28   [NEWLINE]           
29   [FUNC_CALL]         bar
29   [FPAREN_OPEN]       (
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [PREPROC]           #
30   [PP_ENDIF]          endif
30   [COMMENT_CPP]       // SUPPORT_FEATURE
30   [NEWLINE]           
31   [COMMENT_CPP]       // Handle error
31   [NEWLINE]           
32   [COMMENT_CPP]       // Handle error
32   [NEWLINE]           
33   [IF]                if
33   [SPAREN_OPEN]       (
33   [WORD]              error
33   [COMPARE]           !=
33   [NUMBER]            0
33   [SPAREN_CLOSE]      )
33   [NEWLINE]           
34   [BRACE_OPEN]        {
34   [NEWLINE]           
35   [BRACE_CLOSE]       }
35   [NEWLINE]           
37   [PREPROC]           #
37   [PP_IF]             if
37   [PP_DEFINED]        defined
37   [PAREN_OPEN]        (
37   [WORD]              SUPPORT_FEATURE
37   [PAREN_CLOSE]       )
37   [NEWLINE]           
38   [FUNC_CALL]         bar
38   [FPAREN_OPEN]       (
38   [FPAREN_CLOSE]      )
38   [SEMICOLON]         ;
38   [NEWLINE]           
39   [PREPROC]           #
39   [PP_ENDIF]          endif
39   [COMMENT_CPP]       // SUPPORT_FEATURE
39   [NEWLINE]           
40   [COMMENT_CPP]       // SUPPORT_FEATURE
40   [NEWLINE]           
41   [COMMENT_CPP]       // Handle error
41   [NEWLINE]           
42   [COMMENT_CPP]       // Handle error
42   [NEWLINE]           
43   [IF]                if
43   [SPAREN_OPEN]       (
43   [WORD]              error
43   [COMPARE]           !=
43   [NUMBER]            0
43   [SPAREN_CLOSE]      )
43   [NEWLINE]           
44   [BRACE_OPEN]        {
44   [NEWLINE]           
45   [BRACE_CLOSE]       }
45   [NEWLINE]           
47   [PREPROC]           #
47   [PP_IF]             if
47   [PP_DEFINED]        defined
47   [PAREN_OPEN]        (
47   [WORD]              SUPPORT_FEATURE
47   [PAREN_CLOSE]       )
47   [NEWLINE]           
48   [FUNC_CALL]         bar
48   [FPAREN_OPEN]       (
48   [FPAREN_CLOSE]      )
48   [SEMICOLON]         ;
48   [NEWLINE]           
49   [PREPROC]           #
49   [PP_ENDIF]          endif
49   [COMMENT_CPP]       // SUPPORT_FEATURE
49   [NEWLINE]           
50   [COMMENT_CPP]       // SUPPORT_FEATURE
50   [NEWLINE]           
51   [COMMENT_CPP]       // Handle error
51   [NEWLINE]           
52   [COMMENT_CPP]       // Handle error
52   [NEWLINE]           
53   [IF]                if
53   [SPAREN_OPEN]       (
53   [WORD]              error
53   [COMPARE]           !=
53   [NUMBER]            0
53   [SPAREN_CLOSE]      )
53   [NEWLINE]           
54   [BRACE_OPEN]        {
54   [NEWLINE]           
55   [BRACE_CLOSE]       }
55   [NEWLINE]           
57   [PREPROC]           #
57   [PP_IF]             if
57   [PP_DEFINED]        defined
57   [PAREN_OPEN]        (
57   [WORD]              SUPPORT_FEATURE
57   [PAREN_CLOSE]       )
57   [NEWLINE]           
58   [FUNC_CALL]         bar
58   [FPAREN_OPEN]       (
58   [FPAREN_CLOSE]      )
58   [SEMICOLON]         ;
58   [NEWLINE]           
59   [PREPROC]           #
59   [PP_ENDIF]          endif
59   [COMMENT_MULTI]     /* SUPPORT_FEATURE␤            SUPPORT_FEATURE */
60   [NEWLINE]           
61   [COMMENT_CPP]       // Handle error
61   [NEWLINE]           
62   [COMMENT_CPP]       // Handle error
62   [NEWLINE]           
63   [IF]                if
63   [SPAREN_OPEN]       (
63   [WORD]              error
63   [COMPARE]           !=
63   [NUMBER]            0
63   [SPAREN_CLOSE]      )
63   [NEWLINE]           
64   [BRACE_OPEN]        {
64   [NEWLINE]           
65   [BRACE_CLOSE]       }
65   [NEWLINE]           
66   [BRACE_CLOSE]       }
66   [NEWLINE]           
68   [COMMENT_CPP]       // ----- Some namespace scope --------------------------------------------------
68   [NEWLINE]           
69   [COMMENT_CPP]       // ----- FooNamespace scope ----------------------------------------------------
69   [NEWLINE]           
70   [NAMESPACE]         namespace
70   [WORD]              FooNamespace
70   [NEWLINE]           
71   [BRACE_OPEN]        {
71   [NEWLINE]           
72   [COMMENT_CPP]       // ----- Some classes scope ----------------------------------------------------
72   [NEWLINE]           
73   [COMMENT_CPP]       // ----- FooClass scope --------------------------------------------------------
73   [NEWLINE]           
74   [CLASS]             class
74   [TYPE]              FooClass
74   [NEWLINE]           
75   [BRACE_OPEN]        {
75   [NEWLINE]           
76   [USING]             using
76   [WORD]              FooUsing
76   [ASSIGN]            =
76   [WORD]              FooTemplate
76   [ANGLE_OPEN]        <
76   [NEWLINE]           
77   [TYPE]              param1
77   [COMMA]             ,
77   [NEWLINE]           
78   [TYPE]              param2
78   [NEWLINE]           
79   [ANGLE_CLOSE]       >
79   [SEMICOLON]         ;
79   [COMMENT_CPP]       // FooTemplate
79   [NEWLINE]           
80   [COMMENT_CPP]       // Foo description
80   [NEWLINE]           
81   [TYPE]              void
81   [FUNC_DEF]          foo
81   [FPAREN_OPEN]       (
81   [FPAREN_CLOSE]      )
81   [NEWLINE]           
82   [BRACE_OPEN]        {
82   [NEWLINE]           
83   [IF]                if
83   [SPAREN_OPEN]       (
83   [WORD]              a
83   [COMPARE]           ==
83   [WORD]              b
83   [SPAREN_CLOSE]      )
83   [NEWLINE]           
84   [BRACE_OPEN]        {
84   [NEWLINE]           
85   [COMMENT_CPP]       // Col1 comment
85   [NEWLINE]           
86   [COMMENT_CPP]       // Col1 comment
86   [NEWLINE]           
87   [COMMENT_CPP]       // Col1 comment
87   [NEWLINE]           
88   [COMMENT_CPP]       // Baz description
88   [NEWLINE]           
89   [FUNC_CALL]         baz
89   [FPAREN_OPEN]       (
89   [FPAREN_CLOSE]      )
89   [SEMICOLON]         ;
89   [COMMENT_CPP]       // Baz trailing comment begin
89   [NEWLINE]           
90   [COMMENT_CPP]       // Baz trailing comment ...
90   [NEWLINE]           
91   [COMMENT_CPP]       // Baz trailing comment end
91   [NEWLINE]           
92   [BRACE_CLOSE]       }
92   [COMMENT_CPP]       // if (a == b)
92   [NEWLINE]           
93   [COMMENT_CPP]       // Bar description begin
93   [NEWLINE]           
94   [COMMENT_CPP]       // Bar description ...
94   [NEWLINE]           
95   [COMMENT_CPP]       // Bar description end
95   [NEWLINE]           
96   [FUNC_CALL]         bar
96   [FPAREN_OPEN]       (
96   [NEWLINE]           
97   [WORD]              a
97   [COMMA]             ,
97   [NEWLINE]           
98   [WORD]              b
98   [NEWLINE]           
99   [FPAREN_CLOSE]      )
99   [SEMICOLON]         ;
99   [COMMENT_CPP]       // bar trailing comment begin
99   [NEWLINE]           
100  [COMMENT_CPP]       // bar trailing comment ...
100  [NEWLINE]           
101  [COMMENT_CPP]       // Baz trailing comment end
101  [NEWLINE]           
102  [COMMENT_MULTI]     /*! Baz description begin␤           *Baz description ...␤            * Baz description end */
104  [NEWLINE]           
105  [FUNC_CALL]         baz
105  [FPAREN_OPEN]       (
105  [WORD]              a
105  [COMMA]             ,
105  [NEWLINE]           
106  [WORD]              b
106  [FPAREN_CLOSE]      )
106  [SEMICOLON]         ;
106  [COMMENT_MULTI]     /* Baz trailing comment begin␤               Baz trailing comment ...␤             Baz trailing comment end */
108  [NEWLINE]           
109  [COMMENT_CPP]       // Bar description
109  [NEWLINE]           
110  [FUNC_CALL]         bar
110  [FPAREN_OPEN]       (
110  [FPAREN_CLOSE]      )
110  [SEMICOLON]         ;
110  [COMMENT_CPP]       // bar trailing comment begin
110  [NEWLINE]           
111  [COMMENT_CPP]       // bar trailing comment ...
111  [NEWLINE]           
112  [COMMENT_CPP]       // Baz trailing comment end
112  [NEWLINE]           
114  [COMMENT_CPP]       // Baz description
114  [NEWLINE]           
115  [FUNC_CALL]         baz
115  [FPAREN_OPEN]       (
115  [FPAREN_CLOSE]      )
115  [SEMICOLON]         ;
115  [NEWLINE]           
116  [BRACE_CLOSE]       }
116  [NEWLINE]           
117  [TYPE]              void
117  [FUNC_PROTO]        bar
117  [FPAREN_OPEN]       (
117  [FPAREN_CLOSE]      )
117  [SEMICOLON]         ;
117  [NEWLINE]           
118  [COMMENT_CPP]       // Many methods
118  [NEWLINE]           
119  [TYPE]              void
119  [FUNC_PROTO]        baz
119  [FPAREN_OPEN]       (
119  [FPAREN_CLOSE]      )
119  [SEMICOLON]         ;
119  [NEWLINE]           
120  [BRACE_CLOSE]       }
120  [SEMICOLON]         ;
120  [COMMENT_CPP]       // FooClass
120  [NEWLINE]           
121  [COMMENT_CPP]       // ----- FooClass scope --------------------------------------------------------
121  [NEWLINE]           
123  [COMMENT_CPP]       // Many classes
123  [NEWLINE]           
124  [COMMENT_CPP]       // Many classes
124  [NEWLINE]           
125  [COMMENT_CPP]       // Many classes
125  [NEWLINE]           
127  [CLASS]             class
127  [TYPE]              BazClass
127  [NEWLINE]           
128  [BRACE_OPEN]        {
128  [NEWLINE]           
129  [TYPE]              void
129  [FUNC_PROTO]        foo
129  [FPAREN_OPEN]       (
129  [FPAREN_CLOSE]      )
129  [SEMICOLON]         ;
129  [NEWLINE]           
131  [COMMENT_CPP]       // Many methods
131  [NEWLINE]           
132  [COMMENT_CPP]       // Many methods
132  [NEWLINE]           
133  [COMMENT_CPP]       // Many methods
133  [NEWLINE]           
135  [COMMENT_CPP]       // Overrides
135  [NEWLINE]           
136  [COMMENT_CPP]       // Overrides
136  [NEWLINE]           
137  [COMMENT_CPP]       //Overrides
137  [NEWLINE]           
138  [PRIVATE]           protected
138  [PRIVATE_COLON]     :
138  [NEWLINE]           
139  [COMMENT_CPP]       // Bar description
139  [NEWLINE]           
140  [TYPE]              void
140  [FUNC_PROTO]        baz
140  [FPAREN_OPEN]       (
140  [FPAREN_CLOSE]      )
140  [SEMICOLON]         ;
140  [NEWLINE]           
141  [COMMENT_CPP]       //Overrides
141  [NEWLINE]           
142  [BRACE_CLOSE]       }
142  [SEMICOLON]         ;
142  [COMMENT_CPP]       // BazClass trailing comment begin
142  [NEWLINE]           
143  [COMMENT_CPP]       // BazClass trailing comment ...
143  [NEWLINE]           
144  [COMMENT_CPP]       // BazClass trailing comment end
144  [NEWLINE]           
145  [COMMENT_CPP]       // ----- Some classes scope ----------------------------------------------------
145  [NEWLINE]           
146  [BRACE_CLOSE]       }
146  [COMMENT_CPP]       // FooNamespace trailing comment begin
146  [NEWLINE]           
147  [COMMENT_CPP]       // FooNamespace trailing comment end
147  [NEWLINE]           
148  [COMMENT_CPP]       // ----- FooNamespace scope ----------------------------------------------------
148  [NEWLINE]           
149  [COMMENT_CPP]       // BarNamespace description
149  [NEWLINE]           
150  [NAMESPACE]         namespace
150  [WORD]              BarNamespace
150  [NEWLINE]           
151  [BRACE_OPEN]        {
151  [NEWLINE]           
152  [BRACE_CLOSE]       }
152  [COMMENT_CPP]       // namespace BarNamespace
152  [NEWLINE]           
153  [COMMENT_CPP]       // ----- Some namespace scope --------------------------------------------------
153  [NEWLINE]           