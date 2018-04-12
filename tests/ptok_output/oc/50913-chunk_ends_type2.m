Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              import
1    [NONE]              <Foundation/Foundation.h>
1    [NONE]              
3    [PP_DEFINE]         #
3    [NONE]              define
3    [NONE]              TESTCLASS_SINGLETON_FOR_CLASS
3    [MACRO_FUNC]        (
3    [NONE]              classname
3    [NONE]              ,
3    [NONE]              accessorname
3    [MACRO_FUNC]        )
3    [NONE]              \
4    [NONE]              static
4    [NONE]              classname
4    [NONE]              *
4    [NONE]              shared
4    [NONE]              ##
4    [NONE]              classname
4    [NONE]              =
4    [NONE]              nil
4    [NONE]              ;
4    [NONE]              
6    [PP_DEFINE]         #
6    [NONE]              define
6    [NONE]              PUSH_CONTEXT
6    [MACRO_FUNC]        (
6    [NONE]              contextArg
6    [MACRO_FUNC]        )
6    [NONE]              \
7    [NONE]              EAGLContext
7    [NONE]              *
7    [NONE]              oldContext
7    [NONE]              =
7    [OC_MSG]            [
7    [NONE]              EAGLContext
7    [NONE]              currentContext
7    [OC_MSG]            ]
7    [OC_MSG]            ;
7    [NONE]              \
8    [NONE]              if
8    [IF]                (
8    [NONE]              oldContext
8    [NONE]              !=
8    [NONE]              contextArg
8    [IF]                )
8    [IF]                {
8    [NONE]              \
9    [OC_MSG]            [
9    [NONE]              EAGLContext
9    [NONE]              setCurrentContext
9    [NONE]              :
9    [NONE]              contextArg
9    [OC_MSG]            ]
9    [OC_MSG]            ;
9    [NONE]              \
10   [IF]                }
10   [NONE]              
12   [PP_DEFINE]         #
12   [NONE]              define
12   [NONE]              POP_CONTEXT
12   [MACRO_FUNC]        (
12   [NONE]              contextArg
12   [MACRO_FUNC]        )
12   [NONE]              \
13   [NONE]              if
13   [IF]                (
13   [NONE]              oldContext
13   [NONE]              !=
13   [NONE]              contextArg
13   [IF]                )
13   [IF]                {
13   [NONE]              \
14   [OC_MSG]            [
14   [NONE]              EAGLContext
14   [NONE]              setCurrentContext
14   [NONE]              :
14   [NONE]              oldContext
14   [OC_MSG]            ]
14   [OC_MSG]            ;
14   [NONE]              \
15   [IF]                }
15   [NONE]              
17   [PP_DEFINE]         #
17   [NONE]              define
17   [NONE]              CURRENT_CONTEXT
17   [NONE]              \
18   [NONE]              NSOpenGLContext
18   [NONE]              *
18   [NONE]              currentContext
18   [NONE]              =
18   [OC_MSG]            [
18   [NONE]              NSOpenGLContext
18   [NONE]              currentContext
18   [OC_MSG]            ]
18   [OC_MSG]            ;
18   [NONE]              
20   [NONE]              @interface
20   [OC_INTF]           TestClass
20   [OC_CLASS]          :
20   [NONE]              NSObject
20   [NONE]              
21   [OC_INTF]           @end
21   [NONE]              
23   [NONE]              @implementation
23   [OC_IMPL]           TestClass
23   [NONE]              
25   [NONE]              TESTCLASS_SINGLETON_FOR_CLASS
25   [FUNC_CALL]         (
25   [NONE]              TestClass
25   [NONE]              ,
25   [NONE]              sharedInstance
25   [FUNC_CALL]         )
25   [NONE]              ;
25   [NONE]              
27   [OC_MSG_DECL]       -
27   [OC_MSG_DECL]       (
27   [NONE]              void
27   [OC_MSG_DECL]       )
27   [OC_MSG_DECL]       drawSomething
27   [OC_MSG_DECL]       {
27   [NONE]              
28   [NONE]              PUSH_CONTEXT
28   [FUNC_CALL]         (
28   [NONE]              _context
28   [FUNC_CALL]         )
28   [NONE]              ;
28   [NONE]              
29   [NONE]              POP_CONTEXT
29   [FUNC_CALL]         (
29   [NONE]              _context
29   [FUNC_CALL]         )
29   [NONE]              ;
29   [NONE]              
30   [OC_MSG_DECL]       }
30   [NONE]              
32   [OC_IMPL]           @end
32   [NONE]              