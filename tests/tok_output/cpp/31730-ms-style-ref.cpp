Line [Token]             Text
1    [TYPE]              Foo
1    [PTR_TYPE]          ^
1    [WORD]              foo
1    [ASSIGN]            =
1    [TYPE_CAST]         dynamic_cast
1    [ANGLE_OPEN]        <
1    [TYPE]              Bar
1    [PTR_TYPE]          ^
1    [ANGLE_CLOSE]       >
1    [PAREN_OPEN]        (
1    [WORD]              bar
1    [PAREN_CLOSE]       )
1    [SEMICOLON]         ;
1    [NEWLINE]           
2    [TYPE]              Foo
2    [PTR_TYPE]          *
2    [WORD]              foo
2    [ASSIGN]            =
2    [TYPE_CAST]         dynamic_cast
2    [ANGLE_OPEN]        <
2    [TYPE]              Bar
2    [PTR_TYPE]          *
2    [ANGLE_CLOSE]       >
2    [PAREN_OPEN]        (
2    [WORD]              bar
2    [PAREN_CLOSE]       )
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [WORD]              x
3    [ASSIGN]            =
3    [WORD]              a
3    [CARET]             ^
3    [WORD]              b
3    [SEMICOLON]         ;
3    [NEWLINE]           
5    [TYPE]              int
5    [FUNC_DEF]          main
5    [FPAREN_OPEN]       (
5    [TYPE]              Platform
5    [DC_MEMBER]         ::
5    [TYPE]              Array
5    [ANGLE_OPEN]        <
5    [TYPE]              Platform
5    [DC_MEMBER]         ::
5    [TYPE]              String
5    [PTR_TYPE]          ^
5    [ANGLE_CLOSE]       >
5    [PTR_TYPE]          ^
5    [COMMENT]           /*args*/
5    [FPAREN_CLOSE]      )
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
9    [TYPE]              Platform
9    [DC_MEMBER]         ::
9    [TYPE]              Array
9    [ANGLE_OPEN]        <
9    [TYPE]              unsigned
9    [TYPE]              char
9    [ANGLE_CLOSE]       >
9    [PTR_TYPE]          ^
9    [WORD]              a
9    [SEMICOLON]         ;
9    [NEWLINE]           