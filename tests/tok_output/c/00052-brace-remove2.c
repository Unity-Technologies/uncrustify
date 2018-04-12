Line [Token]             Text
1    [COMMENT]           /* else is tied to if(two) */
1    [NEWLINE]           
2    [TYPE]              int
2    [FUNC_DEF]          main
2    [FPAREN_OPEN]       (
2    [FPAREN_CLOSE]      )
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [IF]                if
3    [SPAREN_OPEN]       (
3    [WORD]              one
3    [SPAREN_CLOSE]      )
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [IF]                if
4    [SPAREN_OPEN]       (
4    [WORD]              two
4    [SPAREN_CLOSE]      )
4    [VBRACE_OPEN]       
4    [NEWLINE]           
5    [FUNC_CALL]         sleep
5    [FPAREN_OPEN]       (
5    [NUMBER]            1
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [VBRACE_CLOSE]      
5    [NEWLINE]           
6    [ELSE]              else
6    [VBRACE_OPEN]       
6    [NEWLINE]           
7    [FUNC_CALL]         sleep
7    [FPAREN_OPEN]       (
7    [NUMBER]            2
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [VBRACE_CLOSE]      
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
10   [IF]                if
10   [SPAREN_OPEN]       (
10   [WORD]              three
10   [SPAREN_CLOSE]      )
10   [VBRACE_OPEN]       
10   [NEWLINE]           
11   [FUNC_CALL]         sleep
11   [FPAREN_OPEN]       (
11   [NUMBER]            1
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [VBRACE_CLOSE]      
11   [NEWLINE]           
12   [ELSE]              else
13   [ELSEIF]            if
13   [SPAREN_OPEN]       (
13   [WORD]              four
13   [SPAREN_CLOSE]      )
13   [VBRACE_OPEN]       
13   [NEWLINE]           
14   [FUNC_CALL]         sleep
14   [FPAREN_OPEN]       (
14   [NUMBER]            2
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [VBRACE_CLOSE]      
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
17   [COMMENT]           /* else is tied to if(one) */
17   [NEWLINE]           
18   [TYPE]              int
18   [FUNC_DEF]          main
18   [FPAREN_OPEN]       (
18   [FPAREN_CLOSE]      )
18   [BRACE_OPEN]        {
18   [NEWLINE]           
19   [IF]                if
19   [SPAREN_OPEN]       (
19   [WORD]              one
19   [SPAREN_CLOSE]      )
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [IF]                if
20   [SPAREN_OPEN]       (
20   [WORD]              two
20   [SPAREN_CLOSE]      )
20   [VBRACE_OPEN]       
20   [NEWLINE]           
21   [FUNC_CALL]         sleep
21   [FPAREN_OPEN]       (
21   [NUMBER]            1
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [VBRACE_CLOSE]      
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
23   [ELSE]              else
24   [IF]                if
24   [SPAREN_OPEN]       (
24   [WORD]              three
24   [SPAREN_CLOSE]      )
24   [VBRACE_OPEN]       
24   [NEWLINE]           
25   [FUNC_CALL]         sleep
25   [FPAREN_OPEN]       (
25   [NUMBER]            2
25   [FPAREN_CLOSE]      )
25   [SEMICOLON]         ;
25   [VBRACE_CLOSE]      
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
29   [COMMENT]           /* else.1 is tied to if(two), else.2 is tied to if(one) */
29   [NEWLINE]           
30   [TYPE]              int
30   [FUNC_DEF]          main
30   [FPAREN_OPEN]       (
30   [FPAREN_CLOSE]      )
30   [BRACE_OPEN]        {
30   [NEWLINE]           
31   [IF]                if
31   [SPAREN_OPEN]       (
31   [WORD]              one
31   [SPAREN_CLOSE]      )
31   [BRACE_OPEN]        {
31   [NEWLINE]           
32   [IF]                if
32   [SPAREN_OPEN]       (
32   [WORD]              two
32   [SPAREN_CLOSE]      )
32   [VBRACE_OPEN]       
32   [NEWLINE]           
33   [FUNC_CALL]         sleep
33   [FPAREN_OPEN]       (
33   [NUMBER]            1
33   [FPAREN_CLOSE]      )
33   [SEMICOLON]         ;
33   [VBRACE_CLOSE]      
33   [NEWLINE]           
34   [ELSE]              else
35   [IF]                if
35   [SPAREN_OPEN]       (
35   [WORD]              three
35   [SPAREN_CLOSE]      )
35   [VBRACE_OPEN]       
35   [NEWLINE]           
36   [FUNC_CALL]         sleep
36   [FPAREN_OPEN]       (
36   [NUMBER]            2
36   [FPAREN_CLOSE]      )
36   [SEMICOLON]         ;
36   [VBRACE_CLOSE]      
37   [NEWLINE]           
38   [BRACE_CLOSE]       }
38   [NEWLINE]           
39   [ELSE]              else
39   [VBRACE_OPEN]       
39   [NEWLINE]           
40   [FUNC_CALL]         sleep
40   [FPAREN_OPEN]       (
40   [NUMBER]            3
40   [FPAREN_CLOSE]      )
40   [SEMICOLON]         ;
40   [VBRACE_CLOSE]      
40   [NEWLINE]           
41   [BRACE_CLOSE]       }
41   [NEWLINE]           
42   [TYPE]              int
42   [FUNC_DEF]          main
42   [FPAREN_OPEN]       (
42   [FPAREN_CLOSE]      )
42   [BRACE_OPEN]        {
42   [NEWLINE]           
44   [IF]                if
44   [SPAREN_OPEN]       (
44   [WORD]              read_write
44   [COMPARE]           ==
44   [WORD]              I2C_SMBUS_READ
44   [SPAREN_CLOSE]      )
45   [VBRACE_OPEN]       
45   [NEWLINE]           
46   [WORD]              msg
46   [SQUARE_OPEN]       [
46   [NUMBER]            1
46   [SQUARE_CLOSE]      ]
46   [MEMBER]            .
46   [WORD]              len
46   [ASSIGN]            =
46   [WORD]              I2C_SMBUS_I2C_BLOCK_MAX
46   [SEMICOLON]         ;
46   [NEWLINE]           
47   [VBRACE_CLOSE]      
48   [ELSE]              else
49   [VBRACE_OPEN]       
49   [NEWLINE]           
50   [WORD]              msg
50   [SQUARE_OPEN]       [
50   [NUMBER]            0
50   [SQUARE_CLOSE]      ]
50   [MEMBER]            .
50   [WORD]              len
50   [ASSIGN]            =
50   [WORD]              data
50   [MEMBER]            ->
50   [WORD]              block
50   [SQUARE_OPEN]       [
50   [NUMBER]            0
50   [SQUARE_CLOSE]      ]
50   [ARITH]             +
50   [NUMBER]            1
50   [SEMICOLON]         ;
50   [NEWLINE]           
51   [VBRACE_CLOSE]      
52   [BRACE_CLOSE]       }
52   [NEWLINE]           