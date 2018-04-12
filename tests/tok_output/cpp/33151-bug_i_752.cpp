Line [Token]             Text
1    [TYPE]              int
1    [FUNC_DEF]          a
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [FOR]               for
3    [SPAREN_OPEN]       (
3    [TYPE]              QStringList
3    [DC_MEMBER]         ::
3    [TYPE]              const_iterator
3    [WORD]              codesIt
3    [ASSIGN]            =
3    [WORD]              _codes
3    [MEMBER]            .
3    [FUNC_CALL]         constBegin
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [WORD]              codesIt
3    [COMPARE]           !=
3    [WORD]              _codes
3    [MEMBER]            .
3    [FUNC_CALL]         constEnd
3    [FPAREN_OPEN]       (
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [INCDEC_BEFORE]     ++
3    [WORD]              codesIt
3    [SPAREN_CLOSE]      )
3    [BRACE_OPEN]        {
3    [NEWLINE]           
4    [IF]                if
4    [SPAREN_OPEN]       (
4    [COMMENT_CPP]       // Current codes enough to compare:
4    [NEWLINE]           
5    [PAREN_OPEN]        (
5    [PAREN_OPEN]        (
5    [DEREF]             *
5    [WORD]              codesIt
5    [PAREN_CLOSE]       )
5    [MEMBER]            .
5    [FUNC_CALL]         size
5    [FPAREN_OPEN]       (
5    [FPAREN_CLOSE]      )
5    [COMPARE]           <=
5    [WORD]              strId
5    [PAREN_CLOSE]       )
5    [BOOL]              ||
5    [NEWLINE]           
6    [COMMENT_CPP]       // Character on this slot was not readable:
6    [NEWLINE]           
7    [PAREN_OPEN]        (
7    [PAREN_OPEN]        (
7    [DEREF]             *
7    [WORD]              codesIt
7    [PAREN_CLOSE]       )
7    [MEMBER]            .
7    [FUNC_CALL]         at
7    [FPAREN_OPEN]       (
7    [WORD]              strId
7    [FPAREN_CLOSE]      )
7    [COMPARE]           ==
7    [WORD]              m_wildcard
7    [PAREN_CLOSE]       )
7    [BOOL]              ||
7    [NEWLINE]           
8    [COMMENT_CPP]       // This character is matching:
8    [NEWLINE]           
9    [PAREN_OPEN]        (
9    [WORD]              code
9    [MEMBER]            .
9    [FUNC_CALL]         at
9    [FPAREN_OPEN]       (
9    [WORD]              strId
9    [FPAREN_CLOSE]      )
9    [COMPARE]           ==
9    [PAREN_OPEN]        (
9    [DEREF]             *
9    [WORD]              codesIt
9    [PAREN_CLOSE]       )
9    [MEMBER]            .
9    [FUNC_CALL]         at
9    [FPAREN_OPEN]       (
9    [WORD]              strId
9    [FPAREN_CLOSE]      )
9    [PAREN_CLOSE]       )
9    [SPAREN_CLOSE]      )
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [COMMENT_CPP]       // Ignore this slot:
10   [NEWLINE]           
11   [CONTINUE]          continue
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [NEWLINE]           
13   [BRACE_CLOSE]       }
13   [NEWLINE]           
14   [BRACE_CLOSE]       }