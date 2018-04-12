Line [Token]             Text
1    [PREPROC]           #
1    [PP_DEFINE]         define
1    [MACRO_FUNC]        concat0
1    [FPAREN_OPEN]       (
1    [WORD]              a0
1    [COMMA]             ,
1    [WORD]              a1
1    [FPAREN_CLOSE]      )
1    [WORD]              a0
1    [PP]                ??=??=
1    [WORD]              a1
1    [COMMENT_CPP]       // trigraph ##
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_DEFINE]         define
2    [MACRO_FUNC]        concat1
2    [FPAREN_OPEN]       (
2    [WORD]              a0
2    [COMMA]             ,
2    [WORD]              a1
2    [FPAREN_CLOSE]      )
2    [WORD]              a0
2    [PP]                %:%:
2    [WORD]              a1
2    [COMMENT_CPP]       // digraph ##
2    [NEWLINE]           
5    [PREPROC]           #
5    [PP_DEFINE]         define
5    [MACRO_FUNC]        STRINGIFY0
5    [FPAREN_OPEN]       (
5    [WORD]              s
5    [FPAREN_CLOSE]      )
5    [POUND]             ??=
5    [WORD]              s
5    [COMMENT_CPP]       // trigraph #
5    [NEWLINE]           
6    [PREPROC]           #
6    [PP_DEFINE]         define
6    [MACRO_FUNC]        STRINGIFY1
6    [FPAREN_OPEN]       (
6    [WORD]              s
6    [FPAREN_CLOSE]      )
6    [POUND]             %:
6    [WORD]              s
6    [COMMENT_CPP]       // digraph #
6    [NEWLINE]           
8    [PREPROC]           #
8    [PP_DEFINE]         define
8    [MACRO_FUNC]        msg0
8    [FPAREN_OPEN]       (
8    [WORD]              x
8    [FPAREN_CLOSE]      )
8    [FUNC_CALL]         printf
8    [FPAREN_OPEN]       (
8    [STRING]            "%c: %d\n"
8    [COMMA]             ,
8    [POUND]             ??=@
8    [WORD]              x
8    [COMMA]             ,
8    [WORD]              x
8    [FPAREN_CLOSE]      )
8    [COMMENT_CPP]       // trigraph #@
8    [NEWLINE]           
9    [PREPROC]           #
9    [PP_DEFINE]         define
9    [MACRO_FUNC]        msg1
9    [FPAREN_OPEN]       (
9    [WORD]              x
9    [FPAREN_CLOSE]      )
9    [FUNC_CALL]         printf
9    [FPAREN_OPEN]       (
9    [STRING]            "%c: %d\n"
9    [COMMA]             ,
9    [POUND]             %:@
9    [WORD]              x
9    [COMMA]             ,
9    [WORD]              x
9    [FPAREN_CLOSE]      )
9    [COMMENT_CPP]       // digraph #@
9    [NEWLINE]           
11   [COMMENT_CPP]       // trigraph {
11   [NEWLINE]           
12   [TYPE]              void
12   [FUNC_DEF]          x
12   [FPAREN_OPEN]       (
12   [FPAREN_CLOSE]      )
12   [NEWLINE]           
12   [BRACE_OPEN]        ??<
12   [NEWLINE]           
14   [COMMENT_CPP]       // trigraph []
14   [NEWLINE]           
15   [TYPE]              char
15   [WORD]              a
15   [TSQUARE]           ??(??)
15   [ASSIGN]            =
15   [STRING]            "a"
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [COMMENT_CPP]       // diigraph []
16   [NEWLINE]           
17   [TYPE]              char
17   [WORD]              b
17   [TSQUARE]           <::>
17   [ASSIGN]            =
17   [STRING]            "b"
17   [SEMICOLON]         ;
17   [NEWLINE]           
19   [TYPE]              bool
19   [WORD]              f
19   [COMMA]             ,
19   [WORD]              g
19   [COMMA]             ,
19   [WORD]              h
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [WORD]              f
20   [ASSIGN]            =
20   [WORD]              g
20   [ASSIGN]            =
20   [WORD]              h
20   [ASSIGN]            =
20   [WORD]              true
20   [SEMICOLON]         ;
20   [NEWLINE]           
22   [COMMENT_CPP]       // trigraph ||
22   [NEWLINE]           
23   [WORD]              f
23   [ASSIGN]            =
23   [WORD]              g
23   [BOOL]              ??!??!
23   [WORD]              h
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [COMMENT_CPP]       // trigraph |=
24   [NEWLINE]           
25   [WORD]              f
25   [ASSIGN]            ??!=
25   [WORD]              g
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [COMMENT_CPP]       // trigraph |
26   [NEWLINE]           
27   [WORD]              f
27   [ASSIGN]            =
27   [WORD]              g
27   [ARITH]             ??!
27   [WORD]              h
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [COMMENT_CPP]       // trigraph ^=
28   [NEWLINE]           
29   [WORD]              f
29   [ASSIGN]            ??'=
29   [WORD]              g
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [COMMENT_CPP]       // trigraph ^
30   [NEWLINE]           
31   [WORD]              f
31   [ASSIGN]            =
31   [WORD]              g
31   [CARET]             ??'
31   [WORD]              h
31   [SEMICOLON]         ;
31   [NEWLINE]           
33   [COMMENT_CPP]       // trigraph [, ]
33   [NEWLINE]           
34   [TYPE]              int
34   [WORD]              m
34   [SQUARE_OPEN]       ??(
34   [NUMBER]            5
34   [SQUARE_CLOSE]      ??)
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [COMMENT_CPP]       // digraph [, ]
35   [NEWLINE]           
36   [TYPE]              int
36   [WORD]              n
36   [SQUARE_OPEN]       <:
36   [NUMBER]            5
36   [SQUARE_CLOSE]      :>
36   [SEMICOLON]         ;
36   [NEWLINE]           
38   [COMMENT_CPP]       // trigraph }
38   [NEWLINE]           
39   [RETURN]            return
39   [SEMICOLON]         ;
39   [NEWLINE]           
39   [BRACE_CLOSE]       ??>
39   [NEWLINE]           
41   [COMMENT_CPP]       // digraph {, }
41   [NEWLINE]           
42   [TYPE]              int
42   [FUNC_DEF]          y
42   [FPAREN_OPEN]       (
42   [FPAREN_CLOSE]      )
42   [NEWLINE]           
42   [BRACE_OPEN]        <%
42   [NEWLINE]           
42   [RETURN]            return
42   [NUMBER]            1
42   [SEMICOLON]         ;
42   [NEWLINE]           
42   [BRACE_CLOSE]       %>