Line [Token]             Text
1    [WORD]              x
1    [ASSIGN]            =
1    [NUMBER]            0
1    [SEMICOLON]         ;
1    [COMMENT_CPP]       // A global variable
1    [NEWLINE]           
2    [TYPE]              var
2    [WORD]              y
2    [ASSIGN]            =
2    [STRING]            'Hello!'
2    [SEMICOLON]         ;
2    [COMMENT_CPP]       // Another global variable
2    [NEWLINE]           
4    [FUNC_CALL]         function
4    [FUNC_CALL]         f
4    [FPAREN_OPEN]       (
4    [FPAREN_CLOSE]      )
4    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [TYPE]              var
5    [WORD]              z
5    [ASSIGN]            =
5    [STRING]            'foxes'
5    [SEMICOLON]         ;
5    [COMMENT_CPP]       // A local variable
5    [NEWLINE]           
6    [WORD]              twenty
6    [ASSIGN]            =
6    [NUMBER]            20
6    [SEMICOLON]         ;
6    [COMMENT_CPP]       // Global because keyword var is not used
6    [NEWLINE]           
7    [RETURN]            return
7    [PAREN_OPEN]        (
7    [WORD]              x
7    [PAREN_CLOSE]       )
7    [SEMICOLON]         ;
7    [COMMENT_CPP]       // We can use x here because it is global
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
9    [COMMENT_CPP]       // The value of z is no longer available
9    [NEWLINE]           