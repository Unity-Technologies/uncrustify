Line [Token]             Text
1    [COMMENT_CPP]       // should be ddd, eee, fff
1    [NEWLINE]           
2    [USING]             using
2    [WORD]              b
2    [MEMBER]            .
2    [WORD]              ddd
2    [SEMICOLON]         ;
2    [NEWLINE]           
4    [USING]             using
4    [WORD]              b
4    [MEMBER]            .
4    [WORD]              eee
4    [SEMICOLON]         ;
4    [NEWLINE]           
3    [USING]             using
3    [WORD]              b
3    [MEMBER]            .
3    [WORD]              fff
3    [SEMICOLON]         ;
3    [NEWLINE]           
6    [COMMENT_CPP]       // should be aaa, ccc
6    [NEWLINE]           
8    [USING]             using
8    [WORD]              aaa
8    [SEMICOLON]         ;
8    [NEWLINE]           
7    [USING]             using
7    [WORD]              ccc
7    [SEMICOLON]         ;
7    [NEWLINE]           
9    [COMMENT_CPP]       // should be just bbb
9    [NEWLINE]           
10   [USING]             using
10   [WORD]              bbb
10   [SEMICOLON]         ;
10   [NEWLINE]           
12   [COMMENT_CPP]       // should not change these, as it can't handle multi-line imports
12   [NEWLINE]           
13   [USING]             using
13   [WORD]              mango
13   [MEMBER]            .
13   [WORD]              ccc
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [USING]             using
14   [WORD]              mango
14   [MEMBER]            .
14   [WORD]              bbb
14   [COMMA]             ,
14   [NEWLINE]           
15   [WORD]              mango
15   [MEMBER]            .
15   [WORD]              aaa
15   [SEMICOLON]         ;
15   [NEWLINE]           
17   [TYPE]              void
17   [FUNC_PROTO]        foo
17   [FPAREN_OPEN]       (
17   [FPAREN_CLOSE]      )
17   [SEMICOLON]         ;
17   [NEWLINE]           