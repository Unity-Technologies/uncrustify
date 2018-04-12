Line [Parent]            Text
1    [COMMENT_WHOLE]     // First comment
1    [NONE]              
2    [COMMENT_WHOLE]     // Second comment
2    [NONE]              
4    [COMMENT_WHOLE]     // First comment
4    [NONE]              
5    [COMMENT_WHOLE]     // Second comment
5    [NONE]              
7    [COMMENT_WHOLE]     // Issue #1134
7    [NONE]              
8    [NONE]              class
8    [CLASS]             MyClass
8    [NONE]              :
8    [NONE]              public
8    [NONE]              BaseClass
8    [NONE]              
9    [CLASS]             {
9    [NONE]              
10   [COMMENT_WHOLE]     //@{ BaseClass interface
10   [NONE]              
11   [PP_IF]             #
11   [NONE]              if
11   [NONE]              VERY_LONG_AND_COMPLICATED_DEFINE
11   [NONE]              
12   [FUNC_PROTO]        void
12   [NONE]              foo
12   [FUNC_PROTO]        (
12   [FUNC_PROTO]        )
12   [FUNC_PROTO]        ;
12   [NONE]              
13   [PP_ENDIF]          #
13   [NONE]              endif
13   [COMMENT_END]       // VERY_LONG_AND_COMPLICATED_DEFINE
13   [NONE]              
14   [COMMENT_WHOLE]     //@}
14   [NONE]              
15   [CLASS]             }
15   [CLASS]             ;
15   [NONE]              
17   [COMMENT_WHOLE]     // Issue #1287
17   [NONE]              
18   [FUNC_DEF]          void
18   [NONE]              foo
18   [FUNC_DEF]          (
18   [FUNC_DEF]          )
18   [NONE]              
19   [FUNC_DEF]          {
19   [NONE]              
20   [PP_IF]             #
20   [NONE]              if
20   [NONE]              defined
20   [NONE]              (
20   [NONE]              SUPPORT_FEATURE
20   [NONE]              )
20   [NONE]              
21   [NONE]              bar
21   [FUNC_CALL]         (
21   [FUNC_CALL]         )
21   [NONE]              ;
21   [NONE]              
22   [PP_ENDIF]          #
22   [NONE]              endif
22   [COMMENT_END]       // SUPPORT_FEATURE
22   [NONE]              
23   [COMMENT_WHOLE]     // Handle error
23   [NONE]              
24   [NONE]              if
24   [IF]                (
24   [NONE]              error
24   [NONE]              !=
24   [NONE]              0
24   [IF]                )
24   [NONE]              
25   [IF]                {
25   [NONE]              
26   [IF]                }
26   [NONE]              
28   [PP_IF]             #
28   [NONE]              if
28   [NONE]              defined
28   [NONE]              (
28   [NONE]              SUPPORT_FEATURE
28   [NONE]              )
28   [NONE]              
29   [NONE]              bar
29   [FUNC_CALL]         (
29   [FUNC_CALL]         )
29   [NONE]              ;
29   [NONE]              
30   [PP_ENDIF]          #
30   [NONE]              endif
30   [COMMENT_END]       // SUPPORT_FEATURE
30   [NONE]              
31   [COMMENT_WHOLE]     // Handle error
31   [NONE]              
32   [COMMENT_WHOLE]     // Handle error
32   [NONE]              
33   [NONE]              if
33   [IF]                (
33   [NONE]              error
33   [NONE]              !=
33   [NONE]              0
33   [IF]                )
33   [NONE]              
34   [IF]                {
34   [NONE]              
35   [IF]                }
35   [NONE]              
37   [PP_IF]             #
37   [NONE]              if
37   [NONE]              defined
37   [NONE]              (
37   [NONE]              SUPPORT_FEATURE
37   [NONE]              )
37   [NONE]              
38   [NONE]              bar
38   [FUNC_CALL]         (
38   [FUNC_CALL]         )
38   [NONE]              ;
38   [NONE]              
39   [PP_ENDIF]          #
39   [NONE]              endif
39   [COMMENT_END]       // SUPPORT_FEATURE
39   [NONE]              
40   [COMMENT_WHOLE]     // SUPPORT_FEATURE
40   [NONE]              
41   [COMMENT_WHOLE]     // Handle error
41   [NONE]              
42   [COMMENT_WHOLE]     // Handle error
42   [NONE]              
43   [NONE]              if
43   [IF]                (
43   [NONE]              error
43   [NONE]              !=
43   [NONE]              0
43   [IF]                )
43   [NONE]              
44   [IF]                {
44   [NONE]              
45   [IF]                }
45   [NONE]              
47   [PP_IF]             #
47   [NONE]              if
47   [NONE]              defined
47   [NONE]              (
47   [NONE]              SUPPORT_FEATURE
47   [NONE]              )
47   [NONE]              
48   [NONE]              bar
48   [FUNC_CALL]         (
48   [FUNC_CALL]         )
48   [NONE]              ;
48   [NONE]              
49   [PP_ENDIF]          #
49   [NONE]              endif
49   [COMMENT_END]       // SUPPORT_FEATURE
49   [NONE]              
50   [COMMENT_WHOLE]     // SUPPORT_FEATURE
50   [NONE]              
51   [COMMENT_WHOLE]     // Handle error
51   [NONE]              
52   [COMMENT_WHOLE]     // Handle error
52   [NONE]              
53   [NONE]              if
53   [IF]                (
53   [NONE]              error
53   [NONE]              !=
53   [NONE]              0
53   [IF]                )
53   [NONE]              
54   [IF]                {
54   [NONE]              
55   [IF]                }
55   [NONE]              
57   [PP_IF]             #
57   [NONE]              if
57   [NONE]              defined
57   [NONE]              (
57   [NONE]              SUPPORT_FEATURE
57   [NONE]              )
57   [NONE]              
58   [NONE]              bar
58   [FUNC_CALL]         (
58   [FUNC_CALL]         )
58   [NONE]              ;
58   [NONE]              
59   [PP_ENDIF]          #
59   [NONE]              endif
59   [COMMENT_END]       /* SUPPORT_FEATURE␤            SUPPORT_FEATURE */
60   [NONE]              
61   [COMMENT_WHOLE]     // Handle error
61   [NONE]              
62   [COMMENT_WHOLE]     // Handle error
62   [NONE]              
63   [NONE]              if
63   [IF]                (
63   [NONE]              error
63   [NONE]              !=
63   [NONE]              0
63   [IF]                )
63   [NONE]              
64   [IF]                {
64   [NONE]              
65   [IF]                }
65   [NONE]              
66   [FUNC_DEF]          }
66   [NONE]              
68   [COMMENT_WHOLE]     // ----- Some namespace scope --------------------------------------------------
68   [NONE]              
69   [COMMENT_WHOLE]     // ----- FooNamespace scope ----------------------------------------------------
69   [NONE]              
70   [NONE]              namespace
70   [NAMESPACE]         FooNamespace
70   [NONE]              
71   [NAMESPACE]         {
71   [NONE]              
72   [COMMENT_WHOLE]     // ----- Some classes scope ----------------------------------------------------
72   [NONE]              
73   [COMMENT_WHOLE]     // ----- FooClass scope --------------------------------------------------------
73   [NONE]              
74   [NONE]              class
74   [CLASS]             FooClass
74   [NONE]              
75   [CLASS]             {
75   [NONE]              
76   [NONE]              using
76   [NONE]              FooUsing
76   [NONE]              =
76   [NONE]              FooTemplate
76   [TEMPLATE]          <
76   [NONE]              
77   [NONE]              param1
77   [NONE]              ,
77   [NONE]              
78   [NONE]              param2
78   [NONE]              
79   [TEMPLATE]          >
79   [NONE]              ;
79   [COMMENT_END]       // FooTemplate
79   [NONE]              
80   [COMMENT_WHOLE]     // Foo description
80   [NONE]              
81   [FUNC_DEF]          void
81   [NONE]              foo
81   [FUNC_DEF]          (
81   [FUNC_DEF]          )
81   [NONE]              
82   [FUNC_DEF]          {
82   [NONE]              
83   [NONE]              if
83   [IF]                (
83   [NONE]              a
83   [NONE]              ==
83   [NONE]              b
83   [IF]                )
83   [NONE]              
84   [IF]                {
84   [NONE]              
85   [COMMENT_WHOLE]     // Col1 comment
85   [NONE]              
86   [COMMENT_WHOLE]     // Col1 comment
86   [NONE]              
87   [COMMENT_WHOLE]     // Col1 comment
87   [NONE]              
88   [COMMENT_WHOLE]     // Baz description
88   [NONE]              
89   [NONE]              baz
89   [FUNC_CALL]         (
89   [FUNC_CALL]         )
89   [NONE]              ;
89   [COMMENT_END]       // Baz trailing comment begin
89   [NONE]              
90   [COMMENT_WHOLE]     // Baz trailing comment ...
90   [NONE]              
91   [COMMENT_WHOLE]     // Baz trailing comment end
91   [NONE]              
92   [IF]                }
92   [COMMENT_END]       // if (a == b)
92   [NONE]              
93   [COMMENT_WHOLE]     // Bar description begin
93   [NONE]              
94   [COMMENT_WHOLE]     // Bar description ...
94   [NONE]              
95   [COMMENT_WHOLE]     // Bar description end
95   [NONE]              
96   [NONE]              bar
96   [FUNC_CALL]         (
96   [NONE]              
97   [NONE]              a
97   [NONE]              ,
97   [NONE]              
98   [NONE]              b
98   [NONE]              
99   [FUNC_CALL]         )
99   [NONE]              ;
99   [COMMENT_END]       // bar trailing comment begin
99   [NONE]              
100  [COMMENT_WHOLE]     // bar trailing comment ...
100  [NONE]              
101  [COMMENT_WHOLE]     // Baz trailing comment end
101  [NONE]              
102  [COMMENT_WHOLE]     /*! Baz description begin␤           *Baz description ...␤            * Baz description end */
104  [NONE]              
105  [NONE]              baz
105  [FUNC_CALL]         (
105  [NONE]              a
105  [NONE]              ,
105  [NONE]              
106  [NONE]              b
106  [FUNC_CALL]         )
106  [NONE]              ;
106  [COMMENT_END]       /* Baz trailing comment begin␤               Baz trailing comment ...␤             Baz trailing comment end */
108  [NONE]              
109  [COMMENT_WHOLE]     // Bar description
109  [NONE]              
110  [NONE]              bar
110  [FUNC_CALL]         (
110  [FUNC_CALL]         )
110  [NONE]              ;
110  [COMMENT_END]       // bar trailing comment begin
110  [NONE]              
111  [COMMENT_WHOLE]     // bar trailing comment ...
111  [NONE]              
112  [COMMENT_WHOLE]     // Baz trailing comment end
112  [NONE]              
114  [COMMENT_WHOLE]     // Baz description
114  [NONE]              
115  [NONE]              baz
115  [FUNC_CALL]         (
115  [FUNC_CALL]         )
115  [NONE]              ;
115  [NONE]              
116  [FUNC_DEF]          }
116  [NONE]              
117  [FUNC_PROTO]        void
117  [NONE]              bar
117  [FUNC_PROTO]        (
117  [FUNC_PROTO]        )
117  [FUNC_PROTO]        ;
117  [NONE]              
118  [COMMENT_WHOLE]     // Many methods
118  [NONE]              
119  [FUNC_PROTO]        void
119  [NONE]              baz
119  [FUNC_PROTO]        (
119  [FUNC_PROTO]        )
119  [FUNC_PROTO]        ;
119  [NONE]              
120  [CLASS]             }
120  [CLASS]             ;
120  [COMMENT_END]       // FooClass
120  [NONE]              
121  [COMMENT_WHOLE]     // ----- FooClass scope --------------------------------------------------------
121  [NONE]              
123  [COMMENT_WHOLE]     // Many classes
123  [NONE]              
124  [COMMENT_WHOLE]     // Many classes
124  [NONE]              
125  [COMMENT_WHOLE]     // Many classes
125  [NONE]              
127  [NONE]              class
127  [CLASS]             BazClass
127  [NONE]              
128  [CLASS]             {
128  [NONE]              
129  [FUNC_PROTO]        void
129  [NONE]              foo
129  [FUNC_PROTO]        (
129  [FUNC_PROTO]        )
129  [FUNC_PROTO]        ;
129  [NONE]              
131  [COMMENT_WHOLE]     // Many methods
131  [NONE]              
132  [COMMENT_WHOLE]     // Many methods
132  [NONE]              
133  [COMMENT_WHOLE]     // Many methods
133  [NONE]              
135  [COMMENT_WHOLE]     // Overrides
135  [NONE]              
136  [COMMENT_WHOLE]     // Overrides
136  [NONE]              
137  [COMMENT_WHOLE]     //Overrides
137  [NONE]              
138  [NONE]              protected
138  [NONE]              :
138  [NONE]              
139  [COMMENT_WHOLE]     // Bar description
139  [NONE]              
140  [FUNC_PROTO]        void
140  [NONE]              baz
140  [FUNC_PROTO]        (
140  [FUNC_PROTO]        )
140  [FUNC_PROTO]        ;
140  [NONE]              
141  [COMMENT_WHOLE]     //Overrides
141  [NONE]              
142  [CLASS]             }
142  [CLASS]             ;
142  [COMMENT_END]       // BazClass trailing comment begin
142  [NONE]              
143  [COMMENT_WHOLE]     // BazClass trailing comment ...
143  [NONE]              
144  [COMMENT_WHOLE]     // BazClass trailing comment end
144  [NONE]              
145  [COMMENT_WHOLE]     // ----- Some classes scope ----------------------------------------------------
145  [NONE]              
146  [NAMESPACE]         }
146  [COMMENT_END]       // FooNamespace trailing comment begin
146  [NONE]              
147  [COMMENT_WHOLE]     // FooNamespace trailing comment end
147  [NONE]              
148  [COMMENT_WHOLE]     // ----- FooNamespace scope ----------------------------------------------------
148  [NONE]              
149  [COMMENT_WHOLE]     // BarNamespace description
149  [NONE]              
150  [NONE]              namespace
150  [NAMESPACE]         BarNamespace
150  [NONE]              
151  [NAMESPACE]         {
151  [NONE]              
152  [NAMESPACE]         }
152  [COMMENT_END]       // namespace BarNamespace
152  [NONE]              
153  [COMMENT_WHOLE]     // ----- Some namespace scope --------------------------------------------------
153  [NONE]              