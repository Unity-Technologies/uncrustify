Line [Token]             Text
1    [PREPROC]           #
1    [PP_DEFINE]         define
1    [MACRO_FUNC]        SOUNDMANAGERWATCHDOG
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NL_CONT]           \
2    [PP_IGNORE]         SoundManagerWatchDog watchdog
2    [NEWLINE]           
4    [PREPROC]           #
4    [PP_DEFINE]         define
4    [MACRO_FUNC]        CompileTimeAssert
4    [FPAREN_OPEN]       (
4    [WORD]              expression
4    [COMMA]             ,
4    [WORD]              message
4    [FPAREN_CLOSE]      )
4    [NL_CONT]           \
5    [PP_IGNORE]         enum{ CT_ASSERT_HACK_JOIN(ct_assert_, __LINE__) = sizeof(CompileTimeAssertImpl<(expression)>) }
5    [NEWLINE]           