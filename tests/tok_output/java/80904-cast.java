Line [Token]             Text
1    [QUALIFIER]         public
1    [CLASS]             class
1    [TYPE]              JavaClass
1    [BRACE_OPEN]        {
1    [NEWLINE]           
2    [QUALIFIER]         private
2    [TYPE]              boolean
2    [FUNC_DEF]          isButtonHit
2    [FPAREN_OPEN]       (
2    [TYPE]              ImageView
2    [WORD]              imageView
2    [COMMA]             ,
2    [TYPE]              int
2    [WORD]              x
2    [COMMA]             ,
2    [TYPE]              int
2    [WORD]              y
2    [FPAREN_CLOSE]      )
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [IF]                if
3    [SPAREN_OPEN]       (
3    [WORD]              imageView
3    [COMPARE]           !=
3    [WORD]              null
3    [SPAREN_CLOSE]      )
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [TYPE]              RelativeLayout
4    [MEMBER]            .
4    [TYPE]              LayoutParams
4    [WORD]              layoutParams
4    [ASSIGN]            =
4    [PAREN_OPEN]        (
4    [TYPE]              RelativeLayout
4    [MEMBER]            .
4    [TYPE]              LayoutParams
4    [PAREN_CLOSE]       )
4    [WORD]              imageView
4    [MEMBER]            .
4    [FUNC_CALL]         getLayoutParams
4    [FPAREN_OPEN]       (
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [TYPE]              Rect
5    [WORD]              buttonRect
5    [ASSIGN]            =
5    [NEW]               new
5    [FUNC_CALL]         Rect
5    [FPAREN_OPEN]       (
5    [PAREN_OPEN]        (
5    [TYPE]              int
5    [PAREN_CLOSE]       )
5    [PAREN_OPEN]        (
5    [WORD]              layoutParams
5    [MEMBER]            .
5    [WORD]              leftMargin
5    [ARITH]             -
5    [WORD]              buttonExtraMargin
5    [PAREN_CLOSE]       )
5    [COMMA]             ,
5    [NEWLINE]           
6    [PAREN_OPEN]        (
6    [TYPE]              int
6    [PAREN_CLOSE]       )
6    [PAREN_OPEN]        (
6    [WORD]              layoutParams
6    [MEMBER]            .
6    [WORD]              topMargin
6    [ARITH]             -
6    [WORD]              buttonExtraMargin
6    [PAREN_CLOSE]       )
6    [COMMA]             ,
6    [NEWLINE]           
7    [PAREN_OPEN]        (
7    [TYPE]              int
7    [PAREN_CLOSE]       )
7    [PAREN_OPEN]        (
7    [WORD]              layoutParams
7    [MEMBER]            .
7    [WORD]              leftMargin
7    [ARITH]             +
7    [WORD]              imageView
7    [MEMBER]            .
7    [FUNC_CALL]         getWidth
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [ARITH]             +
7    [WORD]              buttonExtraMargin
7    [PAREN_CLOSE]       )
7    [COMMA]             ,
7    [NEWLINE]           
8    [PAREN_OPEN]        (
8    [TYPE]              int
8    [PAREN_CLOSE]       )
8    [PAREN_OPEN]        (
8    [WORD]              layoutParams
8    [MEMBER]            .
8    [WORD]              topMargin
8    [ARITH]             +
8    [WORD]              imageView
8    [MEMBER]            .
8    [FUNC_CALL]         getHeight
8    [FPAREN_OPEN]       (
8    [FPAREN_CLOSE]      )
8    [ARITH]             +
8    [WORD]              buttonExtraMargin
8    [PAREN_CLOSE]       )
8    [FPAREN_CLOSE]      )
8    [SEMICOLON]         ;
8    [NEWLINE]           
10   [IF]                if
10   [SPAREN_OPEN]       (
10   [WORD]              buttonRect
10   [MEMBER]            .
10   [FUNC_CALL]         contains
10   [FPAREN_OPEN]       (
10   [WORD]              x
10   [COMMA]             ,
10   [WORD]              y
10   [FPAREN_CLOSE]      )
10   [SPAREN_CLOSE]      )
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [RETURN]            return
11   [WORD]              true
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
15   [TYPE]              Map
15   [ANGLE_OPEN]        <
15   [QUESTION]          ?
15   [COMMA]             ,
15   [QUESTION]          ?
15   [ANGLE_CLOSE]       >
15   [WORD]              map
15   [ASSIGN]            =
15   [PAREN_OPEN]        (
15   [TYPE]              Map
15   [ANGLE_OPEN]        <
15   [QUESTION]          ?
15   [COMMA]             ,
15   [QUESTION]          ?
15   [ANGLE_CLOSE]       >
15   [PAREN_CLOSE]       )
15   [WORD]              object
15   [SEMICOLON]         ;
15   [NEWLINE]           
17   [RETURN]            return
17   [WORD]              false
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [BRACE_CLOSE]       }
18   [NEWLINE]           
20   [ANNOTATION]        @SuppressWarnings
20   [PAREN_OPEN]        (
20   [STRING]            "unchecked"
20   [PAREN_CLOSE]       )
20   [NEWLINE]           
21   [QUALIFIER]         public
21   [QUALIFIER]         static
21   [TYPE]              List
21   [ANGLE_OPEN]        <
21   [TYPE]              Object
21   [ANGLE_CLOSE]       >
21   [FUNC_DEF]          fromJSON
21   [FPAREN_OPEN]       (
21   [TYPE]              JSONArray
21   [WORD]              obj
21   [FPAREN_CLOSE]      )
21   [BRACE_OPEN]        {
21   [NEWLINE]           
22   [RETURN]            return
22   [PAREN_OPEN]        (
22   [TYPE]              List
22   [ANGLE_OPEN]        <
22   [TYPE]              Object
22   [ANGLE_CLOSE]       >
22   [PAREN_CLOSE]       )
22   [FUNC_CALL]         fromJSON
22   [FPAREN_OPEN]       (
22   [PAREN_OPEN]        (
22   [TYPE]              Object
22   [PAREN_CLOSE]       )
22   [WORD]              obj
22   [FPAREN_CLOSE]      )
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [NEWLINE]           