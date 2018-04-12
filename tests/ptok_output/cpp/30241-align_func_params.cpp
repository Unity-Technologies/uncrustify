Line [Parent]            Text
1    [NONE]              class
1    [CLASS]             SomeClass
1    [NONE]              
2    [CLASS]             {
2    [NONE]              
3    [NONE]              public
3    [NONE]              :
3    [NONE]              
4    [COMMENT_WHOLE]     // Short parameters
4    [NONE]              
5    [FUNC_PROTO]        TYPE_EXPORT
5    [NONE]              method1
5    [FUNC_PROTO]        (
5    [NONE]              int
5    [NONE]              a
5    [NONE]              ,
5    [NONE]              
6    [NONE]              float
6    [NONE]              b
6    [FUNC_PROTO]        )
6    [FUNC_PROTO]        ;
6    [NONE]              
8    [FUNC_PROTO]        TYPE_EXPORT
8    [NONE]              method2
8    [FUNC_PROTO]        (
8    [NONE]              int
8    [NONE]              &
8    [NONE]              d
8    [NONE]              ,
8    [NONE]              
9    [NONE]              float
9    [NONE]              e
9    [FUNC_PROTO]        )
9    [FUNC_PROTO]        ;
9    [NONE]              
11   [FUNC_PROTO]        TYPE_EXPORT
11   [NONE]              method3
11   [FUNC_PROTO]        (
11   [NONE]              int
11   [NONE]              *
11   [NONE]              f
11   [NONE]              ,
11   [NONE]              
12   [NONE]              float
12   [NONE]              g
12   [FUNC_PROTO]        )
12   [FUNC_PROTO]        ;
12   [NONE]              
14   [COMMENT_WHOLE]     // Parameters with '&' and '*'
14   [NONE]              
15   [FUNC_PROTO]        TYPE_EXPORT
15   [NONE]              method4
15   [FUNC_PROTO]        (
15   [NONE]              int
15   [NONE]              a
15   [FUNC_PROTO]        )
15   [FUNC_PROTO]        ;
15   [NONE]              
16   [FUNC_PROTO]        TYPE_EXPORT
16   [NONE]              method5
16   [FUNC_PROTO]        (
16   [NONE]              int
16   [NONE]              &
16   [NONE]              a
16   [FUNC_PROTO]        )
16   [FUNC_PROTO]        ;
16   [NONE]              
17   [FUNC_PROTO]        TYPE_EXPORT
17   [NONE]              method6
17   [FUNC_PROTO]        (
17   [NONE]              int
17   [NONE]              *
17   [NONE]              a
17   [FUNC_PROTO]        )
17   [FUNC_PROTO]        ;
17   [NONE]              
19   [FUNC_PROTO]        TYPE_EXPORT
19   [NONE]              method7
19   [FUNC_PROTO]        (
19   [NONE]              float
19   [NONE]              a
19   [FUNC_PROTO]        )
19   [FUNC_PROTO]        ;
19   [NONE]              
20   [FUNC_PROTO]        TYPE_EXPORT
20   [NONE]              method8
20   [FUNC_PROTO]        (
20   [NONE]              float
20   [NONE]              &
20   [NONE]              a
20   [FUNC_PROTO]        )
20   [FUNC_PROTO]        ;
20   [NONE]              
21   [FUNC_PROTO]        TYPE_EXPORT
21   [NONE]              method9
21   [FUNC_PROTO]        (
21   [NONE]              float
21   [NONE]              *
21   [NONE]              a
21   [FUNC_PROTO]        )
21   [FUNC_PROTO]        ;
21   [NONE]              
23   [COMMENT_WHOLE]     // Single short and long parameters
23   [NONE]              
24   [FUNC_PROTO]        void
24   [NONE]              method10
24   [FUNC_PROTO]        (
24   [NONE]              int
24   [NONE]              a
24   [FUNC_PROTO]        )
24   [FUNC_PROTO]        ;
24   [NONE]              
25   [FUNC_PROTO]        void
25   [NONE]              method11
25   [FUNC_PROTO]        (
25   [NONE]              float
25   [NONE]              &
25   [NONE]              a
25   [FUNC_PROTO]        )
25   [FUNC_PROTO]        ;
25   [NONE]              
26   [FUNC_PROTO]        void
26   [NONE]              method12
26   [FUNC_PROTO]        (
26   [NONE]              SomeLongNamespace
26   [NONE]              ::
26   [NONE]              SomeLongType
26   [NONE]              long_parameter_name
26   [FUNC_PROTO]        )
26   [FUNC_PROTO]        ;
26   [NONE]              
27   [FUNC_PROTO]        void
27   [NONE]              method13
27   [FUNC_PROTO]        (
27   [NONE]              double
27   [NONE]              *
27   [NONE]              a
27   [FUNC_PROTO]        )
27   [FUNC_PROTO]        ;
27   [NONE]              
28   [FUNC_PROTO]        void
28   [NONE]              method14
28   [FUNC_PROTO]        (
28   [NONE]              SomeLongType
28   [NONE]              long_parameter_name
28   [FUNC_PROTO]        )
28   [FUNC_PROTO]        ;
28   [NONE]              
30   [COMMENT_WHOLE]     // Long parameters
30   [NONE]              
31   [FUNC_PROTO]        void
31   [NONE]              method20
31   [FUNC_PROTO]        (
31   [NONE]              int
31   [NONE]              *
31   [NONE]              int_param
31   [NONE]              ,
31   [NONE]              
32   [NONE]              SomeLongNamespace
32   [NONE]              ::
32   [NONE]              SomeLongType
32   [NONE]              long_parameter_name
32   [NONE]              ,
32   [NONE]              
33   [NONE]              float
33   [NONE]              &
33   [NONE]              float_param
33   [FUNC_PROTO]        )
33   [FUNC_PROTO]        ;
33   [NONE]              
35   [COMMENT_WHOLE]     // Possible bug: different aligning in method21 and method22
35   [NONE]              
36   [COMMENT_WHOLE]     // align_func_params_span = 1, align_func_params_thresh = 8
36   [NONE]              
37   [FUNC_PROTO]        void
37   [NONE]              method21
37   [FUNC_PROTO]        (
37   [NONE]              SomeLoooooooooooooongType
37   [NONE]              long_param_1
37   [NONE]              ,
37   [NONE]              
38   [NONE]              const
38   [NONE]              string
38   [NONE]              &
38   [NONE]              string_param_1
38   [NONE]              ,
38   [NONE]              
39   [NONE]              const
39   [NONE]              TimePoint
39   [NONE]              &
39   [NONE]              time_param
39   [NONE]              ,
39   [NONE]              
40   [NONE]              double
40   [NONE]              double_param_1
40   [NONE]              ,
40   [NONE]              
41   [NONE]              double
41   [NONE]              double_param_2
41   [NONE]              ,
41   [NONE]              
42   [NONE]              const
42   [NONE]              string
42   [NONE]              &
42   [NONE]              string_param_2
42   [NONE]              ,
42   [NONE]              
43   [NONE]              SomeLoooooooooooooongType
43   [NONE]              long_param_2
43   [FUNC_PROTO]        )
43   [FUNC_PROTO]        ;
43   [NONE]              
44   [FUNC_PROTO]        void
44   [NONE]              method22
44   [FUNC_PROTO]        (
44   [NONE]              SomeLoooooooooooooongType
44   [NONE]              long_param_1
44   [NONE]              ,
44   [NONE]              
45   [NONE]              const
45   [NONE]              string
45   [NONE]              &
45   [NONE]              string_param_1
45   [NONE]              ,
45   [NONE]              
46   [NONE]              double
46   [NONE]              double_param_1
46   [NONE]              ,
46   [NONE]              
47   [NONE]              double
47   [NONE]              double_param_2
47   [NONE]              ,
47   [NONE]              
48   [NONE]              const
48   [NONE]              TimePoint
48   [NONE]              &
48   [NONE]              time_param
48   [NONE]              ,
48   [NONE]              
49   [NONE]              const
49   [NONE]              string
49   [NONE]              &
49   [NONE]              string_param_2
49   [NONE]              ,
49   [NONE]              
50   [NONE]              SomeLoooooooooooooongType
50   [NONE]              long_param_2
50   [FUNC_PROTO]        )
50   [FUNC_PROTO]        ;
50   [NONE]              
52   [FUNC_PROTO]        void
52   [NONE]              method23
52   [FUNC_PROTO]        (
52   [NONE]              int
52   [NONE]              int_param
52   [NONE]              ,
52   [NONE]              
53   [NONE]              int
53   [NONE]              *
53   [NONE]              int_ptr_param
53   [NONE]              ,
53   [NONE]              
54   [NONE]              float
54   [NONE]              float_param
54   [NONE]              ,
54   [NONE]              
55   [NONE]              float
55   [NONE]              &
55   [NONE]              float_ref_param
55   [NONE]              ,
55   [NONE]              
56   [NONE]              SomeLongNamespace
56   [NONE]              ::
56   [NONE]              SomeLongType
56   [NONE]              long_parameter_name
56   [NONE]              ,
56   [NONE]              
57   [NONE]              int
57   [NONE]              *
57   [NONE]              other_int_param
57   [NONE]              ,
57   [NONE]              
58   [NONE]              SomeLooooongType
58   [NONE]              long_parameter_name
58   [NONE]              ,
58   [NONE]              
59   [NONE]              SomeLoooooooooongType
59   [NONE]              looong_parameter_name
59   [NONE]              ,
59   [NONE]              
60   [NONE]              SomeLongNamespace
60   [NONE]              ::
60   [NONE]              OtherLongNamespace
60   [NONE]              ::
60   [NONE]              SomeLongType
60   [NONE]              very_long_parameter_name
60   [NONE]              ,
60   [NONE]              
61   [NONE]              int
61   [NONE]              *
61   [NONE]              int_ptr_param
61   [NONE]              ,
61   [NONE]              
62   [NONE]              float
62   [NONE]              float_param
62   [NONE]              ,
62   [NONE]              
63   [NONE]              float
63   [NONE]              &
63   [NONE]              float_ref_param
63   [NONE]              ,
63   [NONE]              
64   [NONE]              double
64   [NONE]              &
64   [NONE]              double_param
64   [NONE]              ,
64   [NONE]              
65   [NONE]              SomeLongNamespace
65   [NONE]              ::
65   [NONE]              SomeLongType
65   [NONE]              long_parameter_name
65   [NONE]              ,
65   [NONE]              
66   [NONE]              int
66   [NONE]              *
66   [NONE]              other_int_param
66   [FUNC_PROTO]        )
66   [FUNC_PROTO]        ;
66   [NONE]              
68   [COMMENT_WHOLE]     // Don't align several parameters in one line
68   [NONE]              
69   [FUNC_PROTO]        void
69   [NONE]              method30
69   [FUNC_PROTO]        (
69   [NONE]              int
69   [NONE]              *
69   [NONE]              f
69   [NONE]              ,
69   [NONE]              char
69   [NONE]              foo
69   [NONE]              ,
69   [NONE]              
70   [NONE]              float
70   [NONE]              g
70   [FUNC_PROTO]        )
70   [FUNC_PROTO]        ;
70   [NONE]              
72   [COMMENT_WHOLE]     // Short parameters in method definition
72   [NONE]              
73   [FUNC_DEF]          void
73   [NONE]              method40
73   [FUNC_DEF]          (
73   [NONE]              int
73   [NONE]              a
73   [NONE]              ,
73   [NONE]              
74   [NONE]              float
74   [NONE]              b
74   [FUNC_DEF]          )
74   [NONE]              
75   [FUNC_DEF]          {
75   [NONE]              
76   [NONE]              int
76   [NONE]              c
76   [NONE]              ;
76   [NONE]              
78   [NONE]              if
78   [IF]                (
78   [NONE]              true
78   [IF]                )
78   [IF]                
78   [NONE]              callProc
78   [NONE]              ;
78   [IF]                
78   [NONE]              
79   [COMMENT_WHOLE]     // do stuff.
79   [NONE]              
80   [FUNC_DEF]          }
80   [NONE]              
82   [COMMENT_WHOLE]     // Long parameters in method definition
82   [NONE]              
83   [FUNC_DEF]          void
83   [NONE]              method50
83   [FUNC_DEF]          (
83   [NONE]              int
83   [NONE]              int_param
83   [NONE]              ,
83   [NONE]              
84   [NONE]              SomeLongNamespace
84   [NONE]              ::
84   [NONE]              OtherLongNamespace
84   [NONE]              ::
84   [NONE]              SomeLongType
84   [NONE]              long_parameter_name
84   [NONE]              ,
84   [NONE]              
85   [NONE]              float
85   [NONE]              float_param
85   [NONE]              ,
85   [NONE]              
86   [NONE]              double
86   [NONE]              double_param
86   [NONE]              ,
86   [NONE]              
87   [NONE]              const
87   [NONE]              string
87   [NONE]              &
87   [NONE]              string_param
87   [FUNC_DEF]          )
87   [NONE]              
88   [FUNC_DEF]          {
88   [NONE]              
89   [NONE]              doSomething
89   [FUNC_CALL]         (
89   [FUNC_CALL]         )
89   [NONE]              ;
89   [NONE]              
90   [FUNC_DEF]          }
90   [NONE]              
92   [FUNC_DEF]          void
92   [NONE]              method51
92   [FUNC_DEF]          (
92   [NONE]              
93   [NONE]              int
93   [NONE]              int_param
93   [NONE]              ,
93   [NONE]              
94   [NONE]              SomeLongNamespace
94   [NONE]              ::
94   [NONE]              OtherLongNamespace
94   [NONE]              ::
94   [NONE]              SomeLongType
94   [NONE]              long_parameter_name
94   [NONE]              ,
94   [NONE]              
95   [NONE]              float
95   [NONE]              float_param
95   [NONE]              ,
95   [NONE]              
96   [NONE]              double
96   [NONE]              double_param
96   [NONE]              ,
96   [NONE]              
97   [NONE]              const
97   [NONE]              string
97   [NONE]              &
97   [NONE]              string_param
97   [FUNC_DEF]          )
97   [NONE]              
98   [FUNC_DEF]          {
98   [NONE]              
99   [NONE]              doSomething
99   [FUNC_CALL]         (
99   [FUNC_CALL]         )
99   [NONE]              ;
99   [NONE]              
100  [FUNC_DEF]          }
100  [NONE]              
101  [CLASS]             }
101  [CLASS]             ;
101  [NONE]              