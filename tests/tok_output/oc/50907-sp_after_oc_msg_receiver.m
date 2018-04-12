Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        import
1    [PREPROC_BODY]      <Foundation/Foundation.h>
1    [NEWLINE]           
3    [OC_IMPL]           @implementation
3    [OC_CLASS]          TestClass
3    [NEWLINE]           
5    [OC_SCOPE]          -
5    [PAREN_OPEN]        (
5    [TYPE]              void
5    [PAREN_CLOSE]       )
5    [OC_MSG_DECL]       testMethod
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [TYPE]              NSData
6    [PTR_TYPE]          *
6    [WORD]              jsonData
6    [ASSIGN]            =
6    [SQUARE_OPEN]       [
6    [OC_MSG_CLASS]      self
6    [OC_MSG_FUNC]       dataUsingEncoding
6    [OC_COLON]          :
6    [WORD]              NSUTF8StringEncoding
6    [SQUARE_CLOSE]      ]
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [TYPE]              id
7    [WORD]              jsonParsedObj
7    [ASSIGN]            =
7    [SQUARE_OPEN]       [
7    [OC_MSG_CLASS]      jsonSerializationClass
7    [OC_MSG_FUNC]       JSONObjectWithData
7    [OC_COLON]          :
7    [TYPE]              jsonData
7    [OC_MSG_NAME]       options
7    [OC_COLON]          :
7    [NUMBER]            0
7    [OC_MSG_NAME]       error
7    [OC_COLON]          :
7    [ADDR]              &
7    [WORD]              jsonError
7    [SQUARE_CLOSE]      ]
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [TYPE]              NSString
8    [PTR_TYPE]          *
8    [WORD]              ret
8    [ASSIGN]            =
8    [SQUARE_OPEN]       [
8    [SQUARE_OPEN]       [
8    [OC_MSG_CLASS]      TestClass
8    [OC_MSG_FUNC]       sharedInstance
8    [SQUARE_CLOSE]      ]
8    [OC_MSG_FUNC]       testString
8    [SQUARE_CLOSE]      ]
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
11   [OC_END]            @end
11   [NEWLINE]           