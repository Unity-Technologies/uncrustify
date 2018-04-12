Line [Parent]            Text
1    [COMMENT_WHOLE]     // We want simple 4-space indentation for each nesting "level".
1    [NONE]              
3    [COMMENT_WHOLE]     // cannot find a way to tell uncrustify to indent the line with parenthesis
3    [NONE]              
4    [FUNC_DEF]          int
4    [NONE]              case2
4    [FUNC_DEF]          (
4    [FUNC_DEF]          )
4    [FUNC_DEF]          {
4    [NONE]              
6    [NONE]              if
6    [IF]                (
6    [NONE]              condition
6    [IF]                )
6    [IF]                {
6    [NONE]              
7    [COMMENT_WHOLE]     // some code here
7    [NONE]              
8    [IF]                }
8    [NONE]              
10   [NONE]              std
10   [NONE]              ::
10   [NONE]              out
10   [NONE]              <<
10   [NONE]              
11   [NONE]              "hello "
11   [NONE]              <<
11   [NONE]              "world "
11   [NONE]              <<
11   [NONE]              
12   [NONE]              (
12   [NONE]              who
12   [NONE]              ?
12   [NONE]              "and "
12   [NONE]              :
12   [NONE]              "or "
12   [NONE]              )
12   [NONE]              <<
12   [NONE]              
13   [NONE]              "all "
13   [NONE]              <<
13   [NONE]              
14   [NONE]              "others"
14   [NONE]              <<
14   [NONE]              ";"
14   [NONE]              <<
14   [NONE]              std
14   [NONE]              ::
14   [NONE]              endl
14   [NONE]              ;
14   [NONE]              
16   [COMMENT_WHOLE]     // and
16   [NONE]              
18   [NONE]              if
18   [IF]                (
18   [NONE]              condition
18   [IF]                )
18   [IF]                {
18   [NONE]              
19   [COMMENT_WHOLE]     // some code here
19   [NONE]              
20   [IF]                }
20   [NONE]              
22   [NONE]              std
22   [NONE]              ::
22   [NONE]              out
22   [NONE]              <<
22   [NONE]              
23   [NONE]              "hello "
23   [NONE]              <<
23   [NONE]              "world "
23   [NONE]              <<
23   [NONE]              
24   [NONE]              (
24   [NONE]              "and "
24   [NONE]              )
24   [NONE]              <<
24   [NONE]              
25   [NONE]              "all "
25   [NONE]              <<
25   [NONE]              
26   [NONE]              "others"
26   [NONE]              <<
26   [NONE]              ";"
26   [NONE]              <<
26   [NONE]              std
26   [NONE]              ::
26   [NONE]              endl
26   [NONE]              ;
26   [NONE]              
28   [NONE]              if
28   [IF]                (
28   [NONE]              cond
28   [IF]                )
28   [IF]                
28   [NONE]              
29   [NONE]              std
29   [NONE]              ::
29   [NONE]              out
29   [NONE]              <<
29   [NONE]              "hi"
29   [NONE]              ;
29   [IF]                
29   [NONE]              
31   [NONE]              if
31   [IF]                (
31   [NONE]              cond
31   [IF]                )
31   [IF]                
31   [NONE]              
32   [NONE]              std
32   [NONE]              ::
32   [NONE]              out
32   [NONE]              
33   [NONE]              <<
33   [NONE]              "hi"
33   [NONE]              
34   [NONE]              <<
34   [NONE]              "and"
34   [NONE]              
35   [NONE]              <<
35   [NONE]              "more"
35   [NONE]              
36   [NONE]              ;
36   [IF]                
36   [NONE]              
38   [NONE]              switch
38   [SWITCH]            (
38   [NONE]              var
38   [SWITCH]            )
38   [SWITCH]            {
38   [NONE]              
39   [NONE]              case
39   [NONE]              0
39   [NONE]              :
39   [NONE]              
40   [NONE]              log
40   [FUNC_CALL]         (
40   [FUNC_CALL]         )
40   [NONE]              <<
40   [NONE]              5
40   [NONE]              
41   [NONE]              <<
41   [NONE]              5
41   [NONE]              ;
41   [NONE]              
42   [NONE]              break
42   [NONE]              ;
42   [NONE]              
43   [SWITCH]            }
43   [NONE]              
45   [PP_IF]             #
45   [NONE]              if
45   [NONE]              0
45   [NONE]              
46   [NONE]              out
46   [NONE]              
47   [NONE]              <<
47   [NONE]              5
47   [NONE]              ;
47   [NONE]              
48   [PP_ENDIF]          #
48   [NONE]              endif
48   [NONE]              
50   [NONE]              return
50   [NONE]              log
50   [NONE]              
51   [NONE]              >>
51   [NONE]              var
51   [NONE]              
52   [NONE]              >>
52   [NONE]              second
52   [NONE]              
53   [NONE]              ;
53   [NONE]              
54   [FUNC_DEF]          }
54   [NONE]              
57   [COMMENT_WHOLE]     // uncrustify aligns (with the << on the first line) instead of indenting
57   [NONE]              
58   [FUNC_DEF]          void
58   [NONE]              case3
58   [FUNC_DEF]          (
58   [FUNC_DEF]          )
58   [NONE]              
59   [FUNC_DEF]          {
59   [NONE]              
61   [NONE]              if
61   [IF]                (
61   [NONE]              condition1
61   [IF]                )
61   [IF]                {
61   [NONE]              
63   [NONE]              if
63   [IF]                (
63   [NONE]              condition2
63   [IF]                )
63   [IF]                {
63   [NONE]              
65   [NONE]              std
65   [NONE]              ::
65   [NONE]              out
65   [NONE]              <<
65   [NONE]              "hello "
65   [NONE]              
66   [NONE]              <<
66   [NONE]              "world "
66   [NONE]              
67   [NONE]              <<
67   [NONE]              (
67   [NONE]              who
67   [NONE]              ?
67   [NONE]              "and "
67   [NONE]              :
67   [NONE]              "or "
67   [NONE]              )
67   [NONE]              
68   [NONE]              <<
68   [NONE]              "all "
68   [NONE]              
69   [NONE]              <<
69   [NONE]              "others"
69   [NONE]              <<
69   [NONE]              ";"
69   [NONE]              <<
69   [NONE]              std
69   [NONE]              ::
69   [NONE]              endl
69   [NONE]              ;
69   [NONE]              
71   [IF]                }
71   [NONE]              
72   [IF]                }
72   [NONE]              
74   [COMMENT_WHOLE]     // this often works better, but has problems with parentheses:
74   [NONE]              
76   [NONE]              if
76   [IF]                (
76   [NONE]              condition1
76   [IF]                )
76   [IF]                {
76   [NONE]              
77   [NONE]              if
77   [IF]                (
77   [NONE]              condition2
77   [IF]                )
77   [IF]                {
77   [NONE]              
78   [NONE]              std
78   [NONE]              ::
78   [NONE]              out
78   [NONE]              <<
78   [NONE]              "hello "
78   [NONE]              <<
78   [NONE]              
79   [NONE]              "world "
79   [NONE]              <<
79   [NONE]              
80   [NONE]              (
80   [NONE]              who
80   [NONE]              ?
80   [NONE]              "and "
80   [NONE]              :
80   [NONE]              "or "
80   [NONE]              )
80   [NONE]              <<
80   [NONE]              
81   [NONE]              "all "
81   [NONE]              <<
81   [NONE]              
82   [NONE]              "others"
82   [NONE]              <<
82   [NONE]              ";"
82   [NONE]              <<
82   [NONE]              std
82   [NONE]              ::
82   [NONE]              endl
82   [NONE]              ;
82   [NONE]              
83   [IF]                }
83   [NONE]              
84   [IF]                }
84   [NONE]              
85   [FUNC_DEF]          }
85   [NONE]              
87   [COMMENT_WHOLE]     // uncrustify does not indent >> at all!
87   [NONE]              
88   [FUNC_DEF]          void
88   [NONE]              case4
88   [FUNC_DEF]          (
88   [FUNC_DEF]          )
88   [NONE]              
89   [FUNC_DEF]          {
89   [NONE]              
90   [NONE]              if
90   [IF]                (
90   [NONE]              condition
90   [IF]                )
90   [IF]                {
90   [NONE]              
91   [COMMENT_WHOLE]     // some code here
91   [NONE]              
92   [IF]                }
92   [NONE]              
94   [NONE]              std
94   [NONE]              ::
94   [NONE]              in
94   [NONE]              >>
94   [NONE]              a
94   [NONE]              
95   [NONE]              >>
95   [NONE]              b
95   [NONE]              
96   [NONE]              >>
96   [NONE]              (
96   [NONE]              who
96   [NONE]              ?
96   [NONE]              c
96   [NONE]              :
96   [NONE]              d
96   [NONE]              )
96   [NONE]              >>
96   [NONE]              
97   [NONE]              >>
97   [NONE]              e
97   [NONE]              ;
97   [NONE]              
99   [COMMENT_WHOLE]     // and
99   [NONE]              
101  [NONE]              if
101  [IF]                (
101  [NONE]              condition1
101  [IF]                )
101  [IF]                {
101  [NONE]              
103  [NONE]              if
103  [IF]                (
103  [NONE]              condition2
103  [IF]                )
103  [IF]                {
103  [NONE]              
104  [NONE]              std
104  [NONE]              ::
104  [NONE]              in
104  [NONE]              >>
104  [NONE]              a
104  [NONE]              >>
104  [NONE]              
105  [NONE]              b
105  [NONE]              >>
105  [NONE]              
106  [NONE]              (
106  [NONE]              who
106  [NONE]              ?
106  [NONE]              c
106  [NONE]              :
106  [NONE]              d
106  [NONE]              )
106  [NONE]              >>
106  [NONE]              
107  [NONE]              e
107  [NONE]              ;
107  [NONE]              
108  [IF]                }
108  [NONE]              
109  [IF]                }
109  [NONE]              
110  [FUNC_DEF]          }
110  [NONE]              
112  [FUNC_DEF]          void
112  [NONE]              foo
112  [FUNC_DEF]          (
112  [FUNC_DEF]          )
112  [FUNC_DEF]          {
112  [NONE]              
114  [NONE]              if
114  [IF]                (
114  [NONE]              head
114  [FUNC_CALL]         (
114  [FUNC_CALL]         )
114  [IF]                )
114  [IF]                
114  [NONE]              
115  [NONE]              os
115  [NONE]              <<
115  [NONE]              "HEAD,"
115  [NONE]              ;
115  [IF]                
115  [NONE]              
116  [NONE]              else
116  [NONE]              
117  [NONE]              if
117  [ELSEIF]            (
117  [NONE]              tail
117  [FUNC_CALL]         (
117  [FUNC_CALL]         )
117  [ELSEIF]            )
117  [ELSEIF]            
117  [NONE]              
118  [NONE]              os
118  [NONE]              <<
118  [NONE]              "TAIL,"
118  [NONE]              ;
118  [ELSEIF]            
118  [NONE]              
120  [NONE]              if
120  [IF]                (
120  [NONE]              a
120  [NONE]              >=
120  [NONE]              0
120  [NONE]              &&
120  [NONE]              
121  [NONE]              b
121  [NONE]              <=
121  [NONE]              0
121  [IF]                )
121  [IF]                
121  [NONE]              
122  [NONE]              cerr
122  [NONE]              <<
122  [NONE]              "it is"
122  [NONE]              ;
122  [IF]                
122  [NONE]              
123  [FUNC_DEF]          }
123  [NONE]              
125  [NONE]              int
125  [NONE]              list
125  [NONE]              []
125  [NONE]              =
125  [BRACED_INIT_LIST]    {
125  [NONE]              
126  [NONE]              1
126  [NONE]              ,
126  [NONE]              
127  [NONE]              2
127  [NONE]              ,
127  [NONE]              
128  [NONE]              1
128  [NONE]              <<
128  [NONE]              5
128  [NONE]              ,
128  [NONE]              
129  [NONE]              1
129  [NONE]              <<
129  [NONE]              6
129  [NONE]              
130  [BRACED_INIT_LIST]    }
130  [NONE]              ;
130  [NONE]              
132  [FUNC_DEF]          void
132  [NONE]              check
132  [FUNC_DEF]          (
132  [FUNC_DEF]          )
132  [FUNC_DEF]          {
132  [NONE]              
133  [NONE]              ostream
133  [NONE]              &
133  [NONE]              os
133  [NONE]              =
133  [NONE]              Comment
133  [FUNC_CALL]         (
133  [NONE]              1
133  [FUNC_CALL]         )
133  [NONE]              <<
133  [NONE]              "error: "
133  [NONE]              <<
133  [NONE]              workerName
133  [NONE]              <<
133  [NONE]              
134  [NONE]              " terminated by signal "
134  [NONE]              <<
134  [NONE]              WTERMSIG
134  [FUNC_CALL]         (
134  [NONE]              exitStatus
134  [FUNC_CALL]         )
134  [NONE]              ;
134  [NONE]              
136  [NONE]              return
136  [NONE]              theAddr
136  [NONE]              .
136  [NONE]              addrN
136  [FUNC_CALL]         (
136  [FUNC_CALL]         )
136  [NONE]              .
136  [NONE]              family
136  [FUNC_CALL]         (
136  [FUNC_CALL]         )
136  [NONE]              ==
136  [NONE]              AF_INET6
136  [NONE]              ?
136  [NONE]              
137  [NONE]              (
137  [NONE]              theAddr
137  [NONE]              .
137  [NONE]              octet
137  [FUNC_CALL]         (
137  [NONE]              idx
137  [NONE]              *
137  [NONE]              2
137  [FUNC_CALL]         )
137  [NONE]              <<
137  [NONE]              8
137  [NONE]              )
137  [NONE]              +
137  [NONE]              theAddr
137  [NONE]              .
137  [NONE]              octet
137  [FUNC_CALL]         (
137  [NONE]              idx
137  [NONE]              *
137  [NONE]              2
137  [NONE]              +
137  [NONE]              1
137  [FUNC_CALL]         )
137  [NONE]              :
137  [NONE]              
138  [NONE]              theAddr
138  [NONE]              .
138  [NONE]              octet
138  [FUNC_CALL]         (
138  [NONE]              idx
138  [FUNC_CALL]         )
138  [NONE]              ;
138  [NONE]              
139  [FUNC_DEF]          }
139  [NONE]              