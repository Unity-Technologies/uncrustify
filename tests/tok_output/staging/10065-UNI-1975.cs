Line [Token]             Text
1    [COMMENT_CPP]       // typeof(Dictionary<, >)
1    [NEWLINE]           
3    [COMMENT_CPP]       // is getting changed to
3    [NEWLINE]           
5    [COMMENT_CPP]       // typeof(Dictionary<, >)
5    [NEWLINE]           
7    [COMMENT_CPP]       // (space added after comma)
7    [NEWLINE]           
9    [COMMENT_CPP]       // Definitely not typical for C#. Needs special handling.
9    [NEWLINE]           
11   [QUALIFIER]         public
11   [CLASS]             class
11   [TYPE]              Class
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [QUALIFIER]         public
13   [TYPE]              void
13   [FUNC_DEF]          foo
13   [FPAREN_OPEN]       (
13   [TYPE]              Type
13   [WORD]              type
13   [FPAREN_CLOSE]      )
13   [NEWLINE]           
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [IF]                if
15   [SPAREN_OPEN]       (
15   [WORD]              type
15   [COMPARE]           ==
15   [SIZEOF]            typeof
15   [PAREN_OPEN]        (
15   [WORD]              List
15   [ANGLE_OPEN]        <
15   [ANGLE_CLOSE]       >
15   [PAREN_CLOSE]       )
15   [SPAREN_CLOSE]      )
15   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
18   [ELSE]              else
18   [ELSEIF]            if
18   [SPAREN_OPEN]       (
18   [WORD]              type
18   [COMPARE]           ==
18   [SIZEOF]            typeof
18   [PAREN_OPEN]        (
18   [WORD]              Dictionary
18   [ANGLE_OPEN]        <
18   [COMMA]             ,
18   [ANGLE_CLOSE]       >
18   [PAREN_CLOSE]       )
18   [SPAREN_CLOSE]      )
18   [NEWLINE]           
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [TYPE]              var
20   [WORD]              bar
20   [ASSIGN]            =
20   [SIZEOF]            typeof
20   [PAREN_OPEN]        (
20   [WORD]              Dictionary
20   [ANGLE_OPEN]        <
20   [COMMA]             ,
20   [ANGLE_CLOSE]       >
20   [PAREN_CLOSE]       )
20   [MEMBER]            .
20   [FUNC_CALL]         Bar
20   [FPAREN_OPEN]       (
20   [FPAREN_CLOSE]      )
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           