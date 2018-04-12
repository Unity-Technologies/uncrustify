Line [Parent]            Text
1    [COMMENT_WHOLE]     // Test if Uncrustify properly handles `@synchronized` keyword for ObjC
1    [NONE]              
3    [COMMENT_WHOLE]     // In keywords.cpp there is no @synchronized keyword listed and from what I've seen synchronized is only regarded as a keyword in other languages
3    [NONE]              
4    [COMMENT_WHOLE]     // { "synchronized", CT_QUALIFIER, LANG_D | LANG_JAVA | LANG_ECMA },
4    [NONE]              
6    [CS_PROPERTY]       -
6    [CS_PROPERTY]       (
6    [C_CAST]            void
6    [CS_PROPERTY]       )
6    [NONE]              foo
6    [NONE]              
7    [CS_PROPERTY]       {
7    [NONE]              
8    [NONE]              @synchronized
8    [FUNC_CALL]         (
8    [NONE]              self
8    [FUNC_CALL]         )
8    [NONE]              
9    [FUNC_CALL]         {
9    [NONE]              
10   [NONE]              if
10   [IF]                (
10   [NONE]              bar
10   [IF]                )
10   [NONE]              
11   [IF]                {
11   [NONE]              
12   [NONE]              bar
12   [NONE]              =
12   [NONE]              false
12   [NONE]              ;
12   [NONE]              
13   [IF]                }
13   [NONE]              
14   [FUNC_CALL]         }
14   [NONE]              
15   [CS_PROPERTY]       }
15   [NONE]              