Line [Parent]            Text
1    [COMMENT_WHOLE]     /**␤ * this is a really tough case - perhaps we shouldn't keep any #if crap␤ * unless they all end with the same stack?␤ */
4    [NONE]              
5    [FUNC_DEF]          void
5    [NONE]              foo
5    [FUNC_DEF]          (
5    [NONE]              void
5    [FUNC_DEF]          )
5    [NONE]              
6    [FUNC_DEF]          {
6    [NONE]              
7    [NONE]              int
7    [NONE]              a
7    [NONE]              ;
7    [NONE]              
8    [PP_IF]             #
8    [NONE]              ifdef
8    [NONE]              CONFIG_BLK_DEV_INITRD
8    [NONE]              
9    [NONE]              if
9    [IF]                (
9    [NONE]              initrd_start
9    [IF]                )
9    [NONE]              
9    [IF]                {
9    [NONE]              
10   [NONE]              ROOT_DEV
10   [NONE]              =
10   [NONE]              Root_RAM0
10   [NONE]              ;
10   [NONE]              
10   [IF]                }
10   [NONE]              
11   [PP_ELSE]           #
11   [NONE]              elif
11   [NONE]              defined
11   [NONE]              (
11   [NONE]              CONFIG_ROOT_NFS
11   [NONE]              )
11   [NONE]              
12   [NONE]              ROOT_DEV
12   [NONE]              =
12   [NONE]              Root_NFS
12   [NONE]              ;
12   [NONE]              
13   [PP_ELSE]           #
13   [NONE]              elif
13   [NONE]              defined
13   [NONE]              (
13   [NONE]              CONFIG_BLK_DEV_IDEDISK
13   [NONE]              )
13   [NONE]              
14   [NONE]              ROOT_DEV
14   [NONE]              =
14   [NONE]              Root_HDA1
14   [NONE]              ;
14   [NONE]              
15   [PP_ELSE]           #
15   [NONE]              else
15   [NONE]              
16   [NONE]              ROOT_DEV
16   [NONE]              =
16   [NONE]              Root_SDA1
16   [NONE]              ;
16   [NONE]              
17   [PP_ENDIF]          #
17   [NONE]              endif
17   [NONE]              
18   [NONE]              return
18   [NONE]              ;
18   [NONE]              
19   [FUNC_DEF]          }
19   [NONE]              