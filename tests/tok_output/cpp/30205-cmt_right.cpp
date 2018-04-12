Line [Token]             Text
1    [CLASS]             class
1    [TYPE]              X
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [STRUCT]            struct
3    [TYPE]              Zone
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [COMMENT_CPP]       //    int a;
5    [NEWLINE]           
6    [COMMENT_CPP]       //    int b;
6    [NEWLINE]           
7    [TYPE]              int
7    [WORD]              c
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [TYPE]              int
8    [WORD]              d
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [TYPE]              double
9    [WORD]              e
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [QUALIFIER]         inline
10   [FUNC_CLASS_DEF]    Zone
10   [FPAREN_OPEN]       (
10   [TYPE]              int
10   [WORD]              _c
10   [FPAREN_CLOSE]      )
10   [CONSTR_COLON]      :
10   [FUNC_CTOR_VAR]     c
10   [FPAREN_OPEN]       (
10   [WORD]              _c
10   [FPAREN_CLOSE]      )
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [COMMENT_CPP]       // constructor for zone search
11   [NEWLINE]           
13   [QUALIFIER]         inline
13   [FUNC_CLASS_DEF]    Zone
13   [FPAREN_OPEN]       (
13   [NEWLINE]           
14   [COMMENT_CPP]       //int _a,
14   [NEWLINE]           
15   [COMMENT_CPP]       //int _b,
15   [NEWLINE]           
16   [TYPE]              int
16   [WORD]              _c
16   [COMMA]             ,
16   [NEWLINE]           
17   [TYPE]              int
17   [WORD]              _d
17   [COMMA]             ,
17   [TYPE]              double
17   [WORD]              _e
17   [FPAREN_CLOSE]      )
17   [CONSTR_COLON]      :
17   [NEWLINE]           
18   [COMMENT_CPP]       //a(_a),
18   [NEWLINE]           
19   [COMMENT_CPP]       //b(_b),
19   [NEWLINE]           
20   [FUNC_CTOR_VAR]     c
20   [FPAREN_OPEN]       (
20   [WORD]              _c
20   [FPAREN_CLOSE]      )
20   [COMMA]             ,
20   [NEWLINE]           
21   [FUNC_CTOR_VAR]     d
21   [FPAREN_OPEN]       (
21   [WORD]              _d
21   [FPAREN_CLOSE]      )
21   [COMMA]             ,
21   [NEWLINE]           
22   [FUNC_CTOR_VAR]     e
22   [FPAREN_OPEN]       (
22   [WORD]              _e
22   [FPAREN_CLOSE]      )
22   [NEWLINE]           
23   [BRACE_OPEN]        {
23   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [BRACE_CLOSE]       }
25   [SEMICOLON]         ;
25   [NEWLINE]           