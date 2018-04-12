Line [Parent]            Text
1    [PP_OTHER]          #
1    [NONE]              define
1    [NONE]              inline_2 __forceinline
1    [NONE]              
2    [PP_OTHER]          #
2    [NONE]              define
2    [NONE]              inline(i) inline_##i
2    [NONE]              
3    [PP_OTHER]          #
3    [NONE]              define
3    [NONE]              foo(x) inline(2) x()
3    [NONE]              
4    [PP_OTHER]          #
4    [NONE]              define
4    [NONE]              PLD(reg,offset)    pld    [reg, offset]
4    [NONE]              \
5    [NONE]              pld    [reg, offset]
5    [NONE]              \
6    [NONE]              pld     [reg, offset]
6    [NONE]              