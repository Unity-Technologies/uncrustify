Line [Parent]            Text
1    [FUNC_DEF]          void
1    [NONE]              Foo
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              FooType
3    [NONE]              type
3    [NONE]              
4    [NONE]              =
4    [NONE]              isFoo
4    [NONE]              ?
4    [NONE]              fooNamespace
4    [NONE]              ::
4    [NONE]              barNamespace
4    [NONE]              ::
4    [NONE]              x
4    [NONE]              
5    [NONE]              :
5    [NONE]              isBar
5    [NONE]              ?
5    [NONE]              (
5    [NONE]              isQuux
5    [NONE]              ?
5    [NONE]              fooNamespace
5    [NONE]              ::
5    [NONE]              barNamespace
5    [NONE]              ::
5    [NONE]              y
5    [NONE]              :
5    [NONE]              fooNamespace
5    [NONE]              ::
5    [NONE]              barNamespace
5    [NONE]              ::
5    [NONE]              z
5    [NONE]              )
5    [NONE]              
6    [NONE]              :
6    [NONE]              isBaz
6    [NONE]              ?
6    [NONE]              (
6    [NONE]              isQuux
6    [NONE]              ?
6    [NONE]              fooNamespace
6    [NONE]              ::
6    [NONE]              barNamespace
6    [NONE]              ::
6    [NONE]              i
6    [NONE]              :
6    [NONE]              fooNamespace
6    [NONE]              ::
6    [NONE]              barNamespace
6    [NONE]              ::
6    [NONE]              j
6    [NONE]              )
6    [NONE]              
7    [NONE]              :
7    [NONE]              (
7    [NONE]              isQux
7    [NONE]              ?
7    [NONE]              fooNamespace
7    [NONE]              ::
7    [NONE]              barNamespace
7    [NONE]              ::
7    [NONE]              k
7    [NONE]              :
7    [NONE]              fooNamespace
7    [NONE]              ::
7    [NONE]              barNamespace
7    [NONE]              ::
7    [NONE]              l
7    [NONE]              )
7    [NONE]              ;
7    [NONE]              
9    [NONE]              fooNamespace
9    [NONE]              ::
9    [NONE]              _bar
9    [NONE]              .
9    [NONE]              x
9    [NONE]              
10   [NONE]              =
10   [NONE]              FOO_CONSTANT
10   [NONE]              
11   [NONE]              |
11   [NONE]              BAR_CONSTANT
11   [NONE]              
12   [NONE]              |
12   [NONE]              BAZ_CONSTANT
12   [NONE]              ;
12   [NONE]              
14   [NONE]              switch
14   [SWITCH]            (
14   [NONE]              foo
14   [SWITCH]            )
14   [NONE]              
15   [SWITCH]            {
15   [NONE]              
16   [NONE]              case
16   [NONE]              bar
16   [NONE]              :
16   [NONE]              
17   [NONE]              FooFunc
17   [FUNC_CALL]         (
17   [NONE]              x
17   [NONE]              ,
17   [NONE]              BarFunc
17   [FUNC_CALL]         (
17   [NONE]              BazFunc
17   [FUNC_CALL]         (
17   [NONE]              clamp
17   [FUNC_CALL]         (
17   [NONE]              x
17   [FUNC_CALL]         )
17   [NONE]              *
17   [NONE]              255.0f
17   [FUNC_CALL]         )
17   [NONE]              ,
17   [NONE]              
18   [NONE]              Round
18   [FUNC_CALL]         (
18   [NONE]              clamp
18   [FUNC_CALL]         (
18   [NONE]              g
18   [FUNC_CALL]         )
18   [NONE]              *
18   [NONE]              255.0f
18   [FUNC_CALL]         )
18   [NONE]              ,
18   [NONE]              
19   [NONE]              Round
19   [FUNC_CALL]         (
19   [NONE]              clamp
19   [FUNC_CALL]         (
19   [NONE]              b
19   [FUNC_CALL]         )
19   [NONE]              *
19   [NONE]              255.0f
19   [FUNC_CALL]         )
19   [NONE]              ,
19   [NONE]              
20   [NONE]              Round
20   [FUNC_CALL]         (
20   [NONE]              clamp
20   [FUNC_CALL]         (
20   [NONE]              a
20   [FUNC_CALL]         )
20   [NONE]              *
20   [NONE]              255.0f
20   [FUNC_CALL]         )
20   [FUNC_CALL]         )
20   [NONE]              ,
20   [NONE]              foo
20   [FUNC_CALL]         )
20   [NONE]              ;
20   [NONE]              
21   [CASE]              return
21   [NONE]              ;
21   [NONE]              
22   [SWITCH]            }
22   [NONE]              
24   [NONE]              switch
24   [SWITCH]            (
24   [NONE]              bar
24   [SWITCH]            )
24   [NONE]              
25   [SWITCH]            {
25   [NONE]              
26   [NONE]              case
26   [NONE]              baz
26   [NONE]              :
26   [NONE]              
27   [NONE]              RETURN_IF_ERROR
27   [FUNC_CALL]         (
27   [NONE]              fooNamespace
27   [NONE]              ::
27   [NONE]              Foo
27   [FUNC_CALL]         (
27   [NONE]              x
27   [NONE]              ->
27   [NONE]              m_Foo
27   [FUNC_CALL]         )
27   [NONE]              .
27   [NONE]              Bar
27   [FUNC_CALL]         (
27   [NONE]              
28   [NONE]              fooNamespace
28   [NONE]              ::
28   [NONE]              fooClien
28   [FUNC_CALL]         (
28   [NONE]              x
28   [NONE]              ->
28   [NONE]              m_Bar
28   [FUNC_CALL]         )
28   [NONE]              ,
28   [NONE]              y
28   [NONE]              ,
28   [NONE]              x
28   [NONE]              ->
28   [NONE]              m_Baz
28   [NONE]              ,
28   [NONE]              &
28   [NONE]              z
28   [NONE]              ,
28   [NONE]              CONSTANT_FOO
28   [FUNC_CALL]         )
28   [NONE]              ,
28   [NONE]              false
28   [FUNC_CALL]         )
28   [NONE]              
29   [NONE]              break
29   [NONE]              ;
29   [NONE]              
30   [SWITCH]            }
30   [NONE]              
31   [FUNC_DEF]          }
31   [NONE]              