Line [Parent]            Text
1    [NONE]              struct
1    [STRUCT]            bar
1    [NONE]              
2    [STRUCT]            {
2    [NONE]              
3    [FUNC_VAR]          void
3    [FUNC_VAR]          (
3    [NONE]              Namespace
3    [NONE]              ::
3    [NONE]              *
3    [NONE]              method
3    [FUNC_VAR]          )
3    [FUNC_PROTO]        (
3    [NONE]              Class
3    [NONE]              &
3    [NONE]              param
3    [FUNC_PROTO]        )
3    [FUNC_VAR]          ;
3    [NONE]              
4    [STRUCT]            }
4    [STRUCT]            ;
4    [NONE]              
6    [FUNC_DEF]          void
6    [FUNC_DEF]          Class
6    [FUNC_DEF]          ::
6    [NONE]              Foo
6    [FUNC_DEF]          (
6    [NONE]              void
6    [FUNC_VAR]          (
6    [NONE]              *
6    [NONE]              callback
6    [FUNC_VAR]          )
6    [FUNC_CALL]         (
6    [NONE]              const
6    [NONE]              Class
6    [NONE]              &
6    [NONE]              entry
6    [FUNC_CALL]         )
6    [FUNC_DEF]          )
6    [NONE]              
7    [FUNC_DEF]          {
7    [NONE]              
8    [FUNC_DEF]          }
8    [NONE]              
10   [FUNC_DEF]          void
10   [NONE]              foo
10   [FUNC_DEF]          (
10   [FUNC_DEF]          )
10   [NONE]              
11   [FUNC_DEF]          {
11   [NONE]              
12   [NONE]              int
12   [NONE]              a
12   [NONE]              =
12   [NONE]              1
12   [NONE]              ;
12   [COMMENT_END]       // if you comment this out, the bug stops reproducing
12   [NONE]              
13   [FUNC_DEF]          }
13   [NONE]              