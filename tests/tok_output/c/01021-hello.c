Line [Token]             Text
1    [COMMENT_MULTI]     /*******************************************************************************//**␍␤ *                                                                                  ␍␤ *  @file        hello.c␍␤ *                                                                                 ␍␤ *  <Description>                        ␍␤ *                                                                                 ␍␤ ***********************************************************************************/
7    [NEWLINE]           
1    [PREPROC]           #
1    [PP_INCLUDE]        include
1    [PREPROC_BODY]      <stdio.h>
1    [NEWLINE]           
1    [COMMENT_MULTI]     /***********************************************************************************␍␤ *  HelloWorld ␍␤ *******************************************************************************//**␍␤ *␍␤ *  <Description>       ␍␤ *␍␤ *  @param pString TODO ␍␤ *   ␍␤ **********************************************************************************/
9    [NEWLINE]           
3    [TYPE]              void
3    [FUNC_DEF]          HelloWorld
3    [FPAREN_OPEN]       (
3    [TYPE]              char
3    [PTR_TYPE]          *
3    [WORD]              pString
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [FUNC_CALL]         printf
5    [FPAREN_OPEN]       (
5    [STRING]            "%s\n"
5    [COMMA]             ,
5    [WORD]              pString
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [BRACE_CLOSE]       }
6    [COMMENT]           /* HelloWorld */
6    [NEWLINE]           
1    [COMMENT_MULTI]     /***********************************************************************************␍␤ *  main ␍␤ *******************************************************************************//**␍␤ *␍␤ *  <Description>       ␍␤ *␍␤ *  @return TODO ␍␤ *   ␍␤ **********************************************************************************/
9    [NEWLINE]           
8    [TYPE]              int
8    [FUNC_DEF]          main
8    [FPAREN_OPEN]       (
8    [FPAREN_CLOSE]      )
8    [NEWLINE]           
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [FUNC_CALL]         HelloWorld
10   [FPAREN_OPEN]       (
10   [STRING]            "Hello world"
10   [FPAREN_CLOSE]      )
10   [SEMICOLON]         ;
10   [NEWLINE]           
12   [RETURN]            return
12   [NUMBER]            0
12   [SEMICOLON]         ;
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [COMMENT]           /* main */
13   [NEWLINE]           
1    [COMMENT_MULTI]     /**␍␤ * CVS History:␍␤ * $Log $␍␤ *␍␤ */
5    [NEWLINE]           