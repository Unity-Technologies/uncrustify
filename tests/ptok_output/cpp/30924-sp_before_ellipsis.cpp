Line [Parent]            Text
1    [NONE]              
2    [FUNC_PROTO]        void
2    [NONE]              log_fmt
2    [FUNC_PROTO]        (
2    [NONE]              log_sev_t
2    [NONE]              sev
2    [NONE]              ,
2    [NONE]              const
2    [NONE]              char
2    [NONE]              *
2    [NONE]              fmt
2    [NONE]              ,
2    [NONE]              ...
2    [FUNC_PROTO]        )
2    [NONE]              __attribute__
2    [ATTRIBUTE]         (
2    [NONE]              (
2    [NONE]              format
2    [FUNC_CALL]         (
2    [NONE]              printf
2    [NONE]              ,
2    [NONE]              2
2    [NONE]              ,
2    [NONE]              3
2    [FUNC_CALL]         )
2    [NONE]              )
2    [ATTRIBUTE]         )
2    [FUNC_PROTO]        ;
2    [NONE]              
4    [PP_DEFINE]         #
4    [NONE]              define
4    [NONE]              LOG_FMT
4    [MACRO_FUNC]        (
4    [NONE]              sev
4    [NONE]              ,
4    [NONE]              args
4    [NONE]              ...
4    [MACRO_FUNC]        )
4    [NONE]              \
5    [NONE]              do
5    [DO]                {
5    [NONE]              if
5    [IF]                (
5    [NONE]              log_sev_on
5    [FUNC_CALL]         (
5    [NONE]              sev
5    [FUNC_CALL]         )
5    [IF]                )
5    [IF]                {
5    [NONE]              log_fmt
5    [FUNC_CALL]         (
5    [NONE]              sev
5    [NONE]              ,
5    [NONE]              ##
5    [NONE]              args
5    [FUNC_CALL]         )
5    [NONE]              ;
5    [IF]                }
5    [DO]                }
5    [NONE]              while
5    [WHILE_OF_DO]       (
5    [NONE]              0
5    [WHILE_OF_DO]       )
5    [NONE]              
6    [PP_ENDIF]          #
6    [NONE]              endif
6    [NONE]              
8    [FUNC_DEF]          void
8    [NONE]              foo
8    [FUNC_DEF]          (
8    [FUNC_DEF]          )
8    [NONE]              
9    [FUNC_DEF]          {
9    [NONE]              
10   [NONE]              try
10   [TRY]               {
10   [TRY]               }
10   [NONE]              
11   [NONE]              catch
11   [SPAREN_OPEN]       (
11   [NONE]              ...
11   [SPAREN_OPEN]       )
11   [COMMENT_END]       // <== HERE
11   [NONE]              
12   [SPAREN_OPEN]       {
12   [SPAREN_OPEN]       }
12   [NONE]              
13   [FUNC_DEF]          }
13   [NONE]              