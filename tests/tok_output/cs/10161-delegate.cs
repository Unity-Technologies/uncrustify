Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TYPE]              obj
3    [MEMBER]            .
3    [WORD]              cb
3    [ASSIGN]            +=
3    [PAREN_OPEN]        (
3    [PAREN_CLOSE]       )
3    [LAMBDA]            =>
3    [BRACE_OPEN]        {
3    [BRACE_CLOSE]       }
3    [SEMICOLON]         ;
3    [NEWLINE]           
5    [FUNC_CALL]         funcwithverylongname
5    [FPAREN_OPEN]       (
5    [PAREN_OPEN]        (
5    [PAREN_CLOSE]       )
5    [LAMBDA]            =>
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [FUNC_CALL]         func
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
11   [FUNC_CALL]         Func
11   [FPAREN_OPEN]       (
11   [NEWLINE]           
12   [STRING]            "stuff"
12   [COMMA]             ,
12   [NEWLINE]           
13   [WORD]              foo
13   [LAMBDA]            =>
13   [NEWLINE]           
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [FUNC_CALL]         bar
15   [FPAREN_OPEN]       (
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
18   [FUNC_CALL]         Func
18   [FPAREN_OPEN]       (
18   [NEWLINE]           
19   [STRING]            "stuff"
19   [COMMA]             ,
19   [NEWLINE]           
20   [WORD]              foo
20   [LAMBDA]            =>
20   [NEWLINE]           
21   [BRACE_OPEN]        {
21   [NEWLINE]           
22   [FUNC_CALL]         bar
22   [FPAREN_OPEN]       (
22   [FPAREN_CLOSE]      )
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [FPAREN_CLOSE]      )
23   [SEMICOLON]         ;
23   [NEWLINE]           
25   [TYPE]              data
25   [MEMBER]            .
25   [FUNC_CALL]         Sort
25   [FPAREN_OPEN]       (
25   [NEWLINE]           
26   [DELEGATE]          delegate
26   [PAREN_OPEN]        (
26   [TYPE]              InputData
26   [WORD]              lhs
26   [COMMA]             ,
26   [TYPE]              InputData
26   [WORD]              rhs
26   [PAREN_CLOSE]       )
26   [NEWLINE]           
27   [BRACE_OPEN]        {
27   [NEWLINE]           
28   [RETURN]            return
28   [WORD]              lhs
28   [MEMBER]            .
28   [WORD]              m_Name
28   [MEMBER]            .
28   [FUNC_CALL]         CompareTo
28   [FPAREN_OPEN]       (
28   [WORD]              rhs
28   [MEMBER]            .
28   [WORD]              m_Name
28   [FPAREN_CLOSE]      )
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [BRACE_CLOSE]       }
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [NEWLINE]           