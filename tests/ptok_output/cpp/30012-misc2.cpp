Line [Parent]            Text
1    [COMMENT_WHOLE]     /*␤I tried to modify the spaces when using casts like static_cast etc. by␤using sp_before_angle, sp_after_angle and sp_inside_angle. Even setting␤all of those options to remove results in the following:␤*/
5    [NONE]              
7    [NONE]              myvar
7    [NONE]              =
7    [NONE]              dynamic_cast
7    [TYPE_CAST]         <
7    [NONE]              MyClass
7    [TEMPLATE]          <
7    [NONE]              T
7    [TEMPLATE]          >
7    [NONE]              *
7    [TYPE_CAST]         >
7    [TYPE_CAST]         (
7    [NONE]              other
7    [TYPE_CAST]         )
7    [NONE]              ;
7    [NONE]              
8    [COMMENT_WHOLE]     // expected:
8    [NONE]              
9    [COMMENT_WHOLE]     //myvar = dynamic_cast<MyClass<T>*>(other);
9    [NONE]              
11   [COMMENT_WHOLE]     /*␤Sometime pointers and references are still not detected correctly in␤special cases - i guess.␤*/
14   [NONE]              
15   [COMMENT_WHOLE]     //When using "sp_before_ptr_star = remove" the result is:
15   [NONE]              
16   [NONE]              typedef
16   [NONE]              std
16   [NONE]              ::
16   [NONE]              list
16   [TEMPLATE]          <
16   [NONE]              StreamedData
16   [NONE]              *
16   [TEMPLATE]          >
16   [NONE]              ::
16   [NONE]              iterator
16   [NONE]              iterator
16   [TYPEDEF]           ;
16   [NONE]              
17   [COMMENT_WHOLE]     //typedef std::list<StreamedData *>::iterator iterator;
17   [NONE]              
18   [COMMENT_WHOLE]     //------------------------------^ This space show not be there
18   [NONE]              
20   [NONE]              typedef
20   [FUNC_TYPE]         void
20   [FUNC_TYPE]         (
20   [NONE]              T
20   [NONE]              ::
20   [NONE]              *
20   [TYPEDEF]           Routine
20   [FUNC_TYPE]         )
20   [FUNC_PROTO]        (
20   [NONE]              void
20   [FUNC_PROTO]        )
20   [TYPEDEF]           ;
20   [NONE]              
22   [COMMENT_WHOLE]     //Similar with "sp_before_byref = remove":
22   [NONE]              
23   [FUNC_PROTO]        unsigned
23   [FUNC_PROTO]        long
23   [NONE]              allocate
23   [FUNC_PROTO]        (
23   [NONE]              unsigned
23   [NONE]              long
23   [NONE]              size
23   [NONE]              ,
23   [NONE]              void
23   [NONE]              *
23   [NONE]              &
23   [NONE]              p
23   [FUNC_PROTO]        )
23   [FUNC_PROTO]        ;
23   [NONE]              
24   [COMMENT_WHOLE]     //unsigned long allocate(unsigned long size, void* & p);
24   [NONE]              
25   [COMMENT_WHOLE]     //------------------------------------------------^ The same here
25   [NONE]              
27   [FUNC_DEF]          void
27   [NONE]              foo
27   [FUNC_DEF]          (
27   [NONE]              void
27   [FUNC_DEF]          )
27   [NONE]              
28   [FUNC_DEF]          {
28   [NONE]              
29   [NONE]              List
29   [TEMPLATE]          <
29   [NONE]              byte
29   [TEMPLATE]          >
29   [NONE]              bob
29   [NONE]              =
29   [NONE]              new
29   [NONE]              List
29   [TEMPLATE]          <
29   [NONE]              byte
29   [TEMPLATE]          >
29   [FUNC_CALL]         (
29   [FUNC_CALL]         )
29   [NONE]              ;
29   [NONE]              
31   [COMMENT_WHOLE]     /* Align assignments */
31   [NONE]              
32   [NONE]              align_assign
32   [FUNC_CALL]         (
32   [NONE]              chunk_get_head
32   [FUNC_CALL]         (
32   [FUNC_CALL]         )
32   [NONE]              ,
32   [NONE]              
33   [NONE]              cpd
33   [NONE]              .
33   [NONE]              settings
33   [NONE]              [
33   [NONE]              UO_align_assign_span
33   [NONE]              ]
33   [NONE]              .
33   [NONE]              n
33   [NONE]              ,
33   [NONE]              
34   [NONE]              cpd
34   [NONE]              .
34   [NONE]              settings
34   [NONE]              [
34   [NONE]              UO_align_assign_thresh
34   [NONE]              ]
34   [NONE]              .
34   [NONE]              n
34   [FUNC_CALL]         )
34   [NONE]              ;
34   [NONE]              
35   [FUNC_DEF]          }
35   [NONE]              
37   [NONE]              Args
37   [NONE]              ::
37   [NONE]              Args
37   [FUNC_CLASS_DEF]    (
37   [NONE]              int
37   [NONE]              argc
37   [NONE]              ,
37   [NONE]              char
37   [NONE]              *
37   [NONE]              *
37   [NONE]              argv
37   [FUNC_CLASS_DEF]    )
37   [NONE]              
38   [FUNC_CLASS_DEF]    {
38   [NONE]              
39   [NONE]              m_count
39   [NONE]              =
39   [NONE]              argc
39   [NONE]              ;
39   [NONE]              
40   [NONE]              m_values
40   [NONE]              =
40   [NONE]              argv
40   [NONE]              ;
40   [NONE]              
41   [NONE]              int
41   [NONE]              len
41   [NONE]              =
41   [NONE]              (
41   [NONE]              argc
41   [NONE]              >>
41   [NONE]              3
41   [NONE]              )
41   [NONE]              +
41   [NONE]              1
41   [NONE]              ;
41   [NONE]              
42   [NONE]              m_used
42   [NONE]              =
42   [NONE]              new
42   [NONE]              UINT8
42   [NONE]              [
42   [NONE]              len
42   [NONE]              ]
42   [NONE]              ;
42   [NONE]              
43   [NONE]              if
43   [IF]                (
43   [NONE]              m_used
43   [NONE]              !=
43   [NONE]              NULL
43   [IF]                )
44   [IF]                {
44   [NONE]              
45   [NONE]              memset
45   [FUNC_CALL]         (
45   [NONE]              m_used
45   [NONE]              ,
45   [NONE]              0
45   [NONE]              ,
45   [NONE]              len
45   [FUNC_CALL]         )
45   [NONE]              ;
45   [NONE]              
46   [IF]                }
46   [NONE]              
47   [FUNC_CLASS_DEF]    }
47   [NONE]              
49   [FUNC_DEF]          void
49   [NONE]              Args
49   [FUNC_DEF]          (
49   [NONE]              int
49   [NONE]              argc
49   [NONE]              ,
49   [NONE]              char
49   [NONE]              *
49   [NONE]              *
49   [NONE]              argv
49   [FUNC_DEF]          )
49   [NONE]              
50   [FUNC_DEF]          {
50   [NONE]              
51   [NONE]              m_count
51   [NONE]              =
51   [NONE]              argc
51   [NONE]              ;
51   [NONE]              
52   [NONE]              m_values
52   [NONE]              =
52   [NONE]              argv
52   [NONE]              ;
52   [NONE]              
53   [NONE]              int
53   [NONE]              len
53   [NONE]              =
53   [NONE]              (
53   [NONE]              argc
53   [NONE]              >>
53   [NONE]              3
53   [NONE]              )
53   [NONE]              +
53   [NONE]              1
53   [NONE]              ;
53   [NONE]              
54   [NONE]              m_used
54   [NONE]              =
54   [NONE]              new
54   [NONE]              UINT8
54   [NONE]              [
54   [NONE]              len
54   [NONE]              ]
54   [NONE]              ;
54   [NONE]              
55   [NONE]              if
55   [IF]                (
55   [NONE]              m_used
55   [NONE]              !=
55   [NONE]              NULL
55   [IF]                )
56   [IF]                {
56   [NONE]              
57   [NONE]              memset
57   [FUNC_CALL]         (
57   [NONE]              m_used
57   [NONE]              ,
57   [NONE]              0
57   [NONE]              ,
57   [NONE]              len
57   [FUNC_CALL]         )
57   [NONE]              ;
57   [NONE]              
58   [IF]                }
58   [NONE]              
59   [FUNC_DEF]          }
59   [NONE]              