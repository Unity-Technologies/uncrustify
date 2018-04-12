Line [Parent]            Text
1    [PP_DEFINE]         #
1    [NONE]              define
1    [NONE]              SOUNDMANAGERWATCHDOG
1    [MACRO_FUNC]        (
1    [MACRO_FUNC]        )
1    [NONE]              \
2    [NONE]              SoundManagerWatchDog watchdog
2    [NONE]              
4    [PP_DEFINE]         #
4    [NONE]              define
4    [NONE]              CompileTimeAssert
4    [MACRO_FUNC]        (
4    [NONE]              expression
4    [NONE]              ,
4    [NONE]              message
4    [MACRO_FUNC]        )
4    [NONE]              \
5    [NONE]              enum{ CT_ASSERT_HACK_JOIN(ct_assert_, __LINE__) = sizeof(CompileTimeAssertImpl<(expression)>) }
5    [NONE]              