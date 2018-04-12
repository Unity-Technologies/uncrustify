Line [Parent]            Text
1    [FUNC_DEF]          int
1    [FUNC_DEF]          &
1    [NONE]              Function
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              static
3    [NONE]              int
3    [NONE]              x
3    [NONE]              ;
3    [NONE]              
4    [NONE]              return
4    [RETURN]            (
4    [NONE]              x
4    [RETURN]            )
4    [NONE]              ;
4    [NONE]              
5    [FUNC_DEF]          }
5    [NONE]              
7    [FUNC_PROTO]        void
7    [NONE]              foo1
7    [FUNC_PROTO]        (
7    [NONE]              int
7    [NONE]              param1
7    [NONE]              ,
7    [NONE]              int
7    [NONE]              param2
7    [NONE]              ,
7    [NONE]              char
7    [NONE]              *
7    [NONE]              param2
7    [FUNC_PROTO]        )
7    [FUNC_PROTO]        ;
7    [NONE]              
9    [FUNC_PROTO]        void
9    [NONE]              foo2
9    [FUNC_PROTO]        (
9    [NONE]              int
9    [NONE]              param1
9    [NONE]              ,
9    [NONE]              
10   [NONE]              int
10   [NONE]              param2
10   [NONE]              ,
10   [NONE]              
11   [NONE]              char
11   [NONE]              *
11   [NONE]              param2
11   [FUNC_PROTO]        )
11   [FUNC_PROTO]        ;
11   [NONE]              
13   [FUNC_PROTO]        void
13   [NONE]              foo3
13   [FUNC_PROTO]        (
13   [NONE]              int
13   [NONE]              param1
13   [NONE]              ,
13   [NONE]              
14   [NONE]              int
14   [NONE]              param2
14   [NONE]              ,
14   [COMMENT_END]       // comment
14   [NONE]              
15   [NONE]              char
15   [NONE]              *
15   [NONE]              param2
15   [NONE]              
16   [FUNC_PROTO]        )
16   [FUNC_PROTO]        ;
16   [NONE]              
18   [FUNC_PROTO]        struct
18   [FUNC_PROTO]        whoopee
18   [FUNC_PROTO]        *
18   [NONE]              foo4
18   [FUNC_PROTO]        (
18   [NONE]              int
18   [NONE]              param1
18   [NONE]              ,
18   [NONE]              int
18   [NONE]              param2
18   [NONE]              ,
18   [NONE]              char
18   [NONE]              *
18   [NONE]              param2
18   [COMMENT_EMBED]     /* comment */
18   [FUNC_PROTO]        )
18   [FUNC_PROTO]        ;
18   [NONE]              
20   [FUNC_PROTO]        const
20   [FUNC_PROTO]        struct
20   [FUNC_PROTO]        snickers
20   [FUNC_PROTO]        *
20   [NONE]              
21   [NONE]              foo5
21   [FUNC_PROTO]        (
21   [NONE]              int
21   [NONE]              param1
21   [NONE]              ,
21   [NONE]              int
21   [NONE]              param2
21   [NONE]              ,
21   [NONE]              char
21   [NONE]              *
21   [NONE]              param2
21   [FUNC_PROTO]        )
21   [FUNC_PROTO]        ;
21   [NONE]              
24   [FUNC_DEF]          void
24   [NONE]              foo
24   [FUNC_DEF]          (
24   [NONE]              int
24   [NONE]              param1
24   [NONE]              ,
24   [NONE]              int
24   [NONE]              param2
24   [NONE]              ,
24   [NONE]              char
24   [NONE]              *
24   [NONE]              param2
24   [FUNC_DEF]          )
24   [NONE]              
25   [FUNC_DEF]          {
25   [NONE]              
26   [NONE]              printf
26   [FUNC_CALL]         (
26   [NONE]              "boo!\n"
26   [FUNC_CALL]         )
26   [NONE]              ;
26   [NONE]              
27   [FUNC_DEF]          }
27   [NONE]              
29   [FUNC_PROTO]        int
29   [FUNC_PROTO]        classname
29   [FUNC_PROTO]        ::
29   [NONE]              method
29   [FUNC_PROTO]        (
29   [FUNC_PROTO]        )
29   [FUNC_PROTO]        ;
29   [NONE]              
31   [FUNC_DEF]          int
31   [FUNC_DEF]          classname
31   [FUNC_DEF]          ::
31   [NONE]              method
31   [FUNC_DEF]          (
31   [FUNC_DEF]          )
31   [NONE]              
32   [FUNC_DEF]          {
32   [NONE]              
33   [NONE]              foo
33   [FUNC_CALL]         (
33   [FUNC_CALL]         )
33   [NONE]              ;
33   [NONE]              
34   [FUNC_DEF]          }
34   [NONE]              
36   [FUNC_PROTO]        int
36   [NONE]              
37   [FUNC_PROTO]        classname
37   [FUNC_PROTO]        ::
37   [NONE]              method2
37   [FUNC_PROTO]        (
37   [FUNC_PROTO]        )
37   [FUNC_PROTO]        ;
37   [NONE]              
39   [FUNC_DEF]          int
39   [NONE]              
40   [FUNC_DEF]          classname
40   [FUNC_DEF]          ::
40   [NONE]              method2
40   [FUNC_DEF]          (
40   [FUNC_DEF]          )
40   [NONE]              
41   [FUNC_DEF]          {
41   [NONE]              
42   [NONE]              foo2
42   [FUNC_CALL]         (
42   [FUNC_CALL]         )
42   [NONE]              ;
42   [NONE]              
43   [FUNC_DEF]          }
43   [NONE]              
45   [FUNC_DEF]          const
45   [FUNC_DEF]          int
45   [FUNC_DEF]          &
45   [FUNC_DEF]          className
45   [FUNC_DEF]          ::
45   [NONE]              method1
45   [FUNC_DEF]          (
45   [NONE]              void
45   [FUNC_DEF]          )
45   [FUNC_DEF]          const
45   [NONE]              
46   [FUNC_DEF]          {
46   [NONE]              
47   [COMMENT_WHOLE]     // stuff
47   [NONE]              
48   [FUNC_DEF]          }
48   [NONE]              
50   [FUNC_DEF]          const
50   [FUNC_DEF]          longtypename
50   [FUNC_DEF]          &
50   [FUNC_DEF]          className
50   [FUNC_DEF]          ::
50   [NONE]              method2
50   [FUNC_DEF]          (
50   [NONE]              void
50   [FUNC_DEF]          )
50   [FUNC_DEF]          const
50   [NONE]              
51   [FUNC_DEF]          {
51   [NONE]              
52   [COMMENT_WHOLE]     // stuff
52   [NONE]              
53   [FUNC_DEF]          }
53   [NONE]              
55   [FUNC_PROTO]        int
55   [FUNC_PROTO]        &
55   [NONE]              foo
55   [FUNC_PROTO]        (
55   [FUNC_PROTO]        )
55   [FUNC_PROTO]        ;
55   [NONE]              
57   [FUNC_DEF]          int
57   [FUNC_DEF]          &
57   [NONE]              foo
57   [FUNC_DEF]          (
57   [FUNC_DEF]          )
57   [NONE]              
58   [FUNC_DEF]          {
58   [NONE]              
59   [NONE]              list_for_each
59   [FUNC_CALL]         (
59   [NONE]              a
59   [NONE]              ,
59   [NONE]              b
59   [FUNC_CALL]         )
59   [NONE]              
59   [FUNC_CALL]         {
59   [NONE]              
60   [NONE]              bar
60   [FUNC_CALL]         (
60   [NONE]              a
60   [FUNC_CALL]         )
60   [NONE]              ;
60   [NONE]              
61   [FUNC_CALL]         }
61   [NONE]              
62   [NONE]              return
62   [RETURN]            (
62   [NONE]              nuts
62   [RETURN]            )
62   [NONE]              ;
62   [NONE]              
63   [FUNC_DEF]          }
63   [NONE]              
65   [FUNC_DEF]          void
65   [FUNC_DEF]          Foo
65   [FUNC_DEF]          ::
65   [NONE]              bar
65   [FUNC_DEF]          (
65   [FUNC_DEF]          )
65   [NONE]              
65   [FUNC_DEF]          {
65   [NONE]              
65   [FUNC_DEF]          }
65   [NONE]              
67   [NONE]              Foo
67   [NONE]              ::
67   [NONE]              Foo
67   [FUNC_CLASS_DEF]    (
67   [FUNC_CLASS_DEF]    )
67   [NONE]              
67   [FUNC_CLASS_DEF]    {
67   [NONE]              
67   [FUNC_CLASS_DEF]    }
67   [NONE]              
69   [NONE]              Foo
69   [NONE]              ::
69   [NONE]              ~
69   [DESTRUCTOR]        Foo
69   [FUNC_CLASS_DEF]    (
69   [FUNC_CLASS_DEF]    )
69   [NONE]              
69   [FUNC_CLASS_DEF]    {
69   [NONE]              
69   [FUNC_CLASS_DEF]    }
69   [NONE]              
71   [FUNC_DEF]          void
71   [NONE]              func
71   [FUNC_DEF]          (
71   [NONE]              void
71   [FUNC_DEF]          )
71   [NONE]              
72   [FUNC_DEF]          {
72   [NONE]              
73   [NONE]              Directory
73   [NONE]              dir
73   [FUNC_CTOR_VAR]     (
73   [NONE]              "arg"
73   [FUNC_CTOR_VAR]     )
73   [FUNC_CTOR_VAR]     ;
73   [NONE]              
74   [FUNC_DEF]          }
74   [NONE]              