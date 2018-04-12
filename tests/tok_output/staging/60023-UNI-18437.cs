Line [Token]             Text
1    [QUALIFIER]         private
1    [QUALIFIER]         static
1    [TYPE]              Type
1    [TSQUARE]           []
1    [FUNC_DEF]          GetAllVisualElementTypes
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [RETURN]            return
3    [SIZEOF]            typeof
3    [PAREN_OPEN]        (
3    [WORD]              VisualElement
3    [PAREN_CLOSE]       )
3    [MEMBER]            .
3    [WORD]              Assembly
3    [MEMBER]            .
3    [FUNC_CALL]         GetTypes
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [MEMBER]            .
4    [FUNC_CALL]         Where
4    [FPAREN_OPEN]       (
4    [WORD]              t
4    [LAMBDA]            =>
4    [WORD]              t
4    [COMPARE]           !=
4    [SIZEOF]            typeof
4    [PAREN_OPEN]        (
4    [WORD]              VisualElement
4    [PAREN_CLOSE]       )
4    [BOOL]              &&
4    [NEWLINE]           
5    [WORD]              t
5    [COMPARE]           !=
5    [SIZEOF]            typeof
5    [PAREN_OPEN]        (
5    [WORD]              Panel
5    [PAREN_CLOSE]       )
5    [BOOL]              &&
5    [NEWLINE]           
6    [NOT]               !
6    [WORD]              t
6    [MEMBER]            .
6    [WORD]              IsAbstract
6    [BOOL]              &&
6    [NEWLINE]           
7    [NOT]               !
7    [SIZEOF]            typeof
7    [PAREN_OPEN]        (
7    [WORD]              IMElement
7    [PAREN_CLOSE]       )
7    [MEMBER]            .
7    [FUNC_CALL]         IsAssignableFrom
7    [FPAREN_OPEN]       (
7    [WORD]              t
7    [FPAREN_CLOSE]      )
7    [BOOL]              &&
7    [NEWLINE]           
8    [NOT]               !
8    [SIZEOF]            typeof
8    [PAREN_OPEN]        (
8    [WORD]              IMContainer
8    [PAREN_CLOSE]       )
8    [MEMBER]            .
8    [FUNC_CALL]         IsAssignableFrom
8    [FPAREN_OPEN]       (
8    [WORD]              t
8    [FPAREN_CLOSE]      )
8    [BOOL]              &&
8    [NEWLINE]           
9    [SIZEOF]            typeof
9    [PAREN_OPEN]        (
9    [WORD]              VisualElement
9    [PAREN_CLOSE]       )
9    [MEMBER]            .
9    [FUNC_CALL]         IsAssignableFrom
9    [FPAREN_OPEN]       (
9    [WORD]              t
9    [FPAREN_CLOSE]      )
9    [FPAREN_CLOSE]      )
9    [MEMBER]            .
9    [FUNC_CALL]         ToArray
9    [FPAREN_OPEN]       (
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
12   [COMMENT_CPP]       // to this
12   [NEWLINE]           
13   [QUALIFIER]         private
13   [QUALIFIER]         static
13   [TYPE]              Type
13   [TSQUARE]           []
13   [FUNC_DEF]          GetAllVisualElementAssetTypes
13   [FPAREN_OPEN]       (
13   [FPAREN_CLOSE]      )
13   [NEWLINE]           
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [RETURN]            return
15   [SIZEOF]            typeof
15   [PAREN_OPEN]        (
15   [WORD]              VisualElement
15   [PAREN_CLOSE]       )
15   [MEMBER]            .
15   [WORD]              Assembly
15   [MEMBER]            .
15   [FUNC_CALL]         GetTypes
15   [FPAREN_OPEN]       (
15   [FPAREN_CLOSE]      )
15   [NEWLINE]           
16   [MEMBER]            .
16   [FUNC_CALL]         Where
16   [FPAREN_OPEN]       (
16   [WORD]              t
16   [LAMBDA]            =>
16   [WORD]              t
16   [COMPARE]           !=
16   [SIZEOF]            typeof
16   [PAREN_OPEN]        (
16   [WORD]              VisualElement
16   [PAREN_CLOSE]       )
16   [BOOL]              &&
16   [NEWLINE]           
17   [WORD]              t
17   [COMPARE]           !=
17   [SIZEOF]            typeof
17   [PAREN_OPEN]        (
17   [WORD]              Panel
17   [PAREN_CLOSE]       )
17   [BOOL]              &&
17   [NEWLINE]           
18   [NOT]               !
18   [WORD]              t
18   [MEMBER]            .
18   [WORD]              IsAbstract
18   [BOOL]              &&
18   [NEWLINE]           
19   [NOT]               !
19   [SIZEOF]            typeof
19   [PAREN_OPEN]        (
19   [WORD]              IMElement
19   [PAREN_CLOSE]       )
19   [MEMBER]            .
19   [FUNC_CALL]         IsAssignableFrom
19   [FPAREN_OPEN]       (
19   [WORD]              t
19   [FPAREN_CLOSE]      )
19   [BOOL]              &&
19   [NEWLINE]           
20   [NOT]               !
20   [SIZEOF]            typeof
20   [PAREN_OPEN]        (
20   [WORD]              IMContainer
20   [PAREN_CLOSE]       )
20   [MEMBER]            .
20   [FUNC_CALL]         IsAssignableFrom
20   [FPAREN_OPEN]       (
20   [WORD]              t
20   [FPAREN_CLOSE]      )
20   [BOOL]              &&
20   [NEWLINE]           
21   [SIZEOF]            typeof
21   [PAREN_OPEN]        (
21   [WORD]              VisualElement
21   [PAREN_CLOSE]       )
21   [MEMBER]            .
21   [FUNC_CALL]         IsAssignableFrom
21   [FPAREN_OPEN]       (
21   [WORD]              t
21   [FPAREN_CLOSE]      )
21   [FPAREN_CLOSE]      )
21   [MEMBER]            .
21   [FUNC_CALL]         ToArray
21   [FPAREN_OPEN]       (
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           