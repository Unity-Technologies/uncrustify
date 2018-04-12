Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        import
1    [PREPROC_BODY]      <Foundation/Foundation.h>
1    [NEWLINE]           
3    [PREPROC]           #
3    [PP_DEFINE]         define
3    [MACRO_FUNC]        TESTCLASS_SINGLETON_FOR_CLASS
3    [FPAREN_OPEN]       (
3    [WORD]              classname
3    [COMMA]             ,
3    [WORD]              accessorname
3    [FPAREN_CLOSE]      )
3    [NL_CONT]           \
4    [QUALIFIER]         static
4    [WORD]              classname
4    [PTR_TYPE]          *
4    [WORD]              shared
4    [PP]                ##
4    [WORD]              classname
4    [ASSIGN]            =
4    [WORD]              nil
4    [SEMICOLON]         ;
4    [NEWLINE]           
6    [PREPROC]           #
6    [PP_DEFINE]         define
6    [MACRO_FUNC]        PUSH_CONTEXT
6    [FPAREN_OPEN]       (
6    [WORD]              contextArg
6    [FPAREN_CLOSE]      )
6    [NL_CONT]           \
7    [WORD]              EAGLContext
7    [PTR_TYPE]          *
7    [WORD]              oldContext
7    [ASSIGN]            =
7    [SQUARE_OPEN]       [
7    [OC_MSG_CLASS]      EAGLContext
7    [OC_MSG_FUNC]       currentContext
7    [SQUARE_CLOSE]      ]
7    [SEMICOLON]         ;
7    [NL_CONT]           \
8    [IF]                if
8    [SPAREN_OPEN]       (
8    [WORD]              oldContext
8    [COMPARE]           !=
8    [WORD]              contextArg
8    [SPAREN_CLOSE]      )
8    [BRACE_OPEN]        {
8    [NL_CONT]           \
9    [SQUARE_OPEN]       [
9    [OC_MSG_CLASS]      EAGLContext
9    [OC_MSG_FUNC]       setCurrentContext
9    [OC_COLON]          :
9    [WORD]              contextArg
9    [SQUARE_CLOSE]      ]
9    [SEMICOLON]         ;
9    [NL_CONT]           \
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
12   [PREPROC]           #
12   [PP_DEFINE]         define
12   [MACRO_FUNC]        POP_CONTEXT
12   [FPAREN_OPEN]       (
12   [WORD]              contextArg
12   [FPAREN_CLOSE]      )
12   [NL_CONT]           \
13   [IF]                if
13   [SPAREN_OPEN]       (
13   [WORD]              oldContext
13   [COMPARE]           !=
13   [WORD]              contextArg
13   [SPAREN_CLOSE]      )
13   [BRACE_OPEN]        {
13   [NL_CONT]           \
14   [SQUARE_OPEN]       [
14   [OC_MSG_CLASS]      EAGLContext
14   [OC_MSG_FUNC]       setCurrentContext
14   [OC_COLON]          :
14   [WORD]              oldContext
14   [SQUARE_CLOSE]      ]
14   [SEMICOLON]         ;
14   [NL_CONT]           \
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
17   [PREPROC]           #
17   [PP_DEFINE]         define
17   [MACRO]             CURRENT_CONTEXT
17   [NL_CONT]           \
18   [WORD]              NSOpenGLContext
18   [PTR_TYPE]          *
18   [WORD]              currentContext
18   [ASSIGN]            =
18   [SQUARE_OPEN]       [
18   [OC_MSG_CLASS]      NSOpenGLContext
18   [OC_MSG_FUNC]       currentContext
18   [SQUARE_CLOSE]      ]
18   [SEMICOLON]         ;
18   [NEWLINE]           
20   [OC_INTF]           @interface
20   [OC_CLASS]          TestClass
20   [CLASS_COLON]       :
20   [WORD]              NSObject
20   [NEWLINE]           
21   [OC_END]            @end
21   [NEWLINE]           
23   [OC_IMPL]           @implementation
23   [OC_CLASS]          TestClass
23   [NEWLINE]           
25   [FUNC_CALL]         TESTCLASS_SINGLETON_FOR_CLASS
25   [FPAREN_OPEN]       (
25   [WORD]              TestClass
25   [COMMA]             ,
25   [WORD]              sharedInstance
25   [FPAREN_CLOSE]      )
25   [SEMICOLON]         ;
25   [NEWLINE]           
27   [OC_SCOPE]          -
27   [PAREN_OPEN]        (
27   [TYPE]              void
27   [PAREN_CLOSE]       )
27   [OC_MSG_DECL]       drawSomething
27   [BRACE_OPEN]        {
27   [NEWLINE]           
28   [FUNC_CALL]         PUSH_CONTEXT
28   [FPAREN_OPEN]       (
28   [WORD]              _context
28   [FPAREN_CLOSE]      )
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [FUNC_CALL]         POP_CONTEXT
29   [FPAREN_OPEN]       (
29   [WORD]              _context
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           
32   [OC_END]            @end
32   [NEWLINE]           