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
17   [TYPE]              string
17   [WORD]              sql
17   [ASSIGN]            =
17   [STRING_MULTI]      """SELECT name	"my_name"␤	FROM table␤	WHERE id='4'␤"""
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [TYPE]              var
21   [WORD]              where
21   [ASSIGN]            =
21   [STRING_MULTI]      """ WHERE name LIKE '%blah%␤	"""
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [FOR]               foreach
23   [SPAREN_OPEN]       (
23   [TYPE]              string
23   [WORD]              arg
23   [IN]                in
23   [WORD]              args
23   [SPAREN_CLOSE]      )
23   [NEWLINE]           
23   [BRACE_OPEN]        {
23   [NEWLINE]           
24   [TYPE]              var
24   [WORD]              sample
24   [ASSIGN]            =
24   [NEW]               new
24   [FUNC_CALL]         Sample
24   [FPAREN_OPEN]       (
24   [WORD]              arg
24   [FPAREN_CLOSE]      )
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [TYPE]              sample
25   [MEMBER]            .
25   [FUNC_CALL]         run
25   [FPAREN_OPEN]       (
25   [FPAREN_CLOSE]      )
25   [SEMICOLON]         ;
25   [NEWLINE]           
26   [COMMENT_MULTI]     /* Object will automatically be freed␤                      * at the end of the block␤                      * a	tab	b␤                      * c	tab	d␤                      */
30   [NEWLINE]           
31   [BRACE_CLOSE]       }
31   [NEWLINE]           
32   [RETURN]            return
32   [PAREN_OPEN]        (
32   [NUMBER]            0
32   [PAREN_CLOSE]       )
32   [SEMICOLON]         ;
32   [NEWLINE]           
33   [BRACE_CLOSE]       }
33   [NEWLINE]           
34   [BRACE_CLOSE]       }
34   [NEWLINE]           