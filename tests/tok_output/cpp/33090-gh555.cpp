Line [Token]             Text
1    [TYPE]              class
1    [WORD]              \u005FClass
1    [COMMENT_CPP]       // underscore character
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [BRACE_CLOSE]       }
3    [SEMICOLON]         ;
3    [NEWLINE]           
5    [TYPE]              int
5    [FUNC_DEF]          main
5    [FPAREN_OPEN]       (
5    [FPAREN_CLOSE]      )
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [TYPE]              string
7    [WORD]              IdentifierContainingTwoUCNCharacters\u1234\U00001234
7    [ASSIGN]            =
7    [STRING]            "\u005FClass"
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           