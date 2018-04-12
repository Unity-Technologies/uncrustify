Line [Parent]            Text
1    [FUNC_DEF]          void
1    [NONE]              foo
1    [FUNC_DEF]          (
1    [NONE]              void
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              switch
3    [SWITCH]            (
3    [NONE]              ch
3    [SWITCH]            )
3    [NONE]              
4    [SWITCH]            {
4    [NONE]              
5    [COMMENT_WHOLE]     // handle 'a'
5    [NONE]              
6    [NONE]              case
6    [NONE]              'a'
6    [NONE]              :
6    [NONE]              
7    [CASE]              {
7    [NONE]              
8    [NONE]              handle_a
8    [FUNC_CALL]         (
8    [FUNC_CALL]         )
8    [NONE]              ;
8    [NONE]              
9    [NONE]              multiline
9    [FUNC_CALL]         (
9    [NONE]              123
9    [NONE]              ,
9    [NONE]              
10   [NONE]              345
10   [FUNC_CALL]         )
10   [NONE]              ;
10   [NONE]              
11   [NONE]              break
11   [NONE]              ;
11   [NONE]              
12   [CASE]              }
12   [NONE]              
14   [COMMENT_WHOLE]     // handle 'b'
14   [NONE]              
15   [NONE]              case
15   [NONE]              'b'
15   [NONE]              :
15   [NONE]              
16   [NONE]              handle_b
16   [FUNC_CALL]         (
16   [FUNC_CALL]         )
16   [NONE]              ;
16   [NONE]              
17   [NONE]              multiline
17   [FUNC_CALL]         (
17   [NONE]              123
17   [NONE]              ,
17   [NONE]              
18   [NONE]              345
18   [FUNC_CALL]         )
18   [NONE]              ;
18   [NONE]              
19   [NONE]              break
19   [NONE]              ;
19   [NONE]              
21   [COMMENT_WHOLE]     // handle 'c' and 'd'
21   [NONE]              
22   [NONE]              case
22   [NONE]              'c'
22   [NONE]              :
22   [NONE]              
23   [NONE]              case
23   [NONE]              'd'
23   [NONE]              :
23   [NONE]              
24   [COMMENT_WHOLE]     // c and d are really the same thing
24   [NONE]              
25   [NONE]              handle_cd
25   [FUNC_CALL]         (
25   [FUNC_CALL]         )
25   [NONE]              ;
25   [NONE]              
26   [NONE]              multiline
26   [FUNC_CALL]         (
26   [NONE]              123
26   [NONE]              ,
26   [NONE]              
27   [NONE]              345
27   [FUNC_CALL]         )
27   [NONE]              ;
27   [NONE]              
28   [NONE]              break
28   [NONE]              ;
28   [NONE]              
30   [NONE]              case
30   [NONE]              'e'
30   [NONE]              :
30   [NONE]              
31   [CASE]              {
31   [NONE]              
32   [NONE]              handle_a
32   [FUNC_CALL]         (
32   [FUNC_CALL]         )
32   [NONE]              ;
32   [NONE]              
33   [NONE]              multiline
33   [FUNC_CALL]         (
33   [NONE]              123
33   [NONE]              ,
33   [NONE]              
34   [NONE]              345
34   [FUNC_CALL]         )
34   [NONE]              ;
34   [NONE]              
36   [NONE]              break
36   [NONE]              ;
36   [NONE]              
35   [CASE]              }
35   [NONE]              
37   [COMMENT_WHOLE]     // case1
37   [NONE]              
38   [NONE]              case
38   [NONE]              (
38   [NONE]              case1
38   [NONE]              )
38   [NONE]              :
38   [NONE]              
39   [CASE]              {
39   [NONE]              
40   [COMMENT_WHOLE]     //do stuff
40   [NONE]              
41   [NONE]              break
41   [NONE]              ;
41   [NONE]              
42   [CASE]              }
42   [NONE]              
43   [NONE]              case
43   [NONE]              (
43   [NONE]              case2
43   [NONE]              )
43   [NONE]              :
43   [NONE]              
44   [CASE]              {
44   [NONE]              
45   [COMMENT_WHOLE]     //do stuff
45   [NONE]              
46   [NONE]              break
46   [NONE]              ;
46   [NONE]              
47   [CASE]              }
47   [NONE]              
48   [NONE]              case
48   [NONE]              (
48   [NONE]              case3
48   [NONE]              )
48   [NONE]              :
48   [NONE]              
50   [COMMENT_WHOLE]     /*do stuff*/
50   [NONE]              
51   [NONE]              break
51   [NONE]              ;
51   [NONE]              
52   [NONE]              case
52   [NONE]              (
52   [NONE]              case3
52   [NONE]              )
52   [NONE]              :
52   [NONE]              
53   [NONE]              statement
53   [FUNC_CALL]         (
53   [FUNC_CALL]         )
53   [NONE]              ;
53   [NONE]              
54   [NONE]              {
54   [NONE]              
55   [NONE]              another_statement
55   [FUNC_CALL]         (
55   [FUNC_CALL]         )
55   [NONE]              ;
55   [NONE]              
56   [NONE]              }
56   [NONE]              
57   [NONE]              break
57   [NONE]              ;
57   [NONE]              
59   [COMMENT_WHOLE]     // really should not get here
59   [NONE]              
60   [NONE]              default
60   [NONE]              :
60   [NONE]              
61   [NONE]              handle_default
61   [FUNC_CALL]         (
61   [FUNC_CALL]         )
61   [NONE]              ;
61   [NONE]              
62   [NONE]              multiline
62   [FUNC_CALL]         (
62   [NONE]              123
62   [NONE]              ,
62   [NONE]              
63   [NONE]              345
63   [FUNC_CALL]         )
63   [NONE]              ;
63   [NONE]              
64   [NONE]              break
64   [NONE]              ;
64   [NONE]              
65   [SWITCH]            }
65   [NONE]              
66   [NONE]              multiline
66   [FUNC_CALL]         (
66   [NONE]              123
66   [NONE]              ,
66   [NONE]              
67   [NONE]              345
67   [FUNC_CALL]         )
67   [NONE]              ;
67   [NONE]              
68   [FUNC_DEF]          }
68   [NONE]              