Line [Parent]            Text
1    [NONE]              typedef
1    [NONE]              std
1    [NONE]              ::
1    [NONE]              list
1    [TEMPLATE]          <
1    [NONE]              StreamedData
1    [NONE]              *
1    [TEMPLATE]          >
1    [NONE]              ::
1    [NONE]              iterator
1    [NONE]              iterator
1    [TYPEDEF]           ;
1    [NONE]              
2    [FUNC_DEF]          double
2    [NONE]              foo
2    [FUNC_DEF]          (
2    [FUNC_DEF]          )
2    [NONE]              
3    [FUNC_DEF]          {
3    [NONE]              
4    [NONE]              if
4    [IF]                (
4    [NONE]              a
4    [TEMPLATE]          <
4    [NONE]              bar
4    [FUNC_CALL]         (
4    [FUNC_CALL]         )
4    [TEMPLATE]          >
4    [NONE]              c
4    [IF]                )
4    [NONE]              
5    [IF]                {
5    [NONE]              
6    [NONE]              throw
6    [NONE]              int
6    [FUNC_CALL]         (
6    [FUNC_CALL]         )
6    [NONE]              ;
6    [NONE]              
7    [NONE]              return
7    [RETURN]            (
7    [NONE]              double
7    [FUNC_CALL]         (
7    [FUNC_CALL]         )
7    [RETURN]            )
7    [NONE]              ;
7    [NONE]              
8    [IF]                }
8    [NONE]              
9    [NONE]              call_a_function
9    [FUNC_CALL]         (
9    [NONE]              42
9    [NONE]              ,
9    [NONE]              
10   [NONE]              double
10   [CPP_CAST]          (
10   [NONE]              -
10   [NONE]              1
10   [CPP_CAST]          )
10   [NONE]              ,
10   [NONE]              
11   [NONE]              "charray"
11   [FUNC_CALL]         )
11   [NONE]              ;
11   [NONE]              
12   [NONE]              return
12   [RETURN]            (
12   [NONE]              foo
12   [FUNC_CALL]         (
12   [NONE]              n
12   [FUNC_CALL]         )
12   [RETURN]            )
12   [NONE]              ;
12   [NONE]              
13   [FUNC_DEF]          }
13   [NONE]              