Line [Token]             Text
1    [PREPROC]           #
1    [PP_OTHER]          define
1    [PREPROC_BODY]      inline_2 __forceinline
1    [NEWLINE]           
2    [PREPROC]           #
2    [PP_OTHER]          define
2    [PREPROC_BODY]      inline(i) inline_##i
2    [NEWLINE]           
3    [PREPROC]           #
3    [PP_OTHER]          define
3    [PREPROC_BODY]      foo(x) inline(2) x()
3    [NEWLINE]           
4    [PREPROC]           #
4    [PP_OTHER]          define
4    [PREPROC_BODY]      PLD(reg,offset)    pld    [reg, offset]
4    [NL_CONT]           \
5    [PREPROC_BODY]      pld    [reg, offset]
5    [NL_CONT]           \
6    [PREPROC_BODY]      pld     [reg, offset]
6    [NEWLINE]           