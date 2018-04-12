Line [Parent]            Text
1    [OC_MSG_DECL]       -
1    [OC_MSG_DECL]       (
1    [NONE]              id
1    [OC_MSG_DECL]       )
1    [OC_MSG_DECL]       init
1    [NONE]              
2    [OC_MSG_DECL]       {
2    [NONE]              
3    [NONE]              GLfloat
3    [NONE]              wc
3    [NONE]              [
3    [NONE]              3
3    [NONE]              ]
3    [NONE]              [
3    [NONE]              3
3    [NONE]              ]
3    [NONE]              =
3    [ASSIGN]            {
3    [NONE]              {
3    [NONE]              0.6
3    [NONE]              ,
3    [NONE]              0.6
3    [NONE]              ,
3    [NONE]              0.0
3    [NONE]              }
3    [NONE]              ,
3    [NONE]              {
3    [NONE]              1.0
3    [NONE]              ,
3    [NONE]              0.7
3    [NONE]              ,
3    [NONE]              0.1
3    [NONE]              }
3    [NONE]              ,
3    [NONE]              {
3    [NONE]              0.5
3    [NONE]              ,
3    [NONE]              0.7
3    [NONE]              ,
3    [NONE]              0.2
4    [NONE]              }
4    [NONE]              ,
4    [ASSIGN]            }
4    [NONE]              ;
4    [NONE]              
5    [NONE]              GLfloat
5    [NONE]              cc
5    [NONE]              [
5    [NONE]              3
5    [NONE]              ]
5    [NONE]              [
5    [NONE]              3
5    [NONE]              ]
5    [NONE]              =
5    [ASSIGN]            {
5    [NONE]              {
5    [NONE]              0.0
5    [NONE]              ,
5    [NONE]              0.0
5    [NONE]              ,
5    [NONE]              0.6
5    [NONE]              }
5    [NONE]              ,
5    [NONE]              {
5    [NONE]              0.3
5    [NONE]              ,
5    [NONE]              0.1
5    [NONE]              ,
5    [NONE]              0.5
5    [NONE]              }
5    [NONE]              ,
5    [NONE]              {
5    [NONE]              0.0
5    [NONE]              ,
5    [NONE]              0.0
5    [NONE]              ,
5    [NONE]              0.5
6    [NONE]              }
6    [NONE]              ,
6    [ASSIGN]            }
6    [NONE]              ;
6    [NONE]              
7    [NONE]              GLfloat
7    [NONE]              sc
7    [NONE]              [
7    [NONE]              3
7    [NONE]              ]
7    [NONE]              =
7    [ASSIGN]            {
7    [NONE]              0.75
7    [NONE]              ,
7    [NONE]              0.75
7    [NONE]              ,
7    [NONE]              0.75
7    [ASSIGN]            }
7    [NONE]              ;
7    [NONE]              
9    [NONE]              return
9    [OC_MSG]            [
9    [NONE]              self
9    [NONE]              initWithWarmColors
9    [NONE]              :
9    [C_CAST]            (
9    [C_CAST]            float
9    [C_CAST]            *
9    [C_CAST]            )
9    [NONE]              &
9    [NONE]              wc
9    [NONE]              
9    [NONE]              coolColors
9    [OC_MSG_NAME]       :
9    [C_CAST]            (
9    [C_CAST]            float
9    [C_CAST]            *
9    [C_CAST]            )
9    [NONE]              &
9    [NONE]              cc
9    [NONE]              
10   [NONE]              surfaceColor
10   [OC_MSG_NAME]       :
10   [NONE]              sc
10   [NONE]              
10   [NONE]              enableTexturing
10   [OC_MSG_NAME]       :
10   [NONE]              NO
10   [NONE]              
10   [NONE]              enableSpecular
10   [OC_MSG_NAME]       :
10   [NONE]              YES
10   [NONE]              
11   [NONE]              enableQuakeDisruptor
11   [OC_MSG_NAME]       :
11   [NONE]              NO
11   [OC_MSG]            ]
11   [OC_MSG]            ;
11   [NONE]              
13   [OC_MSG]            [
13   [NONE]              NSException
13   [NONE]              raise
13   [NONE]              :
13   [NONE]              NSInternalInconsistency
13   [NONE]              
14   [NONE]              format
14   [OC_MSG_NAME]       :
14   [NONE]              @"An internal inconsistency was raised"
14   [OC_MSG]            ]
14   [OC_MSG]            ;
14   [NONE]              
16   [NONE]              for
16   [FOR]               (
16   [NONE]              i
16   [NONE]              =
16   [NONE]              0
16   [FOR]               ;
16   [NONE]              i
16   [NONE]              <
16   [OC_MSG]            [
16   [NONE]              a
16   [NONE]              count
16   [OC_MSG]            ]
16   [OC_MSG]            ;
16   [NONE]              i
16   [NONE]              ++
16   [FOR]               )
16   [NONE]              
16   [FOR]               {
16   [NONE]              
17   [OC_MSG]            [
17   [NONE]              thePerson
17   [NONE]              setAmount
17   [NONE]              :
17   [NONE]              (
17   [NONE]              1.5
17   [NONE]              *
17   [NONE]              17
17   [NONE]              )
17   [NONE]              forKey
17   [OC_MSG_NAME]       :
17   [NONE]              @"overtime"
17   [OC_MSG]            ]
17   [OC_MSG]            ;
17   [NONE]              
18   [OC_MSG]            [
18   [NONE]              screen
18   [NONE]              showtext
18   [NONE]              :
18   [NONE]              x
18   [NONE]              :
18   [NONE]              y
18   [NONE]              :
18   [NONE]              @"Message"
18   [OC_MSG]            ]
18   [OC_MSG]            ;
18   [NONE]              
19   [FOR]               }
19   [NONE]              
20   [OC_MSG_DECL]       }
20   [NONE]              
22   [NONE]              *
22   [NONE]              outError
22   [NONE]              =
22   [OC_MSG]            [
22   [NONE]              NSError
22   [NONE]              errorWithDomain
22   [NONE]              :
22   [NONE]              NSCocoaErrorDomain
22   [NONE]              
23   [NONE]              code
23   [OC_MSG_NAME]       :
23   [NONE]              0
23   [NONE]              
24   [NONE]              userInfo
24   [OC_MSG_NAME]       :
24   [OC_MSG]            [
24   [NONE]              NSDictionary
24   [NONE]              
25   [NONE]              dictionaryWithObject
25   [NONE]              :
25   [NONE]              @"Some Description"
25   [NONE]              
26   [NONE]              forKey
26   [OC_MSG_NAME]       :
26   [NONE]              NSLocalizedDescriptionKey
26   [OC_MSG]            ]
26   [OC_MSG]            ]
26   [OC_MSG]            ;
26   [NONE]              