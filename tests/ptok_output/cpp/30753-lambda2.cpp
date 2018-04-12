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
17   [FUNC_CALL]         )
17   [NONE]              ;
17   [NONE]              
18   [FUNC_DEF]          }
18   [NONE]              
20   [FUNC_DEF]          void
20   [NONE]              f1b
20   [FUNC_DEF]          (
20   [FUNC_DEF]          )
20   [NONE]              
21   [FUNC_DEF]          {
21   [NONE]              
22   [NONE]              std
22   [NONE]              ::
22   [NONE]              for_each
22   [FUNC_CALL]         (
22   [NONE]              a
22   [NONE]              ,
22   [NONE]              b
22   [NONE]              ,
22   [NONE]              
23   [CPP_LAMBDA]        [
23   [CPP_LAMBDA]        ]
23   [CPP_LAMBDA]        (
23   [NONE]              int
23   [NONE]              &
23   [NONE]              b
23   [CPP_LAMBDA]        )
23   [NONE]              ->
23   [NONE]              foo
24   [CPP_LAMBDA]        {
24   [NONE]              
25   [NONE]              b
25   [NONE]              +=
25   [NONE]              3
25   [NONE]              ;
25   [NONE]              
26   [NONE]              return
26   [RETURN]            (
26   [NONE]              b
26   [RETURN]            )
26   [NONE]              ;
26   [NONE]              
27   [CPP_LAMBDA]        }
27   [NONE]              
28   [FUNC_CALL]         )
28   [NONE]              ;
28   [NONE]              
29   [FUNC_DEF]          }
29   [NONE]              
31   [FUNC_DEF]          void
31   [NONE]              f2
31   [FUNC_DEF]          (
31   [FUNC_DEF]          )
31   [NONE]              
32   [FUNC_DEF]          {
32   [NONE]              
33   [NONE]              Invoke
33   [FUNC_CALL]         (
33   [NONE]              a
33   [NONE]              ,
33   [NONE]              b
33   [NONE]              ,
33   [NONE]              
34   [CPP_LAMBDA]        [
34   [NONE]              &
34   [NONE]              one
34   [NONE]              ,
34   [NONE]              two
34   [CPP_LAMBDA]        ]
34   [CPP_LAMBDA]        (
34   [NONE]              int
34   [NONE]              *
34   [NONE]              a
34   [NONE]              ,
34   [NONE]              Something
34   [NONE]              &
34   [NONE]              b
34   [CPP_LAMBDA]        )
35   [CPP_LAMBDA]        {
35   [NONE]              
36   [NONE]              std
36   [NONE]              ::
36   [NONE]              cout
36   [NONE]              <<
36   [NONE]              "blah: "
36   [NONE]              <<
36   [NONE]              *
36   [NONE]              a
36   [NONE]              ;
36   [NONE]              
37   [CPP_LAMBDA]        }
37   [NONE]              
38   [FUNC_CALL]         )
38   [NONE]              ;
38   [NONE]              
39   [FUNC_DEF]          }
39   [NONE]              
41   [FUNC_DEF]          void
41   [NONE]              f3a
41   [FUNC_DEF]          (
41   [FUNC_DEF]          )
41   [NONE]              
42   [FUNC_DEF]          {
42   [NONE]              
43   [NONE]              auto
43   [NONE]              a
43   [NONE]              =
43   [CPP_LAMBDA]        [
43   [CPP_LAMBDA]        ]
43   [CPP_LAMBDA]        {
43   [CPP_LAMBDA]        }
43   [NONE]              ;
43   [NONE]              
44   [NONE]              auto
44   [NONE]              b
44   [NONE]              =
44   [CPP_LAMBDA]        [
44   [CPP_LAMBDA]        ]
44   [CPP_LAMBDA]        {
44   [NONE]              return
44   [RETURN]            (
44   [NONE]              true
44   [RETURN]            )
44   [NONE]              ;
44   [CPP_LAMBDA]        }
44   [NONE]              ;
44   [NONE]              
45   [FUNC_DEF]          }
45   [NONE]              
47   [FUNC_DEF]          void
47   [NONE]              f3b
47   [FUNC_DEF]          (
47   [FUNC_DEF]          )
47   [NONE]              
48   [FUNC_DEF]          {
48   [NONE]              
49   [NONE]              Invoke
49   [FUNC_CALL]         (
49   [NONE]              a
49   [NONE]              ,
49   [NONE]              b
49   [NONE]              ,
49   [NONE]              
50   [CPP_LAMBDA]        [
50   [NONE]              &
50   [NONE]              one
50   [NONE]              ,
50   [NONE]              two
50   [CPP_LAMBDA]        ]
51   [CPP_LAMBDA]        {
51   [NONE]              
52   [NONE]              std
52   [NONE]              ::
52   [NONE]              cout
52   [NONE]              <<
52   [NONE]              "blah: "
52   [NONE]              <<
52   [NONE]              one
52   [NONE]              <<
52   [NONE]              two
52   [NONE]              ;
52   [NONE]              
53   [CPP_LAMBDA]        }
53   [NONE]              
54   [FUNC_CALL]         )
54   [NONE]              ;
54   [NONE]              
55   [FUNC_DEF]          }
55   [NONE]              
57   [FUNC_DEF]          void
57   [NONE]              f3c
57   [FUNC_DEF]          (
57   [FUNC_DEF]          )
57   [NONE]              
58   [FUNC_DEF]          {
58   [NONE]              
59   [NONE]              int
59   [NONE]              a
59   [NONE]              []
59   [BRACED_INIT_LIST]    {
59   [BRACED_INIT_LIST]    }
59   [NONE]              ;
59   [NONE]              
60   [FUNC_DEF]          }
60   [NONE]              
62   [FUNC_DEF]          void
62   [NONE]              g1
62   [FUNC_DEF]          (
62   [FUNC_DEF]          )
62   [NONE]              
63   [FUNC_DEF]          {
63   [NONE]              
64   [NONE]              auto
64   [NONE]              a
64   [NONE]              =
64   [CPP_LAMBDA]        [
64   [NONE]              =
64   [CPP_LAMBDA]        ]
64   [CPP_LAMBDA]        (
64   [NONE]              int
64   [NONE]              *
64   [NONE]              a
64   [NONE]              ,
64   [NONE]              Something
64   [NONE]              &
64   [NONE]              b
64   [CPP_LAMBDA]        )
64   [CPP_LAMBDA]        {
64   [NONE]              std
64   [NONE]              ::
64   [NONE]              cout
64   [NONE]              <<
64   [NONE]              "blah: "
64   [NONE]              <<
64   [NONE]              *
64   [NONE]              a
64   [NONE]              ;
64   [CPP_LAMBDA]        }
64   [NONE]              ;
64   [NONE]              
65   [FUNC_DEF]          }
65   [NONE]              
67   [FUNC_DEF]          void
67   [NONE]              g1a
67   [FUNC_DEF]          (
67   [FUNC_DEF]          )
67   [NONE]              
68   [FUNC_DEF]          {
68   [NONE]              
69   [NONE]              std
69   [NONE]              ::
69   [NONE]              for_each
69   [FUNC_CALL]         (
69   [NONE]              a
69   [NONE]              ,
69   [NONE]              b
69   [NONE]              ,
69   [CPP_LAMBDA]        [
69   [CPP_LAMBDA]        ]
69   [CPP_LAMBDA]        (
69   [NONE]              Something
69   [NONE]              &
69   [NONE]              b
69   [CPP_LAMBDA]        )
69   [CPP_LAMBDA]        {
69   [NONE]              std
69   [NONE]              ::
69   [NONE]              cout
69   [NONE]              <<
69   [NONE]              "blah: "
69   [NONE]              <<
69   [NONE]              *
69   [NONE]              a
69   [NONE]              ;
69   [CPP_LAMBDA]        }
69   [FUNC_CALL]         )
69   [NONE]              ;
69   [NONE]              
70   [FUNC_DEF]          }
70   [NONE]              
72   [FUNC_DEF]          void
72   [NONE]              g1b
72   [FUNC_DEF]          (
72   [FUNC_DEF]          )
72   [NONE]              
73   [FUNC_DEF]          {
73   [NONE]              
74   [NONE]              std
74   [NONE]              ::
74   [NONE]              for_each
74   [FUNC_CALL]         (
74   [NONE]              a
74   [NONE]              ,
74   [NONE]              b
74   [NONE]              ,
74   [CPP_LAMBDA]        [
74   [CPP_LAMBDA]        ]
74   [CPP_LAMBDA]        (
74   [NONE]              int
74   [NONE]              &
74   [NONE]              b
74   [CPP_LAMBDA]        )
74   [NONE]              ->
74   [NONE]              foo
74   [CPP_LAMBDA]        {
74   [NONE]              b
74   [NONE]              +=
74   [NONE]              3
74   [NONE]              ;
74   [NONE]              return
74   [RETURN]            (
74   [NONE]              b
74   [RETURN]            )
74   [NONE]              ;
74   [CPP_LAMBDA]        }
74   [FUNC_CALL]         )
74   [NONE]              ;
74   [NONE]              
75   [FUNC_DEF]          }
75   [NONE]              
77   [FUNC_DEF]          void
77   [NONE]              g2
77   [FUNC_DEF]          (
77   [FUNC_DEF]          )
77   [NONE]              
78   [FUNC_DEF]          {
78   [NONE]              
79   [NONE]              Invoke
79   [FUNC_CALL]         (
79   [NONE]              a
79   [NONE]              ,
79   [NONE]              b
79   [NONE]              ,
79   [NONE]              
80   [CPP_LAMBDA]        [
80   [NONE]              &
80   [NONE]              one
80   [NONE]              ,
80   [NONE]              two
80   [CPP_LAMBDA]        ]
80   [CPP_LAMBDA]        (
80   [NONE]              int
80   [NONE]              *
80   [NONE]              a
80   [NONE]              ,
80   [NONE]              Something
80   [NONE]              &
80   [NONE]              b
80   [CPP_LAMBDA]        )
80   [CPP_LAMBDA]        {
80   [NONE]              std
80   [NONE]              ::
80   [NONE]              cout
80   [NONE]              <<
80   [NONE]              "blah: "
80   [NONE]              <<
80   [NONE]              *
80   [NONE]              a
80   [NONE]              ;
80   [CPP_LAMBDA]        }
80   [FUNC_CALL]         )
80   [NONE]              ;
80   [NONE]              
82   [FUNC_DEF]          }
82   [NONE]              