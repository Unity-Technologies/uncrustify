Line [Token]             Text
1    [QUALIFIER]         public
1    [CLASS]             class
1    [TYPE]              MyGenericClass
1    [ANGLE_OPEN]        <
1    [TYPE]              T
1    [ANGLE_CLOSE]       >
1    [WHERE_SPEC]        where
1    [WORD]              T
1    [WHERE_COLON]       :
1    [WORD]              IComparable
1    [BRACE_OPEN]        {
1    [BRACE_CLOSE]       }
1    [NEWLINE]           
3    [CLASS]             class
3    [TYPE]              MyClass
3    [ANGLE_OPEN]        <
3    [TYPE]              T
3    [COMMA]             ,
3    [TYPE]              U
3    [ANGLE_CLOSE]       >
3    [NEWLINE]           
4    [WHERE_SPEC]        where
4    [WORD]              T
4    [WHERE_COLON]       :
4    [WORD]              class
4    [NEWLINE]           
5    [WHERE_SPEC]        where
5    [WORD]              U
5    [WHERE_COLON]       :
5    [WORD]              struct
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
8    [QUALIFIER]         public
8    [CLASS]             class
8    [TYPE]              MyGenericClass
8    [ANGLE_OPEN]        <
8    [TYPE]              T
8    [ANGLE_CLOSE]       >
8    [WHERE_SPEC]        where
8    [WORD]              T
8    [WHERE_COLON]       :
8    [WORD]              IComparable
8    [COMMA]             ,
8    [NEW]               new
8    [PAREN_OPEN]        (
8    [PAREN_CLOSE]       )
8    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [COMMENT_CPP]       // The following line is not possible without new() constraint:
10   [NEWLINE]           
11   [TYPE]              T
11   [WORD]              item
11   [ASSIGN]            =
11   [NEW]               new
11   [FUNC_CALL]         T
11   [FPAREN_OPEN]       (
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [NEWLINE]           
14   [CLASS]             interface
14   [TYPE]              IMyInterface
14   [NEWLINE]           
15   [BRACE_OPEN]        {
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
18   [CLASS]             class
18   [TYPE]              Dictionary
18   [ANGLE_OPEN]        <
18   [TYPE]              TKey
18   [COMMA]             ,
18   [TYPE]              TVal
18   [ANGLE_CLOSE]       >
18   [NEWLINE]           
19   [WHERE_SPEC]        where
19   [WORD]              TKey
19   [WHERE_COLON]       :
19   [WORD]              IComparable
19   [COMMA]             ,
19   [WORD]              IEnumerable
19   [NEWLINE]           
20   [WHERE_SPEC]        where
20   [WORD]              TVal
20   [WHERE_COLON]       :
20   [WORD]              IMyInterface
20   [NEWLINE]           
21   [BRACE_OPEN]        {
21   [NEWLINE]           
22   [QUALIFIER]         public
22   [TYPE]              void
22   [FUNC_DEF]          Add
22   [FPAREN_OPEN]       (
22   [TYPE]              TKey
22   [WORD]              key
22   [COMMA]             ,
22   [TYPE]              TVal
22   [WORD]              val
22   [FPAREN_CLOSE]      )
22   [NEWLINE]           
23   [BRACE_OPEN]        {
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [NEWLINE]           
25   [BRACE_CLOSE]       }
25   [NEWLINE]           
27   [CLASS]             class
27   [TYPE]              List
27   [ANGLE_OPEN]        <
27   [TYPE]              T
27   [ANGLE_CLOSE]       >
27   [NEWLINE]           
28   [BRACE_OPEN]        {
28   [NEWLINE]           
29   [TYPE]              void
29   [FUNC_DEF]          Add
29   [ANGLE_OPEN]        <
29   [TYPE]              U
29   [ANGLE_CLOSE]       >
29   [FPAREN_OPEN]       (
29   [TYPE]              List
29   [ANGLE_OPEN]        <
29   [TYPE]              U
29   [ANGLE_CLOSE]       >
29   [WORD]              items
29   [FPAREN_CLOSE]      )
29   [WHERE_SPEC]        where
29   [WORD]              U
29   [WHERE_COLON]       :
29   [WORD]              T
29   [BRACE_OPEN]        {
29   [COMMENT]           /*...*/
29   [BRACE_CLOSE]       }
29   [NEWLINE]           
30   [TYPE]              void
30   [FUNC_DEF]          Add
30   [ANGLE_OPEN]        <
30   [TYPE]              U
30   [ANGLE_CLOSE]       >
30   [FPAREN_OPEN]       (
30   [TYPE]              List
30   [ANGLE_OPEN]        <
30   [TYPE]              U
30   [ANGLE_CLOSE]       >
30   [WORD]              items
30   [FPAREN_CLOSE]      )
30   [WHERE_SPEC]        where
30   [WORD]              U
30   [WHERE_COLON]       :
30   [WORD]              T
30   [BRACE_OPEN]        {
30   [COMMENT]           /*...*/
30   [BRACE_CLOSE]       }
30   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [NEWLINE]           
33   [QUALIFIER]         extern
33   [TYPE]              T
33   [FUNC_PROTO]        GetNodeFromGuid
33   [ANGLE_OPEN]        <
33   [TYPE]              T
33   [ANGLE_CLOSE]       >
33   [FPAREN_OPEN]       (
33   [TYPE]              Guid
33   [WORD]              guid
33   [FPAREN_CLOSE]      )
33   [WHERE_SPEC]        where
33   [WORD]              T
33   [WHERE_COLON]       :
33   [WORD]              INode
33   [SEMICOLON]         ;
33   [NEWLINE]           
34   [QUALIFIER]         extern
34   [TYPE]              T
34   [FUNC_PROTO]        GetNodeFromGuid
34   [ANGLE_OPEN]        <
34   [TYPE]              T
34   [ANGLE_CLOSE]       >
34   [FPAREN_OPEN]       (
34   [TYPE]              Guid
34   [WORD]              guid
34   [FPAREN_CLOSE]      )
34   [WHERE_SPEC]        where
34   [WORD]              T
34   [WHERE_COLON]       :
34   [WORD]              INode
34   [SEMICOLON]         ;
34   [NEWLINE]           