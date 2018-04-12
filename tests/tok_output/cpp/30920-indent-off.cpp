Line [Token]             Text
1    [STRUCT]            struct
1    [TYPE]              X
1    [NEWLINE]           
1    [BRACE_OPEN]        {
1    [NEWLINE]           
2    [TYPE]              void
2    [OPERATOR]          operator
2    [FUNC_PROTO]        -
2    [FPAREN_OPEN]       (
2    [TYPE]              int
2    [FPAREN_CLOSE]      )
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [TYPE]              void
3    [OPERATOR]          operator
3    [FUNC_PROTO]        +
3    [FPAREN_OPEN]       (
3    [TYPE]              int
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [TYPE]              void
4    [OPERATOR]          operator
4    [FUNC_PROTO]        ()
4    [FPAREN_OPEN]       (
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [COMMENT]           /* *INDENT-OFF* */
6    [NEWLINE]           
7    [IGNORED]             struct Y {
7    [NEWLINE]           
8    [IGNORED]               void operator-(int){}
8    [NEWLINE]           
11   [IGNORED]              void operator+(int){}  \
11   [NEWLINE]           
12   [IGNORED]               void operator()(){}
12   [NEWLINE]           
14   [IGNORED]                void func() {
14   [NEWLINE]           
15   [IGNORED]           	 			auto x = "	test\t 	 	 		...   ???";}
15   [NEWLINE]           
16   [IGNORED]             };
16   [NEWLINE]           
17   [COMMENT]           /* *INDENT-ON* */
17   [NEWLINE]           
18   [STRUCT]            struct
18   [TYPE]              Y
18   [NEWLINE]           
18   [BRACE_OPEN]        {
18   [NEWLINE]           
19   [TYPE]              void
19   [OPERATOR]          operator
19   [FUNC_DEF]          -
19   [FPAREN_OPEN]       (
19   [TYPE]              int
19   [FPAREN_CLOSE]      )
19   [BRACE_OPEN]        {
19   [BRACE_CLOSE]       }
19   [NEWLINE]           
20   [TYPE]              void
20   [OPERATOR]          operator
20   [FUNC_DEF]          +
20   [FPAREN_OPEN]       (
20   [TYPE]              int
20   [FPAREN_CLOSE]      )
20   [BRACE_OPEN]        {
20   [BRACE_CLOSE]       }
20   [NEWLINE]           
21   [TYPE]              void
21   [OPERATOR]          operator
21   [FUNC_DEF]          ()
21   [FPAREN_OPEN]       (
21   [FPAREN_CLOSE]      )
21   [BRACE_OPEN]        {
21   [BRACE_CLOSE]       }
21   [NEWLINE]           
22   [TYPE]              void
22   [FUNC_DEF]          func
22   [FPAREN_OPEN]       (
22   [FPAREN_CLOSE]      )
22   [NEWLINE]           
22   [BRACE_OPEN]        {
22   [NEWLINE]           
23   [TYPE]              auto
23   [WORD]              x
23   [ASSIGN]            =
23   [STRING]            "	test\t 	 	 		...   ???"
23   [SEMICOLON]         ;
23   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [SEMICOLON]         ;
24   [NEWLINE]           