Line [Token]             Text
1    [COMMENT]           /* Make the structure name match the typedef. */
1    [NEWLINE]           
2    [TYPEDEF]           typedef
2    [STRUCT]            struct
2    [TYPE]              bar
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TYPE]              int
3    [WORD]              level
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [BRACE_CLOSE]       }
4    [TYPE]              BAR
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [TYPEDEF]           typedef
5    [TYPE]              int
5    [TYPE]              foo
5    [SEMICOLON]         ;
5    [COMMENT]           /* This is foo. */
5    [NEWLINE]           
6    [TYPEDEF]           typedef
6    [QUALIFIER]         const
6    [TYPE]              long
6    [TYPE]              baz
6    [SEMICOLON]         ;
6    [COMMENT]           /* This is baz. */
6    [NEWLINE]           
9    [QUALIFIER]         static
9    [TYPE]              char
9    [PTR_TYPE]          *
9    [FUNC_PROTO]        function
9    [FPAREN_OPEN]       (
9    [TYPE]              int
9    [WORD]              _arg
9    [COMMA]             ,
9    [QUALIFIER]         const
9    [TYPE]              char
9    [PTR_TYPE]          *
9    [WORD]              _arg2
9    [COMMA]             ,
9    [STRUCT]            struct
9    [TYPE]              foo
9    [PTR_TYPE]          *
9    [WORD]              _arg3
9    [COMMA]             ,
9    [NEWLINE]           
10   [STRUCT]            struct
10   [TYPE]              bar
10   [PTR_TYPE]          *
10   [WORD]              _arg4
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [QUALIFIER]         static
11   [TYPE]              void
11   [FUNC_PROTO]        usage
11   [FPAREN_OPEN]       (
11   [TYPE]              void
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
13   [COMMENT_MULTI]     /*␤ * All major routines should have a comment briefly describing what␤ * they do.  The comment before the "main" routine should describe␤ * what the program does.␤ */
17   [NEWLINE]           
18   [TYPE]              int
18   [NEWLINE]           
19   [FUNC_DEF]          main
19   [FPAREN_OPEN]       (
19   [TYPE]              int
19   [WORD]              argc
19   [COMMA]             ,
19   [TYPE]              char
19   [PTR_TYPE]          *
19   [WORD]              argv
19   [TSQUARE]           []
19   [FPAREN_CLOSE]      )
19   [NEWLINE]           
20   [BRACE_OPEN]        {
20   [NEWLINE]           
21   [TYPE]              char
21   [PTR_TYPE]          *
21   [WORD]              ep
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [TYPE]              long
22   [WORD]              num
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [TYPE]              int
23   [WORD]              ch
23   [SEMICOLON]         ;
23   [NEWLINE]           
25   [WHILE]             while
25   [SPAREN_OPEN]       (
25   [PAREN_OPEN]        (
25   [WORD]              ch
25   [ASSIGN]            =
25   [FUNC_CALL]         getopt
25   [FPAREN_OPEN]       (
25   [WORD]              argc
25   [COMMA]             ,
25   [WORD]              argv
25   [COMMA]             ,
25   [STRING]            "abNn:"
25   [FPAREN_CLOSE]      )
25   [PAREN_CLOSE]       )
25   [COMPARE]           !=
25   [NEG]               -
25   [NUMBER]            1
25   [SPAREN_CLOSE]      )
25   [NEWLINE]           
25   [BRACE_OPEN]        {
25   [NEWLINE]           
26   [SWITCH]            switch
26   [SPAREN_OPEN]       (
26   [WORD]              ch
26   [SPAREN_CLOSE]      )
26   [COMMENT]           /* Indent the switch. */
26   [NEWLINE]           
26   [BRACE_OPEN]        {
26   [NEWLINE]           
27   [CASE]              case
27   [STRING]            'a'
27   [CASE_COLON]        :
27   [COMMENT]           /* Don't indent the case. */
27   [NEWLINE]           
28   [WORD]              aflag
28   [ASSIGN]            =
28   [NUMBER]            1
28   [SEMICOLON]         ;
28   [COMMENT]           /* Indent case body one tab. */
28   [NEWLINE]           
29   [COMMENT]           /* FALLTHROUGH */
29   [NEWLINE]           
30   [CASE]              case
30   [STRING]            'b'
30   [CASE_COLON]        :
30   [NEWLINE]           
31   [WORD]              bflag
31   [ASSIGN]            =
31   [NUMBER]            1
31   [SEMICOLON]         ;
31   [NEWLINE]           
32   [BREAK]             break
32   [SEMICOLON]         ;
32   [NEWLINE]           
33   [CASE]              case
33   [STRING]            'N'
33   [CASE_COLON]        :
33   [NEWLINE]           
34   [WORD]              Nflag
34   [ASSIGN]            =
34   [NUMBER]            1
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [BREAK]             break
35   [SEMICOLON]         ;
35   [NEWLINE]           
36   [CASE]              case
36   [STRING]            'n'
36   [CASE_COLON]        :
36   [NEWLINE]           
37   [WORD]              num
37   [ASSIGN]            =
37   [FUNC_CALL]         strtol
37   [FPAREN_OPEN]       (
37   [WORD]              optarg
37   [COMMA]             ,
37   [ADDR]              &
37   [WORD]              ep
37   [COMMA]             ,
37   [NUMBER]            10
37   [FPAREN_CLOSE]      )
37   [SEMICOLON]         ;
37   [NEWLINE]           
38   [IF]                if
38   [SPAREN_OPEN]       (
0    [PAREN_OPEN]        (
38   [WORD]              num
38   [COMPARE]           <=
38   [NUMBER]            0
0    [PAREN_CLOSE]       )
38   [BOOL]              ||
0    [PAREN_OPEN]        (
38   [DEREF]             *
38   [WORD]              ep
38   [COMPARE]           !=
38   [STRING]            '\0'
0    [PAREN_CLOSE]       )
38   [SPAREN_CLOSE]      )
38   [BRACE_OPEN]        {
38   [NEWLINE]           
39   [FUNC_CALL]         warnx
39   [FPAREN_OPEN]       (
39   [STRING]            "illegal number, -n argument -- %s"
39   [COMMA]             ,
39   [NEWLINE]           
40   [WORD]              optarg
40   [FPAREN_CLOSE]      )
40   [SEMICOLON]         ;
40   [NEWLINE]           
41   [FUNC_CALL]         usage
41   [FPAREN_OPEN]       (
41   [FPAREN_CLOSE]      )
41   [SEMICOLON]         ;
41   [NEWLINE]           
42   [BRACE_CLOSE]       }
42   [NEWLINE]           
43   [BREAK]             break
43   [SEMICOLON]         ;
43   [NEWLINE]           
44   [CASE]              case
44   [STRING]            '?'
44   [CASE_COLON]        :
44   [NEWLINE]           
45   [CASE]              default
45   [CASE_COLON]        :
45   [NEWLINE]           
46   [FUNC_CALL]         usage
46   [FPAREN_OPEN]       (
46   [FPAREN_CLOSE]      )
46   [SEMICOLON]         ;
46   [NEWLINE]           
47   [COMMENT]           /* NOTREACHED */
47   [NEWLINE]           
48   [BRACE_CLOSE]       }
48   [NEWLINE]           
48   [BRACE_CLOSE]       }
48   [NEWLINE]           
49   [WORD]              argc
49   [ASSIGN]            -=
49   [WORD]              optind
49   [SEMICOLON]         ;
49   [NEWLINE]           
50   [WORD]              argv
50   [ASSIGN]            +=
50   [WORD]              optind
50   [SEMICOLON]         ;
50   [NEWLINE]           
52   [FOR]               for
52   [SPAREN_OPEN]       (
52   [WORD]              p
52   [ASSIGN]            =
52   [WORD]              buf
52   [SEMICOLON]         ;
52   [DEREF]             *
52   [WORD]              p
52   [COMPARE]           !=
52   [STRING]            '\0'
52   [SEMICOLON]         ;
52   [INCDEC_BEFORE]     ++
52   [WORD]              p
52   [SPAREN_CLOSE]      )
52   [NEWLINE]           
52   [BRACE_OPEN]        {
52   [NEWLINE]           
53   [COMMENT]           /* nothing */
53   [NEWLINE]           
53   [BRACE_CLOSE]       }
53   [NEWLINE]           
54   [FOR]               for
54   [SPAREN_OPEN]       (
54   [SEMICOLON]         ;
54   [SEMICOLON]         ;
54   [SPAREN_CLOSE]      )
54   [NEWLINE]           
54   [BRACE_OPEN]        {
54   [NEWLINE]           
55   [WORD]              stmt
55   [SEMICOLON]         ;
55   [NEWLINE]           
55   [BRACE_CLOSE]       }
55   [NEWLINE]           
56   [FOR]               for
56   [SPAREN_OPEN]       (
56   [SEMICOLON]         ;
56   [SEMICOLON]         ;
56   [SPAREN_CLOSE]      )
56   [NEWLINE]           
56   [BRACE_OPEN]        {
56   [NEWLINE]           
57   [WORD]              zed
57   [ASSIGN]            =
57   [WORD]              a
57   [ARITH]             +
57   [WORD]              really
57   [ARITH]             +
57   [TYPE]              long
57   [ARITH]             +
57   [WORD]              statement
57   [ARITH]             +
57   [WORD]              that
57   [ARITH]             +
57   [WORD]              needs
57   [ARITH]             +
57   [NEWLINE]           
58   [WORD]              two
58   [ARITH]             +
58   [WORD]              lines
58   [ARITH]             +
58   [WORD]              gets
58   [ARITH]             +
58   [WORD]              indented
58   [ARITH]             +
58   [WORD]              four
58   [ARITH]             +
58   [WORD]              spaces
58   [ARITH]             +
58   [NEWLINE]           
59   [WORD]              on
59   [ARITH]             +
59   [WORD]              the
59   [ARITH]             +
59   [WORD]              second
59   [ARITH]             +
59   [WORD]              and
59   [ARITH]             +
59   [WORD]              subsequent
59   [ARITH]             +
59   [WORD]              lines
59   [SEMICOLON]         ;
59   [NEWLINE]           
60   [BRACE_CLOSE]       }
60   [NEWLINE]           
61   [FOR]               for
61   [SPAREN_OPEN]       (
61   [SEMICOLON]         ;
61   [SEMICOLON]         ;
61   [SPAREN_CLOSE]      )
61   [NEWLINE]           
61   [BRACE_OPEN]        {
61   [NEWLINE]           
62   [IF]                if
62   [SPAREN_OPEN]       (
62   [WORD]              cond
62   [SPAREN_CLOSE]      )
62   [BRACE_OPEN]        {
62   [NEWLINE]           
63   [WORD]              stmt
63   [SEMICOLON]         ;
63   [NEWLINE]           
63   [BRACE_CLOSE]       }
63   [NEWLINE]           
64   [BRACE_CLOSE]       }
64   [NEWLINE]           
65   [IF]                if
65   [SPAREN_OPEN]       (
65   [WORD]              val
65   [COMPARE]           !=
65   [WORD]              NULL
65   [SPAREN_CLOSE]      )
65   [BRACE_OPEN]        {
65   [NEWLINE]           
66   [WORD]              val
66   [ASSIGN]            =
66   [FUNC_CALL]         realloc
66   [FPAREN_OPEN]       (
66   [WORD]              val
66   [COMMA]             ,
66   [WORD]              newsize
66   [FPAREN_CLOSE]      )
66   [SEMICOLON]         ;
66   [NEWLINE]           
66   [BRACE_CLOSE]       }
66   [NEWLINE]           
68   [FUNC_CALL]         fcn_call
68   [FPAREN_OPEN]       (
68   [WORD]              with
68   [COMMA]             ,
68   [WORD]              a
68   [COMMA]             ,
68   [WORD]              really
68   [COMMA]             ,
68   [TYPE]              long
68   [COMMA]             ,
68   [WORD]              list
68   [COMMA]             ,
68   [WORD]              of
68   [COMMA]             ,
68   [WORD]              parameters
68   [COMMA]             ,
68   [NEWLINE]           
69   [WORD]              that
69   [COMMA]             ,
69   [WORD]              spans
69   [COMMA]             ,
69   [WORD]              two
69   [COMMA]             ,
69   [WORD]              lines
69   [FPAREN_CLOSE]      )
69   [SEMICOLON]         ;
69   [NEWLINE]           
71   [FOR]               for
71   [SPAREN_OPEN]       (
71   [SEMICOLON]         ;
71   [WORD]              cnt
71   [COMPARE]           <
71   [NUMBER]            15
71   [SEMICOLON]         ;
71   [WORD]              cnt
71   [INCDEC_AFTER]      ++
71   [SPAREN_CLOSE]      )
71   [NEWLINE]           
71   [BRACE_OPEN]        {
71   [NEWLINE]           
72   [WORD]              stmt1
72   [SEMICOLON]         ;
72   [NEWLINE]           
73   [WORD]              stmt2
73   [SEMICOLON]         ;
73   [NEWLINE]           
74   [BRACE_CLOSE]       }
74   [NEWLINE]           
76   [WORD]              almod
76   [ASSIGN]            =
76   [PAREN_OPEN]        (
76   [FUNC_CALL]         chunk_is_single_line_comment
76   [FPAREN_OPEN]       (
76   [WORD]              pc
76   [FPAREN_CLOSE]      )
76   [BOOL]              &&
76   [NEWLINE]           
77   [WORD]              cpd
77   [MEMBER]            .
77   [WORD]              settings
77   [SQUARE_OPEN]       [
77   [WORD]              UO_indent_relative_single_line_comments
77   [SQUARE_CLOSE]      ]
77   [MEMBER]            .
77   [WORD]              b
77   [PAREN_CLOSE]       )
77   [QUESTION]          ?
77   [NEWLINE]           
78   [WORD]              ALMODE_KEEP_REL
78   [COND_COLON]        :
78   [WORD]              ALMODE_KEEP_ABS
78   [SEMICOLON]         ;
78   [NEWLINE]           
80   [COMMENT_MULTI]     /* Indentation is an 8 character tab.  Second level indents are four spaces.␤	 * If you have to wrap a long statement, put the operator at the end of the␤	 * line.␤	 */
83   [NEWLINE]           
85   [WHILE]             while
85   [SPAREN_OPEN]       (
85   [WORD]              cnt
85   [COMPARE]           <
85   [NUMBER]            20
85   [BOOL]              &&
85   [WORD]              this_variable_name_is_too_long
85   [BOOL]              &&
85   [NEWLINE]           
86   [WORD]              ep
86   [COMPARE]           !=
86   [WORD]              NULL
86   [SPAREN_CLOSE]      )
86   [NEWLINE]           
86   [BRACE_OPEN]        {
86   [NEWLINE]           
87   [WORD]              zappy
87   [ASSIGN]            =
87   [WORD]              a
87   [ARITH]             +
87   [WORD]              really
87   [ARITH]             +
87   [TYPE]              long
87   [ARITH]             +
87   [WORD]              statement
87   [ARITH]             +
87   [WORD]              that
87   [ARITH]             +
87   [WORD]              needs
88   [ARITH]             +
87   [NEWLINE]           
88   [WORD]              two
88   [ARITH]             +
88   [WORD]              lines
88   [ARITH]             +
88   [WORD]              gets
88   [ARITH]             +
88   [WORD]              indented
88   [ARITH]             +
88   [WORD]              four
88   [ARITH]             +
88   [WORD]              spaces
88   [ARITH]             +
88   [NEWLINE]           
89   [WORD]              on
89   [ARITH]             +
89   [WORD]              the
89   [ARITH]             +
89   [WORD]              second
89   [ARITH]             +
89   [WORD]              and
89   [ARITH]             +
89   [WORD]              subsequent
89   [ARITH]             +
89   [WORD]              lines
89   [SEMICOLON]         ;
89   [NEWLINE]           
89   [BRACE_CLOSE]       }
89   [NEWLINE]           
91   [COMMENT_CPP]       // Do not add whitespace at the end of a line, and only use tabs followed by
91   [NEWLINE]           
92   [COMMENT_CPP]       // spaces to form the indentation.  Do not use more spaces than a tab will
92   [NEWLINE]           
93   [COMMENT_CPP]       // produce and do not use spaces in front of tabs.
93   [NEWLINE]           
94   [COMMENT_CPP]       //
94   [NEWLINE]           
95   [COMMENT_CPP]       // Closing and opening braces go on the same line as the else.  Braces that
95   [NEWLINE]           
96   [COMMENT_CPP]       // are not necessary may be left out.
96   [NEWLINE]           
98   [IF]                if
98   [SPAREN_OPEN]       (
98   [WORD]              test
98   [SPAREN_CLOSE]      )
98   [BRACE_OPEN]        {
98   [NEWLINE]           
99   [WORD]              stmt
99   [SEMICOLON]         ;
99   [NEWLINE]           
99   [BRACE_CLOSE]       }
100  [ELSE]              else
100  [ELSEIF]            if
100  [SPAREN_OPEN]       (
100  [WORD]              bar
100  [SPAREN_CLOSE]      )
100  [BRACE_OPEN]        {
100  [NEWLINE]           
101  [WORD]              stmt
101  [SEMICOLON]         ;
101  [NEWLINE]           
102  [WORD]              stmt
102  [SEMICOLON]         ;
102  [NEWLINE]           
103  [BRACE_CLOSE]       }
103  [ELSE]              else
103  [BRACE_OPEN]        {
103  [NEWLINE]           
104  [WORD]              stmt
104  [SEMICOLON]         ;
104  [NEWLINE]           
104  [BRACE_CLOSE]       }
104  [NEWLINE]           
106  [COMMENT_CPP]       // No spaces after function names.  Commas have a space after them.  No spa-
106  [NEWLINE]           
107  [COMMENT_CPP]       // ces after `(' or `[' or preceding `]' or `)' characters.
107  [NEWLINE]           
109  [WORD]              error
109  [ASSIGN]            =
109  [FUNC_CALL]         function
109  [FPAREN_OPEN]       (
109  [WORD]              a1
109  [COMMA]             ,
109  [WORD]              a2
109  [FPAREN_CLOSE]      )
109  [SEMICOLON]         ;
109  [NEWLINE]           
110  [IF]                if
110  [SPAREN_OPEN]       (
110  [WORD]              error
110  [COMPARE]           !=
110  [NUMBER]            0
110  [SPAREN_CLOSE]      )
110  [BRACE_OPEN]        {
110  [NEWLINE]           
111  [FUNC_CALL]         exit
111  [FPAREN_OPEN]       (
111  [WORD]              error
111  [FPAREN_CLOSE]      )
111  [SEMICOLON]         ;
111  [NEWLINE]           
111  [BRACE_CLOSE]       }
111  [NEWLINE]           
113  [COMMENT_CPP]       // Unary operators do not require spaces, binary operators do.  Do not use
113  [NEWLINE]           
114  [COMMENT_CPP]       // parentheses unless they are required for precedence or unless the state-
114  [NEWLINE]           
115  [COMMENT_CPP]       // ment is confusing without them.  Remember that other people may confuse
115  [NEWLINE]           
116  [COMMENT_CPP]       // easier than you.  Do YOU understand the following?
116  [NEWLINE]           
118  [WORD]              a
118  [ASSIGN]            =
118  [WORD]              b
118  [MEMBER]            ->
118  [WORD]              c
118  [SQUARE_OPEN]       [
118  [NUMBER]            0
118  [SQUARE_CLOSE]      ]
118  [ARITH]             +
118  [INV]               ~
118  [WORD]              d
118  [COMPARE]           ==
118  [PAREN_OPEN]        (
118  [WORD]              e
118  [BOOL]              ||
118  [WORD]              f
118  [PAREN_CLOSE]       )
118  [BOOL]              ||
118  [WORD]              g
118  [BOOL]              &&
118  [WORD]              h
118  [QUESTION]          ?
118  [WORD]              i
118  [COND_COLON]        :
118  [WORD]              j
118  [ARITH]             >>
118  [NUMBER]            1
118  [SEMICOLON]         ;
118  [NEWLINE]           
119  [WORD]              k
119  [ASSIGN]            =
119  [NOT]               !
119  [PAREN_OPEN]        (
119  [WORD]              l
119  [ARITH]             &
119  [WORD]              FLAGS
119  [PAREN_CLOSE]       )
119  [SEMICOLON]         ;
119  [NEWLINE]           
122  [COMMENT_CPP]       // Exits should be 0 on success, or 1 on failure.
122  [NEWLINE]           
124  [FUNC_CALL]         exit
124  [FPAREN_OPEN]       (
124  [NUMBER]            0
124  [FPAREN_CLOSE]      )
124  [SEMICOLON]         ;
124  [COMMENT_MULTI]     /*␤			    * Avoid obvious comments such as␤			    * "Exit 0 on success."␤                            */
127  [NEWLINE]           
128  [BRACE_CLOSE]       }
128  [NEWLINE]           
130  [QUALIFIER]         static
130  [TYPE]              char
130  [PTR_TYPE]          *
130  [NEWLINE]           
131  [FUNC_PROTO]        function
131  [FPAREN_OPEN]       (
131  [TYPE]              a1
131  [COMMA]             ,
131  [TYPE]              a2
131  [COMMA]             ,
131  [TYPE]              fl
131  [COMMA]             ,
131  [TYPE]              a4
131  [FPAREN_CLOSE]      )
131  [NEWLINE]           
132  [TYPE]              int
132  [WORD]              a1
132  [COMMA]             ,
132  [WORD]              a2
132  [SEMICOLON]         ;
132  [COMMENT]           /* Declare ints, too, don't default them. */
132  [NEWLINE]           
133  [TYPE]              float
133  [WORD]              fl
133  [SEMICOLON]         ;
133  [COMMENT]           /* Beware double vs. float prototype differences. */
133  [NEWLINE]           
134  [TYPE]              int
134  [WORD]              a4
134  [SEMICOLON]         ;
134  [COMMENT]           /* List in order declared. */
134  [NEWLINE]           
135  [BRACE_OPEN]        {
135  [NEWLINE]           
136  [BRACE_CLOSE]       }
136  [NEWLINE]           