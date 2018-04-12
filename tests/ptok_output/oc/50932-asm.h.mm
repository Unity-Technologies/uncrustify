Line [Parent]            Text
1    [FUNC_DEF]          static
1    [FUNC_DEF]          inline
1    [FUNC_DEF]          void
1    [NONE]              atomic_retain
1    [FUNC_DEF]          (
1    [NONE]              volatile
1    [NONE]              int
1    [NONE]              *
1    [NONE]              p
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [PP_IF]             #
3    [NONE]              if
3    [NONE]              defined
3    [NONE]              (
3    [NONE]              _MSC_VER
3    [NONE]              )
3    [NONE]              
4    [NONE]              _InterlockedIncrement
4    [FUNC_CALL]         (
4    [C_CAST]            (
4    [C_CAST]            LONG
4    [C_CAST]            volatile
4    [C_CAST]            *
4    [C_CAST]            )
4    [NONE]              p
4    [FUNC_CALL]         )
4    [NONE]              ;
4    [NONE]              
5    [PP_ELSE]           #
5    [NONE]              else
5    [NONE]              
6    [NONE]              __asm__
6    [NONE]              (
6    [NONE]              
7    [NONE]              "lock incl  %0\n\t"
7    [NONE]              
8    [NONE]              :
8    [NONE]              "+m"
8    [NONE]              (
8    [NONE]              *
8    [NONE]              p
8    [NONE]              )
8    [NONE]              
9    [NONE]              :
9    [NONE]              
10   [NONE]              :
10   [NONE]              "cc"
10   [NONE]              ,
10   [NONE]              "memory"
10   [NONE]              
11   [NONE]              )
11   [NONE]              ;
11   [NONE]              
12   [PP_ENDIF]          #
12   [NONE]              endif
12   [NONE]              
13   [FUNC_DEF]          }
13   [NONE]              
15   [FUNC_DEF]          static
15   [FUNC_DEF]          inline
15   [FUNC_DEF]          void
15   [NONE]              atomic_thread_fence
15   [FUNC_DEF]          (
15   [NONE]              memory_order_release_t
15   [FUNC_DEF]          )
15   [NONE]              
16   [FUNC_DEF]          {
16   [NONE]              
17   [NONE]              __asm__
17   [NONE]              __volatile__
17   [NONE]              
18   [ASM]               (
18   [NONE]              
19   [NONE]              ASM_LWSYNC
19   [NONE]              :
19   [NONE]              :
19   [NONE]              :
19   [NONE]              "memory"
19   [NONE]              
20   [ASM]               )
20   [ASM]               ;
20   [NONE]              
21   [FUNC_DEF]          }
21   [NONE]              