Line [Token]             Text
1    [QUALIFIER]         public
1    [CLASS]             class
1    [TYPE]              Class
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [QUALIFIER]         public
3    [TYPE]              void
3    [FUNC_DEF]          foo
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [TYPE]              data
5    [MEMBER]            .
5    [FUNC_CALL]         Sort
5    [FPAREN_OPEN]       (
5    [NEWLINE]           
6    [DELEGATE]          delegate
6    [PAREN_OPEN]        (
6    [TYPE]              InputData
6    [WORD]              lhs
6    [COMMA]             ,
6    [TYPE]              InputData
6    [WORD]              rhs
6    [PAREN_CLOSE]       )
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [RETURN]            return
8    [WORD]              lhs
8    [MEMBER]            .
8    [WORD]              m_Name
8    [MEMBER]            .
8    [FUNC_CALL]         CompareTo
8    [FPAREN_OPEN]       (
8    [WORD]              rhs
8    [MEMBER]            .
8    [WORD]              m_Name
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
13   [COMMENT_CPP]       // Want the braces aligning with the delegate keyword.
13   [NEWLINE]           
15   [COMMENT_CPP]       // Probably also an issue with lambda style delegates.
15   [NEWLINE]           