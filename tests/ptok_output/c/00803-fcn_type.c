Line [Parent]            Text
1    [NONE]              typedef
1    [FUNC_TYPE]         void
1    [FUNC_TYPE]         (
1    [NONE]              *
1    [TYPEDEF]           my_fcn_ptr
1    [FUNC_TYPE]         )
1    [FUNC_PROTO]        (
1    [NONE]              char
1    [NONE]              *
1    [NONE]              ,
1    [NONE]              int
1    [FUNC_PROTO]        )
1    [TYPEDEF]           ;
1    [NONE]              
2    [NONE]              typedef
2    [FUNC_TYPE]         const
2    [FUNC_TYPE]         char
2    [FUNC_TYPE]         *
2    [FUNC_TYPE]         (
2    [TYPEDEF]           my_fcn_ptr
2    [FUNC_TYPE]         )
2    [FUNC_PROTO]        (
2    [NONE]              char
2    [NONE]              *
2    [NONE]              ,
2    [NONE]              int
2    [FUNC_PROTO]        )
2    [TYPEDEF]           ;
2    [NONE]              
3    [NONE]              typedef
3    [FUNC_TYPE]         int
3    [FUNC_TYPE]         (
3    [TYPEDEF]           my_fcn_ptr
3    [FUNC_TYPE]         )
3    [FUNC_PROTO]        (
3    [NONE]              char
3    [NONE]              *
3    [NONE]              ,
3    [NONE]              int
3    [FUNC_PROTO]        )
3    [TYPEDEF]           ;
3    [NONE]              
4    [NONE]              typedef
4    [FUNC_TYPE]         struct
4    [FUNC_TYPE]         foo
4    [FUNC_TYPE]         *
4    [FUNC_TYPE]         (
4    [TYPEDEF]           my_fcn_ptr
4    [FUNC_TYPE]         )
4    [FUNC_PROTO]        (
4    [NONE]              char
4    [NONE]              *
4    [NONE]              ,
4    [NONE]              int
4    [FUNC_PROTO]        )
4    [TYPEDEF]           ;
4    [NONE]              
5    [NONE]              typedef
5    [NONE]              enum
5    [NONE]              foo
5    [NONE]              *
5    [NONE]              (
5    [NONE]              *
5    [TYPEDEF]           my_fcn_ptr
5    [NONE]              )
5    [FUNC_CALL]         (
5    [NONE]              char
5    [NONE]              *
5    [NONE]              ,
5    [NONE]              int
5    [FUNC_CALL]         )
5    [TYPEDEF]           ;
5    [NONE]              
6    [NONE]              typedef
6    [FUNC_TYPE]         const
6    [FUNC_TYPE]         struct
6    [NONE]              foo
6    [STRUCT]            *
6    [FUNC_TYPE]         (
6    [NONE]              *
6    [TYPEDEF]           my_fcn_ptr
6    [FUNC_TYPE]         )
6    [FUNC_PROTO]        (
6    [NONE]              char
6    [NONE]              *
6    [NONE]              ,
6    [NONE]              int
6    [FUNC_PROTO]        )
6    [TYPEDEF]           ;
6    [NONE]              
7    [NONE]              typedef
7    [FUNC_TYPE]         BOOL
7    [FUNC_TYPE]         (
7    [TYPEDEF]           my_fcn_ptr
7    [FUNC_TYPE]         )
7    [FUNC_PROTO]        (
7    [NONE]              char
7    [NONE]              *
7    [NONE]              ,
7    [NONE]              int
7    [FUNC_PROTO]        )
7    [TYPEDEF]           ;
7    [NONE]              
8    [NONE]              typedef
8    [FUNC_TYPE]         INT32
8    [FUNC_TYPE]         (
8    [NONE]              *
8    [TYPEDEF]           my_fcn_ptr
8    [FUNC_TYPE]         )
8    [FUNC_PROTO]        (
8    [NONE]              char
8    [NONE]              *
8    [NONE]              ,
8    [NONE]              int
8    [FUNC_PROTO]        )
8    [TYPEDEF]           ;
8    [NONE]              
9    [NONE]              typedef
9    [NONE]              int
9    [NONE]              INT32
9    [TYPEDEF]           ;
9    [NONE]              
10   [NONE]              typedef
10   [NONE]              struct
10   [NONE]              foo
10   [STRUCT]            {
10   [NONE]              
11   [NONE]              int
11   [NONE]              a
11   [NONE]              ;
11   [NONE]              
12   [STRUCT]            }
12   [NONE]              fooey
12   [TYPEDEF]           ;
12   [NONE]              
14   [NONE]              typedef
14   [NONE]              struct
14   [STRUCT]            {
14   [NONE]              
15   [NONE]              int
15   [NONE]              a
15   [NONE]              ;
15   [NONE]              
16   [STRUCT]            }
16   [NONE]              queso
16   [TYPEDEF]           ;
16   [NONE]              
18   [NONE]              struct
18   [STRUCT]            myfoo
18   [STRUCT]            {
18   [NONE]              
19   [NONE]              INT32
19   [NONE]              age
19   [NONE]              ;
19   [NONE]              
20   [FUNC_VAR]          const
20   [FUNC_VAR]          struct
20   [FUNC_VAR]          foo
20   [FUNC_VAR]          *
20   [FUNC_VAR]          (
20   [NONE]              *
20   [NONE]              my_fcn_ptr
20   [FUNC_VAR]          )
20   [FUNC_PROTO]        (
20   [NONE]              char
20   [NONE]              *
20   [NONE]              ,
20   [NONE]              int
20   [FUNC_PROTO]        )
20   [FUNC_VAR]          ;
20   [NONE]              
21   [NONE]              const
21   [NONE]              CHAR
21   [NONE]              *
21   [NONE]              name
21   [NONE]              ;
21   [NONE]              
22   [FUNC_VAR]          MYTYPE
22   [FUNC_VAR]          (
22   [NONE]              *
22   [NONE]              foo
22   [FUNC_VAR]          )
22   [FUNC_PROTO]        (
22   [NONE]              int
22   [NONE]              ,
22   [NONE]              char
22   [FUNC_PROTO]        )
22   [FUNC_VAR]          ;
22   [NONE]              
23   [NONE]              void
23   [NONE]              *
23   [NONE]              user
23   [NONE]              ;
23   [NONE]              
24   [FUNC_VAR]          void
24   [FUNC_VAR]          (
24   [NONE]              *
24   [NONE]              foo
24   [FUNC_VAR]          )
24   [FUNC_PROTO]        (
24   [NONE]              int
24   [NONE]              ,
24   [NONE]              char
24   [FUNC_PROTO]        )
24   [FUNC_VAR]          ;
24   [NONE]              
25   [STRUCT]            }
25   [STRUCT]            ;
25   [NONE]              
27   [FUNC_DEF]          SMU
27   [NONE]              foo
27   [FUNC_DEF]          (
27   [NONE]              void
27   [FUNC_DEF]          )
27   [NONE]              
28   [FUNC_DEF]          {
28   [NONE]              
29   [NONE]              double
29   [NONE]              AAA
29   [NONE]              =
29   [NONE]              1.e-3
29   [NONE]              ,
29   [NONE]              BBB
29   [NONE]              =
29   [NONE]              0.016
29   [NONE]              ,
29   [NONE]              CCC
29   [NONE]              =
29   [NONE]              2
29   [NONE]              *
29   [NONE]              DDD
29   [NONE]              *
29   [NONE]              sqrt
29   [FUNC_CALL]         (
29   [NONE]              EEE
29   [FUNC_CALL]         )
29   [NONE]              ;
29   [NONE]              
30   [NONE]              a
30   [NONE]              =
30   [NONE]              4
30   [NONE]              ;
30   [NONE]              
31   [NONE]              (
31   [NONE]              *
31   [NONE]              ABC
31   [NONE]              )
31   [FUNC_CALL]         (
31   [FUNC_CALL]         )
31   [NONE]              ;
31   [NONE]              
32   [NONE]              return
32   [NONE]              SMUIFY
32   [FUNC_CALL]         (
32   [NONE]              a
32   [FUNC_CALL]         )
32   [NONE]              ;
32   [NONE]              
33   [FUNC_DEF]          }
33   [NONE]              
35   [NONE]              typedef
35   [NONE]              struct
35   [STRUCT]            {
35   [NONE]              
36   [NONE]              void
36   [FUNC_VAR]          (
36   [NONE]              *
36   [NONE]              newObject
36   [FUNC_VAR]          )
36   [FUNC_PROTO]        (
36   [NONE]              const
36   [NONE]              object_info
36   [NONE]              *
36   [NONE]              info
36   [NONE]              ,
36   [NONE]              const
36   [NONE]              IObject
36   [NONE]              *
36   [NONE]              *
36   [NONE]              interface
36   [NONE]              ,
36   [NONE]              struct
36   [NONE]              object_h
36   [STRUCT]            *
36   [NONE]              instance
36   [FUNC_PROTO]        )
36   [NONE]              ;
36   [NONE]              
37   [STRUCT]            }
37   [NONE]              IObjectFactory
37   [TYPEDEF]           ;
37   [NONE]              