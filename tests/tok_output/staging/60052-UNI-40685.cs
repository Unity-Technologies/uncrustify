Line [Token]             Text
1    [NAMESPACE]         namespace
1    [WORD]              Namespace
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [QUALIFIER]         public
3    [QUALIFIER]         static
3    [CLASS]             class
3    [TYPE]              Class
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [QUALIFIER]         public
5    [QUALIFIER]         static
5    [TYPE]              void
5    [FUNC_DEF]          Foo
5    [FPAREN_OPEN]       (
5    [FPAREN_CLOSE]      )
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [WORD]              Tests
7    [ASSIGN]            =
7    [FUNC_CALL]         Bar
7    [FPAREN_OPEN]       (
7    [NEWLINE]           
8    [WORD]              A
8    [COMMA]             ,
8    [NEWLINE]           
9    [WORD]              cp
9    [LAMBDA]            =>
9    [NEWLINE]           
10   [WORD]              cp
10   [MEMBER]            .
10   [FUNC_CALL]         Foo
10   [FPAREN_OPEN]       (
10   [NEW]               new
10   [CS_PROPERTY]       Bar
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [WORD]              Identifier
12   [ASSIGN]            =
12   [STRING]            "ID"
12   [COMMA]             ,
12   [NEWLINE]           
13   [WORD]              PathToEmbed
13   [ASSIGN]            =
13   [STRING]            "VAL"
13   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [FPAREN_CLOSE]      )
14   [NEWLINE]           
15   [MEMBER]            .
15   [FUNC_CALL]         WithPrebuiltReference
15   [FPAREN_OPEN]       (
15   [WORD]              Moq
15   [FPAREN_CLOSE]      )
15   [COMMA]             ,
15   [NEWLINE]           
16   [WORD]              Core
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
18   [TYPE]              var
18   [WORD]              Test
18   [ASSIGN]            =
18   [FUNC_CALL]         FooBar
18   [FPAREN_OPEN]       (
18   [NEWLINE]           
19   [WORD]              B
19   [COMMA]             ,
19   [NEWLINE]           
20   [WORD]              cp
20   [LAMBDA]            =>
20   [WORD]              cp
20   [MEMBER]            .
20   [FUNC_CALL]         WithB
20   [FPAREN_OPEN]       (
20   [WORD]              Bar
20   [FPAREN_CLOSE]      )
20   [MEMBER]            .
20   [FUNC_CALL]         WithSource
20   [FPAREN_OPEN]       (
20   [STRING]            "Path/File.ext"
20   [FPAREN_CLOSE]      )
20   [COMMA]             ,
20   [NEWLINE]           
21   [NEW]               new
21   [TSQUARE]           []
21   [BRACE_OPEN]        {
21   [NEWLINE]           
22   [WORD]              A
22   [COMMA]             ,
22   [NEWLINE]           
23   [WORD]              B
23   [COMMA]             ,
23   [NEWLINE]           
24   [WORD]              C
24   [NEWLINE]           
25   [BRACE_CLOSE]       }
25   [NEWLINE]           
26   [FPAREN_CLOSE]      )
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
28   [BRACE_CLOSE]       }
28   [NEWLINE]           
29   [BRACE_CLOSE]       }
29   [NEWLINE]           