Line [Parent]            Text
1    [COMMENT_WHOLE]     // Extern "C" blocks need an alignment option somehow. I can do a "set NAMESPACE extern" in the cfg but that will probably screw other stuff up.
1    [NONE]              
3    [COMMENT_WHOLE]     // See External\Audio\NativePluginDemo\NativeCode\TeleportLib.h for an example. Yeah it's in external (so have to force-format it) but it's a good case.
3    [NONE]              
5    [COMMENT_WHOLE]     // (Actually it's in https://bitbucket.org/Unity-Technologies/nativeaudioplugins, but just published here to external)
5    [NONE]              
7    [NONE]              extern
7    [EXTERN]            "C"
7    [NONE]              
8    [EXTERN]            {
8    [NONE]              
9    [NONE]              typedef
9    [FUNC_TYPE]         EXPORT_API
9    [FUNC_TYPE]         int
9    [FUNC_TYPE]         (
9    [NONE]              *
9    [TYPEDEF]           Foo
9    [FUNC_TYPE]         )
9    [FUNC_PROTO]        (
9    [NONE]              int
9    [NONE]              arg
9    [FUNC_PROTO]        )
9    [TYPEDEF]           ;
9    [NONE]              
10   [EXTERN]            }
10   [NONE]              ;
10   [NONE]              