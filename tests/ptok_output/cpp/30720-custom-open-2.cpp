Line [Parent]            Text
1    [NONE]              
3    [NONE]              BEGIN_MESSAGE_MAP
3    [MACRO_OPEN]        (
3    [NONE]              CUSB2_camera_developementDlg
3    [NONE]              ,
3    [NONE]              CDialog
3    [MACRO_OPEN]        )
3    [NONE]              
4    [NONE]              ON_COMMAND
4    [FUNC_CALL]         (
4    [NONE]              IDC_ESCAPE
4    [NONE]              ,
4    [NONE]              On_Escape
4    [FUNC_CALL]         )
4    [NONE]              
5    [NONE]              ON_COMMAND
5    [FUNC_CALL]         (
5    [NONE]              IDC_8_BIT
5    [NONE]              ,
5    [NONE]              On_8_Bit
5    [FUNC_CALL]         )
5    [NONE]              
6    [NONE]              ON_COMMAND
6    [FUNC_CALL]         (
6    [NONE]              IDC_14_BIT
6    [NONE]              ,
6    [NONE]              On_14_Bit
6    [FUNC_CALL]         )
6    [NONE]              
7    [NONE]              ON_COMMAND
7    [FUNC_CALL]         (
7    [NONE]              IDC_ACQUIRE
7    [NONE]              ,
7    [NONE]              On_Acquire
7    [FUNC_CALL]         )
7    [NONE]              
8    [NONE]              ON_COMMAND
8    [FUNC_CALL]         (
8    [NONE]              IDC_SAVE_COLUMN_AVERAGES
8    [NONE]              ,
8    [NONE]              On_Save_Column_Averages
8    [FUNC_CALL]         )
8    [NONE]              
9    [NONE]              ON_COMMAND
9    [FUNC_CALL]         (
9    [NONE]              IDC_SAVE_ROW_AVERAGES
9    [NONE]              ,
9    [NONE]              On_Save_Row_Averages
9    [FUNC_CALL]         )
9    [NONE]              
10   [NONE]              ON_WM_PAINT
10   [FUNC_CALL]         (
10   [FUNC_CALL]         )
10   [NONE]              
11   [NONE]              ON_WM_QUERYDRAGICON
11   [FUNC_CALL]         (
11   [FUNC_CALL]         )
11   [NONE]              
12   [NONE]              ON_WM_CTLCOLOR
12   [FUNC_CALL]         (
12   [FUNC_CALL]         )
12   [NONE]              
13   [NONE]              END_MESSAGE_MAP
13   [MACRO_CLOSE]       (
13   [MACRO_CLOSE]       )
13   [NONE]              
15   [NONE]              namespace
15   [NAMESPACE]         one
15   [NONE]              
16   [NAMESPACE]         {
16   [NONE]              
17   [NONE]              namespace
17   [NAMESPACE]         two
17   [NONE]              
18   [NAMESPACE]         {
18   [NONE]              
19   [FUNC_DEF]          int
19   [NONE]              Func
19   [FUNC_DEF]          (
19   [NONE]              int
19   [NONE]              a
19   [NONE]              ,
19   [NONE]              
20   [NONE]              int
20   [NONE]              b
20   [FUNC_DEF]          )
20   [NONE]              
21   [FUNC_DEF]          {
21   [NONE]              
22   [NONE]              return
22   [NONE]              a
22   [NONE]              +
22   [NONE]              b
22   [NONE]              ;
22   [NONE]              
23   [FUNC_DEF]          }
23   [NONE]              
24   [NAMESPACE]         }
24   [NONE]              
25   [NAMESPACE]         }
25   [NONE]              
27   [NONE]              using
27   [USING]             namespace
27   [NAMESPACE]         one
27   [NAMESPACE]         ::
27   [NAMESPACE]         two
27   [USING]             ;
27   [NONE]              
29   [FUNC_DEF]          void
29   [NONE]              Func2
29   [FUNC_DEF]          (
29   [NONE]              int
29   [NONE]              c
29   [NONE]              ,
29   [NONE]              
30   [NONE]              int
30   [NONE]              d
30   [FUNC_DEF]          )
30   [NONE]              
31   [FUNC_DEF]          {
31   [NONE]              
32   [FUNC_DEF]          }
32   [NONE]              
34   [FUNC_DEF]          int
34   [NONE]              main
34   [FUNC_DEF]          (
34   [FUNC_DEF]          )
34   [NONE]              
35   [FUNC_DEF]          {
35   [NONE]              
36   [NONE]              int
36   [NONE]              a
36   [NONE]              ;
36   [NONE]              
38   [NONE]              switch
38   [SWITCH]            (
38   [NONE]              a
38   [SWITCH]            )
38   [NONE]              
39   [SWITCH]            {
39   [NONE]              
40   [NONE]              case
40   [NONE]              0
40   [NONE]              :
40   [NONE]              
41   [NONE]              Func2
41   [FUNC_CALL]         (
41   [NONE]              1
41   [NONE]              ,
41   [NONE]              Func
41   [FUNC_CALL]         (
41   [NONE]              1
41   [NONE]              ,
41   [NONE]              2
41   [FUNC_CALL]         )
41   [FUNC_CALL]         )
41   [NONE]              ;
41   [NONE]              
42   [NONE]              Func2
42   [FUNC_CALL]         (
42   [NONE]              1
42   [NONE]              ,
42   [NONE]              one
42   [NONE]              ::
42   [NONE]              two
42   [NONE]              ::
42   [NONE]              Func
42   [FUNC_CALL]         (
42   [NONE]              1
42   [NONE]              ,
42   [NONE]              2
42   [FUNC_CALL]         )
42   [FUNC_CALL]         )
42   [NONE]              ;
42   [NONE]              
43   [NONE]              break
43   [NONE]              ;
43   [NONE]              
44   [SWITCH]            }
44   [NONE]              
45   [FUNC_DEF]          }
45   [NONE]              