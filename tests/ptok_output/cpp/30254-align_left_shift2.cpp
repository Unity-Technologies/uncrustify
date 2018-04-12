Line [Parent]            Text
1    [FUNC_DEF]          void
1    [NONE]              g
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              RLOGD
3    [FUNC_CALL]         (
3    [NONE]              m_log
3    [FUNC_CALL]         )
3    [NONE]              
4    [NONE]              <<
4    [NONE]              "str1"
4    [NONE]              
5    [NONE]              <<
5    [NONE]              var
5    [NONE]              ;
5    [NONE]              
7    [NONE]              if
7    [IF]                (
7    [NONE]              something
7    [IF]                )
7    [IF]                
7    [NONE]              
8    [NONE]              cout
8    [NONE]              <<
8    [NONE]              "blah"
8    [NONE]              ;
8    [IF]                
8    [NONE]              
10   [FUNC_DEF]          }
10   [NONE]              
12   [FUNC_DEF]          void
12   [NONE]              f
12   [FUNC_DEF]          (
12   [FUNC_DEF]          )
12   [NONE]              
13   [FUNC_DEF]          {
13   [NONE]              
14   [NONE]              cout
14   [NONE]              <<
14   [NONE]              something
14   [FUNC_CALL]         (
14   [NONE]              
15   [NONE]              arg
15   [FUNC_CALL]         )
15   [NONE]              ;
15   [NONE]              
16   [NONE]              cout
16   [NONE]              
17   [NONE]              <<
17   [NONE]              "something"
17   [NONE]              ;
17   [NONE]              
18   [NONE]              cout
18   [NONE]              <<
18   [NONE]              
19   [NONE]              "something"
19   [NONE]              ;
19   [NONE]              
21   [NONE]              RLOGD
21   [FUNC_CALL]         (
21   [NONE]              m_log
21   [FUNC_CALL]         )
21   [NONE]              
22   [NONE]              <<
22   [NONE]              "WriteReqSize()"
22   [NONE]              ;
22   [NONE]              
24   [NONE]              RLOGD
24   [FUNC_CALL]         (
24   [NONE]              m_log
24   [FUNC_CALL]         )
24   [NONE]              <<
24   [NONE]              
25   [NONE]              base
25   [NONE]              ::
25   [NONE]              sprintfT
25   [FUNC_CALL]         (
25   [NONE]              
26   [NONE]              "something %u "
26   [NONE]              ,
26   [NONE]              
27   [NONE]              m_pendingAccepts
27   [FUNC_CALL]         )
27   [NONE]              ;
27   [NONE]              
29   [NONE]              RLOGDD
29   [FUNC_CALL]         (
29   [NONE]              m_log
29   [FUNC_CALL]         )
29   [NONE]              <<
29   [NONE]              sprintfT
29   [FUNC_CALL]         (
29   [NONE]              
30   [NONE]              "something id=%u"
30   [NONE]              ,
30   [NONE]              
31   [NONE]              newSocket
31   [NONE]              ->
31   [NONE]              GetId
31   [FUNC_CALL]         (
31   [FUNC_CALL]         )
31   [FUNC_CALL]         )
31   [NONE]              ;
31   [NONE]              
32   [FUNC_DEF]          }
32   [NONE]              