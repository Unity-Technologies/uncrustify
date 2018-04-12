Line [Parent]            Text
1    [NONE]              struct
1    [STRUCT]            X
1    [NONE]              
1    [STRUCT]            {
1    [NONE]              
2    [FUNC_PROTO]        void
2    [FUNC_PROTO]        operator
2    [OPERATOR]          deleteme
2    [FUNC_PROTO]        (
2    [NONE]              void
2    [NONE]              *
2    [FUNC_PROTO]        )
2    [FUNC_PROTO]        ;
2    [NONE]              
3    [FUNC_DEF]          void
3    [NONE]              deallocate
3    [FUNC_DEF]          (
3    [NONE]              int
3    [NONE]              *
3    [NONE]              p
3    [FUNC_DEF]          )
3    [NONE]              
3    [FUNC_DEF]          {
3    [NONE]              
4    [NONE]              operator
4    [OPERATOR]          delete
4    [FUNC_CALL]         (
4    [C_CAST]            (
4    [C_CAST]            void
4    [C_CAST]            *
4    [C_CAST]            )
4    [NONE]              p
4    [FUNC_CALL]         )
4    [NONE]              ;
4    [NONE]              
5    [NONE]              delete
5    [NONE]              (
5    [C_CAST]            (
5    [C_CAST]            void
5    [C_CAST]            *
5    [C_CAST]            )
5    [NONE]              q
5    [NONE]              )
5    [NONE]              ;
5    [NONE]              
6    [FUNC_DEF]          }
6    [NONE]              
7    [STRUCT]            }
7    [STRUCT]            ;
7    [NONE]              
9    [FUNC_DEF]          int
9    [NONE]              f
9    [FUNC_DEF]          (
9    [NONE]              bool
9    [NONE]              b
9    [FUNC_DEF]          )
9    [NONE]              
9    [FUNC_DEF]          {
9    [NONE]              
10   [NONE]              typedef
10   [NONE]              int
10   [NONE]              mytype
10   [TYPEDEF]           ;
10   [NONE]              
11   [NONE]              if
11   [IF]                (
11   [NONE]              b
11   [IF]                )
11   [NONE]              
11   [IF]                {
11   [NONE]              
12   [NONE]              return
12   [RETURN]            (
12   [NONE]              int
12   [CPP_CAST]          (
12   [NONE]              42.0
12   [CPP_CAST]          )
12   [RETURN]            )
12   [NONE]              ;
12   [NONE]              
12   [IF]                }
12   [NONE]              
13   [NONE]              else
13   [NONE]              
13   [ELSE]              {
13   [NONE]              
14   [NONE]              return
14   [RETURN]            (
14   [NONE]              mytype
14   [FUNC_CALL]         (
14   [NONE]              42.0
14   [FUNC_CALL]         )
14   [RETURN]            )
14   [NONE]              ;
14   [NONE]              
14   [ELSE]              }
14   [NONE]              
15   [FUNC_DEF]          }
15   [NONE]              
17   [NONE]              struct
17   [STRUCT]            X
17   [NONE]              
17   [STRUCT]            {
17   [NONE]              
18   [FUNC_DEF]          double
18   [NONE]              f
18   [FUNC_DEF]          (
18   [NONE]              int
18   [NONE]              n
18   [FUNC_DEF]          )
18   [NONE]              
19   [FUNC_DEF]          {
19   [NONE]              
20   [NONE]              return
20   [RETURN]            (
20   [NONE]              double
20   [CPP_CAST]          (
20   [NONE]              n
20   [CPP_CAST]          )
20   [RETURN]            )
20   [NONE]              ;
20   [NONE]              
21   [FUNC_DEF]          }
21   [NONE]              
22   [STRUCT]            }
22   [STRUCT]            ;
22   [NONE]              
24   [FUNC_DEF]          inline
24   [FUNC_DEF]          value_type
24   [FUNC_DEF]          operator
24   [OPERATOR]          ()
24   [FUNC_DEF]          (
24   [FUNC_DEF]          )
24   [FUNC_DEF]          const
24   [NONE]              
25   [FUNC_DEF]          {
25   [NONE]              
26   [NONE]              return
26   [RETURN]            (
26   [NONE]              double
26   [CPP_CAST]          (
26   [NONE]              rnd32
26   [FUNC_CALL]         (
26   [FUNC_CALL]         )
26   [CPP_CAST]          )
26   [NONE]              *
26   [NONE]              (
26   [NONE]              0.5
26   [NONE]              /
26   [NONE]              0x80000000
26   [NONE]              )
26   [RETURN]            )
26   [NONE]              ;
26   [NONE]              
27   [FUNC_DEF]          }
27   [NONE]              