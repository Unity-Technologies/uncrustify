Line [Token]             Text
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_DEFINE]         define
2    [MACRO_FUNC]        FOO
2    [FPAREN_OPEN]       (
2    [WORD]              bar
2    [FPAREN_CLOSE]      )
2    [TYPE]              create_a_really_long_identifier
2    [FUNC_CALL]         name
2    [FPAREN_OPEN]       (
2    [FUNC_CALL]         some_function
2    [FPAREN_OPEN]       (
2    [NL_CONT]           \
2    [WORD]              bar1
2    [ARITH]             +
2    [WORD]              bar2
2    [FPAREN_CLOSE]      )
2    [COMMA]             ,
2    [WORD]              bar3
2    [COMMA]             ,
2    [NL_CONT]           \
2    [WORD]              bar4
2    [FPAREN_CLOSE]      )
2    [SEMICOLON]         ;
2    [NEWLINE]           
4    [PREPROC]           #
4    [PP_DEFINE]         define
4    [MACRO]             multilinemacro
4    [DO]                do
4    [BRACE_OPEN]        {
4    [PAREN_OPEN]        (
4    [WORD]              x
4    [ARITH]             +
4    [NUMBER]            5
4    [PAREN_CLOSE]       )
4    [SEMICOLON]         ;
4    [BRACE_CLOSE]       }
4    [WHILE_OF_DO]       while
4    [SPAREN_OPEN]       (
4    [NUMBER]            0
4    [SPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NL_CONT]           \
5    [FUNC_CALL]         printf
5    [FPAREN_OPEN]       (
5    [STRING]            "a multilinemacro"
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NL_CONT]           \
6    [FUNC_CALL]         printf
6    [FPAREN_OPEN]       (
6    [STRING]            "a multilinemacro2"
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
8    [TYPE]              int
8    [FUNC_DEF]          main
8    [FPAREN_OPEN]       (
8    [TYPE]              int
8    [WORD]              argc
8    [COMMA]             ,
8    [TYPE]              char
8    [PTR_TYPE]          *
8    [WORD]              argv
8    [TSQUARE]           []
8    [FPAREN_CLOSE]      )
8    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [TYPE]              int
10   [WORD]              a
10   [COMMA]             ,
10   [WORD]              b
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [WORD]              a
11   [ASSIGN]            =
11   [NUMBER]            1
11   [SEMICOLON]         ;
11   [COMMENT_CPP]       // stupid comment \␍␤b = 2;
12   [NEWLINE]           
14   [RETURN]            return
14   [PAREN_OPEN]        (
14   [WORD]              a
14   [ARITH]             +
14   [WORD]              b
14   [PAREN_CLOSE]       )
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           