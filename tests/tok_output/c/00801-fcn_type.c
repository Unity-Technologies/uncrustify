Line [Token]             Text
1    [TYPEDEF]           typedef
1    [TYPE]              void
1    [TPAREN_OPEN]       (
1    [PTR_TYPE]          *
1    [TYPE]              my_fcn_ptr
1    [TPAREN_CLOSE]      )
1    [FPAREN_OPEN]       (
1    [TYPE]              char
1    [PTR_TYPE]          *
1    [COMMA]             ,
1    [TYPE]              int
1    [FPAREN_CLOSE]      )
1    [SEMICOLON]         ;
1    [NEWLINE]           
2    [TYPEDEF]           typedef
2    [QUALIFIER]         const
2    [TYPE]              char
2    [PTR_TYPE]          *
2    [TPAREN_OPEN]       (
2    [TYPE]              my_fcn_ptr
2    [TPAREN_CLOSE]      )
2    [FPAREN_OPEN]       (
2    [TYPE]              char
2    [PTR_TYPE]          *
2    [COMMA]             ,
2    [TYPE]              int
2    [FPAREN_CLOSE]      )
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [TYPEDEF]           typedef
3    [TYPE]              int
3    [TPAREN_OPEN]       (
3    [TYPE]              my_fcn_ptr
3    [TPAREN_CLOSE]      )
3    [FPAREN_OPEN]       (
3    [TYPE]              char
3    [PTR_TYPE]          *
3    [COMMA]             ,
3    [TYPE]              int
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [TYPEDEF]           typedef
4    [STRUCT]            struct
4    [TYPE]              foo
4    [PTR_TYPE]          *
4    [TPAREN_OPEN]       (
4    [TYPE]              my_fcn_ptr
4    [TPAREN_CLOSE]      )
4    [FPAREN_OPEN]       (
4    [TYPE]              char
4    [PTR_TYPE]          *
4    [COMMA]             ,
4    [TYPE]              int
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [TYPEDEF]           typedef
5    [ENUM]              enum
5    [TYPE]              foo
5    [PTR_TYPE]          *
5    [PAREN_OPEN]        (
5    [DEREF]             *
5    [WORD]              my_fcn_ptr
5    [PAREN_CLOSE]       )
5    [FPAREN_OPEN]       (
5    [TYPE]              char
5    [PTR_TYPE]          *
5    [COMMA]             ,
5    [TYPE]              int
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [TYPEDEF]           typedef
6    [QUALIFIER]         const
6    [STRUCT]            struct
6    [TYPE]              foo
6    [PTR_TYPE]          *
6    [TPAREN_OPEN]       (
6    [PTR_TYPE]          *
6    [TYPE]              my_fcn_ptr
6    [TPAREN_CLOSE]      )
6    [FPAREN_OPEN]       (
6    [TYPE]              char
6    [PTR_TYPE]          *
6    [COMMA]             ,
6    [TYPE]              int
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [TYPEDEF]           typedef
7    [TYPE]              BOOL
7    [TPAREN_OPEN]       (
7    [TYPE]              my_fcn_ptr
7    [TPAREN_CLOSE]      )
7    [FPAREN_OPEN]       (
7    [TYPE]              char
7    [PTR_TYPE]          *
7    [COMMA]             ,
7    [TYPE]              int
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [TYPEDEF]           typedef
8    [TYPE]              INT32
8    [TPAREN_OPEN]       (
8    [PTR_TYPE]          *
8    [TYPE]              my_fcn_ptr
8    [TPAREN_CLOSE]      )
8    [FPAREN_OPEN]       (
8    [TYPE]              char
8    [PTR_TYPE]          *
8    [COMMA]             ,
8    [TYPE]              int
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [TYPEDEF]           typedef
9    [TYPE]              int
9    [TYPE]              INT32
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [TYPEDEF]           typedef
10   [STRUCT]            struct
10   [TYPE]              foo
10   [NEWLINE]           
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [TYPE]              int
11   [WORD]              a
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [TYPE]              fooey
12   [SEMICOLON]         ;
12   [NEWLINE]           
14   [TYPEDEF]           typedef
14   [STRUCT]            struct
14   [NEWLINE]           
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [TYPE]              int
15   [WORD]              a
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [TYPE]              queso
16   [SEMICOLON]         ;
16   [NEWLINE]           
18   [STRUCT]            struct
18   [TYPE]              myfoo
18   [NEWLINE]           
18   [BRACE_OPEN]        {
18   [NEWLINE]           
19   [TYPE]              INT32
19   [WORD]              age
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [QUALIFIER]         const
20   [STRUCT]            struct
20   [TYPE]              foo
20   [PTR_TYPE]          *
20   [TPAREN_OPEN]       (
20   [PTR_TYPE]          *
20   [FUNC_VAR]          my_fcn_ptr
20   [TPAREN_CLOSE]      )
20   [FPAREN_OPEN]       (
20   [TYPE]              char
20   [PTR_TYPE]          *
20   [COMMA]             ,
20   [TYPE]              int
20   [FPAREN_CLOSE]      )
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [QUALIFIER]         const
21   [TYPE]              CHAR
21   [PTR_TYPE]          *
21   [WORD]              name
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [TYPE]              MYTYPE
22   [TPAREN_OPEN]       (
22   [PTR_TYPE]          *
22   [FUNC_VAR]          foo
22   [TPAREN_CLOSE]      )
22   [FPAREN_OPEN]       (
22   [TYPE]              int
22   [COMMA]             ,
22   [TYPE]              char
22   [FPAREN_CLOSE]      )
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [TYPE]              void
23   [PTR_TYPE]          *
23   [WORD]              user
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [TYPE]              void
24   [TPAREN_OPEN]       (
24   [PTR_TYPE]          *
24   [FUNC_VAR]          foo
24   [TPAREN_CLOSE]      )
24   [FPAREN_OPEN]       (
24   [TYPE]              int
24   [COMMA]             ,
24   [TYPE]              char
24   [FPAREN_CLOSE]      )
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [BRACE_CLOSE]       }
25   [SEMICOLON]         ;
25   [NEWLINE]           
27   [TYPE]              SMU
27   [FUNC_DEF]          foo
27   [FPAREN_OPEN]       (
27   [TYPE]              void
27   [FPAREN_CLOSE]      )
27   [NEWLINE]           
28   [BRACE_OPEN]        {
28   [NEWLINE]           
29   [TYPE]              double
29   [WORD]              AAA
29   [ASSIGN]            =
29   [NUMBER_FP]         1.e-3
29   [COMMA]             ,
29   [WORD]              BBB
29   [ASSIGN]            =
29   [NUMBER_FP]         0.016
29   [COMMA]             ,
29   [WORD]              CCC
29   [ASSIGN]            =
29   [NUMBER]            2
29   [ARITH]             *
29   [WORD]              DDD
29   [ARITH]             *
29   [FUNC_CALL]         sqrt
29   [FPAREN_OPEN]       (
29   [WORD]              EEE
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [WORD]              a
30   [ASSIGN]            =
30   [NUMBER]            4
30   [SEMICOLON]         ;
30   [NEWLINE]           
31   [PAREN_OPEN]        (
31   [DEREF]             *
31   [WORD]              ABC
31   [PAREN_CLOSE]       )
31   [FPAREN_OPEN]       (
31   [FPAREN_CLOSE]      )
31   [SEMICOLON]         ;
31   [NEWLINE]           
32   [RETURN]            return
32   [PAREN_OPEN]        (
32   [FUNC_CALL]         SMUIFY
32   [FPAREN_OPEN]       (
32   [WORD]              a
32   [FPAREN_CLOSE]      )
32   [PAREN_CLOSE]       )
32   [SEMICOLON]         ;
32   [NEWLINE]           
33   [BRACE_CLOSE]       }
33   [NEWLINE]           
35   [TYPEDEF]           typedef
35   [STRUCT]            struct
35   [NEWLINE]           
35   [BRACE_OPEN]        {
35   [NEWLINE]           
36   [TYPE]              void
36   [PAREN_OPEN]        (
36   [PTR_TYPE]          *
36   [FUNC_VAR]          newObject
36   [PAREN_CLOSE]       )
36   [FPAREN_OPEN]       (
36   [QUALIFIER]         const
36   [TYPE]              object_info
36   [PTR_TYPE]          *
36   [WORD]              info
36   [COMMA]             ,
36   [QUALIFIER]         const
36   [TYPE]              IObject
36   [PTR_TYPE]          *
36   [PTR_TYPE]          *
36   [WORD]              interface
36   [COMMA]             ,
36   [STRUCT]            struct
36   [TYPE]              object_h
36   [PTR_TYPE]          *
36   [WORD]              instance
36   [FPAREN_CLOSE]      )
36   [SEMICOLON]         ;
36   [NEWLINE]           
37   [BRACE_CLOSE]       }
37   [TYPE]              IObjectFactory
37   [SEMICOLON]         ;
37   [NEWLINE]           