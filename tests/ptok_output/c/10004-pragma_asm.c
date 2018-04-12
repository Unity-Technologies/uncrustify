Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              include
1    [NONE]              <stdio.h>
1    [NONE]              
3    [FUNC_DEF]          int
3    [NONE]              main
3    [FUNC_DEF]          (
3    [NONE]              int
3    [NONE]              argc
3    [NONE]              ,
3    [NONE]              char
3    [NONE]              *
3    [NONE]              argv
3    [NONE]              []
3    [FUNC_DEF]          )
3    [NONE]              
4    [FUNC_DEF]          {
4    [NONE]              
5    [NONE]              int
5    [NONE]              a
5    [NONE]              =
5    [NONE]              1
5    [NONE]              ;
5    [NONE]              
6    [NONE]              int
6    [NONE]              very_long
6    [NONE]              =
6    [NONE]              2
6    [NONE]              ;
6    [NONE]              
7    [NONE]              printf
7    [FUNC_CALL]         (
7    [NONE]              "Hello, World!\n"
7    [FUNC_CALL]         )
7    [NONE]              ;
7    [NONE]              
8    [NONE]              printf
8    [FUNC_CALL]         (
8    [NONE]              "a is %d and very_long is %d\n"
8    [NONE]              ,
8    [NONE]              a
8    [NONE]              ,
8    [NONE]              very_long
8    [FUNC_CALL]         )
8    [NONE]              ;
8    [NONE]              
9    [NONE]              return
9    [RETURN]            (
9    [NONE]              0
9    [RETURN]            )
9    [NONE]              ;
9    [NONE]              
10   [FUNC_DEF]          }
10   [NONE]              
12   [PP_PRAGMA]         #
12   [NONE]              pragma
12   [NONE]              asm
12   [NONE]              
13   [NONE]                  XREF     _my_var
13   [NONE]              
15   [NONE]                  PUSH     #LOW(my_func)
15   [NONE]              
16   [NONE]                  PUSH     #HIGH(my_func)
16   [NONE]              
18   [NONE]              #pragma dummyendasm
18   [NONE]              
20   [NONE]                  PUSH     _my_var+2
20   [NONE]              
21   [NONE]                  PUSH     _my_var+1
21   [NONE]              
22   [NONE]                  PUSH     _my_var+0
22   [NONE]              
23   [NONE]                  RETF
23   [NONE]              
24   [NONE]                  App_CallEnd:
24   [NONE]              
25   [PP_PRAGMA]         #
25   [NONE]              pragma
25   [NONE]              endasm
25   [NONE]              
27   [FUNC_DEF]          int
27   [NONE]              main2
27   [FUNC_DEF]          (
27   [NONE]              int
27   [NONE]              argc
27   [NONE]              ,
27   [NONE]              char
27   [NONE]              *
27   [NONE]              argv
27   [NONE]              []
27   [FUNC_DEF]          )
27   [NONE]              
28   [FUNC_DEF]          {
28   [NONE]              
29   [NONE]              int
29   [NONE]              a
29   [NONE]              =
29   [NONE]              1
29   [NONE]              ;
29   [NONE]              
30   [NONE]              int
30   [NONE]              very_long
30   [NONE]              =
30   [NONE]              2
30   [NONE]              ;
30   [NONE]              
31   [NONE]              printf
31   [FUNC_CALL]         (
31   [NONE]              "Hello, World!\n"
31   [FUNC_CALL]         )
31   [NONE]              ;
31   [NONE]              
32   [NONE]              printf
32   [FUNC_CALL]         (
32   [NONE]              "a is %d and very_long is %d\n"
32   [NONE]              ,
32   [NONE]              a
32   [NONE]              ,
32   [NONE]              very_long
32   [FUNC_CALL]         )
32   [NONE]              ;
32   [NONE]              
33   [NONE]              return
33   [RETURN]            (
33   [NONE]              0
33   [RETURN]            )
33   [NONE]              ;
33   [NONE]              
34   [FUNC_DEF]          }
34   [NONE]              
36   [PP_PRAGMA]         #
36   [NONE]              pragma
36   [NONE]              asm
36   [NONE]              
37   [NONE]                  XREF     _my_var
37   [NONE]              
39   [NONE]                  PUSH     #LOW(my_func)
39   [NONE]              
40   [NONE]                  PUSH     #HIGH(my_func)
40   [NONE]              
42   [NONE]              #pragma dummyendasm
42   [NONE]              
44   [NONE]                  PUSH     _my_var+2
44   [NONE]              
45   [NONE]                  PUSH     _my_var+1
45   [NONE]              
46   [NONE]                  PUSH     _my_var+0
46   [NONE]              
47   [NONE]                  RETF
47   [NONE]              
48   [NONE]                  App_CallEnd:
48   [NONE]              
49   [PP_PRAGMA]         #
49   [NONE]              pragma
49   [NONE]              endasm
49   [NONE]              
51   [FUNC_DEF]          int
51   [NONE]              main3
51   [FUNC_DEF]          (
51   [NONE]              int
51   [NONE]              argc
51   [NONE]              ,
51   [NONE]              char
51   [NONE]              *
51   [NONE]              argv
51   [NONE]              []
51   [FUNC_DEF]          )
51   [NONE]              
52   [FUNC_DEF]          {
52   [NONE]              
53   [NONE]              int
53   [NONE]              a
53   [NONE]              =
53   [NONE]              1
53   [NONE]              ;
53   [NONE]              
54   [NONE]              int
54   [NONE]              very_long
54   [NONE]              =
54   [NONE]              2
54   [NONE]              ;
54   [NONE]              
55   [NONE]              printf
55   [FUNC_CALL]         (
55   [NONE]              "Hello, World!\n"
55   [FUNC_CALL]         )
55   [NONE]              ;
55   [NONE]              
56   [NONE]              printf
56   [FUNC_CALL]         (
56   [NONE]              "a is %d and very_long is %d\n"
56   [NONE]              ,
56   [NONE]              a
56   [NONE]              ,
56   [NONE]              very_long
56   [FUNC_CALL]         )
56   [NONE]              ;
56   [NONE]              
57   [NONE]              return
57   [RETURN]            (
57   [NONE]              0
57   [RETURN]            )
57   [NONE]              ;
57   [NONE]              
58   [FUNC_DEF]          }
58   [NONE]              
60   [PP_PRAGMA]         #
60   [NONE]              pragma
60   [NONE]              asm
60   [NONE]              
61   [NONE]                  XREF     _my_var
61   [NONE]              
63   [NONE]                  PUSH     #LOW(my_func)
63   [NONE]              
64   [NONE]                  PUSH     #HIGH(my_func)
64   [NONE]              
66   [NONE]              #pragma dummyendasm
66   [NONE]              
68   [NONE]                  PUSH     _my_var+2
68   [NONE]              
69   [NONE]                  PUSH     _my_var+1
69   [NONE]              
70   [NONE]                  PUSH     _my_var+0
70   [NONE]              
71   [NONE]                  RETF
71   [NONE]              
72   [NONE]                  App_CallEnd:
72   [NONE]              
73   [PP_PRAGMA]         #
73   [NONE]              pragma
73   [NONE]              endasm
73   [NONE]              
75   [FUNC_DEF]          int
75   [NONE]              main3
75   [FUNC_DEF]          (
75   [NONE]              int
75   [NONE]              argc
75   [NONE]              ,
75   [NONE]              char
75   [NONE]              *
75   [NONE]              argv
75   [NONE]              []
75   [FUNC_DEF]          )
75   [NONE]              
76   [FUNC_DEF]          {
76   [NONE]              
77   [NONE]              int
77   [NONE]              a
77   [NONE]              =
77   [NONE]              1
77   [NONE]              ;
77   [NONE]              
78   [NONE]              int
78   [NONE]              very_long
78   [NONE]              =
78   [NONE]              2
78   [NONE]              ;
78   [NONE]              
79   [NONE]              printf
79   [FUNC_CALL]         (
79   [NONE]              "Hello, World!\n"
79   [FUNC_CALL]         )
79   [NONE]              ;
79   [NONE]              
80   [NONE]              printf
80   [FUNC_CALL]         (
80   [NONE]              "a is %d and very_long is %d\n"
80   [NONE]              ,
80   [NONE]              a
80   [NONE]              ,
80   [NONE]              very_long
80   [FUNC_CALL]         )
80   [NONE]              ;
80   [NONE]              
81   [NONE]              return
81   [RETURN]            (
81   [NONE]              0
81   [RETURN]            )
81   [NONE]              ;
81   [NONE]              
82   [FUNC_DEF]          }
82   [NONE]              
84   [PP_ASM]            #
84   [NONE]              asm
84   [NONE]              
85   [NONE]                  sll     a           ; 3
85   [NONE]              
86   [NONE]                  jrc     sub_1f      ; 3 subtract $1f if A.x has a degree 8
86   [NONE]              
87   [NONE]                  ret
87   [NONE]              
88   [NONE]              sub_1f:
88   [NONE]              
89   [NONE]                  xor     a,#$1f      ; 2
89   [NONE]              
90   [PP_OTHER]          #
90   [NONE]              endasm
90   [NONE]              
92   [FUNC_DEF]          int
92   [NONE]              main3
92   [FUNC_DEF]          (
92   [NONE]              int
92   [NONE]              argc
92   [NONE]              ,
92   [NONE]              char
92   [NONE]              *
92   [NONE]              argv
92   [NONE]              []
92   [FUNC_DEF]          )
92   [NONE]              
93   [FUNC_DEF]          {
93   [NONE]              
94   [NONE]              int
94   [NONE]              a
94   [NONE]              =
94   [NONE]              1
94   [NONE]              ;
94   [NONE]              
95   [NONE]              int
95   [NONE]              very_long
95   [NONE]              =
95   [NONE]              2
95   [NONE]              ;
95   [NONE]              
96   [NONE]              printf
96   [FUNC_CALL]         (
96   [NONE]              "Hello, World!\n"
96   [FUNC_CALL]         )
96   [NONE]              ;
96   [NONE]              
97   [NONE]              printf
97   [FUNC_CALL]         (
97   [NONE]              "a is %d and very_long is %d\n"
97   [NONE]              ,
97   [NONE]              a
97   [NONE]              ,
97   [NONE]              very_long
97   [FUNC_CALL]         )
97   [NONE]              ;
97   [NONE]              
98   [NONE]              return
98   [RETURN]            (
98   [NONE]              0
98   [RETURN]            )
98   [NONE]              ;
98   [NONE]              
99   [FUNC_DEF]          }
99   [NONE]              