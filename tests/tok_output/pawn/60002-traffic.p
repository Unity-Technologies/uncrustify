Line [Token]             Text
1    [COMMENT]           /* traffic light synchronizer, using states in an event-driven model */
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_INCLUDE]        include
2    [PREPROC_BODY]      <time>
2    [NEWLINE]           
3    [FUNC_DEF]          main
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
3    [STATE]             state
3    [TYPE]              green_wait
3    [VSEMICOLON]        ;
3    [NEWLINE]           
3    [BRACE_CLOSE]       }
3    [NEWLINE]           
4    [FUNC_DEF]          @keypressed
4    [FPAREN_OPEN]       (
4    [WORD]              key
4    [FPAREN_CLOSE]      )
4    [ANGLE_OPEN]        <
4    [WORD]              green_wait
4    [ANGLE_CLOSE]       >
4    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
4    [STATE]             state
4    [TYPE]              yellow_wait
4    [VSEMICOLON]        ;
4    [NEWLINE]           
4    [BRACE_CLOSE]       }
4    [NEWLINE]           
5    [FUNC_DEF]          @keypressed
5    [FPAREN_OPEN]       (
5    [WORD]              key
5    [FPAREN_CLOSE]      )
5    [ANGLE_OPEN]        <
5    [WORD]              red_walk
5    [COMMA]             ,
5    [WORD]              red_wait
5    [ANGLE_CLOSE]       >
5    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
5    [STATE]             state
5    [TYPE]              red_walk
5    [VSEMICOLON]        ;
5    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [NEWLINE]           
6    [FUNC_DEF]          @keypressed
6    [FPAREN_OPEN]       (
6    [WORD]              key
6    [FPAREN_CLOSE]      )
6    [ANGLE_OPEN]        <
6    [ANGLE_CLOSE]       >
6    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [COMMENT]           /* fallback */
6    [NEWLINE]           
7    [FUNC_DEF]          @timer
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [ANGLE_OPEN]        <
7    [WORD]              yellow_wait
7    [ANGLE_CLOSE]       >
7    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
7    [STATE]             state
7    [TYPE]              red_walk
7    [VSEMICOLON]        ;
7    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
8    [FUNC_DEF]          @timer
8    [FPAREN_OPEN]       (
8    [FPAREN_CLOSE]      )
8    [ANGLE_OPEN]        <
8    [WORD]              red_walk
8    [ANGLE_CLOSE]       >
8    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
8    [STATE]             state
8    [TYPE]              red_wait
8    [VSEMICOLON]        ;
8    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
9    [FUNC_DEF]          @timer
9    [FPAREN_OPEN]       (
9    [FPAREN_CLOSE]      )
9    [ANGLE_OPEN]        <
9    [WORD]              red_wait
9    [ANGLE_CLOSE]       >
9    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
9    [STATE]             state
9    [TYPE]              green_wait
9    [VSEMICOLON]        ;
9    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
10   [FUNC_DEF]          @timer
10   [FPAREN_OPEN]       (
10   [FPAREN_CLOSE]      )
10   [ANGLE_OPEN]        <
10   [ANGLE_CLOSE]       >
10   [NEWLINE]           
10   [BRACE_OPEN]        {
10   [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [COMMENT]           /* fallback */
10   [NEWLINE]           
11   [FUNC_DEF]          entry
11   [FPAREN_OPEN]       (
11   [FPAREN_CLOSE]      )
11   [ANGLE_OPEN]        <
11   [WORD]              green_wait
11   [ANGLE_CLOSE]       >
11   [NEWLINE]           
12   [BRACE_OPEN]        {
12   [NEWLINE]           
12   [WORD]              print
12   [STRING]            "Green / Don't walk\n"
12   [VSEMICOLON]        ;
12   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [NEWLINE]           
13   [FUNC_DEF]          entry
13   [FPAREN_OPEN]       (
13   [FPAREN_CLOSE]      )
13   [ANGLE_OPEN]        <
13   [WORD]              yellow_wait
13   [ANGLE_CLOSE]       >
13   [NEWLINE]           
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [WORD]              print
15   [STRING]            "Yellow / Don't walk\n"
15   [VSEMICOLON]        ;
15   [NEWLINE]           
16   [WORD]              settimer
16   [NUMBER]            2000
16   [VSEMICOLON]        ;
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
18   [FUNC_DEF]          entry
18   [FPAREN_OPEN]       (
18   [FPAREN_CLOSE]      )
18   [ANGLE_OPEN]        <
18   [WORD]              red_walk
18   [ANGLE_CLOSE]       >
18   [NEWLINE]           
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [WORD]              print
20   [STRING]            "Red / Walk\n"
20   [VSEMICOLON]        ;
20   [NEWLINE]           
21   [WORD]              settimer
21   [NUMBER]            5000
21   [VSEMICOLON]        ;
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
23   [FUNC_DEF]          entry
23   [FPAREN_OPEN]       (
23   [FPAREN_CLOSE]      )
23   [ANGLE_OPEN]        <
23   [WORD]              red_wait
23   [ANGLE_CLOSE]       >
23   [NEWLINE]           
24   [BRACE_OPEN]        {
24   [NEWLINE]           
25   [WORD]              print
25   [STRING]            "Red / Don't walk\n"
25   [VSEMICOLON]        ;
25   [NEWLINE]           
26   [WORD]              settimer
26   [NUMBER]            2000
26   [VSEMICOLON]        ;
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           