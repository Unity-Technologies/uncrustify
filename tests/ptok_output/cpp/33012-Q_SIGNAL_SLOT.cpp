Line [Parent]            Text
1    [FUNC_DEF]          bool
1    [FUNC_DEF]          AkonadiServer
1    [FUNC_DEF]          ::
1    [NONE]              init
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              connect
3    [FUNC_CALL]         (
3    [NONE]              watcher
3    [NONE]              ,
3    [NONE]              SIGNAL
3    [FUNC_CALL]         (
3    [NONE]              serviceOwnerChanged
3    [FUNC_CALL]         (
3    [NONE]              QString
3    [NONE]              ,
3    [NONE]              QString
3    [NONE]              ,
3    [NONE]              QString
3    [FUNC_CALL]         )
3    [FUNC_CALL]         )
3    [NONE]              ,
3    [NONE]              
4    [NONE]              this
4    [NONE]              ,
4    [NONE]              SLOT
4    [FUNC_CALL]         (
4    [NONE]              serviceOwnerChanged
4    [FUNC_CALL]         (
4    [NONE]              QString
4    [NONE]              ,
4    [NONE]              QString
4    [NONE]              ,
4    [NONE]              QString
4    [FUNC_CALL]         )
4    [FUNC_CALL]         )
4    [FUNC_CALL]         )
4    [NONE]              ;
4    [NONE]              
5    [NONE]              return
5    [NONE]              true
5    [NONE]              ;
5    [NONE]              
6    [FUNC_DEF]          }
6    [NONE]              
8    [NONE]              connect
8    [FUNC_CALL]         (
8    [NONE]              &
8    [NONE]              mapper
8    [NONE]              ,
8    [NONE]              SIGNAL
8    [FUNC_CALL]         (
8    [NONE]              mapped
8    [FUNC_CALL]         (
8    [NONE]              Q1
8    [NONE]              &
8    [FUNC_CALL]         )
8    [FUNC_CALL]         )
8    [NONE]              ,
8    [NONE]              this
8    [NONE]              ,
8    [NONE]              SLOT
8    [FUNC_CALL]         (
8    [NONE]              onSomeEvent
8    [FUNC_CALL]         (
8    [NONE]              const
8    [NONE]              Q2
8    [NONE]              &
8    [FUNC_CALL]         )
8    [FUNC_CALL]         )
8    [FUNC_CALL]         )
8    [NONE]              ;
8    [NONE]              
10   [NONE]              connect
10   [FUNC_CALL]         (
10   [NONE]              &
10   [NONE]              mapper
10   [NONE]              ,
10   [NONE]              
11   [NONE]              SIGNAL
11   [FUNC_CALL]         (
11   [NONE]              mapped
11   [FUNC_CALL]         (
11   [NONE]              Q1
11   [NONE]              &
11   [FUNC_CALL]         )
11   [FUNC_CALL]         )
11   [NONE]              ,
11   [NONE]              
12   [NONE]              this
12   [NONE]              ,
12   [NONE]              
13   [NONE]              SLOT
13   [FUNC_CALL]         (
13   [NONE]              onSomeEvent
13   [FUNC_CALL]         (
13   [NONE]              const
13   [NONE]              Q2
13   [NONE]              &
13   [FUNC_CALL]         )
13   [FUNC_CALL]         )
13   [FUNC_CALL]         )
13   [NONE]              ;
13   [NONE]              
15   [NONE]              connect
15   [FUNC_CALL]         (
15   [NONE]              &
15   [NONE]              mapper
15   [NONE]              ,
15   [NONE]              
16   [NONE]              SIGNAL
16   [FUNC_CALL]         (
16   [NONE]              mapped
16   [FUNC_CALL]         (
16   [NONE]              Q1
16   [NONE]              &
16   [FUNC_CALL]         )
16   [FUNC_CALL]         )
16   [NONE]              ,
16   [NONE]              
17   [NONE]              this
17   [NONE]              ,
17   [NONE]              
18   [NONE]              SLOT
18   [FUNC_CALL]         (
18   [NONE]              onSomeEvent
18   [FUNC_CALL]         (
18   [NONE]              const
18   [NONE]              Q2
18   [NONE]              &
18   [FUNC_CALL]         )
18   [FUNC_CALL]         )
18   [FUNC_CALL]         )
18   [NONE]              ;
18   [NONE]              