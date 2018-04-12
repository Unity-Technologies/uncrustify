Line [Parent]            Text
1    [NONE]              enum
2    [NONE]              class
3    [ENUM]              angle_state_e
4    [ENUM]              :
5    [NONE]              unsigned
6    [NONE]              int
6    [NONE]              
6    [ENUM]              {
6    [NONE]              
7    [NONE]              NONE
7    [NONE]              =
7    [NONE]              0
7    [NONE]              ,
7    [NONE]              
7    [NONE]              OPEN
7    [NONE]              =
7    [NONE]              1
7    [NONE]              ,
7    [COMMENT_END]       //'<' found
7    [NONE]              
8    [NONE]              CLOSE
8    [NONE]              =
8    [NONE]              2
8    [NONE]              ,
8    [COMMENT_END]       //'>' found
8    [NONE]              
9    [ENUM]              }
9    [ENUM]              ;
9    [NONE]              
11   [COMMENT_WHOLE]     // align.cpp
11   [NONE]              
12   [NONE]              enum
12   [NONE]              class
12   [ENUM]              comment_align_e
12   [ENUM]              :
12   [NONE]              unsigned
12   [NONE]              int
12   [NONE]              
13   [ENUM]              {
13   [NONE]              
14   [NONE]              REGULAR
14   [NONE]              ,
14   [NONE]              
15   [NONE]              BRACE
15   [NONE]              ,
15   [NONE]              
16   [NONE]              ENDIF
16   [NONE]              ,
16   [NONE]              
17   [ENUM]              }
17   [ENUM]              ;
17   [NONE]              
19   [COMMENT_WHOLE]     // chunk_list.h
19   [NONE]              
20   [NONE]              enum
20   [NONE]              class
20   [ENUM]              scope_e
20   [ENUM]              :
20   [NONE]              unsigned
20   [NONE]              int
20   [NONE]              
21   [ENUM]              {
21   [NONE]              
22   [NONE]              ALL
22   [NONE]              ,
22   [COMMENT_END]       /**< search in all kind of chunks */
22   [NONE]              
23   [NONE]              PREPROC
23   [NONE]              ,
23   [COMMENT_END]       /**< search only in preprocessor chunks */
23   [NONE]              
24   [ENUM]              }
24   [ENUM]              ;
24   [NONE]              
26   [COMMENT_WHOLE]     // chunk_list.cpp
26   [NONE]              
27   [NONE]              enum
27   [NONE]              class
27   [ENUM]              direction_e
27   [ENUM]              :
27   [NONE]              unsigned
27   [NONE]              int
27   [NONE]              
28   [ENUM]              {
28   [NONE]              
29   [NONE]              FORWARD
29   [NONE]              ,
29   [NONE]              
30   [NONE]              BACKWARD
30   [NONE]              
31   [ENUM]              }
31   [ENUM]              ;
31   [NONE]              
33   [COMMENT_WHOLE]     // combine.cpp
33   [NONE]              
34   [NONE]              {
34   [NONE]              
35   [NONE]              enum
35   [NONE]              class
35   [ENUM]              angle_state_e
35   [ENUM]              :
35   [NONE]              unsigned
35   [NONE]              int
35   [NONE]              
36   [ENUM]              {
36   [NONE]              
37   [NONE]              NONE
37   [NONE]              =
37   [NONE]              0
37   [NONE]              ,
37   [NONE]              
38   [NONE]              OPEN
38   [NONE]              =
38   [NONE]              1
38   [NONE]              ,
38   [COMMENT_END]       // '<' found
38   [NONE]              
39   [NONE]              CLOSE
39   [NONE]              =
39   [NONE]              2
39   [NONE]              ,
39   [COMMENT_END]       // '>' found
39   [NONE]              
40   [ENUM]              }
40   [ENUM]              ;
40   [NONE]              
41   [NONE]              }
41   [NONE]              
43   [COMMENT_WHOLE]     // indent.cpp
43   [NONE]              
44   [NONE]              enum
44   [NONE]              class
44   [ENUM]              align_mode_e
44   [ENUM]              :
44   [NONE]              unsigned
44   [NONE]              int
44   [NONE]              
45   [ENUM]              {
45   [NONE]              
46   [NONE]              SHIFT
46   [NONE]              ,
46   [COMMENT_END]       /* shift relative to the current column */
46   [NONE]              
47   [NONE]              KEEP_ABS
47   [NONE]              ,
47   [COMMENT_END]       /* try to keep the original absolute column */
47   [NONE]              
48   [NONE]              KEEP_REL
48   [NONE]              ,
48   [COMMENT_END]       /* try to keep the original gap */
48   [NONE]              
49   [ENUM]              }
49   [ENUM]              ;
49   [NONE]              
51   [COMMENT_WHOLE]     // align_stack.h
51   [NONE]              
52   [NONE]              {
52   [NONE]              
53   [NONE]              enum
53   [ENUM]              StarStyle
53   [NONE]              
54   [ENUM]              {
54   [NONE]              
55   [NONE]              SS_IGNORE
55   [NONE]              ,
55   [COMMENT_END]       // don't look for prev stars
55   [NONE]              
56   [NONE]              SS_INCLUDE
56   [NONE]              ,
56   [COMMENT_END]       // include prev * before add
56   [NONE]              
57   [NONE]              SS_DANGLE
57   [COMMENT_END]       // include prev * after add
57   [NONE]              
58   [ENUM]              }
58   [ENUM]              ;
58   [NONE]              
59   [NONE]              }
59   [NONE]              
61   [COMMENT_WHOLE]     // log_levels.h
61   [NONE]              
62   [NONE]              enum
62   [ENUM]              log_sev_t
62   [NONE]              
63   [ENUM]              {
63   [NONE]              
64   [NONE]              LSYS
64   [NONE]              =
64   [NONE]              0
64   [NONE]              ,
64   [NONE]              
65   [NONE]              LERR
65   [NONE]              =
65   [NONE]              1
65   [NONE]              ,
65   [NONE]              
66   [NONE]              LWARN
66   [NONE]              =
66   [NONE]              2
66   [NONE]              ,
66   [NONE]              
67   [NONE]              LNOTE
67   [NONE]              =
67   [NONE]              3
67   [NONE]              ,
67   [NONE]              
68   [NONE]              LINFO
68   [NONE]              =
68   [NONE]              4
68   [NONE]              ,
68   [NONE]              
69   [NONE]              LDATA
69   [NONE]              =
69   [NONE]              5
69   [NONE]              ,
69   [NONE]              
71   [NONE]              LFILELIST
71   [NONE]              =
71   [NONE]              8
71   [NONE]              ,
71   [COMMENT_END]       /* Files in the file list file */
71   [NONE]              
72   [NONE]              LLINEENDS
72   [NONE]              =
72   [NONE]              9
72   [NONE]              ,
72   [COMMENT_END]       /* Show which line endings are used */
72   [NONE]              
73   [NONE]              LCASTS
73   [NONE]              =
73   [NONE]              10
73   [NONE]              ,
73   [COMMENT_END]       /* align casts */
73   [NONE]              
74   [NONE]              LALBR
74   [NONE]              =
74   [NONE]              11
74   [NONE]              ,
74   [COMMENT_END]       /* align braces */
74   [NONE]              
75   [NONE]              LALTD
75   [NONE]              =
75   [NONE]              12
75   [NONE]              ,
75   [COMMENT_END]       /* Align Typedef */
75   [NONE]              
76   [NONE]              LALPP
76   [NONE]              =
76   [NONE]              13
76   [NONE]              ,
76   [COMMENT_END]       /* align #define */
76   [NONE]              
77   [NONE]              LALPROTO
77   [NONE]              =
77   [NONE]              14
77   [NONE]              ,
77   [COMMENT_END]       /* align prototype */
77   [NONE]              
78   [NONE]              LALNLC
78   [NONE]              =
78   [NONE]              15
78   [NONE]              ,
78   [COMMENT_END]       /* align backslash-newline */
78   [NONE]              
79   [NONE]              LALTC
79   [NONE]              =
79   [NONE]              16
79   [NONE]              ,
79   [COMMENT_END]       /* align trailing comments */
79   [NONE]              
80   [NONE]              LALADD
80   [NONE]              =
80   [NONE]              17
80   [NONE]              ,
80   [COMMENT_END]       /* align add */
80   [NONE]              
81   [NONE]              LALASS
81   [NONE]              =
81   [NONE]              18
81   [NONE]              ,
81   [COMMENT_END]       /* align assign */
81   [NONE]              
82   [NONE]              LFVD
82   [NONE]              =
82   [NONE]              19
82   [NONE]              ,
82   [COMMENT_END]       /* fix_var_def */
82   [NONE]              
83   [NONE]              LFVD2
83   [NONE]              =
83   [NONE]              20
83   [NONE]              ,
83   [COMMENT_END]       /* fix_var_def-2 */
83   [NONE]              
84   [NONE]              LINDENT
84   [NONE]              =
84   [NONE]              21
84   [NONE]              ,
84   [COMMENT_END]       /* indent_text */
84   [NONE]              
85   [NONE]              LINDENT2
85   [NONE]              =
85   [NONE]              22
85   [NONE]              ,
85   [COMMENT_END]       /* indent_text tab level */
85   [NONE]              
86   [NONE]              LINDPSE
86   [NONE]              =
86   [NONE]              23
86   [NONE]              ,
86   [COMMENT_END]       /* indent_text stack */
86   [NONE]              
87   [NONE]              LINDPC
87   [NONE]              =
87   [NONE]              24
87   [NONE]              ,
87   [COMMENT_END]       /* indent play-by-play */
87   [NONE]              
88   [NONE]              LNEWLINE
88   [NONE]              =
88   [NONE]              25
88   [NONE]              ,
88   [COMMENT_END]       /* newlines */
88   [NONE]              
89   [NONE]              LPF
89   [NONE]              =
89   [NONE]              26
89   [NONE]              ,
89   [COMMENT_END]       /* Parse Frame */
89   [NONE]              
90   [NONE]              LSTMT
90   [NONE]              =
90   [NONE]              27
90   [NONE]              ,
90   [COMMENT_END]       /* Marking statements/expressions */
90   [NONE]              
91   [NONE]              LTOK
91   [NONE]              =
91   [NONE]              28
91   [NONE]              ,
91   [COMMENT_END]       /* Tokenize */
91   [NONE]              
92   [NONE]              LALRC
92   [NONE]              =
92   [NONE]              29
92   [NONE]              ,
92   [COMMENT_END]       /* align right comment */
92   [NONE]              
93   [NONE]              LCMTIND
93   [NONE]              =
93   [NONE]              30
93   [NONE]              ,
93   [COMMENT_END]       /* Comment Indent */
93   [NONE]              
94   [NONE]              LINDLINE
94   [NONE]              =
94   [NONE]              31
94   [NONE]              ,
94   [COMMENT_END]       /* indent line */
94   [NONE]              
95   [NONE]              LSIB
95   [NONE]              =
95   [NONE]              32
95   [NONE]              ,
95   [COMMENT_END]       /* Scan IB */
95   [NONE]              
96   [NONE]              LRETURN
96   [NONE]              =
96   [NONE]              33
96   [NONE]              ,
96   [COMMENT_END]       /* add/remove parens for return */
96   [NONE]              
97   [NONE]              LBRDEL
97   [NONE]              =
97   [NONE]              34
97   [NONE]              ,
97   [COMMENT_END]       /* brace removal */
97   [NONE]              
98   [NONE]              LFCN
98   [NONE]              =
98   [NONE]              35
98   [NONE]              ,
98   [COMMENT_END]       /* function detection */
98   [NONE]              
99   [NONE]              LFCNP
99   [NONE]              =
99   [NONE]              36
99   [NONE]              ,
99   [COMMENT_END]       /* function parameters */
99   [NONE]              
100  [NONE]              LPCU
100  [NONE]              =
100  [NONE]              37
100  [NONE]              ,
100  [COMMENT_END]       /* parse cleanup */
100  [NONE]              
101  [NONE]              LDYNKW
101  [NONE]              =
101  [NONE]              38
101  [NONE]              ,
101  [COMMENT_END]       /* dynamic keywords */
101  [NONE]              
102  [NONE]              LOUTIND
102  [NONE]              =
102  [NONE]              39
102  [NONE]              ,
102  [COMMENT_END]       /* output indent */
102  [NONE]              
103  [NONE]              LBCSAFTER
103  [NONE]              =
103  [NONE]              40
103  [NONE]              ,
103  [COMMENT_END]       /* Brace cleanup stack - after each token */
103  [NONE]              
104  [NONE]              LBCSPOP
104  [NONE]              =
104  [NONE]              41
104  [NONE]              ,
104  [COMMENT_END]       /* Brace cleanup stack - log pops */
104  [NONE]              
105  [NONE]              LBCSPUSH
105  [NONE]              =
105  [NONE]              42
105  [NONE]              ,
105  [COMMENT_END]       /* Brace cleanup stack - log push */
105  [NONE]              
106  [NONE]              LBCSSWAP
106  [NONE]              =
106  [NONE]              43
106  [NONE]              ,
106  [COMMENT_END]       /* Brace cleanup stack - log swaps */
106  [NONE]              
107  [NONE]              LFTOR
107  [NONE]              =
107  [NONE]              44
107  [NONE]              ,
107  [COMMENT_END]       /* Class Ctor or Dtor */
107  [NONE]              
108  [NONE]              LAS
108  [NONE]              =
108  [NONE]              45
108  [NONE]              ,
108  [COMMENT_END]       /* align_stack */
108  [NONE]              
109  [NONE]              LPPIS
109  [NONE]              =
109  [NONE]              46
109  [NONE]              ,
109  [COMMENT_END]       /* Preprocessor Indent and Space */
109  [NONE]              
110  [NONE]              LTYPEDEF
110  [NONE]              =
110  [NONE]              47
110  [NONE]              ,
110  [COMMENT_END]       /* Typedef and function types */
110  [NONE]              
111  [NONE]              LVARDEF
111  [NONE]              =
111  [NONE]              48
111  [NONE]              ,
111  [COMMENT_END]       /* Variable def marking */
111  [NONE]              
112  [NONE]              LDEFVAL
112  [NONE]              =
112  [NONE]              49
112  [NONE]              ,
112  [COMMENT_END]       /* define values */
112  [NONE]              
113  [NONE]              LPVSEMI
113  [NONE]              =
113  [NONE]              50
113  [NONE]              ,
113  [COMMENT_END]       /* Pawn: virtual semicolons */
113  [NONE]              
114  [NONE]              LPFUNC
114  [NONE]              =
114  [NONE]              51
114  [NONE]              ,
114  [COMMENT_END]       /* Pawn: function recognition */
114  [NONE]              
115  [NONE]              LSPLIT
115  [NONE]              =
115  [NONE]              52
115  [NONE]              ,
115  [COMMENT_END]       /* Line splitting */
115  [NONE]              
116  [NONE]              LFTYPE
116  [NONE]              =
116  [NONE]              53
116  [NONE]              ,
116  [COMMENT_END]       /* Function type detection */
116  [NONE]              
117  [NONE]              LTEMPL
117  [NONE]              =
117  [NONE]              54
117  [NONE]              ,
117  [COMMENT_END]       /* Template detection */
117  [NONE]              
118  [NONE]              LPARADD
118  [NONE]              =
118  [NONE]              55
118  [NONE]              ,
118  [COMMENT_END]       /* adding parens in if/while */
118  [NONE]              
119  [NONE]              LPARADD2
119  [NONE]              =
119  [NONE]              56
119  [NONE]              ,
119  [COMMENT_END]       /* adding parens in if/while - details */
119  [NONE]              
120  [NONE]              LBLANKD
120  [NONE]              =
120  [NONE]              57
120  [NONE]              ,
120  [COMMENT_END]       /* blank line details */
120  [NONE]              
121  [NONE]              LTEMPFUNC
121  [NONE]              =
121  [NONE]              58
121  [NONE]              ,
121  [COMMENT_END]       /* Template function detection */
121  [NONE]              
122  [NONE]              LSCANSEMI
122  [NONE]              =
122  [NONE]              59
122  [NONE]              ,
122  [COMMENT_END]       /* scan semi colon removal */
122  [NONE]              
123  [NONE]              LDELSEMI
123  [NONE]              =
123  [NONE]              60
123  [NONE]              ,
123  [COMMENT_END]       /* Removing semicolons */
123  [NONE]              
124  [NONE]              LFPARAM
124  [NONE]              =
124  [NONE]              61
124  [NONE]              ,
124  [COMMENT_END]       /* Testing for a full parameter */
124  [NONE]              
125  [NONE]              LNL1LINE
125  [NONE]              =
125  [NONE]              62
125  [NONE]              ,
125  [COMMENT_END]       /* NL check for 1 liners */
125  [NONE]              
126  [NONE]              LPFCHK
126  [NONE]              =
126  [NONE]              63
126  [NONE]              ,
126  [COMMENT_END]       /* Parse Frame check fcn call */
126  [NONE]              
127  [NONE]              LAVDB
127  [NONE]              =
127  [NONE]              64
127  [NONE]              ,
127  [COMMENT_END]       /* align var def braces */
127  [NONE]              
128  [NONE]              LSORT
128  [NONE]              =
128  [NONE]              65
128  [NONE]              ,
128  [COMMENT_END]       /* Sorting */
128  [NONE]              
129  [NONE]              LSPACE
129  [NONE]              =
129  [NONE]              66
129  [NONE]              ,
129  [COMMENT_END]       /* Space */
129  [NONE]              
130  [NONE]              LALIGN
130  [NONE]              =
130  [NONE]              67
130  [NONE]              ,
130  [COMMENT_END]       /* align */
130  [NONE]              
131  [NONE]              LALAGAIN
131  [NONE]              =
131  [NONE]              68
131  [NONE]              ,
131  [COMMENT_END]       /* align again */
131  [NONE]              
132  [NONE]              LOPERATOR
132  [NONE]              =
132  [NONE]              69
132  [NONE]              ,
132  [COMMENT_END]       /* operator */
132  [NONE]              
133  [NONE]              LASFCP
133  [NONE]              =
133  [NONE]              70
133  [NONE]              ,
133  [COMMENT_END]       /* Align Same Function Call Params */
133  [NONE]              
134  [NONE]              LINDLINED
134  [NONE]              =
134  [NONE]              71
134  [NONE]              ,
134  [COMMENT_END]       /* indent line details */
134  [NONE]              
135  [NONE]              LBCTRL
135  [NONE]              =
135  [NONE]              72
135  [NONE]              ,
135  [COMMENT_END]       /* beautifier control */
135  [NONE]              
136  [NONE]              LRMRETURN
136  [NONE]              =
136  [NONE]              73
136  [NONE]              ,
136  [COMMENT_END]       /* remove 'return;' */
136  [NONE]              
137  [NONE]              LPPIF
137  [NONE]              =
137  [NONE]              74
137  [NONE]              ,
137  [COMMENT_END]       /* #if/#else/#endif pair processing */
137  [NONE]              
138  [NONE]              LMCB
138  [NONE]              =
138  [NONE]              75
138  [NONE]              ,
138  [COMMENT_END]       /* mod_case_brace */
138  [NONE]              
139  [NONE]              LBRCH
139  [NONE]              =
139  [NONE]              76
139  [NONE]              ,
139  [COMMENT_END]       /* if brace chain */
139  [NONE]              
140  [NONE]              LFCNR
140  [NONE]              =
140  [NONE]              77
140  [NONE]              ,
140  [COMMENT_END]       /* function return type */
140  [NONE]              
141  [NONE]              LOCCLASS
141  [NONE]              =
141  [NONE]              78
141  [NONE]              ,
141  [COMMENT_END]       /* OC Class stuff */
141  [NONE]              
142  [NONE]              LOCMSG
142  [NONE]              =
142  [NONE]              79
142  [NONE]              ,
142  [COMMENT_END]       /* OC Message stuff */
142  [NONE]              
143  [NONE]              LBLANK
143  [NONE]              =
143  [NONE]              80
143  [NONE]              ,
143  [COMMENT_END]       /* Blank Lines */
143  [NONE]              
144  [NONE]              LOBJCWORD
144  [NONE]              =
144  [NONE]              81
144  [NONE]              ,
144  [COMMENT_END]       /* Convert keyword to CT_WORD in certain circumstances */
144  [NONE]              
145  [NONE]              LCHANGE
145  [NONE]              =
145  [NONE]              82
145  [NONE]              ,
145  [COMMENT_END]       /* something changed */
145  [NONE]              
146  [NONE]              LCONTTEXT
146  [NONE]              =
146  [NONE]              83
146  [NONE]              ,
146  [COMMENT_END]       /* comment cont_text set */
146  [NONE]              
147  [NONE]              LANNOT
147  [NONE]              =
147  [NONE]              84
147  [NONE]              ,
147  [COMMENT_END]       /* Java annotation */
147  [NONE]              
148  [NONE]              LOCBLK
148  [NONE]              =
148  [NONE]              85
148  [NONE]              ,
148  [COMMENT_END]       /* OC Block stuff */
148  [NONE]              
149  [NONE]              LFLPAREN
149  [NONE]              =
149  [NONE]              86
149  [NONE]              ,
149  [COMMENT_END]       /* Flag paren */
149  [NONE]              
150  [NONE]              LOCMSGD
150  [NONE]              =
150  [NONE]              87
150  [NONE]              ,
150  [COMMENT_END]       /* OC Message declaration */
150  [NONE]              
151  [NONE]              LINDENTAG
151  [NONE]              =
151  [NONE]              88
151  [NONE]              ,
151  [COMMENT_END]       /* indent again */
151  [NONE]              
152  [NONE]              LNFD
152  [NONE]              =
152  [NONE]              89
152  [NONE]              ,
152  [COMMENT_END]       /* newline-function-def */
152  [NONE]              
153  [NONE]              LJDBI
153  [NONE]              =
153  [NONE]              90
153  [NONE]              ,
153  [COMMENT_END]       /* Java Double Brace Init */
153  [NONE]              
154  [NONE]              LSETPAR
154  [NONE]              =
154  [NONE]              91
154  [NONE]              ,
154  [COMMENT_END]       /* set_chunk_parent() */
154  [NONE]              
155  [NONE]              LSETTYP
155  [NONE]              =
155  [NONE]              92
155  [NONE]              ,
155  [COMMENT_END]       /* set_chunk_type() */
155  [NONE]              
156  [NONE]              LSETFLG
156  [NONE]              =
156  [NONE]              93
156  [NONE]              ,
156  [COMMENT_END]       /* set_chunk_flags() */
156  [NONE]              
157  [NONE]              LNLFUNCT
157  [NONE]              =
157  [NONE]              94
157  [NONE]              ,
157  [COMMENT_END]       /* newlines before function */
157  [NONE]              
158  [NONE]              LCHUNK
158  [NONE]              =
158  [NONE]              95
158  [NONE]              ,
158  [COMMENT_END]       /* Add or del chunk */
158  [NONE]              
159  [NONE]              LGUY98
159  [NONE]              =
159  [NONE]              98
159  [NONE]              ,
159  [COMMENT_END]       /* for guy-test */
159  [NONE]              
160  [NONE]              LGUY
160  [NONE]              =
160  [NONE]              99
160  [NONE]              ,
160  [COMMENT_END]       /* for guy-test */
160  [NONE]              
161  [ENUM]              }
161  [ENUM]              ;
161  [NONE]              
163  [COMMENT_WHOLE]     // options.h
163  [NONE]              
164  [NONE]              enum
164  [ENUM]              argtype_e
164  [NONE]              
165  [ENUM]              {
165  [NONE]              
166  [NONE]              AT_BOOL
166  [NONE]              ,
166  [COMMENT_END]       /**< true / false */
166  [NONE]              
167  [NONE]              AT_IARF
167  [NONE]              ,
167  [COMMENT_END]       /**< Ignore / Add / Remove / Force */
167  [NONE]              
168  [NONE]              AT_NUM
168  [NONE]              ,
168  [COMMENT_END]       /**< Number */
168  [NONE]              
169  [NONE]              AT_LINE
169  [NONE]              ,
169  [COMMENT_END]       /**< Line Endings */
169  [NONE]              
170  [NONE]              AT_POS
170  [NONE]              ,
170  [COMMENT_END]       /**< start/end or Trail/Lead */
170  [NONE]              
171  [NONE]              AT_STRING
171  [NONE]              ,
171  [COMMENT_END]       /**< string value */
171  [NONE]              
172  [NONE]              AT_UNUM
172  [NONE]              ,
172  [COMMENT_END]       /**< unsigned Number */
172  [NONE]              
173  [ENUM]              }
173  [ENUM]              ;
173  [NONE]              
175  [NONE]              enum
175  [ENUM]              argval_t
175  [NONE]              
176  [ENUM]              {
176  [NONE]              
177  [NONE]              AV_IGNORE
177  [NONE]              =
177  [NONE]              0
177  [NONE]              ,
177  [NONE]              
178  [NONE]              AV_ADD
178  [NONE]              =
178  [NONE]              1
178  [NONE]              ,
178  [NONE]              
179  [NONE]              AV_REMOVE
179  [NONE]              =
179  [NONE]              2
179  [NONE]              ,
179  [NONE]              
180  [NONE]              AV_FORCE
180  [NONE]              =
180  [NONE]              3
180  [NONE]              ,
180  [COMMENT_END]       /**< remove + add */
180  [NONE]              
181  [NONE]              AV_NOT_DEFINED
181  [NONE]              =
181  [NONE]              4
181  [COMMENT_END]       /* to be used with QT, SIGNAL SLOT macros */
181  [NONE]              
182  [ENUM]              }
182  [ENUM]              ;
182  [NONE]              
184  [NONE]              enum
184  [ENUM]              lineends_e
184  [NONE]              
185  [ENUM]              {
185  [NONE]              
186  [NONE]              LE_LF
186  [NONE]              ,
186  [COMMENT_END]       /* "\n"   */
186  [NONE]              
187  [NONE]              LE_CRLF
187  [NONE]              ,
187  [COMMENT_END]       /* "\r\n" */
187  [NONE]              
188  [NONE]              LE_CR
188  [NONE]              ,
188  [COMMENT_END]       /* "\r"   */
188  [NONE]              
190  [NONE]              LE_AUTO
190  [NONE]              ,
190  [COMMENT_END]       /* keep last */
190  [NONE]              
191  [ENUM]              }
191  [ENUM]              ;
191  [NONE]              
193  [NONE]              enum
193  [ENUM]              tokenpos_e
193  [NONE]              
194  [ENUM]              {
194  [NONE]              
195  [NONE]              TP_IGNORE
195  [NONE]              =
195  [NONE]              0
195  [NONE]              ,
195  [COMMENT_END]       /* don't change it */
195  [NONE]              
196  [NONE]              TP_BREAK
196  [NONE]              =
196  [NONE]              1
196  [NONE]              ,
196  [COMMENT_END]       /* add a newline before or after the if not present */
196  [NONE]              
197  [NONE]              TP_FORCE
197  [NONE]              =
197  [NONE]              2
197  [NONE]              ,
197  [COMMENT_END]       /* force a newline on one side and not the other */
197  [NONE]              
198  [NONE]              TP_LEAD
198  [NONE]              =
198  [NONE]              4
198  [NONE]              ,
198  [COMMENT_END]       /* at the start of a line or leading if wrapped line */
198  [NONE]              
199  [NONE]              TP_LEAD_BREAK
199  [NONE]              =
199  [NONE]              (
199  [NONE]              TP_LEAD
199  [NONE]              |
199  [NONE]              TP_BREAK
199  [NONE]              )
199  [NONE]              ,
199  [NONE]              
200  [NONE]              TP_LEAD_FORCE
200  [NONE]              =
200  [NONE]              (
200  [NONE]              TP_LEAD
200  [NONE]              |
200  [NONE]              TP_FORCE
200  [NONE]              )
200  [NONE]              ,
200  [NONE]              
201  [NONE]              TP_TRAIL
201  [NONE]              =
201  [NONE]              8
201  [NONE]              ,
201  [COMMENT_END]       /* at the end of a line or trailing if wrapped line */
201  [NONE]              
202  [NONE]              TP_TRAIL_BREAK
202  [NONE]              =
202  [NONE]              (
202  [NONE]              TP_TRAIL
202  [NONE]              |
202  [NONE]              TP_BREAK
202  [NONE]              )
202  [NONE]              ,
202  [NONE]              
203  [NONE]              TP_TRAIL_FORCE
203  [NONE]              =
203  [NONE]              (
203  [NONE]              TP_TRAIL
203  [NONE]              |
203  [NONE]              TP_FORCE
203  [NONE]              )
203  [NONE]              ,
203  [NONE]              
204  [NONE]              TP_JOIN
204  [NONE]              =
204  [NONE]              16
204  [NONE]              ,
204  [COMMENT_END]       /* remove newlines on both sides */
204  [NONE]              
205  [ENUM]              }
205  [ENUM]              ;
205  [NONE]              