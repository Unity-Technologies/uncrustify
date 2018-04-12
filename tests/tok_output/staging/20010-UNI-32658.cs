Line [Token]             Text
1    [COMMENT_CPP]       //TestCase-001
1    [NEWLINE]           
2    [QUALIFIER]         internal
2    [STRUCT]            struct
2    [TYPE]              MyStruct
2    [ANGLE_OPEN]        <
2    [TYPE]              T
2    [ANGLE_CLOSE]       >
2    [NEWLINE]           
3    [WHERE_SPEC]        where
3    [WORD]              T
3    [WHERE_COLON]       :
3    [WORD]              struct
3    [COMMA]             ,
3    [WORD]              IPrepareFrameJob
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [NEWLINE]           
7    [COMMENT_CPP]       //TestCase-002
7    [NEWLINE]           
8    [CLASS]             class
8    [TYPE]              MyClass
8    [ANGLE_OPEN]        <
8    [TYPE]              T
8    [COMMA]             ,
8    [TYPE]              U
8    [ANGLE_CLOSE]       >
8    [NEWLINE]           
9    [WHERE_SPEC]        where
9    [WORD]              T
9    [WHERE_COLON]       :
9    [WORD]              class
9    [NEWLINE]           
10   [WHERE_SPEC]        where
10   [WORD]              U
10   [WHERE_COLON]       :
10   [WORD]              struct
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [NEWLINE]           
14   [COMMENT_CPP]       //TestCase-003
14   [NEWLINE]           
15   [CLASS]             interface
15   [TYPE]              IMyInterface
15   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
19   [CLASS]             class
19   [TYPE]              Dictionary
19   [ANGLE_OPEN]        <
19   [TYPE]              TKey
19   [COMMA]             ,
19   [TYPE]              TVal
19   [ANGLE_CLOSE]       >
19   [NEWLINE]           
20   [WHERE_SPEC]        where
20   [WORD]              TKey
20   [WHERE_COLON]       :
20   [WORD]              IComparable
20   [COMMA]             ,
20   [WORD]              IEnumerable
20   [NEWLINE]           
21   [WHERE_SPEC]        where
21   [WORD]              TVal
21   [WHERE_COLON]       :
21   [WORD]              IMyInterface
21   [NEWLINE]           
22   [BRACE_OPEN]        {
22   [NEWLINE]           
23   [QUALIFIER]         public
23   [TYPE]              void
23   [FUNC_DEF]          Add
23   [FPAREN_OPEN]       (
23   [TYPE]              TKey
23   [WORD]              key
23   [COMMA]             ,
23   [TYPE]              TVal
23   [WORD]              val
23   [FPAREN_CLOSE]      )
23   [BRACE_OPEN]        {
23   [BRACE_CLOSE]       }
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [NEWLINE]           
26   [TYPE]              long
26   [FUNC_PROTO]        DeviceCommand
26   [ANGLE_OPEN]        <
26   [TYPE]              TCommand
26   [ANGLE_CLOSE]       >
26   [FPAREN_OPEN]       (
26   [TYPE]              int
26   [WORD]              deviceId
26   [COMMA]             ,
26   [QUALIFIER]         ref
26   [TYPE]              TCommand
26   [WORD]              command
26   [FPAREN_CLOSE]      )
26   [NEWLINE]           
27   [WHERE_SPEC]        where
27   [WORD]              TCommand
27   [WHERE_COLON]       :
27   [WORD]              struct
27   [COMMA]             ,
27   [WORD]              IInputDeviceCommandInfo
27   [SEMICOLON]         ;
27   [NEWLINE]           
29   [QUALIFIER]         public
29   [QUALIFIER]         virtual
29   [TYPE]              long
29   [FUNC_PROTO]        OnDeviceCommand
29   [ANGLE_OPEN]        <
29   [TYPE]              TCommand
29   [ANGLE_CLOSE]       >
29   [FPAREN_OPEN]       (
29   [QUALIFIER]         ref
29   [TYPE]              TCommand
29   [WORD]              command
29   [FPAREN_CLOSE]      )
29   [NEWLINE]           
30   [WHERE_SPEC]        where
30   [WORD]              TCommand
30   [WHERE_COLON]       :
30   [WORD]              struct
30   [COMMA]             ,
30   [WORD]              IInputDeviceCommandInfo
30   [SEMICOLON]         ;
30   [NEWLINE]           
32   [TYPE]              long
32   [FUNC_DEF]          DeviceCommand
32   [ANGLE_OPEN]        <
32   [TYPE]              TCommand
32   [ANGLE_CLOSE]       >
32   [FPAREN_OPEN]       (
32   [TYPE]              int
32   [WORD]              deviceId
32   [COMMA]             ,
32   [QUALIFIER]         ref
32   [TYPE]              TCommand
32   [WORD]              command
32   [FPAREN_CLOSE]      )
32   [NEWLINE]           
33   [WHERE_SPEC]        where
33   [WORD]              TCommand
33   [WHERE_COLON]       :
33   [WORD]              struct
33   [COMMA]             ,
33   [WORD]              IInputDeviceCommandInfo
33   [NEWLINE]           
35   [QUALIFIER]         public
35   [QUALIFIER]         virtual
35   [TYPE]              long
35   [WORD]              OnDeviceCommand
35   [ANGLE_OPEN]        <
35   [TYPE]              TCommand
35   [ANGLE_CLOSE]       >
35   [PAREN_OPEN]        (
35   [QUALIFIER]         ref
35   [TYPE]              TCommand
35   [WORD]              command
35   [PAREN_CLOSE]       )
35   [NEWLINE]           
36   [WHERE_SPEC]        where
36   [WORD]              TCommand
36   [WHERE_COLON]       :
36   [WORD]              struct
36   [COMMA]             ,
36   [WORD]              IInputDeviceCommandInfo
36   [NEWLINE]           