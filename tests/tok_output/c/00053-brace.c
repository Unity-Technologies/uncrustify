Line [Token]             Text
1    [NEWLINE]           
4    [TYPE]              int
4    [FUNC_DEF]          function
4    [FPAREN_OPEN]       (
4    [TYPE]              int
4    [WORD]              arg
4    [FPAREN_CLOSE]      )
4    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [TYPE]              int
5    [WORD]              i
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [FOR]               for
6    [SPAREN_OPEN]       (
6    [WORD]              i
6    [ASSIGN]            =
6    [NUMBER]            0
6    [SEMICOLON]         ;
6    [WORD]              i
6    [COMPARE]           <
6    [NUMBER]            5
6    [SEMICOLON]         ;
6    [WORD]              i
6    [INCDEC_AFTER]      ++
6    [SPAREN_CLOSE]      )
6    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [COMMENT]           /* Do something... */
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
9    [IF]                if
9    [SPAREN_OPEN]       (
9    [WORD]              i
9    [COMPARE]           <
9    [NUMBER]            0
9    [SPAREN_CLOSE]      )
9    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [COMMENT]           /*Do something else...*/
10   [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
12   [RETURN]            return
12   [PAREN_OPEN]        (
12   [NUMBER]            0
12   [PAREN_CLOSE]       )
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           