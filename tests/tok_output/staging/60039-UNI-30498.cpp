Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          Foo
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TYPE]              FooType
3    [WORD]              type
3    [NEWLINE]           
4    [ASSIGN]            =
4    [WORD]              isFoo
4    [QUESTION]          ?
4    [TYPE]              fooNamespace
4    [DC_MEMBER]         ::
4    [TYPE]              barNamespace
4    [DC_MEMBER]         ::
4    [WORD]              x
4    [NEWLINE]           
5    [COND_COLON]        :
5    [WORD]              isBar
5    [QUESTION]          ?
5    [PAREN_OPEN]        (
5    [WORD]              isQuux
5    [QUESTION]          ?
5    [TYPE]              fooNamespace
5    [DC_MEMBER]         ::
5    [TYPE]              barNamespace
5    [DC_MEMBER]         ::
5    [WORD]              y
5    [COND_COLON]        :
5    [TYPE]              fooNamespace
5    [DC_MEMBER]         ::
5    [TYPE]              barNamespace
5    [DC_MEMBER]         ::
5    [WORD]              z
5    [PAREN_CLOSE]       )
5    [NEWLINE]           
6    [COND_COLON]        :
6    [WORD]              isBaz
6    [QUESTION]          ?
6    [PAREN_OPEN]        (
6    [WORD]              isQuux
6    [QUESTION]          ?
6    [TYPE]              fooNamespace
6    [DC_MEMBER]         ::
6    [TYPE]              barNamespace
6    [DC_MEMBER]         ::
6    [WORD]              i
6    [COND_COLON]        :
6    [TYPE]              fooNamespace
6    [DC_MEMBER]         ::
6    [TYPE]              barNamespace
6    [DC_MEMBER]         ::
6    [WORD]              j
6    [PAREN_CLOSE]       )
6    [NEWLINE]           
7    [COND_COLON]        :
7    [PAREN_OPEN]        (
7    [WORD]              isQux
7    [QUESTION]          ?
7    [TYPE]              fooNamespace
7    [DC_MEMBER]         ::
7    [TYPE]              barNamespace
7    [DC_MEMBER]         ::
7    [WORD]              k
7    [COND_COLON]        :
7    [TYPE]              fooNamespace
7    [DC_MEMBER]         ::
7    [TYPE]              barNamespace
7    [DC_MEMBER]         ::
7    [WORD]              l
7    [PAREN_CLOSE]       )
7    [SEMICOLON]         ;
7    [NEWLINE]           
9    [TYPE]              fooNamespace
9    [DC_MEMBER]         ::
9    [TYPE]              _bar
9    [MEMBER]            .
9    [WORD]              x
9    [NEWLINE]           
10   [ASSIGN]            =
10   [WORD]              FOO_CONSTANT
10   [NEWLINE]           
11   [ARITH]             |
11   [WORD]              BAR_CONSTANT
11   [NEWLINE]           
12   [ARITH]             |
12   [WORD]              BAZ_CONSTANT
12   [SEMICOLON]         ;
12   [NEWLINE]           
14   [SWITCH]            switch
14   [SPAREN_OPEN]       (
14   [WORD]              foo
14   [SPAREN_CLOSE]      )
14   [NEWLINE]           
15   [BRACE_OPEN]        {
15   [NEWLINE]           
16   [CASE]              case
16   [WORD]              bar
16   [CASE_COLON]        :
16   [NEWLINE]           
17   [FUNC_CALL]         FooFunc
17   [FPAREN_OPEN]       (
17   [WORD]              x
17   [COMMA]             ,
17   [FUNC_CALL]         BarFunc
17   [FPAREN_OPEN]       (
17   [FUNC_CALL]         BazFunc
17   [FPAREN_OPEN]       (
17   [FUNC_CALL]         clamp
17   [FPAREN_OPEN]       (
17   [WORD]              x
17   [FPAREN_CLOSE]      )
17   [ARITH]             *
17   [NUMBER_FP]         255.0f
17   [FPAREN_CLOSE]      )
17   [COMMA]             ,
17   [NEWLINE]           
18   [FUNC_CALL]         Round
18   [FPAREN_OPEN]       (
18   [FUNC_CALL]         clamp
18   [FPAREN_OPEN]       (
18   [WORD]              g
18   [FPAREN_CLOSE]      )
18   [ARITH]             *
18   [NUMBER_FP]         255.0f
18   [FPAREN_CLOSE]      )
18   [COMMA]             ,
18   [NEWLINE]           
19   [FUNC_CALL]         Round
19   [FPAREN_OPEN]       (
19   [FUNC_CALL]         clamp
19   [FPAREN_OPEN]       (
19   [WORD]              b
19   [FPAREN_CLOSE]      )
19   [ARITH]             *
19   [NUMBER_FP]         255.0f
19   [FPAREN_CLOSE]      )
19   [COMMA]             ,
19   [NEWLINE]           
20   [FUNC_CALL]         Round
20   [FPAREN_OPEN]       (
20   [FUNC_CALL]         clamp
20   [FPAREN_OPEN]       (
20   [WORD]              a
20   [FPAREN_CLOSE]      )
20   [ARITH]             *
20   [NUMBER_FP]         255.0f
20   [FPAREN_CLOSE]      )
20   [FPAREN_CLOSE]      )
20   [COMMA]             ,
20   [WORD]              foo
20   [FPAREN_CLOSE]      )
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [RETURN]            return
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
24   [SWITCH]            switch
24   [SPAREN_OPEN]       (
24   [WORD]              bar
24   [SPAREN_CLOSE]      )
24   [NEWLINE]           
25   [BRACE_OPEN]        {
25   [NEWLINE]           
26   [CASE]              case
26   [WORD]              baz
26   [CASE_COLON]        :
26   [NEWLINE]           
27   [FUNC_CALL]         RETURN_IF_ERROR
27   [FPAREN_OPEN]       (
27   [TYPE]              fooNamespace
27   [DC_MEMBER]         ::
27   [FUNC_CALL]         Foo
27   [FPAREN_OPEN]       (
27   [WORD]              x
27   [MEMBER]            ->
27   [WORD]              m_Foo
27   [FPAREN_CLOSE]      )
27   [MEMBER]            .
27   [FUNC_CALL]         Bar
27   [FPAREN_OPEN]       (
27   [NEWLINE]           
28   [TYPE]              fooNamespace
28   [DC_MEMBER]         ::
28   [FUNC_CALL]         fooClien
28   [FPAREN_OPEN]       (
28   [WORD]              x
28   [MEMBER]            ->
28   [WORD]              m_Bar
28   [FPAREN_CLOSE]      )
28   [COMMA]             ,
28   [WORD]              y
28   [COMMA]             ,
28   [WORD]              x
28   [MEMBER]            ->
28   [WORD]              m_Baz
28   [COMMA]             ,
28   [ADDR]              &
28   [WORD]              z
28   [COMMA]             ,
28   [WORD]              CONSTANT_FOO
28   [FPAREN_CLOSE]      )
28   [COMMA]             ,
28   [WORD]              false
28   [FPAREN_CLOSE]      )
28   [NEWLINE]           
29   [BREAK]             break
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [NEWLINE]           