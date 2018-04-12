Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        import
1    [PREPROC_BODY]      <Foundation/Foundation.h>
1    [NEWLINE]           
3    [OC_INTF]           @interface
3    [OC_CLASS]          TestClass
3    [NEWLINE]           
5    [OC_SCOPE]          +
5    [PAREN_OPEN]        (
5    [TYPE]              void
5    [PAREN_CLOSE]       )
5    [OC_MSG_SPEC]       cancelRequest
5    [OC_COLON]          :
5    [PAREN_OPEN]        (
5    [TYPE]              id
5    [PAREN_CLOSE]       )
5    [WORD]              request
5    [SEMICOLON]         ;
5    [NEWLINE]           
7    [OC_END]            @end
7    [NEWLINE]           
9    [OC_IMPL]           @implementation
9    [OC_CLASS]          TestClass
9    [NEWLINE]           
11   [COMMENT_CPP]       // Occasionally there will be user errors where someone will
11   [NEWLINE]           
12   [COMMENT_CPP]       // copy the interface method declaration to implementation
12   [NEWLINE]           
13   [COMMENT_CPP]       // and leaves the semicolon
13   [NEWLINE]           
14   [OC_SCOPE]          +
14   [PAREN_OPEN]        (
14   [TYPE]              void
14   [PAREN_CLOSE]       )
14   [OC_MSG_SPEC]       cancelRequest
14   [OC_COLON]          :
14   [PAREN_OPEN]        (
14   [TYPE]              id
14   [PAREN_CLOSE]       )
14   [WORD]              request
14   [SEMICOLON]         ;
15   [BRACE_OPEN]        {
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
18   [OC_END]            @end
18   [NEWLINE]           