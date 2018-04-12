Line [Token]             Text
1    [COMMENT_CPP]       // *Single line functions*
1    [NEWLINE]           
3    [QUALIFIER]         public
3    [CLASS]             class
3    [TYPE]              Class
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [QUALIFIER]         public
5    [TYPE]              string
5    [CS_PROPERTY]       foo
5    [BRACE_OPEN]        {
5    [GETSET_EMPTY]      get
5    [SEMICOLON]         ;
5    [GETSET_EMPTY]      set
5    [SEMICOLON]         ;
5    [BRACE_CLOSE]       }
5    [NEWLINE]           
6    [QUALIFIER]         public
6    [TYPE]              string
6    [CS_PROPERTY]       foo
6    [BRACE_OPEN]        {
6    [GETSET_EMPTY]      get
6    [SEMICOLON]         ;
6    [GETSET_EMPTY]      set
6    [SEMICOLON]         ;
6    [BRACE_CLOSE]       }
6    [NEWLINE]           
8    [TYPE]              bool
8    [FUNC_DEF]          HasBar
8    [FPAREN_OPEN]       (
8    [FPAREN_CLOSE]      )
8    [BRACE_OPEN]        {
8    [RETURN]            return
8    [WORD]              m_HasBar
8    [COMPARE]           !=
8    [NUMBER]            0
8    [SEMICOLON]         ;
8    [BRACE_CLOSE]       }
8    [NEWLINE]           
9    [TYPE]              bool
9    [FUNC_DEF]          HasBar
9    [FPAREN_OPEN]       (
9    [FPAREN_CLOSE]      )
9    [BRACE_OPEN]        {
9    [RETURN]            return
9    [WORD]              m_HasBar
9    [COMPARE]           !=
9    [NUMBER]            0
9    [SEMICOLON]         ;
9    [BRACE_CLOSE]       }
9    [NEWLINE]           
11   [QUALIFIER]         public
11   [TYPE]              Bar
11   [CS_PROPERTY]       prop
11   [BRACE_OPEN]        {
11   [GETSET]            get
11   [BRACE_OPEN]        {
11   [RETURN]            return
11   [WORD]              m_bar
11   [SEMICOLON]         ;
11   [BRACE_CLOSE]       }
11   [GETSET]            set
11   [BRACE_OPEN]        {
11   [WORD]              m_bar
11   [ASSIGN]            =
11   [WORD]              value
11   [SEMICOLON]         ;
11   [BRACE_CLOSE]       }
11   [BRACE_CLOSE]       }
11   [NEWLINE]           
12   [QUALIFIER]         public
12   [TYPE]              Bar
12   [CS_PROPERTY]       prop
12   [BRACE_OPEN]        {
12   [GETSET]            get
12   [BRACE_OPEN]        {
12   [RETURN]            return
12   [WORD]              m_bar
12   [SEMICOLON]         ;
12   [BRACE_CLOSE]       }
12   [GETSET]            set
12   [BRACE_OPEN]        {
12   [WORD]              m_bar
12   [ASSIGN]            =
12   [WORD]              value
12   [SEMICOLON]         ;
12   [BRACE_CLOSE]       }
12   [BRACE_CLOSE]       }
12   [NEWLINE]           
14   [COMMENT_CPP]       // This seems to happen with no spaces on the interior. Opening brace doesn't get one, closing brace does.
14   [NEWLINE]           
16   [COMMENT_CPP]       // Turning on sp_inside_braces=add fixes it, but also changes a lot of initializer code we don't want to touch (like x = {1}). May need special support, or perhaps there's a bug..
16   [NEWLINE]           
18   [COMMENT_CPP]       // *Initializers*
18   [NEWLINE]           
20   [COMMENT_CPP]       // Not sure if this is what we want..
20   [NEWLINE]           
22   [QUALIFIER]         public
22   [TYPE]              void
22   [FUNC_DEF]          foo
22   [FPAREN_OPEN]       (
22   [FPAREN_CLOSE]      )
22   [NEWLINE]           
23   [BRACE_OPEN]        {
23   [NEWLINE]           
24   [TYPE]              sas
24   [MEMBER]            .
24   [FUNC_CALL]         Foo
24   [FPAREN_OPEN]       (
24   [STRING]            "bar"
24   [COMMA]             ,
24   [NEW]               new
24   [FUNC_CALL]         Dictionary
24   [ANGLE_OPEN]        <
24   [TYPE]              string
24   [COMMA]             ,
24   [TYPE]              object
24   [ANGLE_CLOSE]       >
24   [FPAREN_OPEN]       (
24   [FPAREN_CLOSE]      )
24   [BRACE_OPEN]        {
24   [BRACE_OPEN]        {
24   [STRING]            "k1"
24   [COMMA]             ,
24   [STRING]            "v1"
24   [BRACE_CLOSE]       }
24   [COMMA]             ,
24   [BRACE_OPEN]        {
24   [STRING]            "k2"
24   [COMMA]             ,
24   [STRING]            "v2"
24   [BRACE_CLOSE]       }
24   [BRACE_CLOSE]       }
24   [FPAREN_CLOSE]      )
24   [SEMICOLON]         ;
24   [NEWLINE]           
25   [COMMENT_CPP]       // ... --> ...
25   [NEWLINE]           
26   [TYPE]              sas
26   [MEMBER]            .
26   [FUNC_CALL]         Foo
26   [FPAREN_OPEN]       (
26   [STRING]            "bar"
26   [COMMA]             ,
26   [NEW]               new
26   [FUNC_CALL]         Dictionary
26   [ANGLE_OPEN]        <
26   [TYPE]              string
26   [COMMA]             ,
26   [TYPE]              object
26   [ANGLE_CLOSE]       >
26   [FPAREN_OPEN]       (
26   [FPAREN_CLOSE]      )
26   [BRACE_OPEN]        {
26   [BRACE_OPEN]        {
26   [STRING]            "k1"
26   [COMMA]             ,
26   [STRING]            "v1"
26   [BRACE_CLOSE]       }
26   [COMMA]             ,
26   [BRACE_OPEN]        {
26   [STRING]            "k2"
26   [COMMA]             ,
26   [STRING]            "v2"
26   [BRACE_CLOSE]       }
26   [BRACE_CLOSE]       }
26   [FPAREN_CLOSE]      )
26   [SEMICOLON]         ;
26   [NEWLINE]           
27   [BRACE_CLOSE]       }
27   [NEWLINE]           
29   [COMMENT_CPP]       // Second line adds a space before the initializer {. Is that what we want for C#?
29   [NEWLINE]           
30   [BRACE_CLOSE]       }
30   [NEWLINE]           