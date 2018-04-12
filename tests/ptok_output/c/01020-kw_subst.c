Line [Parent]            Text
1    [COMMENT_WHOLE]     /**␤ * @file kw_subst.c␤ * Description␤ *␤ * $Id$␤ */
6    [NONE]              
1    [PP_INCLUDE]        #
1    [NONE]              include
1    [NONE]              <string>
1    [NONE]              
1    [COMMENT_WHOLE]     /**␤ * foo1␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
5    [NONE]              
3    [FUNC_DEF]          int
3    [NONE]              foo1
3    [FUNC_DEF]          (
3    [FUNC_DEF]          )
3    [NONE]              
4    [FUNC_DEF]          {
4    [NONE]              
5    [FUNC_DEF]          }
5    [NONE]              
7    [COMMENT_WHOLE]     /** header comment */
7    [NONE]              
8    [PP_IF]             #
8    [NONE]              if
8    [NONE]              2
8    [NONE]              
1    [COMMENT_WHOLE]     /**␤ * foo2␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
5    [NONE]              
9    [FUNC_DEF]          int
9    [NONE]              foo2
9    [FUNC_DEF]          (
9    [NONE]              void
9    [FUNC_DEF]          )
9    [NONE]              
10   [FUNC_DEF]          {
10   [NONE]              
11   [FUNC_DEF]          }
11   [NONE]              
12   [PP_ENDIF]          #
12   [NONE]              endif
12   [NONE]              
14   [PP_IF]             #
14   [NONE]              if
14   [NONE]              1
14   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * foo3␤ * TODO: DESCRIPTION␤ * @param a TODO␤ */
5    [NONE]              
15   [FUNC_DEF]          void
15   [NONE]              foo3
15   [FUNC_DEF]          (
15   [NONE]              int
15   [NONE]              a
15   [FUNC_DEF]          )
15   [NONE]              
16   [FUNC_DEF]          {
16   [NONE]              
17   [FUNC_DEF]          }
17   [NONE]              
18   [PP_ENDIF]          #
18   [NONE]              endif
18   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * foo4␤ * TODO: DESCRIPTION␤ * @param a TODO␤ * ��@param b TO␤ * O␤@param c ␤ * ODO␤@return TODO␤ */
5    [NONE]              
20   [FUNC_DEF]          void
20   [FUNC_DEF]          *
20   [NONE]              foo4
20   [FUNC_DEF]          (
20   [NONE]              int
20   [NONE]              a
20   [NONE]              ,
20   [NONE]              int
20   [NONE]              b
20   [NONE]              ,
20   [NONE]              int
20   [NONE]              c
20   [FUNC_DEF]          )
20   [NONE]              
21   [FUNC_DEF]          {
21   [NONE]              
22   [FUNC_DEF]          }
22   [NONE]              