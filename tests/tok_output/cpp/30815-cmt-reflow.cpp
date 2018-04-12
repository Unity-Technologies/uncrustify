Line [Token]             Text
1    [NEWLINE]           
2    [TYPEDEF]           typedef
2    [ENUM]              enum
2    [TYPE]              stuff
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [WORD]              Value1
4    [ASSIGN]            =
4    [NUMBER]            0x00000400
4    [COMMA]             ,
4    [COMMENT_CPP]       // Just a comment for the value
4    [NEWLINE]           
5    [WORD]              Value2
5    [ASSIGN]            =
5    [NUMBER]            0x00000800
5    [COMMA]             ,
5    [COMMENT_CPP]       // A much longer comment that needs to be truncated to fit within a set character width. In this case, its 80 characters so two truncates are required.
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [TYPE]              JustAnEnum
6    [SEMICOLON]         ;
6    [NEWLINE]           
8    [COMMENT_CPP]       // this is another comment that is meant to exceed the code width so that it can be wrapped
8    [NEWLINE]           
9    [COMMENT_CPP]       // and combined to see how that works.
9    [NEWLINE]           
11   [COMMENT_MULTI]     /* this is another comment that is meant to exceed the code width so that it can be wrapped␤ * and combined to see how that works. */
12   [NEWLINE]           
14   [COMMENT]           /* Line A */
14   [NEWLINE]           
16   [COMMENT]           /* Line 1 */
16   [NEWLINE]           
17   [COMMENT]           /* line 2 */
17   [NEWLINE]           
18   [COMMENT]           /* line 3 */
18   [NEWLINE]           
19   [COMMENT]           /* line 4 */
19   [NEWLINE]           
21   [TYPE]              int
21   [WORD]              cnt
21   [SEMICOLON]         ;
21   [COMMENT]           /* This is a counter variable with a long comment. this should cause the comment to be wrapped. */
21   [NEWLINE]           
23   [COMMENT_MULTI]     /**␤ * Multi-line comment␤ */
25   [NEWLINE]           
26   [TYPE]              void
26   [FUNC_DEF]          foo
26   [FPAREN_OPEN]       (
26   [TYPE]              void
26   [FPAREN_CLOSE]      )
26   [NEWLINE]           
27   [BRACE_OPEN]        {
27   [NEWLINE]           
28   [COMMENT_MULTI]     /**␤ * Multi-line comment␤ */
30   [NEWLINE]           
31   [TYPE]              int
31   [WORD]              idx
31   [SEMICOLON]         ;
31   [NEWLINE]           
32   [COMMENT_MULTI]     /**␤    * Multi-line comment␤    */
34   [NEWLINE]           
35   [BRACE_CLOSE]       }
35   [NEWLINE]           
37   [COMMENT]           /* Start Change #95 */
37   [NEWLINE]           
38   [COMMENT]           /*INITIALIZE Variable(contExtnElgInd); /# Change #61 #/ */
38   [NEWLINE]           
39   [COMMENT]           /*/# Start Change #35 #/ */
39   [NEWLINE]           
41   [COMMENT_MULTI]     /**␤ * OneBigWordThatCannotBeSplitYetExceedsTheCommentWidthSettingSoThatWrappingShouldBeAttempted.␤ */
43   [NEWLINE]           