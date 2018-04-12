Line [Parent]            Text
1    [FUNC_DEF]          int
1    [NONE]              main
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
1    [FUNC_DEF]          {
1    [NONE]              
2    [PP_IF]             #
2    [NONE]              if
2    [NONE]              WANT_TO_COMPILE_THIS
2    [NONE]              
3    [NONE]              gtkwidget
3    [NONE]              .
3    [NONE]              clicked
3    [NONE]              .
3    [NONE]              connect
3    [FUNC_CALL]         (
3    [NONE]              (
3    [NONE]              widdget
3    [NONE]              )
3    [NONE]              =>
3    [NONE]              {
3    [NONE]              message
3    [FUNC_CALL]         (
3    [NONE]              "Clicked"
3    [FUNC_CALL]         )
3    [NONE]              ;
3    [NONE]              
3    [NONE]              }
3    [FUNC_CALL]         )
3    [NONE]              ;
3    [NONE]              
4    [PP_ELSE]           #
4    [NONE]              else
4    [NONE]              
5    [NONE]              gtkwidget
5    [NONE]              .
5    [NONE]              enabled
5    [NONE]              .
5    [NONE]              connect
5    [FUNC_CALL]         (
5    [NONE]              (
5    [NONE]              widdget
5    [NONE]              )
5    [NONE]              =>
5    [NONE]              {
5    [NONE]              
6    [NONE]              message
6    [FUNC_CALL]         (
6    [NONE]              "Clicked"
6    [FUNC_CALL]         )
6    [NONE]              ;
6    [NONE]              
7    [NONE]              }
7    [FUNC_CALL]         )
7    [NONE]              ;
7    [NONE]              
8    [PP_ENDIF]          #
8    [NONE]              endif
8    [NONE]              
9    [NONE]              return
9    [RETURN]            (
9    [NONE]              0
9    [RETURN]            )
9    [NONE]              ;
9    [NONE]              
10   [FUNC_DEF]          }
10   [NONE]              