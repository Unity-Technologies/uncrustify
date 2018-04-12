Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        include
1    [PREPROC_BODY]      <stdio.h>
1    [NEWLINE]           
3    [TYPE]              int
3    [FUNC_DEF]          main
3    [FPAREN_OPEN]       (
3    [TYPE]              int
3    [WORD]              argc
3    [COMMA]             ,
3    [TYPE]              char
3    [PTR_TYPE]          *
3    [WORD]              argv
3    [TSQUARE]           []
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [TYPE]              int
5    [WORD]              a
5    [ASSIGN]            =
5    [NUMBER]            1
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [TYPE]              int
6    [WORD]              very_long
6    [ASSIGN]            =
6    [NUMBER]            2
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [FUNC_CALL]         printf
7    [FPAREN_OPEN]       (
7    [STRING]            "Hello, World!\n"
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [FUNC_CALL]         printf
8    [FPAREN_OPEN]       (
8    [STRING]            "a is %d and very_long is %d\n"
8    [COMMA]             ,
8    [WORD]              a
8    [COMMA]             ,
8    [WORD]              very_long
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [RETURN]            return
9    [PAREN_OPEN]        (
9    [NUMBER]            0
9    [PAREN_CLOSE]       )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
12   [PREPROC]           #
12   [PP_PRAGMA]         pragma
12   [PREPROC_BODY]      asm
12   [NEWLINE]           
13   [IGNORED]               XREF     _my_var
13   [NEWLINE]           
15   [IGNORED]               PUSH     #LOW(my_func)
15   [NEWLINE]           
16   [IGNORED]               PUSH     #HIGH(my_func)
16   [NEWLINE]           
18   [IGNORED]           #pragma dummyendasm
18   [NEWLINE]           
20   [IGNORED]               PUSH     _my_var+2
20   [NEWLINE]           
21   [IGNORED]               PUSH     _my_var+1
21   [NEWLINE]           
22   [IGNORED]               PUSH     _my_var+0
22   [NEWLINE]           
23   [IGNORED]               RETF
23   [NEWLINE]           
24   [IGNORED]               App_CallEnd:
24   [NEWLINE]           
25   [PREPROC]           #
25   [PP_PRAGMA]         pragma
25   [PREPROC_BODY]      endasm
25   [NEWLINE]           
27   [TYPE]              int
27   [FUNC_DEF]          main2
27   [FPAREN_OPEN]       (
27   [TYPE]              int
27   [WORD]              argc
27   [COMMA]             ,
27   [TYPE]              char
27   [PTR_TYPE]          *
27   [WORD]              argv
27   [TSQUARE]           []
27   [FPAREN_CLOSE]      )
27   [NEWLINE]           
28   [BRACE_OPEN]        {
28   [NEWLINE]           
29   [TYPE]              int
29   [WORD]              a
29   [ASSIGN]            =
29   [NUMBER]            1
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [TYPE]              int
30   [WORD]              very_long
30   [ASSIGN]            =
30   [NUMBER]            2
30   [SEMICOLON]         ;
30   [NEWLINE]           
31   [FUNC_CALL]         printf
31   [FPAREN_OPEN]       (
31   [STRING]            "Hello, World!\n"
31   [FPAREN_CLOSE]      )
31   [SEMICOLON]         ;
31   [NEWLINE]           
32   [FUNC_CALL]         printf
32   [FPAREN_OPEN]       (
32   [STRING]            "a is %d and very_long is %d\n"
32   [COMMA]             ,
32   [WORD]              a
32   [COMMA]             ,
32   [WORD]              very_long
32   [FPAREN_CLOSE]      )
32   [SEMICOLON]         ;
32   [NEWLINE]           
33   [RETURN]            return
33   [PAREN_OPEN]        (
33   [NUMBER]            0
33   [PAREN_CLOSE]       )
33   [SEMICOLON]         ;
33   [NEWLINE]           
34   [BRACE_CLOSE]       }
34   [NEWLINE]           
36   [PREPROC]           #
36   [PP_PRAGMA]         pragma
36   [PREPROC_BODY]      asm
36   [NEWLINE]           
37   [IGNORED]               XREF     _my_var
37   [NEWLINE]           
39   [IGNORED]               PUSH     #LOW(my_func)
39   [NEWLINE]           
40   [IGNORED]               PUSH     #HIGH(my_func)
40   [NEWLINE]           
42   [IGNORED]           #pragma dummyendasm
42   [NEWLINE]           
44   [IGNORED]               PUSH     _my_var+2
44   [NEWLINE]           
45   [IGNORED]               PUSH     _my_var+1
45   [NEWLINE]           
46   [IGNORED]               PUSH     _my_var+0
46   [NEWLINE]           
47   [IGNORED]               RETF
47   [NEWLINE]           
48   [IGNORED]               App_CallEnd:
48   [NEWLINE]           
49   [PREPROC]           #
49   [PP_PRAGMA]         pragma
49   [PREPROC_BODY]      endasm
49   [NEWLINE]           
51   [TYPE]              int
51   [FUNC_DEF]          main3
51   [FPAREN_OPEN]       (
51   [TYPE]              int
51   [WORD]              argc
51   [COMMA]             ,
51   [TYPE]              char
51   [PTR_TYPE]          *
51   [WORD]              argv
51   [TSQUARE]           []
51   [FPAREN_CLOSE]      )
51   [NEWLINE]           
52   [BRACE_OPEN]        {
52   [NEWLINE]           
53   [TYPE]              int
53   [WORD]              a
53   [ASSIGN]            =
53   [NUMBER]            1
53   [SEMICOLON]         ;
53   [NEWLINE]           
54   [TYPE]              int
54   [WORD]              very_long
54   [ASSIGN]            =
54   [NUMBER]            2
54   [SEMICOLON]         ;
54   [NEWLINE]           
55   [FUNC_CALL]         printf
55   [FPAREN_OPEN]       (
55   [STRING]            "Hello, World!\n"
55   [FPAREN_CLOSE]      )
55   [SEMICOLON]         ;
55   [NEWLINE]           
56   [FUNC_CALL]         printf
56   [FPAREN_OPEN]       (
56   [STRING]            "a is %d and very_long is %d\n"
56   [COMMA]             ,
56   [WORD]              a
56   [COMMA]             ,
56   [WORD]              very_long
56   [FPAREN_CLOSE]      )
56   [SEMICOLON]         ;
56   [NEWLINE]           
57   [RETURN]            return
57   [PAREN_OPEN]        (
57   [NUMBER]            0
57   [PAREN_CLOSE]       )
57   [SEMICOLON]         ;
57   [NEWLINE]           
58   [BRACE_CLOSE]       }
58   [NEWLINE]           
60   [PREPROC]           #
60   [PP_PRAGMA]         pragma
60   [PREPROC_BODY]      asm
60   [NEWLINE]           
61   [IGNORED]               XREF     _my_var
61   [NEWLINE]           
63   [IGNORED]               PUSH     #LOW(my_func)
63   [NEWLINE]           
64   [IGNORED]               PUSH     #HIGH(my_func)
64   [NEWLINE]           
66   [IGNORED]           #pragma dummyendasm
66   [NEWLINE]           
68   [IGNORED]               PUSH     _my_var+2
68   [NEWLINE]           
69   [IGNORED]               PUSH     _my_var+1
69   [NEWLINE]           
70   [IGNORED]               PUSH     _my_var+0
70   [NEWLINE]           
71   [IGNORED]               RETF
71   [NEWLINE]           
72   [IGNORED]               App_CallEnd:
72   [NEWLINE]           
73   [PREPROC]           #
73   [PP_PRAGMA]         pragma
73   [PREPROC_BODY]      endasm
73   [NEWLINE]           
75   [TYPE]              int
75   [FUNC_DEF]          main3
75   [FPAREN_OPEN]       (
75   [TYPE]              int
75   [WORD]              argc
75   [COMMA]             ,
75   [TYPE]              char
75   [PTR_TYPE]          *
75   [WORD]              argv
75   [TSQUARE]           []
75   [FPAREN_CLOSE]      )
75   [NEWLINE]           
76   [BRACE_OPEN]        {
76   [NEWLINE]           
77   [TYPE]              int
77   [WORD]              a
77   [ASSIGN]            =
77   [NUMBER]            1
77   [SEMICOLON]         ;
77   [NEWLINE]           
78   [TYPE]              int
78   [WORD]              very_long
78   [ASSIGN]            =
78   [NUMBER]            2
78   [SEMICOLON]         ;
78   [NEWLINE]           
79   [FUNC_CALL]         printf
79   [FPAREN_OPEN]       (
79   [STRING]            "Hello, World!\n"
79   [FPAREN_CLOSE]      )
79   [SEMICOLON]         ;
79   [NEWLINE]           
80   [FUNC_CALL]         printf
80   [FPAREN_OPEN]       (
80   [STRING]            "a is %d and very_long is %d\n"
80   [COMMA]             ,
80   [WORD]              a
80   [COMMA]             ,
80   [WORD]              very_long
80   [FPAREN_CLOSE]      )
80   [SEMICOLON]         ;
80   [NEWLINE]           
81   [RETURN]            return
81   [PAREN_OPEN]        (
81   [NUMBER]            0
81   [PAREN_CLOSE]       )
81   [SEMICOLON]         ;
81   [NEWLINE]           
82   [BRACE_CLOSE]       }
82   [NEWLINE]           
84   [PREPROC]           #
84   [PP_ASM]            asm
84   [NEWLINE]           
85   [IGNORED]               sll     a           ; 3
85   [NEWLINE]           
86   [IGNORED]               jrc     sub_1f      ; 3 subtract $1f if A.x has a degree 8
86   [NEWLINE]           
87   [IGNORED]               ret
87   [NEWLINE]           
88   [IGNORED]           sub_1f:
88   [NEWLINE]           
89   [IGNORED]               xor     a,#$1f      ; 2
89   [NEWLINE]           
90   [PREPROC]           #
90   [PP_OTHER]          endasm
90   [NEWLINE]           
92   [TYPE]              int
92   [FUNC_DEF]          main3
92   [FPAREN_OPEN]       (
92   [TYPE]              int
92   [WORD]              argc
92   [COMMA]             ,
92   [TYPE]              char
92   [PTR_TYPE]          *
92   [WORD]              argv
92   [TSQUARE]           []
92   [FPAREN_CLOSE]      )
92   [NEWLINE]           
93   [BRACE_OPEN]        {
93   [NEWLINE]           
94   [TYPE]              int
94   [WORD]              a
94   [ASSIGN]            =
94   [NUMBER]            1
94   [SEMICOLON]         ;
94   [NEWLINE]           
95   [TYPE]              int
95   [WORD]              very_long
95   [ASSIGN]            =
95   [NUMBER]            2
95   [SEMICOLON]         ;
95   [NEWLINE]           
96   [FUNC_CALL]         printf
96   [FPAREN_OPEN]       (
96   [STRING]            "Hello, World!\n"
96   [FPAREN_CLOSE]      )
96   [SEMICOLON]         ;
96   [NEWLINE]           
97   [FUNC_CALL]         printf
97   [FPAREN_OPEN]       (
97   [STRING]            "a is %d and very_long is %d\n"
97   [COMMA]             ,
97   [WORD]              a
97   [COMMA]             ,
97   [WORD]              very_long
97   [FPAREN_CLOSE]      )
97   [SEMICOLON]         ;
97   [NEWLINE]           
98   [RETURN]            return
98   [PAREN_OPEN]        (
98   [NUMBER]            0
98   [PAREN_CLOSE]       )
98   [SEMICOLON]         ;
98   [NEWLINE]           
99   [BRACE_CLOSE]       }
99   [NEWLINE]           