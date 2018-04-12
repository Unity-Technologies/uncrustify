Line [Token]             Text
1    [COMMENT_CPP]       // Example for extern "C" blocks inside preprocessor statements
1    [NEWLINE]           
2    [COMMENT_CPP]       // Config uses more than tested option, uses:
2    [NEWLINE]           
3    [COMMENT_CPP]       // pp_if_indent_code  = true	  to enable preprocesser indent
3    [NEWLINE]           
4    [COMMENT_CPP]       // pp_indent_extern	  = false	  to override preprocessor indent for braces
4    [NEWLINE]           
5    [TYPE]              int
5    [WORD]              x
5    [ASSIGN]            =
5    [NUMBER]            1
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [PREPROC]           #
6    [PP_IF]             ifdef
6    [WORD]              __cplusplus
6    [NEWLINE]           
7    [EXTERN]            extern
7    [STRING]            "C"
7    [BRACE_OPEN]        {
7    [NEWLINE]           
9    [TYPE]              void
9    [FUNC_PROTO]        some_c_function
9    [NEWLINE]           
10   [FPAREN_OPEN]       (
10   [NEWLINE]           
11   [TYPE]              void
11   [NEWLINE]           
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
14   [PREPROC]           #
14   [PP_ENDIF]          endif