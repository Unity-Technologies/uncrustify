Line [Token]             Text
1    [WHILE]             while
1    [SPAREN_OPEN]       (
1    [WORD]              a
1    [COMPARE]           >=
1    [NUMBER]            0
1    [SPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [IF]                if
3    [SPAREN_OPEN]       (
3    [WORD]              b
3    [SPAREN_CLOSE]      )
3    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [FOR]               for
4    [SPAREN_OPEN]       (
4    [WORD]              j
4    [ASSIGN]            =
4    [NUMBER]            0
4    [SEMICOLON]         ;
4    [WORD]              j
4    [COMPARE]           <
4    [NUMBER]            10
4    [SEMICOLON]         ;
4    [WORD]              j
4    [INCDEC_AFTER]      ++
4    [SPAREN_CLOSE]      )
4    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [IF]                if
6    [SPAREN_OPEN]       (
6    [WORD]              j
6    [COMPARE]           ==
6    [WORD]              b
6    [SPAREN_CLOSE]      )
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [RETURN]            return
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
10   [WORD]              a
10   [INCDEC_AFTER]      ++
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
12   [WORD]              b
12   [INCDEC_AFTER]      --
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           