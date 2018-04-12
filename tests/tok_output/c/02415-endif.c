Line [Token]             Text
1    [TYPE]              int
1    [FUNC_DEF]          do_this
1    [NEWLINE]           
2    [FPAREN_OPEN]       (
2    [NEWLINE]           
3    [TYPE]              int
3    [WORD]              x
3    [COMMA]             ,
3    [NEWLINE]           
4    [TYPE]              int
4    [WORD]              y
4    [NEWLINE]           
5    [FPAREN_CLOSE]      )
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
8    [WORD]              x
8    [INCDEC_AFTER]      ++
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [PREPROC]           #
9    [PP_IF]             ifdef
9    [WORD]              ABC
9    [NEWLINE]           
10   [PREPROC]           #
10   [PP_IF]             ifdef
10   [TYPE]              DEF
10   [NEWLINE]           
11   [WORD]              x
11   [ASSIGN]            +=
11   [WORD]              y
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [PREPROC]           #
12   [PP_ENDIF]          endif
12   [NEWLINE]           
13   [PREPROC]           #
13   [PP_ENDIF]          endif
13   [NEWLINE]           
14   [WORD]              a
14   [INCDEC_AFTER]      ++
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [PREPROC]           #
15   [PP_IF]             ifdef
15   [TYPE]              ABC
15   [NEWLINE]           
16   [WORD]              b
16   [INCDEC_AFTER]      ++
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [PREPROC]           #
17   [PP_IF]             ifdef
17   [TYPE]              DEF
17   [NEWLINE]           
18   [WORD]              c
18   [INCDEC_AFTER]      ++
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [PREPROC]           #
19   [PP_IF]             ifdef
19   [TYPE]              HIJ
19   [NEWLINE]           
20   [WORD]              d
20   [INCDEC_AFTER]      ++
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [PREPROC]           #
21   [PP_ENDIF]          endif
21   [NEWLINE]           
22   [WORD]              e
22   [INCDEC_AFTER]      ++
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [PREPROC]           #
23   [PP_ENDIF]          endif
23   [NEWLINE]           
24   [WORD]              f
24   [INCDEC_AFTER]      ++
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [PREPROC]           #
25   [PP_ENDIF]          endif
25   [NEWLINE]           
26   [WORD]              g
26   [INCDEC_AFTER]      ++
26   [SEMICOLON]         ;
26   [NEWLINE]           
28   [RETURN]            return
28   [PAREN_OPEN]        (
28   [WORD]              x
28   [PAREN_CLOSE]       )
28   [NEWLINE]           
29   [BRACE_CLOSE]       }
29   [NEWLINE]           