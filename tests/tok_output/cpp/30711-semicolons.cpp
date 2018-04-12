Line [Token]             Text
1    [QUALIFIER]         static
1    [TYPE]              int
1    [FUNC_PROTO]        foo
1    [FPAREN_OPEN]       (
1    [TYPE]              int
1    [WORD]              bar
1    [FPAREN_CLOSE]      )
1    [SEMICOLON]         ;
1    [NEWLINE]           
3    [QUALIFIER]         static
3    [TYPE]              int
3    [FUNC_DEF]          foo
3    [FPAREN_OPEN]       (
3    [TYPE]              int
3    [WORD]              bar
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [FOR]               for
5    [SPAREN_OPEN]       (
5    [SEMICOLON]         ;
5    [SEMICOLON]         ;
5    [SPAREN_CLOSE]      )
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [BREAK]             break
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
9    [IF]                if
9    [SPAREN_OPEN]       (
9    [WORD]              a
9    [SPAREN_CLOSE]      )
9    [NEWLINE]           
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [FUNC_CALL]         foo
11   [FPAREN_OPEN]       (
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [NEWLINE]           
14   [IF]                if
14   [SPAREN_OPEN]       (
14   [WORD]              b
14   [SPAREN_CLOSE]      )
14   [VBRACE_OPEN]       
14   [NEWLINE]           
15   [IF]                if
15   [SPAREN_OPEN]       (
15   [WORD]              c
15   [SPAREN_CLOSE]      )
15   [VBRACE_OPEN]       
15   [NEWLINE]           
16   [FUNC_CALL]         bar
16   [FPAREN_OPEN]       (
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [VBRACE_CLOSE]      
16   [NEWLINE]           
17   [ELSE]              else
17   [VBRACE_OPEN]       
17   [NEWLINE]           
18   [SEMICOLON]         ;
18   [VBRACE_CLOSE]      
18   [VBRACE_CLOSE]      
18   [NEWLINE]           
20   [ELSE]              else
20   [NEWLINE]           
21   [BRACE_OPEN]        {
21   [NEWLINE]           
22   [FUNC_CALL]         foo
22   [FPAREN_OPEN]       (
22   [FPAREN_CLOSE]      )
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           
24   [SWITCH]            switch
24   [SPAREN_OPEN]       (
24   [WORD]              a
24   [SPAREN_CLOSE]      )
24   [NEWLINE]           
25   [BRACE_OPEN]        {
25   [NEWLINE]           
26   [CASE]              case
26   [NUMBER]            1
26   [CASE_COLON]        :
26   [BREAK]             break
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [CASE]              case
27   [NUMBER]            2
27   [CASE_COLON]        :
27   [BREAK]             break
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [CASE]              default
28   [CASE_COLON]        :
28   [BREAK]             break
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [BRACE_CLOSE]       }
29   [NEWLINE]           
30   [WHILE]             while
30   [SPAREN_OPEN]       (
30   [WORD]              b
30   [INCDEC_AFTER]      --
30   [COMPARE]           >
30   [NUMBER]            0
30   [SPAREN_CLOSE]      )
30   [NEWLINE]           
31   [BRACE_OPEN]        {
31   [NEWLINE]           
32   [FUNC_CALL]         bar
32   [FPAREN_OPEN]       (
32   [FPAREN_CLOSE]      )
32   [SEMICOLON]         ;
32   [NEWLINE]           
33   [BRACE_CLOSE]       }
33   [NEWLINE]           
34   [DO]                do
34   [NEWLINE]           
35   [BRACE_OPEN]        {
35   [NEWLINE]           
36   [FUNC_CALL]         bar
36   [FPAREN_OPEN]       (
36   [FPAREN_CLOSE]      )
36   [SEMICOLON]         ;
36   [NEWLINE]           
37   [BRACE_CLOSE]       }
37   [WHILE_OF_DO]       while
37   [SPAREN_OPEN]       (
37   [WORD]              b
37   [INCDEC_AFTER]      --
37   [COMPARE]           >
37   [NUMBER]            0
37   [SPAREN_CLOSE]      )
37   [SEMICOLON]         ;
37   [NEWLINE]           
38   [BRACE_CLOSE]       }
38   [NEWLINE]           
40   [ENUM]              enum
40   [TYPE]              FPP
40   [BRACE_OPEN]        {
40   [NEWLINE]           
41   [WORD]              FPP_ONE
41   [ASSIGN]            =
41   [NUMBER]            1
41   [COMMA]             ,
41   [NEWLINE]           
42   [WORD]              FPP_TWO
42   [ASSIGN]            =
42   [NUMBER]            2
42   [COMMA]             ,
42   [NEWLINE]           
43   [BRACE_CLOSE]       }
43   [SEMICOLON]         ;
43   [NEWLINE]           
45   [STRUCT]            struct
45   [TYPE]              narg
45   [BRACE_OPEN]        {
45   [NEWLINE]           
46   [TYPE]              int
46   [WORD]              abc
46   [SEMICOLON]         ;
46   [NEWLINE]           
47   [TYPE]              char
47   [WORD]              def
47   [SEMICOLON]         ;
48   [NEWLINE]           
49   [QUALIFIER]         const
49   [TYPE]              char
49   [PTR_TYPE]          *
49   [WORD]              ghi
49   [SEMICOLON]         ;
49   [NEWLINE]           
50   [BRACE_CLOSE]       }
50   [SEMICOLON]         ;
50   [NEWLINE]           
52   [CLASS]             class
52   [TYPE]              CFooRun
52   [BRACE_OPEN]        {
52   [NEWLINE]           
53   [TYPE]              long
53   [FUNC_PROTO]        stick
53   [FPAREN_OPEN]       (
53   [FPAREN_CLOSE]      )
53   [SEMICOLON]         ;
53   [NEWLINE]           
54   [TYPE]              int
54   [FUNC_DEF]          bar
54   [FPAREN_OPEN]       (
54   [FPAREN_CLOSE]      )
54   [BRACE_OPEN]        {
54   [NEWLINE]           
54   [WORD]              m_ick
54   [INCDEC_AFTER]      ++
54   [SEMICOLON]         ;
54   [NEWLINE]           
54   [BRACE_CLOSE]       }
54   [NEWLINE]           
56   [FUNC_CLASS_PROTO]    CFooRun
56   [FPAREN_OPEN]       (
56   [FPAREN_CLOSE]      )
56   [SEMICOLON]         ;
56   [NEWLINE]           
57   [DESTRUCTOR]        ~
57   [FUNC_CLASS_DEF]    CFooRun
57   [FPAREN_OPEN]       (
57   [FPAREN_CLOSE]      )
57   [BRACE_OPEN]        {
57   [NEWLINE]           
57   [BRACE_CLOSE]       }
57   [NEWLINE]           
58   [BRACE_CLOSE]       }
58   [SEMICOLON]         ;
58   [NEWLINE]           
60   [TYPE]              void
60   [FUNC_DEF]          f
60   [FPAREN_OPEN]       (
60   [FPAREN_CLOSE]      )
60   [NEWLINE]           
61   [BRACE_OPEN]        {
61   [NEWLINE]           
62   [IF]                if
62   [SPAREN_OPEN]       (
62   [WORD]              tmp
62   [SQUARE_OPEN]       [
62   [NUMBER]            0
62   [SQUARE_CLOSE]      ]
62   [COMPARE]           ==
62   [STRING]            "disk"
62   [SPAREN_CLOSE]      )
62   [NEWLINE]           
63   [BRACE_OPEN]        {
63   [NEWLINE]           
64   [WORD]              tmp
64   [ASSIGN]            =
64   [FUNC_CALL]         split
64   [FPAREN_OPEN]       (
64   [WORD]              tmp
64   [SQUARE_OPEN]       [
64   [NUMBER]            1
64   [SQUARE_CLOSE]      ]
64   [COMMA]             ,
64   [STRING]            ","
64   [FPAREN_CLOSE]      )
64   [SEMICOLON]         ;
64   [NEWLINE]           
65   [TYPE]              DiskEntry
65   [WORD]              entry
65   [ASSIGN]            =
65   [BRACE_OPEN]        {
65   [WORD]              tmp
65   [SQUARE_OPEN]       [
65   [NUMBER]            0
65   [SQUARE_CLOSE]      ]
65   [COMMA]             ,
65   [WORD]              tmp
65   [SQUARE_OPEN]       [
65   [NUMBER]            2
65   [SQUARE_CLOSE]      ]
65   [COMMA]             ,
65   [NEWLINE]           
66   [TYPE]              stxxl
66   [DC_MEMBER]         ::
66   [FUNC_CALL]         int64
66   [FPAREN_OPEN]       (
66   [FUNC_CALL]         str2int
66   [FPAREN_OPEN]       (
66   [WORD]              tmp
66   [SQUARE_OPEN]       [
66   [NUMBER]            1
66   [SQUARE_CLOSE]      ]
66   [FPAREN_CLOSE]      )
66   [FPAREN_CLOSE]      )
66   [ARITH]             *
66   [NEWLINE]           
67   [TYPE]              stxxl
67   [DC_MEMBER]         ::
67   [FUNC_CALL]         int64
67   [FPAREN_OPEN]       (
67   [NUMBER]            1024
67   [ARITH]             *
67   [NUMBER]            1024
67   [FPAREN_CLOSE]      )
67   [BRACE_CLOSE]       }
67   [SEMICOLON]         ;
67   [NEWLINE]           
68   [TYPE]              disks_props
68   [MEMBER]            .
68   [FUNC_CALL]         push_back
68   [FPAREN_OPEN]       (
68   [WORD]              entry
68   [FPAREN_CLOSE]      )
68   [SEMICOLON]         ;
68   [NEWLINE]           
69   [BRACE_CLOSE]       }
69   [NEWLINE]           
70   [BRACE_CLOSE]       }
70   [NEWLINE]           
72   [TEMPLATE]          template
72   [ANGLE_OPEN]        <
72   [WORD]              class
72   [ANGLE_CLOSE]       >
72   [STRUCT]            struct
72   [TYPE]              type
72   [SEMICOLON]         ;
72   [NEWLINE]           
74   [TEMPLATE]          template
74   [ANGLE_OPEN]        <
74   [TYPE]              class
74   [TYPE]              T
74   [ANGLE_CLOSE]       >
74   [NEWLINE]           
75   [CLASS]             class
75   [TYPE]              X
75   [BRACE_OPEN]        {
75   [NEWLINE]           
76   [TYPEDEF]           typedef
76   [TYPE]              type
76   [ANGLE_OPEN]        <
76   [TYPE]              T
76   [ANGLE_CLOSE]       >
76   [TYPE]              base
76   [SEMICOLON]         ;
76   [NEWLINE]           
77   [TYPE]              void
77   [FUNC_DEF]          f
77   [FPAREN_OPEN]       (
77   [FPAREN_CLOSE]      )
77   [BRACE_OPEN]        {
77   [NEWLINE]           
78   [PAREN_OPEN]        (
78   [TYPE]              base
78   [DC_MEMBER]         ::
78   [OPERATOR]          operator
78   [FUNC_CALL]         *
78   [FPAREN_OPEN]       (
78   [FPAREN_CLOSE]      )
78   [PAREN_CLOSE]       )
78   [SEMICOLON]         ;
78   [NEWLINE]           
79   [BRACE_CLOSE]       }
79   [NEWLINE]           
80   [BRACE_CLOSE]       }
80   [SEMICOLON]         ;
80   [NEWLINE]           
82   [NAMESPACE]         namespace
82   [WORD]              N
82   [NEWLINE]           
83   [BRACE_OPEN]        {
83   [NEWLINE]           
84   [CLASS]             class
84   [TYPE]              C
84   [NEWLINE]           
85   [BRACE_OPEN]        {
85   [NEWLINE]           
86   [PREPROC]           #
86   [PP_DEFINE]         define
86   [MACRO_FUNC]        NOP
86   [FPAREN_OPEN]       (
86   [WORD]              x
86   [FPAREN_CLOSE]      )
86   [BRACE_OPEN]        {
86   [NL_CONT]           \
86   [BRACE_CLOSE]       }
86   [NEWLINE]           
87   [BRACE_CLOSE]       }
87   [SEMICOLON]         ;
87   [NEWLINE]           
88   [BRACE_CLOSE]       }
88   [NEWLINE]           
90   [NAMESPACE]         namespace
90   [WORD]              N
90   [NEWLINE]           
91   [BRACE_OPEN]        {
91   [NEWLINE]           
92   [CLASS]             class
92   [TYPE]              C
92   [NEWLINE]           
93   [BRACE_OPEN]        {
93   [NEWLINE]           
94   [BRACE_CLOSE]       }
94   [SEMICOLON]         ;
94   [NEWLINE]           
95   [BRACE_CLOSE]       }
95   [NEWLINE]           
97   [TYPE]              void
97   [FUNC_DEF]          deallocate2
97   [FPAREN_OPEN]       (
97   [TYPE]              S
97   [PTR_TYPE]          *
97   [PTR_TYPE]          *
97   [WORD]              s_ptr
97   [FPAREN_CLOSE]      )
97   [NEWLINE]           
98   [BRACE_OPEN]        {
98   [NEWLINE]           
99   [BRACE_OPEN]        {
99   [NEWLINE]           
100  [TYPE]              void
100  [PTR_TYPE]          *
100  [WORD]              stopper_for_apply
100  [ASSIGN]            =
100  [PAREN_OPEN]        (
100  [TYPE]              int
100  [TSQUARE]           []
100  [PAREN_CLOSE]       )
100  [BRACE_OPEN]        {
100  [NUMBER]            0
100  [BRACE_CLOSE]       }
100  [SEMICOLON]         ;
100  [NEWLINE]           
101  [TYPE]              void
101  [PTR_TYPE]          *
101  [PTR_TYPE]          *
101  [WORD]              list_for_apply
101  [ASSIGN]            =
101  [PAREN_OPEN]        (
101  [TYPE]              void
101  [PTR_TYPE]          *
101  [TSQUARE]           []
101  [PAREN_CLOSE]       )
101  [BRACE_OPEN]        {
101  [PAREN_OPEN]        (
101  [DEREF]             *
101  [WORD]              s_ptr
101  [PAREN_CLOSE]       )
101  [MEMBER]            ->
101  [WORD]              arr
101  [COMMA]             ,
101  [DEREF]             *
101  [WORD]              s_ptr
101  [COMMA]             ,
101  [WORD]              stopper_for_apply
101  [BRACE_CLOSE]       }
101  [SEMICOLON]         ;
101  [NEWLINE]           
102  [FOR]               for
102  [SPAREN_OPEN]       (
102  [TYPE]              int
102  [WORD]              i
102  [ASSIGN]            =
102  [NUMBER]            0
102  [SEMICOLON]         ;
102  [WORD]              list_for_apply
102  [SQUARE_OPEN]       [
102  [WORD]              i
102  [SQUARE_CLOSE]      ]
102  [COMPARE]           !=
102  [WORD]              stopper_for_apply
102  [SEMICOLON]         ;
102  [WORD]              i
102  [INCDEC_AFTER]      ++
102  [SPAREN_CLOSE]      )
102  [BRACE_OPEN]        {
102  [NEWLINE]           
103  [FUNC_CALL]         saferFree
103  [FPAREN_OPEN]       (
103  [PAREN_OPEN]        (
103  [TYPE]              void
103  [PTR_TYPE]          *
103  [PAREN_CLOSE]       )
103  [ADDR]              &
103  [PAREN_OPEN]        (
103  [WORD]              list_for_apply
103  [SQUARE_OPEN]       [
103  [WORD]              i
103  [SQUARE_CLOSE]      ]
103  [PAREN_CLOSE]       )
103  [FPAREN_CLOSE]      )
103  [SEMICOLON]         ;
103  [NEWLINE]           
104  [BRACE_CLOSE]       }
104  [NEWLINE]           
105  [BRACE_CLOSE]       }
105  [NEWLINE]           
106  [BRACE_CLOSE]       }
106  [NEWLINE]           