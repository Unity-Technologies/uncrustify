Line [Token]             Text
1    [OC_SCOPE]          -
1    [PAREN_OPEN]        (
1    [TYPE]              id
1    [PAREN_CLOSE]       )
1    [OC_MSG_DECL]       init
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [TYPE]              GLfloat
3    [WORD]              wc
3    [SQUARE_OPEN]       [
3    [NUMBER]            3
3    [SQUARE_CLOSE]      ]
3    [SQUARE_OPEN]       [
3    [NUMBER]            3
3    [SQUARE_CLOSE]      ]
3    [ASSIGN]            =
3    [BRACE_OPEN]        {
3    [BRACE_OPEN]        {
3    [NUMBER_FP]         0.6
3    [COMMA]             ,
3    [NUMBER_FP]         0.6
3    [COMMA]             ,
3    [NUMBER_FP]         0.0
3    [BRACE_CLOSE]       }
3    [COMMA]             ,
3    [BRACE_OPEN]        {
3    [NUMBER_FP]         1.0
3    [COMMA]             ,
3    [NUMBER_FP]         0.7
3    [COMMA]             ,
3    [NUMBER_FP]         0.1
3    [BRACE_CLOSE]       }
3    [COMMA]             ,
3    [BRACE_OPEN]        {
3    [NUMBER_FP]         0.5
3    [COMMA]             ,
3    [NUMBER_FP]         0.7
3    [COMMA]             ,
3    [NUMBER_FP]         0.2
4    [BRACE_CLOSE]       }
4    [COMMA]             ,
4    [BRACE_CLOSE]       }
4    [SEMICOLON]         ;
4    [NEWLINE]           
5    [TYPE]              GLfloat
5    [WORD]              cc
5    [SQUARE_OPEN]       [
5    [NUMBER]            3
5    [SQUARE_CLOSE]      ]
5    [SQUARE_OPEN]       [
5    [NUMBER]            3
5    [SQUARE_CLOSE]      ]
5    [ASSIGN]            =
5    [BRACE_OPEN]        {
5    [BRACE_OPEN]        {
5    [NUMBER_FP]         0.0
5    [COMMA]             ,
5    [NUMBER_FP]         0.0
5    [COMMA]             ,
5    [NUMBER_FP]         0.6
5    [BRACE_CLOSE]       }
5    [COMMA]             ,
5    [BRACE_OPEN]        {
5    [NUMBER_FP]         0.3
5    [COMMA]             ,
5    [NUMBER_FP]         0.1
5    [COMMA]             ,
5    [NUMBER_FP]         0.5
5    [BRACE_CLOSE]       }
5    [COMMA]             ,
5    [BRACE_OPEN]        {
5    [NUMBER_FP]         0.0
5    [COMMA]             ,
5    [NUMBER_FP]         0.0
5    [COMMA]             ,
5    [NUMBER_FP]         0.5
6    [BRACE_CLOSE]       }
6    [COMMA]             ,
6    [BRACE_CLOSE]       }
6    [SEMICOLON]         ;
6    [NEWLINE]           
7    [TYPE]              GLfloat
7    [WORD]              sc
7    [SQUARE_OPEN]       [
7    [NUMBER]            3
7    [SQUARE_CLOSE]      ]
7    [ASSIGN]            =
7    [BRACE_OPEN]        {
7    [NUMBER_FP]         0.75
7    [COMMA]             ,
7    [NUMBER_FP]         0.75
7    [COMMA]             ,
7    [NUMBER_FP]         0.75
7    [BRACE_CLOSE]       }
7    [SEMICOLON]         ;
7    [NEWLINE]           
9    [RETURN]            return
9    [SQUARE_OPEN]       [
9    [OC_MSG_CLASS]      self
9    [OC_MSG_FUNC]       initWithWarmColors
9    [OC_COLON]          :
9    [PAREN_OPEN]        (
9    [TYPE]              float
9    [PTR_TYPE]          *
9    [PAREN_CLOSE]       )
9    [ADDR]              &
9    [TYPE]              wc
9    [NEWLINE]           
9    [OC_MSG_NAME]       coolColors
9    [OC_COLON]          :
9    [PAREN_OPEN]        (
9    [TYPE]              float
9    [PTR_TYPE]          *
9    [PAREN_CLOSE]       )
9    [ADDR]              &
9    [TYPE]              cc
9    [NEWLINE]           
10   [OC_MSG_NAME]       surfaceColor
10   [OC_COLON]          :
10   [TYPE]              sc
10   [NEWLINE]           
10   [OC_MSG_NAME]       enableTexturing
10   [OC_COLON]          :
10   [TYPE]              NO
10   [NEWLINE]           
10   [OC_MSG_NAME]       enableSpecular
10   [OC_COLON]          :
10   [TYPE]              YES
10   [NEWLINE]           
11   [OC_MSG_NAME]       enableQuakeDisruptor
11   [OC_COLON]          :
11   [WORD]              NO
11   [SQUARE_CLOSE]      ]
11   [SEMICOLON]         ;
11   [NEWLINE]           
13   [SQUARE_OPEN]       [
13   [OC_MSG_CLASS]      NSException
13   [OC_MSG_FUNC]       raise
13   [OC_COLON]          :
13   [TYPE]              NSInternalInconsistency
13   [NEWLINE]           
14   [OC_MSG_NAME]       format
14   [OC_COLON]          :
14   [STRING]            @"An internal inconsistency was raised"
14   [SQUARE_CLOSE]      ]
14   [SEMICOLON]         ;
14   [NEWLINE]           
16   [FOR]               for
16   [SPAREN_OPEN]       (
16   [WORD]              i
16   [ASSIGN]            =
16   [NUMBER]            0
16   [SEMICOLON]         ;
16   [WORD]              i
16   [COMPARE]           <
16   [SQUARE_OPEN]       [
16   [OC_MSG_CLASS]      a
16   [OC_MSG_FUNC]       count
16   [SQUARE_CLOSE]      ]
16   [SEMICOLON]         ;
16   [WORD]              i
16   [INCDEC_AFTER]      ++
16   [SPAREN_CLOSE]      )
16   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [SQUARE_OPEN]       [
17   [OC_MSG_CLASS]      thePerson
17   [OC_MSG_FUNC]       setAmount
17   [OC_COLON]          :
17   [PAREN_OPEN]        (
17   [NUMBER_FP]         1.5
17   [ARITH]             *
17   [NUMBER]            17
17   [PAREN_CLOSE]       )
17   [OC_MSG_NAME]       forKey
17   [OC_COLON]          :
17   [STRING]            @"overtime"
17   [SQUARE_CLOSE]      ]
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [SQUARE_OPEN]       [
18   [OC_MSG_CLASS]      screen
18   [OC_MSG_FUNC]       showtext
18   [OC_COLON]          :
18   [WORD]              x
18   [OC_COLON]          :
18   [WORD]              y
18   [OC_COLON]          :
18   [STRING]            @"Message"
18   [SQUARE_CLOSE]      ]
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [BRACE_CLOSE]       }
19   [NEWLINE]           
20   [BRACE_CLOSE]       }
20   [NEWLINE]           
22   [DEREF]             *
22   [WORD]              outError
22   [ASSIGN]            =
22   [SQUARE_OPEN]       [
22   [OC_MSG_CLASS]      NSError
22   [OC_MSG_FUNC]       errorWithDomain
22   [OC_COLON]          :
22   [TYPE]              NSCocoaErrorDomain
22   [NEWLINE]           
23   [OC_MSG_NAME]       code
23   [OC_COLON]          :
23   [NUMBER]            0
23   [NEWLINE]           
24   [OC_MSG_NAME]       userInfo
24   [OC_COLON]          :
24   [SQUARE_OPEN]       [
24   [OC_MSG_CLASS]      NSDictionary
24   [NEWLINE]           
25   [OC_MSG_FUNC]       dictionaryWithObject
25   [OC_COLON]          :
25   [STRING]            @"Some Description"
25   [NEWLINE]           
26   [OC_MSG_NAME]       forKey
26   [OC_COLON]          :
26   [WORD]              NSLocalizedDescriptionKey
26   [SQUARE_CLOSE]      ]
26   [SQUARE_CLOSE]      ]
26   [SEMICOLON]         ;
26   [NEWLINE]           