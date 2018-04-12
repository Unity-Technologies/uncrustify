Line [Token]             Text
1    [NEWLINE]           
2    [TYPE]              NSDictionary
2    [PTR_TYPE]          *
2    [WORD]              dictionary
2    [ASSIGN]            =
2    [OC_AT]             @
2    [BRACE_OPEN]        {
2    [NEWLINE]           
2    [NUMBER]            @0
2    [OC_DICT_COLON]     :
2    [STRING]            @"red"
2    [COMMA]             ,
2    [NUMBER]            @1
2    [OC_DICT_COLON]     :
2    [STRING]            @"green"
2    [COMMA]             ,
2    [NUMBER]            @2
2    [OC_DICT_COLON]     :
2    [STRING]            @"blue"
2    [NEWLINE]           
2    [BRACE_CLOSE]       }
2    [SEMICOLON]         ;
2    [NEWLINE]           
4    [TYPE]              NSArray
4    [PTR_TYPE]          *
4    [WORD]              array
4    [ASSIGN]            =
4    [OC_AT]             @
4    [SQUARE_OPEN]       [
4    [NUMBER]            @0
4    [COMMA]             ,
4    [NUMBER]            @1
4    [COMMA]             ,
4    [NUMBER]            @2
4    [COMMA]             ,
4    [WORD]              @YES
4    [COMMA]             ,
4    [STRING]            @'Z'
4    [COMMA]             ,
4    [NUMBER]            @42U
4    [SQUARE_CLOSE]      ]
4    [SEMICOLON]         ;
4    [NEWLINE]           
6    [TYPE]              NSArray
6    [PTR_TYPE]          *
6    [WORD]              multilineArray
6    [ASSIGN]            =
6    [OC_AT]             @
6    [SQUARE_OPEN]       [
6    [NEWLINE]           
7    [NUMBER]            @0
7    [COMMA]             ,
7    [NUMBER]            @1
7    [COMMA]             ,
7    [NUMBER]            @2
7    [COMMA]             ,
7    [WORD]              @YES
7    [COMMA]             ,
7    [NEWLINE]           
8    [STRING]            @'Z'
8    [COMMA]             ,
8    [NUMBER]            @42U
8    [NEWLINE]           
9    [SQUARE_CLOSE]      ]
9    [SEMICOLON]         ;
9    [NEWLINE]           
11   [TYPE]              void
11   [FUNC_DEF]          main
11   [FPAREN_OPEN]       (
11   [TYPE]              int
11   [WORD]              argc
11   [COMMA]             ,
11   [QUALIFIER]         const
11   [TYPE]              char
11   [PTR_TYPE]          *
11   [WORD]              argv
11   [TSQUARE]           []
11   [FPAREN_CLOSE]      )
11   [NEWLINE]           
11   [BRACE_OPEN]        {
11   [NEWLINE]           
12   [COMMENT_CPP]       // character literals.
12   [NEWLINE]           
13   [TYPE]              NSNumber
13   [PTR_TYPE]          *
13   [WORD]              theLetterZ
13   [ASSIGN]            =
13   [STRING]            @'Z'
13   [SEMICOLON]         ;
13   [COMMENT_CPP]       // equivalent to [NSNumber numberWithChar:'Z']
13   [NEWLINE]           
15   [COMMENT_CPP]       // integral literals.
15   [NEWLINE]           
16   [TYPE]              NSNumber
16   [PTR_TYPE]          *
16   [WORD]              fortyTwo
16   [ASSIGN]            =
16   [NUMBER]            @42
16   [SEMICOLON]         ;
16   [COMMENT_CPP]       // equivalent to [NSNumber numberWithInt:42]
16   [NEWLINE]           
17   [TYPE]              NSNumber
17   [PTR_TYPE]          *
17   [WORD]              fortyTwoUnsigned
17   [ASSIGN]            =
17   [NUMBER]            @42U
17   [SEMICOLON]         ;
17   [COMMENT_CPP]       // equivalent to [NSNumber numberWithUnsignedInt:42U]
17   [NEWLINE]           
18   [TYPE]              NSNumber
18   [PTR_TYPE]          *
18   [WORD]              fortyTwoLong
18   [ASSIGN]            =
18   [NUMBER]            @42L
18   [SEMICOLON]         ;
18   [COMMENT_CPP]       // equivalent to [NSNumber numberWithLong:42L]
18   [NEWLINE]           
19   [TYPE]              NSNumber
19   [PTR_TYPE]          *
19   [WORD]              fortyTwoLongLong
19   [ASSIGN]            =
19   [NUMBER]            @42LL
19   [SEMICOLON]         ;
19   [COMMENT_CPP]       // equivalent to [NSNumber numberWithLongLong:42LL]
19   [NEWLINE]           
21   [COMMENT_CPP]       // floating point literals.
21   [NEWLINE]           
22   [TYPE]              NSNumber
22   [PTR_TYPE]          *
22   [WORD]              piFloat
22   [ASSIGN]            =
22   [NUMBER_FP]         @3.141592654F
22   [SEMICOLON]         ;
22   [COMMENT_CPP]       // equivalent to [NSNumber numberWithFloat:3.141592654F]
22   [NEWLINE]           
23   [TYPE]              NSNumber
23   [PTR_TYPE]          *
23   [WORD]              piDouble
23   [ASSIGN]            =
23   [NUMBER_FP]         @3.1415926535
23   [SEMICOLON]         ;
23   [COMMENT_CPP]       // equivalent to [NSNumber numberWithDouble:3.1415926535]
23   [NEWLINE]           
25   [COMMENT_CPP]       // BOOL literals.
25   [NEWLINE]           
26   [TYPE]              NSNumber
26   [PTR_TYPE]          *
26   [WORD]              yesNumber
26   [ASSIGN]            =
26   [WORD]              @YES
26   [SEMICOLON]         ;
26   [COMMENT_CPP]       // equivalent to [NSNumber numberWithBool:YES]
26   [NEWLINE]           
27   [TYPE]              NSNumber
27   [PTR_TYPE]          *
27   [WORD]              noNumber
27   [ASSIGN]            =
27   [WORD]              @NO
27   [SEMICOLON]         ;
27   [COMMENT_CPP]       // equivalent to [NSNumber numberWithBool:NO]
27   [NEWLINE]           
29   [PREPROC]           #
29   [PP_IF]             ifdef
29   [TYPE]              __cplusplus
29   [NEWLINE]           
30   [TYPE]              NSNumber
30   [PTR_TYPE]          *
30   [WORD]              trueNumber
30   [ASSIGN]            =
30   [WORD]              @true
30   [SEMICOLON]         ;
30   [COMMENT_CPP]       // equivalent to [NSNumber numberWithBool:(BOOL)true]
30   [NEWLINE]           
31   [TYPE]              NSNumber
31   [PTR_TYPE]          *
31   [WORD]              falseNumber
31   [ASSIGN]            =
31   [WORD]              @false
31   [SEMICOLON]         ;
31   [COMMENT_CPP]       // equivalent to [NSNumber numberWithBool:(BOOL)false]
31   [NEWLINE]           
32   [PREPROC]           #
32   [PP_ENDIF]          endif
32   [NEWLINE]           
33   [BRACE_CLOSE]       }
33   [NEWLINE]           