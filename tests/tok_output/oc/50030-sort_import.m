Line [Token]             Text
1    [COMMENT_CPP]       // should be ddd, eee, fff
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_INCLUDE]        import
2    [PREPROC_BODY]      "ddd"
2    [NEWLINE]           
4    [PREPROC]           #
4    [PP_INCLUDE]        import
4    [PREPROC_BODY]      "eee"
4    [NEWLINE]           
3    [PREPROC]           #
3    [PP_INCLUDE]        import
3    [PREPROC_BODY]      "fff"
3    [NEWLINE]           
6    [COMMENT_CPP]       // should be aaa, ccc
6    [NEWLINE]           
8    [PREPROC]           #
8    [PP_INCLUDE]        import
8    [PREPROC_BODY]      "aaa"
8    [NEWLINE]           
7    [PREPROC]           #
7    [PP_INCLUDE]        import
7    [PREPROC_BODY]      "ccc"
7    [NEWLINE]           
9    [COMMENT_CPP]       // should be just bbb
9    [NEWLINE]           
10   [PREPROC]           #
10   [PP_INCLUDE]        import
10   [PREPROC_BODY]      "bbb"
10   [NEWLINE]           