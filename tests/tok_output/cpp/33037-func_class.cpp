Line [Token]             Text
1    [COMMENT_MULTI]     /**␤ * Reverse the bytes in 32-bit chunks.␤ */
3    [NEWLINE]           
4    [TYPE]              void
4    [TYPE]              MD5
4    [DC_MEMBER]         ::
4    [FUNC_DEF]          reverse_u32
4    [FPAREN_OPEN]       (
4    [TYPE]              UINT8
4    [PTR_TYPE]          *
4    [WORD]              buf
4    [COMMA]             ,
4    [TYPE]              int
4    [WORD]              n_u32
4    [FPAREN_CLOSE]      )
4    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [TYPE]              UINT8
6    [WORD]              tmp
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [BRACE_CLOSE]       }
7    [NEWLINE]           
9    [TYPE]              MD5
9    [DC_MEMBER]         ::
9    [FUNC_CLASS_DEF]    MD5
9    [FPAREN_OPEN]       (
9    [FPAREN_CLOSE]      )
9    [NEWLINE]           
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [WORD]              m_buf
11   [SQUARE_OPEN]       [
11   [NUMBER]            0
11   [SQUARE_CLOSE]      ]
11   [ASSIGN]            =
11   [NUMBER]            0x01020304
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [NEWLINE]           
14   [CLASS]             class
14   [TYPE]              AlignStack
14   [NEWLINE]           
15   [BRACE_OPEN]        {
15   [NEWLINE]           
16   [PRIVATE]           public
16   [PRIVATE_COLON]     :
16   [NEWLINE]           
17   [TYPE]              bool
17   [WORD]              m_skip_first
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [FUNC_CLASS_DEF]    AlignStack
18   [FPAREN_OPEN]       (
18   [FPAREN_CLOSE]      )
18   [NEWLINE]           
19   [BRACE_OPEN]        {
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [NEWLINE]           
21   [DESTRUCTOR]        ~
21   [FUNC_CLASS_DEF]    AlignStack
21   [FPAREN_OPEN]       (
21   [FPAREN_CLOSE]      )
21   [NEWLINE]           
22   [BRACE_OPEN]        {
22   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           
24   [TYPE]              void
24   [FUNC_DEF]          End
24   [FPAREN_OPEN]       (
24   [FPAREN_CLOSE]      )
24   [NEWLINE]           
25   [BRACE_OPEN]        {
25   [NEWLINE]           
26   [BRACE_CLOSE]       }
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [SEMICOLON]         ;
27   [NEWLINE]           