Line [Token]             Text
1    [COMMENT_MULTI]     /*******************************************************************************//**␍␤ *                                                                                  ␍␤ *  @file        kw_subst.c␍␤ *                                                                                 ␍␤ *  <Description>                        ␍␤ *                                                                                 ␍␤ ***********************************************************************************/
7    [NEWLINE]           
1    [PREPROC]           #
1    [PP_INCLUDE]        include
1    [PREPROC_BODY]      <string>
1    [NEWLINE]           
1    [COMMENT_MULTI]     /***********************************************************************************␍␤ *  foo1 ␍␤ *******************************************************************************//**␍␤ *␍␤ *  <Description>       ␍␤ *␍␤ *  @return TODO ␍␤ *   ␍␤ **********************************************************************************/
9    [NEWLINE]           
3    [TYPE]              int
3    [FUNC_DEF]          foo1
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [BRACE_CLOSE]       }
5    [NEWLINE]           
7    [COMMENT]           /** header comment */
7    [NEWLINE]           
8    [PREPROC]           #
8    [PP_IF]             if
8    [NUMBER]            2
8    [NEWLINE]           
9    [TYPE]              int
9    [FUNC_DEF]          foo2
9    [FPAREN_OPEN]       (
9    [TYPE]              void
9    [FPAREN_CLOSE]      )
9    [NEWLINE]           
10   [BRACE_OPEN]        {
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
12   [PREPROC]           #
12   [PP_ENDIF]          endif
12   [NEWLINE]           
14   [PREPROC]           #
14   [PP_IF]             if
14   [NUMBER]            1
14   [NEWLINE]           
1    [COMMENT_MULTI]     /***********************************************************************************␍␤ *  foo3 ␍␤ *******************************************************************************//**␍␤ *␍␤ *  <Description>       ␍␤ *␍␤ *  @param a TODO ␍␤ *   ␍␤ **********************************************************************************/
9    [NEWLINE]           
15   [TYPE]              void
15   [FUNC_DEF]          foo3
15   [FPAREN_OPEN]       (
15   [TYPE]              int
15   [WORD]              a
15   [FPAREN_CLOSE]      )
15   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
18   [PREPROC]           #
18   [PP_ENDIF]          endif
18   [NEWLINE]           
1    [COMMENT_MULTI]     /***********************************************************************************␍␤ *  foo4 ␍␤ *******************************************************************************//**␍␤ *␍␤ *  <Description>       ␍␤ *␍␤ *  @param a TODO␤ *  ��@param b TO␤ *  O␤@param c ␤ *  ODO␤@return TODO ␍␤ *   ␍␤ **********************************************************************************/
9    [NEWLINE]           
20   [TYPE]              void
20   [PTR_TYPE]          *
20   [FUNC_DEF]          foo4
20   [FPAREN_OPEN]       (
20   [TYPE]              int
20   [WORD]              a
20   [COMMA]             ,
20   [TYPE]              int
20   [WORD]              b
20   [COMMA]             ,
20   [TYPE]              int
20   [WORD]              c
20   [FPAREN_CLOSE]      )
20   [NEWLINE]           
21   [BRACE_OPEN]        {
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
1    [COMMENT_MULTI]     /**␍␤ * CVS History:␍␤ * $Log $␍␤ *␍␤ */
5    [NEWLINE]           