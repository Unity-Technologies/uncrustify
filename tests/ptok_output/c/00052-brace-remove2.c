Line [Parent]            Text
1    [COMMENT_WHOLE]     /* else is tied to if(two) */
1    [NONE]              
2    [FUNC_DEF]          int
2    [NONE]              main
2    [FUNC_DEF]          (
2    [FUNC_DEF]          )
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              if
3    [IF]                (
3    [NONE]              one
3    [IF]                )
3    [IF]                {
3    [NONE]              
4    [NONE]              if
4    [IF]                (
4    [NONE]              two
4    [IF]                )
4    [IF]                
4    [NONE]              
5    [NONE]              sleep
5    [FUNC_CALL]         (
5    [NONE]              1
5    [FUNC_CALL]         )
5    [NONE]              ;
5    [IF]                
5    [NONE]              
6    [NONE]              else
6    [ELSE]              
6    [NONE]              
7    [NONE]              sleep
7    [FUNC_CALL]         (
7    [NONE]              2
7    [FUNC_CALL]         )
7    [NONE]              ;
7    [ELSE]              
7    [NONE]              
8    [IF]                }
8    [NONE]              
10   [NONE]              if
10   [IF]                (
10   [NONE]              three
10   [IF]                )
10   [IF]                
10   [NONE]              
11   [NONE]              sleep
11   [FUNC_CALL]         (
11   [NONE]              1
11   [FUNC_CALL]         )
11   [NONE]              ;
11   [IF]                
11   [NONE]              
12   [NONE]              else
13   [NONE]              if
13   [ELSEIF]            (
13   [NONE]              four
13   [ELSEIF]            )
13   [ELSEIF]            
13   [NONE]              
14   [NONE]              sleep
14   [FUNC_CALL]         (
14   [NONE]              2
14   [FUNC_CALL]         )
14   [NONE]              ;
14   [ELSEIF]            
14   [NONE]              
15   [FUNC_DEF]          }
15   [NONE]              
17   [COMMENT_WHOLE]     /* else is tied to if(one) */
17   [NONE]              
18   [FUNC_DEF]          int
18   [NONE]              main
18   [FUNC_DEF]          (
18   [FUNC_DEF]          )
18   [FUNC_DEF]          {
18   [NONE]              
19   [NONE]              if
19   [IF]                (
19   [NONE]              one
19   [IF]                )
19   [IF]                {
19   [NONE]              
20   [NONE]              if
20   [IF]                (
20   [NONE]              two
20   [IF]                )
20   [IF]                
20   [NONE]              
21   [NONE]              sleep
21   [FUNC_CALL]         (
21   [NONE]              1
21   [FUNC_CALL]         )
21   [NONE]              ;
21   [IF]                
21   [NONE]              
22   [IF]                }
22   [NONE]              
23   [NONE]              else
24   [NONE]              if
24   [IF]                (
24   [NONE]              three
24   [IF]                )
24   [IF]                
24   [NONE]              
25   [NONE]              sleep
25   [FUNC_CALL]         (
25   [NONE]              2
25   [FUNC_CALL]         )
25   [NONE]              ;
25   [IF]                
26   [NONE]              
27   [FUNC_DEF]          }
27   [NONE]              
29   [COMMENT_WHOLE]     /* else.1 is tied to if(two), else.2 is tied to if(one) */
29   [NONE]              
30   [FUNC_DEF]          int
30   [NONE]              main
30   [FUNC_DEF]          (
30   [FUNC_DEF]          )
30   [FUNC_DEF]          {
30   [NONE]              
31   [NONE]              if
31   [IF]                (
31   [NONE]              one
31   [IF]                )
31   [IF]                {
31   [NONE]              
32   [NONE]              if
32   [IF]                (
32   [NONE]              two
32   [IF]                )
32   [IF]                
32   [NONE]              
33   [NONE]              sleep
33   [FUNC_CALL]         (
33   [NONE]              1
33   [FUNC_CALL]         )
33   [NONE]              ;
33   [IF]                
33   [NONE]              
34   [NONE]              else
35   [NONE]              if
35   [IF]                (
35   [NONE]              three
35   [IF]                )
35   [IF]                
35   [NONE]              
36   [NONE]              sleep
36   [FUNC_CALL]         (
36   [NONE]              2
36   [FUNC_CALL]         )
36   [NONE]              ;
36   [IF]                
37   [NONE]              
38   [IF]                }
38   [NONE]              
39   [NONE]              else
39   [ELSE]              
39   [NONE]              
40   [NONE]              sleep
40   [FUNC_CALL]         (
40   [NONE]              3
40   [FUNC_CALL]         )
40   [NONE]              ;
40   [ELSE]              
40   [NONE]              
41   [FUNC_DEF]          }
41   [NONE]              
42   [FUNC_DEF]          int
42   [NONE]              main
42   [FUNC_DEF]          (
42   [FUNC_DEF]          )
42   [FUNC_DEF]          {
42   [NONE]              
44   [NONE]              if
44   [IF]                (
44   [NONE]              read_write
44   [NONE]              ==
44   [NONE]              I2C_SMBUS_READ
44   [IF]                )
45   [IF]                
45   [NONE]              
46   [NONE]              msg
46   [NONE]              [
46   [NONE]              1
46   [NONE]              ]
46   [NONE]              .
46   [NONE]              len
46   [NONE]              =
46   [NONE]              I2C_SMBUS_I2C_BLOCK_MAX
46   [NONE]              ;
46   [NONE]              
47   [IF]                
48   [NONE]              else
49   [ELSE]              
49   [NONE]              
50   [NONE]              msg
50   [NONE]              [
50   [NONE]              0
50   [NONE]              ]
50   [NONE]              .
50   [NONE]              len
50   [NONE]              =
50   [NONE]              data
50   [NONE]              ->
50   [NONE]              block
50   [NONE]              [
50   [NONE]              0
50   [NONE]              ]
50   [NONE]              +
50   [NONE]              1
50   [NONE]              ;
50   [NONE]              
51   [ELSE]              
52   [FUNC_DEF]          }
52   [NONE]              