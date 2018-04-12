Line [Parent]            Text
1    [NONE]              template
1    [TEMPLATE]          <
1    [NONE]              bool
1    [NONE]              a
1    [TEMPLATE]          >
2    [TEMPLATE]          struct
2    [STRUCT]            T
2    [STRUCT]            {
2    [NONE]              
3    [NONE]              typedef
3    [NONE]              int
3    [NONE]              result
3    [TYPEDEF]           ;
3    [NONE]              
4    [STRUCT]            }
4    [STRUCT]            ;
4    [NONE]              
5    [NONE]              template
5    [TEMPLATE]          <
5    [NONE]              bool
5    [NONE]              a
5    [NONE]              ,
5    [NONE]              bool
5    [NONE]              b
5    [TEMPLATE]          >
6    [TEMPLATE]          struct
6    [STRUCT]            X
6    [STRUCT]            {
6    [NONE]              
7    [NONE]              typedef
7    [NONE]              typename
7    [NONE]              T
7    [TEMPLATE]          <
7    [NONE]              a
7    [NONE]              ||
7    [NONE]              b
7    [TEMPLATE]          >
7    [NONE]              ::
7    [NONE]              result
7    [NONE]              result
7    [TYPEDEF]           ;
7    [NONE]              
8    [STRUCT]            }
8    [STRUCT]            ;
8    [NONE]              
10   [NONE]              template
10   [TEMPLATE]          <
10   [NONE]              class
10   [NONE]              T
10   [TEMPLATE]          >
11   [TEMPLATE]          class
11   [CLASS]             new_alloc
11   [CLASS]             {
11   [NONE]              
12   [NONE]              public
12   [NONE]              :
12   [NONE]              
13   [FUNC_DEF]          void
13   [NONE]              deallocate
13   [FUNC_DEF]          (
13   [NONE]              int
13   [NONE]              *
13   [NONE]              p
13   [NONE]              ,
13   [NONE]              int
13   [COMMENT_EMBED]     /*num*/
13   [FUNC_DEF]          )
13   [NONE]              
14   [FUNC_DEF]          {
14   [NONE]              
15   [FUNC_PROTO]        T
15   [FUNC_PROTO]        ::
15   [FUNC_PROTO]        operator
15   [OPERATOR]          delete
15   [FUNC_PROTO]        (
15   [C_CAST]            (
15   [C_CAST]            void
15   [C_CAST]            *
15   [C_CAST]            )
15   [NONE]              p
15   [FUNC_PROTO]        )
15   [FUNC_PROTO]        ;
15   [NONE]              
16   [FUNC_DEF]          }
16   [NONE]              
17   [CLASS]             }
17   [CLASS]             ;
17   [NONE]              
19   [FUNC_DEF]          void
19   [NONE]              test
19   [FUNC_DEF]          (
19   [NONE]              void
19   [FUNC_DEF]          )
19   [NONE]              
20   [FUNC_DEF]          {
20   [NONE]              
21   [NONE]              return
21   [NONE]              x
21   [NONE]              !=
21   [NONE]              0
21   [NONE]              
22   [NONE]              &&
22   [NONE]              x
22   [NONE]              >=
22   [NONE]              1
22   [NONE]              
23   [NONE]              &&
23   [NONE]              x
23   [NONE]              <
23   [NONE]              2
23   [NONE]              
24   [NONE]              &&
24   [NONE]              y
24   [NONE]              >=
24   [NONE]              3
24   [NONE]              
25   [NONE]              &&
25   [NONE]              y
25   [NONE]              <
25   [NONE]              4
25   [NONE]              ;
25   [NONE]              
26   [FUNC_DEF]          }
26   [NONE]              