Line [Token]             Text
1    [TYPE]              CFoo
1    [DC_MEMBER]         ::
1    [FUNC_CLASS_DEF]    CFoo
1    [FPAREN_OPEN]       (
1    [QUALIFIER]         const
1    [TYPE]              DWORD
1    [WORD]              something
1    [COMMA]             ,
1    [NEWLINE]           
1    [QUALIFIER]         const
1    [TYPE]              RECT
1    [BYREF]             &
1    [WORD]              positionRect
1    [COMMA]             ,
1    [NEWLINE]           
1    [QUALIFIER]         const
1    [TYPE]              UINT
1    [WORD]              aNumber
1    [COMMA]             ,
1    [NEWLINE]           
1    [TYPE]              bool
1    [WORD]              thisIsReadOnly
1    [COMMA]             ,
1    [NEWLINE]           
1    [QUALIFIER]         const
1    [TYPE]              CString
1    [BYREF]             &
1    [WORD]              windowTitle
1    [COMMA]             ,
1    [NEWLINE]           
1    [TYPE]              CInfo
1    [PTR_TYPE]          *
1    [WORD]              pStructInfo
1    [COMMA]             ,
1    [NEWLINE]           
1    [TYPE]              int
1    [WORD]              widthOfSomething
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
1    [CONSTR_COLON]      :
1    [FUNC_CTOR_VAR]     CSuperFoo
1    [FPAREN_OPEN]       (
1    [WORD]              something
1    [COMMA]             ,
1    [WORD]              positionRect
1    [COMMA]             ,
1    [WORD]              aNumber
1    [COMMA]             ,
1    [NEWLINE]           
2    [WORD]              thisIsReadOnly
2    [COMMA]             ,
2    [WORD]              windowTitle
2    [FPAREN_CLOSE]      )
2    [COMMA]             ,
2    [NEWLINE]           
2    [FUNC_CTOR_VAR]     m_pInfo
2    [FPAREN_OPEN]       (
2    [WORD]              pInfo
2    [FPAREN_CLOSE]      )
2    [COMMA]             ,
2    [NEWLINE]           
2    [FUNC_CTOR_VAR]     m_width
2    [FPAREN_OPEN]       (
2    [WORD]              widthOfSomething
2    [FPAREN_CLOSE]      )
2    [NEWLINE]           
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [BRACE_CLOSE]       }
4    [NEWLINE]           
6    [COMMENT_CPP]       // this_comment_has_a_first_word_that_is_too_long_to_fit_into_a_line_without_wrapping and should not start with a blank comment line.
6    [NEWLINE]           