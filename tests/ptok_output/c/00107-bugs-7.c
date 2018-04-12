Line [Parent]            Text
1    [NONE]              
2    [FUNC_PROTO]        struct
2    [FUNC_PROTO]        somestruct
2    [FUNC_PROTO]        *
2    [NONE]              
3    [NONE]              mult2
3    [FUNC_PROTO]        (
3    [NONE]              int
3    [NONE]              val
3    [FUNC_PROTO]        )
3    [FUNC_PROTO]        ;
3    [NONE]              
5    [FUNC_PROTO]        somestruct
5    [FUNC_PROTO]        *
5    [NONE]              
6    [NONE]              dumb_func
6    [FUNC_PROTO]        (
6    [NONE]              int
6    [NONE]              val
6    [FUNC_PROTO]        )
6    [FUNC_PROTO]        ;
6    [NONE]              
10   [FUNC_DEF]          struct
10   [FUNC_DEF]          somestruct
10   [FUNC_DEF]          *
10   [NONE]              
11   [NONE]              mult2
11   [FUNC_DEF]          (
11   [NONE]              int
11   [NONE]              val
11   [FUNC_DEF]          )
11   [NONE]              
12   [FUNC_DEF]          {
12   [NONE]              
13   [NONE]              int
13   [NONE]              a
13   [NONE]              ;
13   [NONE]              
15   [NONE]              a
15   [NONE]              =
15   [NONE]              val
15   [NONE]              +
15   [NONE]              (
15   [NONE]              foo
15   [NONE]              *
15   [NONE]              bar
15   [NONE]              )
15   [NONE]              ;
15   [NONE]              
17   [NONE]              a
17   [NONE]              =
17   [NONE]              val
17   [NONE]              +
17   [NONE]              (
17   [NONE]              bar
17   [NONE]              )
17   [NONE]              ;
17   [NONE]              
19   [NONE]              a
19   [NONE]              =
19   [NONE]              val
19   [NONE]              +
19   [C_CAST]            (
19   [C_CAST]            CFoo
19   [C_CAST]            ::
19   [C_CAST]            bar_t
19   [C_CAST]            )
19   [NONE]              7
19   [NONE]              ;
19   [NONE]              
21   [NONE]              a
21   [NONE]              =
21   [NONE]              val
21   [NONE]              +
21   [NONE]              (
21   [NONE]              myfoo
21   [NONE]              .
21   [NONE]              size
21   [NONE]              )
21   [NONE]              ;
21   [NONE]              
23   [NONE]              return
23   [RETURN]            (
23   [NONE]              NULL
23   [RETURN]            )
23   [NONE]              ;
23   [NONE]              
24   [FUNC_DEF]          }
24   [NONE]              