Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [TYPE]              void
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TYPE]              int
3    [WORD]              a
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [FUNC_CALL]         junk
4    [FPAREN_OPEN]       (
4    [WORD]              a
4    [ASSIGN]            =
4    [NUMBER]            3
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [NEWLINE]           
7    [TYPE]              void
7    [FUNC_DEF]          f
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [TYPE]              int
9    [WORD]              x
9    [ASSIGN]            =
9    [FUNC_CALL]         size_t
9    [FPAREN_OPEN]       (
9    [NUMBER_FP]         1.0
9    [FPAREN_CLOSE]      )
9    [ARITH]             +
9    [NEWLINE]           
10   [NUMBER]            2
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [TYPE]              int
11   [WORD]              y
11   [ASSIGN]            =
11   [PAREN_OPEN]        (
11   [FUNC_CALL]         size_t
11   [FPAREN_OPEN]       (
11   [NUMBER_FP]         1.0
11   [FPAREN_CLOSE]      )
11   [ARITH]             +
11   [NEWLINE]           
12   [NUMBER]            5
12   [PAREN_CLOSE]       )
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           