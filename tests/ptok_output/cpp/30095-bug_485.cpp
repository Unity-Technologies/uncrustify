Line [Parent]            Text
1    [FUNC_DEF]          void
1    [FUNC_DEF]          Tst
1    [FUNC_DEF]          ::
1    [NONE]              test
1    [FUNC_DEF]          (
1    [NONE]              Msg
1    [NONE]              *
1    [NONE]              message_p
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              switch
3    [SWITCH]            (
3    [NONE]              message_p
3    [SWITCH]            )
3    [NONE]              
4    [SWITCH]            {
4    [NONE]              
5    [NONE]              case
5    [NONE]              A
5    [NONE]              :
5    [NONE]              
6    [CASE]              {
6    [NONE]              
7    [NONE]              const
7    [NONE]              table
7    [NONE]              *
7    [NONE]              entry2
7    [NONE]              =
7    [NONE]              findMsg
7    [FUNC_CALL]         (
7    [NONE]              message_p
7    [FUNC_CALL]         )
7    [NONE]              ;
7    [NONE]              
8    [NONE]              table
8    [NONE]              *
8    [NONE]              entry3
8    [NONE]              =
8    [NONE]              findMsg
8    [FUNC_CALL]         (
8    [NONE]              message_p
8    [FUNC_CALL]         )
8    [NONE]              ;
8    [NONE]              
9    [CASE]              }
9    [NONE]              
10   [NONE]              break
10   [NONE]              ;
10   [NONE]              
12   [NONE]              case
12   [NONE]              B
12   [NONE]              :
12   [NONE]              
13   [NONE]              const
13   [NONE]              table
13   [NONE]              *
13   [NONE]              entry2
13   [NONE]              =
13   [NONE]              findMsg
13   [FUNC_CALL]         (
13   [NONE]              message_p
13   [FUNC_CALL]         )
13   [NONE]              ;
13   [NONE]              
14   [NONE]              table
14   [NONE]              *
14   [NONE]              entry3
14   [NONE]              =
14   [NONE]              findMsg
14   [FUNC_CALL]         (
14   [NONE]              message_p
14   [FUNC_CALL]         )
14   [NONE]              ;
14   [NONE]              
15   [NONE]              break
15   [NONE]              ;
15   [NONE]              
17   [NONE]              default
17   [NONE]              :
17   [NONE]              
18   [NONE]              break
18   [NONE]              ;
18   [NONE]              
19   [SWITCH]            }
19   [NONE]              
20   [FUNC_DEF]          }
20   [NONE]              