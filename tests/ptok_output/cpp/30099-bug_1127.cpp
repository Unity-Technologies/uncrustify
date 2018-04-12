Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              include
1    [NONE]              <iostream>
1    [NONE]              
3    [NONE]              template
3    [TEMPLATE]          <
3    [NONE]              size_t
3    [NONE]              T
3    [TEMPLATE]          >
3    [NONE]              
4    [TEMPLATE]          class
4    [CLASS]             MyFoo
4    [NONE]              
5    [CLASS]             {
5    [NONE]              
6    [NONE]              public
6    [NONE]              :
6    [NONE]              
7    [NONE]              MyFoo
7    [FUNC_CLASS_DEF]    (
7    [FUNC_CLASS_DEF]    )
7    [NONE]              
8    [FUNC_CLASS_DEF]    {
8    [NONE]              
9    [NONE]              std
9    [NONE]              ::
9    [NONE]              cout
9    [NONE]              <<
9    [NONE]              T
9    [NONE]              <<
9    [NONE]              std
9    [NONE]              ::
9    [NONE]              endl
9    [NONE]              ;
9    [NONE]              
10   [FUNC_CLASS_DEF]    }
10   [NONE]              
11   [CLASS]             }
11   [CLASS]             ;
11   [NONE]              
13   [FUNC_DEF]          int
13   [NONE]              main
13   [FUNC_DEF]          (
13   [FUNC_DEF]          )
13   [NONE]              
14   [FUNC_DEF]          {
14   [NONE]              
15   [NONE]              const
15   [NONE]              size_t
15   [NONE]              mySize
15   [NONE]              =
15   [NONE]              INT8_MAX
15   [NONE]              *
15   [NONE]              2
15   [NONE]              ;
15   [NONE]              
16   [NONE]              MyFoo
16   [TEMPLATE]          <
16   [NONE]              mySize
16   [NONE]              *
16   [NONE]              2
16   [TEMPLATE]          >
16   [NONE]              foo1
16   [NONE]              ;
16   [NONE]              
17   [NONE]              MyFoo
17   [TEMPLATE]          <
17   [NONE]              mySize
17   [NONE]              /
17   [NONE]              2
17   [TEMPLATE]          >
17   [NONE]              foo2
17   [NONE]              ;
17   [NONE]              
18   [NONE]              MyFoo
18   [TEMPLATE]          <
18   [NONE]              2
18   [NONE]              *
18   [NONE]              mySize
18   [TEMPLATE]          >
18   [NONE]              foo1
18   [NONE]              ;
18   [NONE]              
19   [NONE]              MyFoo
19   [TEMPLATE]          <
19   [NONE]              2
19   [NONE]              /
19   [NONE]              mySize
19   [TEMPLATE]          >
19   [NONE]              foo2
19   [NONE]              ;
19   [NONE]              
20   [FUNC_DEF]          }
20   [NONE]              