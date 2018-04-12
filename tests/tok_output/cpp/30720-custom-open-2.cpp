Line [Token]             Text
1    [NEWLINE]           
3    [MACRO_OPEN]        BEGIN_MESSAGE_MAP
3    [FPAREN_OPEN]       (
3    [WORD]              CUSB2_camera_developementDlg
3    [COMMA]             ,
3    [WORD]              CDialog
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [FUNC_CALL]         ON_COMMAND
4    [FPAREN_OPEN]       (
4    [WORD]              IDC_ESCAPE
4    [COMMA]             ,
4    [WORD]              On_Escape
4    [FPAREN_CLOSE]      )
4    [NEWLINE]           
5    [FUNC_CALL]         ON_COMMAND
5    [FPAREN_OPEN]       (
5    [WORD]              IDC_8_BIT
5    [COMMA]             ,
5    [WORD]              On_8_Bit
5    [FPAREN_CLOSE]      )
5    [NEWLINE]           
6    [FUNC_CALL]         ON_COMMAND
6    [FPAREN_OPEN]       (
6    [WORD]              IDC_14_BIT
6    [COMMA]             ,
6    [WORD]              On_14_Bit
6    [FPAREN_CLOSE]      )
6    [NEWLINE]           
7    [FUNC_CALL]         ON_COMMAND
7    [FPAREN_OPEN]       (
7    [WORD]              IDC_ACQUIRE
7    [COMMA]             ,
7    [WORD]              On_Acquire
7    [FPAREN_CLOSE]      )
7    [NEWLINE]           
8    [FUNC_CALL]         ON_COMMAND
8    [FPAREN_OPEN]       (
8    [WORD]              IDC_SAVE_COLUMN_AVERAGES
8    [COMMA]             ,
8    [WORD]              On_Save_Column_Averages
8    [FPAREN_CLOSE]      )
8    [NEWLINE]           
9    [FUNC_CALL]         ON_COMMAND
9    [FPAREN_OPEN]       (
9    [WORD]              IDC_SAVE_ROW_AVERAGES
9    [COMMA]             ,
9    [WORD]              On_Save_Row_Averages
9    [FPAREN_CLOSE]      )
9    [NEWLINE]           
10   [FUNC_CALL]         ON_WM_PAINT
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [NEWLINE]           
11   [FUNC_CALL]         ON_WM_QUERYDRAGICON
11   [FPAREN_OPEN]       (
11   [FPAREN_CLOSE]      )
11   [NEWLINE]           
12   [FUNC_CALL]         ON_WM_CTLCOLOR
12   [FPAREN_OPEN]       (
12   [FPAREN_CLOSE]      )
12   [NEWLINE]           
13   [MACRO_CLOSE]       END_MESSAGE_MAP
13   [FPAREN_OPEN]       (
13   [FPAREN_CLOSE]      )
13   [NEWLINE]           
15   [NAMESPACE]         namespace
15   [WORD]              one
15   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [NAMESPACE]         namespace
17   [WORD]              two
17   [NEWLINE]           
18   [BRACE_OPEN]        {
18   [NEWLINE]           
19   [TYPE]              int
19   [FUNC_DEF]          Func
19   [FPAREN_OPEN]       (
19   [TYPE]              int
19   [WORD]              a
19   [COMMA]             ,
19   [NEWLINE]           
20   [TYPE]              int
20   [WORD]              b
20   [FPAREN_CLOSE]      )
20   [NEWLINE]           
21   [BRACE_OPEN]        {
21   [NEWLINE]           
22   [RETURN]            return
22   [WORD]              a
22   [ARITH]             +
22   [WORD]              b
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [NEWLINE]           
25   [BRACE_CLOSE]       }
25   [NEWLINE]           
27   [USING]             using
27   [NAMESPACE]         namespace
27   [TYPE]              one
27   [DC_MEMBER]         ::
27   [WORD]              two
27   [SEMICOLON]         ;
27   [NEWLINE]           
29   [TYPE]              void
29   [FUNC_DEF]          Func2
29   [FPAREN_OPEN]       (
29   [TYPE]              int
29   [WORD]              c
29   [COMMA]             ,
29   [NEWLINE]           
30   [TYPE]              int
30   [WORD]              d
30   [FPAREN_CLOSE]      )
30   [NEWLINE]           
31   [BRACE_OPEN]        {
31   [NEWLINE]           
32   [BRACE_CLOSE]       }
32   [NEWLINE]           
34   [TYPE]              int
34   [FUNC_DEF]          main
34   [FPAREN_OPEN]       (
34   [FPAREN_CLOSE]      )
34   [NEWLINE]           
35   [BRACE_OPEN]        {
35   [NEWLINE]           
36   [TYPE]              int
36   [WORD]              a
36   [SEMICOLON]         ;
36   [NEWLINE]           
38   [SWITCH]            switch
38   [SPAREN_OPEN]       (
38   [WORD]              a
38   [SPAREN_CLOSE]      )
38   [NEWLINE]           
39   [BRACE_OPEN]        {
39   [NEWLINE]           
40   [CASE]              case
40   [NUMBER]            0
40   [CASE_COLON]        :
40   [NEWLINE]           
41   [FUNC_CALL]         Func2
41   [FPAREN_OPEN]       (
41   [NUMBER]            1
41   [COMMA]             ,
41   [FUNC_CALL]         Func
41   [FPAREN_OPEN]       (
41   [NUMBER]            1
41   [COMMA]             ,
41   [NUMBER]            2
41   [FPAREN_CLOSE]      )
41   [FPAREN_CLOSE]      )
41   [SEMICOLON]         ;
41   [NEWLINE]           
42   [FUNC_CALL]         Func2
42   [FPAREN_OPEN]       (
42   [NUMBER]            1
42   [COMMA]             ,
42   [TYPE]              one
42   [DC_MEMBER]         ::
42   [TYPE]              two
42   [DC_MEMBER]         ::
42   [FUNC_CALL]         Func
42   [FPAREN_OPEN]       (
42   [NUMBER]            1
42   [COMMA]             ,
42   [NUMBER]            2
42   [FPAREN_CLOSE]      )
42   [FPAREN_CLOSE]      )
42   [SEMICOLON]         ;
42   [NEWLINE]           
43   [BREAK]             break
43   [SEMICOLON]         ;
43   [NEWLINE]           
44   [BRACE_CLOSE]       }
44   [NEWLINE]           
45   [BRACE_CLOSE]       }
45   [NEWLINE]           