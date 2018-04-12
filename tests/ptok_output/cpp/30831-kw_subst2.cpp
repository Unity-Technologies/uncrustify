Line [Parent]            Text
1    [COMMENT_WHOLE]     /**␤ * @file kw_subst2.cpp␤ * Description␤ *␤ * $Id$␤ */
6    [NONE]              
1    [PP_INCLUDE]        #
1    [NONE]              include
1    [NONE]              <string>
1    [NONE]              
3    [NONE]              namespace
3    [NAMESPACE]         bar
3    [NONE]              
4    [NAMESPACE]         {
4    [NONE]              
1    [COMMENT_WHOLE]     /**␤ * CLASS:  CFoo␤ * TODO: DESCRIPTION␤ */
4    [NONE]              
6    [NONE]              class
6    [CLASS]             CFoo
6    [NONE]              
7    [CLASS]             {
7    [NONE]              
8    [FUNC_PROTO]        int
8    [NONE]              foo1
8    [FUNC_PROTO]        (
8    [NONE]              int
8    [NONE]              arg
8    [FUNC_PROTO]        )
8    [FUNC_PROTO]        ;
8    [NONE]              
9    [NONE]              private
9    [NONE]              :
9    [NONE]              
1    [COMMENT_WHOLE]     /**␤ * foo2␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
5    [NONE]              
10   [FUNC_DEF]          int
10   [NONE]              foo2
10   [FUNC_DEF]          (
10   [FUNC_DEF]          )
10   [NONE]              
11   [FUNC_DEF]          {
11   [NONE]              
12   [FUNC_DEF]          }
12   [NONE]              
13   [CLASS]             }
13   [CLASS]             ;
13   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * foo1␤ * TODO: DESCRIPTION␤ * @param arg TODO␤ * ��@param arg2 TO␤ * O␤@return TODO␤ */
5    [NONE]              
15   [FUNC_DEF]          int
15   [FUNC_DEF]          CFoo
15   [FUNC_DEF]          ::
15   [NONE]              foo1
15   [FUNC_DEF]          (
15   [NONE]              int
15   [NONE]              arg
15   [NONE]              ,
15   [NONE]              char
15   [NONE]              arg2
15   [FUNC_DEF]          )
15   [NONE]              
16   [FUNC_DEF]          {
16   [NONE]              
17   [FUNC_DEF]          }
17   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * foo2␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
5    [NONE]              
19   [FUNC_DEF]          int
19   [FUNC_DEF]          CFoo
19   [FUNC_DEF]          ::
19   [NONE]              foo2
19   [FUNC_DEF]          (
19   [FUNC_DEF]          )
19   [NONE]              
20   [FUNC_DEF]          {
20   [NONE]              
21   [FUNC_DEF]          }
21   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * operator +␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
5    [NONE]              
23   [FUNC_DEF]          int
23   [FUNC_DEF]          CFoo
23   [FUNC_DEF]          ::
23   [FUNC_DEF]          operator
23   [OPERATOR]          +
23   [FUNC_DEF]          (
23   [FUNC_DEF]          )
23   [NONE]              
24   [FUNC_DEF]          {
24   [NONE]              
25   [FUNC_DEF]          }
25   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * func␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
5    [NONE]              
27   [FUNC_DEF]          map
27   [TEMPLATE]          <
27   [NONE]              string
27   [NONE]              ,
27   [NONE]              int
27   [TEMPLATE]          >
27   [NONE]              func
27   [FUNC_DEF]          (
27   [FUNC_DEF]          )
27   [NONE]              
28   [FUNC_DEF]          {
28   [NONE]              
29   [COMMENT_WHOLE]     // some codes
29   [NONE]              
30   [FUNC_DEF]          }
30   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * some_func␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
5    [NONE]              
32   [FUNC_DEF]          int
32   [NONE]              some_func
32   [FUNC_DEF]          (
32   [NONE]              void
32   [FUNC_DEF]          )
32   [NONE]              
33   [FUNC_DEF]          {
33   [NONE]              
34   [FUNC_DEF]          }
34   [NONE]              
36   [NAMESPACE]         }
36   [NONE]              