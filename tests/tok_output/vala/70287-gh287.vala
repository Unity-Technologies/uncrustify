Line [Token]             Text
1    [TYPE]              int
1    [FUNC_DEF]          main
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
1    [BRACE_OPEN]        {
1    [NEWLINE]           
2    [TYPE]              key_press_event
2    [MEMBER]            .
2    [FUNC_CALL]         connect
2    [FPAREN_OPEN]       (
2    [PAREN_OPEN]        (
2    [WORD]              e
2    [PAREN_CLOSE]       )
2    [LAMBDA]            =>
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [SWITCH]            switch
3    [SPAREN_OPEN]       (
3    [WORD]              e
3    [MEMBER]            .
3    [WORD]              keyval
3    [SPAREN_CLOSE]      )
3    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [CASE]              case
4    [WORD]              Gdk
4    [MEMBER]            .
4    [WORD]              Key
4    [MEMBER]            .
4    [NUMBER]            @0
4    [CASE_COLON]        :
4    [NEWLINE]           
5    [IF]                if
5    [SPAREN_OPEN]       (
5    [PAREN_OPEN]        (
5    [WORD]              e
5    [MEMBER]            .
5    [WORD]              state
5    [ARITH]             &
5    [WORD]              Gdk
5    [MEMBER]            .
5    [WORD]              ModifierType
5    [MEMBER]            .
5    [WORD]              CONTROL_MASK
5    [PAREN_CLOSE]       )
5    [COMPARE]           !=
5    [NUMBER]            0
5    [SPAREN_CLOSE]      )
5    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [FUNC_CALL]         action_zoom_default_font
6    [FPAREN_OPEN]       (
6    [FPAREN_CLOSE]      )
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [RETURN]            return
7    [PAREN_OPEN]        (
7    [WORD]              true
7    [PAREN_CLOSE]       )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
10   [BREAK]             break
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [CASE]              case
11   [WORD]              Gdk
11   [MEMBER]            .
11   [WORD]              Key
11   [MEMBER]            .
11   [NUMBER]            @1
11   [CASE_COLON]        :
11   [COMMENT_CPP]       //alt+[1-8]
11   [NEWLINE]           
12   [CASE]              case
12   [WORD]              Gdk
12   [MEMBER]            .
12   [WORD]              Key
12   [MEMBER]            .
12   [NUMBER]            @7
12   [CASE_COLON]        :
12   [NEWLINE]           
13   [CASE]              case
13   [WORD]              Gdk
13   [MEMBER]            .
13   [WORD]              Key
13   [MEMBER]            .
13   [NUMBER]            @8
13   [CASE_COLON]        :
13   [NEWLINE]           
14   [IF]                if
14   [SPAREN_OPEN]       (
14   [PAREN_OPEN]        (
14   [PAREN_OPEN]        (
14   [WORD]              e
14   [MEMBER]            .
14   [WORD]              state
14   [ARITH]             &
14   [WORD]              Gdk
14   [MEMBER]            .
14   [WORD]              ModifierType
14   [MEMBER]            .
14   [WORD]              MOD1_MASK
14   [PAREN_CLOSE]       )
14   [COMPARE]           !=
14   [NUMBER]            0
14   [PAREN_CLOSE]       )
14   [BOOL]              &&
14   [WORD]              settings
14   [MEMBER]            .
14   [WORD]              alt_changes_tab
14   [SPAREN_CLOSE]      )
14   [NEWLINE]           
14   [BRACE_OPEN]        {
14   [NEWLINE]           
15   [TYPE]              var
15   [WORD]              i
15   [ASSIGN]            =
15   [WORD]              e
15   [MEMBER]            .
15   [WORD]              keyval
15   [ARITH]             -
15   [NUMBER]            49
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [IF]                if
16   [SPAREN_OPEN]       (
16   [WORD]              i
16   [COMPARE]           >
16   [WORD]              notebook
16   [MEMBER]            .
16   [WORD]              n_tabs
16   [ARITH]             -
16   [NUMBER]            1
16   [SPAREN_CLOSE]      )
16   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [RETURN]            return
17   [PAREN_OPEN]        (
17   [WORD]              false
17   [PAREN_CLOSE]       )
17   [SEMICOLON]         ;
17   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
19   [TYPE]              notebook
19   [MEMBER]            .
19   [WORD]              current
19   [ASSIGN]            =
19   [WORD]              notebook
19   [MEMBER]            .
19   [FUNC_CALL]         get_tab_by_index
19   [FPAREN_OPEN]       (
19   [PAREN_OPEN]        (
19   [TYPE]              int
19   [PAREN_CLOSE]       )
19   [WORD]              i
19   [FPAREN_CLOSE]      )
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [RETURN]            return
20   [PAREN_OPEN]        (
20   [WORD]              true
20   [PAREN_CLOSE]       )
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [NEWLINE]           
23   [BREAK]             break
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [CASE]              default
24   [CASE_COLON]        :
24   [NEWLINE]           
25   [FUNC_CALL]         assert_not_reached
25   [FPAREN_OPEN]       (
25   [FPAREN_CLOSE]      )
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [BRACE_CLOSE]       }
26   [NEWLINE]           
28   [RETURN]            return
28   [PAREN_OPEN]        (
28   [WORD]              false
28   [PAREN_CLOSE]       )
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [BRACE_CLOSE]       }
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [NEWLINE]           
31   [RETURN]            return
31   [PAREN_OPEN]        (
31   [NUMBER]            0
31   [PAREN_CLOSE]       )
31   [SEMICOLON]         ;
31   [NEWLINE]           
32   [BRACE_CLOSE]       }
32   [NEWLINE]           