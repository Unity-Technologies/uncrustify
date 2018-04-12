Line [Parent]            Text
1    [PP_INCLUDE]        #
1    [NONE]              import
1    [NONE]              <Foundation/Foundation.h>
1    [NONE]              
3    [NONE]              @interface
3    [OC_INTF]           TestClass
3    [OC_CLASS]          :
3    [NONE]              NSObject
3    [NONE]              
4    [OC_INTF]           @end
4    [NONE]              
6    [NONE]              @implementation
6    [OC_IMPL]           TestClass
6    [NONE]              
8    [OC_MSG_DECL]       -
8    [OC_MSG_DECL]       (
8    [NONE]              void
8    [OC_MSG_DECL]       )
8    [OC_MSG_DECL]       drawSomething
8    [OC_MSG_DECL]       :
8    [OC_MSG_DECL]       (
8    [NONE]              id
8    [OC_PROTO_LIST]     <
8    [OC_PROTO_LIST]     MTLCommandBuffer
8    [OC_PROTO_LIST]     >
8    [OC_MSG_DECL]       )
8    [NONE]              commandBuffer
8    [OC_MSG_DECL]       {
8    [NONE]              
9    [OC_MSG]            [
9    [NONE]              renderPass
9    [NONE]              performDrawBlock
9    [NONE]              :
9    [OC_BLOCK_EXPR]     ^
9    [OC_BLOCK_EXPR]     (
9    [OC_BLOCK_EXPR]     id
9    [OC_BLOCK_EXPR]     <
9    [OC_BLOCK_EXPR]     MTLRenderCommandEncoder
9    [OC_BLOCK_EXPR]     >
9    [OC_BLOCK_EXPR]     renderCommandEncoder
9    [OC_BLOCK_EXPR]     )
9    [OC_BLOCK_EXPR]     {
9    [NONE]              
10   [NONE]              screenBlitObject
10   [NONE]              .
10   [NONE]              texture
10   [NONE]              =
10   [NONE]              src
10   [NONE]              ;
10   [NONE]              
12   [COMMENT_WHOLE]     // Make sure the pipeline state pixelformat is the same as destination pixel format
12   [NONE]              
13   [OC_MSG]            [
13   [NONE]              screenBlitObject
13   [NONE]              updatePipelineState
13   [NONE]              :
13   [NONE]              dst
13   [NONE]              .
13   [NONE]              pixelFormat
13   [OC_MSG]            ]
13   [OC_MSG]            ;
13   [NONE]              
15   [OC_MSG]            [
15   [NONE]              screenBlitObject
15   [NONE]              drawWithRenderCommandEncoder
15   [NONE]              :
15   [NONE]              renderCommandEncoder
15   [OC_MSG]            ]
15   [OC_MSG]            ;
15   [NONE]              
16   [OC_BLOCK_EXPR]     }
16   [NONE]              withTargetTexture
16   [OC_MSG_NAME]       :
16   [NONE]              dst
16   [NONE]              andCommandBuffer
16   [OC_MSG_NAME]       :
16   [NONE]              commandBuffer
16   [OC_MSG]            ]
16   [OC_MSG]            ;
16   [NONE]              
17   [OC_MSG_DECL]       }
17   [NONE]              
19   [OC_IMPL]           @end
19   [NONE]              