Line [Token]             Text
1    [NEWLINE]           
3    [PREPROC]           #
3    [PP_DEFINE]         define
3    [MACRO_FUNC]        FOO
3    [FPAREN_OPEN]       (
3    [WORD]              bar
3    [FPAREN_CLOSE]      )
3    [TYPE]              create_a_really_long_identifier
3    [FUNC_CALL]         name
3    [FPAREN_OPEN]       (
3    [FUNC_CALL]         some_function
3    [FPAREN_OPEN]       (
3    [WORD]              bar1
3    [ARITH]             +
3    [WORD]              bar2
3    [FPAREN_CLOSE]      )
3    [COMMA]             ,
3    [WORD]              bar3
3    [COMMA]             ,
3    [WORD]              bar4
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
5    [COMMENT]           /* *INDENT-OFF* */
5    [NEWLINE]           
6    [IGNORED]              int foo[] = {
6    [NEWLINE]           
7    [IGNORED]                 1,   3,   5,
7    [NEWLINE]           
8    [IGNORED]                 3,   5,   7,
8    [NEWLINE]           
9    [IGNORED]                 5,   7,   9,
9    [NEWLINE]           
10   [IGNORED]              };
10   [NEWLINE]           
11   [COMMENT]           /* *INDENT-ON* */
11   [NEWLINE]           
13   [PREPROC]           #
13   [PP_DEFINE]         define
13   [MACRO]             multilinemacro
13   [DO]                do
13   [BRACE_OPEN]        {
13   [PAREN_OPEN]        (
13   [WORD]              x
13   [ARITH]             +
13   [NUMBER]            5
13   [PAREN_CLOSE]       )
13   [SEMICOLON]         ;
13   [BRACE_CLOSE]       }
13   [WHILE_OF_DO]       while
13   [SPAREN_OPEN]       (
13   [NUMBER]            0
13   [SPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NL_CONT]           \
14   [FUNC_CALL]         printf
14   [FPAREN_OPEN]       (
14   [STRING]            "a multilinemacro"
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [NL_CONT]           \
15   [FUNC_CALL]         printf
15   [FPAREN_OPEN]       (
15   [STRING]            "a multilinemacro2"
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
17   [TYPE]              int
17   [FUNC_DEF]          main
17   [FPAREN_OPEN]       (
17   [TYPE]              int
17   [WORD]              argc
17   [COMMA]             ,
17   [TYPE]              char
17   [PTR_TYPE]          *
17   [WORD]              argv
17   [TSQUARE]           []
17   [FPAREN_CLOSE]      )
17   [NEWLINE]           
18   [BRACE_OPEN]        {
18   [NEWLINE]           
19   [COMMENT]           /* *INDENT-OFF* */
19   [NEWLINE]           
21   [IGNORED]              int a, b;
21   [NEWLINE]           
22   [IGNORED]           a = 1; // stupid comment \
22   [NEWLINE]           
23   [IGNORED]           b = 2;
23   [NEWLINE]           
25   [COMMENT]           /* *INDENT-ON* */
25   [NEWLINE]           
26   [RETURN]            return
26   [PAREN_OPEN]        (
26   [WORD]              a
26   [ARITH]             +
26   [WORD]              b
26   [PAREN_CLOSE]       )
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
29   [COMMENT]           /* *INDENT-OFF* */
29   [NEWLINE]           
30   [IGNORED]           int a;
30   [NEWLINE]           
31   [COMMENT]           /* *INDENT-ON* */
31   [NEWLINE]           