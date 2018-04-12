Line [Token]             Text
1    [TEMPLATE]          template
1    [ANGLE_OPEN]        <
1    [TYPE]              bool
1    [TYPE]              a
1    [ANGLE_CLOSE]       >
2    [STRUCT]            struct
2    [TYPE]              T
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TYPEDEF]           typedef
3    [TYPE]              int
3    [TYPE]              result
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [BRACE_CLOSE]       }
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [TEMPLATE]          template
5    [ANGLE_OPEN]        <
5    [TYPE]              bool
5    [TYPE]              a
5    [COMMA]             ,
5    [TYPE]              bool
5    [TYPE]              b
5    [ANGLE_CLOSE]       >
6    [STRUCT]            struct
6    [TYPE]              X
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [TYPEDEF]           typedef
7    [TYPENAME]          typename
7    [TYPE]              T
7    [ANGLE_OPEN]        <
7    [TYPE]              a
7    [BOOL]              ||
7    [TYPE]              b
7    [ANGLE_CLOSE]       >
7    [DC_MEMBER]         ::
7    [TYPE]              result
7    [TYPE]              result
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [SEMICOLON]         ;
8    [NEWLINE]           
10   [TEMPLATE]          template
10   [ANGLE_OPEN]        <
10   [TYPE]              class
10   [TYPE]              T
10   [ANGLE_CLOSE]       >
11   [CLASS]             class
11   [TYPE]              new_alloc
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [PRIVATE]           public
12   [PRIVATE_COLON]     :
12   [NEWLINE]           
13   [TYPE]              void
13   [FUNC_DEF]          deallocate
13   [FPAREN_OPEN]       (
13   [TYPE]              int
13   [PTR_TYPE]          *
13   [WORD]              p
13   [COMMA]             ,
13   [TYPE]              int
13   [COMMENT]           /*num*/
13   [FPAREN_CLOSE]      )
13   [NEWLINE]           
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [TYPE]              T
15   [DC_MEMBER]         ::
15   [OPERATOR]          operator
15   [FUNC_PROTO]        delete
15   [FPAREN_OPEN]       (
15   [PAREN_OPEN]        (
15   [TYPE]              void
15   [PTR_TYPE]          *
15   [PAREN_CLOSE]       )
15   [TYPE]              p
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [SEMICOLON]         ;
17   [NEWLINE]           
19   [TYPE]              void
19   [FUNC_DEF]          test
19   [FPAREN_OPEN]       (
19   [TYPE]              void
19   [FPAREN_CLOSE]      )
19   [NEWLINE]           
20   [BRACE_OPEN]        {
20   [NEWLINE]           
21   [RETURN]            return
21   [WORD]              x
21   [COMPARE]           !=
21   [NUMBER]            0
21   [NEWLINE]           
22   [BOOL]              &&
22   [WORD]              x
22   [COMPARE]           >=
22   [NUMBER]            1
22   [NEWLINE]           
23   [BOOL]              &&
23   [WORD]              x
23   [COMPARE]           <
23   [NUMBER]            2
23   [NEWLINE]           
24   [BOOL]              &&
24   [WORD]              y
24   [COMPARE]           >=
24   [NUMBER]            3
24   [NEWLINE]           
25   [BOOL]              &&
25   [WORD]              y
25   [COMPARE]           <
25   [NUMBER]            4
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [BRACE_CLOSE]       }
26   [NEWLINE]           