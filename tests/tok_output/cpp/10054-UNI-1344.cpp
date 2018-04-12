Line [Token]             Text
1    [COMMENT_CPP]       // Asm blocks have their own special indentation where lables must remain at indent 0 relative to __asm__ block.
1    [NEWLINE]           
2    [COMMENT_CPP]       // They few ways of being opened and closed depending on the compiler.
2    [NEWLINE]           
3    [COMMENT_CPP]       // For now, we can at least detect and ignore the contents, including alignment.
3    [NEWLINE]           
5    [COMMENT_CPP]       // Workaround: can always fall back on disable/enable_processing_cmt.
5    [NEWLINE]           
7    [TYPE]              void
7    [FUNC_DEF]          foo
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [TYPE]              int
9    [WORD]              head
9    [COMMA]             ,
9    [WORD]              bar
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [ASM]               __asm__
10   [QUALIFIER]         __volatile__
10   [NEWLINE]           
11   [PAREN_OPEN]        (
11   [NEWLINE]           
12   [STRING]            "movq %0,%%xmm0\n\t"
12   [COMMENT]           /* asm template */
12   [NEWLINE]           
13   [STRING]            "0:\n\t"
13   [NEWLINE]           
14   [STRING]            "bar	%0, [%4]\n\t"
14   [COMMENT_CPP]       // in template
14   [NEWLINE]           
15   [STRING]            "1:\n\t"
15   [NEWLINE]           
16   [ASM_COLON]         :
16   [STRING]            "=a"
16   [COMMA]             ,
16   [PAREN_OPEN]        (
16   [WORD]              bar
16   [PAREN_CLOSE]       )
16   [NEWLINE]           
17   [ASM_COLON]         :
17   [STRING]            "=&b"
17   [COMMA]             ,
17   [PAREN_OPEN]        (
17   [ADDR]              &
17   [WORD]              head
17   [PAREN_CLOSE]       )
17   [COMMA]             ,
17   [STRING]            "+m"
17   [COMMA]             ,
17   [PAREN_OPEN]        (
17   [WORD]              bar
17   [PAREN_CLOSE]       )
17   [NEWLINE]           
18   [ASM_COLON]         :
18   [STRING]            "cc"
18   [NEWLINE]           
19   [PAREN_CLOSE]       )
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [NEWLINE]           