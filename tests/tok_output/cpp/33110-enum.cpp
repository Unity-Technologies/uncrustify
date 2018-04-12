Line [Token]             Text
1    [ENUM]              enum
2    [ENUM_CLASS]        class
3    [TYPE]              angle_state_e
4    [BIT_COLON]         :
5    [TYPE]              unsigned
6    [TYPE]              int
6    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [WORD]              NONE
7    [ASSIGN]            =
7    [NUMBER]            0
7    [COMMA]             ,
7    [NEWLINE]           
7    [WORD]              OPEN
7    [ASSIGN]            =
7    [NUMBER]            1
7    [COMMA]             ,
7    [COMMENT_CPP]       //'<' found
7    [NEWLINE]           
8    [WORD]              CLOSE
8    [ASSIGN]            =
8    [NUMBER]            2
8    [COMMA]             ,
8    [COMMENT_CPP]       //'>' found
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [SEMICOLON]         ;
9    [NEWLINE]           
11   [COMMENT_CPP]       // align.cpp
11   [NEWLINE]           
12   [ENUM]              enum
12   [ENUM_CLASS]        class
12   [TYPE]              comment_align_e
12   [BIT_COLON]         :
12   [TYPE]              unsigned
12   [TYPE]              int
12   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
14   [WORD]              REGULAR
14   [COMMA]             ,
14   [NEWLINE]           
15   [WORD]              BRACE
15   [COMMA]             ,
15   [NEWLINE]           
16   [WORD]              ENDIF
16   [COMMA]             ,
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [SEMICOLON]         ;
17   [NEWLINE]           
19   [COMMENT_CPP]       // chunk_list.h
19   [NEWLINE]           
20   [ENUM]              enum
20   [ENUM_CLASS]        class
20   [TYPE]              scope_e
20   [BIT_COLON]         :
20   [TYPE]              unsigned
20   [TYPE]              int
20   [NEWLINE]           
21   [BRACE_OPEN]        {
21   [NEWLINE]           
22   [WORD]              ALL
22   [COMMA]             ,
22   [COMMENT]           /**< search in all kind of chunks */
22   [NEWLINE]           
23   [WORD]              PREPROC
23   [COMMA]             ,
23   [COMMENT]           /**< search only in preprocessor chunks */
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [SEMICOLON]         ;
24   [NEWLINE]           
26   [COMMENT_CPP]       // chunk_list.cpp
26   [NEWLINE]           
27   [ENUM]              enum
27   [ENUM_CLASS]        class
27   [TYPE]              direction_e
27   [BIT_COLON]         :
27   [TYPE]              unsigned
27   [TYPE]              int
27   [NEWLINE]           
28   [BRACE_OPEN]        {
28   [NEWLINE]           
29   [WORD]              FORWARD
29   [COMMA]             ,
29   [NEWLINE]           
30   [WORD]              BACKWARD
30   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [SEMICOLON]         ;
31   [NEWLINE]           
33   [COMMENT_CPP]       // combine.cpp
33   [NEWLINE]           
34   [BRACE_OPEN]        {
34   [NEWLINE]           
35   [ENUM]              enum
35   [ENUM_CLASS]        class
35   [TYPE]              angle_state_e
35   [BIT_COLON]         :
35   [TYPE]              unsigned
35   [TYPE]              int
35   [NEWLINE]           
36   [BRACE_OPEN]        {
36   [NEWLINE]           
37   [WORD]              NONE
37   [ASSIGN]            =
37   [NUMBER]            0
37   [COMMA]             ,
37   [NEWLINE]           
38   [WORD]              OPEN
38   [ASSIGN]            =
38   [NUMBER]            1
38   [COMMA]             ,
38   [COMMENT_CPP]       // '<' found
38   [NEWLINE]           
39   [WORD]              CLOSE
39   [ASSIGN]            =
39   [NUMBER]            2
39   [COMMA]             ,
39   [COMMENT_CPP]       // '>' found
39   [NEWLINE]           
40   [BRACE_CLOSE]       }
40   [SEMICOLON]         ;
40   [NEWLINE]           
41   [BRACE_CLOSE]       }
41   [NEWLINE]           
43   [COMMENT_CPP]       // indent.cpp
43   [NEWLINE]           
44   [ENUM]              enum
44   [ENUM_CLASS]        class
44   [TYPE]              align_mode_e
44   [BIT_COLON]         :
44   [TYPE]              unsigned
44   [TYPE]              int
44   [NEWLINE]           
45   [BRACE_OPEN]        {
45   [NEWLINE]           
46   [WORD]              SHIFT
46   [COMMA]             ,
46   [COMMENT]           /* shift relative to the current column */
46   [NEWLINE]           
47   [WORD]              KEEP_ABS
47   [COMMA]             ,
47   [COMMENT]           /* try to keep the original absolute column */
47   [NEWLINE]           
48   [WORD]              KEEP_REL
48   [COMMA]             ,
48   [COMMENT]           /* try to keep the original gap */
48   [NEWLINE]           
49   [BRACE_CLOSE]       }
49   [SEMICOLON]         ;
49   [NEWLINE]           
51   [COMMENT_CPP]       // align_stack.h
51   [NEWLINE]           
52   [BRACE_OPEN]        {
52   [NEWLINE]           
53   [ENUM]              enum
53   [TYPE]              StarStyle
53   [NEWLINE]           
54   [BRACE_OPEN]        {
54   [NEWLINE]           
55   [WORD]              SS_IGNORE
55   [COMMA]             ,
55   [COMMENT_CPP]       // don't look for prev stars
55   [NEWLINE]           
56   [WORD]              SS_INCLUDE
56   [COMMA]             ,
56   [COMMENT_CPP]       // include prev * before add
56   [NEWLINE]           
57   [WORD]              SS_DANGLE
57   [COMMENT_CPP]       // include prev * after add
57   [NEWLINE]           
58   [BRACE_CLOSE]       }
58   [SEMICOLON]         ;
58   [NEWLINE]           
59   [BRACE_CLOSE]       }
59   [NEWLINE]           
61   [COMMENT_CPP]       // log_levels.h
61   [NEWLINE]           
62   [ENUM]              enum
62   [TYPE]              log_sev_t
62   [NEWLINE]           
63   [BRACE_OPEN]        {
63   [NEWLINE]           
64   [WORD]              LSYS
64   [ASSIGN]            =
64   [NUMBER]            0
64   [COMMA]             ,
64   [NEWLINE]           
65   [WORD]              LERR
65   [ASSIGN]            =
65   [NUMBER]            1
65   [COMMA]             ,
65   [NEWLINE]           
66   [WORD]              LWARN
66   [ASSIGN]            =
66   [NUMBER]            2
66   [COMMA]             ,
66   [NEWLINE]           
67   [WORD]              LNOTE
67   [ASSIGN]            =
67   [NUMBER]            3
67   [COMMA]             ,
67   [NEWLINE]           
68   [WORD]              LINFO
68   [ASSIGN]            =
68   [NUMBER]            4
68   [COMMA]             ,
68   [NEWLINE]           
69   [WORD]              LDATA
69   [ASSIGN]            =
69   [NUMBER]            5
69   [COMMA]             ,
69   [NEWLINE]           
71   [WORD]              LFILELIST
71   [ASSIGN]            =
71   [NUMBER]            8
71   [COMMA]             ,
71   [COMMENT]           /* Files in the file list file */
71   [NEWLINE]           
72   [WORD]              LLINEENDS
72   [ASSIGN]            =
72   [NUMBER]            9
72   [COMMA]             ,
72   [COMMENT]           /* Show which line endings are used */
72   [NEWLINE]           
73   [WORD]              LCASTS
73   [ASSIGN]            =
73   [NUMBER]            10
73   [COMMA]             ,
73   [COMMENT]           /* align casts */
73   [NEWLINE]           
74   [WORD]              LALBR
74   [ASSIGN]            =
74   [NUMBER]            11
74   [COMMA]             ,
74   [COMMENT]           /* align braces */
74   [NEWLINE]           
75   [WORD]              LALTD
75   [ASSIGN]            =
75   [NUMBER]            12
75   [COMMA]             ,
75   [COMMENT]           /* Align Typedef */
75   [NEWLINE]           
76   [WORD]              LALPP
76   [ASSIGN]            =
76   [NUMBER]            13
76   [COMMA]             ,
76   [COMMENT]           /* align #define */
76   [NEWLINE]           
77   [WORD]              LALPROTO
77   [ASSIGN]            =
77   [NUMBER]            14
77   [COMMA]             ,
77   [COMMENT]           /* align prototype */
77   [NEWLINE]           
78   [WORD]              LALNLC
78   [ASSIGN]            =
78   [NUMBER]            15
78   [COMMA]             ,
78   [COMMENT]           /* align backslash-newline */
78   [NEWLINE]           
79   [WORD]              LALTC
79   [ASSIGN]            =
79   [NUMBER]            16
79   [COMMA]             ,
79   [COMMENT]           /* align trailing comments */
79   [NEWLINE]           
80   [WORD]              LALADD
80   [ASSIGN]            =
80   [NUMBER]            17
80   [COMMA]             ,
80   [COMMENT]           /* align add */
80   [NEWLINE]           
81   [WORD]              LALASS
81   [ASSIGN]            =
81   [NUMBER]            18
81   [COMMA]             ,
81   [COMMENT]           /* align assign */
81   [NEWLINE]           
82   [WORD]              LFVD
82   [ASSIGN]            =
82   [NUMBER]            19
82   [COMMA]             ,
82   [COMMENT]           /* fix_var_def */
82   [NEWLINE]           
83   [WORD]              LFVD2
83   [ASSIGN]            =
83   [NUMBER]            20
83   [COMMA]             ,
83   [COMMENT]           /* fix_var_def-2 */
83   [NEWLINE]           
84   [WORD]              LINDENT
84   [ASSIGN]            =
84   [NUMBER]            21
84   [COMMA]             ,
84   [COMMENT]           /* indent_text */
84   [NEWLINE]           
85   [WORD]              LINDENT2
85   [ASSIGN]            =
85   [NUMBER]            22
85   [COMMA]             ,
85   [COMMENT]           /* indent_text tab level */
85   [NEWLINE]           
86   [WORD]              LINDPSE
86   [ASSIGN]            =
86   [NUMBER]            23
86   [COMMA]             ,
86   [COMMENT]           /* indent_text stack */
86   [NEWLINE]           
87   [WORD]              LINDPC
87   [ASSIGN]            =
87   [NUMBER]            24
87   [COMMA]             ,
87   [COMMENT]           /* indent play-by-play */
87   [NEWLINE]           
88   [WORD]              LNEWLINE
88   [ASSIGN]            =
88   [NUMBER]            25
88   [COMMA]             ,
88   [COMMENT]           /* newlines */
88   [NEWLINE]           
89   [WORD]              LPF
89   [ASSIGN]            =
89   [NUMBER]            26
89   [COMMA]             ,
89   [COMMENT]           /* Parse Frame */
89   [NEWLINE]           
90   [WORD]              LSTMT
90   [ASSIGN]            =
90   [NUMBER]            27
90   [COMMA]             ,
90   [COMMENT]           /* Marking statements/expressions */
90   [NEWLINE]           
91   [WORD]              LTOK
91   [ASSIGN]            =
91   [NUMBER]            28
91   [COMMA]             ,
91   [COMMENT]           /* Tokenize */
91   [NEWLINE]           
92   [WORD]              LALRC
92   [ASSIGN]            =
92   [NUMBER]            29
92   [COMMA]             ,
92   [COMMENT]           /* align right comment */
92   [NEWLINE]           
93   [WORD]              LCMTIND
93   [ASSIGN]            =
93   [NUMBER]            30
93   [COMMA]             ,
93   [COMMENT]           /* Comment Indent */
93   [NEWLINE]           
94   [WORD]              LINDLINE
94   [ASSIGN]            =
94   [NUMBER]            31
94   [COMMA]             ,
94   [COMMENT]           /* indent line */
94   [NEWLINE]           
95   [WORD]              LSIB
95   [ASSIGN]            =
95   [NUMBER]            32
95   [COMMA]             ,
95   [COMMENT]           /* Scan IB */
95   [NEWLINE]           
96   [WORD]              LRETURN
96   [ASSIGN]            =
96   [NUMBER]            33
96   [COMMA]             ,
96   [COMMENT]           /* add/remove parens for return */
96   [NEWLINE]           
97   [WORD]              LBRDEL
97   [ASSIGN]            =
97   [NUMBER]            34
97   [COMMA]             ,
97   [COMMENT]           /* brace removal */
97   [NEWLINE]           
98   [WORD]              LFCN
98   [ASSIGN]            =
98   [NUMBER]            35
98   [COMMA]             ,
98   [COMMENT]           /* function detection */
98   [NEWLINE]           
99   [WORD]              LFCNP
99   [ASSIGN]            =
99   [NUMBER]            36
99   [COMMA]             ,
99   [COMMENT]           /* function parameters */
99   [NEWLINE]           
100  [WORD]              LPCU
100  [ASSIGN]            =
100  [NUMBER]            37
100  [COMMA]             ,
100  [COMMENT]           /* parse cleanup */
100  [NEWLINE]           
101  [WORD]              LDYNKW
101  [ASSIGN]            =
101  [NUMBER]            38
101  [COMMA]             ,
101  [COMMENT]           /* dynamic keywords */
101  [NEWLINE]           
102  [WORD]              LOUTIND
102  [ASSIGN]            =
102  [NUMBER]            39
102  [COMMA]             ,
102  [COMMENT]           /* output indent */
102  [NEWLINE]           
103  [WORD]              LBCSAFTER
103  [ASSIGN]            =
103  [NUMBER]            40
103  [COMMA]             ,
103  [COMMENT]           /* Brace cleanup stack - after each token */
103  [NEWLINE]           
104  [WORD]              LBCSPOP
104  [ASSIGN]            =
104  [NUMBER]            41
104  [COMMA]             ,
104  [COMMENT]           /* Brace cleanup stack - log pops */
104  [NEWLINE]           
105  [WORD]              LBCSPUSH
105  [ASSIGN]            =
105  [NUMBER]            42
105  [COMMA]             ,
105  [COMMENT]           /* Brace cleanup stack - log push */
105  [NEWLINE]           
106  [WORD]              LBCSSWAP
106  [ASSIGN]            =
106  [NUMBER]            43
106  [COMMA]             ,
106  [COMMENT]           /* Brace cleanup stack - log swaps */
106  [NEWLINE]           
107  [WORD]              LFTOR
107  [ASSIGN]            =
107  [NUMBER]            44
107  [COMMA]             ,
107  [COMMENT]           /* Class Ctor or Dtor */
107  [NEWLINE]           
108  [WORD]              LAS
108  [ASSIGN]            =
108  [NUMBER]            45
108  [COMMA]             ,
108  [COMMENT]           /* align_stack */
108  [NEWLINE]           
109  [WORD]              LPPIS
109  [ASSIGN]            =
109  [NUMBER]            46
109  [COMMA]             ,
109  [COMMENT]           /* Preprocessor Indent and Space */
109  [NEWLINE]           
110  [WORD]              LTYPEDEF
110  [ASSIGN]            =
110  [NUMBER]            47
110  [COMMA]             ,
110  [COMMENT]           /* Typedef and function types */
110  [NEWLINE]           
111  [WORD]              LVARDEF
111  [ASSIGN]            =
111  [NUMBER]            48
111  [COMMA]             ,
111  [COMMENT]           /* Variable def marking */
111  [NEWLINE]           
112  [WORD]              LDEFVAL
112  [ASSIGN]            =
112  [NUMBER]            49
112  [COMMA]             ,
112  [COMMENT]           /* define values */
112  [NEWLINE]           
113  [WORD]              LPVSEMI
113  [ASSIGN]            =
113  [NUMBER]            50
113  [COMMA]             ,
113  [COMMENT]           /* Pawn: virtual semicolons */
113  [NEWLINE]           
114  [WORD]              LPFUNC
114  [ASSIGN]            =
114  [NUMBER]            51
114  [COMMA]             ,
114  [COMMENT]           /* Pawn: function recognition */
114  [NEWLINE]           
115  [WORD]              LSPLIT
115  [ASSIGN]            =
115  [NUMBER]            52
115  [COMMA]             ,
115  [COMMENT]           /* Line splitting */
115  [NEWLINE]           
116  [WORD]              LFTYPE
116  [ASSIGN]            =
116  [NUMBER]            53
116  [COMMA]             ,
116  [COMMENT]           /* Function type detection */
116  [NEWLINE]           
117  [WORD]              LTEMPL
117  [ASSIGN]            =
117  [NUMBER]            54
117  [COMMA]             ,
117  [COMMENT]           /* Template detection */
117  [NEWLINE]           
118  [WORD]              LPARADD
118  [ASSIGN]            =
118  [NUMBER]            55
118  [COMMA]             ,
118  [COMMENT]           /* adding parens in if/while */
118  [NEWLINE]           
119  [WORD]              LPARADD2
119  [ASSIGN]            =
119  [NUMBER]            56
119  [COMMA]             ,
119  [COMMENT]           /* adding parens in if/while - details */
119  [NEWLINE]           
120  [WORD]              LBLANKD
120  [ASSIGN]            =
120  [NUMBER]            57
120  [COMMA]             ,
120  [COMMENT]           /* blank line details */
120  [NEWLINE]           
121  [WORD]              LTEMPFUNC
121  [ASSIGN]            =
121  [NUMBER]            58
121  [COMMA]             ,
121  [COMMENT]           /* Template function detection */
121  [NEWLINE]           
122  [WORD]              LSCANSEMI
122  [ASSIGN]            =
122  [NUMBER]            59
122  [COMMA]             ,
122  [COMMENT]           /* scan semi colon removal */
122  [NEWLINE]           
123  [WORD]              LDELSEMI
123  [ASSIGN]            =
123  [NUMBER]            60
123  [COMMA]             ,
123  [COMMENT]           /* Removing semicolons */
123  [NEWLINE]           
124  [WORD]              LFPARAM
124  [ASSIGN]            =
124  [NUMBER]            61
124  [COMMA]             ,
124  [COMMENT]           /* Testing for a full parameter */
124  [NEWLINE]           
125  [WORD]              LNL1LINE
125  [ASSIGN]            =
125  [NUMBER]            62
125  [COMMA]             ,
125  [COMMENT]           /* NL check for 1 liners */
125  [NEWLINE]           
126  [WORD]              LPFCHK
126  [ASSIGN]            =
126  [NUMBER]            63
126  [COMMA]             ,
126  [COMMENT]           /* Parse Frame check fcn call */
126  [NEWLINE]           
127  [WORD]              LAVDB
127  [ASSIGN]            =
127  [NUMBER]            64
127  [COMMA]             ,
127  [COMMENT]           /* align var def braces */
127  [NEWLINE]           
128  [WORD]              LSORT
128  [ASSIGN]            =
128  [NUMBER]            65
128  [COMMA]             ,
128  [COMMENT]           /* Sorting */
128  [NEWLINE]           
129  [WORD]              LSPACE
129  [ASSIGN]            =
129  [NUMBER]            66
129  [COMMA]             ,
129  [COMMENT]           /* Space */
129  [NEWLINE]           
130  [WORD]              LALIGN
130  [ASSIGN]            =
130  [NUMBER]            67
130  [COMMA]             ,
130  [COMMENT]           /* align */
130  [NEWLINE]           
131  [WORD]              LALAGAIN
131  [ASSIGN]            =
131  [NUMBER]            68
131  [COMMA]             ,
131  [COMMENT]           /* align again */
131  [NEWLINE]           
132  [WORD]              LOPERATOR
132  [ASSIGN]            =
132  [NUMBER]            69
132  [COMMA]             ,
132  [COMMENT]           /* operator */
132  [NEWLINE]           
133  [WORD]              LASFCP
133  [ASSIGN]            =
133  [NUMBER]            70
133  [COMMA]             ,
133  [COMMENT]           /* Align Same Function Call Params */
133  [NEWLINE]           
134  [WORD]              LINDLINED
134  [ASSIGN]            =
134  [NUMBER]            71
134  [COMMA]             ,
134  [COMMENT]           /* indent line details */
134  [NEWLINE]           
135  [WORD]              LBCTRL
135  [ASSIGN]            =
135  [NUMBER]            72
135  [COMMA]             ,
135  [COMMENT]           /* beautifier control */
135  [NEWLINE]           
136  [WORD]              LRMRETURN
136  [ASSIGN]            =
136  [NUMBER]            73
136  [COMMA]             ,
136  [COMMENT]           /* remove 'return;' */
136  [NEWLINE]           
137  [WORD]              LPPIF
137  [ASSIGN]            =
137  [NUMBER]            74
137  [COMMA]             ,
137  [COMMENT]           /* #if/#else/#endif pair processing */
137  [NEWLINE]           
138  [WORD]              LMCB
138  [ASSIGN]            =
138  [NUMBER]            75
138  [COMMA]             ,
138  [COMMENT]           /* mod_case_brace */
138  [NEWLINE]           
139  [WORD]              LBRCH
139  [ASSIGN]            =
139  [NUMBER]            76
139  [COMMA]             ,
139  [COMMENT]           /* if brace chain */
139  [NEWLINE]           
140  [WORD]              LFCNR
140  [ASSIGN]            =
140  [NUMBER]            77
140  [COMMA]             ,
140  [COMMENT]           /* function return type */
140  [NEWLINE]           
141  [WORD]              LOCCLASS
141  [ASSIGN]            =
141  [NUMBER]            78
141  [COMMA]             ,
141  [COMMENT]           /* OC Class stuff */
141  [NEWLINE]           
142  [WORD]              LOCMSG
142  [ASSIGN]            =
142  [NUMBER]            79
142  [COMMA]             ,
142  [COMMENT]           /* OC Message stuff */
142  [NEWLINE]           
143  [WORD]              LBLANK
143  [ASSIGN]            =
143  [NUMBER]            80
143  [COMMA]             ,
143  [COMMENT]           /* Blank Lines */
143  [NEWLINE]           
144  [WORD]              LOBJCWORD
144  [ASSIGN]            =
144  [NUMBER]            81
144  [COMMA]             ,
144  [COMMENT]           /* Convert keyword to CT_WORD in certain circumstances */
144  [NEWLINE]           
145  [WORD]              LCHANGE
145  [ASSIGN]            =
145  [NUMBER]            82
145  [COMMA]             ,
145  [COMMENT]           /* something changed */
145  [NEWLINE]           
146  [WORD]              LCONTTEXT
146  [ASSIGN]            =
146  [NUMBER]            83
146  [COMMA]             ,
146  [COMMENT]           /* comment cont_text set */
146  [NEWLINE]           
147  [WORD]              LANNOT
147  [ASSIGN]            =
147  [NUMBER]            84
147  [COMMA]             ,
147  [COMMENT]           /* Java annotation */
147  [NEWLINE]           
148  [WORD]              LOCBLK
148  [ASSIGN]            =
148  [NUMBER]            85
148  [COMMA]             ,
148  [COMMENT]           /* OC Block stuff */
148  [NEWLINE]           
149  [WORD]              LFLPAREN
149  [ASSIGN]            =
149  [NUMBER]            86
149  [COMMA]             ,
149  [COMMENT]           /* Flag paren */
149  [NEWLINE]           
150  [WORD]              LOCMSGD
150  [ASSIGN]            =
150  [NUMBER]            87
150  [COMMA]             ,
150  [COMMENT]           /* OC Message declaration */
150  [NEWLINE]           
151  [WORD]              LINDENTAG
151  [ASSIGN]            =
151  [NUMBER]            88
151  [COMMA]             ,
151  [COMMENT]           /* indent again */
151  [NEWLINE]           
152  [WORD]              LNFD
152  [ASSIGN]            =
152  [NUMBER]            89
152  [COMMA]             ,
152  [COMMENT]           /* newline-function-def */
152  [NEWLINE]           
153  [WORD]              LJDBI
153  [ASSIGN]            =
153  [NUMBER]            90
153  [COMMA]             ,
153  [COMMENT]           /* Java Double Brace Init */
153  [NEWLINE]           
154  [WORD]              LSETPAR
154  [ASSIGN]            =
154  [NUMBER]            91
154  [COMMA]             ,
154  [COMMENT]           /* set_chunk_parent() */
154  [NEWLINE]           
155  [WORD]              LSETTYP
155  [ASSIGN]            =
155  [NUMBER]            92
155  [COMMA]             ,
155  [COMMENT]           /* set_chunk_type() */
155  [NEWLINE]           
156  [WORD]              LSETFLG
156  [ASSIGN]            =
156  [NUMBER]            93
156  [COMMA]             ,
156  [COMMENT]           /* set_chunk_flags() */
156  [NEWLINE]           
157  [WORD]              LNLFUNCT
157  [ASSIGN]            =
157  [NUMBER]            94
157  [COMMA]             ,
157  [COMMENT]           /* newlines before function */
157  [NEWLINE]           
158  [WORD]              LCHUNK
158  [ASSIGN]            =
158  [NUMBER]            95
158  [COMMA]             ,
158  [COMMENT]           /* Add or del chunk */
158  [NEWLINE]           
159  [WORD]              LGUY98
159  [ASSIGN]            =
159  [NUMBER]            98
159  [COMMA]             ,
159  [COMMENT]           /* for guy-test */
159  [NEWLINE]           
160  [WORD]              LGUY
160  [ASSIGN]            =
160  [NUMBER]            99
160  [COMMA]             ,
160  [COMMENT]           /* for guy-test */
160  [NEWLINE]           
161  [BRACE_CLOSE]       }
161  [SEMICOLON]         ;
161  [NEWLINE]           
163  [COMMENT_CPP]       // options.h
163  [NEWLINE]           
164  [ENUM]              enum
164  [TYPE]              argtype_e
164  [NEWLINE]           
165  [BRACE_OPEN]        {
165  [NEWLINE]           
166  [WORD]              AT_BOOL
166  [COMMA]             ,
166  [COMMENT]           /**< true / false */
166  [NEWLINE]           
167  [WORD]              AT_IARF
167  [COMMA]             ,
167  [COMMENT]           /**< Ignore / Add / Remove / Force */
167  [NEWLINE]           
168  [WORD]              AT_NUM
168  [COMMA]             ,
168  [COMMENT]           /**< Number */
168  [NEWLINE]           
169  [WORD]              AT_LINE
169  [COMMA]             ,
169  [COMMENT]           /**< Line Endings */
169  [NEWLINE]           
170  [WORD]              AT_POS
170  [COMMA]             ,
170  [COMMENT]           /**< start/end or Trail/Lead */
170  [NEWLINE]           
171  [WORD]              AT_STRING
171  [COMMA]             ,
171  [COMMENT]           /**< string value */
171  [NEWLINE]           
172  [WORD]              AT_UNUM
172  [COMMA]             ,
172  [COMMENT]           /**< unsigned Number */
172  [NEWLINE]           
173  [BRACE_CLOSE]       }
173  [SEMICOLON]         ;
173  [NEWLINE]           
175  [ENUM]              enum
175  [TYPE]              argval_t
175  [NEWLINE]           
176  [BRACE_OPEN]        {
176  [NEWLINE]           
177  [WORD]              AV_IGNORE
177  [ASSIGN]            =
177  [NUMBER]            0
177  [COMMA]             ,
177  [NEWLINE]           
178  [WORD]              AV_ADD
178  [ASSIGN]            =
178  [NUMBER]            1
178  [COMMA]             ,
178  [NEWLINE]           
179  [WORD]              AV_REMOVE
179  [ASSIGN]            =
179  [NUMBER]            2
179  [COMMA]             ,
179  [NEWLINE]           
180  [WORD]              AV_FORCE
180  [ASSIGN]            =
180  [NUMBER]            3
180  [COMMA]             ,
180  [COMMENT]           /**< remove + add */
180  [NEWLINE]           
181  [WORD]              AV_NOT_DEFINED
181  [ASSIGN]            =
181  [NUMBER]            4
181  [COMMENT]           /* to be used with QT, SIGNAL SLOT macros */
181  [NEWLINE]           
182  [BRACE_CLOSE]       }
182  [SEMICOLON]         ;
182  [NEWLINE]           
184  [ENUM]              enum
184  [TYPE]              lineends_e
184  [NEWLINE]           
185  [BRACE_OPEN]        {
185  [NEWLINE]           
186  [WORD]              LE_LF
186  [COMMA]             ,
186  [COMMENT]           /* "\n"   */
186  [NEWLINE]           
187  [WORD]              LE_CRLF
187  [COMMA]             ,
187  [COMMENT]           /* "\r\n" */
187  [NEWLINE]           
188  [WORD]              LE_CR
188  [COMMA]             ,
188  [COMMENT]           /* "\r"   */
188  [NEWLINE]           
190  [WORD]              LE_AUTO
190  [COMMA]             ,
190  [COMMENT]           /* keep last */
190  [NEWLINE]           
191  [BRACE_CLOSE]       }
191  [SEMICOLON]         ;
191  [NEWLINE]           
193  [ENUM]              enum
193  [TYPE]              tokenpos_e
193  [NEWLINE]           
194  [BRACE_OPEN]        {
194  [NEWLINE]           
195  [WORD]              TP_IGNORE
195  [ASSIGN]            =
195  [NUMBER]            0
195  [COMMA]             ,
195  [COMMENT]           /* don't change it */
195  [NEWLINE]           
196  [WORD]              TP_BREAK
196  [ASSIGN]            =
196  [NUMBER]            1
196  [COMMA]             ,
196  [COMMENT]           /* add a newline before or after the if not present */
196  [NEWLINE]           
197  [WORD]              TP_FORCE
197  [ASSIGN]            =
197  [NUMBER]            2
197  [COMMA]             ,
197  [COMMENT]           /* force a newline on one side and not the other */
197  [NEWLINE]           
198  [WORD]              TP_LEAD
198  [ASSIGN]            =
198  [NUMBER]            4
198  [COMMA]             ,
198  [COMMENT]           /* at the start of a line or leading if wrapped line */
198  [NEWLINE]           
199  [WORD]              TP_LEAD_BREAK
199  [ASSIGN]            =
199  [PAREN_OPEN]        (
199  [WORD]              TP_LEAD
199  [ARITH]             |
199  [WORD]              TP_BREAK
199  [PAREN_CLOSE]       )
199  [COMMA]             ,
199  [NEWLINE]           
200  [WORD]              TP_LEAD_FORCE
200  [ASSIGN]            =
200  [PAREN_OPEN]        (
200  [WORD]              TP_LEAD
200  [ARITH]             |
200  [WORD]              TP_FORCE
200  [PAREN_CLOSE]       )
200  [COMMA]             ,
200  [NEWLINE]           
201  [WORD]              TP_TRAIL
201  [ASSIGN]            =
201  [NUMBER]            8
201  [COMMA]             ,
201  [COMMENT]           /* at the end of a line or trailing if wrapped line */
201  [NEWLINE]           
202  [WORD]              TP_TRAIL_BREAK
202  [ASSIGN]            =
202  [PAREN_OPEN]        (
202  [WORD]              TP_TRAIL
202  [ARITH]             |
202  [WORD]              TP_BREAK
202  [PAREN_CLOSE]       )
202  [COMMA]             ,
202  [NEWLINE]           
203  [WORD]              TP_TRAIL_FORCE
203  [ASSIGN]            =
203  [PAREN_OPEN]        (
203  [WORD]              TP_TRAIL
203  [ARITH]             |
203  [WORD]              TP_FORCE
203  [PAREN_CLOSE]       )
203  [COMMA]             ,
203  [NEWLINE]           
204  [WORD]              TP_JOIN
204  [ASSIGN]            =
204  [NUMBER]            16
204  [COMMA]             ,
204  [COMMENT]           /* remove newlines on both sides */
204  [NEWLINE]           
205  [BRACE_CLOSE]       }
205  [SEMICOLON]         ;
205  [NEWLINE]           