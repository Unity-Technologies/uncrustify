Line [Token]             Text
1    [QUALIFIER]         public
1    [QUALIFIER]         unsafe
1    [STRUCT]            struct
1    [TYPE]              QueryKeyNameCommand
1    [CLASS_COLON]       :
1    [WORD]              IInputDeviceCommandInfo
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [QUALIFIER]         public
3    [TYPE]              string
3    [FUNC_DEF]          ReadKeyName
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [FUNC_DEF]          fixed
5    [FPAREN_OPEN]       (
5    [TYPE]              QueryKeyNameCommand
5    [PTR_TYPE]          *
5    [WORD]              thisPtr
5    [ASSIGN]            =
5    [BYREF]             &
5    [THIS]              this
5    [FPAREN_CLOSE]      )
5    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [RETURN]            return
7    [WORD]              StringHelpers
7    [MEMBER]            .
7    [FUNC_CALL]         ReadStringFromBuffer
7    [FPAREN_OPEN]       (
7    [NEW]               new
7    [FUNC_CALL]         IntPtr
7    [FPAREN_OPEN]       (
7    [WORD]              thisPtr
7    [MEMBER]            ->
7    [WORD]              nameBuffer
7    [FPAREN_CLOSE]      )
7    [COMMA]             ,
7    [WORD]              kMaxNameLength
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
9    [RETURN]            return
9    [WORD]              array
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [NEWLINE]           
11   [BRACE_CLOSE]       }
11   [NEWLINE]           