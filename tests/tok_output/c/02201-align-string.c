Line [Token]             Text
1    [NEWLINE]           
2    [COMMENT_CPP]       // note - set threshold to three
2    [NEWLINE]           
3    [TYPE]              void
3    [FUNC_DEF]          foo
3    [FPAREN_OPEN]       (
3    [TYPE]              void
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [FUNC_CALL]         printf
5    [FPAREN_OPEN]       (
5    [STRING]            "This is the first line\n"
5    [NEWLINE]           
6    [STRING]            "And this is the second.\n"
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
8    [FUNC_CALL]         fprintf
8    [FPAREN_OPEN]       (
8    [WORD]              stderr
8    [COMMA]             ,
8    [STRING]            "This is the first line\n"
8    [NEWLINE]           
9    [STRING]            "And this is the second.\n"
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
11   [FUNC_CALL]         fprintf
11   [FPAREN_OPEN]       (
11   [WORD]              stderr
11   [COMMA]             ,
11   [STRING]            "Format string: %s"
11   [COMMA]             ,
11   [STRING]            "This is the first line\n"
11   [NEWLINE]           
12   [STRING]            "And this is the second.\n"
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           