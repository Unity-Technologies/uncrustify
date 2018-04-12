Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        import
1    [PREPROC_BODY]      <Foundation/Foundation.m>
1    [NEWLINE]           
3    [OC_IMPL]           @implementation
3    [OC_CLASS]          MyViewController
3    [NEWLINE]           
5    [OC_SCOPE]          -
5    [PAREN_OPEN]        (
5    [TYPE]              void
5    [PAREN_CLOSE]       )
5    [OC_MSG_DECL]       method1
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [QUALIFIER]         __weak
6    [SIZEOF]            __typeof
6    [PAREN_OPEN]        (
6    [WORD]              self
6    [PAREN_CLOSE]       )
6    [WORD]              weakSelf1
6    [ASSIGN]            =
6    [THIS]              self
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [QUALIFIER]         __weak
7    [SIZEOF]            typeof
7    [PAREN_OPEN]        (
7    [WORD]              self
7    [PAREN_CLOSE]       )
7    [WORD]              weakSelf2
7    [ASSIGN]            =
7    [THIS]              self
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [QUALIFIER]         __weak
8    [TYPE]              MyViewController
8    [PTR_TYPE]          *
8    [WORD]              weakSelf3
8    [ASSIGN]            =
8    [THIS]              self
8    [SEMICOLON]         ;
8    [NEWLINE]           
9    [TYPE]              NSString
9    [PTR_TYPE]          *
9    [WORD]              srcStr
9    [ASSIGN]            =
9    [SQUARE_OPEN]       [
9    [SQUARE_OPEN]       [
9    [OC_MSG_CLASS]      NSString
9    [OC_MSG_FUNC]       alloc
9    [SQUARE_CLOSE]      ]
9    [OC_MSG_FUNC]       initWithBytes
9    [OC_COLON]          :
9    [TYPE]              kShaderSource
9    [OC_MSG_NAME]       length
9    [OC_COLON]          :
9    [SIZEOF]            sizeof
9    [PAREN_OPEN]        (
9    [WORD]              kShaderSource
9    [PAREN_CLOSE]       )
9    [OC_MSG_NAME]       encoding
9    [OC_COLON]          :
9    [WORD]              NSASCIIStringEncoding
9    [SQUARE_CLOSE]      ]
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
12   [OC_END]            @end
12   [NEWLINE]           