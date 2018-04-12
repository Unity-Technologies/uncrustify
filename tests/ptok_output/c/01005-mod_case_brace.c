Line [Parent]            Text
1    [FUNC_DEF]          int
1    [NONE]              foo
1    [FUNC_DEF]          (
1    [NONE]              int
1    [NONE]              bar
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              switch
3    [SWITCH]            (
3    [NONE]              bar
3    [SWITCH]            )
3    [NONE]              
4    [SWITCH]            {
4    [NONE]              
5    [NONE]              case
5    [NONE]              0
5    [NONE]              :
5    [NONE]              
5    [CASE]              {
5    [NONE]              
6    [NONE]              showit
6    [FUNC_CALL]         (
6    [NONE]              0
6    [FUNC_CALL]         )
6    [NONE]              ;
6    [NONE]              
7    [CASE]              }
7    [NONE]              
8    [NONE]              c
8    [NONE]              ++
8    [NONE]              ;
8    [NONE]              
9    [NONE]              break
9    [NONE]              ;
9    [NONE]              
11   [NONE]              case
11   [NONE]              1
11   [NONE]              :
11   [NONE]              
11   [CASE]              {
11   [NONE]              
12   [NONE]              showit
12   [FUNC_CALL]         (
12   [NONE]              bar
12   [FUNC_CALL]         )
12   [NONE]              ;
12   [NONE]              
13   [NONE]              break
13   [NONE]              ;
13   [NONE]              
14   [CASE]              }
14   [NONE]              
16   [NONE]              case
16   [NONE]              2
16   [NONE]              :
16   [NONE]              
16   [CASE]              {
16   [NONE]              
17   [CASE]              }
17   [NONE]              
17   [NONE]              break
17   [NONE]              ;
17   [NONE]              
19   [NONE]              case
19   [NONE]              3
19   [NONE]              :
19   [NONE]              
19   [CASE]              {
19   [NONE]              
20   [NONE]              int
20   [NONE]              a
20   [NONE]              =
20   [NONE]              bar
20   [NONE]              *
20   [NONE]              3
20   [NONE]              ;
20   [NONE]              
21   [NONE]              showit
21   [FUNC_CALL]         (
21   [NONE]              a
21   [FUNC_CALL]         )
21   [NONE]              ;
21   [NONE]              
22   [CASE]              }
22   [NONE]              
23   [NONE]              c
23   [NONE]              ++
23   [NONE]              ;
23   [NONE]              
24   [NONE]              break
24   [NONE]              ;
24   [NONE]              
25   [NONE]              case
25   [NONE]              4
25   [NONE]              :
25   [NONE]              
25   [CASE]              {
25   [NONE]              
26   [NONE]              foo
26   [FUNC_CALL]         (
26   [NONE]              bar
26   [NONE]              -
26   [NONE]              1
26   [FUNC_CALL]         )
26   [NONE]              ;
26   [NONE]              
27   [NONE]              {
27   [NONE]              
28   [NONE]              showit
28   [FUNC_CALL]         (
28   [NONE]              0
28   [FUNC_CALL]         )
28   [NONE]              ;
28   [NONE]              
29   [NONE]              }
29   [NONE]              
30   [CASE]              }
30   [NONE]              
30   [NONE]              case
30   [NONE]              10
30   [NONE]              :
30   [NONE]              
30   [CASE]              {
30   [NONE]              
31   [NONE]              switch
31   [SWITCH]            (
31   [NONE]              gl_bug
31   [SWITCH]            )
31   [NONE]              
32   [SWITCH]            {
32   [NONE]              
33   [NONE]              case
33   [NONE]              'a'
33   [NONE]              :
33   [NONE]              
33   [CASE]              {
33   [NONE]              
34   [NONE]              gl_foo
34   [NONE]              =
34   [NONE]              true
34   [NONE]              ;
34   [NONE]              
35   [NONE]              break
35   [NONE]              ;
35   [NONE]              
36   [CASE]              }
36   [NONE]              
38   [NONE]              case
38   [NONE]              'b'
38   [NONE]              :
38   [NONE]              
39   [NONE]              case
39   [NONE]              'c'
39   [NONE]              :
39   [NONE]              
39   [CASE]              {
39   [NONE]              
40   [NONE]              gl_foo
40   [NONE]              =
40   [NONE]              false
40   [NONE]              ;
40   [NONE]              
41   [NONE]              break
41   [NONE]              ;
41   [NONE]              
42   [CASE]              }
42   [NONE]              
43   [NONE]              default
43   [NONE]              :
43   [NONE]              
44   [CASE]              {
44   [NONE]              
45   [COMMENT_WHOLE]     // nothing
45   [NONE]              
46   [CASE]              }
46   [NONE]              
47   [NONE]              break
47   [NONE]              ;
47   [NONE]              
48   [SWITCH]            }
48   [NONE]              
49   [CASE]              }
49   [NONE]              
49   [NONE]              break
49   [NONE]              ;
49   [NONE]              
51   [NONE]              default
51   [NONE]              :
51   [NONE]              
52   [CASE]              {
52   [NONE]              
53   [CASE]              }
53   [NONE]              
54   [NONE]              break
54   [NONE]              ;
54   [NONE]              
55   [SWITCH]            }
55   [NONE]              
56   [NONE]              return
56   [RETURN]            (
56   [NONE]              -
56   [NONE]              1
56   [RETURN]            )
56   [NONE]              ;
56   [NONE]              
57   [FUNC_DEF]          }
57   [NONE]              