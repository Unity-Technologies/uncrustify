Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        import
1    [PREPROC_BODY]      <Foundation/Foundation.h>
1    [NEWLINE]           
3    [COMMENT]           /* get #of elements in a static array */
3    [NEWLINE]           
4    [PREPROC]           #
4    [PP_IF]             ifndef
4    [WORD]              NELEM
4    [NEWLINE]           
5    [PREPROC]           #
5    [PP_DEFINE]         define
5    [MACRO_FUNC]        NELEM
5    [FPAREN_OPEN]       (
5    [WORD]              x
5    [FPAREN_CLOSE]      )
5    [PAREN_OPEN]        (
5    [PAREN_OPEN]        (
5    [TYPE]              int
5    [PAREN_CLOSE]       )
5    [PAREN_OPEN]        (
5    [SIZEOF]            sizeof
5    [PAREN_OPEN]        (
5    [WORD]              x
5    [PAREN_CLOSE]       )
5    [ARITH]             /
5    [SIZEOF]            sizeof
5    [PAREN_OPEN]        (
5    [PAREN_OPEN]        (
5    [TYPE]              x
5    [PAREN_CLOSE]       )
5    [SQUARE_OPEN]       [
5    [NUMBER]            0
5    [SQUARE_CLOSE]      ]
5    [PAREN_CLOSE]       )
5    [PAREN_CLOSE]       )
5    [PAREN_CLOSE]       )
5    [NEWLINE]           
6    [PREPROC]           #
6    [PP_ENDIF]          endif
6    [NEWLINE]           
8    [TYPE]              int
8    [FUNC_DEF]          main
8    [FPAREN_OPEN]       (
8    [TYPE]              void
8    [FPAREN_CLOSE]      )
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [RETURN]            return
9    [NUMBER]            0
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           