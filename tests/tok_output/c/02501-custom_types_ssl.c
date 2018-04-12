Line [Token]             Text
1    [PREPROC]           #
1    [PP_IF]             ifndef
1    [WORD]              HEADER_CONF_H
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_DEFINE]         define
2    [MACRO]             HEADER_CONF_H
2    [NEWLINE]           
4    [PREPROC]           #
4    [PP_IF]             ifdef
4    [WORD]              __cplusplus
4    [NEWLINE]           
5    [EXTERN]            extern
5    [STRING]            "C"
5    [NEWLINE]           
6    [PREPROC]           #
6    [PP_ENDIF]          endif
6    [COMMENT]           /* ifdef  __cplusplus */
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
9    [TYPEDEF]           typedef
9    [STRUCT]            struct
9    [NEWLINE]           
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [TYPE]              char
11   [PTR_TYPE]          *
11   [WORD]              section
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [TYPE]              char
12   [PTR_TYPE]          *
12   [WORD]              name
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [TYPE]              char
13   [PTR_TYPE]          *
13   [WORD]              value
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [TYPE]              CONF_VALUE
14   [SEMICOLON]         ;
14   [NEWLINE]           
16   [FUNC_CALL]         DECLARE_STACK_OF
16   [FPAREN_OPEN]       (
16   [WORD]              CONF_VALUE
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [FUNC_CALL]         DECLARE_LHASH_OF
17   [FPAREN_OPEN]       (
17   [WORD]              CONF_VALUE
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           
19   [STRUCT]            struct
19   [TYPE]              conf_st
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [STRUCT]            struct
20   [TYPE]              conf_method_st
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [TYPEDEF]           typedef
21   [STRUCT]            struct
21   [TYPE]              conf_method_st
21   [TYPE]              CONF_METHOD
21   [SEMICOLON]         ;
21   [NEWLINE]           
23   [TYPE]              int
23   [FUNC_PROTO]        CONF_set_default_method
23   [FPAREN_OPEN]       (
23   [TYPE]              CONF_METHOD
23   [PTR_TYPE]          *
23   [WORD]              meth
23   [FPAREN_CLOSE]      )
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [TYPE]              void
24   [FUNC_PROTO]        CONF_set_nconf
24   [FPAREN_OPEN]       (
24   [TYPE]              CONF
24   [PTR_TYPE]          *
24   [WORD]              conf
24   [COMMA]             ,
24   [TYPE]              LHASH_OF(CONF_VALUE)
24   [PTR_TYPE]          *
24   [WORD]              hash
24   [FPAREN_CLOSE]      )
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [TYPE]              LHASH_OF(CONF_VALUE)
25   [PTR_TYPE]          *
25   [FUNC_PROTO]        CONF_load
25   [FPAREN_OPEN]       (
25   [TYPE]              LHASH_OF(CONF_VALUE)
25   [PTR_TYPE]          *
25   [WORD]              conf
25   [COMMA]             ,
25   [QUALIFIER]         const
25   [TYPE]              char
25   [PTR_TYPE]          *
25   [WORD]              file
25   [COMMA]             ,
25   [NEWLINE]           
26   [TYPE]              long
26   [PTR_TYPE]          *
26   [WORD]              eline
26   [FPAREN_CLOSE]      )
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [PREPROC]           #
27   [PP_IF]             ifndef
27   [TYPE]              OPENSSL_NO_FP_API
27   [NEWLINE]           
28   [TYPE]              LHASH_OF(CONF_VALUE)
28   [PTR_TYPE]          *
28   [FUNC_PROTO]        CONF_load_fp
28   [FPAREN_OPEN]       (
28   [TYPE]              LHASH_OF(CONF_VALUE)
28   [PTR_TYPE]          *
28   [WORD]              conf
28   [COMMA]             ,
28   [TYPE]              FILE
28   [PTR_TYPE]          *
28   [WORD]              fp
28   [COMMA]             ,
28   [NEWLINE]           
29   [TYPE]              long
29   [PTR_TYPE]          *
29   [WORD]              eline
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [PREPROC]           #
30   [PP_ENDIF]          endif
30   [COMMENT]           /* ifndef OPENSSL_NO_FP_API */
30   [NEWLINE]           
31   [TYPE]              LHASH_OF(CONF_VALUE)
31   [PTR_TYPE]          *
31   [FUNC_PROTO]        CONF_load_bio
31   [FPAREN_OPEN]       (
31   [TYPE]              LHASH_OF(CONF_VALUE)
31   [PTR_TYPE]          *
31   [WORD]              conf
31   [COMMA]             ,
31   [TYPE]              BIO
31   [PTR_TYPE]          *
31   [WORD]              bp
31   [COMMA]             ,
31   [TYPE]              long
31   [PTR_TYPE]          *
31   [WORD]              eline
31   [FPAREN_CLOSE]      )
31   [SEMICOLON]         ;
31   [NEWLINE]           
32   [TYPE]              STACK_OF(CONF_VALUE)
32   [PTR_TYPE]          *
32   [FUNC_PROTO]        CONF_get_section
32   [FPAREN_OPEN]       (
32   [TYPE]              LHASH_OF(CONF_VALUE)
32   [PTR_TYPE]          *
32   [WORD]              conf
32   [COMMA]             ,
32   [NEWLINE]           
33   [QUALIFIER]         const
33   [TYPE]              char
33   [PTR_TYPE]          *
33   [WORD]              section
33   [FPAREN_CLOSE]      )
33   [SEMICOLON]         ;
33   [NEWLINE]           
34   [TYPE]              char
34   [PTR_TYPE]          *
34   [FUNC_PROTO]        CONF_get_string
34   [FPAREN_OPEN]       (
34   [TYPE]              LHASH_OF(CONF_VALUE)
34   [PTR_TYPE]          *
34   [WORD]              conf
34   [COMMA]             ,
34   [QUALIFIER]         const
34   [TYPE]              char
34   [PTR_TYPE]          *
34   [WORD]              group
34   [COMMA]             ,
34   [NEWLINE]           
35   [QUALIFIER]         const
35   [TYPE]              char
35   [PTR_TYPE]          *
35   [WORD]              name
35   [FPAREN_CLOSE]      )
35   [SEMICOLON]         ;
35   [NEWLINE]           
36   [TYPE]              long
36   [FUNC_PROTO]        CONF_get_number
36   [FPAREN_OPEN]       (
36   [TYPE]              LHASH_OF(CONF_VALUE)
36   [PTR_TYPE]          *
36   [WORD]              conf
36   [COMMA]             ,
36   [QUALIFIER]         const
36   [TYPE]              char
36   [PTR_TYPE]          *
36   [WORD]              group
36   [COMMA]             ,
36   [NEWLINE]           
37   [QUALIFIER]         const
37   [TYPE]              char
37   [PTR_TYPE]          *
37   [WORD]              name
37   [FPAREN_CLOSE]      )
37   [SEMICOLON]         ;
37   [NEWLINE]           
38   [TYPE]              void
38   [FUNC_PROTO]        CONF_free
38   [FPAREN_OPEN]       (
38   [TYPE]              LHASH_OF(CONF_VALUE)
38   [PTR_TYPE]          *
38   [WORD]              conf
38   [FPAREN_CLOSE]      )
38   [SEMICOLON]         ;
38   [NEWLINE]           
39   [TYPE]              int
39   [FUNC_PROTO]        CONF_dump_fp
39   [FPAREN_OPEN]       (
39   [TYPE]              LHASH_OF(CONF_VALUE)
39   [PTR_TYPE]          *
39   [WORD]              conf
39   [COMMA]             ,
39   [TYPE]              FILE
39   [PTR_TYPE]          *
39   [WORD]              out
39   [FPAREN_CLOSE]      )
39   [SEMICOLON]         ;
39   [NEWLINE]           
40   [TYPE]              int
40   [FUNC_PROTO]        CONF_dump_bio
40   [FPAREN_OPEN]       (
40   [TYPE]              LHASH_OF(CONF_VALUE)
40   [PTR_TYPE]          *
40   [WORD]              conf
40   [COMMA]             ,
40   [TYPE]              BIO
40   [PTR_TYPE]          *
40   [WORD]              out
40   [FPAREN_CLOSE]      )
40   [SEMICOLON]         ;
40   [NEWLINE]           
43   [BRACE_CLOSE]       }
43   [NEWLINE]           
46   [TYPE]              void
46   [FUNC_DEF]          CONF_set_nconf
46   [FPAREN_OPEN]       (
46   [TYPE]              CONF
46   [PTR_TYPE]          *
46   [WORD]              conf
46   [COMMA]             ,
46   [TYPE]              LHASH_OF(CONF_VALUE)
46   [PTR_TYPE]          *
46   [WORD]              hash
46   [FPAREN_CLOSE]      )
46   [NEWLINE]           
47   [BRACE_OPEN]        {
47   [NEWLINE]           
48   [IF]                if
48   [SPAREN_OPEN]       (
48   [WORD]              default_CONF_method
48   [COMPARE]           ==
48   [WORD]              NULL
48   [SPAREN_CLOSE]      )
48   [VBRACE_OPEN]       
48   [NEWLINE]           
49   [WORD]              default_CONF_method
49   [ASSIGN]            =
49   [FUNC_CALL]         NCONF_default
49   [FPAREN_OPEN]       (
49   [FPAREN_CLOSE]      )
49   [SEMICOLON]         ;
49   [VBRACE_CLOSE]      
49   [NEWLINE]           
51   [TYPE]              default_CONF_method
51   [MEMBER]            ->
51   [FUNC_CALL]         init
51   [FPAREN_OPEN]       (
51   [WORD]              conf
51   [FPAREN_CLOSE]      )
51   [SEMICOLON]         ;
51   [NEWLINE]           
52   [TYPE]              conf
52   [MEMBER]            ->
52   [WORD]              data
52   [ASSIGN]            =
52   [WORD]              hash
52   [SEMICOLON]         ;
52   [NEWLINE]           
53   [BRACE_CLOSE]       }
53   [NEWLINE]           
56   [TYPE]              LHASH_OF(CONF_VALUE)
56   [PTR_TYPE]          *
56   [FUNC_DEF]          CONF_load
56   [FPAREN_OPEN]       (
56   [TYPE]              LHASH_OF(CONF_VALUE)
56   [PTR_TYPE]          *
56   [WORD]              conf
56   [COMMA]             ,
56   [QUALIFIER]         const
56   [TYPE]              char
56   [PTR_TYPE]          *
56   [WORD]              file
56   [COMMA]             ,
56   [NEWLINE]           
57   [TYPE]              long
57   [PTR_TYPE]          *
57   [WORD]              eline
57   [FPAREN_CLOSE]      )
57   [NEWLINE]           
58   [BRACE_OPEN]        {
58   [NEWLINE]           
59   [TYPE]              LHASH_OF(CONF_VALUE)
59   [PTR_TYPE]          *
59   [WORD]              ltmp
59   [SEMICOLON]         ;
59   [NEWLINE]           
60   [TYPE]              BIO
60   [PTR_TYPE]          *
60   [WORD]              in
60   [ASSIGN]            =
60   [WORD]              NULL
60   [SEMICOLON]         ;
60   [NEWLINE]           
62   [PREPROC]           #
62   [PP_IF]             ifdef
62   [TYPE]              OPENSSL_SYS_VMS
62   [NEWLINE]           
63   [WORD]              in
63   [ASSIGN]            =
63   [FUNC_CALL]         BIO_new_file
63   [FPAREN_OPEN]       (
63   [WORD]              file
63   [COMMA]             ,
63   [STRING]            "r"
63   [FPAREN_CLOSE]      )
63   [SEMICOLON]         ;
63   [NEWLINE]           
64   [PREPROC]           #
64   [PP_ELSE]           else
64   [COMMENT]            /* ifdef OPENSSL_SYS_VMS */
64   [NEWLINE]           
65   [WORD]              in
65   [ASSIGN]            =
65   [FUNC_CALL]         BIO_new_file
65   [FPAREN_OPEN]       (
65   [WORD]              file
65   [COMMA]             ,
65   [STRING]            "rb"
65   [FPAREN_CLOSE]      )
65   [SEMICOLON]         ;
65   [NEWLINE]           
66   [PREPROC]           #
66   [PP_ENDIF]          endif
66   [COMMENT]           /* ifdef OPENSSL_SYS_VMS */
66   [NEWLINE]           
67   [IF]                if
67   [SPAREN_OPEN]       (
67   [WORD]              in
67   [COMPARE]           ==
67   [WORD]              NULL
67   [SPAREN_CLOSE]      )
67   [NEWLINE]           
68   [BRACE_OPEN]        {
68   [NEWLINE]           
69   [FUNC_CALL]         CONFerr
69   [FPAREN_OPEN]       (
69   [WORD]              CONF_F_CONF_LOAD
69   [COMMA]             ,
69   [WORD]              ERR_R_SYS_LIB
69   [FPAREN_CLOSE]      )
69   [SEMICOLON]         ;
69   [NEWLINE]           
70   [RETURN]            return
70   [WORD]              NULL
70   [SEMICOLON]         ;
70   [NEWLINE]           
71   [BRACE_CLOSE]       }
71   [NEWLINE]           
73   [RETURN]            return
73   [WORD]              ltmp
73   [SEMICOLON]         ;
73   [NEWLINE]           
74   [BRACE_CLOSE]       }
74   [NEWLINE]           
76   [PREPROC]           #
76   [PP_IF]             ifndef
76   [TYPE]              OPENSSL_NO_FP_API
76   [NEWLINE]           
77   [TYPE]              LHASH_OF(CONF_VALUE)
77   [PTR_TYPE]          *
77   [FUNC_DEF]          CONF_load_fp
77   [FPAREN_OPEN]       (
77   [TYPE]              LHASH_OF(CONF_VALUE)
77   [PTR_TYPE]          *
77   [WORD]              conf
77   [COMMA]             ,
77   [TYPE]              FILE
77   [PTR_TYPE]          *
77   [WORD]              fp
77   [COMMA]             ,
77   [NEWLINE]           
78   [TYPE]              long
78   [PTR_TYPE]          *
78   [WORD]              eline
78   [FPAREN_CLOSE]      )
78   [NEWLINE]           
79   [BRACE_OPEN]        {
79   [NEWLINE]           
80   [TYPE]              BIO
80   [PTR_TYPE]          *
80   [WORD]              btmp
80   [SEMICOLON]         ;
80   [NEWLINE]           
81   [TYPE]              LHASH_OF(CONF_VALUE)
81   [PTR_TYPE]          *
81   [WORD]              ltmp
81   [SEMICOLON]         ;
81   [NEWLINE]           
82   [IF]                if
82   [SPAREN_OPEN]       (
82   [NOT]               !
82   [PAREN_OPEN]        (
82   [WORD]              btmp
82   [ASSIGN]            =
82   [FUNC_CALL]         BIO_new_fp
82   [FPAREN_OPEN]       (
82   [WORD]              fp
82   [COMMA]             ,
82   [WORD]              BIO_NOCLOSE
82   [FPAREN_CLOSE]      )
82   [PAREN_CLOSE]       )
82   [SPAREN_CLOSE]      )
82   [NEWLINE]           
82   [BRACE_OPEN]        {
82   [NEWLINE]           
83   [FUNC_CALL]         CONFerr
83   [FPAREN_OPEN]       (
83   [WORD]              CONF_F_CONF_LOAD_FP
83   [COMMA]             ,
83   [WORD]              ERR_R_BUF_LIB
83   [FPAREN_CLOSE]      )
83   [SEMICOLON]         ;
83   [NEWLINE]           
84   [RETURN]            return
84   [WORD]              NULL
84   [SEMICOLON]         ;
84   [NEWLINE]           
85   [BRACE_CLOSE]       }
85   [NEWLINE]           
86   [WORD]              ltmp
86   [ASSIGN]            =
86   [FUNC_CALL]         CONF_load_bio
86   [FPAREN_OPEN]       (
86   [WORD]              conf
86   [COMMA]             ,
86   [WORD]              btmp
86   [COMMA]             ,
86   [WORD]              eline
86   [FPAREN_CLOSE]      )
86   [SEMICOLON]         ;
86   [NEWLINE]           
87   [FUNC_CALL]         BIO_free
87   [FPAREN_OPEN]       (
87   [WORD]              btmp
87   [FPAREN_CLOSE]      )
87   [SEMICOLON]         ;
87   [NEWLINE]           
88   [RETURN]            return
88   [WORD]              ltmp
88   [SEMICOLON]         ;
88   [NEWLINE]           
89   [BRACE_CLOSE]       }
89   [NEWLINE]           
90   [PREPROC]           #
90   [PP_ENDIF]          endif
90   [COMMENT]           /* ifndef OPENSSL_NO_FP_API */
90   [NEWLINE]           
92   [TYPE]              LHASH_OF(CONF_VALUE)
92   [PTR_TYPE]          *
92   [FUNC_DEF]          CONF_load_bio
92   [FPAREN_OPEN]       (
92   [TYPE]              LHASH_OF(CONF_VALUE)
92   [PTR_TYPE]          *
92   [WORD]              conf
92   [COMMA]             ,
92   [TYPE]              BIO
92   [PTR_TYPE]          *
92   [WORD]              bp
92   [COMMA]             ,
92   [NEWLINE]           
93   [TYPE]              long
93   [PTR_TYPE]          *
93   [WORD]              eline
93   [FPAREN_CLOSE]      )
93   [NEWLINE]           
94   [BRACE_OPEN]        {
94   [NEWLINE]           
95   [TYPE]              CONF
95   [WORD]              ctmp
95   [SEMICOLON]         ;
95   [NEWLINE]           
96   [TYPE]              int
96   [WORD]              ret
96   [SEMICOLON]         ;
96   [NEWLINE]           
98   [FUNC_CALL]         CONF_set_nconf
98   [FPAREN_OPEN]       (
98   [ADDR]              &
98   [WORD]              ctmp
98   [COMMA]             ,
98   [WORD]              conf
98   [FPAREN_CLOSE]      )
98   [SEMICOLON]         ;
98   [NEWLINE]           
100  [WORD]              ret
100  [ASSIGN]            =
100  [FUNC_CALL]         NCONF_load_bio
100  [FPAREN_OPEN]       (
100  [ADDR]              &
100  [WORD]              ctmp
100  [COMMA]             ,
100  [WORD]              bp
100  [COMMA]             ,
100  [WORD]              eline
100  [FPAREN_CLOSE]      )
100  [SEMICOLON]         ;
100  [NEWLINE]           
101  [IF]                if
101  [SPAREN_OPEN]       (
101  [WORD]              ret
101  [SPAREN_CLOSE]      )
101  [VBRACE_OPEN]       
101  [NEWLINE]           
102  [RETURN]            return
102  [WORD]              ctmp
102  [MEMBER]            .
102  [WORD]              data
102  [SEMICOLON]         ;
102  [VBRACE_CLOSE]      
102  [NEWLINE]           
103  [RETURN]            return
103  [WORD]              NULL
103  [SEMICOLON]         ;
103  [NEWLINE]           
104  [BRACE_CLOSE]       }
104  [NEWLINE]           
106  [TYPE]              STACK_OF(CONF_VALUE)
106  [PTR_TYPE]          *
106  [FUNC_DEF]          CONF_get_section
106  [FPAREN_OPEN]       (
106  [TYPE]              LHASH_OF(CONF_VALUE)
106  [PTR_TYPE]          *
106  [WORD]              conf
106  [COMMA]             ,
106  [NEWLINE]           
107  [QUALIFIER]         const
107  [TYPE]              char
107  [PTR_TYPE]          *
107  [WORD]              section
107  [FPAREN_CLOSE]      )
107  [NEWLINE]           
108  [BRACE_OPEN]        {
108  [NEWLINE]           
109  [IF]                if
109  [SPAREN_OPEN]       (
109  [WORD]              conf
109  [COMPARE]           ==
109  [WORD]              NULL
109  [SPAREN_CLOSE]      )
109  [NEWLINE]           
110  [BRACE_OPEN]        {
110  [NEWLINE]           
111  [RETURN]            return
111  [WORD]              NULL
111  [SEMICOLON]         ;
111  [NEWLINE]           
112  [BRACE_CLOSE]       }
112  [NEWLINE]           
113  [ELSE]              else
113  [NEWLINE]           
114  [BRACE_OPEN]        {
114  [NEWLINE]           
115  [TYPE]              CONF
115  [WORD]              ctmp
115  [SEMICOLON]         ;
115  [NEWLINE]           
116  [FUNC_CALL]         CONF_set_nconf
116  [FPAREN_OPEN]       (
116  [ADDR]              &
116  [WORD]              ctmp
116  [COMMA]             ,
116  [WORD]              conf
116  [FPAREN_CLOSE]      )
116  [SEMICOLON]         ;
116  [NEWLINE]           
117  [RETURN]            return
117  [FUNC_CALL]         NCONF_get_section
117  [FPAREN_OPEN]       (
117  [ADDR]              &
117  [WORD]              ctmp
117  [COMMA]             ,
117  [WORD]              section
117  [FPAREN_CLOSE]      )
117  [SEMICOLON]         ;
117  [NEWLINE]           
118  [BRACE_CLOSE]       }
118  [NEWLINE]           
119  [BRACE_CLOSE]       }
119  [NEWLINE]           
121  [TYPE]              char
121  [PTR_TYPE]          *
121  [FUNC_DEF]          CONF_get_string
121  [FPAREN_OPEN]       (
121  [TYPE]              LHASH_OF(CONF_VALUE)
121  [PTR_TYPE]          *
121  [WORD]              conf
121  [COMMA]             ,
121  [QUALIFIER]         const
121  [TYPE]              char
121  [PTR_TYPE]          *
121  [WORD]              group
121  [COMMA]             ,
121  [NEWLINE]           
122  [QUALIFIER]         const
122  [TYPE]              char
122  [PTR_TYPE]          *
122  [WORD]              name
122  [FPAREN_CLOSE]      )
122  [NEWLINE]           
123  [BRACE_OPEN]        {
123  [NEWLINE]           
124  [IF]                if
124  [SPAREN_OPEN]       (
124  [WORD]              conf
124  [COMPARE]           ==
124  [WORD]              NULL
124  [SPAREN_CLOSE]      )
124  [NEWLINE]           
125  [BRACE_OPEN]        {
125  [NEWLINE]           
126  [RETURN]            return
126  [FUNC_CALL]         NCONF_get_string
126  [FPAREN_OPEN]       (
126  [WORD]              NULL
126  [COMMA]             ,
126  [WORD]              group
126  [COMMA]             ,
126  [WORD]              name
126  [FPAREN_CLOSE]      )
126  [SEMICOLON]         ;
126  [NEWLINE]           
127  [BRACE_CLOSE]       }
127  [NEWLINE]           
128  [ELSE]              else
128  [NEWLINE]           
129  [BRACE_OPEN]        {
129  [NEWLINE]           
130  [RETURN]            return
130  [FUNC_CALL]         NCONF_get_string
130  [FPAREN_OPEN]       (
130  [ADDR]              &
130  [WORD]              ctmp
130  [COMMA]             ,
130  [WORD]              group
130  [COMMA]             ,
130  [WORD]              name
130  [FPAREN_CLOSE]      )
130  [SEMICOLON]         ;
130  [NEWLINE]           
131  [BRACE_CLOSE]       }
131  [NEWLINE]           
132  [BRACE_CLOSE]       }
132  [NEWLINE]           