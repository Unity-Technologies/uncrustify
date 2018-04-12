Line [Token]             Text
1    [TYPE]              int
1    [TPAREN_OPEN]       (
1    [PTR_TYPE]          ^
1    [FUNC_VAR]          myBlock
1    [TPAREN_CLOSE]      )
1    [FPAREN_OPEN]       (
1    [TYPE]              int
1    [FPAREN_CLOSE]      )
1    [ASSIGN]            =
1    [OC_BLOCK_CARET]    ^
1    [FPAREN_OPEN]       (
1    [TYPE]              int
1    [WORD]              num
1    [FPAREN_CLOSE]      )
1    [BRACE_OPEN]        {
1    [NEWLINE]           
1    [RETURN]            return
1    [WORD]              num
1    [ARITH]             *
1    [WORD]              multiplier
1    [SEMICOLON]         ;
1    [NEWLINE]           
1    [BRACE_CLOSE]       }
1    [SEMICOLON]         ;
1    [NEWLINE]           
2    [COMMENT_CPP]       // for comparison
2    [NEWLINE]           
3    [TYPE]              int
3    [TPAREN_OPEN]       (
3    [PTR_TYPE]          *
3    [FUNC_VAR]          fcnptr
3    [TPAREN_CLOSE]      )
3    [FPAREN_OPEN]       (
3    [TYPE]              int
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
5    [TYPE]              int
5    [WORD]              d
5    [ASSIGN]            =
5    [WORD]              i
5    [ARITH]             %
5    [NUMBER]            10
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [FUNC_CALL]         repeat
6    [FPAREN_OPEN]       (
6    [NUMBER]            10
6    [COMMA]             ,
6    [OC_BLOCK_CARET]    ^
6    [BRACE_OPEN]        {
6    [FUNC_CALL]         putc
6    [FPAREN_OPEN]       (
6    [STRING]            '0'
6    [ARITH]             +
6    [WORD]              d
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
9    [TYPE]              void
9    [TPAREN_OPEN]       (
9    [PTR_TYPE]          ^
9    [FUNC_VAR]          block
9    [TPAREN_CLOSE]      )
9    [FPAREN_OPEN]       (
9    [TYPE]              void
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [TYPEDEF]           typedef
10   [TYPE]              void
10   [TPAREN_OPEN]       (
10   [PTR_TYPE]          ^
10   [TYPE]              vstr_t
10   [TPAREN_CLOSE]      )
10   [FPAREN_OPEN]       (
10   [TYPE]              char
10   [PTR_TYPE]          *
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [TYPEDEF]           typedef
11   [TYPE]              void
11   [TPAREN_OPEN]       (
11   [PTR_TYPE]          ^
11   [TYPE]              workBlk_t
11   [TPAREN_CLOSE]      )
11   [FPAREN_OPEN]       (
11   [TYPE]              void
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
13   [TYPE]              void
13   [FUNC_DEF]          AllLinesInFile
13   [FPAREN_OPEN]       (
13   [TYPE]              char
13   [PTR_TYPE]          *
13   [WORD]              f
13   [COMMA]             ,
13   [TYPE]              vstr_t
13   [WORD]              block
13   [FPAREN_CLOSE]      )
13   [NEWLINE]           
13   [BRACE_OPEN]        {
13   [NEWLINE]           
14   [TYPE]              FILE
14   [PTR_TYPE]          *
14   [WORD]              fp
14   [ASSIGN]            =
14   [FUNC_CALL]         fopen
14   [FPAREN_OPEN]       (
14   [WORD]              f
14   [COMMA]             ,
14   [STRING]            "r"
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [IF]                if
15   [SPAREN_OPEN]       (
15   [NOT]               !
15   [WORD]              fp
15   [SPAREN_CLOSE]      )
15   [NEWLINE]           
15   [BRACE_OPEN]        {
15   [NEWLINE]           
15   [RETURN]            return
15   [SEMICOLON]         ;
15   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
16   [TYPE]              char
16   [WORD]              line
16   [SQUARE_OPEN]       [
16   [NUMBER]            1024
16   [SQUARE_CLOSE]      ]
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [WHILE]             while
17   [SPAREN_OPEN]       (
17   [FUNC_CALL]         fgets
17   [FPAREN_OPEN]       (
17   [WORD]              line
17   [COMMA]             ,
17   [NUMBER]            1024
17   [COMMA]             ,
17   [WORD]              fp
17   [FPAREN_CLOSE]      )
17   [SPAREN_CLOSE]      )
17   [NEWLINE]           
17   [BRACE_OPEN]        {
17   [NEWLINE]           
18   [FUNC_CALL]         block
18   [FPAREN_OPEN]       (
18   [WORD]              line
18   [FPAREN_CLOSE]      )
18   [SEMICOLON]         ;
18   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [NEWLINE]           
19   [FUNC_CALL]         fclose
19   [FPAREN_OPEN]       (
19   [WORD]              fp
19   [FPAREN_CLOSE]      )
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [NEWLINE]           
23   [OC_IMPL]           @implementation
23   [OC_CLASS]          NSArray
23   [PAREN_OPEN]        (
23   [OC_CATEGORY]       WWDC
23   [PAREN_CLOSE]       )
23   [NEWLINE]           
24   [OC_SCOPE]          -
24   [PAREN_OPEN]        (
24   [TYPE]              NSArray
24   [PTR_TYPE]          *
24   [PAREN_CLOSE]       )
24   [OC_MSG_DECL]       map
24   [OC_COLON]          :
24   [PAREN_OPEN]        (
24   [TYPE]              id
24   [TPAREN_OPEN]       (
24   [PTR_TYPE]          ^
24   [TPAREN_CLOSE]      )
24   [FPAREN_OPEN]       (
24   [TYPE]              id
24   [FPAREN_CLOSE]      )
24   [PAREN_CLOSE]       )
24   [WORD]              xform
24   [NEWLINE]           
24   [BRACE_OPEN]        {
24   [NEWLINE]           
25   [TYPE]              id
25   [WORD]              result
25   [ASSIGN]            =
25   [SQUARE_OPEN]       [
25   [OC_MSG_CLASS]      NSMutableArray
25   [OC_MSG_FUNC]       array
25   [SQUARE_CLOSE]      ]
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [FOR]               for
26   [SPAREN_OPEN]       (
26   [TYPE]              id
26   [WORD]              elem
26   [IN]                in
26   [WORD]              self
26   [SPAREN_CLOSE]      )
26   [NEWLINE]           
26   [BRACE_OPEN]        {
26   [NEWLINE]           
27   [SQUARE_OPEN]       [
27   [OC_MSG_CLASS]      result
27   [OC_MSG_FUNC]       addObject
27   [OC_COLON]          :
27   [FUNC_CALL]         xform
27   [FPAREN_OPEN]       (
27   [WORD]              elem
27   [FPAREN_CLOSE]      )
27   [SQUARE_CLOSE]      ]
27   [SEMICOLON]         ;
27   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
28   [RETURN]            return
28   [WORD]              result
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [BRACE_CLOSE]       }
29   [NEWLINE]           
31   [OC_SCOPE]          -
31   [PAREN_OPEN]        (
31   [TYPE]              NSArray
31   [PTR_TYPE]          *
31   [PAREN_CLOSE]       )
31   [OC_MSG_DECL]       collect
31   [OC_COLON]          :
31   [PAREN_OPEN]        (
31   [TYPE]              BOOL
31   [TPAREN_OPEN]       (
31   [PTR_TYPE]          ^
31   [TPAREN_CLOSE]      )
31   [FPAREN_OPEN]       (
31   [TYPE]              id
31   [FPAREN_CLOSE]      )
31   [PAREN_CLOSE]       )
31   [WORD]              predicate
31   [NEWLINE]           
31   [BRACE_OPEN]        {
31   [NEWLINE]           
32   [TYPE]              id
32   [WORD]              result
32   [ASSIGN]            =
32   [SQUARE_OPEN]       [
32   [OC_MSG_CLASS]      NSMutableArray
32   [OC_MSG_FUNC]       array
32   [SQUARE_CLOSE]      ]
32   [SEMICOLON]         ;
32   [NEWLINE]           
33   [FOR]               for
33   [SPAREN_OPEN]       (
33   [TYPE]              id
33   [WORD]              elem
33   [IN]                in
33   [WORD]              self
33   [SPAREN_CLOSE]      )
33   [NEWLINE]           
33   [BRACE_OPEN]        {
33   [NEWLINE]           
34   [IF]                if
34   [SPAREN_OPEN]       (
34   [FUNC_CALL]         predicate
34   [FPAREN_OPEN]       (
34   [WORD]              elem
34   [FPAREN_CLOSE]      )
34   [SPAREN_CLOSE]      )
34   [NEWLINE]           
34   [BRACE_OPEN]        {
34   [NEWLINE]           
35   [SQUARE_OPEN]       [
35   [OC_MSG_CLASS]      result
35   [OC_MSG_FUNC]       addObject
35   [OC_COLON]          :
35   [WORD]              elem
35   [SQUARE_CLOSE]      ]
35   [SEMICOLON]         ;
35   [NEWLINE]           
35   [BRACE_CLOSE]       }
35   [NEWLINE]           
35   [BRACE_CLOSE]       }
35   [NEWLINE]           
36   [RETURN]            return
36   [WORD]              result
36   [SEMICOLON]         ;
36   [NEWLINE]           
37   [BRACE_CLOSE]       }
37   [NEWLINE]           
39   [COMMENT_CPP]       // corner case: block literal in use with return type
39   [NEWLINE]           
40   [TYPE]              id
40   [WORD]              longLines
40   [ASSIGN]            =
40   [SQUARE_OPEN]       [
40   [OC_MSG_CLASS]      allLines
40   [OC_MSG_FUNC]       collect
40   [OC_COLON]          :
40   [OC_BLOCK_CARET]    ^
40   [TYPE]              BOOL
40   [FPAREN_OPEN]       (
40   [TYPE]              id
40   [WORD]              item
40   [FPAREN_CLOSE]      )
40   [BRACE_OPEN]        {
40   [NEWLINE]           
41   [RETURN]            return
41   [SQUARE_OPEN]       [
41   [OC_MSG_CLASS]      item
41   [OC_MSG_FUNC]       length
41   [SQUARE_CLOSE]      ]
41   [COMPARE]           >
41   [NUMBER]            20
41   [SEMICOLON]         ;
41   [NEWLINE]           
42   [BRACE_CLOSE]       }
42   [SQUARE_CLOSE]      ]
42   [SEMICOLON]         ;
42   [NEWLINE]           
44   [COMMENT_CPP]       // corner case: block literal in use with return type
44   [NEWLINE]           
45   [TYPE]              id
45   [WORD]              longLines
45   [ASSIGN]            =
45   [SQUARE_OPEN]       [
45   [OC_MSG_CLASS]      allLines
45   [OC_MSG_FUNC]       collect
45   [OC_COLON]          :
45   [OC_BLOCK_CARET]    ^
45   [TYPE]              BOOL
45   [PTR_TYPE]          *
45   [FPAREN_OPEN]       (
45   [TYPE]              id
45   [WORD]              item
45   [FPAREN_CLOSE]      )
45   [BRACE_OPEN]        {
45   [NEWLINE]           
46   [RETURN]            return
46   [SQUARE_OPEN]       [
46   [OC_MSG_CLASS]      item
46   [OC_MSG_FUNC]       length
46   [SQUARE_CLOSE]      ]
46   [COMPARE]           >
46   [NUMBER]            20
46   [SEMICOLON]         ;
46   [NEWLINE]           
47   [BRACE_CLOSE]       }
47   [SQUARE_CLOSE]      ]
47   [SEMICOLON]         ;
47   [NEWLINE]           
49   [OC_END]            @end
49   [NEWLINE]           
51   [COMMENT_CPP]       // 1. block literal: ^{ ... };
51   [NEWLINE]           
52   [COMMENT_CPP]       // 2. block declaration: return_t (^name) (int arg1, int arg2, ...) NB: return_t is optional and name is also optional
52   [NEWLINE]           
53   [COMMENT_CPP]       // 3. block inline call ^ return_t (int arg) { ... }; NB: return_t is optional
53   [NEWLINE]           