Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        include
1    [PREPROC_BODY]      <iostream>
1    [NEWLINE]           
4    [TYPE]              void
4    [FUNC_DEF]          foo
4    [FPAREN_OPEN]       (
4    [FPAREN_CLOSE]      )
4    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [TYPE]              char
6    [PTR_TYPE]          *
6    [WORD]              buf
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [TRY]               try
7    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [WORD]              buf
8    [ASSIGN]            =
8    [NEW]               new
8    [TYPE]              unsigned
8    [TYPE]              char
8    [SQUARE_OPEN]       [
8    [NUMBER]            1024
8    [SQUARE_CLOSE]      ]
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [IF]                if
9    [SPAREN_OPEN]       (
9    [WORD]              buf
9    [COMPARE]           ==
9    [NUMBER]            0
9    [SPAREN_CLOSE]      )
9    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [THROW]             throw
10   [STRING]            "Out of memory"
10   [SEMICOLON]         ;
10   [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
12   [CATCH]             catch
12   [SPAREN_OPEN]       (
12   [TYPE]              char
12   [PTR_TYPE]          *
12   [WORD]              str
12   [SPAREN_CLOSE]      )
12   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [WORD]              cout
13   [ARITH]             <<
13   [STRING]            "Exception: "
13   [ARITH]             <<
13   [WORD]              str
13   [ARITH]             <<
13   [STRING]            '\n'
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
17   [TYPE]              void
17   [FUNC_DEF]          bar
17   [FPAREN_OPEN]       (
17   [FPAREN_CLOSE]      )
17   [NEWLINE]           
18   [BRACE_OPEN]        {
18   [NEWLINE]           
19   [TYPE]              char
19   [PTR_TYPE]          *
19   [WORD]              buf
19   [SEMICOLON]         ;
19   [NEWLINE]           
21   [TRY]               try
21   [NEWLINE]           
22   [BRACE_OPEN]        {
22   [NEWLINE]           
23   [WORD]              buf
23   [ASSIGN]            =
23   [NEW]               new
23   [TYPE]              unsigned
23   [TYPE]              char
23   [SQUARE_OPEN]       [
23   [NUMBER]            1024
23   [SQUARE_CLOSE]      ]
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [IF]                if
24   [SPAREN_OPEN]       (
24   [WORD]              buf
24   [COMPARE]           ==
24   [NUMBER]            0
24   [SPAREN_CLOSE]      )
24   [NEWLINE]           
24   [BRACE_OPEN]        {
24   [NEWLINE]           
25   [THROW]             throw
25   [STRING]            "Out of memory"
25   [SEMICOLON]         ;
25   [NEWLINE]           
25   [BRACE_CLOSE]       }
25   [NEWLINE]           
26   [BRACE_CLOSE]       }
26   [NEWLINE]           
27   [CATCH]             catch
27   [SPAREN_OPEN]       (
27   [TYPE]              char
27   [PTR_TYPE]          *
27   [WORD]              str
27   [SPAREN_CLOSE]      )
27   [NEWLINE]           
28   [BRACE_OPEN]        {
28   [NEWLINE]           
29   [WORD]              cout
29   [ARITH]             <<
29   [STRING]            "Exception: "
29   [ARITH]             <<
29   [WORD]              str
29   [ARITH]             <<
29   [STRING]            '\n'
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [NEWLINE]           