Line [Token]             Text
1    [TYPE]              bool
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [TYPE]              int
1    [BYREF]             &
1    [WORD]              idx
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [IF]                if
3    [SPAREN_OPEN]       (
3    [WORD]              idx
3    [COMPARE]           <
3    [WORD]              m_count
3    [SPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [WORD]              idx
5    [INCDEC_AFTER]      ++
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [RETURN]            return
6    [WORD]              m_bool
6    [SQUARE_OPEN]       [
6    [WORD]              idx
6    [ARITH]             -
6    [NUMBER]            1
6    [SQUARE_CLOSE]      ]
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
8    [RETURN]            return
8    [WORD]              false
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
11   [CLASS]             class
11   [TYPE]              Foo
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [PRIVATE]           public
12   [PRIVATE_COLON]     :
12   [NEWLINE]           
13   [FUNC_CLASS_PROTO]    Foo
13   [FPAREN_OPEN]       (
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [FUNC_CLASS_PROTO]    Foo
14   [FPAREN_OPEN]       (
14   [QUALIFIER]         const
14   [TYPE]              Foo
14   [BYREF]             &
14   [WORD]              f
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [SEMICOLON]         ;
15   [NEWLINE]           
17   [CLASS]             class
17   [TYPE]              NS
17   [DC_MEMBER]         ::
17   [TYPE]              Foo
17   [BRACE_OPEN]        {
17   [NEWLINE]           
18   [PRIVATE]           public
18   [PRIVATE_COLON]     :
18   [NEWLINE]           
19   [FUNC_CLASS_PROTO]    Foo
19   [FPAREN_OPEN]       (
19   [TYPE]              Bar
19   [BYREF]             &
19   [WORD]              b
19   [FPAREN_CLOSE]      )
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [SEMICOLON]         ;
20   [NEWLINE]           
22   [TEMPLATE]          template
22   [ANGLE_OPEN]        <
22   [TYPE]              class
22   [TYPE]              T
22   [ANGLE_CLOSE]       >
22   [CLASS]             class
22   [TYPE]              ListManager
22   [NEWLINE]           
23   [BRACE_OPEN]        {
23   [NEWLINE]           
24   [PRIVATE]           protected
24   [PRIVATE_COLON]     :
24   [NEWLINE]           
25   [TYPE]              T
25   [WORD]              head
25   [SEMICOLON]         ;
25   [NEWLINE]           
27   [PRIVATE]           public
27   [PRIVATE_COLON]     :
27   [NEWLINE]           
28   [FUNC_CLASS_DEF]    ListManager
28   [FPAREN_OPEN]       (
28   [FPAREN_CLOSE]      )
28   [NEWLINE]           
29   [BRACE_OPEN]        {
29   [NEWLINE]           
30   [TYPE]              head
30   [MEMBER]            .
30   [WORD]              next
30   [ASSIGN]            =
30   [WORD]              head
30   [MEMBER]            .
30   [WORD]              prev
30   [ASSIGN]            =
30   [ADDR]              &
30   [WORD]              head
30   [SEMICOLON]         ;
30   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [NEWLINE]           
33   [FUNC_CLASS_DEF]    ListManager
33   [FPAREN_OPEN]       (
33   [QUALIFIER]         const
33   [TYPE]              ListManager
33   [BYREF]             &
33   [WORD]              ref
33   [FPAREN_CLOSE]      )
33   [NEWLINE]           
34   [BRACE_OPEN]        {
34   [NEWLINE]           
35   [TYPE]              head
35   [MEMBER]            .
35   [WORD]              next
35   [ASSIGN]            =
35   [WORD]              head
35   [MEMBER]            .
35   [WORD]              prev
35   [ASSIGN]            =
35   [ADDR]              &
35   [WORD]              head
35   [SEMICOLON]         ;
35   [NEWLINE]           
36   [BRACE_CLOSE]       }
36   [NEWLINE]           
37   [BRACE_CLOSE]       }
37   [NEWLINE]           
39   [QUALIFIER]         const
39   [TYPE]              Foo
39   [BYREF]             &
39   [TYPE]              Foo
39   [DC_MEMBER]         ::
39   [OPERATOR]          operator
39   [FUNC_DEF]          ==
39   [FPAREN_OPEN]       (
39   [TYPE]              Foo
39   [BYREF]             &
39   [WORD]              me
39   [FPAREN_CLOSE]      )
39   [BRACE_OPEN]        {
39   [NEWLINE]           
40   [DC_MEMBER]         ::
40   [TYPE]              sockaddr
40   [PTR_TYPE]          *
40   [WORD]              ptr
40   [ASSIGN]            =
40   [PAREN_OPEN]        (
40   [DC_MEMBER]         ::
40   [TYPE]              sockaddr
40   [PTR_TYPE]          *
40   [PAREN_CLOSE]       )
40   [ADDR]              &
40   [WORD]              host
40   [SEMICOLON]         ;
40   [NEWLINE]           
41   [RETURN]            return
41   [WORD]              me
41   [SEMICOLON]         ;
41   [NEWLINE]           
42   [BRACE_CLOSE]       }
42   [NEWLINE]           
44   [TYPE]              MyType
44   [BYREF]             &
44   [TYPE]              MyClass
44   [DC_MEMBER]         ::
44   [FUNC_DEF]          myMethode
44   [FPAREN_OPEN]       (
44   [FPAREN_CLOSE]      )
44   [BRACE_OPEN]        {
44   [NEWLINE]           
45   [QUALIFIER]         const
45   [TYPE]              MyType
45   [BYREF]             &
45   [WORD]              t
45   [ASSIGN]            =
45   [FUNC_CALL]         getSomewhere
45   [FPAREN_OPEN]       (
45   [FPAREN_CLOSE]      )
45   [SEMICOLON]         ;
45   [NEWLINE]           
46   [BRACE_CLOSE]       }
46   [NEWLINE]           