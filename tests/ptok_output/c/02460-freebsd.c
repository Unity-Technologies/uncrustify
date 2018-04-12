Line [Parent]            Text
1    [COMMENT_WHOLE]     /* Make the structure name match the typedef. */
1    [NONE]              
2    [NONE]              typedef
2    [NONE]              struct
2    [NONE]              bar
2    [STRUCT]            {
2    [NONE]              
3    [NONE]              int
3    [NONE]              level
3    [NONE]              ;
3    [NONE]              
4    [STRUCT]            }
4    [NONE]              BAR
4    [TYPEDEF]           ;
4    [NONE]              
5    [NONE]              typedef
5    [NONE]              int
5    [NONE]              foo
5    [TYPEDEF]           ;
5    [COMMENT_END]       /* This is foo. */
5    [NONE]              
6    [NONE]              typedef
6    [NONE]              const
6    [NONE]              long
6    [NONE]              baz
6    [TYPEDEF]           ;
6    [COMMENT_END]       /* This is baz. */
6    [NONE]              
9    [FUNC_PROTO]        static
9    [FUNC_PROTO]        char
9    [FUNC_PROTO]        *
9    [NONE]              function
9    [FUNC_PROTO]        (
9    [NONE]              int
9    [NONE]              _arg
9    [NONE]              ,
9    [NONE]              const
9    [NONE]              char
9    [NONE]              *
9    [NONE]              _arg2
9    [NONE]              ,
9    [NONE]              struct
9    [NONE]              foo
9    [STRUCT]            *
9    [NONE]              _arg3
9    [NONE]              ,
9    [NONE]              
10   [NONE]              struct
10   [NONE]              bar
10   [STRUCT]            *
10   [NONE]              _arg4
10   [FUNC_PROTO]        )
10   [FUNC_PROTO]        ;
10   [NONE]              
11   [FUNC_PROTO]        static
11   [FUNC_PROTO]        void
11   [NONE]              usage
11   [FUNC_PROTO]        (
11   [NONE]              void
11   [FUNC_PROTO]        )
11   [FUNC_PROTO]        ;
11   [NONE]              
13   [COMMENT_WHOLE]     /*␤ * All major routines should have a comment briefly describing what␤ * they do.  The comment before the "main" routine should describe␤ * what the program does.␤ */
17   [NONE]              
18   [FUNC_DEF]          int
18   [NONE]              
19   [NONE]              main
19   [FUNC_DEF]          (
19   [NONE]              int
19   [NONE]              argc
19   [NONE]              ,
19   [NONE]              char
19   [NONE]              *
19   [NONE]              argv
19   [NONE]              []
19   [FUNC_DEF]          )
19   [NONE]              
20   [FUNC_DEF]          {
20   [NONE]              
21   [NONE]              char
21   [NONE]              *
21   [NONE]              ep
21   [NONE]              ;
21   [NONE]              
22   [NONE]              long
22   [NONE]              num
22   [NONE]              ;
22   [NONE]              
23   [NONE]              int
23   [NONE]              ch
23   [NONE]              ;
23   [NONE]              
25   [NONE]              while
25   [WHILE]             (
25   [NONE]              (
25   [NONE]              ch
25   [NONE]              =
25   [NONE]              getopt
25   [FUNC_CALL]         (
25   [NONE]              argc
25   [NONE]              ,
25   [NONE]              argv
25   [NONE]              ,
25   [NONE]              "abNn:"
25   [FUNC_CALL]         )
25   [NONE]              )
25   [NONE]              !=
25   [NONE]              -
25   [NONE]              1
25   [WHILE]             )
25   [NONE]              
25   [WHILE]             {
25   [NONE]              
26   [NONE]              switch
26   [SWITCH]            (
26   [NONE]              ch
26   [SWITCH]            )
26   [COMMENT_END]       /* Indent the switch. */
26   [NONE]              
26   [SWITCH]            {
26   [NONE]              
27   [NONE]              case
27   [NONE]              'a'
27   [NONE]              :
27   [COMMENT_END]       /* Don't indent the case. */
27   [NONE]              
28   [NONE]              aflag
28   [NONE]              =
28   [NONE]              1
28   [NONE]              ;
28   [COMMENT_END]       /* Indent case body one tab. */
28   [NONE]              
29   [COMMENT_WHOLE]     /* FALLTHROUGH */
29   [NONE]              
30   [NONE]              case
30   [NONE]              'b'
30   [NONE]              :
30   [NONE]              
31   [NONE]              bflag
31   [NONE]              =
31   [NONE]              1
31   [NONE]              ;
31   [NONE]              
32   [NONE]              break
32   [NONE]              ;
32   [NONE]              
33   [NONE]              case
33   [NONE]              'N'
33   [NONE]              :
33   [NONE]              
34   [NONE]              Nflag
34   [NONE]              =
34   [NONE]              1
34   [NONE]              ;
34   [NONE]              
35   [NONE]              break
35   [NONE]              ;
35   [NONE]              
36   [NONE]              case
36   [NONE]              'n'
36   [NONE]              :
36   [NONE]              
37   [NONE]              num
37   [NONE]              =
37   [NONE]              strtol
37   [FUNC_CALL]         (
37   [NONE]              optarg
37   [NONE]              ,
37   [NONE]              &
37   [NONE]              ep
37   [NONE]              ,
37   [NONE]              10
37   [FUNC_CALL]         )
37   [NONE]              ;
37   [NONE]              
38   [NONE]              if
38   [IF]                (
0    [NONE]              (
38   [NONE]              num
38   [NONE]              <=
38   [NONE]              0
0    [NONE]              )
38   [NONE]              ||
0    [NONE]              (
38   [NONE]              *
38   [NONE]              ep
38   [NONE]              !=
38   [NONE]              '\0'
0    [NONE]              )
38   [IF]                )
38   [IF]                {
38   [NONE]              
39   [NONE]              warnx
39   [FUNC_CALL]         (
39   [NONE]              "illegal number, -n argument -- %s"
39   [NONE]              ,
39   [NONE]              
40   [NONE]              optarg
40   [FUNC_CALL]         )
40   [NONE]              ;
40   [NONE]              
41   [NONE]              usage
41   [FUNC_CALL]         (
41   [FUNC_CALL]         )
41   [NONE]              ;
41   [NONE]              
42   [IF]                }
42   [NONE]              
43   [NONE]              break
43   [NONE]              ;
43   [NONE]              
44   [NONE]              case
44   [NONE]              '?'
44   [NONE]              :
44   [NONE]              
45   [NONE]              default
45   [NONE]              :
45   [NONE]              
46   [NONE]              usage
46   [FUNC_CALL]         (
46   [FUNC_CALL]         )
46   [NONE]              ;
46   [NONE]              
47   [COMMENT_WHOLE]     /* NOTREACHED */
47   [NONE]              
48   [SWITCH]            }
48   [NONE]              
48   [WHILE]             }
48   [NONE]              
49   [NONE]              argc
49   [NONE]              -=
49   [NONE]              optind
49   [NONE]              ;
49   [NONE]              
50   [NONE]              argv
50   [NONE]              +=
50   [NONE]              optind
50   [NONE]              ;
50   [NONE]              
52   [NONE]              for
52   [FOR]               (
52   [NONE]              p
52   [NONE]              =
52   [NONE]              buf
52   [FOR]               ;
52   [NONE]              *
52   [NONE]              p
52   [NONE]              !=
52   [NONE]              '\0'
52   [FOR]               ;
52   [NONE]              ++
52   [NONE]              p
52   [FOR]               )
52   [NONE]              
52   [FOR]               {
52   [NONE]              
53   [COMMENT_WHOLE]     /* nothing */
53   [NONE]              
53   [FOR]               }
53   [NONE]              
54   [NONE]              for
54   [FOR]               (
54   [FOR]               ;
54   [FOR]               ;
54   [FOR]               )
54   [NONE]              
54   [FOR]               {
54   [NONE]              
55   [NONE]              stmt
55   [NONE]              ;
55   [NONE]              
55   [FOR]               }
55   [NONE]              
56   [NONE]              for
56   [FOR]               (
56   [FOR]               ;
56   [FOR]               ;
56   [FOR]               )
56   [NONE]              
56   [FOR]               {
56   [NONE]              
57   [NONE]              zed
57   [NONE]              =
57   [NONE]              a
57   [NONE]              +
57   [NONE]              really
57   [NONE]              +
57   [NONE]              long
57   [NONE]              +
57   [NONE]              statement
57   [NONE]              +
57   [NONE]              that
57   [NONE]              +
57   [NONE]              needs
57   [NONE]              +
57   [NONE]              
58   [NONE]              two
58   [NONE]              +
58   [NONE]              lines
58   [NONE]              +
58   [NONE]              gets
58   [NONE]              +
58   [NONE]              indented
58   [NONE]              +
58   [NONE]              four
58   [NONE]              +
58   [NONE]              spaces
58   [NONE]              +
58   [NONE]              
59   [NONE]              on
59   [NONE]              +
59   [NONE]              the
59   [NONE]              +
59   [NONE]              second
59   [NONE]              +
59   [NONE]              and
59   [NONE]              +
59   [NONE]              subsequent
59   [NONE]              +
59   [NONE]              lines
59   [NONE]              ;
59   [NONE]              
60   [FOR]               }
60   [NONE]              
61   [NONE]              for
61   [FOR]               (
61   [FOR]               ;
61   [FOR]               ;
61   [FOR]               )
61   [NONE]              
61   [FOR]               {
61   [NONE]              
62   [NONE]              if
62   [IF]                (
62   [NONE]              cond
62   [IF]                )
62   [IF]                {
62   [NONE]              
63   [NONE]              stmt
63   [NONE]              ;
63   [NONE]              
63   [IF]                }
63   [NONE]              
64   [FOR]               }
64   [NONE]              
65   [NONE]              if
65   [IF]                (
65   [NONE]              val
65   [NONE]              !=
65   [NONE]              NULL
65   [IF]                )
65   [IF]                {
65   [NONE]              
66   [NONE]              val
66   [NONE]              =
66   [NONE]              realloc
66   [FUNC_CALL]         (
66   [NONE]              val
66   [NONE]              ,
66   [NONE]              newsize
66   [FUNC_CALL]         )
66   [NONE]              ;
66   [NONE]              
66   [IF]                }
66   [NONE]              
68   [NONE]              fcn_call
68   [FUNC_CALL]         (
68   [NONE]              with
68   [NONE]              ,
68   [NONE]              a
68   [NONE]              ,
68   [NONE]              really
68   [NONE]              ,
68   [NONE]              long
68   [NONE]              ,
68   [NONE]              list
68   [NONE]              ,
68   [NONE]              of
68   [NONE]              ,
68   [NONE]              parameters
68   [NONE]              ,
68   [NONE]              
69   [NONE]              that
69   [NONE]              ,
69   [NONE]              spans
69   [NONE]              ,
69   [NONE]              two
69   [NONE]              ,
69   [NONE]              lines
69   [FUNC_CALL]         )
69   [NONE]              ;
69   [NONE]              
71   [NONE]              for
71   [FOR]               (
71   [FOR]               ;
71   [NONE]              cnt
71   [NONE]              <
71   [NONE]              15
71   [FOR]               ;
71   [NONE]              cnt
71   [NONE]              ++
71   [FOR]               )
71   [NONE]              
71   [FOR]               {
71   [NONE]              
72   [NONE]              stmt1
72   [NONE]              ;
72   [NONE]              
73   [NONE]              stmt2
73   [NONE]              ;
73   [NONE]              
74   [FOR]               }
74   [NONE]              
76   [NONE]              almod
76   [NONE]              =
76   [NONE]              (
76   [NONE]              chunk_is_single_line_comment
76   [FUNC_CALL]         (
76   [NONE]              pc
76   [FUNC_CALL]         )
76   [NONE]              &&
76   [NONE]              
77   [NONE]              cpd
77   [NONE]              .
77   [NONE]              settings
77   [NONE]              [
77   [NONE]              UO_indent_relative_single_line_comments
77   [NONE]              ]
77   [NONE]              .
77   [NONE]              b
77   [NONE]              )
77   [NONE]              ?
77   [NONE]              
78   [NONE]              ALMODE_KEEP_REL
78   [NONE]              :
78   [NONE]              ALMODE_KEEP_ABS
78   [NONE]              ;
78   [NONE]              
80   [COMMENT_WHOLE]     /* Indentation is an 8 character tab.  Second level indents are four spaces.␤	 * If you have to wrap a long statement, put the operator at the end of the␤	 * line.␤	 */
83   [NONE]              
85   [NONE]              while
85   [WHILE]             (
85   [NONE]              cnt
85   [NONE]              <
85   [NONE]              20
85   [NONE]              &&
85   [NONE]              this_variable_name_is_too_long
85   [NONE]              &&
85   [NONE]              
86   [NONE]              ep
86   [NONE]              !=
86   [NONE]              NULL
86   [WHILE]             )
86   [NONE]              
86   [WHILE]             {
86   [NONE]              
87   [NONE]              zappy
87   [NONE]              =
87   [NONE]              a
87   [NONE]              +
87   [NONE]              really
87   [NONE]              +
87   [NONE]              long
87   [NONE]              +
87   [NONE]              statement
87   [NONE]              +
87   [NONE]              that
87   [NONE]              +
87   [NONE]              needs
88   [NONE]              +
87   [NONE]              
88   [NONE]              two
88   [NONE]              +
88   [NONE]              lines
88   [NONE]              +
88   [NONE]              gets
88   [NONE]              +
88   [NONE]              indented
88   [NONE]              +
88   [NONE]              four
88   [NONE]              +
88   [NONE]              spaces
88   [NONE]              +
88   [NONE]              
89   [NONE]              on
89   [NONE]              +
89   [NONE]              the
89   [NONE]              +
89   [NONE]              second
89   [NONE]              +
89   [NONE]              and
89   [NONE]              +
89   [NONE]              subsequent
89   [NONE]              +
89   [NONE]              lines
89   [NONE]              ;
89   [NONE]              
89   [WHILE]             }
89   [NONE]              
91   [COMMENT_WHOLE]     // Do not add whitespace at the end of a line, and only use tabs followed by
91   [NONE]              
92   [COMMENT_WHOLE]     // spaces to form the indentation.  Do not use more spaces than a tab will
92   [NONE]              
93   [COMMENT_WHOLE]     // produce and do not use spaces in front of tabs.
93   [NONE]              
94   [COMMENT_WHOLE]     //
94   [NONE]              
95   [COMMENT_WHOLE]     // Closing and opening braces go on the same line as the else.  Braces that
95   [NONE]              
96   [COMMENT_WHOLE]     // are not necessary may be left out.
96   [NONE]              
98   [NONE]              if
98   [IF]                (
98   [NONE]              test
98   [IF]                )
98   [IF]                {
98   [NONE]              
99   [NONE]              stmt
99   [NONE]              ;
99   [NONE]              
99   [IF]                }
100  [NONE]              else
100  [NONE]              if
100  [ELSEIF]            (
100  [NONE]              bar
100  [ELSEIF]            )
100  [ELSEIF]            {
100  [NONE]              
101  [NONE]              stmt
101  [NONE]              ;
101  [NONE]              
102  [NONE]              stmt
102  [NONE]              ;
102  [NONE]              
103  [ELSEIF]            }
103  [NONE]              else
103  [ELSE]              {
103  [NONE]              
104  [NONE]              stmt
104  [NONE]              ;
104  [NONE]              
104  [ELSE]              }
104  [NONE]              
106  [COMMENT_WHOLE]     // No spaces after function names.  Commas have a space after them.  No spa-
106  [NONE]              
107  [COMMENT_WHOLE]     // ces after `(' or `[' or preceding `]' or `)' characters.
107  [NONE]              
109  [NONE]              error
109  [NONE]              =
109  [NONE]              function
109  [FUNC_CALL]         (
109  [NONE]              a1
109  [NONE]              ,
109  [NONE]              a2
109  [FUNC_CALL]         )
109  [NONE]              ;
109  [NONE]              
110  [NONE]              if
110  [IF]                (
110  [NONE]              error
110  [NONE]              !=
110  [NONE]              0
110  [IF]                )
110  [IF]                {
110  [NONE]              
111  [NONE]              exit
111  [FUNC_CALL]         (
111  [NONE]              error
111  [FUNC_CALL]         )
111  [NONE]              ;
111  [NONE]              
111  [IF]                }
111  [NONE]              
113  [COMMENT_WHOLE]     // Unary operators do not require spaces, binary operators do.  Do not use
113  [NONE]              
114  [COMMENT_WHOLE]     // parentheses unless they are required for precedence or unless the state-
114  [NONE]              
115  [COMMENT_WHOLE]     // ment is confusing without them.  Remember that other people may confuse
115  [NONE]              
116  [COMMENT_WHOLE]     // easier than you.  Do YOU understand the following?
116  [NONE]              
118  [NONE]              a
118  [NONE]              =
118  [NONE]              b
118  [NONE]              ->
118  [NONE]              c
118  [NONE]              [
118  [NONE]              0
118  [NONE]              ]
118  [NONE]              +
118  [NONE]              ~
118  [NONE]              d
118  [NONE]              ==
118  [NONE]              (
118  [NONE]              e
118  [NONE]              ||
118  [NONE]              f
118  [NONE]              )
118  [NONE]              ||
118  [NONE]              g
118  [NONE]              &&
118  [NONE]              h
118  [NONE]              ?
118  [NONE]              i
118  [NONE]              :
118  [NONE]              j
118  [NONE]              >>
118  [NONE]              1
118  [NONE]              ;
118  [NONE]              
119  [NONE]              k
119  [NONE]              =
119  [NONE]              !
119  [NONE]              (
119  [NONE]              l
119  [NONE]              &
119  [NONE]              FLAGS
119  [NONE]              )
119  [NONE]              ;
119  [NONE]              
122  [COMMENT_WHOLE]     // Exits should be 0 on success, or 1 on failure.
122  [NONE]              
124  [NONE]              exit
124  [FUNC_CALL]         (
124  [NONE]              0
124  [FUNC_CALL]         )
124  [NONE]              ;
124  [COMMENT_END]       /*␤			    * Avoid obvious comments such as␤			    * "Exit 0 on success."␤                            */
127  [NONE]              
128  [FUNC_DEF]          }
128  [NONE]              
130  [FUNC_PROTO]        static
130  [FUNC_PROTO]        char
130  [FUNC_PROTO]        *
130  [NONE]              
131  [NONE]              function
131  [FUNC_PROTO]        (
131  [NONE]              a1
131  [NONE]              ,
131  [NONE]              a2
131  [NONE]              ,
131  [NONE]              fl
131  [NONE]              ,
131  [NONE]              a4
131  [FUNC_PROTO]        )
131  [NONE]              
132  [NONE]              int
132  [NONE]              a1
132  [NONE]              ,
132  [NONE]              a2
132  [FUNC_PROTO]        ;
132  [COMMENT_END]       /* Declare ints, too, don't default them. */
132  [NONE]              
133  [NONE]              float
133  [NONE]              fl
133  [NONE]              ;
133  [COMMENT_END]       /* Beware double vs. float prototype differences. */
133  [NONE]              
134  [NONE]              int
134  [NONE]              a4
134  [NONE]              ;
134  [COMMENT_END]       /* List in order declared. */
134  [NONE]              
135  [NONE]              {
135  [NONE]              
136  [NONE]              }
136  [NONE]              