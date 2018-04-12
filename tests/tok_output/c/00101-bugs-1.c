Line [Token]             Text
1    [TYPE]              int
1    [FUNC_PROTO]        oldfoo
1    [FPAREN_OPEN]       (
1    [TYPE]              bar
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [TYPE]              char
2    [WORD]              bar
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [RETURN]            return
4    [PAREN_OPEN]        (
4    [WORD]              bar
4    [ARITH]             -
4    [NUMBER]            2
4    [PAREN_CLOSE]       )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [NEWLINE]           
7    [TYPE]              int
7    [FUNC_DEF]          i2c_use_client
7    [FPAREN_OPEN]       (
7    [STRUCT]            struct
7    [TYPE]              i2c_client
7    [PTR_TYPE]          *
7    [WORD]              client
7    [FPAREN_CLOSE]      )
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [TYPE]              int
9    [WORD]              ret
9    [SEMICOLON]         ;
9    [NEWLINE]           
11   [WORD]              ret
11   [ASSIGN]            =
11   [FUNC_CALL]         i2c_inc_use_client
11   [FPAREN_OPEN]       (
11   [WORD]              client
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [IF]                if
12   [SPAREN_OPEN]       (
12   [WORD]              ret
12   [SPAREN_CLOSE]      )
12   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [RETURN]            return
13   [PAREN_OPEN]        (
13   [WORD]              ret
13   [PAREN_CLOSE]       )
13   [SEMICOLON]         ;
13   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
15   [IF]                if
15   [SPAREN_OPEN]       (
15   [PAREN_OPEN]        (
15   [WORD]              client
15   [MEMBER]            ->
15   [WORD]              flags
15   [ARITH]             &
15   [WORD]              I2C_CLIENT_ALLOW_USE
15   [PAREN_CLOSE]       )
15   [BOOL]              ||
15   [PAREN_OPEN]        (
15   [WORD]              a
15   [BOOL]              &&
15   [NEWLINE]           
16   [WORD]              something_else
16   [PAREN_CLOSE]       )
16   [SPAREN_CLOSE]      )
16   [NEWLINE]           
17   [BRACE_OPEN]        {
17   [NEWLINE]           
18   [IF]                if
18   [SPAREN_OPEN]       (
18   [WORD]              client
18   [MEMBER]            ->
18   [WORD]              flags
18   [ARITH]             &
18   [WORD]              I2C_CLIENT_ALLOW_MULTIPLE_USE
18   [SPAREN_CLOSE]      )
18   [NEWLINE]           
18   [BRACE_OPEN]        {
18   [NEWLINE]           
19   [TYPE]              client
19   [MEMBER]            ->
19   [WORD]              usage_count
19   [INCDEC_AFTER]      ++
19   [SEMICOLON]         ;
19   [NEWLINE]           
19   [BRACE_CLOSE]       }
19   [NEWLINE]           
20   [ELSE]              else
20   [ELSEIF]            if
20   [SPAREN_OPEN]       (
20   [WORD]              client
20   [MEMBER]            ->
20   [WORD]              usage_count
20   [COMPARE]           >
20   [NUMBER]            0
20   [SPAREN_CLOSE]      )
20   [NEWLINE]           
20   [BRACE_OPEN]        {
20   [NEWLINE]           
21   [GOTO]              goto
21   [WORD]              busy
21   [SEMICOLON]         ;
21   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [NEWLINE]           
22   [ELSE]              else
22   [NEWLINE]           
22   [BRACE_OPEN]        {
22   [NEWLINE]           
23   [TYPE]              client
23   [MEMBER]            ->
23   [WORD]              usage_count
23   [INCDEC_AFTER]      ++
23   [SEMICOLON]         ;
23   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [NEWLINE]           
26   [RETURN]            return
26   [PAREN_OPEN]        (
26   [NUMBER]            0
26   [PAREN_CLOSE]       )
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [LABEL]             busy
27   [LABEL_COLON]       :
27   [NEWLINE]           
28   [FUNC_CALL]         i2c_dec_use_client
28   [FPAREN_OPEN]       (
28   [WORD]              client
28   [FPAREN_CLOSE]      )
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [RETURN]            return
29   [PAREN_OPEN]        (
29   [NEG]               -
29   [WORD]              EBUSY
29   [PAREN_CLOSE]       )
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           
32   [TYPE]              void
32   [FUNC_DEF]          get_name
32   [FPAREN_OPEN]       (
32   [TYPE]              void
32   [FPAREN_CLOSE]      )
32   [NEWLINE]           
33   [BRACE_OPEN]        {
33   [NEWLINE]           
34   [WORD]              a
34   [ASSIGN]            =
34   [PAREN_OPEN]        (
34   [TYPE]              int
34   [PAREN_CLOSE]       )
34   [NUMBER]            5
34   [SEMICOLON]         ;
34   [NEWLINE]           
36   [IF]                if
36   [SPAREN_OPEN]       (
36   [WORD]              a
36   [SPAREN_CLOSE]      )
36   [NEWLINE]           
36   [BRACE_OPEN]        {
36   [NEWLINE]           
37   [IF]                if
37   [SPAREN_OPEN]       (
37   [WORD]              b
37   [SPAREN_CLOSE]      )
37   [NEWLINE]           
37   [BRACE_OPEN]        {
37   [NEWLINE]           
38   [WORD]              b
38   [INCDEC_AFTER]      --
38   [SEMICOLON]         ;
38   [NEWLINE]           
38   [BRACE_CLOSE]       }
38   [NEWLINE]           
39   [ELSE]              else
39   [NEWLINE]           
40   [BRACE_OPEN]        {
40   [NEWLINE]           
41   [WORD]              a
41   [INCDEC_AFTER]      ++
41   [SEMICOLON]         ;
41   [NEWLINE]           
42   [BRACE_CLOSE]       }
42   [NEWLINE]           
42   [BRACE_CLOSE]       }
42   [NEWLINE]           
43   [FOR]               for
43   [SPAREN_OPEN]       (
43   [WORD]              a
43   [ASSIGN]            =
43   [NUMBER]            0
43   [SEMICOLON]         ;
43   [WORD]              a
43   [COMPARE]           <
43   [NUMBER]            10
43   [SEMICOLON]         ;
43   [WORD]              a
43   [INCDEC_AFTER]      ++
43   [SPAREN_CLOSE]      )
43   [NEWLINE]           
43   [BRACE_OPEN]        {
43   [NEWLINE]           
44   [IF]                if
44   [SPAREN_OPEN]       (
44   [WORD]              b
44   [SPAREN_CLOSE]      )
44   [NEWLINE]           
45   [BRACE_OPEN]        {
45   [NEWLINE]           
46   [WORD]              b
46   [INCDEC_AFTER]      --
46   [SEMICOLON]         ;
46   [NEWLINE]           
47   [BRACE_CLOSE]       }
47   [NEWLINE]           
48   [ELSE]              else
48   [NEWLINE]           
48   [BRACE_OPEN]        {
48   [NEWLINE]           
49   [WORD]              a
49   [INCDEC_AFTER]      ++
49   [SEMICOLON]         ;
49   [NEWLINE]           
49   [BRACE_CLOSE]       }
49   [NEWLINE]           
49   [BRACE_CLOSE]       }
49   [NEWLINE]           
50   [RETURN]            return
50   [SEMICOLON]         ;
50   [NEWLINE]           
51   [BRACE_CLOSE]       }
51   [NEWLINE]           