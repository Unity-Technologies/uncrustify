Line [Token]             Text
1    [TYPE]              int
1    [FUNC_DEF]          main
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [IF]                if
3    [SPAREN_OPEN]       (
3    [WORD]              foo
3    [COMPARE]           ==
3    [WORD]              bar
3    [SPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [COMMENT]           /* this works */
4    [NEWLINE]           
5    [WORD]              a
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [ELSE]              else
6    [NEWLINE]           
7    [ELSEIF]            if
7    [SPAREN_OPEN]       (
7    [WORD]              ranz
7    [COMPARE]           !=
7    [WORD]              bar
7    [SPAREN_CLOSE]      )
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [COMMENT]           /* this works too */
8    [NEWLINE]           
9    [WORD]              b
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [ELSE]              else
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [COMMENT]           /* this is broken */
11   [NEWLINE]           
12   [WORD]              c
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [NEWLINE]           