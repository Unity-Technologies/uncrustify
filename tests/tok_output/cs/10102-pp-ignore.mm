Line [Token]             Text
1    [PREPROC]           #
1    [PP_DEFINE]         define
1    [PP_IGNORE]         a
1    [PP_IGNORE]         z
1    [NL_CONT]           \
2    [PP_IGNORE]         x
2    [NEWLINE]           
4    [PREPROC]           #
4    [PP_DEFINE]         define
4    [MACRO_FUNC]        a
4    [FPAREN_OPEN]       (
4    [WORD]              b
4    [FPAREN_CLOSE]      )
4    [PP_IGNORE]         z
4    [NL_CONT]           \
5    [PP_IGNORE]         x
5    [NEWLINE]           
7    [PREPROC]           #
7    [PP_DEFINE]         define
7    [MACRO_FUNC]        ab
7    [FPAREN_OPEN]       (
7    [WORD]              b
7    [FPAREN_CLOSE]      )
7    [PP_IGNORE]         z
7    [NL_CONT]           \
8    [PP_IGNORE]         x
8    [NEWLINE]           
10   [PREPROC]           #
10   [PP_DEFINE]         define
10   [MACRO_FUNC]        abc
10   [FPAREN_OPEN]       (
10   [WORD]              b
10   [FPAREN_CLOSE]      )
10   [PP_IGNORE]         z
10   [NL_CONT]           \
11   [PP_IGNORE]         x
11   [NEWLINE]           
13   [PREPROC]           #
13   [PP_DEFINE]         define
13   [MACRO_FUNC]        abcd
13   [FPAREN_OPEN]       (
13   [WORD]              b
13   [FPAREN_CLOSE]      )
13   [PP_IGNORE]         z
13   [NL_CONT]           \
14   [PP_IGNORE]         x
14   [NEWLINE]           
17   [PREPROC]           #
17   [PP_IF]             if
17   [WORD]              FOO
17   [NEWLINE]           
18   [PREPROC]           #
18   [PP_DEFINE]         define
18   [MACRO_FUNC]        D
18   [FPAREN_OPEN]       (
18   [WORD]              a
18   [COMMA]             ,
18   [C99_MEMBER]        .
18   [MEMBER]            .
18   [MEMBER]            .
18   [FPAREN_CLOSE]      )
18   [PP_IGNORE]         B(FOO(a, __LINE__, __VA_ARGS__))
18   [NEWLINE]           
19   [PREPROC]           #
19   [PP_DEFINE]         define
19   [MACRO_FUNC]        C
19   [FPAREN_OPEN]       (
19   [WORD]              msg
19   [FPAREN_CLOSE]      )
19   [NL_CONT]           \
20   [PP_IGNORE]         PP_WRAP_CODE(
20   [NL_CONT]           \
21   [PP_IGNORE]         if (!msg)
21   [NL_CONT]           \
22   [PP_IGNORE]         {
22   [NL_CONT]           \
23   [PP_IGNORE]         BAR();
23   [NL_CONT]           \
24   [PP_IGNORE]         BARBAR();
24   [NL_CONT]           \
25   [PP_IGNORE]         BARBARBAR();
25   [NL_CONT]           \
26   [PP_IGNORE]         })
26   [NEWLINE]           
27   [PREPROC]           #
27   [PP_ELSE]           else
27   [NEWLINE]           
28   [PREPROC]           #
28   [PP_DEFINE]         define
28   [MACRO_FUNC]        C
28   [FPAREN_OPEN]       (
28   [WORD]              msg
28   [COMMA]             ,
28   [C99_MEMBER]        .
28   [MEMBER]            .
28   [MEMBER]            .
28   [FPAREN_CLOSE]      )
28   [PP_IGNORE]         EMPTY
28   [NEWLINE]           
29   [PREPROC]           #
29   [PP_ENDIF]          endif
29   [NEWLINE]           