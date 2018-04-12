Line [Token]             Text
1    [QUALIFIER]         static
1    [TYPE]              void
1    [PTR_TYPE]          *
1    [FUNC_PROTO]        foo
1    [FPAREN_OPEN]       (
1    [TYPE]              int
1    [WORD]              param1
1    [COMMA]             ,
1    [NEWLINE]           
2    [TYPE]              char
2    [PTR_TYPE]          *
2    [WORD]              param2
2    [NEWLINE]           
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
6    [QUALIFIER]         static
6    [TYPE]              void
6    [PTR_TYPE]          *
6    [FUNC_DEF]          foo
6    [NEWLINE]           
7    [FPAREN_OPEN]       (
7    [NEWLINE]           
8    [TYPE]              int
8    [WORD]              param1
8    [COMMA]             ,
8    [NEWLINE]           
9    [TYPE]              char
9    [PTR_TYPE]          *
9    [WORD]              param2
9    [NEWLINE]           
10   [FPAREN_CLOSE]      )
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [FOR]               for
12   [SPAREN_OPEN]       (
12   [NEWLINE]           
13   [TYPE]              int
13   [WORD]              i
13   [ASSIGN]            =
13   [NUMBER]            0
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [WORD]              i
14   [COMPARE]           <
14   [NUMBER]            10
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [WORD]              i
15   [INCDEC_AFTER]      ++
15   [NEWLINE]           
16   [SPAREN_CLOSE]      )
16   [NEWLINE]           
17   [BRACE_OPEN]        {
17   [NEWLINE]           
18   [FUNC_CALL]         bar
18   [FPAREN_OPEN]       (
18   [NEWLINE]           
19   [WORD]              arg1
19   [COMMA]             ,
19   [NEWLINE]           
20   [WORD]              arg2
20   [NEWLINE]           
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [IF]                if
22   [SPAREN_OPEN]       (
22   [PAREN_OPEN]        (
22   [WORD]              abc
22   [COMPARE]           <
22   [WORD]              bcd
22   [PAREN_CLOSE]       )
22   [NEWLINE]           
23   [BOOL]              &&
23   [PAREN_OPEN]        (
23   [NUMBER]            123
23   [COMPARE]           <
23   [WORD]              abc
23   [PAREN_CLOSE]       )
23   [NEWLINE]           
24   [SPAREN_CLOSE]      )
24   [NEWLINE]           
25   [BRACE_OPEN]        {
25   [NEWLINE]           
26   [FUNC_CALL]         none
26   [FPAREN_OPEN]       (
26   [WORD]              arg1
26   [COMMA]             ,
26   [NEWLINE]           
27   [WORD]              arg2
27   [COMMA]             ,
27   [NEWLINE]           
28   [WORD]              arg3
28   [NEWLINE]           
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [NEWLINE]           
32   [BRACE_CLOSE]       }
32   [NEWLINE]           
35   [TYPE]              void
35   [TYPE]              CWarningAnalyzer
35   [DC_MEMBER]         ::
35   [FUNC_DEF]          SetEffect
35   [FPAREN_OPEN]       (
35   [TYPE]              int
35   [WORD]              FilterNumber
35   [NEWLINE]           
36   [COMMA]             ,
36   [TYPE]              bool
36   [WORD]              Exclude
36   [NEWLINE]           
37   [COMMA]             ,
37   [TYPE]              int
37   [WORD]              Red
37   [NEWLINE]           
38   [COMMA]             ,
38   [TYPE]              int
38   [WORD]              Green
38   [NEWLINE]           
39   [COMMA]             ,
39   [TYPE]              int
39   [WORD]              Blue
39   [NEWLINE]           
40   [COMMA]             ,
40   [TYPE]              bool
40   [WORD]              Italic
40   [NEWLINE]           
41   [COMMA]             ,
41   [TYPE]              bool
41   [WORD]              Bold
41   [NEWLINE]           
42   [COMMA]             ,
42   [TYPE]              bool
42   [WORD]              Underlined
42   [NEWLINE]           
43   [FPAREN_CLOSE]      )
43   [NEWLINE]           
44   [BRACE_OPEN]        {
44   [NEWLINE]           
45   [COMMENT]           /* TODO */
45   [NEWLINE]           
46   [BRACE_CLOSE]       }
46   [NEWLINE]           