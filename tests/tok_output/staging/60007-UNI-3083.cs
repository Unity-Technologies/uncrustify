Line [Token]             Text
1    [CLASS]             class
1    [TYPE]              ClassWithCtorICall
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [QUALIFIER]         public
3    [FUNC_CLASS_DEF]    ClassWithCtorICall
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [FUNC_CALL]         DoICall
5    [FPAREN_OPEN]       (
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
8    [COMMENT_CPP]       //It shouldn't add an extra space before 0x1000
8    [NEWLINE]           
9    [SQUARE_OPEN]       [
9    [FUNC_CALL]         MethodImpl
9    [FPAREN_OPEN]       (
9    [PAREN_OPEN]        (
9    [TYPE]              MethodImplOptions
9    [PAREN_CLOSE]       )
9    [NUMBER]            0x1000
9    [FPAREN_CLOSE]      )
9    [SQUARE_CLOSE]      ]
9    [NEWLINE]           
10   [QUALIFIER]         static
10   [QUALIFIER]         extern
10   [TYPE]              void
10   [FUNC_PROTO]        DoICall
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
12   [COMMENT_CPP]       //It shouldn't add an extra space before 1000
12   [NEWLINE]           
13   [SQUARE_OPEN]       [
13   [FUNC_CALL]         MethodImpl
13   [FPAREN_OPEN]       (
13   [PAREN_OPEN]        (
13   [TYPE]              MethodImplOptions
13   [PAREN_CLOSE]       )
13   [NUMBER]            1000
13   [FPAREN_CLOSE]      )
13   [SQUARE_CLOSE]      ]
13   [NEWLINE]           
14   [QUALIFIER]         static
14   [QUALIFIER]         extern
14   [TYPE]              void
14   [FUNC_PROTO]        DoICall
14   [FPAREN_OPEN]       (
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           