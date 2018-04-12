Line [Token]             Text
1    [COMMENT_MULTI]     /**␤ * Some file header comment thingy.␤ */
3    [NEWLINE]           
4    [PREPROC]           #
4    [PP_IF]             ifndef
4    [WORD]              SOME_H_INCLUDED
4    [NEWLINE]           
5    [PREPROC]           #
5    [PP_DEFINE]         define
5    [MACRO]             SOME_H_INCLUDED
5    [NEWLINE]           
7    [PREPROC]           #
7    [PP_INCLUDE]        include
7    [PREPROC_BODY]      "Somefile.h"
7    [NEWLINE]           
9    [PREPROC]           #
9    [PP_DEFINE]         define
9    [MACRO]             SOMEMACRO
9    [PAREN_OPEN]        (
9    [NUMBER]            1
9    [ARITH]             +
9    [NUMBER]            4
9    [PAREN_CLOSE]       )
9    [NEWLINE]           
11   [PREPROC]           #
11   [PP_IF]             ifdef
11   [WORD]              WIN32
11   [NEWLINE]           
13   [PREPROC]           #
13   [PP_INCLUDE]        include
13   [PREPROC_BODY]      "windows_compat.h"
13   [NEWLINE]           
15   [PREPROC]           #
15   [PP_ELSE]           else
15   [COMMENT]           /* not WIN32 */
15   [NEWLINE]           
17   [PREPROC]           #
17   [PP_IF]             if
17   [PP_DEFINED]        defined
17   [WORD]              HAVE_STDINT_H
17   [NEWLINE]           
18   [PREPROC]           #
18   [PP_INCLUDE]        include
18   [PREPROC_BODY]      <stdint.h>
18   [NEWLINE]           
19   [PREPROC]           #
19   [PP_ELSE]           elif
19   [PP_DEFINED]        defined
19   [WORD]              HAVE_INTTYPES_H
19   [NEWLINE]           
20   [PREPROC]           #
20   [PP_INCLUDE]        include
20   [PREPROC_BODY]      <inttypes.h>
20   [NEWLINE]           
21   [PREPROC]           #
21   [PP_DEFINE]         define
21   [MACRO]             YOUR_OS_SUCKS
21   [NEWLINE]           
22   [PREPROC]           #
22   [PP_ELSE]           else
22   [NEWLINE]           
23   [PREPROC]           #
23   [PP_OTHER]          error
23   [PREPROC_BODY]      "Don't know where int8_t is defined"
23   [NEWLINE]           
24   [PREPROC]           #
24   [PP_ENDIF]          endif
24   [NEWLINE]           
26   [TYPEDEF]           typedef
26   [TYPE]              uint32_t
26   [TYPE]              UINT32
26   [SEMICOLON]         ;
26   [NEWLINE]           
28   [PREPROC]           #
28   [PP_ENDIF]          endif
28   [COMMENT]           /* ifdef WIN32 */
28   [NEWLINE]           
30   [PREPROC]           #
30   [PP_ENDIF]          endif
30   [COMMENT]           /* SOME_H_INCLUDED */
30   [NEWLINE]           