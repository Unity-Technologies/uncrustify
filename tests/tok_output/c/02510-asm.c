Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [TYPE]              void
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [ASM]               asm
3    [QUALIFIER]         __volatile__
3    [PAREN_OPEN]        (
3    [NEWLINE]           
4    [STRING]            "subl %2,%0\n\t"
4    [NEWLINE]           
5    [STRING]            "sbbl %3,%1"
5    [NEWLINE]           
6    [ASM_COLON]         :
6    [STRING]            "=a"
6    [PAREN_OPEN]        (
6    [WORD]              l
6    [PAREN_CLOSE]       )
6    [COMMA]             ,
6    [STRING]            "=d"
6    [PAREN_OPEN]        (
6    [WORD]              h
6    [PAREN_CLOSE]       )
6    [NEWLINE]           
7    [ASM_COLON]         :
7    [STRING]            "g"
7    [PAREN_OPEN]        (
7    [WORD]              sl
7    [PAREN_CLOSE]       )
7    [COMMA]             ,
7    [STRING]            "g"
7    [PAREN_OPEN]        (
7    [WORD]              sh
7    [PAREN_CLOSE]       )
7    [COMMA]             ,
7    [NEWLINE]           
8    [STRING]            "0"
8    [PAREN_OPEN]        (
8    [WORD]              l
8    [PAREN_CLOSE]       )
8    [COMMA]             ,
8    [STRING]            "1"
8    [PAREN_OPEN]        (
8    [WORD]              h
8    [PAREN_CLOSE]       )
8    [PAREN_CLOSE]       )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           