Line [Token]             Text
1    [NEWLINE]           
2    [TYPE]              int
2    [FUNC_DEF]          main
2    [FPAREN_OPEN]       (
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [TYPE]              int
4    [WORD]              a
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [PREPROC]           #
5    [PP_IF]             ifndef
5    [WORD]              SOMEDEF
5    [NEWLINE]           
6    [TYPE]              int
6    [WORD]              b
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [PREPROC]           #
7    [PP_ENDIF]          endif
7    [COMMENT]           /* SOMEDEF */
7    [NEWLINE]           
9    [IF]                if
9    [SPAREN_OPEN]       (
9    [WORD]              a
9    [SPAREN_CLOSE]      )
9    [NEWLINE]           
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
12   [PREPROC]           #
12   [PP_IF]             ifndef
12   [WORD]              SOMEDEF
12   [NEWLINE]           
13   [ELSE]              else
13   [ELSEIF]            if
13   [SPAREN_OPEN]       (
13   [WORD]              b
13   [SPAREN_CLOSE]      )
13   [NEWLINE]           
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
16   [PREPROC]           #
16   [PP_ENDIF]          endif
16   [COMMENT]           /* SOMEDEF */
16   [NEWLINE]           
18   [COMMENT]           /* same thing w/o preprocs for reference */
18   [NEWLINE]           
19   [IF]                if
19   [SPAREN_OPEN]       (
19   [WORD]              a
19   [SPAREN_CLOSE]      )
19   [NEWLINE]           
20   [BRACE_OPEN]        {
20   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [NEWLINE]           
22   [ELSE]              else
22   [ELSEIF]            if
22   [SPAREN_OPEN]       (
22   [WORD]              b
22   [SPAREN_CLOSE]      )
22   [NEWLINE]           
23   [BRACE_OPEN]        {
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [NEWLINE]           
26   [PREPROC]           #
26   [PP_IF]             ifdef
26   [WORD]              FOO
26   [NEWLINE]           
27   [DO]                do
27   [NEWLINE]           
28   [BRACE_OPEN]        {
28   [NEWLINE]           
29   [FUNC_CALL]         Foo
29   [FPAREN_OPEN]       (
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           
31   [PREPROC]           #
31   [PP_ENDIF]          endif
31   [NEWLINE]           
32   [WHILE_OF_DO]       while
32   [SPAREN_OPEN]       (
32   [WORD]              Loop
32   [INCDEC_AFTER]      --
32   [SPAREN_CLOSE]      )
32   [SEMICOLON]         ;
32   [NEWLINE]           
33   [BRACE_CLOSE]       }
33   [NEWLINE]           