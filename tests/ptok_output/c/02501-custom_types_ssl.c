Line [Parent]            Text
1    [PP_IF]             #
1    [NONE]              ifndef
1    [NONE]              HEADER_CONF_H
1    [NONE]              
2    [PP_DEFINE]         #
2    [NONE]              define
2    [NONE]              HEADER_CONF_H
2    [NONE]              
4    [PP_IF]             #
4    [NONE]              ifdef
4    [NONE]              __cplusplus
4    [NONE]              
5    [NONE]              extern
5    [EXTERN]            "C"
5    [NONE]              
6    [PP_ENDIF]          #
6    [NONE]              endif
6    [NONE]              /* ifdef  __cplusplus */
6    [NONE]              
7    [NONE]              {
7    [NONE]              
9    [NONE]              typedef
9    [NONE]              struct
9    [NONE]              
10   [STRUCT]            {
10   [NONE]              
11   [NONE]              char
11   [NONE]              *
11   [NONE]              section
11   [NONE]              ;
11   [NONE]              
12   [NONE]              char
12   [NONE]              *
12   [NONE]              name
12   [NONE]              ;
12   [NONE]              
13   [NONE]              char
13   [NONE]              *
13   [NONE]              value
13   [NONE]              ;
13   [NONE]              
14   [STRUCT]            }
14   [NONE]              CONF_VALUE
14   [TYPEDEF]           ;
14   [NONE]              
16   [NONE]              DECLARE_STACK_OF
16   [FUNC_CALL]         (
16   [NONE]              CONF_VALUE
16   [FUNC_CALL]         )
16   [NONE]              ;
16   [NONE]              
17   [NONE]              DECLARE_LHASH_OF
17   [FUNC_CALL]         (
17   [NONE]              CONF_VALUE
17   [FUNC_CALL]         )
17   [NONE]              ;
17   [NONE]              
19   [NONE]              struct
19   [STRUCT]            conf_st
19   [STRUCT]            ;
19   [NONE]              
20   [NONE]              struct
20   [STRUCT]            conf_method_st
20   [STRUCT]            ;
20   [NONE]              
21   [NONE]              typedef
21   [NONE]              struct
21   [NONE]              conf_method_st
21   [NONE]              CONF_METHOD
21   [TYPEDEF]           ;
21   [NONE]              
23   [FUNC_PROTO]        int
23   [NONE]              CONF_set_default_method
23   [FUNC_PROTO]        (
23   [NONE]              CONF_METHOD
23   [NONE]              *
23   [NONE]              meth
23   [FUNC_PROTO]        )
23   [FUNC_PROTO]        ;
23   [NONE]              
24   [FUNC_PROTO]        void
24   [NONE]              CONF_set_nconf
24   [FUNC_PROTO]        (
24   [NONE]              CONF
24   [NONE]              *
24   [NONE]              conf
24   [NONE]              ,
24   [NONE]              LHASH_OF(CONF_VALUE)
24   [NONE]              *
24   [NONE]              hash
24   [FUNC_PROTO]        )
24   [FUNC_PROTO]        ;
24   [NONE]              
25   [FUNC_PROTO]        LHASH_OF(CONF_VALUE)
25   [FUNC_PROTO]        *
25   [NONE]              CONF_load
25   [FUNC_PROTO]        (
25   [NONE]              LHASH_OF(CONF_VALUE)
25   [NONE]              *
25   [NONE]              conf
25   [NONE]              ,
25   [NONE]              const
25   [NONE]              char
25   [NONE]              *
25   [NONE]              file
25   [NONE]              ,
25   [NONE]              
26   [NONE]              long
26   [NONE]              *
26   [NONE]              eline
26   [FUNC_PROTO]        )
26   [FUNC_PROTO]        ;
26   [NONE]              
27   [PP_IF]             #
27   [NONE]              ifndef
27   [NONE]              OPENSSL_NO_FP_API
27   [NONE]              
28   [FUNC_PROTO]        LHASH_OF(CONF_VALUE)
28   [FUNC_PROTO]        *
28   [NONE]              CONF_load_fp
28   [FUNC_PROTO]        (
28   [NONE]              LHASH_OF(CONF_VALUE)
28   [NONE]              *
28   [NONE]              conf
28   [NONE]              ,
28   [NONE]              FILE
28   [NONE]              *
28   [NONE]              fp
28   [NONE]              ,
28   [NONE]              
29   [NONE]              long
29   [NONE]              *
29   [NONE]              eline
29   [FUNC_PROTO]        )
29   [FUNC_PROTO]        ;
29   [NONE]              
30   [PP_ENDIF]          #
30   [NONE]              endif
30   [NONE]              /* ifndef OPENSSL_NO_FP_API */
30   [NONE]              
31   [FUNC_PROTO]        LHASH_OF(CONF_VALUE)
31   [FUNC_PROTO]        *
31   [NONE]              CONF_load_bio
31   [FUNC_PROTO]        (
31   [NONE]              LHASH_OF(CONF_VALUE)
31   [NONE]              *
31   [NONE]              conf
31   [NONE]              ,
31   [NONE]              BIO
31   [NONE]              *
31   [NONE]              bp
31   [NONE]              ,
31   [NONE]              long
31   [NONE]              *
31   [NONE]              eline
31   [FUNC_PROTO]        )
31   [FUNC_PROTO]        ;
31   [NONE]              
32   [FUNC_PROTO]        STACK_OF(CONF_VALUE)
32   [FUNC_PROTO]        *
32   [NONE]              CONF_get_section
32   [FUNC_PROTO]        (
32   [NONE]              LHASH_OF(CONF_VALUE)
32   [NONE]              *
32   [NONE]              conf
32   [NONE]              ,
32   [NONE]              
33   [NONE]              const
33   [NONE]              char
33   [NONE]              *
33   [NONE]              section
33   [FUNC_PROTO]        )
33   [FUNC_PROTO]        ;
33   [NONE]              
34   [FUNC_PROTO]        char
34   [FUNC_PROTO]        *
34   [NONE]              CONF_get_string
34   [FUNC_PROTO]        (
34   [NONE]              LHASH_OF(CONF_VALUE)
34   [NONE]              *
34   [NONE]              conf
34   [NONE]              ,
34   [NONE]              const
34   [NONE]              char
34   [NONE]              *
34   [NONE]              group
34   [NONE]              ,
34   [NONE]              
35   [NONE]              const
35   [NONE]              char
35   [NONE]              *
35   [NONE]              name
35   [FUNC_PROTO]        )
35   [FUNC_PROTO]        ;
35   [NONE]              
36   [FUNC_PROTO]        long
36   [NONE]              CONF_get_number
36   [FUNC_PROTO]        (
36   [NONE]              LHASH_OF(CONF_VALUE)
36   [NONE]              *
36   [NONE]              conf
36   [NONE]              ,
36   [NONE]              const
36   [NONE]              char
36   [NONE]              *
36   [NONE]              group
36   [NONE]              ,
36   [NONE]              
37   [NONE]              const
37   [NONE]              char
37   [NONE]              *
37   [NONE]              name
37   [FUNC_PROTO]        )
37   [FUNC_PROTO]        ;
37   [NONE]              
38   [FUNC_PROTO]        void
38   [NONE]              CONF_free
38   [FUNC_PROTO]        (
38   [NONE]              LHASH_OF(CONF_VALUE)
38   [NONE]              *
38   [NONE]              conf
38   [FUNC_PROTO]        )
38   [FUNC_PROTO]        ;
38   [NONE]              
39   [FUNC_PROTO]        int
39   [NONE]              CONF_dump_fp
39   [FUNC_PROTO]        (
39   [NONE]              LHASH_OF(CONF_VALUE)
39   [NONE]              *
39   [NONE]              conf
39   [NONE]              ,
39   [NONE]              FILE
39   [NONE]              *
39   [NONE]              out
39   [FUNC_PROTO]        )
39   [FUNC_PROTO]        ;
39   [NONE]              
40   [FUNC_PROTO]        int
40   [NONE]              CONF_dump_bio
40   [FUNC_PROTO]        (
40   [NONE]              LHASH_OF(CONF_VALUE)
40   [NONE]              *
40   [NONE]              conf
40   [NONE]              ,
40   [NONE]              BIO
40   [NONE]              *
40   [NONE]              out
40   [FUNC_PROTO]        )
40   [FUNC_PROTO]        ;
40   [NONE]              
43   [NONE]              }
43   [NONE]              
46   [FUNC_DEF]          void
46   [NONE]              CONF_set_nconf
46   [FUNC_DEF]          (
46   [NONE]              CONF
46   [NONE]              *
46   [NONE]              conf
46   [NONE]              ,
46   [NONE]              LHASH_OF(CONF_VALUE)
46   [NONE]              *
46   [NONE]              hash
46   [FUNC_DEF]          )
46   [NONE]              
47   [FUNC_DEF]          {
47   [NONE]              
48   [NONE]              if
48   [IF]                (
48   [NONE]              default_CONF_method
48   [NONE]              ==
48   [NONE]              NULL
48   [IF]                )
48   [IF]                
48   [NONE]              
49   [NONE]              default_CONF_method
49   [NONE]              =
49   [NONE]              NCONF_default
49   [FUNC_CALL]         (
49   [FUNC_CALL]         )
49   [NONE]              ;
49   [IF]                
49   [NONE]              
51   [NONE]              default_CONF_method
51   [NONE]              ->
51   [NONE]              init
51   [FUNC_CALL]         (
51   [NONE]              conf
51   [FUNC_CALL]         )
51   [NONE]              ;
51   [NONE]              
52   [NONE]              conf
52   [NONE]              ->
52   [NONE]              data
52   [NONE]              =
52   [NONE]              hash
52   [NONE]              ;
52   [NONE]              
53   [FUNC_DEF]          }
53   [NONE]              
56   [FUNC_DEF]          LHASH_OF(CONF_VALUE)
56   [FUNC_DEF]          *
56   [NONE]              CONF_load
56   [FUNC_DEF]          (
56   [NONE]              LHASH_OF(CONF_VALUE)
56   [NONE]              *
56   [NONE]              conf
56   [NONE]              ,
56   [NONE]              const
56   [NONE]              char
56   [NONE]              *
56   [NONE]              file
56   [NONE]              ,
56   [NONE]              
57   [NONE]              long
57   [NONE]              *
57   [NONE]              eline
57   [FUNC_DEF]          )
57   [NONE]              
58   [FUNC_DEF]          {
58   [NONE]              
59   [NONE]              LHASH_OF(CONF_VALUE)
59   [NONE]              *
59   [NONE]              ltmp
59   [NONE]              ;
59   [NONE]              
60   [NONE]              BIO
60   [NONE]              *
60   [NONE]              in
60   [NONE]              =
60   [NONE]              NULL
60   [NONE]              ;
60   [NONE]              
62   [PP_IF]             #
62   [NONE]              ifdef
62   [NONE]              OPENSSL_SYS_VMS
62   [NONE]              
63   [NONE]              in
63   [NONE]              =
63   [NONE]              BIO_new_file
63   [FUNC_CALL]         (
63   [NONE]              file
63   [NONE]              ,
63   [NONE]              "r"
63   [FUNC_CALL]         )
63   [NONE]              ;
63   [NONE]              
64   [PP_ELSE]           #
64   [NONE]              else
64   [NONE]               /* ifdef OPENSSL_SYS_VMS */
64   [NONE]              
65   [NONE]              in
65   [NONE]              =
65   [NONE]              BIO_new_file
65   [FUNC_CALL]         (
65   [NONE]              file
65   [NONE]              ,
65   [NONE]              "rb"
65   [FUNC_CALL]         )
65   [NONE]              ;
65   [NONE]              
66   [PP_ENDIF]          #
66   [NONE]              endif
66   [NONE]              /* ifdef OPENSSL_SYS_VMS */
66   [NONE]              
67   [NONE]              if
67   [IF]                (
67   [NONE]              in
67   [NONE]              ==
67   [NONE]              NULL
67   [IF]                )
67   [NONE]              
68   [IF]                {
68   [NONE]              
69   [NONE]              CONFerr
69   [FUNC_CALL]         (
69   [NONE]              CONF_F_CONF_LOAD
69   [NONE]              ,
69   [NONE]              ERR_R_SYS_LIB
69   [FUNC_CALL]         )
69   [NONE]              ;
69   [NONE]              
70   [NONE]              return
70   [NONE]              NULL
70   [NONE]              ;
70   [NONE]              
71   [IF]                }
71   [NONE]              
73   [NONE]              return
73   [NONE]              ltmp
73   [NONE]              ;
73   [NONE]              
74   [FUNC_DEF]          }
74   [NONE]              
76   [PP_IF]             #
76   [NONE]              ifndef
76   [NONE]              OPENSSL_NO_FP_API
76   [NONE]              
77   [FUNC_DEF]          LHASH_OF(CONF_VALUE)
77   [FUNC_DEF]          *
77   [NONE]              CONF_load_fp
77   [FUNC_DEF]          (
77   [NONE]              LHASH_OF(CONF_VALUE)
77   [NONE]              *
77   [NONE]              conf
77   [NONE]              ,
77   [NONE]              FILE
77   [NONE]              *
77   [NONE]              fp
77   [NONE]              ,
77   [NONE]              
78   [NONE]              long
78   [NONE]              *
78   [NONE]              eline
78   [FUNC_DEF]          )
78   [NONE]              
79   [FUNC_DEF]          {
79   [NONE]              
80   [NONE]              BIO
80   [NONE]              *
80   [NONE]              btmp
80   [NONE]              ;
80   [NONE]              
81   [NONE]              LHASH_OF(CONF_VALUE)
81   [NONE]              *
81   [NONE]              ltmp
81   [NONE]              ;
81   [NONE]              
82   [NONE]              if
82   [IF]                (
82   [NONE]              !
82   [NONE]              (
82   [NONE]              btmp
82   [NONE]              =
82   [NONE]              BIO_new_fp
82   [FUNC_CALL]         (
82   [NONE]              fp
82   [NONE]              ,
82   [NONE]              BIO_NOCLOSE
82   [FUNC_CALL]         )
82   [NONE]              )
82   [IF]                )
82   [NONE]              
82   [IF]                {
82   [NONE]              
83   [NONE]              CONFerr
83   [FUNC_CALL]         (
83   [NONE]              CONF_F_CONF_LOAD_FP
83   [NONE]              ,
83   [NONE]              ERR_R_BUF_LIB
83   [FUNC_CALL]         )
83   [NONE]              ;
83   [NONE]              
84   [NONE]              return
84   [NONE]              NULL
84   [NONE]              ;
84   [NONE]              
85   [IF]                }
85   [NONE]              
86   [NONE]              ltmp
86   [NONE]              =
86   [NONE]              CONF_load_bio
86   [FUNC_CALL]         (
86   [NONE]              conf
86   [NONE]              ,
86   [NONE]              btmp
86   [NONE]              ,
86   [NONE]              eline
86   [FUNC_CALL]         )
86   [NONE]              ;
86   [NONE]              
87   [NONE]              BIO_free
87   [FUNC_CALL]         (
87   [NONE]              btmp
87   [FUNC_CALL]         )
87   [NONE]              ;
87   [NONE]              
88   [NONE]              return
88   [NONE]              ltmp
88   [NONE]              ;
88   [NONE]              
89   [FUNC_DEF]          }
89   [NONE]              
90   [PP_ENDIF]          #
90   [NONE]              endif
90   [NONE]              /* ifndef OPENSSL_NO_FP_API */
90   [NONE]              
92   [FUNC_DEF]          LHASH_OF(CONF_VALUE)
92   [FUNC_DEF]          *
92   [NONE]              CONF_load_bio
92   [FUNC_DEF]          (
92   [NONE]              LHASH_OF(CONF_VALUE)
92   [NONE]              *
92   [NONE]              conf
92   [NONE]              ,
92   [NONE]              BIO
92   [NONE]              *
92   [NONE]              bp
92   [NONE]              ,
92   [NONE]              
93   [NONE]              long
93   [NONE]              *
93   [NONE]              eline
93   [FUNC_DEF]          )
93   [NONE]              
94   [FUNC_DEF]          {
94   [NONE]              
95   [NONE]              CONF
95   [NONE]              ctmp
95   [NONE]              ;
95   [NONE]              
96   [NONE]              int
96   [NONE]              ret
96   [NONE]              ;
96   [NONE]              
98   [NONE]              CONF_set_nconf
98   [FUNC_CALL]         (
98   [NONE]              &
98   [NONE]              ctmp
98   [NONE]              ,
98   [NONE]              conf
98   [FUNC_CALL]         )
98   [NONE]              ;
98   [NONE]              
100  [NONE]              ret
100  [NONE]              =
100  [NONE]              NCONF_load_bio
100  [FUNC_CALL]         (
100  [NONE]              &
100  [NONE]              ctmp
100  [NONE]              ,
100  [NONE]              bp
100  [NONE]              ,
100  [NONE]              eline
100  [FUNC_CALL]         )
100  [NONE]              ;
100  [NONE]              
101  [NONE]              if
101  [IF]                (
101  [NONE]              ret
101  [IF]                )
101  [IF]                
101  [NONE]              
102  [NONE]              return
102  [NONE]              ctmp
102  [NONE]              .
102  [NONE]              data
102  [NONE]              ;
102  [IF]                
102  [NONE]              
103  [NONE]              return
103  [NONE]              NULL
103  [NONE]              ;
103  [NONE]              
104  [FUNC_DEF]          }
104  [NONE]              
106  [FUNC_DEF]          STACK_OF(CONF_VALUE)
106  [FUNC_DEF]          *
106  [NONE]              CONF_get_section
106  [FUNC_DEF]          (
106  [NONE]              LHASH_OF(CONF_VALUE)
106  [NONE]              *
106  [NONE]              conf
106  [NONE]              ,
106  [NONE]              
107  [NONE]              const
107  [NONE]              char
107  [NONE]              *
107  [NONE]              section
107  [FUNC_DEF]          )
107  [NONE]              
108  [FUNC_DEF]          {
108  [NONE]              
109  [NONE]              if
109  [IF]                (
109  [NONE]              conf
109  [NONE]              ==
109  [NONE]              NULL
109  [IF]                )
109  [NONE]              
110  [IF]                {
110  [NONE]              
111  [NONE]              return
111  [NONE]              NULL
111  [NONE]              ;
111  [NONE]              
112  [IF]                }
112  [NONE]              
113  [NONE]              else
113  [NONE]              
114  [ELSE]              {
114  [NONE]              
115  [NONE]              CONF
115  [NONE]              ctmp
115  [NONE]              ;
115  [NONE]              
116  [NONE]              CONF_set_nconf
116  [FUNC_CALL]         (
116  [NONE]              &
116  [NONE]              ctmp
116  [NONE]              ,
116  [NONE]              conf
116  [FUNC_CALL]         )
116  [NONE]              ;
116  [NONE]              
117  [NONE]              return
117  [NONE]              NCONF_get_section
117  [FUNC_CALL]         (
117  [NONE]              &
117  [NONE]              ctmp
117  [NONE]              ,
117  [NONE]              section
117  [FUNC_CALL]         )
117  [NONE]              ;
117  [NONE]              
118  [ELSE]              }
118  [NONE]              
119  [FUNC_DEF]          }
119  [NONE]              
121  [FUNC_DEF]          char
121  [FUNC_DEF]          *
121  [NONE]              CONF_get_string
121  [FUNC_DEF]          (
121  [NONE]              LHASH_OF(CONF_VALUE)
121  [NONE]              *
121  [NONE]              conf
121  [NONE]              ,
121  [NONE]              const
121  [NONE]              char
121  [NONE]              *
121  [NONE]              group
121  [NONE]              ,
121  [NONE]              
122  [NONE]              const
122  [NONE]              char
122  [NONE]              *
122  [NONE]              name
122  [FUNC_DEF]          )
122  [NONE]              
123  [FUNC_DEF]          {
123  [NONE]              
124  [NONE]              if
124  [IF]                (
124  [NONE]              conf
124  [NONE]              ==
124  [NONE]              NULL
124  [IF]                )
124  [NONE]              
125  [IF]                {
125  [NONE]              
126  [NONE]              return
126  [NONE]              NCONF_get_string
126  [FUNC_CALL]         (
126  [NONE]              NULL
126  [NONE]              ,
126  [NONE]              group
126  [NONE]              ,
126  [NONE]              name
126  [FUNC_CALL]         )
126  [NONE]              ;
126  [NONE]              
127  [IF]                }
127  [NONE]              
128  [NONE]              else
128  [NONE]              
129  [ELSE]              {
129  [NONE]              
130  [NONE]              return
130  [NONE]              NCONF_get_string
130  [FUNC_CALL]         (
130  [NONE]              &
130  [NONE]              ctmp
130  [NONE]              ,
130  [NONE]              group
130  [NONE]              ,
130  [NONE]              name
130  [FUNC_CALL]         )
130  [NONE]              ;
130  [NONE]              
131  [ELSE]              }
131  [NONE]              
132  [FUNC_DEF]          }
132  [NONE]              