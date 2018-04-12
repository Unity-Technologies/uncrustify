Line [Token]             Text
1    [PREPROC]           #
1    [PP_INCLUDE]        import
1    [PREPROC_BODY]      <Foundation/Foundation.h>
1    [NEWLINE]           
3    [OC_INTF]           @interface
3    [OC_CLASS]          TestClass
3    [CLASS_COLON]       :
3    [WORD]              NSObject
3    [NEWLINE]           
4    [OC_END]            @end
4    [NEWLINE]           
6    [OC_IMPL]           @implementation
6    [OC_CLASS]          TestClass
6    [NEWLINE]           
8    [OC_SCOPE]          -
8    [PAREN_OPEN]        (
8    [TYPE]              void
8    [PAREN_CLOSE]       )
8    [OC_MSG_DECL]       drawSomething
8    [OC_COLON]          :
8    [PAREN_OPEN]        (
8    [TYPE]              id
8    [ANGLE_OPEN]        <
8    [TYPE]              MTLCommandBuffer
8    [ANGLE_CLOSE]       >
8    [PAREN_CLOSE]       )
8    [WORD]              commandBuffer
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [SQUARE_OPEN]       [
9    [OC_MSG_CLASS]      renderPass
9    [OC_MSG_FUNC]       performDrawBlock
9    [OC_COLON]          :
9    [OC_BLOCK_CARET]    ^
9    [FPAREN_OPEN]       (
9    [TYPE]              id
9    [ANGLE_OPEN]        <
9    [TYPE]              MTLRenderCommandEncoder
9    [ANGLE_CLOSE]       >
9    [WORD]              renderCommandEncoder
9    [FPAREN_CLOSE]      )
9    [BRACE_OPEN]        {
9    [NEWLINE]           
10   [WORD]              screenBlitObject
10   [MEMBER]            .
10   [WORD]              texture
10   [ASSIGN]            =
10   [WORD]              src
10   [SEMICOLON]         ;
10   [NEWLINE]           
12   [COMMENT_CPP]       // Make sure the pipeline state pixelformat is the same as destination pixel format
12   [NEWLINE]           
13   [SQUARE_OPEN]       [
13   [OC_MSG_CLASS]      screenBlitObject
13   [OC_MSG_FUNC]       updatePipelineState
13   [OC_COLON]          :
13   [WORD]              dst
13   [MEMBER]            .
13   [WORD]              pixelFormat
13   [SQUARE_CLOSE]      ]
13   [SEMICOLON]         ;
13   [NEWLINE]           
15   [SQUARE_OPEN]       [
15   [OC_MSG_CLASS]      screenBlitObject
15   [OC_MSG_FUNC]       drawWithRenderCommandEncoder
15   [OC_COLON]          :
15   [WORD]              renderCommandEncoder
15   [SQUARE_CLOSE]      ]
15   [SEMICOLON]         ;
15   [NEWLINE]           
16   [BRACE_CLOSE]       }
16   [OC_MSG_NAME]       withTargetTexture
16   [OC_COLON]          :
16   [TYPE]              dst
16   [OC_MSG_NAME]       andCommandBuffer
16   [OC_COLON]          :
16   [WORD]              commandBuffer
16   [SQUARE_CLOSE]      ]
16   [SEMICOLON]         ;
16   [NEWLINE]           
17   [BRACE_CLOSE]       }
17   [NEWLINE]           
19   [OC_END]            @end
19   [NEWLINE]           