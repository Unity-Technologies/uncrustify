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
4    [MACRO_FUNC]        VNV_RECORD_CYCLES
4    [FPAREN_OPEN]       (
4    [WORD]              m
4    [FPAREN_CLOSE]      )
4    [DO]                do
4    [BRACE_OPEN]        {
4    [NL_CONT]           \
5    [TYPE]              uint16_t
5    [WORD]              cyc_out
5    [ASSIGN]            =
5    [PAREN_OPEN]        (
5    [PAREN_OPEN]        (
5    [TYPE]              uint16_t
5    [PAREN_CLOSE]       )
5    [WORD]              TMR4
5    [PAREN_CLOSE]       )
5    [ARITH]             -
5    [WORD]              cyc_in
5    [SEMICOLON]         ;
5    [NL_CONT]           \
6    [IF]                if
6    [SPAREN_OPEN]       (
6    [WORD]              cyc_out
6    [COMPARE]           <
6    [WORD]              vnv_ticks
6    [SQUARE_OPEN]       [
6    [WORD]              m
6    [SQUARE_CLOSE]      ]
6    [MEMBER]            .
6    [WORD]              min
6    [SPAREN_CLOSE]      )
6    [VBRACE_OPEN]       
6    [WORD]              vnv_ticks
6    [SQUARE_OPEN]       [
6    [WORD]              m
6    [SQUARE_CLOSE]      ]
6    [MEMBER]            .
6    [WORD]              min
6    [ASSIGN]            =
6    [WORD]              cyc_out
6    [SEMICOLON]         ;
6    [VBRACE_CLOSE]      
6    [NL_CONT]           \
7    [IF]                if
7    [SPAREN_OPEN]       (
7    [WORD]              cyc_out
7    [COMPARE]           >
7    [WORD]              vnv_ticks
7    [SQUARE_OPEN]       [
7    [WORD]              m
7    [SQUARE_CLOSE]      ]
7    [MEMBER]            .
7    [WORD]              max
7    [SPAREN_CLOSE]      )
7    [VBRACE_OPEN]       
7    [WORD]              vnv_ticks
7    [SQUARE_OPEN]       [
7    [WORD]              m
7    [SQUARE_CLOSE]      ]
7    [MEMBER]            .
7    [WORD]              max
7    [ASSIGN]            =
7    [WORD]              cyc_out
7    [SEMICOLON]         ;
7    [VBRACE_CLOSE]      
7    [NL_CONT]           \
8    [BRACE_CLOSE]       }
8    [WHILE_OF_DO]       while
8    [SPAREN_OPEN]       (
8    [NUMBER]            0
8    [SPAREN_CLOSE]      )
8    [NEWLINE]           
10   [PREPROC]           #
10   [PP_DEFINE]         define
10   [MACRO]             multilinemacro
10   [DO]                do
10   [BRACE_OPEN]        {
10   [PAREN_OPEN]        (
10   [WORD]              x
10   [ARITH]             +
10   [NUMBER]            5
10   [PAREN_CLOSE]       )
10   [SEMICOLON]         ;
10   [BRACE_CLOSE]       }
10   [WHILE_OF_DO]       while
10   [SPAREN_OPEN]       (
10   [NUMBER]            0
10   [SPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NL_CONT]           \
11   [FUNC_CALL]         printf
11   [FPAREN_OPEN]       (
11   [STRING]            "a multilinemacro"
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NL_CONT]           \
12   [FUNC_CALL]         printf
12   [FPAREN_OPEN]       (
12   [STRING]            "a multilinemacro2"
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
14   [TYPE]              int
14   [FUNC_DEF]          main
14   [FPAREN_OPEN]       (
14   [TYPE]              int
14   [WORD]              argc
14   [COMMA]             ,
14   [TYPE]              char
14   [PTR_TYPE]          *
14   [WORD]              argv
14   [TSQUARE]           []
14   [FPAREN_CLOSE]      )
14   [NEWLINE]           
15   [BRACE_OPEN]        {
15   [NEWLINE]           
16   [TYPE]              int
16   [WORD]              a
16   [COMMA]             ,
16   [WORD]              b
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [WORD]              a
17   [ASSIGN]            =
17   [NUMBER]            1
17   [SEMICOLON]         ;
17   [COMMENT_CPP]       // stupid comment \\
17   [NEWLINE]           
18   [WORD]              b
18   [ASSIGN]            =
18   [NUMBER]            2
18   [SEMICOLON]         ;
18   [NEWLINE]           
20   [RETURN]            return
20   [PAREN_OPEN]        (
20   [WORD]              a
20   [ARITH]             +
20   [WORD]              b
20   [PAREN_CLOSE]       )
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [NEWLINE]           