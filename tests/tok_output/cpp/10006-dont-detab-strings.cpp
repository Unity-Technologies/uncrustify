Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          f
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [BRACE_OPEN]        {
1    [NEWLINE]           
2    [TYPE]              auto
2    [WORD]              x
2    [ASSIGN]            =
2    [STRING]            "\ttest\t \t \t \t\t...   ???"
2    [SEMICOLON]         ;
2    [NEWLINE]           
3    [COMMENT_CPP]       // *INDENT-OFF*
3    [NEWLINE]           
4    [IGNORED]           	 			auto x = "	test\t 	 	 		...   ???";
4    [NEWLINE]           
5    [COMMENT_CPP]       // *INDENT-ON*
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [NEWLINE]           