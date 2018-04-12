Line [Parent]            Text
1    [COMMENT_WHOLE]     // incorrect
1    [NONE]              
3    [NONE]              typedef
3    [NONE]              ::
3    [NONE]              GlobalType
3    [NONE]              GlobalType
3    [TYPEDEF]           ;
3    [NONE]              
5    [COMMENT_WHOLE]     // Using the sp_before_dc and sp_after_dc options with 'remove' causes the above due to global scope. Need to fix Uncrustify to only do this removal only for CT_WORD and not keywords (or anything else, probably).
5    [NONE]              
7    [COMMENT_WHOLE]     // Also make sure this is handled right:
7    [NONE]              
9    [COMMENT_WHOLE]     // correct
9    [NONE]              
11   [FUNC_DEF]          void
11   [NONE]              foo
11   [FUNC_DEF]          (
11   [FUNC_DEF]          )
11   [NONE]              
12   [FUNC_DEF]          {
12   [NONE]              
13   [NONE]              return
13   [C_CAST]            (
13   [C_CAST]            int
13   [C_CAST]            )
13   [NONE]              ::
13   [NONE]              Bar
13   [FUNC_CALL]         (
13   [FUNC_CALL]         )
13   [NONE]              ;
13   [NONE]              
14   [COMMENT_WHOLE]     // ... --> ...
14   [NONE]              
15   [NONE]              return
15   [C_CAST]            (
15   [C_CAST]            int
15   [C_CAST]            )
15   [NONE]              ::
15   [NONE]              Bar
15   [FUNC_CALL]         (
15   [FUNC_CALL]         )
15   [NONE]              ;
15   [NONE]              
16   [FUNC_DEF]          }
16   [NONE]              
18   [COMMENT_WHOLE]     // Second line removes the space, which we still want in the new setup. (Though really that removal should depend on casting operator spacing but whatev.)
18   [NONE]              
20   [COMMENT_WHOLE]     // correct
20   [NONE]              
22   [NONE]              typedef
22   [FUNC_TYPE]         void
22   [FUNC_TYPE]         (
22   [NONE]              Goo
22   [NONE]              ::
22   [NONE]              *
22   [TYPEDEF]           Boo
22   [FUNC_TYPE]         )
22   [FUNC_PROTO]        (
22   [NONE]              const
22   [NONE]              TYPE
22   [NONE]              &
22   [NONE]              data
22   [NONE]              ,
22   [NONE]              ULONG
22   [NONE]              index
22   [NONE]              ,
22   [NONE]              LONG
22   [NONE]              minimum
22   [NONE]              ,
22   [NONE]              LONG
22   [NONE]              maximum
22   [FUNC_PROTO]        )
22   [TYPEDEF]           ;
22   [NONE]              
23   [COMMENT_WHOLE]     // ... --> ...
23   [NONE]              
24   [NONE]              typedef
24   [FUNC_TYPE]         void
24   [FUNC_TYPE]         (
24   [NONE]              Goo
24   [NONE]              ::
24   [NONE]              *
24   [TYPEDEF]           Boo
24   [FUNC_TYPE]         )
24   [FUNC_PROTO]        (
24   [NONE]              const
24   [NONE]              TYPE
24   [NONE]              &
24   [NONE]              data
24   [NONE]              ,
24   [NONE]              ULONG
24   [NONE]              index
24   [NONE]              ,
24   [NONE]              LONG
24   [NONE]              minimum
24   [NONE]              ,
24   [NONE]              LONG
24   [NONE]              maximum
24   [FUNC_PROTO]        )
24   [TYPEDEF]           ;
24   [NONE]              
26   [COMMENT_WHOLE]     // incorrect
26   [NONE]              
28   [NONE]              struct
28   [STRUCT]            ClassImpl
28   [STRUCT]            :
28   [NONE]              public
28   [NONE]              ::
28   [NONE]              Class
28   [STRUCT]            {
28   [STRUCT]            }
28   [STRUCT]            ;
28   [NONE]              
29   [COMMENT_WHOLE]     // ... --> ...
29   [NONE]              
30   [NONE]              struct
30   [STRUCT]            ClassImpl
30   [STRUCT]            :
30   [NONE]              public
30   [NONE]              ::
30   [NONE]              Class
30   [STRUCT]            {
30   [STRUCT]            }
30   [STRUCT]            ;
30   [NONE]              
32   [COMMENT_WHOLE]     // incorrect
32   [NONE]              
34   [NONE]              friend
34   [NONE]              class
34   [NONE]              ::
34   [CLASS]             Clasz
34   [NONE]              ;
34   [NONE]              
35   [COMMENT_WHOLE]     // ... --> ...
35   [NONE]              
36   [NONE]              friend
36   [NONE]              class
36   [NONE]              ::
36   [CLASS]             Clasz
36   [NONE]              ;
36   [NONE]              
38   [COMMENT_WHOLE]     // correct
38   [NONE]              
40   [FUNC_DEF]          void
40   [NONE]              bar
40   [FUNC_DEF]          (
40   [FUNC_DEF]          )
40   [NONE]              
41   [FUNC_DEF]          {
41   [NONE]              
42   [NONE]              vector
42   [TEMPLATE]          <
42   [NONE]              Texture2D
42   [NONE]              *
42   [TEMPLATE]          >
42   [NONE]              ::
42   [NONE]              iterator
42   [NONE]              found
42   [NONE]              =
42   [NONE]              find
42   [FUNC_CALL]         (
42   [NONE]              uniqueTextures
42   [NONE]              .
42   [NONE]              begin
42   [FUNC_CALL]         (
42   [FUNC_CALL]         )
42   [NONE]              ,
42   [NONE]              uniqueTextures
42   [NONE]              .
42   [NONE]              end
42   [FUNC_CALL]         (
42   [FUNC_CALL]         )
42   [NONE]              ,
42   [NONE]              textures
42   [NONE]              [
42   [NONE]              i
42   [NONE]              ]
42   [FUNC_CALL]         )
42   [NONE]              ;
42   [NONE]              
43   [COMMENT_WHOLE]     // ... --> ...
43   [NONE]              
44   [NONE]              vector
44   [TEMPLATE]          <
44   [NONE]              Texture2D
44   [NONE]              *
44   [TEMPLATE]          >
44   [NONE]              ::
44   [NONE]              iterator
44   [NONE]              found
44   [NONE]              =
44   [NONE]              find
44   [FUNC_CALL]         (
44   [NONE]              uniqueTextures
44   [NONE]              .
44   [NONE]              begin
44   [FUNC_CALL]         (
44   [FUNC_CALL]         )
44   [NONE]              ,
44   [NONE]              uniqueTextures
44   [NONE]              .
44   [NONE]              end
44   [FUNC_CALL]         (
44   [FUNC_CALL]         )
44   [NONE]              ,
44   [NONE]              textures
44   [NONE]              [
44   [NONE]              i
44   [NONE]              ]
44   [FUNC_CALL]         )
44   [NONE]              ;
44   [NONE]              
45   [FUNC_DEF]          }
45   [NONE]              
47   [COMMENT_WHOLE]     // incorrect
47   [NONE]              
49   [NONE]              using
49   [USING]             namespace
49   [NAMESPACE]         ::
49   [NAMESPACE]         comp
49   [USING]             ;
49   [NONE]              
50   [NONE]              using
50   [USING]             namespace
50   [NAMESPACE]         ::
50   [NAMESPACE]         comp
50   [NAMESPACE]         ::
50   [NAMESPACE]         run
50   [USING]             ;
50   [NONE]              
51   [COMMENT_WHOLE]     // ... --> ...
51   [NONE]              
52   [NONE]              using
52   [USING]             namespace
52   [NAMESPACE]         ::
52   [NAMESPACE]         comp
52   [USING]             ;
52   [NONE]              
53   [NONE]              using
53   [USING]             namespace
53   [NAMESPACE]         ::
53   [NAMESPACE]         comp
53   [NAMESPACE]         ::
53   [NAMESPACE]         run
53   [USING]             ;
53   [NONE]              
55   [COMMENT_WHOLE]     // incorrect
55   [NONE]              
57   [NONE]              class
57   [CLASS]             ClassDummy
57   [NONE]              :
57   [NONE]              public
57   [NONE]              ::
57   [NONE]              comp
57   [NONE]              ::
57   [NONE]              run
57   [NONE]              ::
57   [NONE]              Class
57   [CLASS]             {
57   [CLASS]             }
57   [CLASS]             ;
57   [NONE]              
58   [COMMENT_WHOLE]     // ... --> ...
58   [NONE]              
59   [NONE]              class
59   [CLASS]             ClassDummy
59   [NONE]              :
59   [NONE]              public
59   [NONE]              ::
59   [NONE]              comp
59   [NONE]              ::
59   [NONE]              run
59   [NONE]              ::
59   [NONE]              Class
59   [CLASS]             {
59   [CLASS]             }
59   [CLASS]             ;
59   [NONE]              
61   [COMMENT_WHOLE]     // Starting to think this may be too hard, because what precedes the :: may be complex. What if it's just a > operator in a comparison expression against a global?
61   [NONE]              