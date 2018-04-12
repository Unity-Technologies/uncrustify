Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [TYPE]              void
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TYPE]              int
3    [WORD]              a
3    [ASSIGN]            =
3    [WORD]              x
3    [QUESTION]          ?
3    [WORD]              y
3    [COND_COLON]        :
3    [NEWLINE]           
4    [WORD]              z
4    [COMMA]             ,
4    [NEWLINE]           
5    [WORD]              b
5    [ASSIGN]            =
5    [WORD]              x
5    [QUESTION]          ?
5    [PAREN_OPEN]        (
5    [WORD]              y
5    [PAREN_CLOSE]       )
5    [COND_COLON]        :
5    [NEWLINE]           
6    [PAREN_OPEN]        (
6    [WORD]              z
6    [PAREN_CLOSE]       )
6    [COMMA]             ,
6    [NEWLINE]           
7    [WORD]              c
7    [ASSIGN]            =
7    [WORD]              x
7    [QUESTION]          ?
7    [DEREF]             *
7    [WORD]              y
7    [COND_COLON]        :
7    [NEWLINE]           
8    [DEREF]             *
8    [WORD]              z
8    [COMMA]             ,
8    [NEWLINE]           
9    [WORD]              d
9    [ASSIGN]            =
9    [WORD]              x
9    [QUESTION]          ?
9    [ADDR]              &
9    [WORD]              y
9    [COND_COLON]        :
9    [NEWLINE]           
10   [ADDR]              &
10   [WORD]              z
10   [SEMICOLON]         ;
10   [NEWLINE]           
13   [IF]                if
13   [SPAREN_OPEN]       (
13   [WORD]              x
13   [QUESTION]          ?
13   [WORD]              y
13   [COND_COLON]        :
13   [NEWLINE]           
14   [WORD]              z
14   [SPAREN_CLOSE]      )
14   [NEWLINE]           
15   [BRACE_OPEN]        {
15   [NEWLINE]           
16   [WORD]              baz
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
18   [IF]                if
18   [SPAREN_OPEN]       (
18   [WORD]              x
18   [QUESTION]          ?
18   [PAREN_OPEN]        (
18   [WORD]              y
18   [PAREN_CLOSE]       )
18   [COND_COLON]        :
18   [NEWLINE]           
19   [PAREN_OPEN]        (
19   [WORD]              z
19   [PAREN_CLOSE]       )
19   [SPAREN_CLOSE]      )
19   [NEWLINE]           
20   [BRACE_OPEN]        {
20   [NEWLINE]           
21   [WORD]              baz
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
23   [IF]                if
23   [SPAREN_OPEN]       (
23   [WORD]              x
23   [QUESTION]          ?
23   [DEREF]             *
23   [WORD]              y
23   [COND_COLON]        :
23   [NEWLINE]           
24   [DEREF]             *
24   [WORD]              z
24   [SPAREN_CLOSE]      )
24   [NEWLINE]           
25   [BRACE_OPEN]        {
25   [NEWLINE]           
26   [WORD]              baz
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
28   [IF]                if
28   [SPAREN_OPEN]       (
28   [WORD]              x
28   [QUESTION]          ?
28   [ADDR]              &
28   [WORD]              y
28   [COND_COLON]        :
28   [NEWLINE]           
29   [ADDR]              &
29   [WORD]              z
29   [SPAREN_CLOSE]      )
29   [NEWLINE]           
30   [BRACE_OPEN]        {
30   [NEWLINE]           
31   [WORD]              baz
31   [SEMICOLON]         ;
31   [NEWLINE]           
32   [BRACE_CLOSE]       }
32   [NEWLINE]           
33   [BRACE_CLOSE]       }
33   [NEWLINE]           