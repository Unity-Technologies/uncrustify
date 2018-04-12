Line [Parent]            Text
1    [FUNC_DEF]          NSString
1    [FUNC_DEF]          *
1    [NONE]              GetXcodePath
1    [FUNC_DEF]          (
1    [FUNC_DEF]          )
1    [NONE]              
2    [FUNC_DEF]          {
2    [NONE]              
3    [NONE]              return
3    [CS_SQ_STMT]        [
3    [CS_SQ_STMT]        [
3    [CS_SQ_STMT]        NSWorkspace
3    [CS_SQ_STMT]        sharedWorkspace
3    [CS_SQ_STMT]        ]
3    [CS_SQ_STMT]        absolutePathForAppBundleWithIdentifier
3    [CS_SQ_STMT]        :
3    [CS_SQ_STMT]        kXCodeBundleId
3    [CS_SQ_STMT]        ]
3    [NONE]              ;
3    [NONE]              
4    [FUNC_DEF]          }
4    [NONE]              
7    [NONE]              extern
7    [EXTERN]            "C"
7    [FUNC_DEF]          EXPORTDLL
7    [FUNC_DEF]          void
7    [NONE]              LaunchXCode
7    [FUNC_DEF]          (
7    [FUNC_DEF]          )
7    [NONE]              
8    [FUNC_DEF]          {
8    [NONE]              
9    [NONE]              NSString
9    [NONE]              *
9    [NONE]              curApp
9    [NONE]              =
9    [NONE]              GetXcodePath
9    [FUNC_CALL]         (
9    [FUNC_CALL]         )
9    [NONE]              ;
9    [NONE]              
10   [CS_SQ_STMT]        [
10   [CS_SQ_STMT]        [
10   [CS_SQ_STMT]        NSWorkspace
10   [CS_SQ_STMT]        sharedWorkspace
10   [CS_SQ_STMT]        ]
10   [CS_SQ_STMT]        launchApplication
10   [CS_SQ_STMT]        :
10   [CS_SQ_STMT]        curApp
10   [CS_SQ_STMT]        ]
10   [NONE]              ;
10   [NONE]              
12   [NONE]              NSArray
12   [NONE]              *
12   [NONE]              selectedApps
12   [NONE]              =
12   [NONE]              
13   [CS_SQ_STMT]        [
13   [CS_SQ_STMT]        NSRunningApplication
13   [CS_SQ_STMT]        runningApplicationsWithBundleIdentifier
13   [CS_SQ_STMT]        :
13   [CS_SQ_STMT]        kXCodeBundleId
13   [CS_SQ_STMT]        ]
13   [NONE]              ;
13   [NONE]              
15   [NONE]              for
15   [FOR]               (
15   [NONE]              int
15   [NONE]              i
15   [NONE]              =
15   [NONE]              0
15   [FOR]               ;
15   [NONE]              i
15   [NONE]              <
15   [CS_SQ_STMT]        [
15   [CS_SQ_STMT]        selectedApps
15   [CS_SQ_STMT]        count
15   [CS_SQ_STMT]        ]
15   [FOR]               ;
15   [NONE]              i
15   [NONE]              ++
15   [FOR]               )
15   [NONE]              
16   [FOR]               {
16   [NONE]              
17   [NONE]              NSRunningApplication
17   [NONE]              *
17   [NONE]              app
17   [NONE]              =
17   [CS_SQ_STMT]        [
17   [CS_SQ_STMT]        selectedApps
17   [CS_SQ_STMT]        objectAtIndex
17   [CS_SQ_STMT]        :
17   [CS_SQ_STMT]        i
17   [CS_SQ_STMT]        ]
17   [NONE]              ;
17   [NONE]              
18   [NONE]              int
18   [NONE]              count
18   [NONE]              =
18   [NONE]              0
18   [NONE]              ;
18   [NONE]              
19   [NONE]              NSLog
19   [FUNC_CALL]         (
19   [NONE]              @"Checking %@\n"
19   [NONE]              ,
19   [NONE]              app
19   [FUNC_CALL]         )
19   [NONE]              ;
19   [NONE]              
20   [NONE]              while
20   [WHILE]             (
20   [NONE]              !
20   [CS_SQ_STMT]        [
20   [CS_SQ_STMT]        app
20   [CS_SQ_STMT]        isFinishedLaunching
20   [CS_SQ_STMT]        ]
20   [NONE]              &&
20   [NONE]              count
20   [NONE]              ++
20   [NONE]              <
20   [NONE]              300
20   [WHILE]             )
20   [WHILE]             
20   [NONE]              
21   [CS_SQ_STMT]        [
21   [CS_SQ_STMT]        [
21   [CS_SQ_STMT]        NSRunLoop
21   [CS_SQ_STMT]        currentRunLoop
21   [CS_SQ_STMT]        ]
21   [CS_SQ_STMT]        runUntilDate
21   [CS_SQ_STMT]        :
21   [CS_SQ_STMT]        [
21   [CS_SQ_STMT]        NSDate
21   [CS_SQ_STMT]        dateWithTimeIntervalSinceNow
21   [CS_SQ_STMT]        :
21   [CS_SQ_STMT]        1.0f
21   [CS_SQ_STMT]        ]
21   [CS_SQ_STMT]        ]
21   [NONE]              ;
21   [WHILE]             
21   [NONE]              
22   [FOR]               }
22   [NONE]              
23   [FUNC_DEF]          }
23   [NONE]              
26   [FUNC_DEF]          NSString
26   [FUNC_DEF]          *
26   [NONE]              MakeNSString
26   [FUNC_DEF]          (
26   [NONE]              const
26   [NONE]              std
26   [NONE]              ::
26   [NONE]              string
26   [NONE]              &
26   [NONE]              string
26   [FUNC_DEF]          )
26   [NONE]              
27   [FUNC_DEF]          {
27   [NONE]              
28   [NONE]              return
28   [NONE]              MakeNSString
28   [FUNC_CALL]         (
28   [NONE]              string
28   [NONE]              .
28   [NONE]              c_str
28   [FUNC_CALL]         (
28   [FUNC_CALL]         )
28   [FUNC_CALL]         )
28   [NONE]              ;
28   [NONE]              
29   [FUNC_DEF]          }
29   [NONE]              
30   [FUNC_DEF]          NSString
30   [FUNC_DEF]          *
30   [NONE]              MakeNSString
30   [FUNC_DEF]          (
30   [NONE]              const
30   [NONE]              char
30   [NONE]              *
30   [NONE]              string
30   [FUNC_DEF]          )
30   [NONE]              
31   [FUNC_DEF]          {
31   [NONE]              
32   [NONE]              NSString
32   [NONE]              *
32   [NONE]              ret
32   [NONE]              =
32   [NONE]              string
32   [NONE]              ?
32   [NONE]              [
32   [NONE]              NSString
32   [NONE]              stringWithUTF8String
32   [NONE]              :
32   [NONE]              string
32   [NONE]              ]
32   [NONE]              :
32   [NONE]              nil
32   [NONE]              ;
32   [NONE]              
33   [NONE]              return
33   [NONE]              ret
33   [NONE]              ?
33   [NONE]              ret
33   [NONE]              :
33   [NONE]              @""
33   [NONE]              ;
33   [NONE]              
34   [FUNC_DEF]          }
34   [NONE]              