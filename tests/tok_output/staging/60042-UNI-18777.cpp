Line [Token]             Text
1    [COMMENT_CPP]       // I want to keeep the function call indented
1    [NEWLINE]           
2    [TYPE]              Thingy
2    [NEWLINE]           
3    [MEMBER]            .
3    [FUNC_CALL]         Select
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [MEMBER]            .
4    [FUNC_CALL]         ToList
4    [FPAREN_OPEN]       (
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
6    [COMMENT_CPP]       // it works with a var
6    [NEWLINE]           
7    [TYPE]              var
7    [WORD]              x
7    [ASSIGN]            =
7    [WORD]              Thingy
7    [NEWLINE]           
8    [MEMBER]            .
8    [FUNC_CALL]         Select
8    [FPAREN_OPEN]       (
8    [FPAREN_CLOSE]      )
8    [NEWLINE]           
9    [MEMBER]            .
9    [FUNC_CALL]         ToList
9    [FPAREN_OPEN]       (
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           