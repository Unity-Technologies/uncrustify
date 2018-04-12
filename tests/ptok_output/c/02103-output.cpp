Line [Parent]            Text
1    [COMMENT_WHOLE]     /**␤ * @file output.cpp␤ * Does all the output & comment formatting.␤ *␤ * $Id: output.cpp 510 2006-09-20 01:14:56Z bengardner $␤ */
6    [NONE]              
8    [PP_INCLUDE]        #
8    [NONE]              include
8    [NONE]              "uncrustify_types.h"
8    [NONE]              
9    [PP_INCLUDE]        #
9    [NONE]              include
9    [NONE]              "prototypes.h"
9    [NONE]              
10   [PP_INCLUDE]        #
10   [NONE]              include
10   [NONE]              "chunk_list.h"
10   [NONE]              
11   [PP_INCLUDE]        #
11   [NONE]              include
11   [NONE]              <cstring>
11   [NONE]              
12   [PP_INCLUDE]        #
12   [NONE]              include
12   [NONE]              <cstdlib>
12   [NONE]              
16   [FUNC_DEF]          void
16   [NONE]              add_char
16   [FUNC_DEF]          (
16   [NONE]              char
16   [NONE]              ch
16   [FUNC_DEF]          )
16   [NONE]              
17   [FUNC_DEF]          {
17   [NONE]              
18   [COMMENT_WHOLE]     /* convert a newline into the LF/CRLF/CR sequence */
18   [NONE]              
19   [NONE]              if
19   [IF]                (
19   [NONE]              ch
19   [NONE]              ==
19   [NONE]              '\n'
19   [IF]                )
19   [NONE]              
20   [IF]                {
20   [NONE]              
21   [NONE]              fputs
21   [FUNC_CALL]         (
21   [NONE]              cpd
21   [NONE]              .
21   [NONE]              newline
21   [NONE]              ,
21   [NONE]              cpd
21   [NONE]              .
21   [NONE]              fout
21   [FUNC_CALL]         )
21   [NONE]              ;
21   [NONE]              
22   [NONE]              cpd
22   [NONE]              .
22   [NONE]              column
22   [NONE]              =
22   [NONE]              1
22   [NONE]              ;
22   [NONE]              
23   [NONE]              cpd
23   [NONE]              .
23   [NONE]              did_newline
23   [NONE]              =
23   [NONE]              1
23   [NONE]              ;
23   [NONE]              
24   [IF]                }
24   [NONE]              
25   [NONE]              else
25   [NONE]              
26   [ELSE]              {
26   [NONE]              
27   [NONE]              fputc
27   [FUNC_CALL]         (
27   [NONE]              ch
27   [NONE]              ,
27   [NONE]              cpd
27   [NONE]              .
27   [NONE]              fout
27   [FUNC_CALL]         )
27   [NONE]              ;
27   [NONE]              
28   [NONE]              if
28   [IF]                (
28   [NONE]              ch
28   [NONE]              ==
28   [NONE]              '\t'
28   [IF]                )
29   [IF]                
29   [NONE]              
30   [NONE]              cpd
30   [NONE]              .
30   [NONE]              column
30   [NONE]              =
30   [NONE]              next_tab_column
30   [FUNC_CALL]         (
30   [NONE]              cpd
30   [NONE]              .
30   [NONE]              column
30   [FUNC_CALL]         )
30   [NONE]              ;
30   [NONE]              
31   [IF]                
32   [NONE]              else
33   [ELSE]              
33   [NONE]              
34   [NONE]              cpd
34   [NONE]              .
34   [NONE]              column
34   [NONE]              ++
34   [NONE]              ;
34   [NONE]              
35   [ELSE]              
36   [ELSE]              }
36   [NONE]              
37   [FUNC_DEF]          }
37   [NONE]              
39   [FUNC_DEF]          void
39   [NONE]              add_text
39   [FUNC_DEF]          (
39   [NONE]              const
39   [NONE]              char
39   [NONE]              *
39   [NONE]              text
39   [FUNC_DEF]          )
39   [NONE]              
40   [FUNC_DEF]          {
40   [NONE]              
41   [NONE]              char
41   [NONE]              ch
41   [NONE]              ;
41   [NONE]              
43   [NONE]              while
43   [WHILE]             (
43   [NONE]              (
43   [NONE]              ch
43   [NONE]              =
43   [NONE]              *
43   [NONE]              text
43   [NONE]              )
43   [NONE]              !=
43   [NONE]              0
43   [WHILE]             )
43   [NONE]              
44   [WHILE]             {
44   [NONE]              
45   [NONE]              text
45   [NONE]              ++
45   [NONE]              ;
45   [NONE]              
46   [NONE]              add_char
46   [FUNC_CALL]         (
46   [NONE]              ch
46   [FUNC_CALL]         )
46   [NONE]              ;
46   [NONE]              
47   [WHILE]             }
47   [NONE]              
48   [FUNC_DEF]          }
48   [NONE]              
50   [FUNC_DEF]          void
50   [NONE]              add_text_len
50   [FUNC_DEF]          (
50   [NONE]              const
50   [NONE]              char
50   [NONE]              *
50   [NONE]              text
50   [NONE]              ,
50   [NONE]              int
50   [NONE]              len
50   [FUNC_DEF]          )
50   [NONE]              
51   [FUNC_DEF]          {
51   [NONE]              
52   [NONE]              while
52   [WHILE]             (
52   [NONE]              len
52   [NONE]              --
52   [NONE]              >
52   [NONE]              0
52   [WHILE]             )
52   [NONE]              
53   [WHILE]             {
53   [NONE]              
54   [NONE]              add_char
54   [FUNC_CALL]         (
54   [NONE]              *
54   [NONE]              text
54   [FUNC_CALL]         )
54   [NONE]              ;
54   [NONE]              
55   [NONE]              text
55   [NONE]              ++
55   [NONE]              ;
55   [NONE]              
56   [WHILE]             }
56   [NONE]              
57   [FUNC_DEF]          }
57   [NONE]              
60   [COMMENT_WHOLE]     /**␤ * Advance to a specific column␤ * cpd.column is the current column␤ *␤ * @param column  The column to advance to␤ */
65   [NONE]              
66   [FUNC_DEF]          void
66   [NONE]              output_to_column
66   [FUNC_DEF]          (
66   [NONE]              int
66   [NONE]              column
66   [NONE]              ,
66   [NONE]              bool
66   [NONE]              allow_tabs
66   [FUNC_DEF]          )
66   [NONE]              
67   [FUNC_DEF]          {
67   [NONE]              
68   [NONE]              int
68   [NONE]              nc
68   [NONE]              ;
68   [NONE]              
70   [NONE]              cpd
70   [NONE]              .
70   [NONE]              did_newline
70   [NONE]              =
70   [NONE]              0
70   [NONE]              ;
70   [NONE]              
71   [NONE]              if
71   [IF]                (
71   [NONE]              allow_tabs
71   [IF]                )
71   [NONE]              
72   [IF]                {
72   [NONE]              
73   [COMMENT_WHOLE]     /* tab out as far as possible and then use spaces */
73   [NONE]              
74   [NONE]              while
74   [WHILE]             (
74   [NONE]              (
74   [NONE]              nc
74   [NONE]              =
74   [NONE]              next_tab_column
74   [FUNC_CALL]         (
74   [NONE]              cpd
74   [NONE]              .
74   [NONE]              column
74   [FUNC_CALL]         )
74   [NONE]              )
74   [NONE]              <=
74   [NONE]              column
74   [WHILE]             )
75   [WHILE]             
75   [NONE]              
76   [NONE]              add_text
76   [FUNC_CALL]         (
76   [NONE]              "\t"
76   [FUNC_CALL]         )
76   [NONE]              ;
76   [NONE]              
77   [WHILE]             
78   [IF]                }
78   [NONE]              
79   [COMMENT_WHOLE]     /* space out the final bit */
79   [NONE]              
80   [NONE]              while
80   [WHILE]             (
80   [NONE]              cpd
80   [NONE]              .
80   [NONE]              column
80   [NONE]              <
80   [NONE]              column
80   [WHILE]             )
81   [WHILE]             
81   [NONE]              
82   [NONE]              add_text
82   [FUNC_CALL]         (
82   [NONE]              " "
82   [FUNC_CALL]         )
82   [NONE]              ;
82   [NONE]              
83   [WHILE]             
84   [FUNC_DEF]          }
84   [NONE]              
86   [FUNC_DEF]          void
86   [NONE]              output_indent
86   [FUNC_DEF]          (
86   [NONE]              int
86   [NONE]              column
86   [NONE]              ,
86   [NONE]              int
86   [NONE]              brace_col
86   [FUNC_DEF]          )
86   [NONE]              
87   [FUNC_DEF]          {
87   [NONE]              
88   [NONE]              if
88   [IF]                (
88   [NONE]              (
88   [NONE]              cpd
88   [NONE]              .
88   [NONE]              column
88   [NONE]              ==
88   [NONE]              1
88   [NONE]              )
88   [NONE]              &&
88   [NONE]              (
88   [NONE]              cpd
88   [NONE]              .
88   [NONE]              settings
88   [NONE]              [
88   [NONE]              UO_indent_with_tabs
88   [NONE]              ]
88   [NONE]              .
88   [NONE]              n
88   [NONE]              !=
88   [NONE]              0
88   [NONE]              )
88   [IF]                )
88   [NONE]              
89   [IF]                {
89   [NONE]              
90   [NONE]              if
90   [IF]                (
90   [NONE]              cpd
90   [NONE]              .
90   [NONE]              settings
90   [NONE]              [
90   [NONE]              UO_indent_with_tabs
90   [NONE]              ]
90   [NONE]              .
90   [NONE]              n
90   [NONE]              ==
90   [NONE]              2
90   [IF]                )
91   [IF]                
91   [NONE]              
92   [NONE]              brace_col
92   [NONE]              =
92   [NONE]              column
92   [NONE]              ;
92   [NONE]              
93   [IF]                
93   [NONE]              
95   [COMMENT_WHOLE]     /* tab out as far as possible and then use spaces */
95   [NONE]              
96   [NONE]              int
96   [NONE]              nc
96   [NONE]              ;
96   [NONE]              
97   [NONE]              while
97   [WHILE]             (
97   [NONE]              (
97   [NONE]              nc
97   [NONE]              =
97   [NONE]              next_tab_column
97   [FUNC_CALL]         (
97   [NONE]              cpd
97   [NONE]              .
97   [NONE]              column
97   [FUNC_CALL]         )
97   [NONE]              )
97   [NONE]              <=
97   [NONE]              brace_col
97   [WHILE]             )
98   [WHILE]             
98   [NONE]              
99   [NONE]              add_text
99   [FUNC_CALL]         (
99   [NONE]              "\t"
99   [FUNC_CALL]         )
99   [NONE]              ;
99   [NONE]              
100  [WHILE]             
101  [IF]                }
101  [NONE]              
103  [COMMENT_WHOLE]     /* space out the rest */
103  [NONE]              
104  [NONE]              while
104  [WHILE]             (
104  [NONE]              cpd
104  [NONE]              .
104  [NONE]              column
104  [NONE]              <
104  [NONE]              column
104  [WHILE]             )
105  [WHILE]             
105  [NONE]              
106  [NONE]              add_text
106  [FUNC_CALL]         (
106  [NONE]              " "
106  [FUNC_CALL]         )
106  [NONE]              ;
106  [NONE]              
107  [WHILE]             
108  [FUNC_DEF]          }
108  [NONE]              
112  [FUNC_DEF]          void
112  [NONE]              output_parsed
112  [FUNC_DEF]          (
112  [NONE]              FILE
112  [NONE]              *
112  [NONE]              pfile
112  [FUNC_DEF]          )
112  [NONE]              
113  [FUNC_DEF]          {
113  [NONE]              
114  [NONE]              chunk_t
114  [NONE]              *
114  [NONE]              pc
114  [NONE]              ;
114  [NONE]              
115  [NONE]              int
115  [NONE]              cnt
115  [NONE]              ;
115  [NONE]              
117  [NONE]              output_options
117  [FUNC_CALL]         (
117  [NONE]              pfile
117  [FUNC_CALL]         )
117  [NONE]              ;
117  [NONE]              
118  [NONE]              output_defines
118  [FUNC_CALL]         (
118  [NONE]              pfile
118  [FUNC_CALL]         )
118  [NONE]              ;
118  [NONE]              
119  [NONE]              output_types
119  [FUNC_CALL]         (
119  [NONE]              pfile
119  [FUNC_CALL]         )
119  [NONE]              ;
119  [NONE]              
121  [NONE]              fprintf
121  [FUNC_CALL]         (
121  [NONE]              pfile
121  [NONE]              ,
121  [NONE]              "-=====-\n"
121  [FUNC_CALL]         )
121  [NONE]              ;
121  [NONE]              
122  [NONE]              fprintf
122  [FUNC_CALL]         (
122  [NONE]              pfile
122  [NONE]              ,
122  [NONE]              "Line      Tag          Parent     Columns  Br/Lvl/pp Flg Nl  Text"
122  [FUNC_CALL]         )
122  [NONE]              ;
122  [NONE]              
123  [NONE]              for
123  [FOR]               (
123  [NONE]              pc
123  [NONE]              =
123  [NONE]              chunk_get_head
123  [FUNC_CALL]         (
123  [FUNC_CALL]         )
123  [FOR]               ;
123  [NONE]              pc
123  [NONE]              !=
123  [NONE]              NULL
123  [FOR]               ;
123  [NONE]              pc
123  [NONE]              =
123  [NONE]              chunk_get_next
123  [FUNC_CALL]         (
123  [NONE]              pc
123  [FUNC_CALL]         )
123  [FOR]               )
123  [NONE]              
124  [FOR]               {
124  [NONE]              
125  [NONE]              fprintf
125  [FUNC_CALL]         (
125  [NONE]              pfile
125  [NONE]              ,
125  [NONE]              "\n%3d> %13.13s[%13.13s][%2d/%2d/%2d][%d/%d/%d][%6x][%d-%d]"
125  [NONE]              ,
125  [NONE]              
126  [NONE]              pc
126  [NONE]              ->
126  [NONE]              orig_line
126  [NONE]              ,
126  [NONE]              get_token_name
126  [FUNC_CALL]         (
126  [NONE]              pc
126  [NONE]              ->
126  [NONE]              type
126  [FUNC_CALL]         )
126  [NONE]              ,
126  [NONE]              
127  [NONE]              get_token_name
127  [FUNC_CALL]         (
127  [NONE]              pc
127  [NONE]              ->
127  [NONE]              parent_type
127  [FUNC_CALL]         )
127  [NONE]              ,
127  [NONE]              
128  [NONE]              pc
128  [NONE]              ->
128  [NONE]              column
128  [NONE]              ,
128  [NONE]              pc
128  [NONE]              ->
128  [NONE]              orig_col
128  [NONE]              ,
128  [NONE]              pc
128  [NONE]              ->
128  [NONE]              orig_col_end
128  [NONE]              ,
128  [NONE]              
129  [NONE]              pc
129  [NONE]              ->
129  [NONE]              brace_level
129  [NONE]              ,
129  [NONE]              pc
129  [NONE]              ->
129  [NONE]              level
129  [NONE]              ,
129  [NONE]              pc
129  [NONE]              ->
129  [NONE]              pp_level
129  [NONE]              ,
129  [NONE]              
130  [NONE]              pc
130  [NONE]              ->
130  [NONE]              flags
130  [NONE]              ,
130  [NONE]              pc
130  [NONE]              ->
130  [NONE]              nl_count
130  [NONE]              ,
130  [NONE]              pc
130  [NONE]              ->
130  [NONE]              after_tab
130  [FUNC_CALL]         )
130  [NONE]              ;
130  [NONE]              
132  [NONE]              if
132  [IF]                (
132  [NONE]              (
132  [NONE]              pc
132  [NONE]              ->
132  [NONE]              type
132  [NONE]              !=
132  [NONE]              CT_NEWLINE
132  [NONE]              )
132  [NONE]              &&
132  [NONE]              (
132  [NONE]              pc
132  [NONE]              ->
132  [NONE]              len
132  [NONE]              !=
132  [NONE]              0
132  [NONE]              )
132  [IF]                )
132  [NONE]              
133  [IF]                {
133  [NONE]              
134  [NONE]              for
134  [FOR]               (
134  [NONE]              cnt
134  [NONE]              =
134  [NONE]              0
134  [FOR]               ;
134  [NONE]              cnt
134  [NONE]              <
134  [NONE]              pc
134  [NONE]              ->
134  [NONE]              column
134  [FOR]               ;
134  [NONE]              cnt
134  [NONE]              ++
134  [FOR]               )
135  [FOR]               
135  [NONE]              
136  [NONE]              fprintf
136  [FUNC_CALL]         (
136  [NONE]              pfile
136  [NONE]              ,
136  [NONE]              " "
136  [FUNC_CALL]         )
136  [NONE]              ;
136  [NONE]              
137  [FOR]               
137  [NONE]              
138  [NONE]              fprintf
138  [FUNC_CALL]         (
138  [NONE]              pfile
138  [NONE]              ,
138  [NONE]              "%.*s"
138  [NONE]              ,
138  [NONE]              pc
138  [NONE]              ->
138  [NONE]              len
138  [NONE]              ,
138  [NONE]              pc
138  [NONE]              ->
138  [NONE]              str
138  [FUNC_CALL]         )
138  [NONE]              ;
138  [NONE]              
139  [IF]                }
139  [NONE]              
140  [FOR]               }
140  [NONE]              
141  [NONE]              fprintf
141  [FUNC_CALL]         (
141  [NONE]              pfile
141  [NONE]              ,
141  [NONE]              "\n-=====-\n"
141  [FUNC_CALL]         )
141  [NONE]              ;
141  [NONE]              
142  [NONE]              fflush
142  [FUNC_CALL]         (
142  [NONE]              pfile
142  [FUNC_CALL]         )
142  [NONE]              ;
142  [NONE]              
143  [FUNC_DEF]          }
143  [NONE]              
145  [FUNC_DEF]          void
145  [NONE]              output_options
145  [FUNC_DEF]          (
145  [NONE]              FILE
145  [NONE]              *
145  [NONE]              pfile
145  [FUNC_DEF]          )
145  [NONE]              
146  [FUNC_DEF]          {
146  [NONE]              
147  [NONE]              int
147  [NONE]              idx
147  [NONE]              ;
147  [NONE]              
148  [NONE]              const
148  [NONE]              option_map_value
148  [NONE]              *
148  [NONE]              ptr
148  [NONE]              ;
148  [NONE]              
150  [NONE]              fprintf
150  [FUNC_CALL]         (
150  [NONE]              pfile
150  [NONE]              ,
150  [NONE]              "-== Options ==-\n"
150  [FUNC_CALL]         )
150  [NONE]              ;
150  [NONE]              
151  [NONE]              for
151  [FOR]               (
151  [NONE]              idx
151  [NONE]              =
151  [NONE]              0
151  [FOR]               ;
151  [NONE]              idx
151  [NONE]              <
151  [NONE]              UO_option_count
151  [FOR]               ;
151  [NONE]              idx
151  [NONE]              ++
151  [FOR]               )
151  [NONE]              
152  [FOR]               {
152  [NONE]              
153  [NONE]              ptr
153  [NONE]              =
153  [NONE]              get_option_name
153  [FUNC_CALL]         (
153  [NONE]              idx
153  [FUNC_CALL]         )
153  [NONE]              ;
153  [NONE]              
154  [NONE]              if
154  [IF]                (
154  [NONE]              ptr
154  [NONE]              !=
154  [NONE]              NULL
154  [IF]                )
154  [NONE]              
155  [IF]                {
155  [NONE]              
156  [NONE]              if
156  [IF]                (
156  [NONE]              ptr
156  [NONE]              ->
156  [NONE]              type
156  [NONE]              ==
156  [NONE]              AT_BOOL
156  [IF]                )
156  [NONE]              
157  [IF]                {
157  [NONE]              
158  [NONE]              fprintf
158  [FUNC_CALL]         (
158  [NONE]              pfile
158  [NONE]              ,
158  [NONE]              "%3d) %32s = %s\n"
158  [NONE]              ,
158  [NONE]              
159  [NONE]              ptr
159  [NONE]              ->
159  [NONE]              id
159  [NONE]              ,
159  [NONE]              ptr
159  [NONE]              ->
159  [NONE]              name
159  [NONE]              ,
159  [NONE]              
160  [NONE]              cpd
160  [NONE]              .
160  [NONE]              settings
160  [NONE]              [
160  [NONE]              ptr
160  [NONE]              ->
160  [NONE]              id
160  [NONE]              ]
160  [NONE]              .
160  [NONE]              b
160  [NONE]              ?
160  [NONE]              "True"
160  [NONE]              :
160  [NONE]              "False"
160  [FUNC_CALL]         )
160  [NONE]              ;
160  [NONE]              
161  [IF]                }
161  [NONE]              
162  [NONE]              else
162  [NONE]              if
162  [ELSEIF]            (
162  [NONE]              ptr
162  [NONE]              ->
162  [NONE]              type
162  [NONE]              ==
162  [NONE]              AT_IARF
162  [ELSEIF]            )
162  [NONE]              
163  [ELSEIF]            {
163  [NONE]              
164  [NONE]              fprintf
164  [FUNC_CALL]         (
164  [NONE]              pfile
164  [NONE]              ,
164  [NONE]              "%3d) %32s = %s\n"
164  [NONE]              ,
164  [NONE]              
165  [NONE]              ptr
165  [NONE]              ->
165  [NONE]              id
165  [NONE]              ,
165  [NONE]              ptr
165  [NONE]              ->
165  [NONE]              name
165  [NONE]              ,
165  [NONE]              
166  [NONE]              (
166  [NONE]              cpd
166  [NONE]              .
166  [NONE]              settings
166  [NONE]              [
166  [NONE]              ptr
166  [NONE]              ->
166  [NONE]              id
166  [NONE]              ]
166  [NONE]              .
166  [NONE]              a
166  [NONE]              ==
166  [NONE]              AV_ADD
166  [NONE]              )
166  [NONE]              ?
166  [NONE]              "Add"
166  [NONE]              :
166  [NONE]              
167  [NONE]              (
167  [NONE]              cpd
167  [NONE]              .
167  [NONE]              settings
167  [NONE]              [
167  [NONE]              ptr
167  [NONE]              ->
167  [NONE]              id
167  [NONE]              ]
167  [NONE]              .
167  [NONE]              a
167  [NONE]              ==
167  [NONE]              AV_REMOVE
167  [NONE]              )
167  [NONE]              ?
167  [NONE]              "Remove"
167  [NONE]              :
167  [NONE]              
168  [NONE]              (
168  [NONE]              cpd
168  [NONE]              .
168  [NONE]              settings
168  [NONE]              [
168  [NONE]              ptr
168  [NONE]              ->
168  [NONE]              id
168  [NONE]              ]
168  [NONE]              .
168  [NONE]              a
168  [NONE]              ==
168  [NONE]              AV_FORCE
168  [NONE]              )
168  [NONE]              ?
168  [NONE]              "Force"
168  [NONE]              :
168  [NONE]              "Ignore"
168  [FUNC_CALL]         )
168  [NONE]              ;
168  [NONE]              
169  [ELSEIF]            }
169  [NONE]              
170  [NONE]              else
170  [NONE]              if
170  [ELSEIF]            (
170  [NONE]              ptr
170  [NONE]              ->
170  [NONE]              type
170  [NONE]              ==
170  [NONE]              AT_LINE
170  [ELSEIF]            )
170  [NONE]              
171  [ELSEIF]            {
171  [NONE]              
172  [NONE]              fprintf
172  [FUNC_CALL]         (
172  [NONE]              pfile
172  [NONE]              ,
172  [NONE]              "%3d) %32s = %s\n"
172  [NONE]              ,
172  [NONE]              
173  [NONE]              ptr
173  [NONE]              ->
173  [NONE]              id
173  [NONE]              ,
173  [NONE]              ptr
173  [NONE]              ->
173  [NONE]              name
173  [NONE]              ,
173  [NONE]              
174  [NONE]              (
174  [NONE]              cpd
174  [NONE]              .
174  [NONE]              settings
174  [NONE]              [
174  [NONE]              ptr
174  [NONE]              ->
174  [NONE]              id
174  [NONE]              ]
174  [NONE]              .
174  [NONE]              le
174  [NONE]              ==
174  [NONE]              LE_AUTO
174  [NONE]              )
174  [NONE]              ?
174  [NONE]              "Auto"
174  [NONE]              :
174  [NONE]              
175  [NONE]              (
175  [NONE]              cpd
175  [NONE]              .
175  [NONE]              settings
175  [NONE]              [
175  [NONE]              ptr
175  [NONE]              ->
175  [NONE]              id
175  [NONE]              ]
175  [NONE]              .
175  [NONE]              le
175  [NONE]              ==
175  [NONE]              LE_LF
175  [NONE]              )
175  [NONE]              ?
175  [NONE]              "LF"
175  [NONE]              :
175  [NONE]              
176  [NONE]              (
176  [NONE]              cpd
176  [NONE]              .
176  [NONE]              settings
176  [NONE]              [
176  [NONE]              ptr
176  [NONE]              ->
176  [NONE]              id
176  [NONE]              ]
176  [NONE]              .
176  [NONE]              le
176  [NONE]              ==
176  [NONE]              LE_CRLF
176  [NONE]              )
176  [NONE]              ?
176  [NONE]              "CRLF"
176  [NONE]              :
176  [NONE]              
177  [NONE]              (
177  [NONE]              cpd
177  [NONE]              .
177  [NONE]              settings
177  [NONE]              [
177  [NONE]              ptr
177  [NONE]              ->
177  [NONE]              id
177  [NONE]              ]
177  [NONE]              .
177  [NONE]              le
177  [NONE]              ==
177  [NONE]              LE_CR
177  [NONE]              )
177  [NONE]              ?
177  [NONE]              "CR"
177  [NONE]              :
177  [NONE]              "???"
177  [FUNC_CALL]         )
177  [NONE]              ;
177  [NONE]              
178  [ELSEIF]            }
178  [NONE]              
179  [NONE]              else
179  [COMMENT_END]       /* AT_NUM */
180  [ELSE]              
180  [NONE]              
181  [NONE]              fprintf
181  [FUNC_CALL]         (
181  [NONE]              pfile
181  [NONE]              ,
181  [NONE]              "%3d) %32s = %d\n"
181  [NONE]              ,
181  [NONE]              
182  [NONE]              ptr
182  [NONE]              ->
182  [NONE]              id
182  [NONE]              ,
182  [NONE]              ptr
182  [NONE]              ->
182  [NONE]              name
182  [NONE]              ,
182  [NONE]              cpd
182  [NONE]              .
182  [NONE]              settings
182  [NONE]              [
182  [NONE]              ptr
182  [NONE]              ->
182  [NONE]              id
182  [NONE]              ]
182  [NONE]              .
182  [NONE]              n
182  [FUNC_CALL]         )
182  [NONE]              ;
182  [NONE]              
183  [ELSE]              
184  [IF]                }
184  [NONE]              
185  [FOR]               }
185  [NONE]              
186  [FUNC_DEF]          }
186  [NONE]              
188  [COMMENT_WHOLE]     /**␤ * This renders the chunk list to a file.␤ */
190  [NONE]              
191  [FUNC_DEF]          void
191  [NONE]              output_text
191  [FUNC_DEF]          (
191  [NONE]              FILE
191  [NONE]              *
191  [NONE]              pfile
191  [FUNC_DEF]          )
191  [NONE]              
192  [FUNC_DEF]          {
192  [NONE]              
193  [NONE]              chunk_t
193  [NONE]              *
193  [NONE]              pc
193  [NONE]              ;
193  [NONE]              
194  [NONE]              chunk_t
194  [NONE]              *
194  [NONE]              prev
194  [NONE]              ;
194  [NONE]              
195  [NONE]              int
195  [NONE]              cnt
195  [NONE]              ;
195  [NONE]              
196  [NONE]              int
196  [NONE]              lvlcol
196  [NONE]              ;
196  [NONE]              
197  [NONE]              bool
197  [NONE]              allow_tabs
197  [NONE]              ;
197  [NONE]              
199  [NONE]              cpd
199  [NONE]              .
199  [NONE]              fout
199  [NONE]              =
199  [NONE]              pfile
199  [NONE]              ;
199  [NONE]              
201  [NONE]              for
201  [FOR]               (
201  [NONE]              pc
201  [NONE]              =
201  [NONE]              chunk_get_head
201  [FUNC_CALL]         (
201  [FUNC_CALL]         )
201  [FOR]               ;
201  [NONE]              pc
201  [NONE]              !=
201  [NONE]              NULL
201  [FOR]               ;
201  [NONE]              pc
201  [NONE]              =
201  [NONE]              chunk_get_next
201  [FUNC_CALL]         (
201  [NONE]              pc
201  [FUNC_CALL]         )
201  [FOR]               )
201  [NONE]              
202  [FOR]               {
202  [NONE]              
203  [NONE]              if
203  [IF]                (
203  [NONE]              pc
203  [NONE]              ->
203  [NONE]              type
203  [NONE]              ==
203  [NONE]              CT_NEWLINE
203  [IF]                )
203  [NONE]              
204  [IF]                {
204  [NONE]              
205  [NONE]              for
205  [FOR]               (
205  [NONE]              cnt
205  [NONE]              =
205  [NONE]              0
205  [FOR]               ;
205  [NONE]              cnt
205  [NONE]              <
205  [NONE]              pc
205  [NONE]              ->
205  [NONE]              nl_count
205  [FOR]               ;
205  [NONE]              cnt
205  [NONE]              ++
205  [FOR]               )
206  [FOR]               
206  [NONE]              
207  [NONE]              add_char
207  [FUNC_CALL]         (
207  [NONE]              '\n'
207  [FUNC_CALL]         )
207  [NONE]              ;
207  [NONE]              
208  [FOR]               
208  [NONE]              
209  [NONE]              cpd
209  [NONE]              .
209  [NONE]              did_newline
209  [NONE]              =
209  [NONE]              1
209  [NONE]              ;
209  [NONE]              
210  [NONE]              cpd
210  [NONE]              .
210  [NONE]              column
210  [NONE]              =
210  [NONE]              1
210  [NONE]              ;
210  [NONE]              
211  [NONE]              LOG_FMT
211  [FUNC_CALL]         (
211  [NONE]              LOUTIND
211  [NONE]              ,
211  [NONE]              " xx\n"
211  [FUNC_CALL]         )
211  [NONE]              ;
211  [NONE]              
212  [IF]                }
212  [NONE]              
213  [NONE]              else
213  [NONE]              if
213  [ELSEIF]            (
213  [NONE]              pc
213  [NONE]              ->
213  [NONE]              type
213  [NONE]              ==
213  [NONE]              CT_COMMENT_MULTI
213  [ELSEIF]            )
214  [ELSEIF]            
214  [NONE]              
215  [NONE]              output_comment_multi
215  [FUNC_CALL]         (
215  [NONE]              pc
215  [FUNC_CALL]         )
215  [NONE]              ;
215  [NONE]              
216  [ELSEIF]            
217  [NONE]              else
217  [NONE]              if
217  [ELSEIF]            (
217  [NONE]              pc
217  [NONE]              ->
217  [NONE]              type
217  [NONE]              ==
217  [NONE]              CT_COMMENT_CPP
217  [ELSEIF]            )
218  [ELSEIF]            
218  [NONE]              
219  [NONE]              pc
219  [NONE]              =
219  [NONE]              output_comment_cpp
219  [FUNC_CALL]         (
219  [NONE]              pc
219  [FUNC_CALL]         )
219  [NONE]              ;
219  [NONE]              
220  [ELSEIF]            
221  [NONE]              else
221  [NONE]              if
221  [ELSEIF]            (
221  [NONE]              pc
221  [NONE]              ->
221  [NONE]              len
221  [NONE]              ==
221  [NONE]              0
221  [ELSEIF]            )
222  [ELSEIF]            
222  [NONE]              
223  [COMMENT_WHOLE]     /* don't do anything for non-visible stuff */
223  [NONE]              
224  [NONE]              LOG_FMT
224  [FUNC_CALL]         (
224  [NONE]              LOUTIND
224  [NONE]              ,
224  [NONE]              " <%d> -"
224  [NONE]              ,
224  [NONE]              pc
224  [NONE]              ->
224  [NONE]              column
224  [FUNC_CALL]         )
224  [NONE]              ;
224  [NONE]              
225  [ELSEIF]            
226  [NONE]              else
226  [NONE]              
227  [ELSE]              {
227  [NONE]              
228  [COMMENT_WHOLE]     /* indent to the 'level' first */
228  [NONE]              
229  [NONE]              if
229  [IF]                (
229  [NONE]              cpd
229  [NONE]              .
229  [NONE]              did_newline
229  [IF]                )
229  [NONE]              
230  [IF]                {
230  [NONE]              
231  [NONE]              if
231  [IF]                (
231  [NONE]              cpd
231  [NONE]              .
231  [NONE]              settings
231  [NONE]              [
231  [NONE]              UO_indent_with_tabs
231  [NONE]              ]
231  [NONE]              .
231  [NONE]              n
231  [NONE]              ==
231  [NONE]              1
231  [IF]                )
231  [NONE]              
232  [IF]                {
232  [NONE]              
233  [NONE]              lvlcol
233  [NONE]              =
233  [NONE]              1
233  [NONE]              +
233  [NONE]              (
233  [NONE]              pc
233  [NONE]              ->
233  [NONE]              brace_level
233  [NONE]              *
233  [NONE]              cpd
233  [NONE]              .
233  [NONE]              settings
233  [NONE]              [
233  [NONE]              UO_indent_columns
233  [NONE]              ]
233  [NONE]              .
233  [NONE]              n
233  [NONE]              )
233  [NONE]              ;
233  [NONE]              
234  [NONE]              if
234  [IF]                (
234  [NONE]              (
234  [NONE]              pc
234  [NONE]              ->
234  [NONE]              column
234  [NONE]              >=
234  [NONE]              lvlcol
234  [NONE]              )
234  [NONE]              &&
234  [NONE]              (
234  [NONE]              lvlcol
234  [NONE]              >
234  [NONE]              1
234  [NONE]              )
234  [IF]                )
235  [IF]                
235  [NONE]              
236  [NONE]              output_to_column
236  [FUNC_CALL]         (
236  [NONE]              lvlcol
236  [NONE]              ,
236  [NONE]              true
236  [FUNC_CALL]         )
236  [NONE]              ;
236  [NONE]              
237  [IF]                
238  [IF]                }
238  [NONE]              
239  [NONE]              allow_tabs
239  [NONE]              =
239  [NONE]              (
239  [NONE]              cpd
239  [NONE]              .
239  [NONE]              settings
239  [NONE]              [
239  [NONE]              UO_indent_with_tabs
239  [NONE]              ]
239  [NONE]              .
239  [NONE]              n
239  [NONE]              ==
239  [NONE]              2
239  [NONE]              )
239  [NONE]              ||
239  [NONE]              
240  [NONE]              (
240  [NONE]              chunk_is_comment
240  [FUNC_CALL]         (
240  [NONE]              pc
240  [FUNC_CALL]         )
240  [NONE]              &&
240  [NONE]              
241  [NONE]              (
241  [NONE]              cpd
241  [NONE]              .
241  [NONE]              settings
241  [NONE]              [
241  [NONE]              UO_indent_with_tabs
241  [NONE]              ]
241  [NONE]              .
241  [NONE]              n
241  [NONE]              !=
241  [NONE]              0
241  [NONE]              )
241  [NONE]              )
241  [NONE]              ;
241  [NONE]              
243  [NONE]              LOG_FMT
243  [FUNC_CALL]         (
243  [NONE]              LOUTIND
243  [NONE]              ,
243  [NONE]              "  %d> col %d/%d - "
243  [NONE]              ,
243  [NONE]              pc
243  [NONE]              ->
243  [NONE]              orig_line
243  [NONE]              ,
243  [NONE]              pc
243  [NONE]              ->
243  [NONE]              column
243  [NONE]              ,
243  [NONE]              cpd
243  [NONE]              .
243  [NONE]              column
243  [FUNC_CALL]         )
243  [NONE]              ;
243  [NONE]              
244  [IF]                }
244  [NONE]              
245  [NONE]              else
245  [NONE]              
246  [ELSE]              {
246  [NONE]              
247  [COMMENT_WHOLE]     /* not the first item on a line */
247  [NONE]              
248  [NONE]              if
248  [IF]                (
248  [NONE]              cpd
248  [NONE]              .
248  [NONE]              settings
248  [NONE]              [
248  [NONE]              UO_align_keep_tabs
248  [NONE]              ]
248  [NONE]              .
248  [NONE]              b
248  [IF]                )
249  [IF]                
249  [NONE]              
250  [NONE]              allow_tabs
250  [NONE]              =
250  [NONE]              pc
250  [NONE]              ->
250  [NONE]              after_tab
250  [NONE]              ;
250  [NONE]              
251  [IF]                
252  [NONE]              else
252  [NONE]              
253  [ELSE]              {
253  [NONE]              
254  [NONE]              prev
254  [NONE]              =
254  [NONE]              chunk_get_prev
254  [FUNC_CALL]         (
254  [NONE]              pc
254  [FUNC_CALL]         )
254  [NONE]              ;
254  [NONE]              
255  [NONE]              allow_tabs
255  [NONE]              =
255  [NONE]              (
255  [NONE]              cpd
255  [NONE]              .
255  [NONE]              settings
255  [NONE]              [
255  [NONE]              UO_align_with_tabs
255  [NONE]              ]
255  [NONE]              .
255  [NONE]              b
255  [NONE]              &&
255  [NONE]              
256  [NONE]              (
256  [NONE]              (
256  [NONE]              pc
256  [NONE]              ->
256  [NONE]              flags
256  [NONE]              &
256  [NONE]              PCF_WAS_ALIGNED
256  [NONE]              )
256  [NONE]              !=
256  [NONE]              0
256  [NONE]              )
256  [NONE]              &&
256  [NONE]              
257  [NONE]              (
257  [NONE]              (
257  [NONE]              (
257  [NONE]              pc
257  [NONE]              ->
257  [NONE]              column
257  [NONE]              -
257  [NONE]              1
257  [NONE]              )
257  [NONE]              %
257  [NONE]              cpd
257  [NONE]              .
257  [NONE]              settings
257  [NONE]              [
257  [NONE]              UO_output_tab_size
257  [NONE]              ]
257  [NONE]              .
257  [NONE]              n
257  [NONE]              )
257  [NONE]              ==
257  [NONE]              0
257  [NONE]              )
257  [NONE]              &&
257  [NONE]              
258  [NONE]              (
258  [NONE]              (
258  [NONE]              prev
258  [NONE]              ->
258  [NONE]              column
258  [NONE]              +
258  [NONE]              prev
258  [NONE]              ->
258  [NONE]              len
258  [NONE]              +
258  [NONE]              1
258  [NONE]              )
258  [NONE]              !=
258  [NONE]              pc
258  [NONE]              ->
258  [NONE]              column
258  [NONE]              )
258  [NONE]              )
258  [NONE]              ;
258  [NONE]              
259  [ELSE]              }
259  [NONE]              
260  [NONE]              LOG_FMT
260  [FUNC_CALL]         (
260  [NONE]              LOUTIND
260  [NONE]              ,
260  [NONE]              " %d -"
260  [NONE]              ,
260  [NONE]              pc
260  [NONE]              ->
260  [NONE]              column
260  [FUNC_CALL]         )
260  [NONE]              ;
260  [NONE]              
261  [ELSE]              }
261  [NONE]              
263  [NONE]              output_to_column
263  [FUNC_CALL]         (
263  [NONE]              pc
263  [NONE]              ->
263  [NONE]              column
263  [NONE]              ,
263  [NONE]              allow_tabs
263  [FUNC_CALL]         )
263  [NONE]              ;
263  [NONE]              
264  [NONE]              add_text_len
264  [FUNC_CALL]         (
264  [NONE]              pc
264  [NONE]              ->
264  [NONE]              str
264  [NONE]              ,
264  [NONE]              pc
264  [NONE]              ->
264  [NONE]              len
264  [FUNC_CALL]         )
264  [NONE]              ;
264  [NONE]              
265  [NONE]              cpd
265  [NONE]              .
265  [NONE]              did_newline
265  [NONE]              =
265  [NONE]              chunk_is_newline
265  [FUNC_CALL]         (
265  [NONE]              pc
265  [FUNC_CALL]         )
265  [NONE]              ;
265  [NONE]              
266  [ELSE]              }
266  [NONE]              
267  [FOR]               }
267  [NONE]              
268  [FUNC_DEF]          }
268  [NONE]              
271  [COMMENT_WHOLE]     /**␤ * Given a multi-line comemnt block that starts in column X, figure out how␤ * much subsequent lines should be indented.␤ *␤ * The answer is either 0 or 1.␤ *␤ * The decision is based on:␤ *  - the first line length␤ *  - the second line leader length␤ *  - the last line length␤ *␤ * If the first and last line are the same length and don't contain any alnum␤ * chars and (the first line len > 2 or the second leader is the same as the␤ * first line length), then the indent is 0.␤ *␤ * If the leader on the second line is 1 wide or missing, then the indent is 1.␤ *␤ * Otherwise, the indent is 0.␤ *␤ * @param str       The comment string␤ * @param len       Length of the comment␤ * @param start_col Starting column␤ * @return 0 or 1␤ */
294  [NONE]              
295  [FUNC_DEF]          static
295  [FUNC_DEF]          int
295  [NONE]              calculate_comment_body_indent
295  [FUNC_DEF]          (
295  [NONE]              const
295  [NONE]              char
295  [NONE]              *
295  [NONE]              str
295  [NONE]              ,
295  [NONE]              int
295  [NONE]              len
295  [NONE]              ,
295  [NONE]              int
295  [NONE]              start_col
295  [FUNC_DEF]          )
295  [NONE]              
296  [FUNC_DEF]          {
296  [NONE]              
297  [NONE]              int
297  [NONE]              idx
297  [NONE]              =
297  [NONE]              0
297  [NONE]              ;
297  [NONE]              
298  [NONE]              int
298  [NONE]              first_len
298  [NONE]              =
298  [NONE]              0
298  [NONE]              ;
298  [NONE]              
299  [NONE]              int
299  [NONE]              last_len
299  [NONE]              =
299  [NONE]              0
299  [NONE]              ;
299  [NONE]              
300  [NONE]              int
300  [NONE]              width
300  [NONE]              =
300  [NONE]              0
300  [NONE]              ;
300  [NONE]              
302  [COMMENT_WHOLE]     /* find the last line length */
302  [NONE]              
303  [NONE]              for
303  [FOR]               (
303  [NONE]              idx
303  [NONE]              =
303  [NONE]              len
303  [NONE]              -
303  [NONE]              1
303  [FOR]               ;
303  [NONE]              idx
303  [NONE]              >
303  [NONE]              0
303  [FOR]               ;
303  [NONE]              idx
303  [NONE]              --
303  [FOR]               )
303  [NONE]              
304  [FOR]               {
304  [NONE]              
305  [NONE]              if
305  [IF]                (
305  [NONE]              (
305  [NONE]              str
305  [NONE]              [
305  [NONE]              idx
305  [NONE]              ]
305  [NONE]              ==
305  [NONE]              '\n'
305  [NONE]              )
305  [NONE]              ||
305  [NONE]              (
305  [NONE]              str
305  [NONE]              [
305  [NONE]              idx
305  [NONE]              ]
305  [NONE]              ==
305  [NONE]              '\r'
305  [NONE]              )
305  [IF]                )
305  [NONE]              
306  [IF]                {
306  [NONE]              
307  [NONE]              idx
307  [NONE]              ++
307  [NONE]              ;
307  [NONE]              
308  [NONE]              while
308  [WHILE]             (
308  [NONE]              (
308  [NONE]              idx
308  [NONE]              <
308  [NONE]              len
308  [NONE]              )
308  [NONE]              &&
308  [NONE]              (
308  [NONE]              (
308  [NONE]              str
308  [NONE]              [
308  [NONE]              idx
308  [NONE]              ]
308  [NONE]              ==
308  [NONE]              ' '
308  [NONE]              )
308  [NONE]              ||
308  [NONE]              (
308  [NONE]              str
308  [NONE]              [
308  [NONE]              idx
308  [NONE]              ]
308  [NONE]              ==
308  [NONE]              '\t'
308  [NONE]              )
308  [NONE]              )
308  [WHILE]             )
309  [WHILE]             
309  [NONE]              
310  [NONE]              idx
310  [NONE]              ++
310  [NONE]              ;
310  [NONE]              
311  [WHILE]             
311  [NONE]              
312  [NONE]              last_len
312  [NONE]              =
312  [NONE]              len
312  [NONE]              -
312  [NONE]              idx
312  [NONE]              ;
312  [NONE]              
313  [NONE]              break
313  [NONE]              ;
313  [NONE]              
314  [IF]                }
314  [NONE]              
315  [FOR]               }
315  [NONE]              
317  [COMMENT_WHOLE]     /* find the first line length */
317  [NONE]              
318  [NONE]              for
318  [FOR]               (
318  [NONE]              idx
318  [NONE]              =
318  [NONE]              0
318  [FOR]               ;
318  [NONE]              idx
318  [NONE]              <
318  [NONE]              len
318  [FOR]               ;
318  [NONE]              idx
318  [NONE]              ++
318  [FOR]               )
318  [NONE]              
319  [FOR]               {
319  [NONE]              
320  [NONE]              if
320  [IF]                (
320  [NONE]              (
320  [NONE]              str
320  [NONE]              [
320  [NONE]              idx
320  [NONE]              ]
320  [NONE]              ==
320  [NONE]              '\n'
320  [NONE]              )
320  [NONE]              ||
320  [NONE]              (
320  [NONE]              str
320  [NONE]              [
320  [NONE]              idx
320  [NONE]              ]
320  [NONE]              ==
320  [NONE]              '\r'
320  [NONE]              )
320  [IF]                )
320  [NONE]              
321  [IF]                {
321  [NONE]              
322  [NONE]              first_len
322  [NONE]              =
322  [NONE]              idx
322  [NONE]              ;
322  [NONE]              
323  [NONE]              while
323  [WHILE]             (
323  [NONE]              (
323  [NONE]              str
323  [NONE]              [
323  [NONE]              first_len
323  [NONE]              -
323  [NONE]              1
323  [NONE]              ]
323  [NONE]              ==
323  [NONE]              ' '
323  [NONE]              )
323  [NONE]              ||
323  [NONE]              (
323  [NONE]              str
323  [NONE]              [
323  [NONE]              first_len
323  [NONE]              -
323  [NONE]              1
323  [NONE]              ]
323  [NONE]              ==
323  [NONE]              '\t'
323  [NONE]              )
323  [WHILE]             )
324  [WHILE]             
324  [NONE]              
325  [NONE]              first_len
325  [NONE]              --
325  [NONE]              ;
326  [WHILE]             
326  [NONE]              
328  [COMMENT_WHOLE]     /* handle DOS endings */
328  [NONE]              
329  [NONE]              if
329  [IF]                (
329  [NONE]              (
329  [NONE]              str
329  [NONE]              [
329  [NONE]              idx
329  [NONE]              ]
329  [NONE]              ==
329  [NONE]              '\r'
329  [NONE]              )
329  [NONE]              &&
329  [NONE]              (
329  [NONE]              str
329  [NONE]              [
329  [NONE]              idx
329  [NONE]              +
329  [NONE]              1
329  [NONE]              ]
329  [NONE]              ==
329  [NONE]              '\n'
329  [NONE]              )
329  [IF]                )
330  [IF]                
330  [NONE]              
331  [NONE]              idx
331  [NONE]              ++
331  [NONE]              ;
331  [NONE]              
332  [IF]                
332  [NONE]              
333  [NONE]              idx
333  [NONE]              ++
333  [NONE]              ;
333  [NONE]              
334  [NONE]              break
334  [NONE]              ;
334  [NONE]              
335  [IF]                }
335  [NONE]              
336  [FOR]               }
336  [NONE]              
338  [COMMENT_WHOLE]     /* Scan the second line */
338  [NONE]              
339  [NONE]              width
339  [NONE]              =
339  [NONE]              0
339  [NONE]              ;
339  [NONE]              
340  [NONE]              for
340  [FOR]               (
340  [COMMENT_EMBED]     /* nada */
340  [FOR]               ;
340  [NONE]              idx
340  [NONE]              <
340  [NONE]              len
340  [FOR]               ;
340  [NONE]              idx
340  [NONE]              ++
340  [FOR]               )
340  [NONE]              
341  [FOR]               {
341  [NONE]              
342  [NONE]              if
342  [IF]                (
342  [NONE]              (
342  [NONE]              str
342  [NONE]              [
342  [NONE]              idx
342  [NONE]              ]
342  [NONE]              ==
342  [NONE]              ' '
342  [NONE]              )
342  [NONE]              ||
342  [NONE]              (
342  [NONE]              str
342  [NONE]              [
342  [NONE]              idx
342  [NONE]              ]
342  [NONE]              ==
342  [NONE]              '\t'
342  [NONE]              )
342  [IF]                )
342  [NONE]              
343  [IF]                {
343  [NONE]              
344  [NONE]              if
344  [IF]                (
344  [NONE]              width
344  [NONE]              >
344  [NONE]              0
344  [IF]                )
345  [IF]                
345  [NONE]              
346  [NONE]              break
346  [NONE]              ;
346  [NONE]              
347  [IF]                
347  [NONE]              
348  [NONE]              continue
348  [NONE]              ;
348  [NONE]              
349  [IF]                }
349  [NONE]              
350  [NONE]              if
350  [IF]                (
350  [NONE]              (
350  [NONE]              str
350  [NONE]              [
350  [NONE]              idx
350  [NONE]              ]
350  [NONE]              ==
350  [NONE]              '\n'
350  [NONE]              )
350  [NONE]              ||
350  [NONE]              (
350  [NONE]              str
350  [NONE]              [
350  [NONE]              idx
350  [NONE]              ]
350  [NONE]              ==
350  [NONE]              '\r'
350  [NONE]              )
350  [IF]                )
351  [IF]                
351  [NONE]              
352  [COMMENT_WHOLE]     /* Done with second line */
352  [NONE]              
353  [NONE]              break
353  [NONE]              ;
354  [IF]                
354  [NONE]              
356  [COMMENT_WHOLE]     /* Count the leading chars */
356  [NONE]              
357  [NONE]              if
357  [IF]                (
357  [NONE]              (
357  [NONE]              str
357  [NONE]              [
357  [NONE]              idx
357  [NONE]              ]
357  [NONE]              ==
357  [NONE]              '*'
357  [NONE]              )
357  [NONE]              ||
357  [NONE]              
358  [NONE]              (
358  [NONE]              str
358  [NONE]              [
358  [NONE]              idx
358  [NONE]              ]
358  [NONE]              ==
358  [NONE]              '|'
358  [NONE]              )
358  [NONE]              ||
358  [NONE]              
359  [NONE]              (
359  [NONE]              str
359  [NONE]              [
359  [NONE]              idx
359  [NONE]              ]
359  [NONE]              ==
359  [NONE]              '\\'
359  [NONE]              )
359  [NONE]              ||
359  [NONE]              
360  [NONE]              (
360  [NONE]              str
360  [NONE]              [
360  [NONE]              idx
360  [NONE]              ]
360  [NONE]              ==
360  [NONE]              '#'
360  [NONE]              )
360  [NONE]              ||
360  [NONE]              
361  [NONE]              (
361  [NONE]              str
361  [NONE]              [
361  [NONE]              idx
361  [NONE]              ]
361  [NONE]              ==
361  [NONE]              '+'
361  [NONE]              )
361  [IF]                )
362  [IF]                
362  [NONE]              
363  [NONE]              width
363  [NONE]              ++
363  [NONE]              ;
363  [NONE]              
364  [IF]                
365  [NONE]              else
366  [ELSE]              
366  [NONE]              
367  [NONE]              break
367  [NONE]              ;
367  [NONE]              
368  [ELSE]              
369  [FOR]               }
369  [NONE]              
371  [COMMENT_WHOLE]     //LOG_FMT(LSYS, "%s: first=%d last=%d width=%d\n", __func__, first_len, last_len, width);
371  [NONE]              
373  [COMMENT_WHOLE]     /*TODO: make the first_len minimum (4) configurable? */
373  [NONE]              
374  [NONE]              if
374  [IF]                (
374  [NONE]              (
374  [NONE]              first_len
374  [NONE]              ==
374  [NONE]              last_len
374  [NONE]              )
374  [NONE]              &&
374  [NONE]              (
374  [NONE]              (
374  [NONE]              first_len
374  [NONE]              >
374  [NONE]              4
374  [NONE]              )
374  [NONE]              ||
374  [NONE]              first_len
374  [NONE]              ==
374  [NONE]              width
374  [NONE]              )
374  [IF]                )
375  [IF]                
375  [NONE]              
376  [NONE]              return
376  [NONE]              0
376  [NONE]              ;
376  [NONE]              
377  [IF]                
377  [NONE]              
379  [NONE]              return
379  [NONE]              (
379  [NONE]              width
379  [NONE]              ==
379  [NONE]              2
379  [NONE]              )
379  [NONE]              ?
379  [NONE]              0
379  [NONE]              :
379  [NONE]              1
379  [NONE]              ;
379  [NONE]              
380  [FUNC_DEF]          }
380  [NONE]              
382  [COMMENT_WHOLE]     /**␤ * Outputs the CPP comment at pc.␤ * CPP comment combining is done here␤ *␤ * @return the last chunk output'd␤ */
387  [NONE]              
388  [FUNC_DEF]          chunk_t
388  [FUNC_DEF]          *
388  [NONE]              output_comment_cpp
388  [FUNC_DEF]          (
388  [NONE]              chunk_t
388  [NONE]              *
388  [NONE]              first
388  [FUNC_DEF]          )
388  [NONE]              
389  [FUNC_DEF]          {
389  [NONE]              
390  [NONE]              int
390  [NONE]              col
390  [NONE]              =
390  [NONE]              first
390  [NONE]              ->
390  [NONE]              column
390  [NONE]              ;
390  [NONE]              
391  [NONE]              int
391  [NONE]              col_br
391  [NONE]              =
391  [NONE]              1
391  [NONE]              +
391  [NONE]              (
391  [NONE]              first
391  [NONE]              ->
391  [NONE]              brace_level
391  [NONE]              *
391  [NONE]              cpd
391  [NONE]              .
391  [NONE]              settings
391  [NONE]              [
391  [NONE]              UO_indent_columns
391  [NONE]              ]
391  [NONE]              .
391  [NONE]              n
391  [NONE]              )
391  [NONE]              ;
391  [NONE]              
393  [COMMENT_WHOLE]     /* Make sure we have at least one space past the last token */
393  [NONE]              
394  [NONE]              if
394  [IF]                (
394  [NONE]              first
394  [NONE]              ->
394  [NONE]              parent_type
394  [NONE]              ==
394  [NONE]              CT_COMMENT_END
394  [IF]                )
394  [NONE]              
395  [IF]                {
395  [NONE]              
396  [NONE]              chunk_t
396  [NONE]              *
396  [NONE]              prev
396  [NONE]              =
396  [NONE]              chunk_get_prev
396  [FUNC_CALL]         (
396  [NONE]              first
396  [FUNC_CALL]         )
396  [NONE]              ;
396  [NONE]              
397  [NONE]              if
397  [IF]                (
397  [NONE]              prev
397  [NONE]              !=
397  [NONE]              NULL
397  [IF]                )
397  [NONE]              
398  [IF]                {
398  [NONE]              
399  [NONE]              int
399  [NONE]              col_min
399  [NONE]              =
399  [NONE]              prev
399  [NONE]              ->
399  [NONE]              column
399  [NONE]              +
399  [NONE]              prev
399  [NONE]              ->
399  [NONE]              len
399  [NONE]              +
399  [NONE]              1
399  [NONE]              ;
399  [NONE]              
400  [NONE]              if
400  [IF]                (
400  [NONE]              col
400  [NONE]              <
400  [NONE]              col_min
400  [IF]                )
401  [IF]                
401  [NONE]              
402  [NONE]              col
402  [NONE]              =
402  [NONE]              col_min
402  [NONE]              ;
402  [NONE]              
403  [IF]                
404  [IF]                }
404  [NONE]              
405  [IF]                }
405  [NONE]              
407  [COMMENT_WHOLE]     /* Bump out to the column */
407  [NONE]              
408  [NONE]              output_indent
408  [FUNC_CALL]         (
408  [NONE]              col
408  [NONE]              ,
408  [NONE]              col_br
408  [FUNC_CALL]         )
408  [NONE]              ;
408  [NONE]              
410  [NONE]              if
410  [IF]                (
410  [NONE]              !
410  [NONE]              cpd
410  [NONE]              .
410  [NONE]              settings
410  [NONE]              [
410  [NONE]              UO_cmt_cpp_to_c
410  [NONE]              ]
410  [NONE]              .
410  [NONE]              b
410  [IF]                )
410  [NONE]              
411  [IF]                {
411  [NONE]              
412  [NONE]              add_text_len
412  [FUNC_CALL]         (
412  [NONE]              first
412  [NONE]              ->
412  [NONE]              str
412  [NONE]              ,
412  [NONE]              first
412  [NONE]              ->
412  [NONE]              len
412  [FUNC_CALL]         )
412  [NONE]              ;
412  [NONE]              
413  [NONE]              return
413  [NONE]              first
413  [NONE]              ;
413  [NONE]              
414  [IF]                }
414  [NONE]              
416  [COMMENT_WHOLE]     /* If we are grouping, see if there is something to group */
416  [NONE]              
417  [NONE]              bool
417  [NONE]              combined
417  [NONE]              =
417  [NONE]              false
417  [NONE]              ;
417  [NONE]              
418  [NONE]              if
418  [IF]                (
418  [NONE]              cpd
418  [NONE]              .
418  [NONE]              settings
418  [NONE]              [
418  [NONE]              UO_cmt_cpp_group
418  [NONE]              ]
418  [NONE]              .
418  [NONE]              b
418  [IF]                )
418  [NONE]              
419  [IF]                {
419  [NONE]              
420  [COMMENT_WHOLE]     /* next is a newline by definition */
420  [NONE]              
421  [NONE]              chunk_t
421  [NONE]              *
421  [NONE]              next
421  [NONE]              =
421  [NONE]              chunk_get_next
421  [FUNC_CALL]         (
421  [NONE]              first
421  [FUNC_CALL]         )
421  [NONE]              ;
421  [NONE]              
422  [NONE]              if
422  [IF]                (
422  [NONE]              (
422  [NONE]              next
422  [NONE]              !=
422  [NONE]              NULL
422  [NONE]              )
422  [NONE]              &&
422  [NONE]              (
422  [NONE]              next
422  [NONE]              ->
422  [NONE]              nl_count
422  [NONE]              ==
422  [NONE]              1
422  [NONE]              )
422  [IF]                )
422  [NONE]              
423  [IF]                {
423  [NONE]              
424  [NONE]              next
424  [NONE]              =
424  [NONE]              chunk_get_next
424  [FUNC_CALL]         (
424  [NONE]              next
424  [FUNC_CALL]         )
424  [NONE]              ;
424  [NONE]              
426  [COMMENT_WHOLE]     /**␤          * Only combine the next comment if they are both at indent level or␤          * the second one is NOT at indent or less␤          *␤          * A trailing comment cannot be combined with a comment at indent␤          * level or less␤          */
432  [NONE]              
433  [NONE]              if
433  [IF]                (
433  [NONE]              (
433  [NONE]              next
433  [NONE]              !=
433  [NONE]              NULL
433  [NONE]              )
433  [NONE]              &&
433  [NONE]              
434  [NONE]              (
434  [NONE]              next
434  [NONE]              ->
434  [NONE]              type
434  [NONE]              ==
434  [NONE]              CT_COMMENT_CPP
434  [NONE]              )
434  [NONE]              &&
434  [NONE]              
435  [NONE]              (
435  [NONE]              (
435  [NONE]              (
435  [NONE]              next
435  [NONE]              ->
435  [NONE]              column
435  [NONE]              ==
435  [NONE]              1
435  [NONE]              )
435  [NONE]              &&
435  [NONE]              (
435  [NONE]              first
435  [NONE]              ->
435  [NONE]              column
435  [NONE]              ==
435  [NONE]              1
435  [NONE]              )
435  [NONE]              )
435  [NONE]              ||
435  [NONE]              
436  [NONE]              (
436  [NONE]              (
436  [NONE]              next
436  [NONE]              ->
436  [NONE]              column
436  [NONE]              ==
436  [NONE]              col_br
436  [NONE]              )
436  [NONE]              &&
436  [NONE]              (
436  [NONE]              first
436  [NONE]              ->
436  [NONE]              column
436  [NONE]              ==
436  [NONE]              col_br
436  [NONE]              )
436  [NONE]              )
436  [NONE]              ||
436  [NONE]              
437  [NONE]              (
437  [NONE]              (
437  [NONE]              next
437  [NONE]              ->
437  [NONE]              column
437  [NONE]              >
437  [NONE]              col_br
437  [NONE]              )
437  [NONE]              &&
437  [NONE]              (
437  [NONE]              first
437  [NONE]              ->
437  [NONE]              parent_type
437  [NONE]              ==
437  [NONE]              CT_COMMENT_END
437  [NONE]              )
437  [NONE]              )
437  [NONE]              )
437  [IF]                )
438  [IF]                
438  [NONE]              
439  [NONE]              combined
439  [NONE]              =
439  [NONE]              true
439  [NONE]              ;
439  [NONE]              
440  [IF]                
441  [IF]                }
441  [NONE]              
442  [IF]                }
442  [NONE]              
444  [NONE]              if
444  [IF]                (
444  [NONE]              !
444  [NONE]              combined
444  [IF]                )
444  [NONE]              
445  [IF]                {
445  [NONE]              
446  [COMMENT_WHOLE]     /* nothing to group: just output a single line */
446  [NONE]              
447  [NONE]              add_text_len
447  [FUNC_CALL]         (
447  [NONE]              "/*"
447  [NONE]              ,
447  [NONE]              2
447  [FUNC_CALL]         )
447  [NONE]              ;
447  [NONE]              
448  [NONE]              if
448  [IF]                (
448  [NONE]              (
448  [NONE]              first
448  [NONE]              ->
448  [NONE]              str
448  [NONE]              [
448  [NONE]              2
448  [NONE]              ]
448  [NONE]              !=
448  [NONE]              ' '
448  [NONE]              )
448  [NONE]              &&
448  [NONE]              (
448  [NONE]              first
448  [NONE]              ->
448  [NONE]              str
448  [NONE]              [
448  [NONE]              2
448  [NONE]              ]
448  [NONE]              !=
448  [NONE]              '\t'
448  [NONE]              )
448  [IF]                )
449  [IF]                
449  [NONE]              
450  [NONE]              add_char
450  [FUNC_CALL]         (
450  [NONE]              ' '
450  [FUNC_CALL]         )
450  [NONE]              ;
450  [NONE]              
451  [IF]                
451  [NONE]              
452  [NONE]              add_text_len
452  [FUNC_CALL]         (
452  [NONE]              &
452  [NONE]              first
452  [NONE]              ->
452  [NONE]              str
452  [NONE]              [
452  [NONE]              2
452  [NONE]              ]
452  [NONE]              ,
452  [NONE]              first
452  [NONE]              ->
452  [NONE]              len
452  [NONE]              -
452  [NONE]              2
452  [FUNC_CALL]         )
452  [NONE]              ;
452  [NONE]              
453  [NONE]              add_text_len
453  [FUNC_CALL]         (
453  [NONE]              " */"
453  [NONE]              ,
453  [NONE]              3
453  [FUNC_CALL]         )
453  [NONE]              ;
453  [NONE]              
454  [NONE]              return
454  [NONE]              first
454  [NONE]              ;
454  [NONE]              
455  [IF]                }
455  [NONE]              
457  [NONE]              chunk_t
457  [NONE]              *
457  [NONE]              pc
457  [NONE]              =
457  [NONE]              first
457  [NONE]              ;
457  [NONE]              
458  [NONE]              chunk_t
458  [NONE]              *
458  [NONE]              last
458  [NONE]              =
458  [NONE]              first
458  [NONE]              ;
458  [NONE]              
460  [COMMENT_WHOLE]     /* Output the first line */
460  [NONE]              
461  [NONE]              add_text_len
461  [FUNC_CALL]         (
461  [NONE]              "/*"
461  [NONE]              ,
461  [NONE]              2
461  [FUNC_CALL]         )
461  [NONE]              ;
461  [NONE]              
462  [NONE]              if
462  [IF]                (
462  [NONE]              combined
462  [NONE]              &&
462  [NONE]              cpd
462  [NONE]              .
462  [NONE]              settings
462  [NONE]              [
462  [NONE]              UO_cmt_cpp_nl_start
462  [NONE]              ]
462  [NONE]              .
462  [NONE]              b
462  [IF]                )
463  [IF]                
463  [NONE]              
464  [COMMENT_WHOLE]     /* I suppose someone more clever could do this without a goto or␤       * repeating too much code...␤       */
466  [NONE]              
467  [NONE]              goto
467  [NONE]              cpp_newline
467  [NONE]              ;
467  [NONE]              
468  [IF]                
468  [NONE]              
469  [NONE]              goto
469  [NONE]              cpp_addline
469  [NONE]              ;
469  [NONE]              
471  [COMMENT_WHOLE]     /* Output combined lines */
471  [NONE]              
472  [NONE]              while
472  [WHILE]             (
472  [NONE]              (
472  [NONE]              pc
472  [NONE]              =
472  [NONE]              chunk_get_next
472  [FUNC_CALL]         (
472  [NONE]              pc
472  [FUNC_CALL]         )
472  [NONE]              )
472  [NONE]              !=
472  [NONE]              NULL
472  [WHILE]             )
472  [NONE]              
473  [WHILE]             {
473  [NONE]              
474  [NONE]              if
474  [IF]                (
474  [NONE]              (
474  [NONE]              pc
474  [NONE]              ->
474  [NONE]              type
474  [NONE]              ==
474  [NONE]              CT_NEWLINE
474  [NONE]              )
474  [NONE]              &&
474  [NONE]              (
474  [NONE]              pc
474  [NONE]              ->
474  [NONE]              nl_count
474  [NONE]              ==
474  [NONE]              1
474  [NONE]              )
474  [IF]                )
475  [IF]                
475  [NONE]              
476  [NONE]              continue
476  [NONE]              ;
477  [IF]                
477  [NONE]              
478  [NONE]              if
478  [IF]                (
478  [NONE]              pc
478  [NONE]              ->
478  [NONE]              type
478  [NONE]              !=
478  [NONE]              CT_COMMENT_CPP
478  [IF]                )
479  [IF]                
479  [NONE]              
480  [NONE]              break
480  [NONE]              ;
481  [IF]                
481  [NONE]              
482  [NONE]              if
482  [IF]                (
482  [NONE]              (
482  [NONE]              (
482  [NONE]              pc
482  [NONE]              ->
482  [NONE]              column
482  [NONE]              ==
482  [NONE]              1
482  [NONE]              )
482  [NONE]              &&
482  [NONE]              (
482  [NONE]              first
482  [NONE]              ->
482  [NONE]              column
482  [NONE]              ==
482  [NONE]              1
482  [NONE]              )
482  [NONE]              )
482  [NONE]              ||
482  [NONE]              
483  [NONE]              (
483  [NONE]              (
483  [NONE]              pc
483  [NONE]              ->
483  [NONE]              column
483  [NONE]              ==
483  [NONE]              col_br
483  [NONE]              )
483  [NONE]              &&
483  [NONE]              (
483  [NONE]              first
483  [NONE]              ->
483  [NONE]              column
483  [NONE]              ==
483  [NONE]              col_br
483  [NONE]              )
483  [NONE]              )
483  [NONE]              ||
483  [NONE]              
484  [NONE]              (
484  [NONE]              (
484  [NONE]              pc
484  [NONE]              ->
484  [NONE]              column
484  [NONE]              >
484  [NONE]              col_br
484  [NONE]              )
484  [NONE]              &&
484  [NONE]              (
484  [NONE]              first
484  [NONE]              ->
484  [NONE]              parent_type
484  [NONE]              ==
484  [NONE]              CT_COMMENT_END
484  [NONE]              )
484  [NONE]              )
484  [IF]                )
484  [NONE]              
485  [IF]                {
485  [NONE]              
486  [NONE]              last
486  [NONE]              =
486  [NONE]              pc
486  [NONE]              ;
486  [NONE]              
487  [NONE]              cpp_newline
487  [NONE]              :
487  [NONE]              
488  [NONE]              add_char
488  [FUNC_CALL]         (
488  [NONE]              '\n'
488  [FUNC_CALL]         )
488  [NONE]              ;
488  [NONE]              
489  [NONE]              output_indent
489  [FUNC_CALL]         (
489  [NONE]              col
489  [NONE]              ,
489  [NONE]              col_br
489  [FUNC_CALL]         )
489  [NONE]              ;
489  [NONE]              
490  [NONE]              add_char
490  [FUNC_CALL]         (
490  [NONE]              ' '
490  [FUNC_CALL]         )
490  [NONE]              ;
490  [NONE]              
491  [NONE]              add_char
491  [FUNC_CALL]         (
491  [NONE]              cpd
491  [NONE]              .
491  [NONE]              settings
491  [NONE]              [
491  [NONE]              UO_cmt_star_cont
491  [NONE]              ]
491  [NONE]              .
491  [NONE]              b
491  [NONE]              ?
491  [NONE]              '*'
491  [NONE]              :
491  [NONE]              ' '
491  [FUNC_CALL]         )
491  [NONE]              ;
491  [NONE]              
492  [NONE]              cpp_addline
492  [NONE]              :
492  [NONE]              
493  [NONE]              if
493  [IF]                (
493  [NONE]              (
493  [NONE]              pc
493  [NONE]              ->
493  [NONE]              str
493  [NONE]              [
493  [NONE]              2
493  [NONE]              ]
493  [NONE]              !=
493  [NONE]              ' '
493  [NONE]              )
493  [NONE]              &&
493  [NONE]              (
493  [NONE]              pc
493  [NONE]              ->
493  [NONE]              str
493  [NONE]              [
493  [NONE]              2
493  [NONE]              ]
493  [NONE]              !=
493  [NONE]              '\t'
493  [NONE]              )
493  [IF]                )
494  [IF]                
494  [NONE]              
495  [NONE]              add_char
495  [FUNC_CALL]         (
495  [NONE]              ' '
495  [FUNC_CALL]         )
495  [NONE]              ;
495  [NONE]              
496  [IF]                
496  [NONE]              
497  [NONE]              add_text_len
497  [FUNC_CALL]         (
497  [NONE]              &
497  [NONE]              pc
497  [NONE]              ->
497  [NONE]              str
497  [NONE]              [
497  [NONE]              2
497  [NONE]              ]
497  [NONE]              ,
497  [NONE]              pc
497  [NONE]              ->
497  [NONE]              len
497  [NONE]              -
497  [NONE]              2
497  [FUNC_CALL]         )
497  [NONE]              ;
497  [NONE]              
498  [IF]                }
498  [NONE]              
499  [WHILE]             }
499  [NONE]              
501  [NONE]              if
501  [IF]                (
501  [NONE]              cpd
501  [NONE]              .
501  [NONE]              settings
501  [NONE]              [
501  [NONE]              UO_cmt_cpp_nl_end
501  [NONE]              ]
501  [NONE]              .
501  [NONE]              b
501  [IF]                )
501  [NONE]              
502  [IF]                {
502  [NONE]              
503  [NONE]              add_char
503  [FUNC_CALL]         (
503  [NONE]              '\n'
503  [FUNC_CALL]         )
503  [NONE]              ;
503  [NONE]              
504  [NONE]              output_indent
504  [FUNC_CALL]         (
504  [NONE]              col
504  [NONE]              ,
504  [NONE]              col_br
504  [FUNC_CALL]         )
504  [NONE]              ;
504  [NONE]              
505  [IF]                }
505  [NONE]              
506  [NONE]              add_text_len
506  [FUNC_CALL]         (
506  [NONE]              " */"
506  [NONE]              ,
506  [NONE]              3
506  [FUNC_CALL]         )
506  [NONE]              ;
506  [NONE]              
507  [NONE]              return
507  [NONE]              last
507  [NONE]              ;
507  [NONE]              
508  [FUNC_DEF]          }
508  [NONE]              
510  [FUNC_DEF]          void
510  [NONE]              output_comment_multi
510  [FUNC_DEF]          (
510  [NONE]              chunk_t
510  [NONE]              *
510  [NONE]              pc
510  [FUNC_DEF]          )
510  [NONE]              
511  [FUNC_DEF]          {
511  [NONE]              
512  [NONE]              int
512  [NONE]              cmt_col
512  [NONE]              =
512  [NONE]              pc
512  [NONE]              ->
512  [NONE]              column
512  [NONE]              ;
512  [NONE]              
513  [NONE]              const
513  [NONE]              char
513  [NONE]              *
513  [NONE]              cmt_str
513  [NONE]              ;
513  [NONE]              
514  [NONE]              int
514  [NONE]              remaining
514  [NONE]              ;
514  [NONE]              
515  [NONE]              char
515  [NONE]              ch
515  [NONE]              ;
515  [NONE]              
516  [NONE]              chunk_t
516  [NONE]              *
516  [NONE]              prev
516  [NONE]              ;
516  [NONE]              
517  [NONE]              char
517  [NONE]              line
517  [NONE]              [
517  [NONE]              1024
517  [NONE]              ]
517  [NONE]              ;
517  [NONE]              
518  [NONE]              int
518  [NONE]              line_len
518  [NONE]              ;
518  [NONE]              
519  [NONE]              int
519  [NONE]              line_count
519  [NONE]              =
519  [NONE]              0
519  [NONE]              ;
519  [NONE]              
520  [NONE]              int
520  [NONE]              ccol
520  [NONE]              ;
520  [NONE]              
521  [NONE]              int
521  [NONE]              col_diff
521  [NONE]              =
521  [NONE]              0
521  [NONE]              ;
521  [NONE]              
522  [NONE]              int
522  [NONE]              xtra
522  [NONE]              =
522  [NONE]              1
522  [NONE]              ;
522  [NONE]              
524  [NONE]              prev
524  [NONE]              =
524  [NONE]              chunk_get_prev
524  [FUNC_CALL]         (
524  [NONE]              pc
524  [FUNC_CALL]         )
524  [NONE]              ;
524  [NONE]              
525  [NONE]              if
525  [IF]                (
525  [NONE]              (
525  [NONE]              prev
525  [NONE]              !=
525  [NONE]              NULL
525  [NONE]              )
525  [NONE]              &&
525  [NONE]              (
525  [NONE]              prev
525  [NONE]              ->
525  [NONE]              type
525  [NONE]              !=
525  [NONE]              CT_NEWLINE
525  [NONE]              )
525  [IF]                )
526  [IF]                
526  [NONE]              
527  [NONE]              cmt_col
527  [NONE]              =
527  [NONE]              pc
527  [NONE]              ->
527  [NONE]              orig_col
527  [NONE]              ;
527  [NONE]              
528  [IF]                
529  [NONE]              else
530  [ELSE]              
530  [NONE]              
531  [NONE]              col_diff
531  [NONE]              =
531  [NONE]              pc
531  [NONE]              ->
531  [NONE]              orig_col
531  [NONE]              -
531  [NONE]              pc
531  [NONE]              ->
531  [NONE]              column
531  [NONE]              ;
531  [NONE]              
532  [ELSE]              
532  [NONE]              
534  [COMMENT_WHOLE]     //   fprintf(stderr, "Indenting1 line %d to col %d (orig=%d) col_diff=%d\n",
534  [NONE]              
535  [COMMENT_WHOLE]     //           pc->orig_line, cmt_col, pc->orig_col, col_diff);
535  [NONE]              
537  [NONE]              xtra
537  [NONE]              =
537  [NONE]              calculate_comment_body_indent
537  [FUNC_CALL]         (
537  [NONE]              pc
537  [NONE]              ->
537  [NONE]              str
537  [NONE]              ,
537  [NONE]              pc
537  [NONE]              ->
537  [NONE]              len
537  [NONE]              ,
537  [NONE]              pc
537  [NONE]              ->
537  [NONE]              column
537  [FUNC_CALL]         )
537  [NONE]              ;
537  [NONE]              
539  [NONE]              ccol
539  [NONE]              =
539  [NONE]              1
539  [NONE]              ;
539  [NONE]              
540  [NONE]              remaining
540  [NONE]              =
540  [NONE]              pc
540  [NONE]              ->
540  [NONE]              len
540  [NONE]              ;
540  [NONE]              
541  [NONE]              cmt_str
541  [NONE]              =
541  [NONE]              pc
541  [NONE]              ->
541  [NONE]              str
541  [NONE]              ;
541  [NONE]              
542  [NONE]              line_len
542  [NONE]              =
542  [NONE]              0
542  [NONE]              ;
542  [NONE]              
543  [NONE]              while
543  [WHILE]             (
543  [NONE]              remaining
543  [NONE]              >
543  [NONE]              0
543  [WHILE]             )
543  [NONE]              
544  [WHILE]             {
544  [NONE]              
545  [NONE]              ch
545  [NONE]              =
545  [NONE]              *
545  [NONE]              cmt_str
545  [NONE]              ;
545  [NONE]              
546  [NONE]              cmt_str
546  [NONE]              ++
546  [NONE]              ;
546  [NONE]              
547  [NONE]              remaining
547  [NONE]              --
547  [NONE]              ;
547  [NONE]              
549  [COMMENT_WHOLE]     /* handle the CRLF and CR endings. convert both to LF */
549  [NONE]              
550  [NONE]              if
550  [IF]                (
550  [NONE]              ch
550  [NONE]              ==
550  [NONE]              '\r'
550  [IF]                )
550  [NONE]              
551  [IF]                {
551  [NONE]              
552  [NONE]              ch
552  [NONE]              =
552  [NONE]              '\n'
552  [NONE]              ;
552  [NONE]              
553  [NONE]              if
553  [IF]                (
553  [NONE]              *
553  [NONE]              cmt_str
553  [NONE]              ==
553  [NONE]              '\n'
553  [IF]                )
553  [NONE]              
554  [IF]                {
554  [NONE]              
555  [NONE]              cmt_str
555  [NONE]              ++
555  [NONE]              ;
555  [NONE]              
556  [NONE]              remaining
556  [NONE]              --
556  [NONE]              ;
556  [NONE]              
557  [IF]                }
557  [NONE]              
558  [IF]                }
558  [NONE]              
560  [COMMENT_WHOLE]     /* Find the start column */
560  [NONE]              
561  [NONE]              if
561  [IF]                (
561  [NONE]              line_len
561  [NONE]              ==
561  [NONE]              0
561  [IF]                )
561  [NONE]              
562  [IF]                {
562  [NONE]              
563  [NONE]              if
563  [IF]                (
563  [NONE]              ch
563  [NONE]              ==
563  [NONE]              ' '
563  [IF]                )
563  [NONE]              
564  [IF]                {
564  [NONE]              
565  [NONE]              ccol
565  [NONE]              ++
565  [NONE]              ;
565  [NONE]              
566  [NONE]              continue
566  [NONE]              ;
566  [NONE]              
567  [IF]                }
567  [NONE]              
568  [NONE]              else
568  [NONE]              if
568  [ELSEIF]            (
568  [NONE]              ch
568  [NONE]              ==
568  [NONE]              '\t'
568  [ELSEIF]            )
568  [NONE]              
569  [ELSEIF]            {
569  [NONE]              
570  [NONE]              ccol
570  [NONE]              =
570  [NONE]              calc_next_tab_column
570  [FUNC_CALL]         (
570  [NONE]              ccol
570  [NONE]              ,
570  [NONE]              cpd
570  [NONE]              .
570  [NONE]              settings
570  [NONE]              [
570  [NONE]              UO_input_tab_size
570  [NONE]              ]
570  [NONE]              .
570  [NONE]              n
570  [FUNC_CALL]         )
570  [NONE]              ;
570  [NONE]              
571  [NONE]              continue
571  [NONE]              ;
571  [NONE]              
572  [ELSEIF]            }
572  [NONE]              
573  [NONE]              else
573  [NONE]              
574  [ELSE]              {
574  [NONE]              
575  [COMMENT_WHOLE]     //fprintf(stderr, "%d] Text starts in col %d\n", line_count, ccol);
575  [NONE]              
576  [ELSE]              }
576  [NONE]              
577  [IF]                }
577  [NONE]              
579  [NONE]              line
579  [NONE]              [
579  [NONE]              line_len
579  [NONE]              ++
579  [NONE]              ]
579  [NONE]              =
579  [NONE]              ch
579  [NONE]              ;
579  [NONE]              
581  [COMMENT_WHOLE]     /* If we just hit an end of line OR we just hit end-of-comment... */
581  [NONE]              
582  [NONE]              if
582  [IF]                (
582  [NONE]              (
582  [NONE]              ch
582  [NONE]              ==
582  [NONE]              '\n'
582  [NONE]              )
582  [NONE]              ||
582  [NONE]              (
582  [NONE]              remaining
582  [NONE]              ==
582  [NONE]              0
582  [NONE]              )
582  [IF]                )
582  [NONE]              
583  [IF]                {
583  [NONE]              
584  [NONE]              line_count
584  [NONE]              ++
584  [NONE]              ;
584  [NONE]              
586  [COMMENT_WHOLE]     /* strip trailing tabs and spaces before the newline */
586  [NONE]              
587  [NONE]              if
587  [IF]                (
587  [NONE]              ch
587  [NONE]              ==
587  [NONE]              '\n'
587  [IF]                )
587  [NONE]              
588  [IF]                {
588  [NONE]              
589  [NONE]              line_len
589  [NONE]              --
589  [NONE]              ;
589  [NONE]              
590  [NONE]              while
590  [WHILE]             (
590  [NONE]              (
590  [NONE]              line_len
590  [NONE]              >
590  [NONE]              0
590  [NONE]              )
590  [NONE]              &&
590  [NONE]              
591  [NONE]              (
591  [NONE]              (
591  [NONE]              line
591  [NONE]              [
591  [NONE]              line_len
591  [NONE]              -
591  [NONE]              1
591  [NONE]              ]
591  [NONE]              ==
591  [NONE]              ' '
591  [NONE]              )
591  [NONE]              ||
591  [NONE]              
592  [NONE]              (
592  [NONE]              line
592  [NONE]              [
592  [NONE]              line_len
592  [NONE]              -
592  [NONE]              1
592  [NONE]              ]
592  [NONE]              ==
592  [NONE]              '\t'
592  [NONE]              )
592  [NONE]              )
592  [WHILE]             )
593  [WHILE]             
593  [NONE]              
594  [NONE]              line_len
594  [NONE]              --
594  [NONE]              ;
594  [NONE]              
595  [WHILE]             
595  [NONE]              
596  [NONE]              line
596  [NONE]              [
596  [NONE]              line_len
596  [NONE]              ++
596  [NONE]              ]
596  [NONE]              =
596  [NONE]              ch
596  [NONE]              ;
596  [NONE]              
597  [IF]                }
597  [NONE]              
598  [NONE]              line
598  [NONE]              [
598  [NONE]              line_len
598  [NONE]              ]
598  [NONE]              =
598  [NONE]              0
598  [NONE]              ;
598  [NONE]              
600  [NONE]              if
600  [IF]                (
600  [NONE]              line_count
600  [NONE]              ==
600  [NONE]              1
600  [IF]                )
600  [NONE]              
601  [IF]                {
601  [NONE]              
602  [COMMENT_WHOLE]     /* this is the first line - add unchanged */
602  [NONE]              
604  [COMMENT_WHOLE]     /*TODO: need to support indent_with_tabs mode 1 */
604  [NONE]              
605  [NONE]              output_to_column
605  [FUNC_CALL]         (
605  [NONE]              cmt_col
605  [NONE]              ,
605  [NONE]              cpd
605  [NONE]              .
605  [NONE]              settings
605  [NONE]              [
605  [NONE]              UO_indent_with_tabs
605  [NONE]              ]
605  [NONE]              .
605  [NONE]              b
605  [FUNC_CALL]         )
605  [NONE]              ;
605  [NONE]              
606  [NONE]              add_text_len
606  [FUNC_CALL]         (
606  [NONE]              line
606  [NONE]              ,
606  [NONE]              line_len
606  [FUNC_CALL]         )
606  [NONE]              ;
606  [NONE]              
607  [IF]                }
607  [NONE]              
608  [NONE]              else
608  [NONE]              
609  [ELSE]              {
609  [NONE]              
610  [COMMENT_WHOLE]     /* This is not the first line, so we need to indent to the␤             * correct column.␤             */
612  [NONE]              
613  [NONE]              ccol
613  [NONE]              -=
613  [NONE]              col_diff
613  [NONE]              ;
613  [NONE]              
614  [NONE]              if
614  [IF]                (
614  [NONE]              ccol
614  [NONE]              <
614  [NONE]              cmt_col
614  [IF]                )
615  [IF]                
615  [NONE]              
616  [NONE]              ccol
616  [NONE]              =
616  [NONE]              cmt_col
616  [NONE]              ;
617  [IF]                
617  [NONE]              
619  [NONE]              if
619  [IF]                (
619  [NONE]              line
619  [NONE]              [
619  [NONE]              0
619  [NONE]              ]
619  [NONE]              ==
619  [NONE]              '\n'
619  [IF]                )
619  [NONE]              
620  [IF]                {
620  [NONE]              
621  [COMMENT_WHOLE]     /* Emtpy line - just a '\n' */
621  [NONE]              
622  [NONE]              if
622  [IF]                (
622  [NONE]              cpd
622  [NONE]              .
622  [NONE]              settings
622  [NONE]              [
622  [NONE]              UO_cmt_star_cont
622  [NONE]              ]
622  [NONE]              .
622  [NONE]              b
622  [IF]                )
622  [NONE]              
623  [IF]                {
623  [NONE]              
624  [NONE]              output_to_column
624  [FUNC_CALL]         (
624  [NONE]              cmt_col
624  [NONE]              ,
624  [NONE]              cpd
624  [NONE]              .
624  [NONE]              settings
624  [NONE]              [
624  [NONE]              UO_indent_with_tabs
624  [NONE]              ]
624  [NONE]              .
624  [NONE]              b
624  [FUNC_CALL]         )
624  [NONE]              ;
624  [NONE]              
625  [NONE]              add_text
625  [FUNC_CALL]         (
625  [NONE]              (
625  [NONE]              xtra
625  [NONE]              ==
625  [NONE]              1
625  [NONE]              )
625  [NONE]              ?
625  [NONE]              " *"
625  [NONE]              :
625  [NONE]              "*"
625  [FUNC_CALL]         )
625  [NONE]              ;
625  [NONE]              
626  [IF]                }
626  [NONE]              
627  [NONE]              add_char
627  [FUNC_CALL]         (
627  [NONE]              '\n'
627  [FUNC_CALL]         )
627  [NONE]              ;
627  [NONE]              
628  [IF]                }
628  [NONE]              
629  [NONE]              else
629  [NONE]              
630  [ELSE]              {
630  [NONE]              
631  [COMMENT_WHOLE]     /* If this doesn't start with a '*' or '|' */
631  [NONE]              
632  [NONE]              if
632  [IF]                (
632  [NONE]              (
632  [NONE]              line
632  [NONE]              [
632  [NONE]              0
632  [NONE]              ]
632  [NONE]              !=
632  [NONE]              '*'
632  [NONE]              )
632  [NONE]              &&
632  [NONE]              (
632  [NONE]              line
632  [NONE]              [
632  [NONE]              0
632  [NONE]              ]
632  [NONE]              !=
632  [NONE]              '|'
632  [NONE]              )
632  [NONE]              &&
632  [NONE]              (
632  [NONE]              line
632  [NONE]              [
632  [NONE]              0
632  [NONE]              ]
632  [NONE]              !=
632  [NONE]              '#'
632  [NONE]              )
632  [NONE]              &&
632  [NONE]              
633  [NONE]              (
633  [NONE]              line
633  [NONE]              [
633  [NONE]              0
633  [NONE]              ]
633  [NONE]              !=
633  [NONE]              '\\'
633  [NONE]              )
633  [NONE]              &&
633  [NONE]              (
633  [NONE]              line
633  [NONE]              [
633  [NONE]              0
633  [NONE]              ]
633  [NONE]              !=
633  [NONE]              '+'
633  [NONE]              )
633  [IF]                )
633  [NONE]              
634  [IF]                {
634  [NONE]              
635  [NONE]              output_to_column
635  [FUNC_CALL]         (
635  [NONE]              cmt_col
635  [NONE]              ,
635  [NONE]              cpd
635  [NONE]              .
635  [NONE]              settings
635  [NONE]              [
635  [NONE]              UO_indent_with_tabs
635  [NONE]              ]
635  [NONE]              .
635  [NONE]              b
635  [FUNC_CALL]         )
635  [NONE]              ;
635  [NONE]              
636  [NONE]              if
636  [IF]                (
636  [NONE]              cpd
636  [NONE]              .
636  [NONE]              settings
636  [NONE]              [
636  [NONE]              UO_cmt_star_cont
636  [NONE]              ]
636  [NONE]              .
636  [NONE]              b
636  [IF]                )
637  [IF]                
637  [NONE]              
638  [NONE]              add_text
638  [FUNC_CALL]         (
638  [NONE]              (
638  [NONE]              xtra
638  [NONE]              ==
638  [NONE]              1
638  [NONE]              )
638  [NONE]              ?
638  [NONE]              " * "
638  [NONE]              :
638  [NONE]              "*  "
638  [FUNC_CALL]         )
638  [NONE]              ;
638  [NONE]              
639  [IF]                
640  [NONE]              else
641  [ELSE]              
641  [NONE]              
642  [NONE]              add_text
642  [FUNC_CALL]         (
642  [NONE]              "   "
642  [FUNC_CALL]         )
642  [NONE]              ;
642  [NONE]              
643  [ELSE]              
643  [NONE]              
644  [NONE]              output_to_column
644  [FUNC_CALL]         (
644  [NONE]              ccol
644  [NONE]              ,
644  [NONE]              cpd
644  [NONE]              .
644  [NONE]              settings
644  [NONE]              [
644  [NONE]              UO_indent_with_tabs
644  [NONE]              ]
644  [NONE]              .
644  [NONE]              b
644  [FUNC_CALL]         )
644  [NONE]              ;
644  [NONE]              
645  [IF]                }
645  [NONE]              
646  [NONE]              else
647  [ELSE]              
647  [NONE]              
648  [NONE]              output_to_column
648  [FUNC_CALL]         (
648  [NONE]              cmt_col
648  [NONE]              +
648  [NONE]              xtra
648  [NONE]              ,
648  [NONE]              cpd
648  [NONE]              .
648  [NONE]              settings
648  [NONE]              [
648  [NONE]              UO_indent_with_tabs
648  [NONE]              ]
648  [NONE]              .
648  [NONE]              b
648  [FUNC_CALL]         )
648  [NONE]              ;
648  [NONE]              
649  [ELSE]              
649  [NONE]              
650  [NONE]              add_text_len
650  [FUNC_CALL]         (
650  [NONE]              line
650  [NONE]              ,
650  [NONE]              line_len
650  [FUNC_CALL]         )
650  [NONE]              ;
650  [NONE]              
651  [ELSE]              }
651  [NONE]              
652  [ELSE]              }
652  [NONE]              
653  [NONE]              line_len
653  [NONE]              =
653  [NONE]              0
653  [NONE]              ;
653  [NONE]              
654  [NONE]              ccol
654  [NONE]              =
654  [NONE]              1
654  [NONE]              ;
654  [NONE]              
655  [IF]                }
655  [NONE]              
656  [WHILE]             }
656  [NONE]              
657  [FUNC_DEF]          }
657  [NONE]              