Line [Parent]            Text
1    [COMMENT_WHOLE]     // Create oneliners
1    [NONE]              
3    [NONE]              extern
3    [EXTERN]            "C"
3    [FUNC_DEF]          NSBundle
3    [FUNC_DEF]          *
3    [NONE]              UnityGetMetalBundle
3    [FUNC_DEF]          (
3    [FUNC_DEF]          )
3    [FUNC_DEF]          {
4    [NONE]              return
4    [NONE]              _MetalBundle
4    [NONE]              ;
5    [FUNC_DEF]          }
5    [NONE]              
6    [NONE]              extern
6    [EXTERN]            "C"
6    [FUNC_DEF]          MTLDeviceRef
6    [NONE]              UnityGetMetalDevice
6    [FUNC_DEF]          (
6    [FUNC_DEF]          )
6    [FUNC_DEF]          {
6    [NONE]              return
6    [NONE]              _MetalDevice
6    [NONE]              ;
6    [FUNC_DEF]          }
6    [NONE]              
7    [NONE]              extern
7    [EXTERN]            "C"
7    [FUNC_DEF]          MTLCommandQueueRef
7    [NONE]              UnityGetMetalCommandQueue
7    [FUNC_DEF]          (
7    [FUNC_DEF]          )
7    [FUNC_DEF]          {
7    [NONE]              return
7    [NONE]              (
7    [C_CAST]            (
7    [C_CAST]            UnityDisplaySurfaceMTL
7    [C_CAST]            *
7    [C_CAST]            )
7    [NONE]              GetMainDisplaySurface
7    [FUNC_CALL]         (
7    [FUNC_CALL]         )
7    [NONE]              )
7    [NONE]              ->
7    [NONE]              commandQueue
7    [NONE]              ;
7    [FUNC_DEF]          }
7    [NONE]              
9    [NONE]              extern
9    [EXTERN]            "C"
9    [FUNC_DEF]          EAGLContext
9    [FUNC_DEF]          *
9    [NONE]              UnityGetDataContextEAGL
9    [FUNC_DEF]          (
9    [FUNC_DEF]          )
9    [FUNC_DEF]          {
10   [NONE]              return
10   [NONE]              _GlesContext
10   [NONE]              ;
11   [FUNC_DEF]          }
11   [NONE]              
13   [COMMENT_WHOLE]     // Keep oneliners
13   [NONE]              
15   [NONE]              extern
15   [EXTERN]            "C"
15   [FUNC_DEF]          NSBundle
15   [FUNC_DEF]          *
15   [NONE]              UnityGetMetalBundle
15   [FUNC_DEF]          (
15   [FUNC_DEF]          )
15   [FUNC_DEF]          {
15   [NONE]              return
15   [NONE]              _MetalBundle
15   [NONE]              ;
15   [FUNC_DEF]          }
15   [NONE]              
16   [NONE]              extern
16   [EXTERN]            "C"
16   [FUNC_DEF]          MTLDeviceRef
16   [NONE]              UnityGetMetalDevice
16   [FUNC_DEF]          (
16   [FUNC_DEF]          )
16   [FUNC_DEF]          {
16   [NONE]              return
16   [NONE]              _MetalDevice
16   [NONE]              ;
16   [FUNC_DEF]          }
16   [NONE]              
17   [NONE]              extern
17   [EXTERN]            "C"
17   [FUNC_DEF]          MTLCommandQueueRef
17   [NONE]              UnityGetMetalCommandQueue
17   [FUNC_DEF]          (
17   [FUNC_DEF]          )
17   [FUNC_DEF]          {
17   [NONE]              return
17   [NONE]              (
17   [C_CAST]            (
17   [C_CAST]            UnityDisplaySurfaceMTL
17   [C_CAST]            *
17   [C_CAST]            )
17   [NONE]              GetMainDisplaySurface
17   [FUNC_CALL]         (
17   [FUNC_CALL]         )
17   [NONE]              )
17   [NONE]              ->
17   [NONE]              commandQueue
17   [NONE]              ;
17   [FUNC_DEF]          }
17   [NONE]              
19   [NONE]              extern
19   [EXTERN]            "C"
19   [FUNC_DEF]          EAGLContext
19   [FUNC_DEF]          *
19   [NONE]              UnityGetDataContextEAGL
19   [FUNC_DEF]          (
19   [FUNC_DEF]          )
19   [FUNC_DEF]          {
19   [NONE]              return
19   [NONE]              _GlesContext
19   [NONE]              ;
19   [FUNC_DEF]          }
19   [NONE]              