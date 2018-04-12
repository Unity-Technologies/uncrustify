Line [Parent]            Text
1    [COMMENT_WHOLE]     /* ctest4 */
1    [NONE]              
2    [FUNC_PROTO]        fm_status
2    [NONE]              fm2000EventHandlingInitialize
2    [FUNC_PROTO]        (
2    [NONE]              fm_int
2    [NONE]              sw
2    [FUNC_PROTO]        )
2    [FUNC_PROTO]        ;
2    [NONE]              
3    [FUNC_PROTO]        fm_status
3    [NONE]              fm2000MacTableOverflowStart
3    [FUNC_PROTO]        (
3    [NONE]              fm_int
3    [NONE]              sw
3    [FUNC_PROTO]        )
3    [FUNC_PROTO]        ;
3    [NONE]              
4    [FUNC_PROTO]        fm_bool
4    [NONE]              fm2000ProcessMATableEntry
4    [FUNC_PROTO]        (
4    [NONE]              fm_mac_table_work_list
4    [NONE]              *
4    [NONE]              pWork
4    [NONE]              ,
4    [NONE]              
5    [NONE]              fm_int
5    [NONE]              sw
5    [NONE]              ,
5    [NONE]              
6    [NONE]              fm_int
6    [NONE]              index
6    [NONE]              ,
6    [NONE]              
7    [NONE]              fm_thread
7    [NONE]              *
7    [NONE]              event_handler
7    [NONE]              ,
7    [NONE]              
8    [NONE]              fm_uint32
8    [NONE]              *
8    [NONE]              numUpdates
8    [NONE]              ,
8    [NONE]              
9    [NONE]              fm_event
9    [NONE]              *
9    [NONE]              *
9    [NONE]              event
9    [FUNC_PROTO]        )
9    [FUNC_PROTO]        ;
9    [NONE]              
10   [FUNC_DEF]          void
10   [NONE]              foo
10   [FUNC_DEF]          (
10   [FUNC_DEF]          )
10   [NONE]              
11   [FUNC_DEF]          {
11   [NONE]              
12   [NONE]              Logger
12   [NONE]              log
12   [NONE]              =
12   [NONE]              new
12   [NONE]              Logger
12   [FUNC_CALL]         (
12   [FUNC_CALL]         )
12   [NONE]              ;
12   [NONE]              
13   [NONE]              Logger
13   [NONE]              log
13   [NONE]              =
13   [NONE]              new
13   [NONE]              Logger
13   [FUNC_CALL]         (
13   [FUNC_CALL]         )
13   [NONE]              ;
13   [NONE]              
15   [NONE]              log
15   [NONE]              .
15   [NONE]              foo
15   [NONE]              .
15   [NONE]              bar
15   [NONE]              =
15   [NONE]              5
15   [NONE]              ;
15   [NONE]              
16   [NONE]              log
16   [NONE]              .
16   [NONE]              narf
16   [NONE]              .
16   [NONE]              sweat
16   [NONE]              =
16   [NONE]              "cat"
16   [NONE]              ;
16   [NONE]              
17   [NONE]              for
17   [FOR]               (
17   [NONE]              i
17   [NONE]              =
17   [NONE]              0
17   [FOR]               ;
17   [NONE]              i
17   [NONE]              <
17   [NONE]              5
17   [FOR]               ;
17   [NONE]              i
17   [NONE]              ++
17   [FOR]               )
17   [NONE]              
17   [FOR]               {
17   [NONE]              
17   [NONE]              bar
17   [FUNC_CALL]         (
17   [NONE]              i
17   [FUNC_CALL]         )
17   [NONE]              ;
17   [NONE]              
17   [FOR]               }
17   [NONE]              
18   [FUNC_DEF]          }
18   [FUNC_DEF]          // foo
18   [NONE]              
19   [FUNC_PROTO]        int
19   [NONE]              this_works
19   [FUNC_PROTO]        (
19   [NONE]              int
19   [NONE]              x
19   [FUNC_PROTO]        )
19   [FUNC_PROTO]        ;
19   [NONE]              
20   [FUNC_PROTO]        int
20   [NONE]              bug
20   [FUNC_PROTO]        (
20   [NONE]              int
20   [FUNC_PROTO]        )
20   [FUNC_PROTO]        ;
20   [COMMENT_END]       // BUG: left-aligned
20   [NONE]              
21   [NONE]              typedef
21   [NONE]              int
21   [NONE]              fooman
21   [TYPEDEF]           ;
21   [NONE]              
22   [NONE]              enum
22   [ENUM]              FLAGS
22   [NONE]              
23   [ENUM]              {
23   [NONE]              
24   [NONE]              FLAGS_decimal
24   [NONE]              =
24   [NONE]              1
24   [NONE]              ,
24   [COMMENT_END]       // decimal
24   [NONE]              
25   [NONE]              FLAGS_unsigned
25   [NONE]              =
25   [NONE]              2
25   [NONE]              ,
25   [COMMENT_END]       // u or U suffix
25   [NONE]              
26   [NONE]              FLAGS_long
26   [NONE]              =
26   [NONE]              4
26   [NONE]              ,
26   [COMMENT_END]       // l or L suffix
26   [NONE]              
27   [ENUM]              }
27   [ENUM]              ;
27   [NONE]              