Line [Token]             Text
1    [COMMENT_CPP]       // Example for not indenting preprocesser statements inside switch statements
1    [NEWLINE]           
2    [SWITCH]            switch
2    [SPAREN_OPEN]       (
2    [ELLIPSIS]          ...
2    [SPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [CASE]              case
4    [NUMBER]            1
4    [CASE_COLON]        :
4    [NEWLINE]           
5    [CASE]              case
5    [NUMBER]            2
5    [CASE_COLON]        :
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [TYPE]              int
7    [WORD]              v
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [ELLIPSIS]          ...
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
10   [BREAK]             break
10   [SEMICOLON]         ;
10   [NEWLINE]           
12   [PREPROC]           #
12   [PP_IF]             if
12   [PAREN_OPEN]        (
12   [WORD]              USE_FIVE
12   [PAREN_CLOSE]       )
12   [NEWLINE]           
13   [CASE]              case
13   [NUMBER]            3
13   [CASE_COLON]        :
13   [NEWLINE]           
14   [FUNC_CALL]         doFive
14   [FPAREN_OPEN]       (
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [BREAK]             break
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [PREPROC]           #
16   [PP_ENDIF]          endif
16   [NEWLINE]           
18   [CASE]              default
18   [CASE_COLON]        :
18   [NEWLINE]           
19   [BREAK]             break
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [BRACE_CLOSE]       }