Line [Token]             Text
1    [COMMENT_CPP]       // Example of function definitions inside of preprocessor statements
1    [NEWLINE]           
2    [COMMENT_CPP]       // Config uses more than tested option, uses:
2    [NEWLINE]           
3    [COMMENT_CPP]       // pp_if_indent_code  = true	  to enable preprocesser indent
3    [NEWLINE]           
4    [COMMENT_CPP]       // pp_indent_func_def = false	  to override preprocessor indent for function definitions
4    [NEWLINE]           
5    [TYPE]              int
5    [WORD]              x
5    [ASSIGN]            =
5    [NUMBER]            1
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [PREPROC]           #
6    [PP_IF]             if
6    [PAREN_OPEN]        (
6    [TYPE]              USE_AWESOME_FUNCTIONS
6    [PAREN_CLOSE]       )
6    [NEWLINE]           
7    [TYPE]              void
7    [TYPE]              MyClass
7    [DC_MEMBER]         ::
7    [FUNC_DEF]          SomeAwesomeFunction
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [FUNC_CALL]         DoSomethingInAFunction
9    [FPAREN_OPEN]       (
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
11   [PREPROC]           #
11   [PP_ENDIF]          endif