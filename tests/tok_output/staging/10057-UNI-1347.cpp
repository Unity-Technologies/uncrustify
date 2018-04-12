Line [Token]             Text
1    [COMMENT_CPP]       // Extern "C" blocks need an alignment option somehow. I can do a "set NAMESPACE extern" in the cfg but that will probably screw other stuff up.
1    [NEWLINE]           
3    [COMMENT_CPP]       // See External\Audio\NativePluginDemo\NativeCode\TeleportLib.h for an example. Yeah it's in external (so have to force-format it) but it's a good case.
3    [NEWLINE]           
5    [COMMENT_CPP]       // (Actually it's in https://bitbucket.org/Unity-Technologies/nativeaudioplugins, but just published here to external)
5    [NEWLINE]           
7    [EXTERN]            extern
7    [STRING]            "C"
7    [NEWLINE]           
8    [BRACE_OPEN]        {
8    [NEWLINE]           
9    [TYPEDEF]           typedef
9    [TYPE]              EXPORT_API
9    [TYPE]              int
9    [TPAREN_OPEN]       (
9    [PTR_TYPE]          *
9    [TYPE]              Foo
9    [TPAREN_CLOSE]      )
9    [FPAREN_OPEN]       (
9    [TYPE]              int
9    [WORD]              arg
9    [FPAREN_CLOSE]      )
9    [SEMICOLON]         ;
9    [NEWLINE]           
10   [BRACE_CLOSE]       }
10   [SEMICOLON]         ;
10   [NEWLINE]           