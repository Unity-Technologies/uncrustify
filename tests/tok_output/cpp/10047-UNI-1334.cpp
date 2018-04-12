Line [Token]             Text
1    [COMMENT_CPP]       // This should not be screwing with the trailing backslash and indentation of contents!
1    [NEWLINE]           
2    [COMMENT_CPP]       // unless it's on the first line where it's controlled by sp_before_nl_cont which we have set on add.
2    [NEWLINE]           
3    [COMMENT_CPP]       // Devs should expect misalignment of the nl_cont tokens because we're not messing with the nl_cont from the define body.
3    [NEWLINE]           
5    [PREPROC]           #
5    [PP_DEFINE]         define
5    [MACRO_FUNC]        MY_DEFINE
5    [FPAREN_OPEN]       (
5    [WORD]              param1
5    [COMMA]             ,
5    [WORD]              param2
5    [FPAREN_CLOSE]      )
5    [NL_CONT]           \
6    [PP_IGNORE]         my_long_foo_function(param1);
6    [NL_CONT]           \
7    [PP_IGNORE]         bar(param2);
7    [NEWLINE]           