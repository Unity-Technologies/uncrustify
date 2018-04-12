Line [Parent]            Text
1    [NONE]              struct
1    [STRUCT]            S
1    [NONE]              
2    [STRUCT]            {
2    [NONE]              
3    [NONE]              int
3    [NONE]              one
3    [NONE]              ,
3    [NONE]              two
3    [NONE]              ;
3    [NONE]              
4    [NONE]              S
4    [FUNC_CLASS_DEF]    (
4    [NONE]              int
4    [NONE]              i
4    [FUNC_PROTO]        =
4    [NONE]              1
4    [FUNC_CLASS_DEF]    )
4    [NONE]              
5    [FUNC_CLASS_DEF]    {
5    [NONE]              
6    [NONE]              one
6    [NONE]              =
6    [NONE]              i
6    [NONE]              ;
6    [NONE]              
7    [NONE]              two
7    [NONE]              =
7    [NONE]              i
7    [NONE]              +
7    [NONE]              i
7    [NONE]              ;
7    [NONE]              
8    [FUNC_CLASS_DEF]    }
8    [NONE]              
9    [FUNC_DEF]          bool
9    [NONE]              check
9    [FUNC_DEF]          (
9    [FUNC_DEF]          )
9    [FUNC_DEF]          const
9    [NONE]              
10   [FUNC_DEF]          {
10   [NONE]              
11   [NONE]              return
11   [RETURN]            (
11   [NONE]              one
11   [NONE]              ==
11   [NONE]              1
11   [RETURN]            )
11   [NONE]              ;
11   [NONE]              
12   [FUNC_DEF]          }
12   [NONE]              
13   [STRUCT]            }
13   [STRUCT]            ;
13   [NONE]              
15   [NONE]              struct
15   [STRUCT]            S
15   [NONE]              
16   [STRUCT]            {
16   [NONE]              
17   [NONE]              enum
17   [NONE]              
17   [ENUM]              {
17   [NONE]              
18   [NONE]              twentythree
18   [NONE]              =
18   [NONE]              23
18   [NONE]              ,
18   [NONE]              
19   [NONE]              fortytwoseven
19   [NONE]              =
19   [NONE]              427
19   [NONE]              
20   [ENUM]              }
20   [ENUM]              ;
20   [NONE]              
21   [NONE]              int
21   [NONE]              one
21   [NONE]              ,
21   [NONE]              two
21   [NONE]              ;
21   [NONE]              
22   [NONE]              S
22   [FUNC_CLASS_DEF]    (
22   [NONE]              int
22   [NONE]              i
22   [FUNC_PROTO]        =
22   [NONE]              1
22   [FUNC_CLASS_DEF]    )
22   [NONE]              
23   [FUNC_CLASS_DEF]    {
23   [NONE]              
24   [NONE]              one
24   [NONE]              =
24   [NONE]              i
24   [NONE]              ;
24   [NONE]              
25   [NONE]              two
25   [NONE]              =
25   [NONE]              i
25   [NONE]              +
25   [NONE]              i
25   [NONE]              ;
25   [NONE]              
26   [FUNC_CLASS_DEF]    }
26   [NONE]              
27   [FUNC_DEF]          bool
27   [NONE]              check
27   [FUNC_DEF]          (
27   [FUNC_DEF]          )
27   [FUNC_DEF]          const
27   [NONE]              
28   [FUNC_DEF]          {
28   [NONE]              
29   [NONE]              return
29   [RETURN]            (
29   [NONE]              one
29   [NONE]              ==
29   [NONE]              1
29   [RETURN]            )
29   [NONE]              ;
29   [NONE]              
30   [FUNC_DEF]          }
30   [NONE]              
31   [STRUCT]            }
31   [STRUCT]            ;
31   [NONE]              
33   [FUNC_DEF]          static
33   [FUNC_DEF]          uint
33   [NONE]              jhash
33   [FUNC_DEF]          (
33   [NONE]              K
33   [NONE]              x
33   [FUNC_DEF]          )
33   [NONE]              
34   [FUNC_DEF]          {
34   [NONE]              
35   [NONE]              ubyte
35   [NONE]              *
35   [NONE]              k
35   [NONE]              ;
35   [NONE]              
36   [NONE]              uint
36   [NONE]              a
36   [NONE]              ,
36   [NONE]              
37   [NONE]              b
37   [NONE]              ,
37   [NONE]              
38   [NONE]              c
38   [NONE]              ;
38   [NONE]              
40   [NONE]              uint
40   [NONE]              
41   [NONE]              a
41   [NONE]              ,
41   [NONE]              
42   [NONE]              b
42   [NONE]              ,
42   [NONE]              
43   [NONE]              c
43   [NONE]              ;
43   [NONE]              
45   [NONE]              len
45   [NONE]              =
45   [NONE]              x
45   [NONE]              .
45   [NONE]              length
45   [NONE]              ;
45   [NONE]              
46   [FUNC_DEF]          }
46   [NONE]              
48   [NONE]              const
48   [NONE]              char
48   [NONE]              *
48   [NONE]              token_names
48   [NONE]              []
48   [NONE]              =
48   [NONE]              
49   [BRACED_INIT_LIST]    {
49   [NONE]              
50   [NONE]              [
50   [NONE]              CT_POUND
50   [NONE]              ]
50   [NONE]              =
50   [NONE]              "POUND"
50   [NONE]              ,
50   [NONE]              
51   [NONE]              [
51   [NONE]              CT_PREPROC
51   [NONE]              ]
51   [NONE]              =
51   [NONE]              "PREPROC"
51   [NONE]              ,
51   [NONE]              
52   [BRACED_INIT_LIST]    }
52   [NONE]              ;
52   [NONE]              
54   [FUNC_PROTO]        struct
54   [FUNC_PROTO]        whoopee
54   [FUNC_PROTO]        *
54   [NONE]              
55   [NONE]              foo4
55   [FUNC_PROTO]        (
55   [NONE]              
56   [NONE]              int
56   [NONE]              param1
56   [NONE]              ,
56   [NONE]              
57   [NONE]              int
57   [NONE]              param2
57   [NONE]              ,
57   [NONE]              
58   [NONE]              char
58   [NONE]              *
58   [NONE]              param2
58   [NONE]              
59   [FUNC_PROTO]        )
59   [FUNC_PROTO]        ;
59   [NONE]              