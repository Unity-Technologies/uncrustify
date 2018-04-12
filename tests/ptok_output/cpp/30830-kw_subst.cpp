Line [Parent]            Text
1    [COMMENT_WHOLE]     /**␤ * @file kw_subst.cpp␤ * Description␤ *␤ * $Id$␤ */
6    [NONE]              
1    [PP_INCLUDE]        #
1    [NONE]              include
1    [NONE]              <string>
1    [NONE]              
1    [COMMENT_WHOLE]     /**␤ * CLASS:  CFoo␤ * TODO: DESCRIPTION␤ */
4    [NONE]              
3    [NONE]              class
3    [CLASS]             CFoo
3    [NONE]              
4    [CLASS]             {
4    [NONE]              
5    [FUNC_PROTO]        int
5    [NONE]              foo1
5    [FUNC_PROTO]        (
5    [NONE]              int
5    [NONE]              arg
5    [FUNC_PROTO]        )
5    [FUNC_PROTO]        ;
5    [NONE]              
6    [FUNC_PROTO]        int
6    [NONE]              foo2
6    [FUNC_PROTO]        (
6    [FUNC_PROTO]        )
6    [FUNC_PROTO]        ;
6    [NONE]              
1    [COMMENT_WHOLE]     /**␤ * CLASS:  CFoo␤ * METHOD: foo3␤ * TODO: DESCRIPTION␤ * @param ch TODO␤ * ��@param xx TO␤ * O␤@return TODO␤ */
6    [NONE]              
7    [FUNC_DEF]          int
7    [NONE]              foo3
7    [FUNC_DEF]          (
7    [NONE]              char
7    [NONE]              ch
7    [NONE]              ,
7    [NONE]              int
7    [NONE]              xx
7    [FUNC_DEF]          )
7    [NONE]              
8    [FUNC_DEF]          {
8    [NONE]              
9    [FUNC_DEF]          }
9    [NONE]              
10   [CLASS]             }
10   [CLASS]             ;
10   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * CLASS:  CFoo␤ * METHOD: foo1␤ * TODO: DESCRIPTION␤ * @param arg TODO␤ * ��@param arg2 TO␤ * O␤@return TODO␤ */
6    [NONE]              
12   [FUNC_DEF]          int
12   [FUNC_DEF]          CFoo
12   [FUNC_DEF]          ::
12   [NONE]              foo1
12   [FUNC_DEF]          (
12   [NONE]              int
12   [NONE]              arg
12   [NONE]              ,
12   [NONE]              int
12   [NONE]              arg2
12   [FUNC_DEF]          )
12   [NONE]              
13   [FUNC_DEF]          {
13   [NONE]              
14   [FUNC_DEF]          }
14   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * CLASS:  CFoo␤ * METHOD: foo2␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
6    [NONE]              
16   [FUNC_DEF]          int
16   [FUNC_DEF]          CFoo
16   [FUNC_DEF]          ::
16   [NONE]              foo2
16   [FUNC_DEF]          (
16   [FUNC_DEF]          )
16   [NONE]              
17   [FUNC_DEF]          {
17   [NONE]              
18   [FUNC_DEF]          }
18   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * CLASS:  CFoo␤ * METHOD: operator +␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
6    [NONE]              
20   [FUNC_DEF]          int
20   [FUNC_DEF]          CFoo
20   [FUNC_DEF]          ::
20   [FUNC_DEF]          operator
20   [OPERATOR]          +
20   [FUNC_DEF]          (
20   [FUNC_DEF]          )
20   [NONE]              
21   [FUNC_DEF]          {
21   [NONE]              
22   [FUNC_DEF]          }
22   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * CLASS:  $(fclass)␤ * METHOD: func␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
6    [NONE]              
24   [FUNC_DEF]          map
24   [TEMPLATE]          <
24   [NONE]              string
24   [NONE]              ,
24   [NONE]              int
24   [TEMPLATE]          >
24   [NONE]              func
24   [FUNC_DEF]          (
24   [FUNC_DEF]          )
24   [NONE]              
25   [FUNC_DEF]          {
25   [NONE]              
26   [COMMENT_WHOLE]     // some codes
26   [NONE]              
27   [FUNC_DEF]          }
27   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * CLASS:  $(fclass)␤ * METHOD: some_func␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
6    [NONE]              
29   [FUNC_DEF]          int
29   [NONE]              some_func
29   [FUNC_DEF]          (
29   [NONE]              void
29   [FUNC_DEF]          )
29   [NONE]              
30   [FUNC_DEF]          {
30   [NONE]              
31   [FUNC_DEF]          }
31   [NONE]              