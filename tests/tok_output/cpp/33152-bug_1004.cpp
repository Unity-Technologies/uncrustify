Line [Token]             Text
1    [TYPE]              int
1    [FUNC_DEF]          main
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TYPE]              int
3    [WORD]              b
3    [ASSIGN]            =
3    [NUMBER]            3
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [TYPE]              int
4    [PTR_TYPE]          *
4    [WORD]              p
4    [ASSIGN]            =
4    [ADDR]              &
4    [WORD]              b
4    [SEMICOLON]         ;
4    [NEWLINE]           
6    [COMMENT_CPP]       // Should stay as b * *p
6    [NEWLINE]           
7    [TYPE]              int
7    [WORD]              a
7    [ASSIGN]            =
7    [WORD]              b
7    [ARITH]             *
7    [DEREF]             *
7    [WORD]              p
7    [SEMICOLON]         ;
7    [NEWLINE]           
9    [COMMENT_CPP]       // Correctly formats as a * b;
9    [NEWLINE]           
10   [TYPE]              int
10   [WORD]              c
10   [ASSIGN]            =
10   [WORD]              b
10   [ARITH]             *
10   [WORD]              a
10   [SEMICOLON]         ;
10   [NEWLINE]           
12   [COMMENT_CPP]       // Correctly formats as d = *p;
12   [NEWLINE]           
13   [TYPE]              int
13   [WORD]              d
13   [ASSIGN]            =
13   [DEREF]             *
13   [WORD]              p
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [NEWLINE]           