Line [Token]             Text
1    [TYPE]              int
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [TYPE]              int
1    [WORD]              bar
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [PREPROC]           #
3    [PP_IF]             ifndef
3    [TYPE]              CONFIG_1
3    [NEWLINE]           
4    [WORD]              bar
4    [ASSIGN]            -=
4    [NUMBER]            3
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [PREPROC]           #
5    [PP_ELSE]           else
5    [NEWLINE]           
6    [FOR]               for
6    [SPAREN_OPEN]       (
6    [WORD]              j
6    [ASSIGN]            =
6    [NUMBER]            0
6    [SEMICOLON]         ;
6    [WORD]              j
6    [COMPARE]           <
6    [WORD]              NR_CPUS
6    [SEMICOLON]         ;
6    [WORD]              j
6    [INCDEC_AFTER]      ++
6    [SPAREN_CLOSE]      )
6    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [IF]                if
7    [SPAREN_OPEN]       (
7    [FUNC_CALL]         cpu_online
7    [FPAREN_OPEN]       (
7    [WORD]              j
7    [FPAREN_CLOSE]      )
7    [SPAREN_CLOSE]      )
7    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [WORD]              bar
8    [INCDEC_AFTER]      ++
8    [SEMICOLON]         ;
8    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
9    [PREPROC]           #
9    [PP_ENDIF]          endif
9    [NEWLINE]           
10   [RETURN]            return
10   [PAREN_OPEN]        (
10   [NUMBER]            0
10   [PAREN_CLOSE]       )
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           