Line [Parent]            Text
1    [NONE]              
2    [COMMENT_WHOLE]     //zero
2    [NONE]              
3    [COMMENT_WHOLE]     // one
3    [NONE]              
4    [COMMENT_WHOLE]     //  two
4    [NONE]              
5    [COMMENT_WHOLE]     //   three
5    [NONE]              
6    [FUNC_PROTO]        void
6    [NONE]              
6    [NONE]              foo
6    [FUNC_PROTO]        (
6    [NONE]              void
6    [FUNC_PROTO]        )
6    [FUNC_PROTO]        ;
6    [NONE]              
8    [NONE]              struct
8    [STRUCT]            A
8    [NONE]              
9    [STRUCT]            {
9    [NONE]              
10   [NONE]              public
10   [NONE]              :
10   [NONE]              
11   [FUNC_PROTO]        long_complicated_type
11   [NONE]              
11   [NONE]              f
11   [FUNC_PROTO]        (
11   [FUNC_PROTO]        )
11   [FUNC_PROTO]        ;
11   [NONE]              
12   [FUNC_PROTO]        A
12   [FUNC_PROTO]        &
12   [NONE]              
12   [FUNC_PROTO]        operator
12   [OPERATOR]          +
12   [FUNC_PROTO]        (
12   [NONE]              const
12   [NONE]              A
12   [NONE]              &
12   [NONE]              other
12   [FUNC_PROTO]        )
12   [FUNC_PROTO]        ;
12   [NONE]              
13   [STRUCT]            }
13   [STRUCT]            ;
13   [NONE]              
15   [FUNC_DEF]          A
15   [FUNC_DEF]          &
15   [NONE]              
15   [FUNC_DEF]          A
15   [FUNC_DEF]          ::
15   [FUNC_DEF]          operator
15   [OPERATOR]          +
15   [FUNC_DEF]          (
15   [NONE]              const
15   [NONE]              A
15   [NONE]              &
15   [NONE]              other
15   [FUNC_DEF]          )
15   [NONE]              
16   [FUNC_DEF]          {
16   [NONE]              
16   [FUNC_DEF]          }
16   [NONE]              
18   [FUNC_DEF]          B
18   [NONE]              
19   [FUNC_DEF]          operator
19   [OPERATOR]          +
19   [FUNC_DEF]          (
19   [NONE]              const
19   [NONE]              B
19   [NONE]              &
19   [NONE]              other
19   [FUNC_DEF]          )
19   [NONE]              
20   [FUNC_DEF]          {
20   [NONE]              
20   [FUNC_DEF]          }
20   [NONE]              
22   [FUNC_DEF]          B
22   [NONE]              
22   [NONE]              foo
22   [FUNC_DEF]          (
22   [NONE]              const
22   [NONE]              B
22   [NONE]              &
22   [NONE]              other
22   [FUNC_DEF]          )
22   [NONE]              
23   [FUNC_DEF]          {
23   [NONE]              
23   [FUNC_DEF]          }
23   [NONE]              
25   [NONE]              class
25   [CLASS]             A
25   [NONE]              
26   [CLASS]             {
26   [NONE]              
27   [NONE]              public
27   [NONE]              :
27   [NONE]              
28   [FUNC_DEF]          int
28   [NONE]              
28   [NONE]              aFunct
28   [FUNC_DEF]          (
28   [FUNC_DEF]          )
28   [FUNC_DEF]          {
28   [NONE]              
28   [NONE]              return
28   [NONE]              a
28   [NONE]              ;
28   [NONE]              
28   [FUNC_DEF]          }
28   [NONE]              
29   [FUNC_PROTO]        int
29   [NONE]              
29   [NONE]              bFunc
29   [FUNC_PROTO]        (
29   [FUNC_PROTO]        )
29   [FUNC_PROTO]        ;
29   [NONE]              
30   [CLASS]             }
30   [CLASS]             ;
30   [NONE]              
32   [COMMENT_WHOLE]     // Another file
32   [NONE]              
33   [FUNC_DEF]          int
33   [NONE]              
34   [FUNC_DEF]          A
34   [FUNC_DEF]          ::
34   [NONE]              bFunc
34   [FUNC_DEF]          (
34   [FUNC_DEF]          )
34   [NONE]              
35   [FUNC_DEF]          {
35   [NONE]              
36   [COMMENT_WHOLE]     // some code
36   [NONE]              
37   [FUNC_DEF]          }
37   [NONE]              
39   [NONE]              template
39   [TEMPLATE]          <
39   [NONE]              typename
39   [NONE]              T
39   [TEMPLATE]          >
39   [NONE]              
40   [NONE]              typename
40   [FUNC_DEF]          Foo
40   [TEMPLATE]          <
40   [NONE]              T
40   [TEMPLATE]          >
40   [FUNC_DEF]          ::
40   [FUNC_DEF]          Type
40   [NONE]              
40   [FUNC_DEF]          Foo
40   [TEMPLATE]          <
40   [NONE]              T
40   [TEMPLATE]          >
40   [FUNC_DEF]          ::
40   [NONE]              Func
40   [FUNC_DEF]          (
40   [FUNC_DEF]          )
40   [NONE]              
41   [FUNC_DEF]          {
41   [NONE]              
42   [FUNC_DEF]          }
42   [NONE]              
44   [FUNC_DEF]          void
44   [NONE]              
44   [FUNC_DEF]          Foo
44   [FUNC_DEF]          ::
44   [NONE]              bar
44   [FUNC_DEF]          (
44   [FUNC_DEF]          )
44   [FUNC_DEF]          {
44   [NONE]              
44   [FUNC_DEF]          }
44   [NONE]              
46   [NONE]              namespace
46   [NAMESPACE]         foo
46   [NAMESPACE]         {
46   [NONE]              
47   [NONE]              Foo
47   [NONE]              ::
47   [NONE]              Foo
47   [FUNC_CLASS_DEF]    (
47   [FUNC_CLASS_DEF]    )
47   [FUNC_CLASS_DEF]    {
47   [NONE]              
47   [FUNC_CLASS_DEF]    }
47   [NONE]              
48   [NAMESPACE]         }
48   [NONE]              
50   [NONE]              Foo
50   [NONE]              ::
50   [NONE]              ~
50   [DESTRUCTOR]        Foo
50   [FUNC_CLASS_DEF]    (
50   [FUNC_CLASS_DEF]    )
50   [FUNC_CLASS_DEF]    {
50   [NONE]              
50   [FUNC_CLASS_DEF]    }
50   [NONE]              
52   [NONE]              class
52   [CLASS]             Object
52   [NONE]              
53   [CLASS]             {
53   [NONE]              
54   [NONE]              ~
54   [DESTRUCTOR]        Object
54   [FUNC_CLASS_PROTO]    (
54   [NONE]              void
54   [FUNC_CLASS_PROTO]    )
54   [FUNC_CLASS_PROTO]    ;
54   [NONE]              
55   [CLASS]             }
55   [CLASS]             ;
55   [NONE]              
57   [NONE]              template
57   [TEMPLATE]          <
57   [NONE]              class
57   [NONE]              T
57   [TEMPLATE]          >
57   [NONE]              
58   [FUNC_DEF]          void
58   [NONE]              
58   [FUNC_DEF]          SampleClassTemplate
58   [TEMPLATE]          <
58   [NONE]              T
58   [TEMPLATE]          >
58   [FUNC_DEF]          ::
58   [NONE]              connect
58   [FUNC_DEF]          (
58   [FUNC_DEF]          )
58   [NONE]              
59   [FUNC_DEF]          {
59   [NONE]              
60   [FUNC_DEF]          }
60   [NONE]              
62   [NONE]              template
62   [TEMPLATE]          <
62   [TEMPLATE]          >
62   [NONE]              
63   [FUNC_DEF]          inline
63   [FUNC_DEF]          void
63   [NONE]              
63   [NONE]              bar
63   [TEMPLATE]          <
63   [NONE]              MyType
63   [TEMPLATE]          >
63   [FUNC_DEF]          (
63   [NONE]              MyType
63   [NONE]              r
63   [FUNC_DEF]          )
63   [NONE]              
64   [FUNC_DEF]          {
64   [NONE]              
65   [NONE]              foo
65   [FUNC_CALL]         (
65   [NONE]              r
65   [FUNC_CALL]         )
65   [NONE]              ;
65   [NONE]              
66   [FUNC_DEF]          }
66   [NONE]              
68   [NONE]              template
68   [TEMPLATE]          <
68   [NONE]              T
68   [TEMPLATE]          >
68   [NONE]              
69   [FUNC_DEF]          inline
69   [FUNC_DEF]          void
69   [NONE]              
69   [NONE]              baz
69   [TEMPLATE]          <
69   [TEMPLATE]          >
69   [FUNC_DEF]          (
69   [NONE]              T
69   [NONE]              r
69   [FUNC_DEF]          )
69   [NONE]              
70   [FUNC_DEF]          {
70   [NONE]              
71   [NONE]              foo
71   [FUNC_CALL]         (
71   [NONE]              r
71   [FUNC_CALL]         )
71   [NONE]              ;
71   [NONE]              
72   [FUNC_DEF]          }
72   [NONE]              