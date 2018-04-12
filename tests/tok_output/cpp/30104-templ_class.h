Line [Token]             Text
1    [TEMPLATE]          template
1    [ANGLE_OPEN]        <
1    [TYPENAME]          typename
1    [TYPE]              T
1    [COMMA]             ,
1    [TEMPLATE]          template
1    [ANGLE_OPEN]        <
1    [TYPENAME]          typename
1    [ANGLE_CLOSE]       >
1    [TYPE]              class
1    [TYPE]              SpecialClass
1    [ANGLE_CLOSE]       >
1    [NEWLINE]           
2    [CLASS]             class
2    [TYPE]              Example
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [COMMENT_CPP]       // Copy constructor with other variants of Example
4    [NEWLINE]           
5    [TEMPLATE]          template
5    [ANGLE_OPEN]        <
5    [TEMPLATE]          template
5    [ANGLE_OPEN]        <
5    [TYPENAME]          typename
5    [ANGLE_CLOSE]       >
5    [TYPE]              class
5    [TYPE]              OtherSpecialClass
5    [ANGLE_CLOSE]       >
5    [NEWLINE]           
6    [FUNC_CLASS_DEF]    Example
6    [FPAREN_OPEN]       (
6    [QUALIFIER]         const
6    [TYPE]              Example
6    [ANGLE_OPEN]        <
6    [TYPE]              T
6    [COMMA]             ,
6    [TYPE]              OtherSpecialClass
6    [ANGLE_CLOSE]       >
6    [BYREF]             &
6    [WORD]              other
6    [FPAREN_CLOSE]      )
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [COMMENT_CPP]       // do something useful here
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
11   [COMMENT]           /** The normal member var based on the template arguments */
11   [NEWLINE]           
12   [TYPE]              SpecialClass
12   [ANGLE_OPEN]        <
12   [TYPE]              T
12   [ANGLE_CLOSE]       >
12   [WORD]              memberVar
12   [SEMICOLON]         ;
12   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [SEMICOLON]         ;
14   [NEWLINE]           