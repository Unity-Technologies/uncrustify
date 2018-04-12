Line [Token]             Text
1    [NEWLINE]           
3    [USING]             using
3    [WORD]              GLib
3    [SEMICOLON]         ;
3    [NEWLINE]           
5    [QUALIFIER]         public
5    [CLASS]             class
5    [TYPE]              GListTest
5    [CLASS_COLON]       :
5    [WORD]              Object
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [QUALIFIER]         public
7    [TYPE]              GListTest
7    [BRACE_OPEN]        {
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
9    [QUALIFIER]         static
9    [TYPE]              int
9    [FUNC_DEF]          main
9    [FPAREN_OPEN]       (
9    [TYPE]              string
9    [TSQUARE]           []
9    [WORD]              args
9    [FPAREN_CLOSE]      )
9    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [TYPE]              List
10   [ANGLE_OPEN]        <
10   [TYPE]              string
10   [ANGLE_CLOSE]       >
10   [WORD]              list
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [TYPE]              list
11   [MEMBER]            .
11   [FUNC_CALL]         append
11   [FPAREN_OPEN]       (
11   [STRING]            "TestString1"
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [TYPE]              list
12   [MEMBER]            .
12   [FUNC_CALL]         append
12   [FPAREN_OPEN]       (
12   [STRING]            "myTest"
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [FUNC_CALL]         message
13   [FPAREN_OPEN]       (
13   [STRING]            "list.length()=%d"
13   [COMMA]             ,
13   [WORD]              list
13   [MEMBER]            .
13   [FUNC_CALL]         length
13   [FPAREN_OPEN]       (
13   [FPAREN_CLOSE]      )
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [FOR]               for
15   [SPAREN_OPEN]       (
15   [TYPE]              int
15   [WORD]              i
15   [ASSIGN]            =
15   [NUMBER]            0
15   [SEMICOLON]         ;
15   [WORD]              i
15   [COMPARE]           <
15   [WORD]              list
15   [MEMBER]            .
15   [FUNC_CALL]         length
15   [FPAREN_OPEN]       (
15   [FPAREN_CLOSE]      )
15   [SEMICOLON]         ;
15   [WORD]              i
15   [INCDEC_AFTER]      ++
15   [SPAREN_CLOSE]      )
15   [NEWLINE]           
15   [BRACE_OPEN]        {
15   [NEWLINE]           
16   [TYPE]              string
16   [WORD]              list2
16   [ASSIGN]            =
16   [WORD]              list
16   [MEMBER]            .
16   [FUNC_CALL]         nth_data
16   [FPAREN_OPEN]       (
16   [WORD]              i
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [FUNC_CALL]         message
17   [FPAREN_OPEN]       (
17   [STRING]            "%s"
17   [COMMA]             ,
17   [WORD]              list2
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [NEWLINE]           
19   [BRACE_CLOSE]       }
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [NEWLINE]           