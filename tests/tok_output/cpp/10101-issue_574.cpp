Line [Token]             Text
1    [CLASS]             class
1    [TYPE]              A
1    [NEWLINE]           
1    [BRACE_OPEN]        {
1    [NEWLINE]           
2    [COMMENT_CPP]       // crash (two parameter, 2nd string parameter has space)
2    [NEWLINE]           
3    [TYPE]              void
3    [FUNC_PROTO]        check
3    [FPAREN_OPEN]       (
3    [QUALIFIER]         const
3    [TYPE]              QObject
3    [PTR_TYPE]          *
3    [WORD]              object
3    [COMMA]             ,
3    [QUALIFIER]         const
3    [TYPE]              QStringList
3    [BYREF]             &
3    [WORD]              strList
3    [ASSIGN]            =
3    [CPP_CAST]          QStringList
3    [PAREN_OPEN]        (
3    [FUNC_CALL]         QString
3    [FPAREN_OPEN]       (
3    [FUNC_CALL]         QLatin1String
3    [FPAREN_OPEN]       (
3    [STRING]            "one two"
3    [FPAREN_CLOSE]      )
3    [FPAREN_CLOSE]      )
3    [PAREN_CLOSE]       )
3    [FPAREN_CLOSE]      )
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [COMMENT_CPP]       // no crash (two parameter, 2nd string parameter has no space)
4    [NEWLINE]           
5    [TYPE]              void
5    [FUNC_PROTO]        check
5    [FPAREN_OPEN]       (
5    [QUALIFIER]         const
5    [TYPE]              QObject
5    [PTR_TYPE]          *
5    [WORD]              object
5    [COMMA]             ,
5    [QUALIFIER]         const
5    [TYPE]              QStringList
5    [BYREF]             &
5    [WORD]              strList
5    [ASSIGN]            =
5    [CPP_CAST]          QStringList
5    [PAREN_OPEN]        (
5    [FUNC_CALL]         QString
5    [FPAREN_OPEN]       (
5    [FUNC_CALL]         QLatin1String
5    [FPAREN_OPEN]       (
5    [STRING]            "one"
5    [FPAREN_CLOSE]      )
5    [FPAREN_CLOSE]      )
5    [PAREN_CLOSE]       )
5    [FPAREN_CLOSE]      )
5    [SEMICOLON]         ;
5    [NEWLINE]           
6    [COMMENT_CPP]       // no crash (removed QLatin1String)
6    [NEWLINE]           
7    [TYPE]              void
7    [FUNC_PROTO]        check
7    [FPAREN_OPEN]       (
7    [QUALIFIER]         const
7    [TYPE]              QObject
7    [PTR_TYPE]          *
7    [WORD]              object
7    [COMMA]             ,
7    [QUALIFIER]         const
7    [TYPE]              QStringList
7    [BYREF]             &
7    [WORD]              strList
7    [ASSIGN]            =
7    [CPP_CAST]          QStringList
7    [PAREN_OPEN]        (
7    [FUNC_CALL]         QString
7    [FPAREN_OPEN]       (
7    [PAREN_OPEN]        (
7    [STRING]            "one two"
7    [PAREN_CLOSE]       )
7    [FPAREN_CLOSE]      )
7    [PAREN_CLOSE]       )
7    [FPAREN_CLOSE]      )
7    [SEMICOLON]         ;
7    [NEWLINE]           
8    [COMMENT_CPP]       // no crash (removed QString(QLatin1String))
8    [NEWLINE]           
9    [TYPE]              void
9    [FUNC_PROTO]        check
9    [FPAREN_OPEN]       (
9    [QUALIFIER]         const
9    [TYPE]              QObject
9    [PTR_TYPE]          *
9    [WORD]              object
9    [COMMA]             ,
9    [QUALIFIER]         const
9    [TYPE]              QStringList
9    [BYREF]             &
9    [WORD]              strList
9    [ASSIGN]            =
9    [FUNC_CALL]         QStringList
9    [FPAREN_OPEN]       (
9    [FPAREN_CLOSE]      )
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [COMMENT_CPP]       // no crash (removed 1st parameter only)
10   [NEWLINE]           
11   [TYPE]              void
11   [FUNC_PROTO]        check
11   [FPAREN_OPEN]       (
11   [QUALIFIER]         const
11   [TYPE]              QStringList
11   [BYREF]             &
11   [WORD]              strList
11   [ASSIGN]            =
11   [CPP_CAST]          QStringList
11   [PAREN_OPEN]        (
11   [FUNC_CALL]         QString
11   [FPAREN_OPEN]       (
11   [FUNC_CALL]         QLatin1String
11   [FPAREN_OPEN]       (
11   [STRING]            "one two"
11   [FPAREN_CLOSE]      )
11   [FPAREN_CLOSE]      )
11   [PAREN_CLOSE]       )
11   [FPAREN_CLOSE]      )
11   [SEMICOLON]         ;
11   [NEWLINE]           
12   [BRACE_CLOSE]       }
12   [SEMICOLON]         ;
12   [NEWLINE]           