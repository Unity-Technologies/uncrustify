Line [Token]             Text
1    [COMMENT]           /* Advanced Vala Sample Code */
1    [NEWLINE]           
2    [USING]             using
2    [WORD]              GLib
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [QUALIFIER]         public
3    [CLASS]             class
3    [TYPE]              Sample
3    [CLASS_COLON]       :
3    [WORD]              Object
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [QUALIFIER]         public
4    [TYPE]              string
4    [WORD]              name
4    [BRACE_OPEN]        {
4    [GETSET_EMPTY]      get
4    [SEMICOLON]         ;
4    [GETSET_EMPTY]      set
4    [SEMICOLON]         ;
4    [BRACE_CLOSE]       }
4    [NEWLINE]           
5    [QUALIFIER]         public
5    [QUALIFIER]         signal
5    [TYPE]              void
5    [FUNC_PROTO]        foo
5    [FPAREN_OPEN]       (
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [QUALIFIER]         public
6    [FUNC_CLASS_DEF]    Sample
6    [FPAREN_OPEN]       (
6    [CONSTRUCT]         construct
6    [TYPE]              string
6    [NOT]               !
6    [WORD]              name
6    [FPAREN_CLOSE]      )
6    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
8    [QUALIFIER]         public
8    [TYPE]              void
8    [FUNC_DEF]          run
8    [FPAREN_OPEN]       (
8    [FPAREN_CLOSE]      )
8    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [WORD]              foo
9    [ASSIGN]            +=
9    [WORD]              s
9    [LAMBDA]            =>
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [TYPE]              stdout
10   [MEMBER]            .
10   [FUNC_CALL]         printf
10   [FPAREN_OPEN]       (
10   [STRING]            "Lambda expression %s!\n"
10   [COMMA]             ,
10   [WORD]              name
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
13   [COMMENT]           /* Calling lambda expression */
13   [NEWLINE]           
14   [FUNC_CALL]         foo
14   [FPAREN_OPEN]       (
14   [FPAREN_CLOSE]      )
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
16   [QUALIFIER]         static
16   [TYPE]              int
16   [FUNC_DEF]          main
16   [FPAREN_OPEN]       (
16   [TYPE]              string
16   [TSQUARE]           []
16   [WORD]              args
16   [FPAREN_CLOSE]      )
16   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [FOR]               foreach
17   [SPAREN_OPEN]       (
17   [TYPE]              string
17   [WORD]              arg
17   [IN]                in
17   [WORD]              args
17   [SPAREN_CLOSE]      )
17   [NEWLINE]           
17   [BRACE_OPEN]        {
17   [NEWLINE]           
18   [TYPE]              var
18   [WORD]              sample
18   [ASSIGN]            =
18   [NEW]               new
18   [FUNC_CALL]         Sample
18   [FPAREN_OPEN]       (
18   [WORD]              arg
18   [FPAREN_CLOSE]      )
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [TYPE]              sample
19   [MEMBER]            .
19   [FUNC_CALL]         run
19   [FPAREN_OPEN]       (
19   [FPAREN_CLOSE]      )
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [COMMENT_MULTI]     /* Object will automatically be freed␤                      * at the end of the block */
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
23   [RETURN]            return
23   [PAREN_OPEN]        (
23   [NUMBER]            0
23   [PAREN_CLOSE]       )
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [NEWLINE]           
25   [BRACE_CLOSE]       }
25   [NEWLINE]           