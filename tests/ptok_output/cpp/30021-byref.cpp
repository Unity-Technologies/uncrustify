Line [Parent]            Text
1    [FUNC_DEF]          bool
1    [NONE]              foo
1    [FUNC_DEF]          (
1    [NONE]              int
1    [NONE]              &
1    [NONE]              idx
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              if
3    [IF]                (
3    [NONE]              idx
3    [NONE]              <
3    [NONE]              m_count
3    [IF]                )
3    [NONE]              
4    [IF]                {
4    [NONE]              
5    [NONE]              idx
5    [NONE]              ++
5    [NONE]              ;
5    [NONE]              
6    [NONE]              return
6    [RETURN]            (
6    [NONE]              m_bool
6    [NONE]              [
6    [NONE]              idx
6    [NONE]              -
6    [NONE]              1
6    [NONE]              ]
6    [RETURN]            )
6    [NONE]              ;
6    [NONE]              
7    [IF]                }
7    [NONE]              
8    [NONE]              return
8    [RETURN]            (
8    [NONE]              false
8    [RETURN]            )
8    [NONE]              ;
8    [NONE]              
9    [FUNC_DEF]          }
9    [NONE]              
11   [NONE]              class
11   [CLASS]             Foo
11   [CLASS]             {
11   [NONE]              
12   [NONE]              public
12   [NONE]              :
12   [NONE]              
13   [NONE]              Foo
13   [FUNC_CLASS_PROTO]    (
13   [FUNC_CLASS_PROTO]    )
13   [FUNC_CLASS_PROTO]    ;
13   [NONE]              
14   [NONE]              Foo
14   [FUNC_CLASS_PROTO]    (
14   [NONE]              const
14   [NONE]              Foo
14   [NONE]              &
14   [NONE]              f
14   [FUNC_CLASS_PROTO]    )
14   [FUNC_CLASS_PROTO]    ;
14   [NONE]              
15   [CLASS]             }
15   [CLASS]             ;
15   [NONE]              
17   [NONE]              class
17   [NONE]              NS
17   [NONE]              ::
17   [CLASS]             Foo
17   [CLASS]             {
17   [NONE]              
18   [NONE]              public
18   [NONE]              :
18   [NONE]              
19   [NONE]              Foo
19   [FUNC_CLASS_PROTO]    (
19   [NONE]              Bar
19   [NONE]              &
19   [NONE]              b
19   [FUNC_CLASS_PROTO]    )
19   [FUNC_CLASS_PROTO]    ;
19   [NONE]              
20   [CLASS]             }
20   [CLASS]             ;
20   [NONE]              
22   [NONE]              template
22   [TEMPLATE]          <
22   [NONE]              class
22   [NONE]              T
22   [TEMPLATE]          >
22   [TEMPLATE]          class
22   [CLASS]             ListManager
22   [NONE]              
23   [CLASS]             {
23   [NONE]              
24   [NONE]              protected
24   [NONE]              :
24   [NONE]              
25   [NONE]              T
25   [NONE]              head
25   [NONE]              ;
25   [NONE]              
27   [NONE]              public
27   [NONE]              :
27   [NONE]              
28   [NONE]              ListManager
28   [FUNC_CLASS_DEF]    (
28   [FUNC_CLASS_DEF]    )
28   [NONE]              
29   [FUNC_CLASS_DEF]    {
29   [NONE]              
30   [NONE]              head
30   [NONE]              .
30   [NONE]              next
30   [NONE]              =
30   [NONE]              head
30   [NONE]              .
30   [NONE]              prev
30   [NONE]              =
30   [NONE]              &
30   [NONE]              head
30   [NONE]              ;
30   [NONE]              
31   [FUNC_CLASS_DEF]    }
31   [NONE]              
33   [NONE]              ListManager
33   [FUNC_CLASS_DEF]    (
33   [NONE]              const
33   [NONE]              ListManager
33   [NONE]              &
33   [NONE]              ref
33   [FUNC_CLASS_DEF]    )
33   [NONE]              
34   [FUNC_CLASS_DEF]    {
34   [NONE]              
35   [NONE]              head
35   [NONE]              .
35   [NONE]              next
35   [NONE]              =
35   [NONE]              head
35   [NONE]              .
35   [NONE]              prev
35   [NONE]              =
35   [NONE]              &
35   [NONE]              head
35   [NONE]              ;
35   [NONE]              
36   [FUNC_CLASS_DEF]    }
36   [NONE]              
37   [CLASS]             }
37   [NONE]              
39   [FUNC_DEF]          const
39   [FUNC_DEF]          Foo
39   [FUNC_DEF]          &
39   [FUNC_DEF]          Foo
39   [FUNC_DEF]          ::
39   [FUNC_DEF]          operator
39   [OPERATOR]          ==
39   [FUNC_DEF]          (
39   [NONE]              Foo
39   [NONE]              &
39   [NONE]              me
39   [FUNC_DEF]          )
39   [NONE]              
39   [FUNC_DEF]          {
39   [NONE]              
40   [NONE]              ::
40   [NONE]              sockaddr
40   [NONE]              *
40   [NONE]              ptr
40   [NONE]              =
40   [C_CAST]            (
40   [C_CAST]            ::
40   [C_CAST]            sockaddr
40   [C_CAST]            *
40   [C_CAST]            )
40   [NONE]              &
40   [NONE]              host
40   [NONE]              ;
40   [NONE]              
41   [NONE]              return
41   [RETURN]            (
41   [NONE]              me
41   [RETURN]            )
41   [NONE]              ;
41   [NONE]              
42   [FUNC_DEF]          }
42   [NONE]              
44   [FUNC_DEF]          MyType
44   [FUNC_DEF]          &
44   [FUNC_DEF]          MyClass
44   [FUNC_DEF]          ::
44   [NONE]              myMethode
44   [FUNC_DEF]          (
44   [FUNC_DEF]          )
44   [NONE]              
44   [FUNC_DEF]          {
44   [NONE]              
45   [NONE]              const
45   [NONE]              MyType
45   [NONE]              &
45   [NONE]              t
45   [NONE]              =
45   [NONE]              getSomewhere
45   [FUNC_CALL]         (
45   [FUNC_CALL]         )
45   [NONE]              ;
45   [NONE]              
46   [FUNC_DEF]          }
46   [NONE]              