Line [Token]             Text
1    [NEWLINE]           
2    [FUNC_CALL]         NSAssert
2    [FPAREN_OPEN]       (
2    [SQUARE_OPEN]       [
2    [OC_MSG_CLASS]      self
2    [MEMBER]            .
2    [TYPE]              delegate
2    [OC_MSG_FUNC]       conformsToProtocol
2    [OC_COLON]          :
2    [OC_PROTOCOL]       @protocol
2    [PAREN_OPEN]        (
2    [WORD]              UISearchBarDelegate
2    [PAREN_CLOSE]       )
2    [SQUARE_CLOSE]      ]
2    [COMMA]             ,
2    [STRING]            @"Some Error."
2    [FPAREN_CLOSE]      )
2    [SEMICOLON]         ;
2    [NEWLINE]           
4    [TYPE]              Protocol
4    [PTR_TYPE]          *
4    [WORD]              counter
4    [ASSIGN]            =
4    [OC_PROTOCOL]       @protocol
4    [PAREN_OPEN]        (
4    [WORD]              ReferenceCounting
4    [PAREN_CLOSE]       )
4    [SEMICOLON]         ;
4    [NEWLINE]           
6    [OC_PROTOCOL]       @protocol
6    [OC_CLASS]          ReferenceCounting
6    [NEWLINE]           
8    [OC_SCOPE]          -
8    [WORD]              setRefCount
8    [OC_COLON]          :
8    [PAREN_OPEN]        (
8    [TYPE]              int
8    [PAREN_CLOSE]       )
8    [WORD]              count
8    [SEMICOLON]         ;
8    [NEWLINE]           
10   [OC_SCOPE]          -
10   [PAREN_OPEN]        (
10   [TYPE]              int
10   [PAREN_CLOSE]       )
10   [OC_MSG_SPEC]       refCount
10   [SEMICOLON]         ;
10   [NEWLINE]           
12   [OC_SCOPE]          -
12   [WORD]              incrementCount
12   [SEMICOLON]         ;
12   [NEWLINE]           
14   [OC_SCOPE]          -
14   [WORD]              decrementCount
14   [SEMICOLON]         ;
14   [NEWLINE]           
16   [OC_END]            @end
16   [NEWLINE]           
18   [OC_INTF]           @interface
18   [OC_CLASS]          Formatter
18   [CLASS_COLON]       :
18   [WORD]              NSObject
18   [ANGLE_OPEN]        <
18   [TYPE]              Formatting
18   [COMMA]             ,
18   [TYPE]              Prettifying
18   [ANGLE_CLOSE]       >
18   [NEWLINE]           
20   [OC_END]            @end
20   [NEWLINE]           
22   [IF]                if
22   [SPAREN_OPEN]       (
22   [SQUARE_OPEN]       [
22   [OC_MSG_CLASS]      receiver
22   [OC_MSG_FUNC]       conformsTo
22   [OC_COLON]          :
22   [OC_PROTOCOL]       @protocol
22   [PAREN_OPEN]        (
22   [WORD]              ReferenceCounting
22   [PAREN_CLOSE]       )
22   [SQUARE_CLOSE]      ]
22   [SPAREN_CLOSE]      )
22   [NEWLINE]           
22   [BRACE_OPEN]        {
22   [NEWLINE]           
23   [SQUARE_OPEN]       [
23   [OC_MSG_CLASS]      receiver
23   [OC_MSG_FUNC]       incrementCount
23   [SQUARE_CLOSE]      ]
23   [SEMICOLON]         ;
23   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           
25   [OC_PROTOCOL]       @protocol
25   [OC_CLASS]          B
25   [SEMICOLON]         ;
25   [NEWLINE]           
27   [OC_PROTOCOL]       @protocol
27   [OC_CLASS]          A
27   [NEWLINE]           
28   [OC_SCOPE]          -
28   [WORD]              Foo
28   [OC_COLON]          :
28   [PAREN_OPEN]        (
28   [TYPE]              id
28   [ANGLE_OPEN]        <
28   [TYPE]              B
28   [ANGLE_CLOSE]       >
28   [PAREN_CLOSE]       )
28   [WORD]              anObject
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [OC_END]            @end
29   [NEWLINE]           