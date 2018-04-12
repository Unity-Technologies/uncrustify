Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              import
1    [NONE]              <Foundation/Foundation.h>
1    [NONE]              
3    [COMMENT_WHOLE]     /* get #of elements in a static array */
3    [NONE]              
4    [PP_IF]             #
4    [NONE]              ifndef
4    [NONE]              NELEM
4    [NONE]              
5    [PP_DEFINE]         #
5    [NONE]              define
5    [NONE]              NELEM
5    [MACRO_FUNC]        (
5    [NONE]              x
5    [MACRO_FUNC]        )
5    [NONE]              (
5    [C_CAST]            (
5    [C_CAST]            int
5    [C_CAST]            )
5    [NONE]              (
5    [NONE]              sizeof
5    [TYPE_CAST]         (
5    [NONE]              x
5    [TYPE_CAST]         )
5    [NONE]              /
5    [NONE]              sizeof
5    [TYPE_CAST]         (
5    [C_CAST]            (
5    [C_CAST]            x
5    [C_CAST]            )
5    [NONE]              [
5    [NONE]              0
5    [NONE]              ]
5    [TYPE_CAST]         )
5    [NONE]              )
5    [NONE]              )
5    [NONE]              
6    [PP_ENDIF]          #
6    [NONE]              endif
6    [NONE]              
8    [FUNC_DEF]          int
8    [NONE]              main
8    [FUNC_DEF]          (
8    [NONE]              void
8    [FUNC_DEF]          )
8    [FUNC_DEF]          {
8    [NONE]              
9    [NONE]              return
9    [NONE]              0
9    [NONE]              ;
9    [NONE]              
10   [FUNC_DEF]          }
10   [NONE]              