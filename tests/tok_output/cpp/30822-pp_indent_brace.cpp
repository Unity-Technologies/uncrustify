Line [Token]             Text
1    [COMMENT_CPP]       // Example for preprocessor statement in a function definition
1    [NEWLINE]           
2    [COMMENT_CPP]       // Config uses more than tested option, uses:
2    [NEWLINE]           
3    [COMMENT_CPP]       // pp_if_indent_code  = true	  to enable preprocesser indent
3    [NEWLINE]           
4    [COMMENT_CPP]       // pp_indent_brace	  = false	  to override preprocessor indent for braces
4    [NEWLINE]           
5    [TYPE]              MyClass
5    [DC_MEMBER]         ::
5    [FUNC_CLASS_DEF]    MyClass
5    [FPAREN_OPEN]       (
5    [FPAREN_CLOSE]      )
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [IF]                if
7    [SPAREN_OPEN]       (
7    [WORD]              isSomething
7    [SPAREN_CLOSE]      )
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [FUNC_CALL]         DoSomething
9    [FPAREN_OPEN]       (
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
12   [PREPROC]           #
12   [PP_IF]             if
12   [PAREN_OPEN]        (
12   [TYPE]              USE_FIVE
12   [PAREN_CLOSE]       )
12   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
14   [FUNC_CALL]         DoSomethingAlso
14   [FPAREN_OPEN]       (
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
16   [PREPROC]           #
16   [PP_ENDIF]          endif
16   [NEWLINE]           
18   [PREPROC]           #
18   [PP_IF]             if
18   [PAREN_OPEN]        (
18   [TYPE]              USE_SIX
18   [PAREN_CLOSE]       )
18   [NEWLINE]           
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [TYPE]              Six
20   [WORD]              mySix
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [FUNC_CALL]         DoSomethingWithSix
21   [FPAREN_OPEN]       (
21   [WORD]              mySix
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
23   [PREPROC]           #
23   [PP_ENDIF]          endif
23   [NEWLINE]           
24   [BRACE_CLOSE]       }