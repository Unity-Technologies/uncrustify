Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        import
1    [PREPROC_BODY]      <Foundation/Foundation.h>
1    [NEWLINE]           
3    [OC_INTF]           @interface
3    [OC_CLASS]          TestClass
3    [CLASS_COLON]       :
3    [WORD]              NSObject
3    [NEWLINE]           
4    [OC_END]            @end
4    [NEWLINE]           
6    [OC_IMPL]           @implementation
6    [OC_CLASS]          TestClass
6    [NEWLINE]           
8    [OC_SCOPE]          -
8    [PAREN_OPEN]        (
8    [TYPE]              void
8    [PAREN_CLOSE]       )
8    [OC_MSG_DECL]       foo
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [TYPE]              previewViewController
10   [MEMBER]            .
10   [WORD]              previewControllerDelegate
10   [ASSIGN]            =
10   [PAREN_OPEN]        (
10   [TYPE]              id
10   [ANGLE_OPEN]        <
10   [TYPE]              TestClassDelegate
10   [ANGLE_CLOSE]       >
10   [PAREN_CLOSE]       )
10   [SQUARE_OPEN]       [
10   [OC_MSG_CLASS]      TestClass
10   [OC_MSG_FUNC]       sharedInstance
10   [SQUARE_CLOSE]      ]
10   [SEMICOLON]         ;
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
13   [OC_END]            @end
13   [NEWLINE]           