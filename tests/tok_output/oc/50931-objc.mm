Line [Token]             Text
1    [TYPE]              void
1    [FUNC_DEF]          foo
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [IF]                if
3    [SPAREN_OPEN]       (
3    [WORD]              key
3    [SPAREN_CLOSE]      )
3    [VBRACE_OPEN]       
3    [NEWLINE]           
4    [TYPE]              ret
4    [MEMBER]            .
4    [WORD]              key
4    [ASSIGN]            =
4    [SQUARE_OPEN]       [
4    [OC_MSG_CLASS]      NSString
4    [OC_MSG_FUNC]       stringWithCharacters
4    [OC_COLON]          :
4    [ADDR]              &
4    [TYPE]              key
4    [OC_MSG_NAME]       length
4    [OC_COLON]          :
4    [NUMBER]            1
4    [SQUARE_CLOSE]      ]
4    [SEMICOLON]         ;
4    [VBRACE_CLOSE]      
4    [NEWLINE]           
6    [SQUARE_OPEN]       [
6    [OC_MSG_CLASS]      gUndoMenu
6    [MEMBER]            ->
6    [TYPE]              m_UndoItem
6    [OC_MSG_FUNC]       setTitle
6    [OC_COLON]          :
6    [SQUARE_OPEN]       [
6    [OC_MSG_CLASS]      NSString
6    [OC_MSG_FUNC]       stringWithFormat
6    [OC_COLON]          :
6    [SQUARE_OPEN]       [
6    [OC_MSG_CLASS]      NSString
6    [OC_MSG_FUNC]       stringWithUTF8String
6    [OC_COLON]          :
6    [WORD]              localizedUndo
6    [SQUARE_CLOSE]      ]
6    [COMMA]             ,
6    [WORD]              undoName
6    [MEMBER]            .
6    [FUNC_CALL]         c_str
6    [FPAREN_OPEN]       (
6    [FPAREN_CLOSE]      )
6    [SQUARE_CLOSE]      ]
6    [SQUARE_CLOSE]      ]
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [SQUARE_OPEN]       [
7    [OC_MSG_CLASS]      gUndoMenu
7    [MEMBER]            ->
7    [TYPE]              m_RedoItem
7    [OC_MSG_FUNC]       setTitle
7    [OC_COLON]          :
7    [SQUARE_OPEN]       [
7    [OC_MSG_CLASS]      NSString
7    [OC_MSG_FUNC]       stringWithFormat
7    [OC_COLON]          :
7    [SQUARE_OPEN]       [
7    [OC_MSG_CLASS]      NSString
7    [OC_MSG_FUNC]       stringWithUTF8String
7    [OC_COLON]          :
7    [WORD]              localizedRedo
7    [SQUARE_CLOSE]      ]
7    [COMMA]             ,
7    [WORD]              redoName
7    [MEMBER]            .
7    [FUNC_CALL]         c_str
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [SQUARE_CLOSE]      ]
7    [SQUARE_CLOSE]      ]
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           