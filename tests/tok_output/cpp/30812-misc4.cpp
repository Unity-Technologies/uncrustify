Line [Token]             Text
1    [STRUCT]            struct
1    [TYPE]              X
1    [NEWLINE]           
1    [BRACE_OPEN]        {
1    [NEWLINE]           
2    [TYPE]              void
2    [OPERATOR]          operator
2    [FUNC_PROTO]        deleteme
2    [FPAREN_OPEN]       (
2    [TYPE]              void
2    [PTR_TYPE]          *
2    [FPAREN_CLOSE]      )
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [TYPE]              void
3    [FUNC_DEF]          deallocate
3    [FPAREN_OPEN]       (
3    [TYPE]              int
3    [PTR_TYPE]          *
3    [WORD]              p
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [OPERATOR]          operator
4    [FUNC_CALL]         delete
4    [FPAREN_OPEN]       (
4    [PAREN_OPEN]        (
4    [TYPE]              void
4    [PTR_TYPE]          *
4    [PAREN_CLOSE]       )
4    [WORD]              p
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [DELETE]            delete
5    [PAREN_OPEN]        (
5    [PAREN_OPEN]        (
5    [TYPE]              void
5    [PTR_TYPE]          *
5    [PAREN_CLOSE]       )
5    [WORD]              q
5    [PAREN_CLOSE]       )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [SEMICOLON]         ;
7    [NEWLINE]           
9    [TYPE]              int
9    [FUNC_DEF]          f
9    [FPAREN_OPEN]       (
9    [TYPE]              bool
9    [WORD]              b
9    [FPAREN_CLOSE]      )
9    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [TYPEDEF]           typedef
10   [TYPE]              int
10   [TYPE]              mytype
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [IF]                if
11   [SPAREN_OPEN]       (
11   [WORD]              b
11   [SPAREN_CLOSE]      )
11   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [RETURN]            return
12   [PAREN_OPEN]        (
12   [CPP_CAST]          int
12   [PAREN_OPEN]        (
12   [NUMBER_FP]         42.0
12   [PAREN_CLOSE]       )
12   [PAREN_CLOSE]       )
12   [SEMICOLON]         ;
12   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [NEWLINE]           
13   [ELSE]              else
13   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
14   [RETURN]            return
14   [PAREN_OPEN]        (
14   [FUNC_CALL]         mytype
14   [FPAREN_OPEN]       (
14   [NUMBER_FP]         42.0
14   [FPAREN_CLOSE]      )
14   [PAREN_CLOSE]       )
14   [SEMICOLON]         ;
14   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
17   [STRUCT]            struct
17   [TYPE]              X
17   [NEWLINE]           
17   [BRACE_OPEN]        {
17   [NEWLINE]           
18   [TYPE]              double
18   [FUNC_DEF]          f
18   [FPAREN_OPEN]       (
18   [TYPE]              int
18   [WORD]              n
18   [FPAREN_CLOSE]      )
18   [NEWLINE]           
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [RETURN]            return
20   [PAREN_OPEN]        (
20   [CPP_CAST]          double
20   [PAREN_OPEN]        (
20   [WORD]              n
20   [PAREN_CLOSE]       )
20   [PAREN_CLOSE]       )
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [SEMICOLON]         ;
22   [NEWLINE]           
24   [QUALIFIER]         inline
24   [TYPE]              value_type
24   [OPERATOR]          operator
24   [FUNC_DEF]          ()
24   [FPAREN_OPEN]       (
24   [FPAREN_CLOSE]      )
24   [QUALIFIER]         const
24   [NEWLINE]           
25   [BRACE_OPEN]        {
25   [NEWLINE]           
26   [RETURN]            return
26   [PAREN_OPEN]        (
26   [CPP_CAST]          double
26   [PAREN_OPEN]        (
26   [FUNC_CALL]         rnd32
26   [FPAREN_OPEN]       (
26   [FPAREN_CLOSE]      )
26   [PAREN_CLOSE]       )
26   [ARITH]             *
26   [PAREN_OPEN]        (
26   [NUMBER_FP]         0.5
26   [ARITH]             /
26   [NUMBER]            0x80000000
26   [PAREN_CLOSE]       )
26   [PAREN_CLOSE]       )
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           