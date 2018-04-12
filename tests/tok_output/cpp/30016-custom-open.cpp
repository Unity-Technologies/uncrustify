Line [Token]             Text
1    [NEWLINE]           
2    [TYPE]              void
2    [TYPE]              className
2    [DC_MEMBER]         ::
2    [FUNC_DEF]          set
2    [FPAREN_OPEN]       (
2    [QUALIFIER]         const
2    [TYPE]              objectName
2    [BYREF]             &
2    [WORD]              obj
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [FUNC_CALL]         statement1
4    [FPAREN_OPEN]       (
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [MACRO_OPEN]        MACRO_BEGIN_STUFF
5    [FPAREN_OPEN]       (
5    [WORD]              param
5    [FPAREN_CLOSE]      )
5    [NEWLINE]           
6    [FUNC_CALL]         DOSTUFF
6    [FPAREN_OPEN]       (
6    [WORD]              params
6    [FPAREN_CLOSE]      )
6    [NEWLINE]           
7    [MACRO_ELSE]        MACRO_ELSE_STUFF
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [NEWLINE]           
8    [FUNC_CALL]         DOMORESTUFF
8    [FPAREN_OPEN]       (
8    [WORD]              moreparams
8    [FPAREN_CLOSE]      )
8    [NEWLINE]           
9    [WORD]              junk
9    [ASSIGN]            =
9    [NUMBER]            1
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [MACRO_OPEN]        MACRO2_BEGIN_STUFF
10   [NEWLINE]           
11   [WORD]              junk
11   [ASSIGN]            +=
11   [NUMBER]            3
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [MACRO_ELSE]        MACRO2_ELSE_STUFF
12   [NEWLINE]           
13   [WORD]              junk
13   [ASSIGN]            +=
13   [NUMBER]            4
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [MACRO_CLOSE]       MACRO2_END_STUFF
14   [NEWLINE]           
15   [FUNC_CALL]         DOLASTSTUFF
15   [FPAREN_OPEN]       (
15   [WORD]              lastparams
15   [FPAREN_CLOSE]      )
15   [NEWLINE]           
16   [MACRO_CLOSE]       MACRO_END_STUFF
16   [FPAREN_OPEN]       (
16   [FPAREN_CLOSE]      )
16   [NEWLINE]           
17   [FUNC_CALL]         statement2
17   [FPAREN_OPEN]       (
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [NEWLINE]           
21   [MACRO_OPEN]        MACRO2_BEGIN_STUFF
21   [NEWLINE]           
22   [COMMENT_CPP]       // comment
22   [NEWLINE]           
23   [MACRO_ELSE]        MACRO2_ELSE_STUFF
23   [NEWLINE]           
24   [COMMENT]           /* Comment */
24   [NEWLINE]           
25   [MACRO_CLOSE]       MACRO2_END_STUFF
25   [NEWLINE]           