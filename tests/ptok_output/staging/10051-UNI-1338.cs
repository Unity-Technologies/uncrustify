Line [Parent]            Text
1    [COMMENT_WHOLE]     // *Single line functions*
1    [NONE]              
3    [NONE]              public
3    [NONE]              class
3    [CLASS]             Class
3    [NONE]              
4    [CLASS]             {
4    [NONE]              
5    [CS_PROPERTY]       public
5    [CS_PROPERTY]       string
5    [NONE]              foo
5    [CS_PROPERTY]       {
5    [NONE]              get
5    [GETSET]            ;
5    [NONE]              set
5    [GETSET]            ;
5    [CS_PROPERTY]       }
5    [NONE]              
6    [CS_PROPERTY]       public
6    [CS_PROPERTY]       string
6    [NONE]              foo
6    [CS_PROPERTY]       {
6    [NONE]              get
6    [GETSET]            ;
6    [NONE]              set
6    [GETSET]            ;
6    [CS_PROPERTY]       }
6    [NONE]              
8    [FUNC_DEF]          bool
8    [NONE]              HasBar
8    [FUNC_DEF]          (
8    [FUNC_DEF]          )
8    [FUNC_DEF]          {
8    [NONE]              return
8    [NONE]              m_HasBar
8    [NONE]              !=
8    [NONE]              0
8    [NONE]              ;
8    [FUNC_DEF]          }
8    [NONE]              
9    [FUNC_DEF]          bool
9    [NONE]              HasBar
9    [FUNC_DEF]          (
9    [FUNC_DEF]          )
9    [FUNC_DEF]          {
9    [NONE]              return
9    [NONE]              m_HasBar
9    [NONE]              !=
9    [NONE]              0
9    [NONE]              ;
9    [FUNC_DEF]          }
9    [NONE]              
11   [CS_PROPERTY]       public
11   [CS_PROPERTY]       Bar
11   [NONE]              prop
11   [CS_PROPERTY]       {
11   [NONE]              get
11   [GETSET]            {
11   [NONE]              return
11   [NONE]              m_bar
11   [NONE]              ;
11   [GETSET]            }
11   [NONE]              set
11   [GETSET]            {
11   [NONE]              m_bar
11   [NONE]              =
11   [NONE]              value
11   [NONE]              ;
11   [GETSET]            }
11   [CS_PROPERTY]       }
11   [NONE]              
12   [CS_PROPERTY]       public
12   [CS_PROPERTY]       Bar
12   [NONE]              prop
12   [CS_PROPERTY]       {
12   [NONE]              get
12   [GETSET]            {
12   [NONE]              return
12   [NONE]              m_bar
12   [NONE]              ;
12   [GETSET]            }
12   [NONE]              set
12   [GETSET]            {
12   [NONE]              m_bar
12   [NONE]              =
12   [NONE]              value
12   [NONE]              ;
12   [GETSET]            }
12   [CS_PROPERTY]       }
12   [NONE]              
14   [COMMENT_WHOLE]     // This seems to happen with no spaces on the interior. Opening brace doesn't get one, closing brace does.
14   [NONE]              
16   [COMMENT_WHOLE]     // Turning on sp_inside_braces=add fixes it, but also changes a lot of initializer code we don't want to touch (like x = {1}). May need special support, or perhaps there's a bug..
16   [NONE]              
18   [COMMENT_WHOLE]     // *Initializers*
18   [NONE]              
20   [COMMENT_WHOLE]     // Not sure if this is what we want..
20   [NONE]              
22   [FUNC_DEF]          public
22   [FUNC_DEF]          void
22   [NONE]              foo
22   [FUNC_DEF]          (
22   [FUNC_DEF]          )
22   [NONE]              
23   [FUNC_DEF]          {
23   [NONE]              
24   [NONE]              sas
24   [NONE]              .
24   [NONE]              Foo
24   [FUNC_CALL]         (
24   [NONE]              "bar"
24   [NONE]              ,
24   [NONE]              new
24   [NONE]              Dictionary
24   [TEMPLATE]          <
24   [NONE]              string
24   [NONE]              ,
24   [NONE]              object
24   [TEMPLATE]          >
24   [FUNC_CALL]         (
24   [FUNC_CALL]         )
24   [FUNC_CALL]         {
24   [NONE]              {
24   [NONE]              "k1"
24   [NONE]              ,
24   [NONE]              "v1"
24   [NONE]              }
24   [NONE]              ,
24   [NONE]              {
24   [NONE]              "k2"
24   [NONE]              ,
24   [NONE]              "v2"
24   [NONE]              }
24   [FUNC_CALL]         }
24   [FUNC_CALL]         )
24   [NONE]              ;
24   [NONE]              
25   [COMMENT_WHOLE]     // ... --> ...
25   [NONE]              
26   [NONE]              sas
26   [NONE]              .
26   [NONE]              Foo
26   [FUNC_CALL]         (
26   [NONE]              "bar"
26   [NONE]              ,
26   [NONE]              new
26   [NONE]              Dictionary
26   [TEMPLATE]          <
26   [NONE]              string
26   [NONE]              ,
26   [NONE]              object
26   [TEMPLATE]          >
26   [FUNC_CALL]         (
26   [FUNC_CALL]         )
26   [FUNC_CALL]         {
26   [NONE]              {
26   [NONE]              "k1"
26   [NONE]              ,
26   [NONE]              "v1"
26   [NONE]              }
26   [NONE]              ,
26   [NONE]              {
26   [NONE]              "k2"
26   [NONE]              ,
26   [NONE]              "v2"
26   [NONE]              }
26   [FUNC_CALL]         }
26   [FUNC_CALL]         )
26   [NONE]              ;
26   [NONE]              
27   [FUNC_DEF]          }
27   [NONE]              
29   [COMMENT_WHOLE]     // Second line adds a space before the initializer {. Is that what we want for C#?
29   [NONE]              
30   [CLASS]             }
30   [NONE]              