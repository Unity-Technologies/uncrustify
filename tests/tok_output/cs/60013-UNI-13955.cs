Line [Token]             Text
1    [IF]                if
1    [SPAREN_OPEN]       (
1    [WORD]              m_Preview
1    [MEMBER]            .
1    [FUNC_CALL]         GetExpanded
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [SPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [WORD]              m_EventSearchString
3    [ASSIGN]            =
3    [WORD]              EditorGUI
3    [MEMBER]            .
3    [FUNC_CALL]         TextField
3    [FPAREN_OPEN]       (
3    [WORD]              searchRect
3    [COMMA]             ,
3    [WORD]              m_EventSearchString
3    [COMMA]             ,
3    [WORD]              Styles
3    [MEMBER]            .
3    [WORD]              toolbarSearchField
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [IF]                if
4    [SPAREN_OPEN]       (
4    [WORD]              GUILayout
4    [MEMBER]            .
4    [FUNC_CALL]         Button
4    [FPAREN_OPEN]       (
4    [NEWLINE]           
5    [WORD]              GUIContent
5    [MEMBER]            .
5    [WORD]              none
5    [COMMA]             ,
5    [NEWLINE]           
6    [WORD]              m_EventSearchString
6    [COMPARE]           ==
6    [TYPE]              string
6    [MEMBER]            .
6    [WORD]              Empty
6    [QUESTION]          ?
6    [WORD]              Styles
6    [MEMBER]            .
6    [WORD]              toolbarSearchFieldCancelEmpty
6    [COND_COLON]        :
6    [TYPE]              Styles
6    [MEMBER]            .
6    [WORD]              toolbarSearchFieldCancel
6    [FPAREN_CLOSE]      )
6    [SPAREN_CLOSE]      )
6    [NEWLINE]           
7    [BRACE_OPEN]        {
7    [NEWLINE]           
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
11   [COMMENT_CPP]       // The closing parenthesis is being indented twice.
11   [NEWLINE]           
12   [TYPE]              bool
12   [WORD]              success
12   [ASSIGN]            =
12   [FUNC_CALL]         GenerateSecondaryUVSet
12   [FPAREN_OPEN]       (
12   [NEWLINE]           
13   [ADDR]              &
13   [WORD]              mesh
13   [MEMBER]            .
13   [WORD]              vertices
13   [SQUARE_OPEN]       [
13   [NUMBER]            0
13   [SQUARE_CLOSE]      ]
13   [MEMBER]            .
13   [WORD]              x
13   [COMMA]             ,
13   [WORD]              mesh
13   [MEMBER]            .
13   [WORD]              vertices
13   [MEMBER]            .
13   [FUNC_CALL]         size
13   [FPAREN_OPEN]       (
13   [FPAREN_CLOSE]      )
13   [COMMA]             ,
13   [NEWLINE]           
14   [ADDR]              &
14   [WORD]              triUV
14   [SQUARE_OPEN]       [
14   [NUMBER]            0
14   [SQUARE_CLOSE]      ]
14   [MEMBER]            .
14   [WORD]              x
14   [COMMA]             ,
14   [ADDR]              &
14   [WORD]              triList
14   [SQUARE_OPEN]       [
14   [NUMBER]            0
14   [SQUARE_CLOSE]      ]
14   [COMMA]             ,
14   [WORD]              triSrcPoly
14   [MEMBER]            .
14   [FUNC_CALL]         size
14   [FPAREN_OPEN]       (
14   [FPAREN_CLOSE]      )
14   [QUESTION]          ?
14   [ADDR]              &
14   [WORD]              triSrcPoly
14   [SQUARE_OPEN]       [
14   [NUMBER]            0
14   [SQUARE_CLOSE]      ]
14   [COND_COLON]        :
14   [NUMBER]            0
14   [COMMA]             ,
14   [WORD]              triCount
14   [COMMA]             ,
14   [NEWLINE]           
15   [ADDR]              &
15   [WORD]              outUV
15   [SQUARE_OPEN]       [
15   [NUMBER]            0
15   [SQUARE_CLOSE]      ]
15   [MEMBER]            .
15   [WORD]              x
15   [COMMA]             ,
15   [WORD]              param
15   [COMMA]             ,
15   [WORD]              errorBuffer
15   [COMMA]             ,
15   [WORD]              bufferSize
15   [NEWLINE]           
16   [FPAREN_CLOSE]      )
16   [SEMICOLON]         ;
16   [NEWLINE]           