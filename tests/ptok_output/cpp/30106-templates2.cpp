Line [Parent]            Text
1    [FUNC_DEF]          void
1    [NONE]              f
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              call_a_function
3    [FUNC_CALL]         (
3    [NONE]              42
3    [NONE]              ,
3    [NONE]              
4    [NONE]              double
4    [CPP_CAST]          (
4    [NONE]              -
4    [NONE]              1
4    [CPP_CAST]          )
4    [NONE]              ,
4    [NONE]              
5    [NONE]              "charray"
5    [FUNC_CALL]         )
5    [NONE]              ;
5    [NONE]              
6    [NONE]              call_a_function
6    [FUNC_CALL]         (
6    [NONE]              42
6    [NONE]              ,
6    [NONE]              
7    [NONE]              double
7    [CPP_CAST]          (
7    [NONE]              -
7    [NONE]              1
7    [CPP_CAST]          )
7    [NONE]              ,
7    [NONE]              
8    [NONE]              "charray"
8    [NONE]              
9    [FUNC_CALL]         )
9    [NONE]              ;
9    [NONE]              
10   [NONE]              call_a_function
10   [FUNC_CALL]         (
10   [NONE]              
11   [NONE]              42
11   [NONE]              ,
11   [NONE]              
12   [NONE]              double
12   [CPP_CAST]          (
12   [NONE]              -
12   [NONE]              1
12   [CPP_CAST]          )
12   [NONE]              ,
12   [NONE]              
13   [NONE]              "charray"
13   [NONE]              
14   [FUNC_CALL]         )
14   [NONE]              ;
14   [NONE]              
15   [NONE]              call_a_template_function
15   [TEMPLATE]          <
15   [NONE]              int
15   [NONE]              ,
15   [NONE]              
16   [NONE]              int
16   [NONE]              ,
16   [NONE]              
17   [NONE]              int
17   [TEMPLATE]          >
17   [NONE]              
18   [FUNC_CALL]         (
18   [NONE]              42
18   [FUNC_CALL]         )
18   [NONE]              ;
18   [NONE]              
19   [NONE]              call_a_template_function
19   [TEMPLATE]          <
19   [NONE]              int
19   [NONE]              ,
19   [NONE]              
20   [NONE]              int
20   [NONE]              ,
20   [NONE]              
21   [NONE]              int
21   [NONE]              
22   [TEMPLATE]          >
22   [NONE]              
23   [FUNC_CALL]         (
23   [NONE]              42
23   [FUNC_CALL]         )
23   [NONE]              ;
23   [NONE]              
24   [NONE]              call_a_template_function
24   [TEMPLATE]          <
24   [NONE]              int
24   [NONE]              ,
24   [NONE]              
25   [NONE]              int
25   [NONE]              ,
25   [NONE]              
26   [NONE]              int
26   [TEMPLATE]          >
26   [FUNC_CALL]         (
26   [NONE]              42
26   [FUNC_CALL]         )
26   [NONE]              ;
26   [NONE]              
27   [NONE]              call_a_template_function
27   [TEMPLATE]          <
27   [NONE]              int
27   [NONE]              ,
27   [NONE]              
28   [NONE]              int
28   [NONE]              ,
28   [NONE]              
29   [NONE]              int
29   [TEMPLATE]          >
29   [FUNC_CALL]         (
29   [NONE]              
30   [NONE]              42
30   [NONE]              
31   [FUNC_CALL]         )
31   [NONE]              ;
31   [NONE]              
32   [NONE]              call_a_template_function
32   [TEMPLATE]          <
32   [NONE]              
33   [NONE]              int
33   [NONE]              ,
33   [NONE]              
34   [NONE]              int
34   [NONE]              ,
34   [NONE]              
35   [NONE]              int
35   [NONE]              
36   [TEMPLATE]          >
36   [NONE]              
37   [FUNC_CALL]         (
37   [NONE]              42
37   [FUNC_CALL]         )
37   [NONE]              ;
37   [NONE]              
38   [FUNC_DEF]          }
38   [NONE]              
39   [NONE]              template
39   [TEMPLATE]          <
39   [NONE]              class
39   [NONE]              T
39   [NONE]              ,
39   [NONE]              
40   [NONE]              class
40   [NONE]              U
40   [TEMPLATE]          >
40   [NONE]              
41   [TEMPLATE]          class
41   [CLASS]             W
41   [TEMPLATE]          ;
41   [NONE]              
42   [NONE]              template
42   [TEMPLATE]          <
42   [NONE]              class
42   [NONE]              T
42   [NONE]              ,
42   [NONE]              
43   [NONE]              class
43   [NONE]              U
43   [NONE]              
44   [TEMPLATE]          >
44   [NONE]              
45   [TEMPLATE]          class
45   [CLASS]             X
45   [TEMPLATE]          ;
45   [NONE]              
46   [NONE]              template
46   [TEMPLATE]          <
46   [NONE]              
47   [NONE]              class
47   [NONE]              T
47   [NONE]              ,
47   [NONE]              
48   [NONE]              class
48   [NONE]              U
48   [TEMPLATE]          >
48   [NONE]              
49   [TEMPLATE]          class
49   [CLASS]             Y
49   [TEMPLATE]          ;
49   [NONE]              
50   [NONE]              template
50   [TEMPLATE]          <
50   [NONE]              
51   [NONE]              class
51   [NONE]              T
51   [NONE]              ,
51   [NONE]              
52   [NONE]              class
52   [NONE]              U
52   [NONE]              
53   [TEMPLATE]          >
53   [NONE]              
54   [TEMPLATE]          class
54   [CLASS]             Z
54   [TEMPLATE]          ;
54   [NONE]              