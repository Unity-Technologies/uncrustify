Line [Token]             Text
1    [COMMENT_CPP]       // We want simple 4-space indentation for each nesting "level".
1    [NEWLINE]           
3    [COMMENT_CPP]       // cannot find a way to tell uncrustify to indent the line with parenthesis
3    [NEWLINE]           
4    [TYPE]              int
4    [FUNC_DEF]          case2
4    [FPAREN_OPEN]       (
4    [FPAREN_CLOSE]      )
4    [BRACE_OPEN]        {
4    [NEWLINE]           
6    [IF]                if
6    [SPAREN_OPEN]       (
6    [WORD]              condition
6    [SPAREN_CLOSE]      )
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [COMMENT_CPP]       // some code here
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
10   [TYPE]              std
10   [DC_MEMBER]         ::
10   [WORD]              out
10   [ARITH]             <<
10   [NEWLINE]           
11   [STRING]            "hello "
11   [ARITH]             <<
11   [STRING]            "world "
11   [ARITH]             <<
11   [NEWLINE]           
12   [PAREN_OPEN]        (
12   [WORD]              who
12   [QUESTION]          ?
12   [STRING]            "and "
12   [COND_COLON]        :
12   [STRING]            "or "
12   [PAREN_CLOSE]       )
12   [ARITH]             <<
12   [NEWLINE]           
13   [STRING]            "all "
13   [ARITH]             <<
13   [NEWLINE]           
14   [STRING]            "others"
14   [ARITH]             <<
14   [STRING]            ";"
14   [ARITH]             <<
14   [TYPE]              std
14   [DC_MEMBER]         ::
14   [WORD]              endl
14   [SEMICOLON]         ;
14   [NEWLINE]           
16   [COMMENT_CPP]       // and
16   [NEWLINE]           
18   [IF]                if
18   [SPAREN_OPEN]       (
18   [WORD]              condition
18   [SPAREN_CLOSE]      )
18   [BRACE_OPEN]        {
18   [NEWLINE]           
19   [COMMENT_CPP]       // some code here
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [NEWLINE]           
22   [TYPE]              std
22   [DC_MEMBER]         ::
22   [WORD]              out
22   [ARITH]             <<
22   [NEWLINE]           
23   [STRING]            "hello "
23   [ARITH]             <<
23   [STRING]            "world "
23   [ARITH]             <<
23   [NEWLINE]           
24   [PAREN_OPEN]        (
24   [STRING]            "and "
24   [PAREN_CLOSE]       )
24   [ARITH]             <<
24   [NEWLINE]           
25   [STRING]            "all "
25   [ARITH]             <<
25   [NEWLINE]           
26   [STRING]            "others"
26   [ARITH]             <<
26   [STRING]            ";"
26   [ARITH]             <<
26   [TYPE]              std
26   [DC_MEMBER]         ::
26   [WORD]              endl
26   [SEMICOLON]         ;
26   [NEWLINE]           
28   [IF]                if
28   [SPAREN_OPEN]       (
28   [WORD]              cond
28   [SPAREN_CLOSE]      )
28   [VBRACE_OPEN]       
28   [NEWLINE]           
29   [TYPE]              std
29   [DC_MEMBER]         ::
29   [WORD]              out
29   [ARITH]             <<
29   [STRING]            "hi"
29   [SEMICOLON]         ;
29   [VBRACE_CLOSE]      
29   [NEWLINE]           
31   [IF]                if
31   [SPAREN_OPEN]       (
31   [WORD]              cond
31   [SPAREN_CLOSE]      )
31   [VBRACE_OPEN]       
31   [NEWLINE]           
32   [TYPE]              std
32   [DC_MEMBER]         ::
32   [WORD]              out
32   [NEWLINE]           
33   [ARITH]             <<
33   [STRING]            "hi"
33   [NEWLINE]           
34   [ARITH]             <<
34   [STRING]            "and"
34   [NEWLINE]           
35   [ARITH]             <<
35   [STRING]            "more"
35   [NEWLINE]           
36   [SEMICOLON]         ;
36   [VBRACE_CLOSE]      
36   [NEWLINE]           
38   [SWITCH]            switch
38   [SPAREN_OPEN]       (
38   [WORD]              var
38   [SPAREN_CLOSE]      )
38   [BRACE_OPEN]        {
38   [NEWLINE]           
39   [CASE]              case
39   [NUMBER]            0
39   [CASE_COLON]        :
39   [NEWLINE]           
40   [FUNC_CALL]         log
40   [FPAREN_OPEN]       (
40   [FPAREN_CLOSE]      )
40   [ARITH]             <<
40   [NUMBER]            5
40   [NEWLINE]           
41   [ARITH]             <<
41   [NUMBER]            5
41   [SEMICOLON]         ;
41   [NEWLINE]           
42   [BREAK]             break
42   [SEMICOLON]         ;
42   [NEWLINE]           
43   [BRACE_CLOSE]       }
43   [NEWLINE]           
45   [PREPROC]           #
45   [PP_IF]             if
45   [NUMBER]            0
45   [NEWLINE]           
46   [WORD]              out
46   [NEWLINE]           
47   [ARITH]             <<
47   [NUMBER]            5
47   [SEMICOLON]         ;
47   [NEWLINE]           
48   [PREPROC]           #
48   [PP_ENDIF]          endif
48   [NEWLINE]           
50   [RETURN]            return
50   [WORD]              log
50   [NEWLINE]           
51   [ARITH]             >>
51   [WORD]              var
51   [NEWLINE]           
52   [ARITH]             >>
52   [WORD]              second
52   [NEWLINE]           
53   [SEMICOLON]         ;
53   [NEWLINE]           
54   [BRACE_CLOSE]       }
54   [NEWLINE]           
57   [COMMENT_CPP]       // uncrustify aligns (with the << on the first line) instead of indenting
57   [NEWLINE]           
58   [TYPE]              void
58   [FUNC_DEF]          case3
58   [FPAREN_OPEN]       (
58   [FPAREN_CLOSE]      )
58   [NEWLINE]           
59   [BRACE_OPEN]        {
59   [NEWLINE]           
61   [IF]                if
61   [SPAREN_OPEN]       (
61   [WORD]              condition1
61   [SPAREN_CLOSE]      )
61   [BRACE_OPEN]        {
61   [NEWLINE]           
63   [IF]                if
63   [SPAREN_OPEN]       (
63   [WORD]              condition2
63   [SPAREN_CLOSE]      )
63   [BRACE_OPEN]        {
63   [NEWLINE]           
65   [TYPE]              std
65   [DC_MEMBER]         ::
65   [WORD]              out
65   [ARITH]             <<
65   [STRING]            "hello "
65   [NEWLINE]           
66   [ARITH]             <<
66   [STRING]            "world "
66   [NEWLINE]           
67   [ARITH]             <<
67   [PAREN_OPEN]        (
67   [WORD]              who
67   [QUESTION]          ?
67   [STRING]            "and "
67   [COND_COLON]        :
67   [STRING]            "or "
67   [PAREN_CLOSE]       )
67   [NEWLINE]           
68   [ARITH]             <<
68   [STRING]            "all "
68   [NEWLINE]           
69   [ARITH]             <<
69   [STRING]            "others"
69   [ARITH]             <<
69   [STRING]            ";"
69   [ARITH]             <<
69   [TYPE]              std
69   [DC_MEMBER]         ::
69   [WORD]              endl
69   [SEMICOLON]         ;
69   [NEWLINE]           
71   [BRACE_CLOSE]       }
71   [NEWLINE]           
72   [BRACE_CLOSE]       }
72   [NEWLINE]           
74   [COMMENT_CPP]       // this often works better, but has problems with parentheses:
74   [NEWLINE]           
76   [IF]                if
76   [SPAREN_OPEN]       (
76   [WORD]              condition1
76   [SPAREN_CLOSE]      )
76   [BRACE_OPEN]        {
76   [NEWLINE]           
77   [IF]                if
77   [SPAREN_OPEN]       (
77   [WORD]              condition2
77   [SPAREN_CLOSE]      )
77   [BRACE_OPEN]        {
77   [NEWLINE]           
78   [TYPE]              std
78   [DC_MEMBER]         ::
78   [WORD]              out
78   [ARITH]             <<
78   [STRING]            "hello "
78   [ARITH]             <<
78   [NEWLINE]           
79   [STRING]            "world "
79   [ARITH]             <<
79   [NEWLINE]           
80   [PAREN_OPEN]        (
80   [WORD]              who
80   [QUESTION]          ?
80   [STRING]            "and "
80   [COND_COLON]        :
80   [STRING]            "or "
80   [PAREN_CLOSE]       )
80   [ARITH]             <<
80   [NEWLINE]           
81   [STRING]            "all "
81   [ARITH]             <<
81   [NEWLINE]           
82   [STRING]            "others"
82   [ARITH]             <<
82   [STRING]            ";"
82   [ARITH]             <<
82   [TYPE]              std
82   [DC_MEMBER]         ::
82   [WORD]              endl
82   [SEMICOLON]         ;
82   [NEWLINE]           
83   [BRACE_CLOSE]       }
83   [NEWLINE]           
84   [BRACE_CLOSE]       }
84   [NEWLINE]           
85   [BRACE_CLOSE]       }
85   [NEWLINE]           
87   [COMMENT_CPP]       // uncrustify does not indent >> at all!
87   [NEWLINE]           
88   [TYPE]              void
88   [FUNC_DEF]          case4
88   [FPAREN_OPEN]       (
88   [FPAREN_CLOSE]      )
88   [NEWLINE]           
89   [BRACE_OPEN]        {
89   [NEWLINE]           
90   [IF]                if
90   [SPAREN_OPEN]       (
90   [WORD]              condition
90   [SPAREN_CLOSE]      )
90   [BRACE_OPEN]        {
90   [NEWLINE]           
91   [COMMENT_CPP]       // some code here
91   [NEWLINE]           
92   [BRACE_CLOSE]       }
92   [NEWLINE]           
94   [TYPE]              std
94   [DC_MEMBER]         ::
94   [WORD]              in
94   [ARITH]             >>
94   [WORD]              a
94   [NEWLINE]           
95   [ARITH]             >>
95   [WORD]              b
95   [NEWLINE]           
96   [ARITH]             >>
96   [PAREN_OPEN]        (
96   [WORD]              who
96   [QUESTION]          ?
96   [WORD]              c
96   [COND_COLON]        :
96   [WORD]              d
96   [PAREN_CLOSE]       )
96   [ARITH]             >>
96   [NEWLINE]           
97   [ARITH]             >>
97   [WORD]              e
97   [SEMICOLON]         ;
97   [NEWLINE]           
99   [COMMENT_CPP]       // and
99   [NEWLINE]           
101  [IF]                if
101  [SPAREN_OPEN]       (
101  [WORD]              condition1
101  [SPAREN_CLOSE]      )
101  [BRACE_OPEN]        {
101  [NEWLINE]           
103  [IF]                if
103  [SPAREN_OPEN]       (
103  [WORD]              condition2
103  [SPAREN_CLOSE]      )
103  [BRACE_OPEN]        {
103  [NEWLINE]           
104  [TYPE]              std
104  [DC_MEMBER]         ::
104  [WORD]              in
104  [ARITH]             >>
104  [WORD]              a
104  [ARITH]             >>
104  [NEWLINE]           
105  [WORD]              b
105  [ARITH]             >>
105  [NEWLINE]           
106  [PAREN_OPEN]        (
106  [WORD]              who
106  [QUESTION]          ?
106  [WORD]              c
106  [COND_COLON]        :
106  [WORD]              d
106  [PAREN_CLOSE]       )
106  [ARITH]             >>
106  [NEWLINE]           
107  [WORD]              e
107  [SEMICOLON]         ;
107  [NEWLINE]           
108  [BRACE_CLOSE]       }
108  [NEWLINE]           
109  [BRACE_CLOSE]       }
109  [NEWLINE]           
110  [BRACE_CLOSE]       }
110  [NEWLINE]           
112  [TYPE]              void
112  [FUNC_DEF]          foo
112  [FPAREN_OPEN]       (
112  [FPAREN_CLOSE]      )
112  [BRACE_OPEN]        {
112  [NEWLINE]           
114  [IF]                if
114  [SPAREN_OPEN]       (
114  [FUNC_CALL]         head
114  [FPAREN_OPEN]       (
114  [FPAREN_CLOSE]      )
114  [SPAREN_CLOSE]      )
114  [VBRACE_OPEN]       
114  [NEWLINE]           
115  [WORD]              os
115  [ARITH]             <<
115  [STRING]            "HEAD,"
115  [SEMICOLON]         ;
115  [VBRACE_CLOSE]      
115  [NEWLINE]           
116  [ELSE]              else
116  [NEWLINE]           
117  [ELSEIF]            if
117  [SPAREN_OPEN]       (
117  [FUNC_CALL]         tail
117  [FPAREN_OPEN]       (
117  [FPAREN_CLOSE]      )
117  [SPAREN_CLOSE]      )
117  [VBRACE_OPEN]       
117  [NEWLINE]           
118  [WORD]              os
118  [ARITH]             <<
118  [STRING]            "TAIL,"
118  [SEMICOLON]         ;
118  [VBRACE_CLOSE]      
118  [NEWLINE]           
120  [IF]                if
120  [SPAREN_OPEN]       (
120  [WORD]              a
120  [COMPARE]           >=
120  [NUMBER]            0
120  [BOOL]              &&
120  [NEWLINE]           
121  [WORD]              b
121  [COMPARE]           <=
121  [NUMBER]            0
121  [SPAREN_CLOSE]      )
121  [VBRACE_OPEN]       
121  [NEWLINE]           
122  [WORD]              cerr
122  [ARITH]             <<
122  [STRING]            "it is"
122  [SEMICOLON]         ;
122  [VBRACE_CLOSE]      
122  [NEWLINE]           
123  [BRACE_CLOSE]       }
123  [NEWLINE]           
125  [TYPE]              int
125  [WORD]              list
125  [TSQUARE]           []
125  [ASSIGN]            =
125  [BRACE_OPEN]        {
125  [NEWLINE]           
126  [NUMBER]            1
126  [COMMA]             ,
126  [NEWLINE]           
127  [NUMBER]            2
127  [COMMA]             ,
127  [NEWLINE]           
128  [NUMBER]            1
128  [ARITH]             <<
128  [NUMBER]            5
128  [COMMA]             ,
128  [NEWLINE]           
129  [NUMBER]            1
129  [ARITH]             <<
129  [NUMBER]            6
129  [NEWLINE]           
130  [BRACE_CLOSE]       }
130  [SEMICOLON]         ;
130  [NEWLINE]           
132  [TYPE]              void
132  [FUNC_DEF]          check
132  [FPAREN_OPEN]       (
132  [FPAREN_CLOSE]      )
132  [BRACE_OPEN]        {
132  [NEWLINE]           
133  [TYPE]              ostream
133  [BYREF]             &
133  [WORD]              os
133  [ASSIGN]            =
133  [FUNC_CALL]         Comment
133  [FPAREN_OPEN]       (
133  [NUMBER]            1
133  [FPAREN_CLOSE]      )
133  [ARITH]             <<
133  [STRING]            "error: "
133  [ARITH]             <<
133  [WORD]              workerName
133  [ARITH]             <<
133  [NEWLINE]           
134  [STRING]            " terminated by signal "
134  [ARITH]             <<
134  [FUNC_CALL]         WTERMSIG
134  [FPAREN_OPEN]       (
134  [WORD]              exitStatus
134  [FPAREN_CLOSE]      )
134  [SEMICOLON]         ;
134  [NEWLINE]           
136  [RETURN]            return
136  [WORD]              theAddr
136  [MEMBER]            .
136  [FUNC_CALL]         addrN
136  [FPAREN_OPEN]       (
136  [FPAREN_CLOSE]      )
136  [MEMBER]            .
136  [FUNC_CALL]         family
136  [FPAREN_OPEN]       (
136  [FPAREN_CLOSE]      )
136  [COMPARE]           ==
136  [WORD]              AF_INET6
136  [QUESTION]          ?
136  [NEWLINE]           
137  [PAREN_OPEN]        (
137  [WORD]              theAddr
137  [MEMBER]            .
137  [FUNC_CALL]         octet
137  [FPAREN_OPEN]       (
137  [WORD]              idx
137  [ARITH]             *
137  [NUMBER]            2
137  [FPAREN_CLOSE]      )
137  [ARITH]             <<
137  [NUMBER]            8
137  [PAREN_CLOSE]       )
137  [ARITH]             +
137  [WORD]              theAddr
137  [MEMBER]            .
137  [FUNC_CALL]         octet
137  [FPAREN_OPEN]       (
137  [WORD]              idx
137  [ARITH]             *
137  [NUMBER]            2
137  [ARITH]             +
137  [NUMBER]            1
137  [FPAREN_CLOSE]      )
137  [COND_COLON]        :
137  [NEWLINE]           
138  [TYPE]              theAddr
138  [MEMBER]            .
138  [FUNC_CALL]         octet
138  [FPAREN_OPEN]       (
138  [WORD]              idx
138  [FPAREN_CLOSE]      )
138  [SEMICOLON]         ;
138  [NEWLINE]           
139  [BRACE_CLOSE]       }
139  [NEWLINE]           