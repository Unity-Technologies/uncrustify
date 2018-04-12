Line [Parent]            Text
1    [NONE]              
2    [PP_DEFINE]         #
2    [NONE]              define
2    [NONE]              outpsize
2    [NONE]              
3    [PP_DEFINE]         #
3    [NONE]              define
3    [NONE]              some
3    [MACRO_FUNC]        (
3    [NONE]              f
3    [MACRO_FUNC]        )
3    [NONE]              \
4    [NONE]              foo
4    [FUNC_CALL]         (
4    [NONE]              f
4    [FUNC_CALL]         )
4    [NONE]              
6    [NONE]              class
6    [CLASS]             CRC
6    [NONE]              
7    [CLASS]             {
7    [NONE]              
8    [NONE]              public
8    [NONE]              :
8    [NONE]              
9    [NONE]              int
9    [NONE]              foo
9    [NONE]              ;
9    [NONE]              
10   [COMMENT_WHOLE]     // Initial CRC Start Value
10   [NONE]              
11   [PP_DEFINE]         #
11   [NONE]              define
11   [NONE]              24BITCRC
11   [NONE]              (
11   [C_CAST]            (
11   [C_CAST]            ULONG
11   [C_CAST]            )
11   [NONE]              0x00864CFB
11   [NONE]              )
11   [COMMENT_END]       // This line is not aligned with the other lines
11   [NONE]              
12   [NONE]              char
12   [NONE]              ch
12   [NONE]              ;
12   [NONE]              
13   [PP_DEFINE]         #
13   [NONE]              define
13   [NONE]              MULTI
13   [NONE]              LINE
13   [NONE]              DEFINE
13   [NONE]              \
14   [NONE]              in
14   [NONE]              column
14   [NONE]              0
14   [NONE]              \
15   [NONE]              that
15   [NONE]              spans
15   [NONE]              
16   [COMMENT_WHOLE]     //// Operations ////
16   [NONE]              
17   [NONE]              public
17   [NONE]              :
17   [NONE]              
18   [NONE]              ...
18   [NONE]              
19   [CLASS]             }
19   [NONE]              
21   [NONE]              {
21   [NONE]              
22   [PP_IF]             #
22   [NONE]              if
22   [NONE]              defined
22   [NONE]              (
22   [NONE]              WIN32
22   [NONE]              )
22   [NONE]              
23   [NONE]              SYSTEMTIME
23   [NONE]              st
23   [NONE]              ;
23   [NONE]              
24   [NONE]              DWORD
24   [NONE]              ThreadId
24   [NONE]              ;
24   [NONE]              
25   [PP_ELSE]           #
25   [NONE]              else
25   [NONE]              
26   [NONE]              struct
26   [STRUCT]            timeval
26   [STRUCT]            mytv
26   [NONE]              ;
26   [NONE]              
27   [NONE]              struct
27   [STRUCT]            tm
27   [STRUCT]            *
27   [NONE]              mytm
27   [NONE]              ;
27   [NONE]              
28   [NONE]              pid_t
28   [NONE]              ProcessId
28   [NONE]              ;
28   [NONE]              
29   [PP_ENDIF]          #
29   [NONE]              endif
29   [NONE]              
31   [PP_IF]             #
31   [NONE]              if
31   [NONE]              SOME
31   [NONE]              COND
31   [NONE]              
32   [C_CAST]            (
32   [C_CAST]            void
32   [C_CAST]            )
32   [NONE]              loop
32   [NONE]              ;
32   [NONE]              
33   [PP_ENDIF]          #
33   [NONE]              endif
33   [NONE]              
34   [NONE]              }
34   [NONE]              