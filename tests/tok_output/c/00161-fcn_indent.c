Line [Token]             Text
1    [TYPE]              int
1    [FUNC_PROTO]        this_is_a_function_proto
1    [FPAREN_OPEN]       (
1    [TYPE]              int
1    [WORD]              a
1    [COMMA]             ,
1    [NEWLINE]           
2    [TYPE]              char
2    [PTR_TYPE]          *
2    [WORD]              b
2    [FPAREN_CLOSE]      )
2    [SEMICOLON]         ;
2    [NEWLINE]           
4    [TYPE]              int
4    [NEWLINE]           
4    [FUNC_DEF]          this_is_a_function_def
4    [FPAREN_OPEN]       (
4    [TYPE]              int
4    [WORD]              a
4    [COMMA]             ,
4    [NEWLINE]           
5    [TYPE]              char
5    [PTR_TYPE]          *
5    [WORD]              b
5    [FPAREN_CLOSE]      )
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [FUNC_CALL]         this_is_a_function_call
7    [FPAREN_OPEN]       (
7    [WORD]              a
7    [COMMA]             ,
7    [NEWLINE]           
8    [WORD]              b
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
10   [WORD]              a
10   [ASSIGN]            =
10   [FUNC_CALL]         another_function_call
10   [FPAREN_OPEN]       (
10   [WORD]              a
10   [COMMA]             ,
10   [NEWLINE]           
11   [WORD]              b
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
15   [TYPEDEF]           typedef
15   [QUALIFIER]         const
15   [TYPE]              char
15   [PTR_TYPE]          *
15   [TYPE]              pu8_t
15   [SEMICOLON]         ;
15   [NEWLINE]           
17   [TYPEDEF]           typedef
17   [TYPE]              short
17   [TPAREN_OPEN]       (
17   [PTR_TYPE]          *
17   [TYPE]              hello1
17   [TPAREN_CLOSE]      )
17   [FPAREN_OPEN]       (
17   [TYPE]              char
17   [WORD]              coolParam
17   [COMMA]             ,
17   [NEWLINE]           
18   [TYPE]              ushort
18   [PTR_TYPE]          *
18   [COMMA]             ,
18   [NEWLINE]           
19   [TYPE]              unsigned
19   [TYPE]              int
19   [WORD]              anotherone
19   [FPAREN_CLOSE]      )
19   [SEMICOLON]         ;
19   [NEWLINE]           
21   [TYPEDEF]           typedef
21   [QUALIFIER]         const
21   [TYPE]              unsigned
21   [TYPE]              char
21   [PTR_TYPE]          *
21   [TPAREN_OPEN]       (
21   [TYPE]              getfcn_t
21   [TPAREN_CLOSE]      )
21   [FPAREN_OPEN]       (
21   [NEWLINE]           
22   [TYPE]              int
22   [WORD]              idx
22   [COMMA]             ,
22   [TYPE]              ulong
22   [WORD]              op
22   [FPAREN_CLOSE]      )
22   [SEMICOLON]         ;
22   [NEWLINE]           
24   [TYPE]              short
24   [TPAREN_OPEN]       (
24   [PTR_TYPE]          *
24   [FUNC_VAR]          hello2
24   [TPAREN_CLOSE]      )
24   [FPAREN_OPEN]       (
24   [TYPE]              char
24   [WORD]              coolParam
24   [COMMA]             ,
24   [NEWLINE]           
25   [TYPE]              ulong
25   [PTR_TYPE]          *
25   [COMMA]             ,
25   [NEWLINE]           
26   [TYPE]              uchar
26   [COMMA]             ,
26   [NEWLINE]           
27   [TYPE]              unsigned
27   [TYPE]              int
27   [WORD]              anotherone
27   [FPAREN_CLOSE]      )
27   [SEMICOLON]         ;
27   [NEWLINE]           
29   [QUALIFIER]         const
29   [TYPE]              unsigned
29   [TYPE]              char
29   [PTR_TYPE]          *
29   [TPAREN_OPEN]       (
29   [PTR_TYPE]          *
29   [FUNC_VAR]          getstr
29   [TPAREN_CLOSE]      )
29   [FPAREN_OPEN]       (
29   [NEWLINE]           
30   [TYPE]              int
30   [WORD]              idx
30   [COMMA]             ,
30   [NEWLINE]           
31   [TYPE]              ulong
31   [WORD]              op
31   [FPAREN_CLOSE]      )
31   [SEMICOLON]         ;
31   [NEWLINE]           
33   [TYPE]              short
33   [FUNC_PROTO]        hello3
33   [FPAREN_OPEN]       (
33   [TYPE]              char
33   [WORD]              coolParam
33   [COMMA]             ,
33   [NEWLINE]           
34   [TYPE]              ushort
34   [PTR_TYPE]          *
34   [COMMA]             ,
34   [NEWLINE]           
35   [TYPE]              unsigned
35   [TYPE]              int
35   [WORD]              anotherone
35   [FPAREN_CLOSE]      )
35   [SEMICOLON]         ;
35   [NEWLINE]           