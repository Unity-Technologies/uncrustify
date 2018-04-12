Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              include
1    [NONE]              <list>
1    [NONE]              
2    [PP_INCLUDE]        #
2    [NONE]              include
2    [NONE]              <map>
2    [NONE]              
3    [PP_INCLUDE]        #
3    [NONE]              include
3    [NONE]              <vector>
3    [NONE]              
5    [PP_DEFINE]         #
5    [NONE]              define
5    [NONE]              MACRO
5    [MACRO_FUNC]        (
5    [NONE]              T
5    [MACRO_FUNC]        )
5    [NONE]              f
5    [TEMPLATE]          <
5    [NONE]              T
5    [TEMPLATE]          >
5    [FUNC_CALL]         (
5    [FUNC_CALL]         )
5    [NONE]              
7    [NONE]              class
7    [CLASS]             MyClass
7    [NONE]              
8    [CLASS]             {
8    [NONE]              
9    [NONE]              public
9    [NONE]              :
9    [NONE]              
10   [NONE]              std
10   [NONE]              ::
10   [NONE]              map
10   [TEMPLATE]          <
10   [NONE]              int
10   [NONE]              ,
10   [NONE]              bool
10   [TEMPLATE]          >
10   [NONE]              someData
10   [NONE]              ;
10   [NONE]              
11   [NONE]              std
11   [NONE]              ::
11   [NONE]              map
11   [TEMPLATE]          <
11   [NONE]              int
11   [NONE]              ,
11   [NONE]              std
11   [NONE]              ::
11   [NONE]              list
11   [TEMPLATE]          <
11   [NONE]              bool
11   [TEMPLATE]          >
11   [TEMPLATE]          >
11   [NONE]              otherData
11   [NONE]              ;
11   [NONE]              
12   [CLASS]             }
12   [CLASS]             ;
12   [NONE]              
14   [FUNC_DEF]          void
14   [NONE]              foo
14   [FUNC_DEF]          (
14   [FUNC_DEF]          )
14   [NONE]              
15   [FUNC_DEF]          {
15   [NONE]              
16   [NONE]              List
16   [TEMPLATE]          <
16   [NONE]              byte
16   [TEMPLATE]          >
16   [NONE]              bob
16   [NONE]              =
16   [NONE]              new
16   [NONE]              List
16   [TEMPLATE]          <
16   [NONE]              byte
16   [TEMPLATE]          >
16   [FUNC_CALL]         (
16   [FUNC_CALL]         )
16   [NONE]              ;
16   [NONE]              
18   [FUNC_DEF]          }
18   [NONE]              
20   [NONE]              A
20   [TEMPLATE]          <
20   [NONE]              B
20   [TEMPLATE]          >
20   [NONE]              foo
20   [NONE]              ;
20   [NONE]              
21   [NONE]              A
21   [TEMPLATE]          <
21   [NONE]              B
21   [NONE]              ,
21   [NONE]              C
21   [TEMPLATE]          >
21   [NONE]              bar
21   [NONE]              ;
21   [NONE]              
22   [NONE]              A
22   [TEMPLATE]          <
22   [NONE]              B
22   [NONE]              *
22   [TEMPLATE]          >
22   [NONE]              baz
22   [NONE]              ;
22   [NONE]              
23   [NONE]              A
23   [TEMPLATE]          <
23   [NONE]              B
23   [TEMPLATE]          <
23   [NONE]              C
23   [TEMPLATE]          >
23   [TEMPLATE]          >
23   [NONE]              bay
23   [NONE]              ;
23   [NONE]              
25   [FUNC_DEF]          void
25   [NONE]              asd
25   [FUNC_DEF]          (
25   [NONE]              void
25   [FUNC_DEF]          )
25   [NONE]              
26   [FUNC_DEF]          {
26   [NONE]              
27   [NONE]              A
27   [TEMPLATE]          <
27   [NONE]              B
27   [TEMPLATE]          >
27   [NONE]              foo
27   [NONE]              ;
27   [NONE]              
28   [NONE]              A
28   [TEMPLATE]          <
28   [NONE]              B
28   [NONE]              ,
28   [NONE]              C
28   [TEMPLATE]          >
28   [NONE]              bar
28   [NONE]              ;
28   [NONE]              
29   [NONE]              A
29   [TEMPLATE]          <
29   [NONE]              B
29   [NONE]              *
29   [TEMPLATE]          >
29   [NONE]              baz
29   [NONE]              ;
29   [NONE]              
30   [NONE]              A
30   [TEMPLATE]          <
30   [NONE]              B
30   [TEMPLATE]          <
30   [NONE]              C
30   [TEMPLATE]          >
30   [TEMPLATE]          >
30   [NONE]              bay
30   [NONE]              ;
30   [NONE]              
31   [NONE]              if
31   [IF]                (
31   [NONE]              a
31   [NONE]              <
31   [NONE]              b
31   [NONE]              &&
31   [NONE]              b
31   [NONE]              >
31   [NONE]              c
31   [IF]                )
31   [NONE]              
32   [IF]                {
32   [NONE]              
33   [NONE]              a
33   [NONE]              =
33   [NONE]              b
33   [NONE]              <
33   [NONE]              c
33   [NONE]              >
33   [NONE]              0
33   [NONE]              ;
33   [NONE]              
34   [IF]                }
34   [NONE]              
35   [NONE]              if
35   [IF]                (
35   [NONE]              a
35   [TEMPLATE]          <
35   [NONE]              bar
35   [FUNC_CALL]         (
35   [FUNC_CALL]         )
35   [TEMPLATE]          >
35   [NONE]              c
35   [IF]                )
35   [NONE]              
36   [IF]                {
36   [NONE]              
37   [IF]                }
37   [NONE]              
38   [NONE]              a
38   [NONE]              <
38   [NONE]              up_lim
38   [FUNC_CALL]         (
38   [FUNC_CALL]         )
38   [NONE]              ?
38   [NONE]              do_hi
38   [FUNC_CALL]         (
38   [FUNC_CALL]         )
38   [NONE]              :
38   [NONE]              do_low
38   [NONE]              ;
38   [NONE]              
39   [NONE]              a
39   [NONE]              [
39   [NONE]              a
39   [TEMPLATE]          <
39   [NONE]              b
39   [TEMPLATE]          >
39   [NONE]              c
39   [NONE]              ]
39   [NONE]              =
39   [NONE]              d
39   [NONE]              ;
39   [NONE]              
40   [FUNC_DEF]          }
40   [NONE]              
42   [NONE]              template
42   [TEMPLATE]          <
42   [NONE]              typename
42   [NONE]              T
42   [TEMPLATE]          >
42   [TEMPLATE]          class
42   [CLASS]             MyClass
42   [NONE]              
43   [CLASS]             {
43   [NONE]              
45   [CLASS]             }
45   [NONE]              
47   [NONE]              template
47   [TEMPLATE]          <
47   [NONE]              typename
47   [NONE]              T
47   [TEMPLATE]          >
47   [NONE]              
48   [TEMPLATE]          class
48   [CLASS]             MyClass
48   [NONE]              
49   [CLASS]             {
49   [NONE]              
50   [CLASS]             }
50   [NONE]              
52   [NONE]              template
52   [TEMPLATE]          <
52   [NONE]              typename
52   [NONE]              A
52   [NONE]              ,
52   [NONE]              typename
52   [NONE]              B
52   [NONE]              ,
52   [NONE]              typename
52   [NONE]              C
52   [TEMPLATE]          >
52   [TEMPLATE]          class
52   [CLASS]             MyClass
52   [NONE]              :
52   [NONE]              myvar
52   [FUNC_CALL]         (
52   [NONE]              0
52   [FUNC_CALL]         )
52   [NONE]              ,
52   [NONE]              
53   [NONE]              myvar2
53   [FUNC_CALL]         (
53   [NONE]              0
53   [FUNC_CALL]         )
53   [NONE]              
54   [FUNC_CALL]         {
54   [NONE]              
56   [FUNC_CALL]         }
56   [NONE]              
58   [NONE]              template
58   [TEMPLATE]          <
58   [NONE]              typename
58   [NONE]              A
58   [NONE]              ,
58   [NONE]              typename
58   [NONE]              B
58   [NONE]              ,
58   [NONE]              typename
58   [NONE]              C
58   [TEMPLATE]          >
58   [TEMPLATE]          class
58   [CLASS]             MyClass
58   [NONE]              
59   [NONE]              :
59   [NONE]              myvar
59   [FUNC_CALL]         (
59   [NONE]              0
59   [FUNC_CALL]         )
59   [NONE]              ,
59   [NONE]              
60   [NONE]              myvar2
60   [FUNC_CALL]         (
60   [NONE]              0
60   [FUNC_CALL]         )
60   [NONE]              
61   [FUNC_CALL]         {
61   [NONE]              
63   [FUNC_CALL]         }
63   [NONE]              
66   [FUNC_DEF]          static
66   [FUNC_DEF]          int
66   [NONE]              max_value
66   [FUNC_DEF]          (
66   [FUNC_DEF]          )
66   [NONE]              
67   [FUNC_DEF]          {
67   [NONE]              
68   [NONE]              return
68   [RETURN]            (
68   [NONE]              (
68   [NONE]              std
68   [NONE]              ::
68   [NONE]              numeric_limits
68   [TEMPLATE]          <
68   [NONE]              int
68   [TEMPLATE]          >
68   [NONE]              ::
68   [NONE]              max
68   [NONE]              )
68   [FUNC_CALL]         (
68   [FUNC_CALL]         )
68   [RETURN]            )
68   [NONE]              ;
68   [NONE]              
69   [FUNC_DEF]          }
69   [NONE]              
71   [NONE]              template
71   [TEMPLATE]          <
71   [NONE]              class
71   [NONE]              Config_
71   [TEMPLATE]          >
71   [NONE]              
72   [NONE]              priority_queue
72   [TEMPLATE]          <
72   [NONE]              Config_
72   [TEMPLATE]          >
72   [NONE]              ::
72   [NONE]              ~
72   [DESTRUCTOR]        priority_queue
72   [FUNC_CLASS_DEF]    (
72   [FUNC_CLASS_DEF]    )
72   [NONE]              
72   [FUNC_CLASS_DEF]    {
72   [NONE]              
74   [FUNC_CLASS_DEF]    }
74   [NONE]              
76   [NONE]              template
76   [TEMPLATE]          <
76   [NONE]              class
76   [NONE]              T
76   [TEMPLATE]          >
76   [NONE]              
77   [FUNC_DEF]          T
77   [NONE]              test
77   [FUNC_DEF]          (
77   [NONE]              T
77   [NONE]              a
77   [FUNC_DEF]          )
77   [NONE]              
77   [FUNC_DEF]          {
77   [NONE]              
78   [NONE]              return
78   [RETURN]            (
78   [NONE]              a
78   [RETURN]            )
78   [NONE]              ;
78   [NONE]              
79   [FUNC_DEF]          }
79   [NONE]              
81   [FUNC_DEF]          int
81   [NONE]              main
81   [FUNC_DEF]          (
81   [FUNC_DEF]          )
81   [NONE]              
81   [FUNC_DEF]          {
81   [NONE]              
82   [NONE]              int
82   [NONE]              k
82   [NONE]              ,
82   [NONE]              j
82   [NONE]              ;
82   [NONE]              
83   [NONE]              h
83   [NONE]              g
83   [TEMPLATE]          <
83   [NONE]              int
83   [TEMPLATE]          >
83   [NONE]              ;
83   [NONE]              
84   [NONE]              k
84   [NONE]              =
84   [NONE]              test
84   [TEMPLATE]          <
84   [NONE]              int
84   [TEMPLATE]          >
84   [FUNC_CALL]         (
84   [NONE]              j
84   [FUNC_CALL]         )
84   [NONE]              ;
84   [NONE]              
85   [NONE]              return
85   [RETURN]            (
85   [NONE]              0
85   [RETURN]            )
85   [NONE]              ;
85   [NONE]              
86   [FUNC_DEF]          }
86   [NONE]              
88   [NONE]              template
88   [TEMPLATE]          <
88   [NONE]              typename
88   [NONE]              T
88   [NONE]              ,
88   [NONE]              template
88   [TEMPLATE]          <
88   [NONE]              typename
88   [NONE]              ,
88   [NONE]              unsigned
88   [NONE]              int
88   [NONE]              ,
88   [NONE]              unsigned
88   [NONE]              int
88   [TEMPLATE]          >
88   [NONE]              class
88   [NONE]              ConcreteStorageClass
88   [TEMPLATE]          >
88   [NONE]              
89   [TEMPLATE]          class
89   [CLASS]             RotationMatrix
89   [NONE]              
90   [NONE]              :
90   [NONE]              public
90   [NONE]              StaticBaseMatrix
90   [TEMPLATE]          <
90   [NONE]              T
90   [NONE]              ,
90   [NONE]              3
90   [NONE]              ,
90   [NONE]              3
90   [NONE]              ,
90   [NONE]              ConcreteStorageClass
90   [TEMPLATE]          >
90   [NONE]              
91   [CLASS]             {
91   [NONE]              
93   [NONE]              public
93   [NONE]              :
93   [NONE]              
95   [NONE]              RotationMatrix
95   [FUNC_CLASS_DEF]    (
95   [FUNC_CLASS_DEF]    )
95   [NONE]              
96   [NONE]              :
96   [NONE]              StaticBaseMatrix
96   [TEMPLATE]          <
96   [NONE]              T
96   [NONE]              ,
96   [NONE]              3
96   [NONE]              ,
96   [NONE]              3
96   [NONE]              ,
96   [NONE]              ConcreteStorageClass
96   [TEMPLATE]          >
96   [FUNC_CTOR_VAR]     (
96   [FUNC_CTOR_VAR]     )
96   [NONE]              
97   [FUNC_CLASS_DEF]    {
97   [NONE]              
98   [COMMENT_WHOLE]     // do some initialization
98   [NONE]              
99   [FUNC_CLASS_DEF]    }
99   [NONE]              
101  [FUNC_DEF]          void
101  [NONE]              assign
101  [FUNC_DEF]          (
101  [NONE]              const
101  [NONE]              OtherClass
101  [TEMPLATE]          <
101  [NONE]              T
101  [NONE]              ,
101  [NONE]              3
101  [NONE]              ,
101  [NONE]              3
101  [TEMPLATE]          >
101  [NONE]              &
101  [NONE]              other
101  [FUNC_DEF]          )
101  [NONE]              
102  [FUNC_DEF]          {
102  [NONE]              
103  [COMMENT_WHOLE]     // do something
103  [NONE]              
104  [FUNC_DEF]          }
104  [NONE]              
106  [CLASS]             }
106  [CLASS]             ;
106  [NONE]              
108  [FUNC_DEF]          int
108  [NONE]              main
108  [FUNC_DEF]          (
108  [FUNC_DEF]          )
108  [NONE]              
109  [FUNC_DEF]          {
109  [NONE]              
110  [NONE]              MyClass
110  [TEMPLATE]          <
110  [NONE]              double
110  [NONE]              ,
110  [NONE]              3
110  [NONE]              ,
110  [NONE]              3
110  [NONE]              ,
110  [NONE]              MyStorage
110  [TEMPLATE]          >
110  [NONE]              foo
110  [NONE]              ;
110  [NONE]              
111  [FUNC_DEF]          }
111  [NONE]              
113  [NONE]              template
113  [TEMPLATE]          <
113  [NONE]              typename
113  [NONE]              CharT
113  [NONE]              ,
113  [NONE]              int
113  [NONE]              N
113  [NONE]              ,
113  [NONE]              typename
113  [NONE]              Traits
113  [TEMPLATE]          >
113  [NONE]              
114  [FUNC_DEF]          inline
114  [FUNC_DEF]          std
114  [FUNC_DEF]          ::
114  [FUNC_DEF]          basic_ostream
114  [TEMPLATE]          <
114  [NONE]              CharT
114  [NONE]              ,
114  [NONE]              Traits
114  [TEMPLATE]          >
114  [FUNC_DEF]          &
114  [NONE]              FWStreamOut
114  [FUNC_DEF]          (
114  [NONE]              std
114  [NONE]              ::
114  [NONE]              basic_ostream
114  [TEMPLATE]          <
114  [NONE]              CharT
114  [NONE]              ,
114  [NONE]              Traits
114  [TEMPLATE]          >
114  [NONE]              &
114  [NONE]              os
114  [NONE]              ,
114  [NONE]              
115  [NONE]              const
115  [NONE]              W
115  [NONE]              ::
115  [NONE]              S
115  [TEMPLATE]          <
115  [NONE]              CharT
115  [NONE]              ,
115  [NONE]              N
115  [NONE]              ,
115  [NONE]              Traits
115  [TEMPLATE]          >
115  [NONE]              &
115  [NONE]              s
115  [FUNC_DEF]          )
115  [NONE]              
116  [FUNC_DEF]          {
116  [NONE]              
117  [NONE]              return
117  [RETURN]            (
117  [NONE]              operator
117  [OPERATOR]          <<
117  [TEMPLATE]          <
117  [NONE]              CharT
117  [NONE]              ,
117  [NONE]              N
117  [NONE]              ,
117  [NONE]              Traits
117  [NONE]              ,
117  [NONE]              char
117  [NONE]              ,
117  [NONE]              std
117  [NONE]              ::
117  [NONE]              char_traits
117  [TEMPLATE]          <
117  [NONE]              char
117  [TEMPLATE]          >
117  [TEMPLATE]          >
117  [NONE]              (
117  [NONE]              os
117  [NONE]              ,
117  [NONE]              s
117  [NONE]              )
117  [RETURN]            )
117  [NONE]              ;
117  [NONE]              
118  [FUNC_DEF]          }
118  [NONE]              
120  [NONE]              struct
120  [STRUCT]            foo
120  [NONE]              
120  [STRUCT]            {
120  [NONE]              
121  [NONE]              type1
121  [TEMPLATE]          <
121  [NONE]              int
121  [NONE]              &
121  [TEMPLATE]          >
121  [NONE]              bar
121  [NONE]              ;
121  [NONE]              
122  [STRUCT]            }
122  [STRUCT]            ;
122  [NONE]              
123  [NONE]              struct
123  [STRUCT]            foo
123  [NONE]              
123  [STRUCT]            {
123  [NONE]              
124  [NONE]              type1
124  [TEMPLATE]          <
124  [NONE]              int
124  [NONE]              const
124  [TEMPLATE]          >
124  [NONE]              bar
124  [NONE]              ;
124  [NONE]              
125  [STRUCT]            }
125  [STRUCT]            ;
125  [NONE]              
128  [NONE]              template
128  [TEMPLATE]          <
128  [NONE]              int
128  [NONE]              i
128  [TEMPLATE]          >
128  [FUNC_PROTO]        void
128  [NONE]              f
128  [FUNC_PROTO]        (
128  [FUNC_PROTO]        )
128  [FUNC_PROTO]        ;
128  [NONE]              
129  [NONE]              template
129  [TEMPLATE]          <
129  [NONE]              int
129  [NONE]              i
129  [TEMPLATE]          >
129  [FUNC_DEF]          void
129  [NONE]              g
129  [FUNC_DEF]          (
129  [FUNC_DEF]          )
129  [NONE]              
129  [FUNC_DEF]          {
129  [NONE]              
130  [NONE]              f
130  [TEMPLATE]          <
130  [NONE]              i
130  [NONE]              -
130  [NONE]              1
130  [TEMPLATE]          >
130  [FUNC_CALL]         (
130  [FUNC_CALL]         )
130  [NONE]              ;
130  [NONE]              
131  [NONE]              f
131  [TEMPLATE]          <
131  [NONE]              i
131  [TEMPLATE]          >
131  [FUNC_CALL]         (
131  [FUNC_CALL]         )
131  [NONE]              ;
131  [NONE]              
132  [NONE]              f
132  [TEMPLATE]          <
132  [NONE]              i
132  [NONE]              +
132  [NONE]              1
132  [TEMPLATE]          >
132  [FUNC_CALL]         (
132  [FUNC_CALL]         )
132  [NONE]              ;
132  [NONE]              
133  [NONE]              f
133  [TEMPLATE]          <
133  [NONE]              bar
133  [FUNC_CALL]         (
133  [FUNC_CALL]         )
133  [TEMPLATE]          >
133  [FUNC_CALL]         (
133  [FUNC_CALL]         )
133  [NONE]              ;
133  [NONE]              
134  [FUNC_DEF]          }
134  [NONE]              
135  [FUNC_DEF]          void
135  [NONE]              h
135  [FUNC_DEF]          (
135  [FUNC_DEF]          )
135  [NONE]              
135  [FUNC_DEF]          {
135  [NONE]              
135  [NONE]              g
135  [TEMPLATE]          <
135  [NONE]              42
135  [TEMPLATE]          >
135  [FUNC_CALL]         (
135  [FUNC_CALL]         )
135  [NONE]              ;
135  [NONE]              
135  [FUNC_DEF]          }
135  [NONE]              
137  [PP_INCLUDE]        #
137  [NONE]              include
137  [NONE]              <vector>
137  [NONE]              
138  [NONE]              std
138  [NONE]              ::
138  [NONE]              vector
138  [TEMPLATE]          <
138  [NONE]              int
138  [TEMPLATE]          >
138  [NONE]              A
138  [FUNC_CTOR_VAR]     (
138  [NONE]              2
138  [FUNC_CTOR_VAR]     )
138  [FUNC_CTOR_VAR]     ;
138  [NONE]              
139  [NONE]              std
139  [NONE]              ::
139  [NONE]              vector
139  [TEMPLATE]          <
139  [NONE]              int
139  [TEMPLATE]          >
139  [NONE]              B
139  [NONE]              ;
139  [NONE]              
140  [NONE]              std
140  [NONE]              ::
140  [NONE]              vector
140  [TEMPLATE]          <
140  [NONE]              int
140  [TEMPLATE]          >
140  [NONE]              C
140  [FUNC_CTOR_VAR]     (
140  [NONE]              2
140  [FUNC_CTOR_VAR]     )
140  [FUNC_CTOR_VAR]     ;
140  [NONE]              
141  [NONE]              std
141  [NONE]              ::
141  [NONE]              vector
141  [TEMPLATE]          <
141  [NONE]              int
141  [TEMPLATE]          >
141  [NONE]              D
141  [NONE]              ;
141  [NONE]              
143  [NONE]              template
143  [TEMPLATE]          <
143  [NONE]              class
143  [NONE]              T
143  [TEMPLATE]          >
143  [TEMPLATE]          struct
143  [STRUCT]            X
143  [NONE]              
143  [STRUCT]            {
143  [NONE]              
143  [NONE]              template
143  [TEMPLATE]          <
143  [NONE]              class
143  [NONE]              U
143  [TEMPLATE]          >
143  [FUNC_PROTO]        void
143  [FUNC_PROTO]        operator
143  [OPERATOR]          ()
143  [FUNC_PROTO]        (
143  [NONE]              U
143  [FUNC_PROTO]        )
143  [FUNC_PROTO]        ;
143  [NONE]              
143  [STRUCT]            }
143  [STRUCT]            ;
143  [NONE]              
145  [NONE]              template
145  [TEMPLATE]          <
145  [NONE]              class
145  [NONE]              T
145  [TEMPLATE]          >
145  [TEMPLATE]          class
145  [CLASS]             Y
145  [CLASS]             {
145  [NONE]              
145  [NONE]              template
145  [TEMPLATE]          <
145  [NONE]              class
145  [NONE]              V
145  [TEMPLATE]          >
145  [NONE]              void
145  [NONE]              f
145  [FUNC_CTOR_VAR]     (
145  [NONE]              V
145  [FUNC_CTOR_VAR]     )
145  [FUNC_CTOR_VAR]     ;
145  [NONE]              
145  [CLASS]             }
145  [CLASS]             ;
145  [NONE]              
147  [FUNC_VAR]          void
147  [FUNC_VAR]          (
147  [NONE]              *
147  [NONE]              foobar
147  [FUNC_VAR]          )
147  [FUNC_PROTO]        (
147  [NONE]              void
147  [FUNC_PROTO]        )
147  [NONE]              =
147  [NONE]              NULL
147  [NONE]              ;
147  [NONE]              
148  [NONE]              std
148  [NONE]              ::
148  [NONE]              vector
148  [TEMPLATE]          <
148  [NONE]              void
148  [FUNC_TYPE]         (
148  [NONE]              *
148  [FUNC_TYPE]         )
148  [FUNC_PROTO]        (
148  [NONE]              void
148  [FUNC_PROTO]        )
148  [TEMPLATE]          >
148  [NONE]              functions
148  [NONE]              ;
148  [NONE]              
150  [PP_DEFINE]         #
150  [NONE]              define
150  [NONE]              MACRO
150  [MACRO_FUNC]        (
150  [NONE]              a
150  [MACRO_FUNC]        )
150  [NONE]              a
150  [NONE]              
151  [NONE]              template
151  [TEMPLATE]          <
151  [NONE]              typename
151  [NONE]              =
151  [NONE]              int
151  [TEMPLATE]          >
151  [TEMPLATE]          class
151  [CLASS]             X
151  [TEMPLATE]          ;
151  [NONE]              
152  [NONE]              MACRO
152  [FUNC_CALL]         (
152  [FUNC_PROTO]        void
152  [NONE]              f
152  [FUNC_PROTO]        (
152  [NONE]              X
152  [TEMPLATE]          <
152  [TEMPLATE]          >
152  [NONE]              &
152  [NONE]              x
152  [FUNC_PROTO]        )
152  [FUNC_CALL]         )
152  [NONE]              ;
152  [NONE]              
153  [FUNC_PROTO]        void
153  [NONE]              g
153  [FUNC_PROTO]        (
153  [NONE]              X
153  [TEMPLATE]          <
153  [TEMPLATE]          >
153  [NONE]              &
153  [NONE]              x
153  [FUNC_PROTO]        )
153  [FUNC_PROTO]        ;
153  [NONE]              
155  [PP_INCLUDE]        #
155  [NONE]              include
155  [NONE]              <vector>
155  [NONE]              
156  [NONE]              typedef
156  [NONE]              std
156  [NONE]              ::
156  [NONE]              vector
156  [TEMPLATE]          <
156  [NONE]              std
156  [NONE]              ::
156  [NONE]              vector
156  [TEMPLATE]          <
156  [NONE]              int
156  [TEMPLATE]          >
156  [TEMPLATE]          >
156  [NONE]              Table
156  [TYPEDEF]           ;
156  [COMMENT_END]       // OK
156  [NONE]              
157  [NONE]              typedef
157  [NONE]              std
157  [NONE]              ::
157  [NONE]              vector
157  [TEMPLATE]          <
157  [NONE]              std
157  [NONE]              ::
157  [NONE]              vector
157  [TEMPLATE]          <
157  [NONE]              bool
157  [TEMPLATE]          >
157  [TEMPLATE]          >
157  [NONE]              Flags
157  [TYPEDEF]           ;
157  [COMMENT_END]       // Error
157  [NONE]              
159  [FUNC_PROTO]        void
159  [NONE]              func
159  [FUNC_PROTO]        (
159  [NONE]              List
159  [TEMPLATE]          <
159  [NONE]              B
159  [TEMPLATE]          >
159  [FUNC_PROTO]        =
159  [NONE]              default_val1
159  [FUNC_PROTO]        )
159  [FUNC_PROTO]        ;
159  [NONE]              
160  [FUNC_PROTO]        void
160  [NONE]              func
160  [FUNC_PROTO]        (
160  [NONE]              List
160  [TEMPLATE]          <
160  [NONE]              List
160  [TEMPLATE]          <
160  [NONE]              B
160  [TEMPLATE]          >
160  [TEMPLATE]          >
160  [FUNC_PROTO]        =
160  [NONE]              default_val2
160  [FUNC_PROTO]        )
160  [FUNC_PROTO]        ;
160  [NONE]              
162  [NONE]              BLAH
162  [TEMPLATE]          <
162  [NONE]              (
162  [NONE]              3.14
162  [NONE]              >=
162  [NONE]              42
162  [NONE]              )
162  [TEMPLATE]          >
162  [NONE]              blah
162  [NONE]              ;
162  [NONE]              
163  [NONE]              bool
163  [NONE]              X
163  [NONE]              =
163  [NONE]              j
163  [TEMPLATE]          <
163  [NONE]              3
163  [TEMPLATE]          >
163  [NONE]              >
163  [NONE]              1
163  [NONE]              ;
163  [NONE]              
165  [FUNC_DEF]          void
165  [NONE]              foo
165  [FUNC_DEF]          (
165  [FUNC_DEF]          )
165  [NONE]              
166  [FUNC_DEF]          {
166  [NONE]              
167  [NONE]              A
167  [TEMPLATE]          <
167  [NONE]              (
167  [NONE]              X
167  [NONE]              >
167  [NONE]              Y
167  [NONE]              )
167  [TEMPLATE]          >
167  [NONE]              a
167  [NONE]              ;
167  [NONE]              
168  [NONE]              a
168  [NONE]              =
168  [NONE]              static_cast
168  [TYPE_CAST]         <
168  [NONE]              List
168  [TEMPLATE]          <
168  [NONE]              B
168  [TEMPLATE]          >
168  [TYPE_CAST]         >
168  [TYPE_CAST]         (
168  [NONE]              ld
168  [TYPE_CAST]         )
168  [NONE]              ;
168  [NONE]              
169  [FUNC_DEF]          }
169  [NONE]              
171  [NONE]              template
171  [TEMPLATE]          <
171  [NONE]              int
171  [NONE]              i
171  [TEMPLATE]          >
171  [TEMPLATE]          class
171  [CLASS]             X
171  [CLASS]             {
171  [COMMENT_END]       /* ... */
171  [NONE]              
171  [CLASS]             }
171  [CLASS]             ;
171  [NONE]              
172  [NONE]              X
172  [NONE]              <
172  [NONE]              1
172  [NONE]              >
172  [NONE]              2
172  [NONE]              >
172  [NONE]              x1
172  [NONE]              ;
172  [COMMENT_END]       // Syntax error.
172  [NONE]              
173  [NONE]              X
173  [TEMPLATE]          <
173  [NONE]              (
173  [NONE]              1
173  [NONE]              >
173  [NONE]              2
173  [NONE]              )
173  [TEMPLATE]          >
173  [NONE]              x2
173  [NONE]              ;
173  [COMMENT_END]       // Okay.
173  [NONE]              
175  [NONE]              template
175  [TEMPLATE]          <
175  [NONE]              class
175  [NONE]              T
175  [TEMPLATE]          >
175  [TEMPLATE]          class
175  [CLASS]             Y
175  [CLASS]             {
175  [COMMENT_END]       /* ... */
175  [NONE]              
175  [CLASS]             }
175  [CLASS]             ;
175  [NONE]              
176  [NONE]              Y
176  [TEMPLATE]          <
176  [NONE]              X
176  [TEMPLATE]          <
176  [NONE]              1
176  [TEMPLATE]          >
176  [TEMPLATE]          >
176  [NONE]              x3
176  [NONE]              ;
176  [COMMENT_END]       // Okay, same as "Y<X<1> > x3;".
176  [NONE]              
177  [NONE]              Y
177  [TEMPLATE]          <
177  [NONE]              X
177  [TEMPLATE]          <
177  [NONE]              (
177  [NONE]              6
177  [NONE]              >>
177  [NONE]              1
177  [NONE]              )
177  [TEMPLATE]          >
177  [TEMPLATE]          >
177  [NONE]              x4
177  [NONE]              ;
177  [NONE]              
180  [NONE]              template
180  [TEMPLATE]          <
180  [NONE]              typename
180  [NONE]              T
180  [TEMPLATE]          >
180  [NONE]              
181  [FUNC_PROTO]        int
181  [NONE]              
182  [NONE]              myFunc1
182  [FUNC_PROTO]        (
182  [NONE]              typename
182  [NONE]              T
182  [NONE]              ::
182  [NONE]              Subtype
182  [NONE]              val
182  [FUNC_PROTO]        )
182  [FUNC_PROTO]        ;
182  [NONE]              
184  [FUNC_PROTO]        int
184  [NONE]              
185  [NONE]              myFunc2
185  [FUNC_PROTO]        (
185  [NONE]              T
185  [NONE]              ::
185  [NONE]              Subtype
185  [NONE]              val
185  [FUNC_PROTO]        )
185  [FUNC_PROTO]        ;
185  [NONE]              