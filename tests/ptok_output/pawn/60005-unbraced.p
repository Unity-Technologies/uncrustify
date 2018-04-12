Line [Parent]            Text
1    [NONE]              
2    [NONE]              public
2    [NONE]              eBombPickUp
2    [FUNC_DEF]          (
2    [NONE]              id
2    [FUNC_DEF]          )
2    [NONE]              
3    [FUNC_DEF]          {
3    [NONE]              
3    [NONE]              if
3    [IF]                (
3    [NONE]              BombPickUp
3    [IF]                )
3    [IF]                {
3    [NONE]              
4    [NONE]              announceEvent
4    [FUNC_CALL]         (
4    [NONE]              id
4    [NONE]              ,
4    [NONE]              "PICKED_BOMB"
4    [FUNC_CALL]         )
4    [NONE]              ;
4    [NONE]              
4    [IF]                }
4    [NONE]              
4    [FUNC_DEF]          }
4    [NONE]              
6    [NONE]              stock
6    [NONE]              Float
6    [NONE]              :
6    [NONE]              operator
6    [OPERATOR]          -
6    [FUNC_DEF]          (
6    [NONE]              Float
6    [NONE]              :
6    [NONE]              oper
6    [FUNC_DEF]          )
6    [NONE]              
7    [FUNC_DEF]          {
7    [NONE]              
7    [NONE]              return
7    [NONE]              oper
7    [NONE]              ^
7    [NONE]              Float
7    [NONE]              :
7    [NONE]              (
7    [NONE]              (
7    [NONE]              -
7    [NONE]              1
7    [NONE]              )
7    [NONE]              ^
7    [NONE]              (
7    [NONE]              (
7    [NONE]              -
7    [NONE]              1
7    [NONE]              )
7    [NONE]              /
7    [NONE]              2
7    [NONE]              )
7    [NONE]              )
7    [NONE]              ;
7    [COMMENT_END]       /* IEEE values are sign/magnitude */
7    [NONE]              
7    [FUNC_DEF]          }
7    [NONE]              
9    [NONE]              native
9    [NONE]              Float
9    [NONE]              :
9    [NONE]              floatadd
9    [FUNC_PROTO]        (
9    [NONE]              Float
9    [NONE]              :
9    [NONE]              dividend
9    [NONE]              ,
9    [NONE]              Float
9    [NONE]              :
9    [NONE]              divisor
9    [FUNC_PROTO]        )
9    [FUNC_PROTO]        ;
9    [NONE]              
10   [NONE]              native
10   [NONE]              Result
10   [NONE]              :
10   [NONE]              dbi_query
10   [FUNC_PROTO]        (
10   [NONE]              Sql
10   [NONE]              :
10   [NONE]              _sql
10   [NONE]              ,
10   [NONE]              _query
10   [NONE]              []
10   [NONE]              ,
10   [NONE]              {
10   [NONE]              Float
10   [NONE]              ,
10   [NONE]              _
10   [NONE]              }
10   [NONE]              :
10   [NONE]              ...
10   [FUNC_PROTO]        )
10   [FUNC_PROTO]        ;
10   [NONE]              