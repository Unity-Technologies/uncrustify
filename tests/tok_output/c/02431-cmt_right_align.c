Line [Token]             Text
1    [NEWLINE]           
2    [TYPE]              int
2    [FUNC_DEF]          foo1
2    [FPAREN_OPEN]       (
2    [TYPE]              int
2    [WORD]              bar
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [IF]                if
4    [SPAREN_OPEN]       (
4    [WORD]              bar
4    [SPAREN_CLOSE]      )
4    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [IF]                if
6    [SPAREN_OPEN]       (
6    [WORD]              b
6    [SPAREN_CLOSE]      )
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [IF]                if
8    [SPAREN_OPEN]       (
8    [WORD]              a
8    [SPAREN_CLOSE]      )
8    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [IF]                if
10   [SPAREN_OPEN]       (
10   [WORD]              r
10   [SPAREN_CLOSE]      )
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [RETURN]            return
12   [PAREN_OPEN]        (
12   [WORD]              r
12   [PAREN_CLOSE]       )
12   [SEMICOLON]         ;
12   [COMMENT]           /* cool */
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
14   [ELSE]              else
14   [COMMENT]           /* if (r) */
14   [NEWLINE]           
15   [BRACE_OPEN]        {
15   [NEWLINE]           
16   [RETURN]            return
16   [PAREN_OPEN]        (
16   [WORD]              bar
16   [PAREN_CLOSE]       )
16   [SEMICOLON]         ;
16   [COMMENT]           /* uncool */
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [COMMENT]           /* if (r) */
17   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [COMMENT]           /* if (a) */
18   [NEWLINE]           
19   [BRACE_CLOSE]       }
19   [COMMENT]           /* if (b) */
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [COMMENT]           /* if (bar) */
20   [NEWLINE]           
22   [RETURN]            return
22   [PAREN_OPEN]        (
22   [NEG]               -
22   [NUMBER]            1
22   [PAREN_CLOSE]       )
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [COMMENT]           /* foo */
23   [NEWLINE]           
25   [TYPE]              int
25   [FUNC_DEF]          foo2
25   [FPAREN_OPEN]       (
25   [TYPE]              int
25   [WORD]              bar
25   [FPAREN_CLOSE]      )
25   [NEWLINE]           
26   [BRACE_OPEN]        {
26   [NEWLINE]           
27   [IF]                if
27   [SPAREN_OPEN]       (
27   [WORD]              bar
27   [SPAREN_CLOSE]      )
27   [NEWLINE]           
28   [BRACE_OPEN]        {
28   [NEWLINE]           
29   [IF]                if
29   [SPAREN_OPEN]       (
29   [WORD]              b
29   [SPAREN_CLOSE]      )
29   [NEWLINE]           
30   [BRACE_OPEN]        {
30   [NEWLINE]           
31   [IF]                if
31   [SPAREN_OPEN]       (
31   [WORD]              a
31   [SPAREN_CLOSE]      )
31   [NEWLINE]           
32   [BRACE_OPEN]        {
32   [NEWLINE]           
33   [IF]                if
33   [SPAREN_OPEN]       (
33   [WORD]              r
33   [SPAREN_CLOSE]      )
33   [NEWLINE]           
34   [BRACE_OPEN]        {
34   [NEWLINE]           
35   [RETURN]            return
35   [PAREN_OPEN]        (
35   [WORD]              r
35   [PAREN_CLOSE]       )
35   [SEMICOLON]         ;
35   [NEWLINE]           
36   [BRACE_CLOSE]       }
36   [NEWLINE]           
37   [ELSE]              else
37   [NEWLINE]           
38   [BRACE_OPEN]        {
38   [NEWLINE]           
39   [RETURN]            return
39   [PAREN_OPEN]        (
39   [WORD]              bar
39   [PAREN_CLOSE]       )
39   [SEMICOLON]         ;
39   [NEWLINE]           
40   [BRACE_CLOSE]       }
40   [COMMENT]           /* if (r) */
40   [NEWLINE]           
41   [BRACE_CLOSE]       }
41   [COMMENT]           /* if (a) */
41   [NEWLINE]           
42   [BRACE_CLOSE]       }
42   [COMMENT]           /* if (b) */
42   [NEWLINE]           
43   [BRACE_CLOSE]       }
43   [COMMENT]           /* if (bar) */
43   [NEWLINE]           
45   [RETURN]            return
45   [PAREN_OPEN]        (
45   [NEG]               -
45   [NUMBER]            1
45   [PAREN_CLOSE]       )
45   [SEMICOLON]         ;
45   [NEWLINE]           
46   [BRACE_CLOSE]       }
46   [COMMENT]           /* foo */
46   [NEWLINE]           