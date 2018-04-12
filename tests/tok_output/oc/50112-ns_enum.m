Line [Token]             Text
1    [COMMENT_CPP]       // The semicolons at the end of these declarations are not superfluous.
1    [NEWLINE]           
2    [TYPEDEF]           typedef
2    [ENUM]              NS_ENUM
2    [FPAREN_OPEN]       (
2    [WORD]              NSUInteger
2    [COMMA]             ,
2    [WORD]              MyEnum
2    [FPAREN_CLOSE]      )
2    [BRACE_OPEN]        {
2    [WORD]              MyValue1
2    [COMMA]             ,
2    [WORD]              MyValue2
2    [COMMA]             ,
2    [WORD]              MyValue3
2    [BRACE_CLOSE]       }
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [TYPEDEF]           typedef
3    [ENUM]              NS_OPTIONS
3    [FPAREN_OPEN]       (
3    [WORD]              NSUInteger
3    [COMMA]             ,
3    [WORD]              MyBitmask
3    [FPAREN_CLOSE]      )
3    [BRACE_OPEN]        {
3    [WORD]              MyBit1
3    [COMMA]             ,
3    [WORD]              MyBit2
3    [COMMA]             ,
3    [WORD]              MyBit3
3    [BRACE_CLOSE]       }
3    [SEMICOLON]         ;
3    [NEWLINE]           
5    [COMMENT_CPP]       // NS_ENUM specifies the type and name of the enum.
5    [NEWLINE]           
6    [TYPEDEF]           typedef
6    [ENUM]              enum
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [WORD]              MyValue1
7    [COMMA]             ,
7    [NEWLINE]           
8    [WORD]              MyValue2
8    [COMMA]             ,
8    [NEWLINE]           
9    [WORD]              MyValue3
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [TYPE]              MyEnum
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [TYPEDEF]           typedef
11   [ENUM]              NS_ENUM
11   [FPAREN_OPEN]       (
11   [WORD]              NSUInteger
11   [COMMA]             ,
11   [WORD]              MyEnum
11   [FPAREN_CLOSE]      )
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [WORD]              MyValue1
12   [COMMA]             ,
12   [NEWLINE]           
13   [WORD]              MyValue2
13   [COMMA]             ,
13   [NEWLINE]           
14   [WORD]              MyValue3
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [SEMICOLON]         ;
15   [NEWLINE]           
17   [COMMENT_CPP]       // NS_OPTIONS is equivalent to NS_ENUM, but semantically used for bitmask enums.
17   [NEWLINE]           
18   [TYPEDEF]           typedef
18   [ENUM]              enum
18   [BRACE_OPEN]        {
18   [NEWLINE]           
19   [WORD]              MyBit1
19   [ASSIGN]            =
19   [PAREN_OPEN]        (
19   [NUMBER]            1u
19   [ARITH]             <<
19   [NUMBER]            0
19   [PAREN_CLOSE]       )
19   [COMMA]             ,
19   [NEWLINE]           
20   [WORD]              MyBit2Longer
20   [ASSIGN]            =
20   [PAREN_OPEN]        (
20   [NUMBER]            1u
20   [ARITH]             <<
20   [NUMBER]            1
20   [PAREN_CLOSE]       )
20   [COMMA]             ,
20   [NEWLINE]           
21   [WORD]              MyBit3ThatIsConsiderablyMoreVerbose
21   [ASSIGN]            =
21   [PAREN_OPEN]        (
21   [NUMBER]            1u
21   [ARITH]             <<
21   [NUMBER]            2
21   [PAREN_CLOSE]       )
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [TYPE]              MyBitmask
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [TYPEDEF]           typedef
23   [ENUM]              NS_OPTIONS
23   [FPAREN_OPEN]       (
23   [WORD]              NSUInteger
23   [COMMA]             ,
23   [WORD]              MyBitmask
23   [FPAREN_CLOSE]      )
23   [BRACE_OPEN]        {
23   [NEWLINE]           
24   [WORD]              MyBit1
24   [ASSIGN]            =
24   [PAREN_OPEN]        (
24   [NUMBER]            1u
24   [ARITH]             <<
24   [NUMBER]            0
24   [PAREN_CLOSE]       )
24   [COMMA]             ,
24   [NEWLINE]           
25   [WORD]              MyBit2Longer
25   [ASSIGN]            =
25   [PAREN_OPEN]        (
25   [NUMBER]            1u
25   [ARITH]             <<
25   [NUMBER]            1
25   [PAREN_CLOSE]       )
25   [COMMA]             ,
25   [NEWLINE]           
26   [WORD]              MyBit3ThatIsConsiderablyMoreVerbose
26   [ASSIGN]            =
26   [PAREN_OPEN]        (
26   [NUMBER]            1u
26   [ARITH]             <<
26   [NUMBER]            2
26   [PAREN_CLOSE]       )
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [SEMICOLON]         ;
27   [NEWLINE]           