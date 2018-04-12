Line [Token]             Text
1    [NEWLINE]           
2    [TYPE]              void
2    [FUNC_DEF]          f
2    [FPAREN_OPEN]       (
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [IF]                if
3    [SPAREN_OPEN]       (
3    [NUMBER]            0
3    [SPAREN_CLOSE]      )
3    [NEWLINE]           
4    [PREPROC]           #
4    [PP_PRAGMA]         pragma
4    [PREPROC_BODY]      omp atomic
4    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
5    [WORD]              i
5    [INCDEC_AFTER]      ++
5    [SEMICOLON]         ;
5    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
9    [TYPE]              void
9    [FUNC_DEF]          f
9    [FPAREN_OPEN]       (
9    [FPAREN_CLOSE]      )
9    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [IF]                if
10   [SPAREN_OPEN]       (
10   [NUMBER]            0
10   [SPAREN_CLOSE]      )
10   [NEWLINE]           
11   [PREPROC]           #
11   [PP_IF]             if
11   [TYPE]              foo
11   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [WORD]              i
12   [INCDEC_AFTER]      ++
12   [SEMICOLON]         ;
12   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [NEWLINE]           
13   [PREPROC]           #
13   [PP_ELSE]           else
13   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
14   [WORD]              i
14   [ASSIGN]            +=
14   [NUMBER]            2
14   [SEMICOLON]         ;
14   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [NEWLINE]           
15   [PREPROC]           #
15   [PP_ENDIF]          endif
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
18   [TYPE]              void
18   [FUNC_DEF]          f
18   [FPAREN_OPEN]       (
18   [FPAREN_CLOSE]      )
18   [NEWLINE]           
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [WHILE]             while
20   [SPAREN_OPEN]       (
20   [NUMBER]            108
20   [SPAREN_CLOSE]      )
20   [NEWLINE]           
20   [BRACE_OPEN]        {
20   [NEWLINE]           
21   [IF]                if
21   [SPAREN_OPEN]       (
21   [NUMBER]            42
21   [SPAREN_CLOSE]      )
21   [NEWLINE]           
22   [PREPROC]           #
22   [PP_PRAGMA]         pragma
22   [PREPROC_BODY]      omp critical
22   [NEWLINE]           
23   [BRACE_OPEN]        {
23   [BRACE_CLOSE]       }
23   [NEWLINE]           
24   [IF]                if
24   [SPAREN_OPEN]       (
24   [NUMBER]            23
24   [SPAREN_CLOSE]      )
24   [NEWLINE]           
25   [PREPROC]           #
25   [PP_PRAGMA]         pragma
25   [PREPROC_BODY]      omp critical
25   [NEWLINE]           
24   [BRACE_OPEN]        {
24   [NEWLINE]           
26   [INCDEC_BEFORE]     ++
26   [WORD]              i
26   [SEMICOLON]         ;
26   [NEWLINE]           
26   [BRACE_CLOSE]       }
26   [NEWLINE]           
27   [WHILE]             while
27   [SPAREN_OPEN]       (
27   [NUMBER]            16
27   [SPAREN_CLOSE]      )
27   [NEWLINE]           
28   [BRACE_OPEN]        {
28   [NEWLINE]           
28   [BRACE_CLOSE]       }
28   [NEWLINE]           
29   [TYPE]              int
29   [WORD]              i
29   [ASSIGN]            =
29   [NUMBER]            15
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [IF]                if
30   [SPAREN_OPEN]       (
30   [NUMBER]            8
30   [SPAREN_CLOSE]      )
30   [NEWLINE]           
31   [PREPROC]           #
31   [PP_PRAGMA]         pragma
31   [PREPROC_BODY]      omp atomic
31   [NEWLINE]           
30   [BRACE_OPEN]        {
30   [NEWLINE]           
32   [WORD]              i
32   [ASSIGN]            +=
32   [NUMBER]            4
32   [SEMICOLON]         ;
32   [NEWLINE]           
32   [BRACE_CLOSE]       }
32   [NEWLINE]           
33   [BRACE_CLOSE]       }
33   [NEWLINE]           
34   [BRACE_CLOSE]       }
34   [NEWLINE]           