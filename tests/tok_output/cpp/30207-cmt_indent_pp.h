Line [Token]             Text
1    [CLASS]             class
1    [TYPE]              MyClass
1    [CLASS_COLON]       :
1    [QUALIFIER]         public
1    [WORD]              BaseClass
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [COMMENT_CPP]       //@{ BaseClass interface
3    [NEWLINE]           
4    [PREPROC]           #
4    [PP_IF]             if
4    [WORD]              VERY_LONG_AND_COMPLICATED_DEFINE
4    [NEWLINE]           
5    [TYPE]              void
5    [FUNC_PROTO]        foo
5    [FPAREN_OPEN]       (
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [PREPROC]           #
6    [PP_ENDIF]          endif
6    [COMMENT_CPP]       // VERY_LONG_AND_COMPLICATED_DEFINE
6    [NEWLINE]           
7    [COMMENT_CPP]       //@}
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [SEMICOLON]         ;