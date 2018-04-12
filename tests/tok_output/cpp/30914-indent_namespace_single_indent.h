Line [Token]             Text
1    [NAMESPACE]         namespace
1    [WORD]              ns1
1    [BRACE_OPEN]        {
1    [NEWLINE]           
2    [NAMESPACE]         namespace
2    [WORD]              ns2
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [NAMESPACE]         namespace
3    [WORD]              ns3
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [TYPE]              void
4    [FUNC_PROTO]        a
4    [FPAREN_OPEN]       (
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
9    [EXTERN]            extern
9    [STRING]            "C"
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [NAMESPACE]         namespace
10   [WORD]              ns1
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [NAMESPACE]         namespace
11   [WORD]              ns2
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [NAMESPACE]         namespace
12   [WORD]              ns3
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [TYPE]              void
13   [FUNC_PROTO]        b
13   [FPAREN_OPEN]       (
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
19   [NAMESPACE]         namespace
19   [WORD]              ns1
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [EXTERN]            extern
20   [STRING]            "C"
20   [BRACE_OPEN]        {
20   [NEWLINE]           
21   [NAMESPACE]         namespace
21   [WORD]              ns2
21   [BRACE_OPEN]        {
21   [NEWLINE]           
22   [NAMESPACE]         namespace
22   [WORD]              ns3
22   [BRACE_OPEN]        {
22   [NEWLINE]           
23   [TYPE]              void
23   [FUNC_PROTO]        c
23   [FPAREN_OPEN]       (
23   [FPAREN_CLOSE]      )
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [NEWLINE]           
25   [BRACE_CLOSE]       }
25   [NEWLINE]           
26   [BRACE_CLOSE]       }
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
29   [NAMESPACE]         namespace
29   [WORD]              ns1
29   [BRACE_OPEN]        {
29   [NEWLINE]           
30   [NAMESPACE]         namespace
30   [WORD]              ns2
30   [BRACE_OPEN]        {
30   [NEWLINE]           
31   [EXTERN]            extern
31   [STRING]            "C"
31   [BRACE_OPEN]        {
31   [NEWLINE]           
32   [NAMESPACE]         namespace
32   [WORD]              ns3
32   [BRACE_OPEN]        {
32   [NEWLINE]           
33   [TYPE]              void
33   [FUNC_PROTO]        d
33   [FPAREN_OPEN]       (
33   [FPAREN_CLOSE]      )
33   [SEMICOLON]         ;
33   [NEWLINE]           
34   [BRACE_CLOSE]       }
34   [NEWLINE]           
35   [BRACE_CLOSE]       }
35   [NEWLINE]           
36   [BRACE_CLOSE]       }
36   [NEWLINE]           
37   [BRACE_CLOSE]       }
37   [NEWLINE]           
39   [NAMESPACE]         namespace
39   [WORD]              ns1
39   [BRACE_OPEN]        {
39   [NEWLINE]           
40   [NAMESPACE]         namespace
40   [WORD]              ns2
40   [BRACE_OPEN]        {
40   [NEWLINE]           
41   [NAMESPACE]         namespace
41   [WORD]              ns3
41   [BRACE_OPEN]        {
41   [NEWLINE]           
42   [EXTERN]            extern
42   [STRING]            "C"
42   [BRACE_OPEN]        {
42   [NEWLINE]           
43   [TYPE]              void
43   [FUNC_PROTO]        e
43   [FPAREN_OPEN]       (
43   [FPAREN_CLOSE]      )
43   [SEMICOLON]         ;
43   [NEWLINE]           
44   [BRACE_CLOSE]       }
44   [NEWLINE]           
45   [BRACE_CLOSE]       }
45   [NEWLINE]           
46   [BRACE_CLOSE]       }
46   [NEWLINE]           
47   [BRACE_CLOSE]       }
47   [NEWLINE]           
49   [PREPROC]           #
49   [PP_DEFINE]         define
49   [MACRO_FUNC]        M1
49   [FPAREN_OPEN]       (
49   [WORD]              ns1
49   [COMMA]             ,
49   [WORD]              ns2
49   [COMMA]             ,
49   [WORD]              ns3
49   [COMMA]             ,
49   [WORD]              f
49   [FPAREN_CLOSE]      )
49   [NL_CONT]           \
50   [NAMESPACE]         namespace
50   [WORD]              ns1
50   [BRACE_OPEN]        {
50   [NL_CONT]           \
51   [NAMESPACE]         namespace
51   [WORD]              ns2
51   [BRACE_OPEN]        {
51   [NL_CONT]           \
52   [NAMESPACE]         namespace
52   [WORD]              ns3
52   [BRACE_OPEN]        {
52   [NL_CONT]           \
53   [TYPE]              void
53   [FUNC_CALL]         f
53   [FPAREN_OPEN]       (
53   [FPAREN_CLOSE]      )
53   [SEMICOLON]         ;
53   [NL_CONT]           \
54   [BRACE_CLOSE]       }
54   [NL_CONT]           \
55   [BRACE_CLOSE]       }
55   [NL_CONT]           \
56   [BRACE_CLOSE]       }
56   [NEWLINE]           
58   [PREPROC]           #
58   [PP_DEFINE]         define
58   [MACRO_FUNC]        M2
58   [FPAREN_OPEN]       (
58   [WORD]              ns1
58   [COMMA]             ,
58   [WORD]              ns2
58   [COMMA]             ,
58   [WORD]              ns3
58   [COMMA]             ,
58   [WORD]              f
58   [FPAREN_CLOSE]      )
58   [NL_CONT]           \
59   [EXTERN]            extern
59   [STRING]            "C"
59   [BRACE_OPEN]        {
59   [NL_CONT]           \
60   [NAMESPACE]         namespace
60   [WORD]              ns1
60   [BRACE_OPEN]        {
60   [NL_CONT]           \
61   [NAMESPACE]         namespace
61   [WORD]              ns2
61   [BRACE_OPEN]        {
61   [NL_CONT]           \
62   [NAMESPACE]         namespace
62   [WORD]              ns3
62   [BRACE_OPEN]        {
62   [NL_CONT]           \
63   [TYPE]              void
63   [FUNC_CALL]         b
63   [FPAREN_OPEN]       (
63   [FPAREN_CLOSE]      )
63   [SEMICOLON]         ;
63   [NL_CONT]           \
64   [BRACE_CLOSE]       }
64   [NL_CONT]           \
65   [BRACE_CLOSE]       }
65   [NL_CONT]           \
66   [BRACE_CLOSE]       }
66   [NL_CONT]           \
67   [BRACE_CLOSE]       }
67   [NEWLINE]           
69   [PREPROC]           #
69   [PP_DEFINE]         define
69   [MACRO_FUNC]        M3
69   [FPAREN_OPEN]       (
69   [WORD]              ns1
69   [COMMA]             ,
69   [WORD]              ns2
69   [COMMA]             ,
69   [WORD]              ns3
69   [COMMA]             ,
69   [WORD]              f
69   [FPAREN_CLOSE]      )
69   [NL_CONT]           \
70   [NAMESPACE]         namespace
70   [WORD]              ns1
70   [BRACE_OPEN]        {
70   [NL_CONT]           \
71   [EXTERN]            extern
71   [STRING]            "C"
71   [BRACE_OPEN]        {
71   [NL_CONT]           \
72   [NAMESPACE]         namespace
72   [WORD]              ns2
72   [BRACE_OPEN]        {
72   [NL_CONT]           \
73   [NAMESPACE]         namespace
73   [WORD]              ns3
73   [BRACE_OPEN]        {
73   [NL_CONT]           \
74   [TYPE]              void
74   [FUNC_CALL]         c
74   [FPAREN_OPEN]       (
74   [FPAREN_CLOSE]      )
74   [SEMICOLON]         ;
74   [NL_CONT]           \
75   [BRACE_CLOSE]       }
75   [NL_CONT]           \
76   [BRACE_CLOSE]       }
76   [NL_CONT]           \
77   [BRACE_CLOSE]       }
77   [NL_CONT]           \
78   [BRACE_CLOSE]       }
78   [NEWLINE]           
80   [PREPROC]           #
80   [PP_DEFINE]         define
80   [MACRO_FUNC]        M4
80   [FPAREN_OPEN]       (
80   [WORD]              ns1
80   [COMMA]             ,
80   [WORD]              ns2
80   [COMMA]             ,
80   [WORD]              ns3
80   [COMMA]             ,
80   [WORD]              f
80   [FPAREN_CLOSE]      )
80   [NL_CONT]           \
81   [NAMESPACE]         namespace
81   [WORD]              ns1
81   [BRACE_OPEN]        {
81   [NL_CONT]           \
82   [NAMESPACE]         namespace
82   [WORD]              ns2
82   [BRACE_OPEN]        {
82   [NL_CONT]           \
83   [EXTERN]            extern
83   [STRING]            "C"
83   [BRACE_OPEN]        {
83   [NL_CONT]           \
84   [NAMESPACE]         namespace
84   [WORD]              ns3
84   [BRACE_OPEN]        {
84   [NL_CONT]           \
85   [TYPE]              void
85   [FUNC_CALL]         d
85   [FPAREN_OPEN]       (
85   [FPAREN_CLOSE]      )
85   [SEMICOLON]         ;
85   [NL_CONT]           \
86   [BRACE_CLOSE]       }
86   [NL_CONT]           \
87   [BRACE_CLOSE]       }
87   [NL_CONT]           \
88   [BRACE_CLOSE]       }
88   [NL_CONT]           \
89   [BRACE_CLOSE]       }
89   [NEWLINE]           
91   [PREPROC]           #
91   [PP_DEFINE]         define
91   [MACRO_FUNC]        M5
91   [FPAREN_OPEN]       (
91   [WORD]              ns1
91   [COMMA]             ,
91   [WORD]              ns2
91   [COMMA]             ,
91   [WORD]              ns3
91   [COMMA]             ,
91   [WORD]              f
91   [FPAREN_CLOSE]      )
91   [NL_CONT]           \
92   [NAMESPACE]         namespace
92   [WORD]              ns1
92   [BRACE_OPEN]        {
92   [NL_CONT]           \
93   [NAMESPACE]         namespace
93   [WORD]              ns2
93   [BRACE_OPEN]        {
93   [NL_CONT]           \
94   [NAMESPACE]         namespace
94   [WORD]              ns3
94   [BRACE_OPEN]        {
94   [NL_CONT]           \
95   [EXTERN]            extern
95   [STRING]            "C"
95   [BRACE_OPEN]        {
95   [NL_CONT]           \
96   [TYPE]              void
96   [FUNC_CALL]         e
96   [FPAREN_OPEN]       (
96   [FPAREN_CLOSE]      )
96   [SEMICOLON]         ;
96   [NL_CONT]           \
97   [BRACE_CLOSE]       }
97   [NL_CONT]           \
98   [BRACE_CLOSE]       }
98   [NL_CONT]           \
99   [BRACE_CLOSE]       }
99   [NL_CONT]           \
100  [BRACE_CLOSE]       }
100  [NEWLINE]           