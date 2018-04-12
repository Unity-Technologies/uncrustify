Line [Token]             Text
1    [PREPROC]           #
1    [PP_IF]             if
1    [NUMBER]            0
1    [NEWLINE]           
2    [TYPE]              int
2    [NEWLINE]           
3    [PREPROC]           #
3    [PP_ELSE]           else
3    [NEWLINE]           
4    [TYPE]              unsigned
4    [NEWLINE]           
5    [PREPROC]           #
5    [PP_ENDIF]          endif
5    [NEWLINE]           
6    [FUNC_DEF]          f
6    [FPAREN_OPEN]       (
6    [FPAREN_CLOSE]      )
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [RETURN]            return
8    [NUMBER]            0
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
11   [PREPROC]           #
11   [PP_IF]             ifdef
11   [WORD]              FOO
11   [NEWLINE]           
12   [PREPROC]           #
12   [PP_DEFINE]         define
12   [MACRO]             BAR
12   [MEMBER]            .
12   [NEWLINE]           
13   [PREPROC]           #
13   [PP_ENDIF]          endif
13   [NEWLINE]           