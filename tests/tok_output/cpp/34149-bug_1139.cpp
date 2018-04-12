Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          a
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [IF]                if
3    [SPAREN_OPEN]       (
3    [PAREN_OPEN]        (
3    [WORD]              tmp
3    [COMPARE]           ==
3    [WORD]              nullptr
3    [PAREN_CLOSE]       )
3    [BOOL]              ||
3    [NEWLINE]           
4    [PAREN_OPEN]        (
4    [PAREN_OPEN]        (
4    [WORD]              tmp
4    [MEMBER]            ->
4    [WORD]              type
4    [COMPARE]           !=
4    [WORD]              CT_NUMBER
4    [PAREN_CLOSE]       )
4    [BOOL]              &&
4    [NEWLINE]           
5    [PAREN_OPEN]        (
5    [WORD]              tmp
5    [MEMBER]            ->
5    [WORD]              type
5    [COMPARE]           !=
5    [WORD]              CT_SIZEOF
5    [PAREN_CLOSE]       )
5    [BOOL]              &&
5    [NEWLINE]           
6    [NOT]               !
6    [PAREN_OPEN]        (
6    [WORD]              tmp
6    [MEMBER]            ->
6    [WORD]              flags
6    [ARITH]             &
6    [PAREN_OPEN]        (
6    [WORD]              PCF_IN_STRUCT
6    [ARITH]             |
6    [WORD]              PCF_IN_CLASS
6    [PAREN_CLOSE]       )
6    [PAREN_CLOSE]       )
6    [PAREN_CLOSE]       )
6    [BOOL]              ||
6    [NEWLINE]           
7    [PAREN_OPEN]        (
7    [WORD]              tmp
7    [MEMBER]            ->
7    [WORD]              type
7    [COMPARE]           ==
7    [WORD]              CT_NEWLINE
7    [PAREN_CLOSE]       )
8    [SPAREN_CLOSE]      )
8    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [FUNC_CALL]         set_chunk_type
10   [FPAREN_OPEN]       (
10   [WORD]              next
10   [COMMA]             ,
10   [WORD]              CT_LABEL_COLON
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
12   [ELSE]              else
12   [ELSEIF]            if
12   [SPAREN_OPEN]       (
12   [PAREN_OPEN]        (
12   [WORD]              tmp
12   [COMPARE]           ==
12   [WORD]              nullptr
12   [PAREN_CLOSE]       )
12   [BOOL]              ||
12   [NEWLINE]           
13   [PAREN_OPEN]        (
13   [PAREN_OPEN]        (
13   [WORD]              tmp
13   [MEMBER]            ->
13   [WORD]              type
13   [COMPARE]           !=
13   [WORD]              CT_NUMBER
13   [PAREN_CLOSE]       )
13   [BOOL]              &&
13   [NEWLINE]           
14   [PAREN_OPEN]        (
14   [WORD]              tmp
14   [MEMBER]            ->
14   [WORD]              type
14   [COMPARE]           !=
14   [WORD]              CT_SIZEOF
14   [PAREN_CLOSE]       )
14   [BOOL]              &&
14   [NEWLINE]           
15   [NOT]               !
15   [PAREN_OPEN]        (
15   [WORD]              tmp
15   [MEMBER]            ->
15   [WORD]              flags
15   [ARITH]             &
15   [PAREN_OPEN]        (
15   [WORD]              PCF_IN_STRUCT
15   [ARITH]             |
15   [WORD]              PCF_IN_CLASS
15   [PAREN_CLOSE]       )
15   [PAREN_CLOSE]       )
15   [PAREN_CLOSE]       )
15   [BOOL]              ||
15   [NEWLINE]           
16   [PAREN_OPEN]        (
16   [WORD]              tmp
16   [MEMBER]            ->
16   [WORD]              type
16   [COMPARE]           ==
16   [WORD]              CT_NEWLINE
16   [PAREN_CLOSE]       )
17   [SPAREN_CLOSE]      )
17   [NEWLINE]           
18   [BRACE_OPEN]        {
18   [NEWLINE]           
19   [FUNC_CALL]         set_chunk_type
19   [FPAREN_OPEN]       (
19   [WORD]              next
19   [COMMA]             ,
19   [WORD]              CT_LABEL_COLON
19   [FPAREN_CLOSE]      )
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [NEWLINE]           
23   [IF]                if
23   [SPAREN_OPEN]       (
23   [PAREN_OPEN]        (
23   [WORD]              tmp
23   [COMPARE]           ==
23   [WORD]              nullptr
23   [PAREN_CLOSE]       )
23   [BOOL]              ||
23   [NEWLINE]           
24   [PAREN_OPEN]        (
24   [PAREN_OPEN]        (
24   [WORD]              tmp
24   [MEMBER]            ->
24   [WORD]              type
24   [COMPARE]           !=
24   [WORD]              CT_NUMBER
24   [PAREN_CLOSE]       )
24   [BOOL]              &&
24   [NEWLINE]           
25   [PAREN_OPEN]        (
25   [WORD]              tmp
25   [MEMBER]            ->
25   [WORD]              type
25   [COMPARE]           !=
25   [WORD]              CT_SIZEOF
25   [PAREN_CLOSE]       )
25   [BOOL]              &&
25   [NEWLINE]           
26   [NOT]               !
26   [PAREN_OPEN]        (
26   [WORD]              tmp
26   [MEMBER]            ->
26   [WORD]              flags
26   [ARITH]             &
26   [PAREN_OPEN]        (
26   [WORD]              PCF_IN_STRUCT
26   [ARITH]             |
26   [WORD]              PCF_IN_CLASS
26   [PAREN_CLOSE]       )
26   [PAREN_CLOSE]       )
26   [PAREN_CLOSE]       )
26   [BOOL]              ||
26   [NEWLINE]           
27   [PAREN_OPEN]        (
27   [WORD]              tmp
27   [MEMBER]            ->
27   [WORD]              type
27   [COMPARE]           ==
27   [WORD]              CT_NEWLINE
27   [PAREN_CLOSE]       )
27   [SPAREN_CLOSE]      )
27   [NEWLINE]           
28   [BRACE_OPEN]        {
28   [NEWLINE]           
29   [FUNC_CALL]         set_chunk_type
29   [FPAREN_OPEN]       (
29   [WORD]              next
29   [COMMA]             ,
29   [WORD]              CT_LABEL_COLON
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           
32   [IF]                if
32   [SPAREN_OPEN]       (
32   [PAREN_OPEN]        (
32   [WORD]              tmp
32   [COMPARE]           ==
32   [WORD]              nullptr
32   [PAREN_CLOSE]       )
32   [BOOL]              ||
32   [NEWLINE]           
33   [PAREN_OPEN]        (
33   [PAREN_OPEN]        (
33   [WORD]              tmp
33   [MEMBER]            ->
33   [WORD]              type
33   [COMPARE]           !=
33   [WORD]              CT_NUMBER
33   [PAREN_CLOSE]       )
33   [BOOL]              &&
33   [NEWLINE]           
34   [PAREN_OPEN]        (
34   [WORD]              tmp
34   [MEMBER]            ->
34   [WORD]              type
34   [COMPARE]           !=
34   [WORD]              CT_SIZEOF
34   [PAREN_CLOSE]       )
34   [BOOL]              &&
34   [NEWLINE]           
35   [NOT]               !
35   [PAREN_OPEN]        (
35   [WORD]              tmp
35   [MEMBER]            ->
35   [WORD]              flags
35   [ARITH]             &
35   [PAREN_OPEN]        (
35   [WORD]              PCF_IN_STRUCT
35   [ARITH]             |
35   [WORD]              PCF_IN_CLASS
35   [PAREN_CLOSE]       )
35   [PAREN_CLOSE]       )
35   [PAREN_CLOSE]       )
35   [BOOL]              ||
35   [NEWLINE]           
36   [PAREN_OPEN]        (
36   [WORD]              tmp
36   [MEMBER]            ->
36   [WORD]              type
36   [COMPARE]           ==
36   [WORD]              CT_NEWLINE
36   [PAREN_CLOSE]       )
38   [SPAREN_CLOSE]      )
38   [NEWLINE]           
39   [BRACE_OPEN]        {
39   [NEWLINE]           
40   [FUNC_CALL]         set_chunk_type
40   [FPAREN_OPEN]       (
40   [WORD]              next
40   [COMMA]             ,
40   [WORD]              CT_LABEL_COLON
40   [FPAREN_CLOSE]      )
40   [SEMICOLON]         ;
40   [NEWLINE]           
41   [BRACE_CLOSE]       }
41   [NEWLINE]           
42   [BRACE_CLOSE]       }
42   [NEWLINE]           