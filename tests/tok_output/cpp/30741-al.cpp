Line [Token]             Text
1    [COMMENT]           /* ctest4 */
1    [NEWLINE]           
2    [TYPE]              fm_status
2    [FUNC_PROTO]        fm2000EventHandlingInitialize
2    [FPAREN_OPEN]       (
2    [TYPE]              fm_int
2    [WORD]              sw
2    [FPAREN_CLOSE]      )
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [TYPE]              fm_status
3    [FUNC_PROTO]        fm2000MacTableOverflowStart
3    [FPAREN_OPEN]       (
3    [TYPE]              fm_int
3    [WORD]              sw
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [TYPE]              fm_bool
4    [FUNC_PROTO]        fm2000ProcessMATableEntry
4    [FPAREN_OPEN]       (
4    [TYPE]              fm_mac_table_work_list
4    [PTR_TYPE]          *
4    [WORD]              pWork
4    [COMMA]             ,
4    [NEWLINE]           
5    [TYPE]              fm_int
5    [WORD]              sw
5    [COMMA]             ,
5    [NEWLINE]           
6    [TYPE]              fm_int
6    [WORD]              index
6    [COMMA]             ,
6    [NEWLINE]           
7    [TYPE]              fm_thread
7    [PTR_TYPE]          *
7    [WORD]              event_handler
7    [COMMA]             ,
7    [NEWLINE]           
8    [TYPE]              fm_uint32
8    [PTR_TYPE]          *
8    [WORD]              numUpdates
8    [COMMA]             ,
8    [NEWLINE]           
9    [TYPE]              fm_event
9    [PTR_TYPE]          *
9    [PTR_TYPE]          *
9    [WORD]              event
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [TYPE]              void
10   [FUNC_DEF]          foo
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [TYPE]              Logger
12   [WORD]              log
12   [ASSIGN]            =
12   [NEW]               new
12   [FUNC_CALL]         Logger
12   [FPAREN_OPEN]       (
12   [FPAREN_CLOSE]      )
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [TYPE]              Logger
13   [WORD]              log
13   [ASSIGN]            =
13   [NEW]               new
13   [FUNC_CALL]         Logger
13   [FPAREN_OPEN]       (
13   [FPAREN_CLOSE]      )
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [TYPE]              log
15   [MEMBER]            .
15   [TYPE]              foo
15   [MEMBER]            .
15   [WORD]              bar
15   [ASSIGN]            =
15   [NUMBER]            5
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [TYPE]              log
16   [MEMBER]            .
16   [TYPE]              narf
16   [MEMBER]            .
16   [WORD]              sweat
16   [ASSIGN]            =
16   [STRING]            "cat"
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [FOR]               for
17   [SPAREN_OPEN]       (
17   [WORD]              i
17   [ASSIGN]            =
17   [NUMBER]            0
17   [SEMICOLON]         ;
17   [WORD]              i
17   [COMPARE]           <
17   [NUMBER]            5
17   [SEMICOLON]         ;
17   [WORD]              i
17   [INCDEC_AFTER]      ++
17   [SPAREN_CLOSE]      )
17   [NEWLINE]           
17   [BRACE_OPEN]        {
17   [NEWLINE]           
17   [FUNC_CALL]         bar
17   [FPAREN_OPEN]       (
17   [WORD]              i
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [COMMENT_CPP]       // foo
18   [NEWLINE]           
19   [TYPE]              int
19   [FUNC_PROTO]        this_works
19   [FPAREN_OPEN]       (
19   [TYPE]              int
19   [WORD]              x
19   [FPAREN_CLOSE]      )
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [TYPE]              int
20   [FUNC_PROTO]        bug
20   [FPAREN_OPEN]       (
20   [TYPE]              int
20   [FPAREN_CLOSE]      )
20   [SEMICOLON]         ;
20   [COMMENT_CPP]       // BUG: left-aligned
20   [NEWLINE]           
21   [TYPEDEF]           typedef
21   [TYPE]              int
21   [TYPE]              fooman
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [ENUM]              enum
22   [TYPE]              FLAGS
22   [NEWLINE]           
23   [BRACE_OPEN]        {
23   [NEWLINE]           
24   [WORD]              FLAGS_decimal
24   [ASSIGN]            =
24   [NUMBER]            1
24   [COMMA]             ,
24   [COMMENT_CPP]       // decimal
24   [NEWLINE]           
25   [WORD]              FLAGS_unsigned
25   [ASSIGN]            =
25   [NUMBER]            2
25   [COMMA]             ,
25   [COMMENT_CPP]       // u or U suffix
25   [NEWLINE]           
26   [WORD]              FLAGS_long
26   [ASSIGN]            =
26   [NUMBER]            4
26   [COMMA]             ,
26   [COMMENT_CPP]       // l or L suffix
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [SEMICOLON]         ;
27   [NEWLINE]           