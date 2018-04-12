Line [Token]             Text
1    [USING]             using
1    [WORD]              System
1    [SEMICOLON]         ;
1    [NEWLINE]           
2    [USING]             using
2    [WORD]              System
2    [MEMBER]            .
2    [WORD]              Collections
2    [MEMBER]            .
2    [WORD]              Generic
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [USING]             using
3    [WORD]              System
3    [MEMBER]            .
3    [WORD]              Globalization
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [USING]             using
4    [WORD]              UnityEngine
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [USING]             using
5    [WORD]              UnityEngine
5    [MEMBER]            .
5    [WORD]              Serialization
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [NAMESPACE]         namespace
6    [WORD]              UnityEngine
6    [MEMBER]            .
6    [WORD]              Experimental
6    [MEMBER]            .
6    [WORD]              Input
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [QUALIFIER]         public
8    [CLASS]             class
8    [TYPE]              ActionMap
8    [CLASS_COLON]       :
8    [WORD]              ScriptableObject
8    [COMMA]             ,
8    [WORD]              IControlDomainSource
8    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [QUALIFIER]         public
10   [TYPE]              List
10   [ANGLE_OPEN]        <
10   [TYPE]              InputControl
10   [ANGLE_CLOSE]       >
10   [FUNC_DEF]          BuildControlsList
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [TYPE]              ControlSetup
12   [WORD]              controlsSetup
12   [ASSIGN]            =
12   [NEW]               new
12   [FUNC_CALL]         ControlSetup
12   [FPAREN_OPEN]       (
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [FOR]               for
13   [SPAREN_OPEN]       (
13   [TYPE]              int
13   [WORD]              i
13   [ASSIGN]            =
13   [NUMBER]            0
13   [SEMICOLON]         ;
13   [WORD]              i
13   [COMPARE]           <
13   [WORD]              actions
13   [MEMBER]            .
13   [WORD]              Count
13   [SEMICOLON]         ;
13   [WORD]              i
13   [INCDEC_AFTER]      ++
13   [SPAREN_CLOSE]      )
13   [NEWLINE]           
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [TYPE]              var
15   [WORD]              action
15   [ASSIGN]            =
15   [WORD]              actions
15   [SQUARE_OPEN]       [
15   [WORD]              i
15   [SQUARE_CLOSE]      ]
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [COMMENT_CPP]       // This line is kept with 71 spaces.
16   [NEWLINE]           
17   [TYPE]              SupportedControl
17   [WORD]              supportedControl
17   [ASSIGN]            =
17   [PAREN_OPEN]        (
17   [TYPE]              SupportedControl
17   [PAREN_CLOSE]       )
17   [PAREN_OPEN]        (
17   [SIZEOF]            typeof
17   [PAREN_OPEN]        (
17   [WORD]              SupportedControl
17   [PAREN_CLOSE]       )
17   [NEWLINE]           
18   [MEMBER]            .
18   [FUNC_CALL]         GetMethod
18   [FPAREN_OPEN]       (
18   [STRING]            "Get"
18   [FPAREN_CLOSE]      )
18   [NEWLINE]           
19   [MEMBER]            .
19   [FUNC_CALL]         MakeGenericMethod
19   [FPAREN_OPEN]       (
19   [WORD]              actions
19   [SQUARE_OPEN]       [
19   [WORD]              i
19   [SQUARE_CLOSE]      ]
19   [MEMBER]            .
19   [WORD]              controlType
19   [FPAREN_CLOSE]      )
19   [NEWLINE]           
20   [MEMBER]            .
20   [FUNC_CALL]         Invoke
20   [FPAREN_OPEN]       (
20   [WORD]              null
20   [COMMA]             ,
20   [NEW]               new
20   [TYPE]              object
20   [TSQUARE]           []
20   [BRACE_OPEN]        {
20   [WORD]              actions
20   [SQUARE_OPEN]       [
20   [WORD]              i
20   [SQUARE_CLOSE]      ]
20   [MEMBER]            .
20   [WORD]              name
20   [BRACE_CLOSE]       }
20   [FPAREN_CLOSE]      )
20   [PAREN_CLOSE]       )
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [TYPE]              action
21   [MEMBER]            .
21   [WORD]              controlIndex
21   [ASSIGN]            =
21   [WORD]              controlsSetup
21   [MEMBER]            .
21   [FUNC_CALL]         AddControl
21   [FPAREN_OPEN]       (
21   [WORD]              supportedControl
21   [FPAREN_CLOSE]      )
21   [MEMBER]            .
21   [WORD]              index
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
23   [RETURN]            return
23   [WORD]              controlsSetup
23   [MEMBER]            .
23   [WORD]              controls
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [NEWLINE]           
25   [BRACE_CLOSE]       }
25   [NEWLINE]           
26   [BRACE_CLOSE]       }
26   [NEWLINE]           