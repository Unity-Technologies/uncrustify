Line [Token]             Text
1    [QUALIFIER]         static
1    [QUALIFIER]         inline
1    [TYPE]              void
1    [FUNC_DEF]          atomic_retain
1    [FPAREN_OPEN]       (
1    [QUALIFIER]         volatile
1    [TYPE]              int
1    [PTR_TYPE]          *
1    [WORD]              p
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [PREPROC]           #
3    [PP_IF]             if
3    [PP_DEFINED]        defined
3    [PAREN_OPEN]        (
3    [WORD]              _MSC_VER
3    [PAREN_CLOSE]       )
3    [NEWLINE]           
4    [FUNC_CALL]         _InterlockedIncrement
4    [FPAREN_OPEN]       (
4    [PAREN_OPEN]        (
4    [TYPE]              LONG
4    [QUALIFIER]         volatile
4    [PTR_TYPE]          *
4    [PAREN_CLOSE]       )
4    [WORD]              p
4    [FPAREN_CLOSE]      )
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [PREPROC]           #
5    [PP_ELSE]           else
5    [NEWLINE]           
6    [ASM]               __asm__
6    [PAREN_OPEN]        (
6    [NEWLINE]           
7    [STRING]            "lock incl  %0\n\t"
7    [NEWLINE]           
8    [COLON]             :
8    [STRING]            "+m"
8    [PAREN_OPEN]        (
8    [DEREF]             *
8    [WORD]              p
8    [PAREN_CLOSE]       )
8    [NEWLINE]           
9    [COLON]             :
9    [NEWLINE]           
10   [COLON]             :
10   [STRING]            "cc"
10   [COMMA]             ,
10   [STRING]            "memory"
10   [NEWLINE]           
11   [PAREN_CLOSE]       )
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [PREPROC]           #
12   [PP_ENDIF]          endif
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
15   [QUALIFIER]         static
15   [QUALIFIER]         inline
15   [TYPE]              void
15   [FUNC_DEF]          atomic_thread_fence
15   [FPAREN_OPEN]       (
15   [TYPE]              memory_order_release_t
15   [FPAREN_CLOSE]      )
15   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [ASM]               __asm__
17   [QUALIFIER]         __volatile__
17   [NEWLINE]           
18   [PAREN_OPEN]        (
18   [NEWLINE]           
19   [WORD]              ASM_LWSYNC
19   [ASM_COLON]         :
19   [ASM_COLON]         :
19   [ASM_COLON]         :
19   [STRING]            "memory"
19   [NEWLINE]           
20   [PAREN_CLOSE]       )
20   [SEMICOLON]         ;
20   [NEWLINE]           
21   [BRACE_CLOSE]       }
21   [NEWLINE]           