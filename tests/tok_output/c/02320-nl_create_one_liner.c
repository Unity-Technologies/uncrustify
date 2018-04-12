Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [IF]                if
3    [SPAREN_OPEN]       (
3    [WORD]              a
3    [SPAREN_CLOSE]      )
3    [VBRACE_OPEN]       
4    [WORD]              b
4    [INCDEC_AFTER]      ++
4    [SEMICOLON]         ;
4    [VBRACE_CLOSE]      
4    [NEWLINE]           
5    [IF]                if
5    [SPAREN_OPEN]       (
5    [WORD]              a
5    [SPAREN_CLOSE]      )
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [WORD]              b
6    [INCDEC_AFTER]      ++
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
8    [IF]                if
8    [SPAREN_OPEN]       (
8    [WORD]              a
8    [SPAREN_CLOSE]      )
8    [VBRACE_OPEN]       
8    [NEWLINE]           
9    [IF]                if
9    [SPAREN_OPEN]       (
9    [WORD]              b
9    [SPAREN_CLOSE]      )
9    [VBRACE_OPEN]       
10   [WORD]              c
10   [INCDEC_AFTER]      ++
10   [SEMICOLON]         ;
10   [VBRACE_CLOSE]      
10   [VBRACE_CLOSE]      
10   [NEWLINE]           
12   [FOR]               for
12   [SPAREN_OPEN]       (
12   [WORD]              i
12   [ASSIGN]            =
12   [NUMBER]            0
12   [SEMICOLON]         ;
12   [WORD]              i
12   [COMPARE]           <
12   [NUMBER]            5
12   [SEMICOLON]         ;
12   [WORD]              i
12   [INCDEC_AFTER]      ++
12   [SPAREN_CLOSE]      )
12   [VBRACE_OPEN]       
13   [FUNC_CALL]         bar
13   [FPAREN_OPEN]       (
13   [WORD]              i
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [VBRACE_CLOSE]      
13   [NEWLINE]           
14   [WHILE]             while
14   [SPAREN_OPEN]       (
14   [WORD]              i
14   [COMPARE]           >
14   [NUMBER]            0
14   [SPAREN_CLOSE]      )
14   [VBRACE_OPEN]       
15   [FUNC_CALL]         bar
15   [FPAREN_OPEN]       (
15   [INCDEC_BEFORE]     --
15   [WORD]              i
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [VBRACE_CLOSE]      
15   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           