Line [Token]             Text
1    [NAMESPACE]         namespace
1    [WORD]              Unity
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [QUALIFIER]         public
3    [CLASS]             class
3    [TYPE]              Class
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [COMMENT_CPP]       // doesn't work because ; gets removed but
5    [NEWLINE]           
6    [QUALIFIER]         public
6    [QUALIFIER]         static
6    [QUALIFIER]         readonly
6    [TYPE]              Class
6    [WORD]              A
6    [ASSIGN]            =
6    [NEW]               new
6    [FUNC_CALL]         Class
6    [FPAREN_OPEN]       (
6    [FPAREN_CLOSE]      )
6    [BRACE_OPEN]        {
6    [WORD]              name
6    [ASSIGN]            =
6    [STRING]            "A"
6    [COMMA]             ,
6    [WORD]              id
6    [ASSIGN]            =
6    [NUMBER]            1
6    [BRACE_CLOSE]       }
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [COMMENT_CPP]       // works and ; doesn't get removed
7    [NEWLINE]           
8    [QUALIFIER]         public
8    [QUALIFIER]         static
8    [QUALIFIER]         readonly
8    [TYPE]              Class
8    [WORD]              B
8    [ASSIGN]            =
8    [NEW]               new
8    [TYPE]              Class
8    [BRACE_OPEN]        {
8    [WORD]              name
8    [ASSIGN]            =
8    [STRING]            "B"
8    [COMMA]             ,
8    [WORD]              id
8    [ASSIGN]            =
8    [NUMBER]            2
8    [BRACE_CLOSE]       }
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           