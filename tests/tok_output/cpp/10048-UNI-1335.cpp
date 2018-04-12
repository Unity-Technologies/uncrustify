Line [Token]             Text
1    [COMMENT_CPP]       // Change in Configuration\UnityConfigure.h:
1    [NEWLINE]           
3    [PREPROC]           #
3    [PP_DEFINE]         define
3    [MACRO]             FOO_MACRO
3    [NUMBER]            0
3    [COMMENT_CPP]       /////@TODO: COMMENT?????
3    [NEWLINE]           
4    [COMMENT_CPP]       // ^^^ space removed after 0
4    [NEWLINE]           
6    [COMMENT_CPP]       // Foo\Bar\Baz\Fizz\Test.cpp
6    [NEWLINE]           
8    [PREPROC]           #
8    [PP_DEFINE]         define
8    [MACRO]             BAR_MACRO
8    [WORD]              FOO_BAR_MACRO
8    [COMMENT_CPP]       //FOO_BAR_BAZ_NONE
8    [NEWLINE]           
9    [COMMENT_CPP]       // ^^^ space removed after _MACRO
9    [NEWLINE]           