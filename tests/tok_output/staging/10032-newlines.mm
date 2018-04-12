Line [Token]             Text
1    [TYPE]              NSString
1    [PTR_TYPE]          *
1    [FUNC_DEF]          GetXcodePath
1    [FPAREN_OPEN]       (
1    [FPAREN_CLOSE]      )
1    [NEWLINE]           
2    [BRACE_OPEN]        {
2    [NEWLINE]           
3    [RETURN]            return
3    [SQUARE_OPEN]       [
3    [SQUARE_OPEN]       [
3    [OC_MSG_CLASS]      NSWorkspace
3    [OC_MSG_FUNC]       sharedWorkspace
3    [SQUARE_CLOSE]      ]
3    [OC_MSG_FUNC]       absolutePathForAppBundleWithIdentifier
3    [OC_COLON]          :
3    [WORD]              kXCodeBundleId
3    [SQUARE_CLOSE]      ]
3    [SEMICOLON]         ;
3    [NEWLINE]           
4    [BRACE_CLOSE]       }
4    [NEWLINE]           
7    [EXTERN]            extern
7    [STRING]            "C"
7    [TYPE]              EXPORTDLL
7    [TYPE]              void
7    [FUNC_DEF]          LaunchXCode
7    [FPAREN_OPEN]       (
7    [FPAREN_CLOSE]      )
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [TYPE]              NSString
9    [PTR_TYPE]          *
9    [WORD]              curApp
9    [ASSIGN]            =
9    [FUNC_CALL]         GetXcodePath
9    [FPAREN_OPEN]       (
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [SQUARE_OPEN]       [
10   [SQUARE_OPEN]       [
10   [OC_MSG_CLASS]      NSWorkspace
10   [OC_MSG_FUNC]       sharedWorkspace
10   [SQUARE_CLOSE]      ]
10   [OC_MSG_FUNC]       launchApplication
10   [OC_COLON]          :
10   [WORD]              curApp
10   [SQUARE_CLOSE]      ]
10   [SEMICOLON]         ;
10   [NEWLINE]           
12   [TYPE]              NSArray
12   [PTR_TYPE]          *
12   [WORD]              selectedApps
12   [ASSIGN]            =
12   [NEWLINE]           
13   [SQUARE_OPEN]       [
13   [OC_MSG_CLASS]      NSRunningApplication
13   [OC_MSG_FUNC]       runningApplicationsWithBundleIdentifier
13   [OC_COLON]          :
13   [WORD]              kXCodeBundleId
13   [SQUARE_CLOSE]      ]
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [FOR]               for
15   [SPAREN_OPEN]       (
15   [TYPE]              int
15   [WORD]              i
15   [ASSIGN]            =
15   [NUMBER]            0
15   [SEMICOLON]         ;
15   [WORD]              i
15   [COMPARE]           <
15   [SQUARE_OPEN]       [
15   [OC_MSG_CLASS]      selectedApps
15   [OC_MSG_FUNC]       count
15   [SQUARE_CLOSE]      ]
15   [SEMICOLON]         ;
15   [WORD]              i
15   [INCDEC_AFTER]      ++
15   [SPAREN_CLOSE]      )
15   [NEWLINE]           
16   [BRACE_OPEN]        {
16   [NEWLINE]           
17   [TYPE]              NSRunningApplication
17   [PTR_TYPE]          *
17   [WORD]              app
17   [ASSIGN]            =
17   [SQUARE_OPEN]       [
17   [OC_MSG_CLASS]      selectedApps
17   [OC_MSG_FUNC]       objectAtIndex
17   [OC_COLON]          :
17   [WORD]              i
17   [SQUARE_CLOSE]      ]
17   [SEMICOLON]         ;
17   [NEWLINE]           
18   [TYPE]              int
18   [WORD]              count
18   [ASSIGN]            =
18   [NUMBER]            0
18   [SEMICOLON]         ;
18   [NEWLINE]           
19   [FUNC_CALL]         NSLog
19   [FPAREN_OPEN]       (
19   [STRING]            @"Checking %@\n"
19   [COMMA]             ,
19   [WORD]              app
19   [FPAREN_CLOSE]      )
19   [SEMICOLON]         ;
19   [NEWLINE]           
20   [WHILE]             while
20   [SPAREN_OPEN]       (
20   [NOT]               !
20   [SQUARE_OPEN]       [
20   [OC_MSG_CLASS]      app
20   [OC_MSG_FUNC]       isFinishedLaunching
20   [SQUARE_CLOSE]      ]
20   [BOOL]              &&
20   [WORD]              count
20   [INCDEC_AFTER]      ++
20   [COMPARE]           <
20   [NUMBER]            300
20   [SPAREN_CLOSE]      )
20   [VBRACE_OPEN]       
20   [NEWLINE]           
21   [SQUARE_OPEN]       [
21   [SQUARE_OPEN]       [
21   [OC_MSG_CLASS]      NSRunLoop
21   [OC_MSG_FUNC]       currentRunLoop
21   [SQUARE_CLOSE]      ]
21   [OC_MSG_FUNC]       runUntilDate
21   [OC_COLON]          :
21   [SQUARE_OPEN]       [
21   [OC_MSG_CLASS]      NSDate
21   [OC_MSG_FUNC]       dateWithTimeIntervalSinceNow
21   [OC_COLON]          :
21   [NUMBER_FP]         1.0f
21   [SQUARE_CLOSE]      ]
21   [SQUARE_CLOSE]      ]
21   [SEMICOLON]         ;
21   [VBRACE_CLOSE]      
21   [NEWLINE]           
22   [BRACE_CLOSE]       }
22   [NEWLINE]           
23   [BRACE_CLOSE]       }
23   [NEWLINE]           
26   [TYPE]              NSString
26   [PTR_TYPE]          *
26   [FUNC_DEF]          MakeNSString
26   [FPAREN_OPEN]       (
26   [QUALIFIER]         const
26   [TYPE]              std
26   [DC_MEMBER]         ::
26   [TYPE]              string
26   [BYREF]             &
26   [WORD]              string
26   [FPAREN_CLOSE]      )
26   [NEWLINE]           
27   [BRACE_OPEN]        {
27   [NEWLINE]           
28   [RETURN]            return
28   [FUNC_CALL]         MakeNSString
28   [FPAREN_OPEN]       (
28   [WORD]              string
28   [MEMBER]            .
28   [FUNC_CALL]         c_str
28   [FPAREN_OPEN]       (
28   [FPAREN_CLOSE]      )
28   [FPAREN_CLOSE]      )
28   [SEMICOLON]         ;
28   [NEWLINE]           
29   [BRACE_CLOSE]       }
29   [NEWLINE]           
30   [TYPE]              NSString
30   [PTR_TYPE]          *
30   [FUNC_DEF]          MakeNSString
30   [FPAREN_OPEN]       (
30   [QUALIFIER]         const
30   [TYPE]              char
30   [PTR_TYPE]          *
30   [WORD]              string
30   [FPAREN_CLOSE]      )
30   [NEWLINE]           
31   [BRACE_OPEN]        {
31   [NEWLINE]           
32   [TYPE]              NSString
32   [PTR_TYPE]          *
32   [WORD]              ret
32   [ASSIGN]            =
32   [WORD]              string
32   [QUESTION]          ?
32   [SQUARE_OPEN]       [
32   [OC_MSG_CLASS]      NSString
32   [OC_MSG_FUNC]       stringWithUTF8String
32   [OC_COLON]          :
32   [WORD]              string
32   [SQUARE_CLOSE]      ]
32   [COND_COLON]        :
32   [WORD]              nil
32   [SEMICOLON]         ;
32   [NEWLINE]           
33   [RETURN]            return
33   [WORD]              ret
33   [QUESTION]          ?
33   [WORD]              ret
33   [COND_COLON]        :
33   [STRING]            @""
33   [SEMICOLON]         ;
33   [NEWLINE]           
34   [BRACE_CLOSE]       }
34   [NEWLINE]           