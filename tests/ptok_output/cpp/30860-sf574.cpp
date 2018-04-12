Line [Parent]            Text
2    [NONE]              class
2    [CLASS]             A
2    [NONE]              :
2    [NONE]              public
2    [NONE]              B
2    [NONE]              
3    [CLASS]             {
3    [NONE]              
4    [FUNC_DEF]          A
4    [FUNC_DEF]          &
4    [FUNC_DEF]          operator
4    [OPERATOR]          =
4    [FUNC_DEF]          (
4    [NONE]              const
4    [NONE]              A
4    [NONE]              &
4    [NONE]              other
4    [FUNC_DEF]          )
4    [NONE]              
4    [FUNC_DEF]          {
4    [NONE]              
5    [NONE]              if
5    [IF]                (
5    [NONE]              this
5    [NONE]              ==
5    [NONE]              &
5    [NONE]              other
5    [IF]                )
5    [IF]                
5    [NONE]              return
5    [NONE]              *
5    [NONE]              this
5    [NONE]              ;
5    [IF]                
5    [NONE]              
6    [FUNC_PROTO]        B
6    [FUNC_PROTO]        ::
6    [FUNC_PROTO]        operator
6    [OPERATOR]          =
6    [FUNC_PROTO]        (
6    [NONE]              other
6    [FUNC_PROTO]        )
6    [FUNC_PROTO]        ;
6    [NONE]              
7    [NONE]              if
7    [IF]                (
7    [NONE]              this
7    [NONE]              ==
7    [NONE]              &
7    [NONE]              other
7    [IF]                )
7    [IF]                
7    [NONE]              return
7    [NONE]              *
7    [NONE]              this
7    [NONE]              ;
7    [IF]                
7    [NONE]              
8    [NONE]              B
8    [NONE]              ::
8    [NONE]              opera
8    [FUNC_CALL]         (
8    [NONE]              other
8    [FUNC_CALL]         )
8    [NONE]              ;
8    [NONE]              
9    [NONE]              copy
9    [FUNC_CALL]         (
9    [NONE]              other
9    [FUNC_CALL]         )
9    [NONE]              ;
9    [NONE]              
10   [NONE]              return
10   [NONE]              *
10   [NONE]              this
10   [NONE]              ;
10   [NONE]              
11   [FUNC_DEF]          }
11   [NONE]              
13   [CLASS]             }
13   [CLASS]             ;
13   [NONE]              