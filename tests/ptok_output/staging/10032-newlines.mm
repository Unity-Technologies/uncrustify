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
3    [OC_MSG]            [
3    [OC_MSG]            [
3    [NONE]              NSWorkspace
3    [NONE]              sharedWorkspace
3    [OC_MSG]            ]
3    [NONE]              absolutePathForAppBundleWithIdentifier
3    [NONE]              :
3    [NONE]              kXCodeBundleId
3    [OC_MSG]            ]
3    [OC_MSG]            ;
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
10   [OC_MSG]            [
10   [OC_MSG]            [
10   [NONE]              NSWorkspace
10   [NONE]              sharedWorkspace
10   [OC_MSG]            ]
10   [NONE]              launchApplication
10   [NONE]              :
10   [NONE]              curApp
10   [OC_MSG]            ]
10   [OC_MSG]            ;
10   [NONE]              
12   [NONE]              NSArray
12   [NONE]              *
12   [NONE]              selectedApps
12   [NONE]              =
12   [NONE]              
13   [OC_MSG]            [
13   [NONE]              NSRunningApplication
13   [NONE]              runningApplicationsWithBundleIdentifier
13   [NONE]              :
13   [NONE]              kXCodeBundleId
13   [OC_MSG]            ]
13   [OC_MSG]            ;
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
15   [OC_MSG]            [
15   [NONE]              selectedApps
15   [NONE]              count
15   [OC_MSG]            ]
15   [OC_MSG]            ;
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
17   [OC_MSG]            [
17   [NONE]              selectedApps
17   [NONE]              objectAtIndex
17   [NONE]              :
17   [NONE]              i
17   [OC_MSG]            ]
17   [OC_MSG]            ;
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
20   [OC_MSG]            [
20   [NONE]              app
20   [NONE]              isFinishedLaunching
20   [OC_MSG]            ]
20   [NONE]              &&
20   [NONE]              count
20   [NONE]              ++
20   [NONE]              <
20   [NONE]              300
20   [WHILE]             )
20   [WHILE]             
20   [NONE]              
21   [OC_MSG]            [
21   [OC_MSG]            [
21   [NONE]              NSRunLoop
21   [NONE]              currentRunLoop
21   [OC_MSG]            ]
21   [NONE]              runUntilDate
21   [NONE]              :
21   [OC_MSG]            [
21   [NONE]              NSDate
21   [NONE]              dateWithTimeIntervalSinceNow
21   [NONE]              :
21   [NONE]              1.0f
21   [OC_MSG]            ]
21   [OC_MSG]            ]
21   [OC_MSG]            ;
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
32   [OC_MSG]            [
32   [NONE]              NSString
32   [NONE]              stringWithUTF8String
32   [NONE]              :
32   [NONE]              string
32   [OC_MSG]            ]
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