Line [Token]             Text
1    [TYPE]              int
1    [WORD]              dx
1    [ASSIGN]            =
1    [WORD]              m_ClipBox
1    [MEMBER]            .
1    [FUNC_CALL]         GetWidth
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [ARITH]             *
1    [FUNC_CALL]         GetZoom
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [SEMICOLON]         ;
1    [NEWLINE]           
3    [TYPE]              m_ClipBox
3    [MEMBER]            .
3    [TYPE]              m_Pos
3    [MEMBER]            .
3    [WORD]              y
3    [ASSIGN]            =
3    [WORD]              PaintClipBox
3    [MEMBER]            .
3    [WORD]              y
3    [ARITH]             *
3    [FUNC_CALL]         GetZoom
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
5    [TYPE]              int
5    [PTR_TYPE]          *
5    [WORD]              i
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [TYPE]              char
6    [PTR_TYPE]          *
6    [WORD]              i
6    [SEMICOLON]         ;
6    [NEWLINE]           
8    [TYPE]              int
8    [FUNC_DEF]          MyFunc
8    [FPAREN_OPEN]       (
8    [TYPE]              std
8    [DC_MEMBER]         ::
8    [TYPE]              string
8    [BYREF]             &
8    [WORD]              s
8    [COMMA]             ,
8    [TYPE]              char
8    [PTR_TYPE]          *
8    [FPAREN_CLOSE]      )
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [TYPE]              char
9    [PTR_TYPE]          *
9    [WORD]              c
9    [ASSIGN]            =
9    [TYPE_CAST]         const_cast
9    [ANGLE_OPEN]        <
9    [TYPE]              char
9    [PTR_TYPE]          *
9    [ANGLE_CLOSE]       >
9    [PAREN_OPEN]        (
9    [WORD]              s
9    [MEMBER]            .
9    [FUNC_CALL]         c_str
9    [FPAREN_OPEN]       (
9    [FPAREN_CLOSE]      )
9    [PAREN_CLOSE]       )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
12   [TYPE]              int
12   [FUNC_DEF]          YerFunc
12   [FPAREN_OPEN]       (
12   [TYPE]              std
12   [DC_MEMBER]         ::
12   [TYPE]              string
12   [BYREF]             &
12   [WORD]              s
12   [COMMA]             ,
12   [TYPE]              char
12   [PTR_TYPE]          *
12   [PTR_TYPE]          *
12   [FPAREN_CLOSE]      )
12   [BRACE_OPEN]        {
12   [NEWLINE]           
13   [TYPE]              char
13   [PTR_TYPE]          *
13   [PTR_TYPE]          *
13   [WORD]              c
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [TYPE]              int
14   [WORD]              a
14   [ASSIGN]            =
14   [WORD]              b
14   [SQUARE_OPEN]       [
14   [NUMBER]            0
14   [SQUARE_CLOSE]      ]
14   [ARITH]             *
14   [WORD]              c
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
17   [TYPE]              int
17   [PTR_TYPE]          *
17   [FUNC_PROTO]        X
17   [FPAREN_OPEN]       (
17   [TYPE]              int
17   [PTR_TYPE]          *
17   [WORD]              i
17   [COMMA]             ,
17   [TYPE]              int
17   [PTR_TYPE]          *
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           
19   [TYPE]              int
19   [PTR_TYPE]          *
19   [WORD]              i
19   [ASSIGN]            =
19   [ADDR]              &
19   [WORD]              a
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [TYPE]              int
20   [PTR_TYPE]          *
20   [WORD]              i
20   [ASSIGN]            =
20   [DEREF]             *
20   [WORD]              b
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [TYPE]              int
21   [PTR_TYPE]          *
21   [WORD]              i
21   [ASSIGN]            =
21   [ADDR]              &
21   [DEREF]             *
21   [WORD]              c
21   [SEMICOLON]         ;
21   [NEWLINE]           
23   [TYPE]              int
23   [PTR_TYPE]          *
23   [TYPE]              Aclass
23   [DC_MEMBER]         ::
23   [FUNC_PROTO]        X
23   [FPAREN_OPEN]       (
23   [TYPE]              int
23   [PTR_TYPE]          *
23   [WORD]              i
23   [COMMA]             ,
23   [TYPE]              int
23   [PTR_TYPE]          *
23   [FPAREN_CLOSE]      )
23   [SEMICOLON]         ;
23   [NEWLINE]           
25   [CLASS]             class
25   [TYPE]              Aclass
25   [BRACE_OPEN]        {
25   [NEWLINE]           
26   [TYPE]              int
26   [PTR_TYPE]          *
26   [FUNC_PROTO]        X
26   [FPAREN_OPEN]       (
26   [TYPE]              int
26   [PTR_TYPE]          *
26   [WORD]              i
26   [COMMA]             ,
26   [TYPE]              int
26   [PTR_TYPE]          *
26   [FPAREN_CLOSE]      )
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
28   [EXTERN]            extern
28   [STRING]            "C"
28   [BRACE_OPEN]        {
28   [NEWLINE]           
29   [TYPE]              int
29   [FUNC_PROTO]        foo1
29   [FPAREN_OPEN]       (
29   [TYPE]              int
29   [PTR_TYPE]          *
29   [WORD]              a
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [TYPE]              int
30   [FUNC_PROTO]        foo2
30   [FPAREN_OPEN]       (
30   [TYPE]              sometype
30   [PTR_TYPE]          *
30   [WORD]              a
30   [FPAREN_CLOSE]      )
30   [SEMICOLON]         ;
30   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [NEWLINE]           
32   [TYPE]              int
32   [FUNC_PROTO]        bar1
32   [FPAREN_OPEN]       (
32   [TYPE]              int
32   [PTR_TYPE]          *
32   [WORD]              a
32   [FPAREN_CLOSE]      )
32   [SEMICOLON]         ;
32   [NEWLINE]           
33   [TYPE]              int
33   [FUNC_PROTO]        bar2
33   [FPAREN_OPEN]       (
33   [TYPE]              sometype
33   [PTR_TYPE]          *
33   [WORD]              a
33   [FPAREN_CLOSE]      )
33   [SEMICOLON]         ;
33   [NEWLINE]           
35   [STRUCT]            struct
35   [TYPE]              X
35   [NEWLINE]           
36   [BRACE_OPEN]        {
36   [NEWLINE]           
37   [TYPE]              int
37   [PTR_TYPE]          *
37   [WORD]              a
37   [SEMICOLON]         ;
37   [COMMENT_CPP]       // 3:5
37   [NEWLINE]           
39   [TYPE]              int
39   [FUNC_DEF]          f
39   [FPAREN_OPEN]       (
39   [FPAREN_CLOSE]      )
39   [NEWLINE]           
40   [BRACE_OPEN]        {
40   [NEWLINE]           
41   [RETURN]            return
41   [DEREF]             *
41   [WORD]              b
41   [SEMICOLON]         ;
41   [COMMENT_CPP]       // 7:8
41   [NEWLINE]           
42   [BRACE_CLOSE]       }
42   [NEWLINE]           
43   [TYPE]              int
43   [FUNC_DEF]          g
43   [FPAREN_OPEN]       (
43   [FPAREN_CLOSE]      )
43   [NEWLINE]           
44   [BRACE_OPEN]        {
44   [NEWLINE]           
45   [RETURN]            return
45   [DEREF]             *
45   [WORD]              c
45   [SEMICOLON]         ;
45   [COMMENT_CPP]       // 11:8
45   [NEWLINE]           
46   [BRACE_CLOSE]       }
46   [NEWLINE]           
47   [BRACE_CLOSE]       }
47   [SEMICOLON]         ;
47   [NEWLINE]           
49   [TYPE]              int
49   [PTR_TYPE]          *
49   [QUALIFIER]         const
49   [WORD]              i
49   [SEMICOLON]         ;
49   [NEWLINE]           
50   [TYPE]              int
50   [PTR_TYPE]          *
50   [QUALIFIER]         static
50   [WORD]              i
50   [SEMICOLON]         ;
50   [NEWLINE]           