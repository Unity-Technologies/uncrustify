Line [Token]             Text
1    [PREPROC]           #
1    [PP_IF]             ifdef
1    [WORD]              foo
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_INCLUDE]        include
2    [PREPROC_BODY]      <foo1.h>
2    [NEWLINE]           
3    [PREPROC]           #
3    [PP_ELSE]           else
3    [NEWLINE]           
4    [PREPROC]           #
4    [PP_INCLUDE]        include
4    [PREPROC_BODY]      <foo2.h>
4    [NEWLINE]           
5    [PREPROC]           #
5    [PP_ENDIF]          endif
5    [NEWLINE]           
7    [TYPE]              int
7    [NEWLINE]           
8    [FUNC_DEF]          show_interrupts
8    [FPAREN_OPEN]       (
8    [STRUCT]            struct
8    [TYPE]              seq_file
8    [PTR_TYPE]          *
8    [WORD]              p
8    [COMMA]             ,
8    [TYPE]              void
8    [PTR_TYPE]          *
8    [WORD]              v
8    [FPAREN_CLOSE]      )
8    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [PREPROC]           #
10   [PP_IF]             ifndef
10   [TYPE]              CONFIG_SMP
10   [NEWLINE]           
11   [WORD]              a
11   [INCDEC_AFTER]      ++
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [PREPROC]           #
12   [PP_ELSE]           else
12   [NEWLINE]           
13   [FOR]               for
13   [SPAREN_OPEN]       (
13   [WORD]              b
13   [ASSIGN]            =
13   [NUMBER]            0
13   [SEMICOLON]         ;
13   [WORD]              b
13   [COMPARE]           <
13   [NUMBER]            9
13   [SEMICOLON]         ;
13   [WORD]              b
13   [INCDEC_AFTER]      ++
13   [SPAREN_CLOSE]      )
13   [VBRACE_OPEN]       
13   [NEWLINE]           
14   [IF]                if
14   [SPAREN_OPEN]       (
14   [WORD]              b
14   [ARITH]             &
14   [NUMBER]            1
14   [SPAREN_CLOSE]      )
14   [VBRACE_OPEN]       
14   [NEWLINE]           
15   [WORD]              k
15   [INCDEC_AFTER]      ++
15   [SEMICOLON]         ;
15   [VBRACE_CLOSE]      
15   [VBRACE_CLOSE]      
15   [NEWLINE]           
16   [PREPROC]           #
16   [PP_ENDIF]          endif
16   [NEWLINE]           
18   [IF]                if
18   [SPAREN_OPEN]       (
18   [WORD]              v
18   [SPAREN_CLOSE]      )
18   [NEWLINE]           
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [FUNC_CALL]         bar
20   [FPAREN_OPEN]       (
20   [WORD]              v
20   [FPAREN_CLOSE]      )
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [PREPROC]           #
21   [PP_IF]             if
21   [WORD]              DEBUG
21   [COMPARE]           ==
21   [NUMBER]            1
21   [NEWLINE]           
22   [FUNC_CALL]         printf
22   [FPAREN_OPEN]       (
22   [STRING]            "yup\n"
22   [FPAREN_CLOSE]      )
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [PREPROC]           #
23   [PP_ENDIF]          endif
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [NEWLINE]           
25   [BRACE_CLOSE]       }
25   [NEWLINE]           
27   [TYPE]              void
27   [FUNC_DEF]          foo
27   [FPAREN_OPEN]       (
27   [FPAREN_CLOSE]      )
27   [NEWLINE]           
28   [BRACE_OPEN]        {
28   [NEWLINE]           
29   [TYPE]              int
29   [WORD]              i
29   [ASSIGN]            =
29   [NUMBER]            0
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [PREPROC]           #
30   [PP_IF]             if
30   [WORD]              DEBUG
30   [COMPARE]           ==
30   [NUMBER]            1
30   [NEWLINE]           
31   [WORD]              i
31   [INCDEC_AFTER]      --
31   [SEMICOLON]         ;
31   [NEWLINE]           
32   [PREPROC]           #
32   [PP_ENDIF]          endif
32   [NEWLINE]           
33   [WORD]              i
33   [INCDEC_AFTER]      ++
33   [SEMICOLON]         ;
33   [NEWLINE]           
34   [BRACE_CLOSE]       }
34   [NEWLINE]           