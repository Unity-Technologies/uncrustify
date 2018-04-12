Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              include
1    [NONE]              <iostream>
1    [NONE]              
2    [PP_DEFINE]         #
2    [NONE]              define
2    [NONE]              MACRO
2    [MACRO_FUNC]        (
2    [NONE]              x
2    [MACRO_FUNC]        )
2    [NONE]              x
2    [NONE]              
3    [FUNC_DEF]          int
3    [NONE]              main
3    [FUNC_DEF]          (
3    [FUNC_DEF]          )
3    [NONE]              
4    [FUNC_DEF]          {
4    [NONE]              
5    [NONE]              int
5    [NONE]              X
5    [NONE]              [
5    [NONE]              1
5    [NONE]              ]
5    [NONE]              ;
5    [NONE]              
6    [NONE]              MACRO
6    [FUNC_CALL]         (
6    [NONE]              std
6    [NONE]              ::
6    [NONE]              cout
6    [NONE]              <<
6    [NONE]              X
6    [NONE]              
7    [NONE]              <<
7    [NONE]              X
7    [NONE]              [
7    [NONE]              0
7    [NONE]              ]
7    [FUNC_CALL]         )
7    [NONE]              ;
7    [NONE]              
8    [NONE]              std
8    [NONE]              ::
8    [NONE]              cout
8    [NONE]              <<
8    [NONE]              X
8    [NONE]              
9    [NONE]              <<
9    [NONE]              X
9    [NONE]              ;
9    [NONE]              
10   [NONE]              std
10   [NONE]              ::
10   [NONE]              cout2
10   [NONE]              <<
10   [NONE]              X
10   [NONE]              
11   [NONE]              <<
11   [NONE]              X
11   [NONE]              ;
11   [NONE]              
12   [NONE]              std
12   [NONE]              ::
12   [NONE]              cout
12   [NONE]              <<
12   [NONE]              X
12   [NONE]              
13   [NONE]              <<
13   [NONE]              X
13   [NONE]              [
13   [NONE]              0
13   [NONE]              ]
13   [NONE]              ;
13   [NONE]              
14   [NONE]              std
14   [NONE]              ::
14   [NONE]              cout
14   [NONE]              <<
14   [NONE]              
15   [NONE]              X
15   [NONE]              <<
15   [NONE]              
16   [NONE]              Y
16   [NONE]              ;
16   [NONE]              
17   [NONE]              std
17   [NONE]              ::
17   [NONE]              cout
17   [NONE]              
18   [NONE]              <<
18   [NONE]              X
18   [NONE]              
19   [NONE]              <<
19   [NONE]              Y
19   [NONE]              ;
19   [NONE]              
20   [NONE]              std
20   [NONE]              ::
20   [NONE]              cout
20   [NONE]              
21   [NONE]              <<
21   [NONE]              
22   [NONE]              X
22   [NONE]              
23   [NONE]              <<
23   [NONE]              
24   [NONE]              Y
24   [NONE]              ;
24   [NONE]              
25   [FUNC_DEF]          }
25   [NONE]              
27   [PP_DEFINE]         #
27   [NONE]              define
27   [NONE]              A_LONG_MACRO_NAME
27   [MACRO_FUNC]        (
27   [NONE]              x
27   [MACRO_FUNC]        )
27   [NONE]              x
27   [NONE]              
29   [FUNC_DEF]          void
29   [NONE]              f
29   [FUNC_DEF]          (
29   [FUNC_DEF]          )
29   [FUNC_DEF]          {
29   [NONE]              
30   [NONE]              std
30   [NONE]              ::
30   [NONE]              cout
30   [NONE]              <<
30   [NONE]              "Hello, "
30   [NONE]              
31   [NONE]              <<
31   [NONE]              "World!"
31   [NONE]              
32   [NONE]              <<
32   [NONE]              std
32   [NONE]              ::
32   [NONE]              endl
32   [NONE]              ;
32   [NONE]              
33   [NONE]              A_LONG_MACRO_NAME
33   [FUNC_CALL]         (
33   [NONE]              std
33   [NONE]              ::
33   [NONE]              cout
33   [NONE]              <<
33   [NONE]              "Hello, "
33   [NONE]              
34   [NONE]              <<
34   [NONE]              "World!"
34   [NONE]              
35   [NONE]              <<
35   [NONE]              std
35   [NONE]              ::
35   [NONE]              endl
35   [FUNC_CALL]         )
35   [NONE]              ;
35   [NONE]              
36   [NONE]              A_LONG_MACRO_NAME
36   [FUNC_CALL]         (
36   [NONE]              
37   [NONE]              std
37   [NONE]              ::
37   [NONE]              cout
37   [NONE]              <<
37   [NONE]              "Hello, "
37   [NONE]              
38   [NONE]              <<
38   [NONE]              "World!"
38   [NONE]              
39   [NONE]              <<
39   [NONE]              std
39   [NONE]              ::
39   [NONE]              endl
39   [FUNC_CALL]         )
39   [NONE]              ;
39   [NONE]              
40   [FUNC_DEF]          }
40   [NONE]              