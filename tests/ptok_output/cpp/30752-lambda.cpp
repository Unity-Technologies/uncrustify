Line [Parent]            Text
1    [FUNC_DEF]          void
1    [NONE]              f1
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              auto
3    [NONE]              a
3    [NONE]              =
3    [NONE]              
4    [CPP_LAMBDA]        [
4    [NONE]              =
4    [CPP_LAMBDA]        ]
4    [CPP_LAMBDA]        (
4    [NONE]              int
4    [NONE]              *
4    [NONE]              a
4    [NONE]              ,
4    [NONE]              Something
4    [NONE]              &
4    [NONE]              b
4    [CPP_LAMBDA]        )
4    [NONE]              
5    [CPP_LAMBDA]        {
5    [NONE]              
6    [NONE]              std
6    [NONE]              ::
6    [NONE]              cout
6    [NONE]              <<
6    [NONE]              "blah: "
6    [NONE]              <<
6    [NONE]              *
6    [NONE]              a
6    [NONE]              ;
6    [NONE]              
7    [CPP_LAMBDA]        }
7    [NONE]              ;
7    [NONE]              
8    [FUNC_DEF]          }
8    [NONE]              
10   [FUNC_DEF]          void
10   [NONE]              f1a
10   [FUNC_DEF]          (
10   [FUNC_DEF]          )
10   [NONE]              
11   [FUNC_DEF]          {
11   [NONE]              
12   [NONE]              std
12   [NONE]              ::
12   [NONE]              for_each
12   [FUNC_CALL]         (
12   [NONE]              a
12   [NONE]              ,
12   [NONE]              b
12   [NONE]              ,
12   [NONE]              
13   [CPP_LAMBDA]        [
13   [CPP_LAMBDA]        ]
13   [CPP_LAMBDA]        (
13   [NONE]              Something
13   [NONE]              &
13   [NONE]              b
13   [CPP_LAMBDA]        )
13   [NONE]              
14   [CPP_LAMBDA]        {
14   [NONE]              
15   [NONE]              std
15   [NONE]              ::
15   [NONE]              cout
15   [NONE]              <<
15   [NONE]              "blah: "
15   [NONE]              <<
15   [NONE]              *
15   [NONE]              a
15   [NONE]              ;
15   [NONE]              
16   [CPP_LAMBDA]        }
16   [NONE]              
16   [FUNC_CALL]         )
16   [NONE]              ;
16   [NONE]              
17   [FUNC_DEF]          }
17   [NONE]              
19   [FUNC_DEF]          void
19   [NONE]              f1b
19   [FUNC_DEF]          (
19   [FUNC_DEF]          )
19   [NONE]              
20   [FUNC_DEF]          {
20   [NONE]              
21   [NONE]              std
21   [NONE]              ::
21   [NONE]              for_each
21   [FUNC_CALL]         (
21   [NONE]              a
21   [NONE]              ,
21   [NONE]              b
21   [NONE]              ,
21   [NONE]              
22   [CPP_LAMBDA]        [
22   [CPP_LAMBDA]        ]
22   [CPP_LAMBDA]        (
22   [NONE]              int
22   [NONE]              &
22   [NONE]              b
22   [CPP_LAMBDA]        )
22   [NONE]              ->
22   [NONE]              foo
22   [NONE]              
23   [CPP_LAMBDA]        {
23   [NONE]              
24   [NONE]              b
24   [NONE]              +=
24   [NONE]              3
24   [NONE]              ;
24   [NONE]              
25   [NONE]              return
25   [RETURN]            (
25   [NONE]              b
25   [RETURN]            )
25   [NONE]              ;
25   [NONE]              
26   [CPP_LAMBDA]        }
26   [NONE]              
26   [FUNC_CALL]         )
26   [NONE]              ;
26   [NONE]              
27   [FUNC_DEF]          }
27   [NONE]              
29   [FUNC_DEF]          void
29   [NONE]              f2
29   [FUNC_DEF]          (
29   [FUNC_DEF]          )
29   [NONE]              
30   [FUNC_DEF]          {
30   [NONE]              
31   [NONE]              Invoke
31   [FUNC_CALL]         (
31   [NONE]              a
31   [NONE]              ,
31   [NONE]              b
31   [NONE]              ,
31   [NONE]              
32   [CPP_LAMBDA]        [
32   [NONE]              &
32   [NONE]              one
32   [NONE]              ,
32   [NONE]              two
32   [CPP_LAMBDA]        ]
32   [CPP_LAMBDA]        (
32   [NONE]              int
32   [NONE]              *
32   [NONE]              a
32   [NONE]              ,
32   [NONE]              Something
32   [NONE]              &
32   [NONE]              b
32   [CPP_LAMBDA]        )
32   [NONE]              
33   [CPP_LAMBDA]        {
33   [NONE]              
34   [NONE]              std
34   [NONE]              ::
34   [NONE]              cout
34   [NONE]              <<
34   [NONE]              "blah: "
34   [NONE]              <<
34   [NONE]              *
34   [NONE]              a
34   [NONE]              ;
34   [NONE]              
35   [CPP_LAMBDA]        }
35   [NONE]              
35   [FUNC_CALL]         )
35   [NONE]              ;
35   [NONE]              
36   [FUNC_DEF]          }
36   [NONE]              
38   [FUNC_DEF]          void
38   [NONE]              f3a
38   [FUNC_DEF]          (
38   [FUNC_DEF]          )
38   [NONE]              
39   [FUNC_DEF]          {
39   [NONE]              
40   [NONE]              auto
40   [NONE]              a
40   [NONE]              =
40   [CPP_LAMBDA]        [
40   [CPP_LAMBDA]        ]
40   [NONE]              
40   [CPP_LAMBDA]        {
40   [NONE]              
40   [CPP_LAMBDA]        }
40   [NONE]              ;
40   [NONE]              
41   [NONE]              auto
41   [NONE]              b
41   [NONE]              =
41   [CPP_LAMBDA]        [
41   [CPP_LAMBDA]        ]
41   [NONE]              
41   [CPP_LAMBDA]        {
41   [NONE]              
41   [NONE]              return
41   [RETURN]            (
41   [NONE]              true
41   [RETURN]            )
41   [NONE]              ;
41   [NONE]              
41   [CPP_LAMBDA]        }
41   [NONE]              ;
41   [NONE]              
42   [FUNC_DEF]          }
42   [NONE]              
44   [FUNC_DEF]          void
44   [NONE]              f3b
44   [FUNC_DEF]          (
44   [FUNC_DEF]          )
44   [NONE]              
45   [FUNC_DEF]          {
45   [NONE]              
46   [NONE]              Invoke
46   [FUNC_CALL]         (
46   [NONE]              a
46   [NONE]              ,
46   [NONE]              b
46   [NONE]              ,
46   [NONE]              
47   [CPP_LAMBDA]        [
47   [NONE]              &
47   [NONE]              one
47   [NONE]              ,
47   [NONE]              two
47   [CPP_LAMBDA]        ]
47   [NONE]              
48   [CPP_LAMBDA]        {
48   [NONE]              
49   [NONE]              std
49   [NONE]              ::
49   [NONE]              cout
49   [NONE]              <<
49   [NONE]              "blah: "
49   [NONE]              <<
49   [NONE]              one
49   [NONE]              <<
49   [NONE]              two
49   [NONE]              ;
49   [NONE]              
50   [CPP_LAMBDA]        }
50   [NONE]              
50   [FUNC_CALL]         )
50   [NONE]              ;
50   [NONE]              
51   [FUNC_DEF]          }
51   [NONE]              
53   [FUNC_DEF]          void
53   [NONE]              f3c
53   [FUNC_DEF]          (
53   [FUNC_DEF]          )
53   [NONE]              
54   [FUNC_DEF]          {
54   [NONE]              
55   [NONE]              int
55   [NONE]              a
55   [NONE]              []
55   [BRACED_INIT_LIST]    {
55   [BRACED_INIT_LIST]    }
55   [NONE]              ;
55   [NONE]              
56   [FUNC_DEF]          }
56   [NONE]              
58   [FUNC_DEF]          void
58   [NONE]              g1
58   [FUNC_DEF]          (
58   [FUNC_DEF]          )
58   [NONE]              
59   [FUNC_DEF]          {
59   [NONE]              
60   [NONE]              auto
60   [NONE]              a
60   [NONE]              =
60   [CPP_LAMBDA]        [
60   [NONE]              =
60   [CPP_LAMBDA]        ]
60   [CPP_LAMBDA]        (
60   [NONE]              int
60   [NONE]              *
60   [NONE]              a
60   [NONE]              ,
60   [NONE]              Something
60   [NONE]              &
60   [NONE]              b
60   [CPP_LAMBDA]        )
60   [NONE]              
60   [CPP_LAMBDA]        {
60   [NONE]              
60   [NONE]              std
60   [NONE]              ::
60   [NONE]              cout
60   [NONE]              <<
60   [NONE]              "blah: "
60   [NONE]              <<
60   [NONE]              *
60   [NONE]              a
60   [NONE]              ;
60   [NONE]              
60   [CPP_LAMBDA]        }
60   [NONE]              ;
60   [NONE]              
61   [FUNC_DEF]          }
61   [NONE]              
63   [FUNC_DEF]          void
63   [NONE]              g1a
63   [FUNC_DEF]          (
63   [FUNC_DEF]          )
63   [NONE]              
64   [FUNC_DEF]          {
64   [NONE]              
65   [NONE]              std
65   [NONE]              ::
65   [NONE]              for_each
65   [FUNC_CALL]         (
65   [NONE]              a
65   [NONE]              ,
65   [NONE]              b
65   [NONE]              ,
65   [CPP_LAMBDA]        [
65   [CPP_LAMBDA]        ]
65   [CPP_LAMBDA]        (
65   [NONE]              Something
65   [NONE]              &
65   [NONE]              b
65   [CPP_LAMBDA]        )
65   [NONE]              
65   [CPP_LAMBDA]        {
65   [NONE]              
65   [NONE]              std
65   [NONE]              ::
65   [NONE]              cout
65   [NONE]              <<
65   [NONE]              "blah: "
65   [NONE]              <<
65   [NONE]              *
65   [NONE]              a
65   [NONE]              ;
65   [NONE]              
65   [CPP_LAMBDA]        }
65   [NONE]              
65   [FUNC_CALL]         )
65   [NONE]              ;
65   [NONE]              
66   [FUNC_DEF]          }
66   [NONE]              
68   [FUNC_DEF]          void
68   [NONE]              g1b
68   [FUNC_DEF]          (
68   [FUNC_DEF]          )
68   [NONE]              
69   [FUNC_DEF]          {
69   [NONE]              
70   [NONE]              std
70   [NONE]              ::
70   [NONE]              for_each
70   [FUNC_CALL]         (
70   [NONE]              a
70   [NONE]              ,
70   [NONE]              b
70   [NONE]              ,
70   [CPP_LAMBDA]        [
70   [CPP_LAMBDA]        ]
70   [CPP_LAMBDA]        (
70   [NONE]              int
70   [NONE]              &
70   [NONE]              b
70   [CPP_LAMBDA]        )
70   [NONE]              ->
70   [NONE]              foo
70   [NONE]              
70   [CPP_LAMBDA]        {
70   [NONE]              
70   [NONE]              b
70   [NONE]              +=
70   [NONE]              3
70   [NONE]              ;
70   [NONE]              
70   [NONE]              return
70   [RETURN]            (
70   [NONE]              b
70   [RETURN]            )
70   [NONE]              ;
70   [NONE]              
70   [CPP_LAMBDA]        }
70   [NONE]              
70   [FUNC_CALL]         )
70   [NONE]              ;
70   [NONE]              
71   [FUNC_DEF]          }
71   [NONE]              
73   [FUNC_DEF]          void
73   [NONE]              g2
73   [FUNC_DEF]          (
73   [FUNC_DEF]          )
73   [NONE]              
74   [FUNC_DEF]          {
74   [NONE]              
75   [NONE]              Invoke
75   [FUNC_CALL]         (
75   [NONE]              a
75   [NONE]              ,
75   [NONE]              b
75   [NONE]              ,
75   [NONE]              
76   [CPP_LAMBDA]        [
76   [NONE]              &
76   [NONE]              one
76   [NONE]              ,
76   [NONE]              two
76   [CPP_LAMBDA]        ]
76   [CPP_LAMBDA]        (
76   [NONE]              int
76   [NONE]              *
76   [NONE]              a
76   [NONE]              ,
76   [NONE]              Something
76   [NONE]              &
76   [NONE]              b
76   [CPP_LAMBDA]        )
76   [NONE]              
76   [CPP_LAMBDA]        {
76   [NONE]              
76   [NONE]              std
76   [NONE]              ::
76   [NONE]              cout
76   [NONE]              <<
76   [NONE]              "blah: "
76   [NONE]              <<
76   [NONE]              *
76   [NONE]              a
76   [NONE]              ;
76   [NONE]              
76   [CPP_LAMBDA]        }
76   [NONE]              
76   [FUNC_CALL]         )
76   [NONE]              ;
76   [NONE]              
77   [FUNC_DEF]          }
77   [NONE]              