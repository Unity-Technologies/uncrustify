Line [Parent]            Text
1    [NONE]              struct
1    [STRUCT]            A
1    [NONE]              
2    [STRUCT]            {
2    [NONE]              
3    [FUNC_PROTO]        virtual
3    [FUNC_PROTO]        void
3    [NONE]              foo
3    [FUNC_PROTO]        (
3    [FUNC_PROTO]        )
3    [FUNC_PROTO]        ;
3    [NONE]              
4    [FUNC_PROTO]        virtual
4    [FUNC_PROTO]        void
4    [NONE]              bar
4    [FUNC_PROTO]        (
4    [FUNC_PROTO]        )
4    [NONE]              =
4    [NONE]              0
4    [FUNC_PROTO]        ;
4    [NONE]              
5    [FUNC_DEF]          virtual
5    [FUNC_DEF]          void
5    [NONE]              baz
5    [FUNC_DEF]          (
5    [FUNC_DEF]          )
5    [FUNC_DEF]          const
5    [FUNC_DEF]          {
5    [NONE]              
6    [FUNC_DEF]          }
6    [NONE]              
7    [STRUCT]            }
7    [STRUCT]            ;
7    [NONE]              
9    [NONE]              struct
9    [STRUCT]            B
9    [STRUCT]            :
9    [NONE]              public
9    [NONE]              A
9    [NONE]              
10   [STRUCT]            {
10   [NONE]              
11   [FUNC_PROTO]        virtual
11   [FUNC_PROTO]        void
11   [NONE]              foo
11   [FUNC_PROTO]        (
11   [FUNC_PROTO]        )
11   [NONE]              override
11   [FUNC_PROTO]        ;
11   [NONE]              
12   [FUNC_DEF]          void
12   [NONE]              bar
12   [FUNC_DEF]          (
12   [FUNC_DEF]          )
12   [FUNC_DEF]          override
12   [FUNC_DEF]          {
12   [NONE]              
13   [FUNC_DEF]          }
13   [NONE]              
14   [FUNC_DEF]          void
14   [NONE]              baz
14   [FUNC_DEF]          (
14   [FUNC_DEF]          )
14   [FUNC_DEF]          const
14   [FUNC_DEF]          override
14   [FUNC_DEF]          {
14   [NONE]              
15   [FUNC_DEF]          }
15   [NONE]              
16   [STRUCT]            }
16   [STRUCT]            ;
16   [NONE]              