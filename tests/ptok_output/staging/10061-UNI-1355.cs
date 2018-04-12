Line [Parent]            Text
1    [COMMENT_WHOLE]     // This kind of thing is still a problem:
1    [NONE]              
3    [NONE]              public
3    [NONE]              class
3    [CLASS]             Class
3    [NONE]              
4    [CLASS]             {
4    [NONE]              
5    [CS_PROPERTY]       public
5    [CS_PROPERTY]       override
5    [CS_PROPERTY]       MyNodeType
5    [NONE]              NodeType
5    [NONE]              
5    [CS_PROPERTY]       {
5    [NONE]              
6    [NONE]              get
6    [NONE]              
6    [GETSET]            {
6    [NONE]              
7    [NONE]              if
7    [IF]                (
7    [NONE]              entity
7    [NONE]              !=
7    [NONE]              null
7    [IF]                )
7    [IF]                
7    [NONE]              
8    [NONE]              return
8    [NONE]              entity
8    [NONE]              .
8    [NONE]              ReadState
8    [NONE]              ==
8    [NONE]              ReadState
8    [NONE]              .
8    [NONE]              Initial
8    [NONE]              ?
8    [NONE]              
9    [NONE]              source
9    [NONE]              .
9    [NONE]              NodeType
9    [NONE]              :
9    [NONE]              
10   [NONE]              entity
10   [NONE]              .
10   [NONE]              EOF
10   [NONE]              ?
10   [NONE]              MyNodeType
10   [NONE]              .
10   [NONE]              EndEntity
10   [NONE]              :
10   [NONE]              
11   [NONE]              entity
11   [NONE]              .
11   [NONE]              NodeType
11   [NONE]              ;
11   [IF]                
11   [NONE]              
12   [NONE]              else
12   [ELSE]              
12   [NONE]              
13   [NONE]              return
13   [NONE]              source
13   [NONE]              .
13   [NONE]              NodeType
13   [NONE]              ;
13   [ELSE]              
13   [NONE]              
14   [GETSET]            }
14   [NONE]              
15   [CS_PROPERTY]       }
15   [NONE]              
16   [CLASS]             }
16   [NONE]              
18   [COMMENT_WHOLE]     // The second ? should have a space before it.
18   [NONE]              