Line [Token]             Text
1    [TYPE]              int
1    [FUNC_DEF]          main
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
1    [BRACE_OPEN]        {
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_IF]             if
2    [TYPE]              WANT_TO_COMPILE_THIS
2    [NEWLINE]           
3    [TYPE]              gtkwidget
3    [MEMBER]            .
3    [TYPE]              clicked
3    [MEMBER]            .
3    [FUNC_CALL]         connect
3    [FPAREN_OPEN]       (
3    [PAREN_OPEN]        (
3    [WORD]              widdget
3    [PAREN_CLOSE]       )
3    [LAMBDA]            =>
3    [BRACE_OPEN]        {
3    [FUNC_CALL]         message
3    [FPAREN_OPEN]       (
3    [STRING]            "Clicked"
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
3    [BRACE_CLOSE]       }
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [PREPROC]           #
4    [PP_ELSE]           else
4    [NEWLINE]           
5    [TYPE]              gtkwidget
5    [MEMBER]            .
5    [TYPE]              enabled
5    [MEMBER]            .
5    [FUNC_CALL]         connect
5    [FPAREN_OPEN]       (
5    [PAREN_OPEN]        (
5    [WORD]              widdget
5    [PAREN_CLOSE]       )
5    [LAMBDA]            =>
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [FUNC_CALL]         message
6    [FPAREN_OPEN]       (
6    [STRING]            "Clicked"
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [PREPROC]           #
8    [PP_ENDIF]          endif
8    [NEWLINE]           
9    [RETURN]            return
9    [PAREN_OPEN]        (
9    [NUMBER]            0
9    [PAREN_CLOSE]       )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           