Line [Token]             Text
1    [TYPE]              bool
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [TYPE]              char
1    [WORD]              c
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [IF]                if
3    [SPAREN_OPEN]       (
3    [WORD]              c
3    [COMPARE]           ==
3    [STRING]            'a'
3    [SPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [RETURN]            return
5    [PAREN_OPEN]        (
5    [WORD]              true
5    [PAREN_CLOSE]       )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
7    [ELSE]              else
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [RETURN]            return
9    [PAREN_OPEN]        (
9    [WORD]              false
9    [PAREN_CLOSE]       )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           