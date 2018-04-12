Line [Token]             Text
1    [COMMENT_CPP]       // This kind of thing is still a problem:
1    [NEWLINE]           
3    [QUALIFIER]         public
3    [CLASS]             class
3    [TYPE]              Class
3    [NEWLINE]           
4    [BRACE_OPEN]        {
4    [NEWLINE]           
5    [QUALIFIER]         public
5    [QUALIFIER]         override
5    [TYPE]              MyNodeType
5    [CS_PROPERTY]       NodeType
5    [NEWLINE]           
5    [BRACE_OPEN]        {
5    [NEWLINE]           
6    [GETSET]            get
6    [NEWLINE]           
6    [BRACE_OPEN]        {
6    [NEWLINE]           
7    [IF]                if
7    [SPAREN_OPEN]       (
7    [WORD]              entity
7    [COMPARE]           !=
7    [WORD]              null
7    [SPAREN_CLOSE]      )
7    [VBRACE_OPEN]       
7    [NEWLINE]           
8    [RETURN]            return
8    [WORD]              entity
8    [MEMBER]            .
8    [WORD]              ReadState
8    [COMPARE]           ==
8    [WORD]              ReadState
8    [MEMBER]            .
8    [WORD]              Initial
8    [QUESTION]          ?
8    [NEWLINE]           
9    [WORD]              source
9    [MEMBER]            .
9    [WORD]              NodeType
9    [COND_COLON]        :
9    [NEWLINE]           
10   [TYPE]              entity
10   [MEMBER]            .
10   [TYPE]              EOF
10   [PTR_TYPE]          ?
10   [TYPE]              MyNodeType
10   [MEMBER]            .
10   [LABEL]             EndEntity
10   [LABEL_COLON]       :
10   [NEWLINE]           
11   [WORD]              entity
11   [MEMBER]            .
11   [WORD]              NodeType
11   [SEMICOLON]         ;
11   [VBRACE_CLOSE]      
11   [NEWLINE]           
12   [ELSE]              else
12   [VBRACE_OPEN]       
12   [NEWLINE]           
13   [RETURN]            return
13   [WORD]              source
13   [MEMBER]            .
13   [WORD]              NodeType
13   [SEMICOLON]         ;
13   [VBRACE_CLOSE]      
13   [NEWLINE]           
14   [BRACE_CLOSE]       }
14   [NEWLINE]           
15   [BRACE_CLOSE]       }
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [NEWLINE]           
18   [COMMENT_CPP]       // The second ? should have a space before it.
18   [NEWLINE]           