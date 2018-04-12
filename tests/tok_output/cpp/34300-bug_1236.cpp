Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TYPE]              int
3    [WORD]              head
3    [COMMA]             ,
3    [WORD]              bar
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [ASM]               __asm__
4    [QUALIFIER]         __volatile__
4    [NEWLINE]           
5    [PAREN_OPEN]        (
5    [NEWLINE]           
6    [STRING]            "movq %0,%%xmm0\n\t"
6    [COMMENT]           /* asm template */
6    [NEWLINE]           
7    [STRING]            "0:\n\t"
7    [NEWLINE]           
8    [STRING]            "bar\t%0, [%4]\n\t"
8    [COMMENT_CPP]       // in template
8    [NEWLINE]           
9    [STRING]            "1:\n\t"
9    [NEWLINE]           
10   [ASM_COLON]         :
10   [STRING]            "=a"
10   [COMMA]             ,
10   [PAREN_OPEN]        (
10   [WORD]              bar
10   [PAREN_CLOSE]       )
10   [NEWLINE]           
11   [ASM_COLON]         :
11   [STRING]            "=&b"
11   [COMMA]             ,
11   [PAREN_OPEN]        (
11   [ADDR]              &
11   [WORD]              head
11   [PAREN_CLOSE]       )
11   [COMMA]             ,
11   [STRING]            "+m"
11   [COMMA]             ,
11   [PAREN_OPEN]        (
11   [WORD]              bar
11   [PAREN_CLOSE]       )
11   [NEWLINE]           
12   [ASM_COLON]         :
12   [STRING]            "cc"
12   [NEWLINE]           
13   [PAREN_CLOSE]       )
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [NEWLINE]           