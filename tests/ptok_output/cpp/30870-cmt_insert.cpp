Line [Parent]            Text
1    [COMMENT_WHOLE]     /**␤ * @file cmt_insert.cpp␤ * Description␤ *␤ * $Id$␤ */
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
5    [NONE]              CFoo
5    [FUNC_CLASS_PROTO]    (
5    [NONE]              int
5    [NONE]              arg
5    [FUNC_CLASS_PROTO]    )
5    [FUNC_CLASS_PROTO]    ;
5    [NONE]              
6    [NONE]              CFoo
6    [FUNC_CLASS_DEF]    (
6    [NONE]              char
6    [NONE]              arg
6    [FUNC_CLASS_DEF]    )
6    [FUNC_CLASS_DEF]    {
6    [NONE]              
7    [FUNC_CLASS_DEF]    }
7    [NONE]              
8    [NONE]              ~
8    [DESTRUCTOR]        CFoo
8    [FUNC_CLASS_PROTO]    (
8    [FUNC_CLASS_PROTO]    )
8    [FUNC_CLASS_PROTO]    ;
8    [NONE]              
9    [FUNC_PROTO]        int
9    [NONE]              foo1
9    [FUNC_PROTO]        (
9    [NONE]              int
9    [NONE]              arg
9    [FUNC_PROTO]        )
9    [FUNC_PROTO]        ;
9    [NONE]              
10   [FUNC_PROTO]        int
10   [NONE]              foo2
10   [FUNC_PROTO]        (
10   [FUNC_PROTO]        )
10   [FUNC_PROTO]        ;
10   [NONE]              
11   [FUNC_DEF]          int
11   [NONE]              foo3
11   [FUNC_DEF]          (
11   [NONE]              char
11   [NONE]              ch
11   [NONE]              ,
11   [NONE]              int
11   [NONE]              xx
11   [FUNC_DEF]          )
11   [NONE]              
12   [FUNC_DEF]          {
12   [NONE]              
13   [FUNC_DEF]          }
13   [NONE]              
14   [CLASS]             }
14   [CLASS]             ;
14   [NONE]              
16   [NONE]              CFoo
16   [NONE]              ::
16   [NONE]              CFoo
16   [FUNC_CLASS_DEF]    (
16   [NONE]              int
16   [NONE]              arg
16   [FUNC_CLASS_DEF]    )
16   [FUNC_CLASS_DEF]    {
16   [NONE]              
17   [FUNC_CLASS_DEF]    }
17   [NONE]              
19   [NONE]              CFoo
19   [NONE]              ::
19   [NONE]              ~
19   [DESTRUCTOR]        CFoo
19   [FUNC_CLASS_DEF]    (
19   [FUNC_CLASS_DEF]    )
19   [FUNC_CLASS_DEF]    {
19   [NONE]              
20   [FUNC_CLASS_DEF]    }
20   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * foo1␤ * TODO: DESCRIPTION␤ * @param arg TODO␤ * ��@param arg2 TO␤ * O␤@return TODO␤ */
5    [NONE]              
22   [FUNC_DEF]          int
22   [FUNC_DEF]          CFoo
22   [FUNC_DEF]          ::
22   [NONE]              foo1
22   [FUNC_DEF]          (
22   [NONE]              int
22   [NONE]              arg
22   [NONE]              ,
22   [NONE]              int
22   [NONE]              arg2
22   [FUNC_DEF]          )
22   [NONE]              
23   [FUNC_DEF]          {
23   [NONE]              
24   [FUNC_DEF]          }
24   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * foo2␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
5    [NONE]              
26   [FUNC_DEF]          int
26   [FUNC_DEF]          CFoo
26   [FUNC_DEF]          ::
26   [NONE]              foo2
26   [FUNC_DEF]          (
26   [FUNC_DEF]          )
26   [NONE]              
27   [FUNC_DEF]          {
27   [NONE]              
28   [FUNC_DEF]          }
28   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * operator +␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
5    [NONE]              
30   [FUNC_DEF]          int
30   [FUNC_DEF]          CFoo
30   [FUNC_DEF]          ::
30   [FUNC_DEF]          operator
30   [OPERATOR]          +
30   [FUNC_DEF]          (
30   [FUNC_DEF]          )
30   [NONE]              
31   [FUNC_DEF]          {
31   [NONE]              
32   [FUNC_DEF]          }
32   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * func␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
5    [NONE]              
34   [FUNC_DEF]          map
34   [TEMPLATE]          <
34   [NONE]              string
34   [NONE]              ,
34   [NONE]              int
34   [TEMPLATE]          >
34   [NONE]              func
34   [FUNC_DEF]          (
34   [FUNC_DEF]          )
34   [NONE]              
35   [FUNC_DEF]          {
35   [NONE]              
36   [COMMENT_WHOLE]     // some codes
36   [NONE]              
37   [FUNC_DEF]          }
37   [NONE]              
1    [COMMENT_WHOLE]     /**␤ * some_func␤ * TODO: DESCRIPTION␤ * @return TODO␤ */
5    [NONE]              
39   [FUNC_DEF]          int
39   [NONE]              some_func
39   [FUNC_DEF]          (
39   [NONE]              void
39   [FUNC_DEF]          )
39   [NONE]              
40   [FUNC_DEF]          {
40   [NONE]              
41   [FUNC_DEF]          }
41   [NONE]              
43   [NONE]              class
43   [CLASS]             some_class_declaration
43   [NONE]              ;
43   [NONE]              
45   [FUNC_PROTO]        int
45   [NONE]              some_func_declaration
45   [FUNC_PROTO]        (
45   [FUNC_PROTO]        )
45   [FUNC_PROTO]        ;
45   [NONE]              