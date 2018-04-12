Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        include
1    [PREPROC_BODY]      <stdio.h>
1    [NEWLINE]           
2    [TYPE]              int
2    [FUNC_DEF]          main
2    [FPAREN_OPEN]       (
2    [TYPE]              int
2    [WORD]              argc
2    [COMMA]             ,
2    [TYPE]              char
2    [PTR_TYPE]          *
2    [PTR_TYPE]          *
2    [WORD]              argv
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [PREPROC]           #
4    [PP_IF]             ifdef
4    [WORD]              DEBUG
4    [NEWLINE]           
5    [PREPROC]           #
5    [PP_DEFINE]         define
5    [MACRO]             FORMAT
5    [STRING]            "argc=%d\n"
5    [NEWLINE]           
6    [TYPE]              std
6    [DC_MEMBER]         ::
6    [FUNC_CALL]         printf
6    [FPAREN_OPEN]       (
6    [WORD]              FORMAT
6    [COMMA]             ,
6    [WORD]              argc
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [PREPROC]           #
7    [PP_UNDEF]          undef
7    [WORD]              FORMAT
7    [NEWLINE]           
8    [PREPROC]           #
8    [PP_ENDIF]          endif
8    [WORD]              DEBUG
8    [NEWLINE]           
9    [PREPROC]           #
9    [PP_IF]             ifdef
9    [WORD]              _OPENMP
9    [NEWLINE]           
10   [PREPROC]           #
10   [PP_PRAGMA]         pragma
10   [PREPROC_BODY]      omp parallel
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [FUNC_CALL]         printf
12   [FPAREN_OPEN]       (
12   [STRING]            "Hello from thread!\n"
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
14   [PREPROC]           #
14   [PP_ENDIF]          endif
14   [NEWLINE]           
15   [RETURN]            return
15   [NUMBER]            0
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           