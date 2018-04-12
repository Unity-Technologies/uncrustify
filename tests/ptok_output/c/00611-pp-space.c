Line [Parent]            Text
1    [COMMENT_WHOLE]     /**␤ * Some file header comment thingy.␤ */
3    [NONE]              
4    [PP_IF]             #
4    [NONE]              ifndef
4    [NONE]              SOME_H_INCLUDED
4    [NONE]              
5    [PP_DEFINE]         #
5    [NONE]              define
5    [NONE]              SOME_H_INCLUDED
5    [NONE]              
7    [PP_INCLUDE]        #
7    [NONE]              include
7    [NONE]              "Somefile.h"
7    [NONE]              
9    [PP_DEFINE]         #
9    [NONE]              define
9    [NONE]              SOMEMACRO
9    [NONE]              (
9    [NONE]              1
9    [NONE]              +
9    [NONE]              4
9    [NONE]              )
9    [NONE]              
11   [PP_IF]             #
11   [NONE]              ifdef
11   [NONE]              WIN32
11   [NONE]              
13   [PP_INCLUDE]        #
13   [NONE]              include
13   [NONE]              "windows_compat.h"
13   [NONE]              
15   [PP_ELSE]           #
15   [NONE]              else
15   [COMMENT_END]       /* not WIN32 */
15   [NONE]              
17   [PP_IF]             #
17   [NONE]              if
17   [NONE]              defined
17   [NONE]              HAVE_STDINT_H
17   [NONE]              
18   [PP_INCLUDE]        #
18   [NONE]              include
18   [NONE]              <stdint.h>
18   [NONE]              
19   [PP_ELSE]           #
19   [NONE]              elif
19   [NONE]              defined
19   [NONE]              HAVE_INTTYPES_H
19   [NONE]              
20   [PP_INCLUDE]        #
20   [NONE]              include
20   [NONE]              <inttypes.h>
20   [NONE]              
21   [PP_DEFINE]         #
21   [NONE]              define
21   [NONE]              YOUR_OS_SUCKS
21   [NONE]              
22   [PP_ELSE]           #
22   [NONE]              else
22   [NONE]              
23   [PP_OTHER]          #
23   [NONE]              error
23   [NONE]              "Don't know where int8_t is defined"
23   [NONE]              
24   [PP_ENDIF]          #
24   [NONE]              endif
24   [NONE]              
26   [NONE]              typedef
26   [NONE]              uint32_t
26   [NONE]              UINT32
26   [TYPEDEF]           ;
26   [NONE]              
28   [PP_ENDIF]          #
28   [NONE]              endif
28   [COMMENT_END]       /* ifdef WIN32 */
28   [NONE]              
30   [PP_ENDIF]          #
30   [NONE]              endif
30   [COMMENT_END]       /* SOME_H_INCLUDED */
30   [NONE]              