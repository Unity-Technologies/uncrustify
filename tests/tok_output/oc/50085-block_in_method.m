Line [Token]             Text
1    [NEWLINE]           
3    [OC_IMPL]           @implementation
3    [OC_CLASS]          NSArray
3    [PAREN_OPEN]        (
3    [OC_CATEGORY]       WWDC
3    [PAREN_CLOSE]       )
3    [NEWLINE]           
4    [OC_SCOPE]          -
4    [PAREN_OPEN]        (
4    [TYPE]              NSArray
4    [PTR_TYPE]          *
4    [PAREN_CLOSE]       )
4    [OC_MSG_DECL]       map
4    [OC_COLON]          :
4    [PAREN_OPEN]        (
4    [TYPE]              id
4    [TPAREN_OPEN]       (
4    [PTR_TYPE]          ^
4    [TPAREN_CLOSE]      )
4    [FPAREN_OPEN]       (
4    [TYPE]              id
4    [FPAREN_CLOSE]      )
4    [PAREN_CLOSE]       )
4    [WORD]              xform
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [TYPE]              id
5    [WORD]              result
5    [ASSIGN]            =
5    [SQUARE_OPEN]       [
5    [OC_MSG_CLASS]      NSMutableArray
5    [OC_MSG_FUNC]       array
5    [SQUARE_CLOSE]      ]
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [FOR]               for
6    [SPAREN_OPEN]       (
6    [TYPE]              id
6    [WORD]              elem
6    [IN]                in
6    [WORD]              self
6    [SPAREN_CLOSE]      )
6    [VBRACE_OPEN]       
6    [NEWLINE]           
7    [SQUARE_OPEN]       [
7    [OC_MSG_CLASS]      result
7    [OC_MSG_FUNC]       addObject
7    [OC_COLON]          :
7    [FUNC_CALL]         xform
7    [FPAREN_OPEN]       (
7    [WORD]              elem
7    [FPAREN_CLOSE]      )
7    [SQUARE_CLOSE]      ]
7    [SEMICOLON]         ;
7    [VBRACE_CLOSE]      
7    [NEWLINE]           
8    [RETURN]            return
8    [WORD]              result
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
11   [OC_SCOPE]          -
11   [PAREN_OPEN]        (
11   [TYPE]              NSArray
11   [PTR_TYPE]          *
11   [PAREN_CLOSE]       )
11   [OC_MSG_DECL]       collect
11   [OC_COLON]          :
11   [PAREN_OPEN]        (
11   [TYPE]              BOOL
11   [TPAREN_OPEN]       (
11   [PTR_TYPE]          ^
11   [TPAREN_CLOSE]      )
11   [FPAREN_OPEN]       (
11   [TYPE]              id
11   [FPAREN_CLOSE]      )
11   [PAREN_CLOSE]       )
11   [WORD]              predicate
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [TYPE]              id
12   [WORD]              result
12   [ASSIGN]            =
12   [SQUARE_OPEN]       [
12   [OC_MSG_CLASS]      NSMutableArray
12   [OC_MSG_FUNC]       array
12   [SQUARE_CLOSE]      ]
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [FOR]               for
13   [SPAREN_OPEN]       (
13   [TYPE]              id
13   [WORD]              elem
13   [IN]                in
13   [WORD]              self
13   [SPAREN_CLOSE]      )
13   [VBRACE_OPEN]       
13   [NEWLINE]           
14   [IF]                if
14   [SPAREN_OPEN]       (
14   [FUNC_CALL]         predicate
14   [FPAREN_OPEN]       (
14   [WORD]              elem
14   [FPAREN_CLOSE]      )
14   [SPAREN_CLOSE]      )
14   [VBRACE_OPEN]       
14   [NEWLINE]           
15   [SQUARE_OPEN]       [
15   [OC_MSG_CLASS]      result
15   [OC_MSG_FUNC]       addObject
15   [OC_COLON]          :
15   [WORD]              elem
15   [SQUARE_CLOSE]      ]
15   [SEMICOLON]         ;
15   [VBRACE_CLOSE]      
15   [VBRACE_CLOSE]      
15   [NEWLINE]           
16   [RETURN]            return
16   [WORD]              result
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
19   [OC_SCOPE]          -
19   [PAREN_OPEN]        (
19   [TYPE]              void
19   [PAREN_CLOSE]       )
19   [OC_MSG_DECL]       each
19   [OC_COLON]          :
19   [PAREN_OPEN]        (
19   [TYPE]              void
19   [TPAREN_OPEN]       (
19   [PTR_TYPE]          ^
19   [TPAREN_CLOSE]      )
19   [FPAREN_OPEN]       (
19   [TYPE]              id
19   [TYPE]              object
19   [FPAREN_CLOSE]      )
19   [PAREN_CLOSE]       )
19   [WORD]              block
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [SQUARE_OPEN]       [
20   [OC_MSG_CLASS]      self
20   [OC_MSG_FUNC]       enumerateObjectsUsingBlock
20   [OC_COLON]          :
20   [OC_BLOCK_CARET]    ^
20   [FPAREN_OPEN]       (
20   [TYPE]              id
20   [WORD]              obj
20   [COMMA]             ,
20   [TYPE]              NSUInteger
20   [WORD]              idx
20   [COMMA]             ,
20   [TYPE]              BOOL
20   [PTR_TYPE]          *
20   [WORD]              stop
20   [FPAREN_CLOSE]      )
20   [BRACE_OPEN]        {
20   [NEWLINE]           
21   [FUNC_CALL]         block
21   [FPAREN_OPEN]       (
21   [WORD]              obj
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [SQUARE_CLOSE]      ]
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           
25   [COMMENT_CPP]       // corner case: block literal in use with return type
25   [NEWLINE]           
26   [TYPE]              id
26   [WORD]              longLines
26   [ASSIGN]            =
26   [SQUARE_OPEN]       [
26   [OC_MSG_CLASS]      allLines
26   [OC_MSG_FUNC]       collect
26   [OC_COLON]          :
26   [OC_BLOCK_CARET]    ^
26   [TYPE]              BOOL
26   [FPAREN_OPEN]       (
26   [TYPE]              id
26   [WORD]              item
26   [FPAREN_CLOSE]      )
26   [BRACE_OPEN]        {
26   [NEWLINE]           
27   [RETURN]            return
27   [SQUARE_OPEN]       [
27   [OC_MSG_CLASS]      item
27   [OC_MSG_FUNC]       length
27   [SQUARE_CLOSE]      ]
27   [COMPARE]           >
27   [NUMBER]            20
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [BRACE_CLOSE]       }
28   [SQUARE_CLOSE]      ]
28   [SEMICOLON]         ;
28   [NEWLINE]           
30   [COMMENT_CPP]       // corner case: block literal in use with return type
30   [NEWLINE]           
31   [TYPE]              id
31   [WORD]              longLines
31   [ASSIGN]            =
31   [SQUARE_OPEN]       [
31   [OC_MSG_CLASS]      allLines
31   [OC_MSG_FUNC]       collect
31   [OC_COLON]          :
31   [OC_BLOCK_CARET]    ^
31   [TYPE]              BOOL
31   [PTR_TYPE]          *
31   [FPAREN_OPEN]       (
31   [TYPE]              id
31   [WORD]              item
31   [FPAREN_CLOSE]      )
31   [BRACE_OPEN]        {
31   [NEWLINE]           
32   [RETURN]            return
32   [SQUARE_OPEN]       [
32   [OC_MSG_CLASS]      item
32   [OC_MSG_FUNC]       length
32   [SQUARE_CLOSE]      ]
32   [COMPARE]           >
32   [NUMBER]            20
32   [SEMICOLON]         ;
32   [NEWLINE]           
33   [BRACE_CLOSE]       }
33   [SQUARE_CLOSE]      ]
33   [SEMICOLON]         ;
33   [NEWLINE]           
35   [OC_END]            @end
35   [NEWLINE]           
37   [COMMENT_CPP]       // 1. block literal: ^{ ... };
37   [NEWLINE]           
38   [COMMENT_CPP]       // 2. block declaration: return_t (^name) (int arg1, int arg2, ...) NB: return_t is optional and name is also optional
38   [NEWLINE]           
39   [COMMENT_CPP]       // 3. block inline call ^ return_t (int arg) { ... }; NB: return_t is optional
39   [NEWLINE]           