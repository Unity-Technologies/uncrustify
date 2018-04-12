Line [Token]             Text
1    [COMMENT_CPP]       // Example for case in a preprocesser statement
1    [NEWLINE]           
2    [COMMENT_CPP]       // Config uses more than tested option, uses:
2    [NEWLINE]           
3    [COMMENT_CPP]       // pp_if_indent_code  = true	  to enable preprocesser indent
3    [NEWLINE]           
4    [COMMENT_CPP]       // pp_indent_case	  = false	  to override preprocessor indent for case blocks
4    [NEWLINE]           
5    [SWITCH]            switch
5    [SPAREN_OPEN]       (
5    [ELLIPSIS]          ...
5    [SPAREN_CLOSE]      )
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [CASE]              case
7    [NUMBER]            1
7    [CASE_COLON]        :
7    [NEWLINE]           
8    [CASE]              case
8    [NUMBER]            2
8    [CASE_COLON]        :
8    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [TYPE]              int
10   [WORD]              v
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [ELLIPSIS]          ...
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [NEWLINE]           
13   [BREAK]             break
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [PREPROC]           #
15   [PP_IF]             if
15   [PAREN_OPEN]        (
15   [WORD]              USE_FIVE
15   [PAREN_CLOSE]       )
15   [NEWLINE]           
16   [CASE]              case
16   [NUMBER]            3
16   [CASE_COLON]        :
16   [NEWLINE]           
17   [FUNC_CALL]         doFive
17   [FPAREN_OPEN]       (
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [BREAK]             break
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [PREPROC]           #
19   [PP_ENDIF]          endif
19   [NEWLINE]           
21   [CASE]              default
21   [CASE_COLON]        :
21   [NEWLINE]           
22   [BREAK]             break
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [BRACE_CLOSE]       }