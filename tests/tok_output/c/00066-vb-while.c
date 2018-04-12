Line [Token]             Text
1    [TYPE]              unsigned
1    [TYPE]              long
1    [FUNC_DEF]          xdl_adler32
1    [FPAREN_OPEN]       (
1    [TYPE]              unsigned
1    [TYPE]              long
1    [WORD]              adler
1    [COMMA]             ,
1    [TYPE]              unsigned
1    [TYPE]              char
1    [QUALIFIER]         const
1    [PTR_TYPE]          *
1    [WORD]              buf
1    [COMMA]             ,
1    [NEWLINE]           
2    [TYPE]              unsigned
2    [TYPE]              int
2    [WORD]              len
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [TYPE]              int
4    [WORD]              k
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [TYPE]              unsigned
5    [TYPE]              long
5    [WORD]              s1
5    [ASSIGN]            =
5    [WORD]              adler
5    [ARITH]             &
5    [NUMBER]            0xffff
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [TYPE]              unsigned
6    [TYPE]              long
6    [WORD]              s2
6    [ASSIGN]            =
6    [PAREN_OPEN]        (
6    [WORD]              adler
6    [ARITH]             >>
6    [NUMBER]            16
6    [PAREN_CLOSE]       )
6    [ARITH]             &
6    [NUMBER]            0xffff
6    [SEMICOLON]         ;
6    [NEWLINE]           
8    [IF]                if
8    [SPAREN_OPEN]       (
8    [NOT]               !
8    [WORD]              buf
8    [SPAREN_CLOSE]      )
8    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [RETURN]            return
9    [PAREN_OPEN]        (
9    [NUMBER]            1
9    [PAREN_CLOSE]       )
9    [SEMICOLON]         ;
9    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
11   [WHILE]             while
11   [SPAREN_OPEN]       (
11   [WORD]              len
11   [COMPARE]           >
11   [NUMBER]            0
11   [SPAREN_CLOSE]      )
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [WORD]              k
13   [ASSIGN]            =
13   [WORD]              len
13   [COMPARE]           <
13   [WORD]              NMAX
13   [QUESTION]          ?
13   [WORD]              len
13   [COND_COLON]        :
13   [WORD]              NMAX
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [WORD]              len
14   [ASSIGN]            -=
14   [WORD]              k
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [WHILE]             while
15   [SPAREN_OPEN]       (
15   [WORD]              k
15   [COMPARE]           >=
15   [NUMBER]            16
15   [SPAREN_CLOSE]      )
15   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [FUNC_CALL]         DO16
17   [FPAREN_OPEN]       (
17   [WORD]              buf
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [WORD]              buf
18   [ASSIGN]            +=
18   [NUMBER]            16
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [WORD]              k
19   [ASSIGN]            -=
19   [NUMBER]            16
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [NEWLINE]           
21   [IF]                if
21   [SPAREN_OPEN]       (
21   [WORD]              k
21   [COMPARE]           !=
21   [NUMBER]            0
21   [SPAREN_CLOSE]      )
21   [NEWLINE]           
21   [BRACE_OPEN]        {
21   [NEWLINE]           
22   [DO]                do
22   [NEWLINE]           
23   [BRACE_OPEN]        {
23   [NEWLINE]           
24   [WORD]              s1
24   [ASSIGN]            +=
24   [DEREF]             *
24   [WORD]              buf
24   [INCDEC_AFTER]      ++
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [WORD]              s2
25   [ASSIGN]            +=
25   [WORD]              s1
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [BRACE_CLOSE]       }
26   [WHILE_OF_DO]       while
26   [SPAREN_OPEN]       (
26   [INCDEC_BEFORE]     --
26   [WORD]              k
26   [SPAREN_CLOSE]      )
26   [SEMICOLON]         ;
26   [NEWLINE]           
26   [BRACE_CLOSE]       }
26   [NEWLINE]           
27   [WORD]              s1
27   [ASSIGN]            %=
27   [WORD]              BASE
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [WORD]              s2
28   [ASSIGN]            %=
28   [WORD]              BASE
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [BRACE_CLOSE]       }
29   [NEWLINE]           
31   [RETURN]            return
31   [PAREN_OPEN]        (
31   [PAREN_OPEN]        (
31   [WORD]              s2
31   [ARITH]             <<
31   [NUMBER]            16
31   [PAREN_CLOSE]       )
31   [ARITH]             |
31   [WORD]              s1
31   [PAREN_CLOSE]       )
31   [SEMICOLON]         ;
31   [NEWLINE]           
32   [BRACE_CLOSE]       }
32   [NEWLINE]           
34   [TYPE]              void
34   [FUNC_DEF]          f
34   [FPAREN_OPEN]       (
34   [FPAREN_CLOSE]      )
34   [NEWLINE]           
34   [BRACE_OPEN]        {
34   [NEWLINE]           
35   [WHILE]             while
35   [SPAREN_OPEN]       (
35   [NUMBER]            1
35   [SPAREN_CLOSE]      )
35   [NEWLINE]           
35   [BRACE_OPEN]        {
35   [NEWLINE]           
36   [IF]                if
36   [SPAREN_OPEN]       (
36   [NUMBER]            2
36   [SPAREN_CLOSE]      )
36   [NEWLINE]           
36   [BRACE_OPEN]        {
36   [NEWLINE]           
37   [NUMBER]            3
37   [SEMICOLON]         ;
37   [NEWLINE]           
37   [BRACE_CLOSE]       }
37   [NEWLINE]           
38   [ELSE]              else
38   [NEWLINE]           
38   [BRACE_OPEN]        {
38   [NEWLINE]           
39   [NUMBER]            4
39   [SEMICOLON]         ;
39   [NEWLINE]           
39   [BRACE_CLOSE]       }
39   [NEWLINE]           
39   [BRACE_CLOSE]       }
39   [NEWLINE]           
40   [BRACE_CLOSE]       }
40   [NEWLINE]           