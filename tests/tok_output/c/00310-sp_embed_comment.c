Line [Token]             Text
1    [TYPE]              void
1    [FUNC_PROTO]        f
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [SEMICOLON]         ;
1    [NEWLINE]           
2    [TYPE]              void
2    [FUNC_PROTO]        g
2    [FPAREN_OPEN]       (
2    [TYPE]              int
2    [FPAREN_CLOSE]      )
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [TYPE]              void
3    [FUNC_DEF]          h
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [FUNC_CALL]         f
5    [FPAREN_OPEN]       (
5    [COMMENT]           /*foo*/
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [FUNC_CALL]         g
6    [FPAREN_OPEN]       (
6    [NUMBER]            42
6    [COMMENT]           /*foo*/
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [FUNC_CALL]         g
7    [FPAREN_OPEN]       (
7    [COMMENT]           /*foo*/
7    [NUMBER]            42
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           