Line [Token]             Text
1    [COMMENT_CPP]       //It deletes the space after {
1    [NEWLINE]           
2    [CLASS]             class
2    [TYPE]              Foo
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [QUALIFIER]         extern
4    [QUALIFIER]         internal
4    [TYPE]              bool
4    [CS_PROPERTY]       canAccess
4    [BRACE_OPEN]        {
4    [SQUARE_OPEN]       [
4    [FUNC_CALL]         NativeMethod
4    [FPAREN_OPEN]       (
4    [WORD]              Name
4    [ASSIGN]            =
4    [STRING]            "CanAccessFromScript"
4    [FPAREN_CLOSE]      )
4    [SQUARE_CLOSE]      ]
4    [WORD]              get
4    [SEMICOLON]         ;
4    [BRACE_CLOSE]       }
4    [NEWLINE]           
6    [QUALIFIER]         extern
6    [QUALIFIER]         public
6    [TYPE]              int
6    [CS_PROPERTY]       subMeshCount
6    [BRACE_OPEN]        {
6    [GETSET_EMPTY]      get
6    [SEMICOLON]         ;
6    [SQUARE_OPEN]       [
6    [FUNC_CALL]         NativeMethod
6    [FPAREN_OPEN]       (
6    [WORD]              Name
6    [ASSIGN]            =
6    [STRING]            "CanAccessFromScript"
6    [FPAREN_CLOSE]      )
6    [SQUARE_CLOSE]      ]
6    [WORD]              set
6    [SEMICOLON]         ;
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
8    [SQUARE_OPEN]       [
8    [FUNC_CALL]         TestCase
8    [FPAREN_OPEN]       (
8    [STRING]            "tag1;tag2"
8    [COMMA]             ,
8    [NEW]               new
8    [TYPE]              string
8    [TSQUARE]           []
8    [BRACE_OPEN]        {
8    [STRING]            "tag1"
8    [COMMA]             ,
8    [STRING]            "tag2"
8    [BRACE_CLOSE]       }
8    [FPAREN_CLOSE]      )
8    [SQUARE_CLOSE]      ]
8    [NEWLINE]           
9    [SQUARE_OPEN]       [
9    [FUNC_CALL]         TestCase
9    [FPAREN_OPEN]       (
9    [STRING]            "tag1 ; tag2"
9    [COMMA]             ,
9    [NEW]               new
9    [TYPE]              string
9    [TSQUARE]           []
9    [BRACE_OPEN]        {
9    [STRING]            "tag1"
9    [COMMA]             ,
9    [STRING]            "tag2"
9    [BRACE_CLOSE]       }
9    [FPAREN_CLOSE]      )
9    [SQUARE_CLOSE]      ]
9    [NEWLINE]           
10   [SQUARE_OPEN]       [
10   [FUNC_CALL]         TestCase
10   [FPAREN_OPEN]       (
10   [STRING]            "tag1 ;"
10   [COMMA]             ,
10   [NEW]               new
10   [TYPE]              string
10   [TSQUARE]           []
10   [BRACE_OPEN]        {
10   [STRING]            "tag1"
10   [BRACE_CLOSE]       }
10   [FPAREN_CLOSE]      )
10   [SQUARE_CLOSE]      ]
10   [NEWLINE]           
11   [SQUARE_OPEN]       [
11   [FUNC_CALL]         TestCase
11   [FPAREN_OPEN]       (
11   [STRING]            ""
11   [COMMA]             ,
11   [NEW]               new
11   [TYPE]              string
11   [SQUARE_OPEN]       [
11   [NUMBER]            0
11   [SQUARE_CLOSE]      ]
11   [FPAREN_CLOSE]      )
11   [SQUARE_CLOSE]      ]
11   [NEWLINE]           
12   [SQUARE_OPEN]       [
12   [FUNC_CALL]         TestCase
12   [FPAREN_OPEN]       (
12   [STRING]            ";"
12   [COMMA]             ,
12   [NEW]               new
12   [TYPE]              string
12   [SQUARE_OPEN]       [
12   [NUMBER]            0
12   [SQUARE_CLOSE]      ]
12   [FPAREN_CLOSE]      )
12   [SQUARE_CLOSE]      ]
12   [NEWLINE]           
13   [QUALIFIER]         public
13   [TYPE]              void
13   [FUNC_DEF]          SetFlags_iOS
13   [FPAREN_OPEN]       (
13   [TYPE]              string
13   [WORD]              flags
13   [COMMA]             ,
13   [TYPE]              string
13   [TSQUARE]           []
13   [WORD]              expected
13   [FPAREN_CLOSE]      )
13   [NEWLINE]           
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           