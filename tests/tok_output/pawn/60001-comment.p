Line [Token]             Text
1    [COMMENT]           /* parse C comments interactively, using events and a state machine */
1    [NEWLINE]           
2    [FUNC_DEF]          main
2    [FPAREN_OPEN]       (
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
3    [STATE]             state
3    [TYPE]              plain
3    [VSEMICOLON]        ;
3    [NEWLINE]           
3    [BRACE_CLOSE]       }
3    [NEWLINE]           
4    [FUNC_DEF]          @keypressed
4    [FPAREN_OPEN]       (
4    [WORD]              key
4    [FPAREN_CLOSE]      )
4    [ANGLE_OPEN]        <
4    [WORD]              plain
4    [ANGLE_CLOSE]       >
4    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [STATE]             state
6    [PAREN_OPEN]        (
6    [WORD]              key
6    [COMPARE]           ==
6    [STRING]            '/'
6    [PAREN_CLOSE]       )
6    [WORD]              slash
6    [VSEMICOLON]        ;
6    [NEWLINE]           
7    [IF]                if
7    [SPAREN_OPEN]       (
7    [WORD]              key
7    [COMPARE]           !=
7    [STRING]            '/'
7    [SPAREN_CLOSE]      )
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [TYPE]              echo
8    [WORD]              key
8    [VSEMICOLON]        ;
8    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
10   [FUNC_DEF]          @keypressed
10   [FPAREN_OPEN]       (
10   [WORD]              key
10   [FPAREN_CLOSE]      )
10   [ANGLE_OPEN]        <
10   [WORD]              slash
10   [ANGLE_CLOSE]       >
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [STATE]             state
12   [PAREN_OPEN]        (
12   [WORD]              key
12   [COMPARE]           !=
12   [STRING]            '/'
12   [PAREN_CLOSE]       )
12   [WORD]              plain
12   [VSEMICOLON]        ;
12   [NEWLINE]           
13   [STATE]             state
13   [PAREN_OPEN]        (
13   [WORD]              key
13   [COMPARE]           ==
13   [STRING]            '*'
13   [PAREN_CLOSE]       )
13   [TYPE]              comment
13   [VSEMICOLON]        ;
13   [NEWLINE]           
14   [WORD]              echo
14   [STRING]            '/'
14   [VSEMICOLON]        ;
14   [COMMENT]           /* print '/' held back from previous state */
14   [NEWLINE]           
15   [IF]                if
15   [SPAREN_OPEN]       (
15   [WORD]              key
15   [COMPARE]           !=
15   [STRING]            '/'
15   [SPAREN_CLOSE]      )
15   [BRACE_OPEN]        {
15   [NEWLINE]           
16   [TYPE]              echo
16   [WORD]              key
16   [VSEMICOLON]        ;
16   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
18   [FUNC_DEF]          @keypressed
18   [FPAREN_OPEN]       (
18   [WORD]              key
18   [FPAREN_CLOSE]      )
18   [ANGLE_OPEN]        <
18   [WORD]              comment
18   [ANGLE_CLOSE]       >
18   [NEWLINE]           
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [TYPE]              echo
20   [WORD]              key
20   [VSEMICOLON]        ;
20   [NEWLINE]           
21   [STATE]             state
21   [PAREN_OPEN]        (
21   [WORD]              key
21   [COMPARE]           ==
21   [STRING]            '*'
21   [PAREN_CLOSE]       )
21   [WORD]              star
21   [VSEMICOLON]        ;
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
23   [FUNC_DEF]          @keypressed
23   [FPAREN_OPEN]       (
23   [WORD]              key
23   [FPAREN_CLOSE]      )
23   [ANGLE_OPEN]        <
23   [WORD]              star
23   [ANGLE_CLOSE]       >
23   [NEWLINE]           
24   [BRACE_OPEN]        {
24   [NEWLINE]           
25   [TYPE]              echo
25   [WORD]              key
25   [VSEMICOLON]        ;
25   [NEWLINE]           
26   [STATE]             state
26   [PAREN_OPEN]        (
26   [WORD]              key
26   [COMPARE]           !=
26   [STRING]            '*'
26   [PAREN_CLOSE]       )
26   [WORD]              comment
26   [VSEMICOLON]        ;
26   [NEWLINE]           
27   [STATE]             state
27   [PAREN_OPEN]        (
27   [WORD]              key
27   [COMPARE]           ==
27   [STRING]            '/'
27   [PAREN_CLOSE]       )
27   [WORD]              plain
27   [VSEMICOLON]        ;
27   [NEWLINE]           
28   [BRACE_CLOSE]       }
28   [NEWLINE]           
29   [FUNC_DEF]          echo
29   [FPAREN_OPEN]       (
29   [WORD]              key
29   [FPAREN_CLOSE]      )
29   [ANGLE_OPEN]        <
29   [WORD]              plain
29   [COMMA]             ,
29   [WORD]              slash
29   [ANGLE_CLOSE]       >
29   [NEWLINE]           
30   [BRACE_OPEN]        {
30   [NEWLINE]           
30   [TYPE]              printchar
30   [WORD]              key
30   [COMMA]             ,
30   [TYPE]              yellow
30   [VSEMICOLON]        ;
30   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           
31   [FUNC_DEF]          echo
31   [FPAREN_OPEN]       (
31   [WORD]              key
31   [FPAREN_CLOSE]      )
31   [ANGLE_OPEN]        <
31   [WORD]              comment
31   [COMMA]             ,
31   [WORD]              star
31   [ANGLE_CLOSE]       >
31   [NEWLINE]           
32   [BRACE_OPEN]        {
32   [NEWLINE]           
32   [TYPE]              printchar
32   [WORD]              key
32   [COMMA]             ,
32   [TYPE]              green
32   [VSEMICOLON]        ;
32   [NEWLINE]           
32   [BRACE_CLOSE]       }
32   [NEWLINE]           
33   [FUNC_DEF]          printchar
33   [FPAREN_OPEN]       (
33   [WORD]              ch
33   [COMMA]             ,
33   [WORD]              colour
33   [FPAREN_CLOSE]      )
33   [NEWLINE]           
34   [BRACE_OPEN]        {
34   [NEWLINE]           
35   [WORD]              setattr
35   [DOT]               .
35   [WORD]              foreground
35   [ASSIGN]            =
35   [TYPE]              colour
35   [VSEMICOLON]        ;
35   [NEWLINE]           
36   [WORD]              printf
36   [STRING]            "%c"
36   [COMMA]             ,
36   [WORD]              ch
36   [VSEMICOLON]        ;
36   [NEWLINE]           
37   [BRACE_CLOSE]       }
37   [NEWLINE]           