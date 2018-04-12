Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        import
1    [PREPROC_BODY]      <Cocoa/Cocoa.h>
1    [NEWLINE]           
3    [OC_IMPL]           @implementation
3    [OC_CLASS]          MyDocument
3    [NEWLINE]           
5    [OC_SCOPE]          -
5    [PAREN_OPEN]        (
5    [TYPE]              NSString
5    [PTR_TYPE]          *
5    [PAREN_CLOSE]       )
5    [OC_MSG_DECL]       appPath
5    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [SQUARE_OPEN]       [
6    [OC_MSG_CLASS]      AClass
6    [OC_MSG_FUNC]       AFunc
6    [SQUARE_CLOSE]      ]
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [RETURN]            return
7    [SQUARE_OPEN]       [
7    [FUNC_CALL]         NSSearchPathForDirectoriesInDomains
7    [FPAREN_OPEN]       (
7    [WORD]              NSDocumentDirectory
7    [COMMA]             ,
7    [WORD]              NSUserDomainMask
7    [COMMA]             ,
7    [WORD]              YES
7    [FPAREN_CLOSE]      )
7    [OC_MSG_FUNC]       lastObject
7    [SQUARE_CLOSE]      ]
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
10   [OC_END]            @end
10   [NEWLINE]           