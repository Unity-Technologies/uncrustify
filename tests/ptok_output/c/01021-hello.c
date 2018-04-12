Line [Parent]            Text
1    [COMMENT_WHOLE]     /*******************************************************************************//**␍␤ *                                                                                  ␍␤ *  @file        hello.c␍␤ *                                                                                 ␍␤ *  <Description>                        ␍␤ *                                                                                 ␍␤ ***********************************************************************************/
7    [NONE]              
1    [PP_INCLUDE]        #
1    [NONE]              include
1    [NONE]              <stdio.h>
1    [NONE]              
1    [COMMENT_WHOLE]     /***********************************************************************************␍␤ *  HelloWorld ␍␤ *******************************************************************************//**␍␤ *␍␤ *  <Description>       ␍␤ *␍␤ *  @param pString TODO ␍␤ *   ␍␤ **********************************************************************************/
9    [NONE]              
3    [FUNC_DEF]          void
3    [NONE]              HelloWorld
3    [FUNC_DEF]          (
3    [NONE]              char
3    [NONE]              *
3    [NONE]              pString
3    [FUNC_DEF]          )
3    [NONE]              
4    [FUNC_DEF]          {
4    [NONE]              
5    [NONE]              printf
5    [FUNC_CALL]         (
5    [NONE]              "%s\n"
5    [NONE]              ,
5    [NONE]              pString
5    [FUNC_CALL]         )
5    [NONE]              ;
5    [NONE]              
6    [FUNC_DEF]          }
6    [COMMENT_END]       /* HelloWorld */
6    [NONE]              
1    [COMMENT_WHOLE]     /***********************************************************************************␍␤ *  main ␍␤ *******************************************************************************//**␍␤ *␍␤ *  <Description>       ␍␤ *␍␤ *  @return TODO ␍␤ *   ␍␤ **********************************************************************************/
9    [NONE]              
8    [FUNC_DEF]          int
8    [NONE]              main
8    [FUNC_DEF]          (
8    [FUNC_DEF]          )
8    [NONE]              
9    [FUNC_DEF]          {
9    [NONE]              
10   [NONE]              HelloWorld
10   [FUNC_CALL]         (
10   [NONE]              "Hello world"
10   [FUNC_CALL]         )
10   [NONE]              ;
10   [NONE]              
12   [NONE]              return
12   [NONE]              0
12   [NONE]              ;
12   [NONE]              
13   [FUNC_DEF]          }
13   [COMMENT_END]       /* main */
13   [NONE]              
1    [COMMENT_WHOLE]     /**␍␤ * CVS History:␍␤ * $Log $␍␤ *␍␤ */
5    [NONE]              