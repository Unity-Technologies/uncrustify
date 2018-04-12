Line [Token]             Text
1    [COMMENT_MULTI]     /**␤ * @file output.cpp␤ * Does all the output & comment formatting.␤ *␤ * $Id: output.cpp 510 2006-09-20 01:14:56Z bengardner $␤ */
6    [NEWLINE]           
8    [PREPROC]           #
8    [PP_INCLUDE]        include
8    [PREPROC_BODY]      "uncrustify_types.h"
8    [NEWLINE]           
9    [PREPROC]           #
9    [PP_INCLUDE]        include
9    [PREPROC_BODY]      "prototypes.h"
9    [NEWLINE]           
10   [PREPROC]           #
10   [PP_INCLUDE]        include
10   [PREPROC_BODY]      "chunk_list.h"
10   [NEWLINE]           
11   [PREPROC]           #
11   [PP_INCLUDE]        include
11   [PREPROC_BODY]      <cstring>
11   [NEWLINE]           
12   [PREPROC]           #
12   [PP_INCLUDE]        include
12   [PREPROC_BODY]      <cstdlib>
12   [NEWLINE]           
16   [TYPE]              void
16   [FUNC_DEF]          add_char
16   [FPAREN_OPEN]       (
16   [TYPE]              char
16   [WORD]              ch
16   [FPAREN_CLOSE]      )
16   [NEWLINE]           
17   [BRACE_OPEN]        {
17   [NEWLINE]           
18   [COMMENT]           /* convert a newline into the LF/CRLF/CR sequence */
18   [NEWLINE]           
19   [IF]                if
19   [SPAREN_OPEN]       (
19   [WORD]              ch
19   [COMPARE]           ==
19   [STRING]            '\n'
19   [SPAREN_CLOSE]      )
19   [NEWLINE]           
20   [BRACE_OPEN]        {
20   [NEWLINE]           
21   [FUNC_CALL]         fputs
21   [FPAREN_OPEN]       (
21   [WORD]              cpd
21   [MEMBER]            .
21   [WORD]              newline
21   [COMMA]             ,
21   [WORD]              cpd
21   [MEMBER]            .
21   [WORD]              fout
21   [FPAREN_CLOSE]      )
21   [SEMICOLON]         ;
21   [NEWLINE]           
22   [TYPE]              cpd
22   [MEMBER]            .
22   [WORD]              column
22   [ASSIGN]            =
22   [NUMBER]            1
22   [SEMICOLON]         ;
22   [NEWLINE]           
23   [TYPE]              cpd
23   [MEMBER]            .
23   [WORD]              did_newline
23   [ASSIGN]            =
23   [NUMBER]            1
23   [SEMICOLON]         ;
23   [NEWLINE]           
24   [BRACE_CLOSE]       }
24   [NEWLINE]           
25   [ELSE]              else
25   [NEWLINE]           
26   [BRACE_OPEN]        {
26   [NEWLINE]           
27   [FUNC_CALL]         fputc
27   [FPAREN_OPEN]       (
27   [WORD]              ch
27   [COMMA]             ,
27   [WORD]              cpd
27   [MEMBER]            .
27   [WORD]              fout
27   [FPAREN_CLOSE]      )
27   [SEMICOLON]         ;
27   [NEWLINE]           
28   [IF]                if
28   [SPAREN_OPEN]       (
28   [WORD]              ch
28   [COMPARE]           ==
28   [STRING]            '\t'
28   [SPAREN_CLOSE]      )
29   [VBRACE_OPEN]       
29   [NEWLINE]           
30   [TYPE]              cpd
30   [MEMBER]            .
30   [WORD]              column
30   [ASSIGN]            =
30   [FUNC_CALL]         next_tab_column
30   [FPAREN_OPEN]       (
30   [WORD]              cpd
30   [MEMBER]            .
30   [WORD]              column
30   [FPAREN_CLOSE]      )
30   [SEMICOLON]         ;
30   [NEWLINE]           
31   [VBRACE_CLOSE]      
32   [ELSE]              else
33   [VBRACE_OPEN]       
33   [NEWLINE]           
34   [TYPE]              cpd
34   [MEMBER]            .
34   [WORD]              column
34   [INCDEC_AFTER]      ++
34   [SEMICOLON]         ;
34   [NEWLINE]           
35   [VBRACE_CLOSE]      
36   [BRACE_CLOSE]       }
36   [NEWLINE]           
37   [BRACE_CLOSE]       }
37   [NEWLINE]           
39   [TYPE]              void
39   [FUNC_DEF]          add_text
39   [FPAREN_OPEN]       (
39   [QUALIFIER]         const
39   [TYPE]              char
39   [PTR_TYPE]          *
39   [WORD]              text
39   [FPAREN_CLOSE]      )
39   [NEWLINE]           
40   [BRACE_OPEN]        {
40   [NEWLINE]           
41   [TYPE]              char
41   [WORD]              ch
41   [SEMICOLON]         ;
41   [NEWLINE]           
43   [WHILE]             while
43   [SPAREN_OPEN]       (
43   [PAREN_OPEN]        (
43   [WORD]              ch
43   [ASSIGN]            =
43   [DEREF]             *
43   [WORD]              text
43   [PAREN_CLOSE]       )
43   [COMPARE]           !=
43   [NUMBER]            0
43   [SPAREN_CLOSE]      )
43   [NEWLINE]           
44   [BRACE_OPEN]        {
44   [NEWLINE]           
45   [WORD]              text
45   [INCDEC_AFTER]      ++
45   [SEMICOLON]         ;
45   [NEWLINE]           
46   [FUNC_CALL]         add_char
46   [FPAREN_OPEN]       (
46   [WORD]              ch
46   [FPAREN_CLOSE]      )
46   [SEMICOLON]         ;
46   [NEWLINE]           
47   [BRACE_CLOSE]       }
47   [NEWLINE]           
48   [BRACE_CLOSE]       }
48   [NEWLINE]           
50   [TYPE]              void
50   [FUNC_DEF]          add_text_len
50   [FPAREN_OPEN]       (
50   [QUALIFIER]         const
50   [TYPE]              char
50   [PTR_TYPE]          *
50   [WORD]              text
50   [COMMA]             ,
50   [TYPE]              int
50   [WORD]              len
50   [FPAREN_CLOSE]      )
50   [NEWLINE]           
51   [BRACE_OPEN]        {
51   [NEWLINE]           
52   [WHILE]             while
52   [SPAREN_OPEN]       (
52   [WORD]              len
52   [INCDEC_AFTER]      --
52   [COMPARE]           >
52   [NUMBER]            0
52   [SPAREN_CLOSE]      )
52   [NEWLINE]           
53   [BRACE_OPEN]        {
53   [NEWLINE]           
54   [FUNC_CALL]         add_char
54   [FPAREN_OPEN]       (
54   [DEREF]             *
54   [WORD]              text
54   [FPAREN_CLOSE]      )
54   [SEMICOLON]         ;
54   [NEWLINE]           
55   [WORD]              text
55   [INCDEC_AFTER]      ++
55   [SEMICOLON]         ;
55   [NEWLINE]           
56   [BRACE_CLOSE]       }
56   [NEWLINE]           
57   [BRACE_CLOSE]       }
57   [NEWLINE]           
60   [COMMENT_MULTI]     /**␤ * Advance to a specific column␤ * cpd.column is the current column␤ *␤ * @param column  The column to advance to␤ */
65   [NEWLINE]           
66   [TYPE]              void
66   [FUNC_DEF]          output_to_column
66   [FPAREN_OPEN]       (
66   [TYPE]              int
66   [WORD]              column
66   [COMMA]             ,
66   [TYPE]              bool
66   [WORD]              allow_tabs
66   [FPAREN_CLOSE]      )
66   [NEWLINE]           
67   [BRACE_OPEN]        {
67   [NEWLINE]           
68   [TYPE]              int
68   [WORD]              nc
68   [SEMICOLON]         ;
68   [NEWLINE]           
70   [TYPE]              cpd
70   [MEMBER]            .
70   [WORD]              did_newline
70   [ASSIGN]            =
70   [NUMBER]            0
70   [SEMICOLON]         ;
70   [NEWLINE]           
71   [IF]                if
71   [SPAREN_OPEN]       (
71   [WORD]              allow_tabs
71   [SPAREN_CLOSE]      )
71   [NEWLINE]           
72   [BRACE_OPEN]        {
72   [NEWLINE]           
73   [COMMENT]           /* tab out as far as possible and then use spaces */
73   [NEWLINE]           
74   [WHILE]             while
74   [SPAREN_OPEN]       (
74   [PAREN_OPEN]        (
74   [WORD]              nc
74   [ASSIGN]            =
74   [FUNC_CALL]         next_tab_column
74   [FPAREN_OPEN]       (
74   [WORD]              cpd
74   [MEMBER]            .
74   [WORD]              column
74   [FPAREN_CLOSE]      )
74   [PAREN_CLOSE]       )
74   [COMPARE]           <=
74   [WORD]              column
74   [SPAREN_CLOSE]      )
75   [VBRACE_OPEN]       
75   [NEWLINE]           
76   [FUNC_CALL]         add_text
76   [FPAREN_OPEN]       (
76   [STRING]            "\t"
76   [FPAREN_CLOSE]      )
76   [SEMICOLON]         ;
76   [NEWLINE]           
77   [VBRACE_CLOSE]      
78   [BRACE_CLOSE]       }
78   [NEWLINE]           
79   [COMMENT]           /* space out the final bit */
79   [NEWLINE]           
80   [WHILE]             while
80   [SPAREN_OPEN]       (
80   [WORD]              cpd
80   [MEMBER]            .
80   [WORD]              column
80   [COMPARE]           <
80   [WORD]              column
80   [SPAREN_CLOSE]      )
81   [VBRACE_OPEN]       
81   [NEWLINE]           
82   [FUNC_CALL]         add_text
82   [FPAREN_OPEN]       (
82   [STRING]            " "
82   [FPAREN_CLOSE]      )
82   [SEMICOLON]         ;
82   [NEWLINE]           
83   [VBRACE_CLOSE]      
84   [BRACE_CLOSE]       }
84   [NEWLINE]           
86   [TYPE]              void
86   [FUNC_DEF]          output_indent
86   [FPAREN_OPEN]       (
86   [TYPE]              int
86   [WORD]              column
86   [COMMA]             ,
86   [TYPE]              int
86   [WORD]              brace_col
86   [FPAREN_CLOSE]      )
86   [NEWLINE]           
87   [BRACE_OPEN]        {
87   [NEWLINE]           
88   [IF]                if
88   [SPAREN_OPEN]       (
88   [PAREN_OPEN]        (
88   [WORD]              cpd
88   [MEMBER]            .
88   [WORD]              column
88   [COMPARE]           ==
88   [NUMBER]            1
88   [PAREN_CLOSE]       )
88   [BOOL]              &&
88   [PAREN_OPEN]        (
88   [WORD]              cpd
88   [MEMBER]            .
88   [WORD]              settings
88   [SQUARE_OPEN]       [
88   [WORD]              UO_indent_with_tabs
88   [SQUARE_CLOSE]      ]
88   [MEMBER]            .
88   [WORD]              n
88   [COMPARE]           !=
88   [NUMBER]            0
88   [PAREN_CLOSE]       )
88   [SPAREN_CLOSE]      )
88   [NEWLINE]           
89   [BRACE_OPEN]        {
89   [NEWLINE]           
90   [IF]                if
90   [SPAREN_OPEN]       (
90   [WORD]              cpd
90   [MEMBER]            .
90   [WORD]              settings
90   [SQUARE_OPEN]       [
90   [WORD]              UO_indent_with_tabs
90   [SQUARE_CLOSE]      ]
90   [MEMBER]            .
90   [WORD]              n
90   [COMPARE]           ==
90   [NUMBER]            2
90   [SPAREN_CLOSE]      )
91   [VBRACE_OPEN]       
91   [NEWLINE]           
92   [WORD]              brace_col
92   [ASSIGN]            =
92   [WORD]              column
92   [SEMICOLON]         ;
92   [NEWLINE]           
93   [VBRACE_CLOSE]      
93   [NEWLINE]           
95   [COMMENT]           /* tab out as far as possible and then use spaces */
95   [NEWLINE]           
96   [TYPE]              int
96   [WORD]              nc
96   [SEMICOLON]         ;
96   [NEWLINE]           
97   [WHILE]             while
97   [SPAREN_OPEN]       (
97   [PAREN_OPEN]        (
97   [WORD]              nc
97   [ASSIGN]            =
97   [FUNC_CALL]         next_tab_column
97   [FPAREN_OPEN]       (
97   [WORD]              cpd
97   [MEMBER]            .
97   [WORD]              column
97   [FPAREN_CLOSE]      )
97   [PAREN_CLOSE]       )
97   [COMPARE]           <=
97   [WORD]              brace_col
97   [SPAREN_CLOSE]      )
98   [VBRACE_OPEN]       
98   [NEWLINE]           
99   [FUNC_CALL]         add_text
99   [FPAREN_OPEN]       (
99   [STRING]            "\t"
99   [FPAREN_CLOSE]      )
99   [SEMICOLON]         ;
99   [NEWLINE]           
100  [VBRACE_CLOSE]      
101  [BRACE_CLOSE]       }
101  [NEWLINE]           
103  [COMMENT]           /* space out the rest */
103  [NEWLINE]           
104  [WHILE]             while
104  [SPAREN_OPEN]       (
104  [WORD]              cpd
104  [MEMBER]            .
104  [WORD]              column
104  [COMPARE]           <
104  [WORD]              column
104  [SPAREN_CLOSE]      )
105  [VBRACE_OPEN]       
105  [NEWLINE]           
106  [FUNC_CALL]         add_text
106  [FPAREN_OPEN]       (
106  [STRING]            " "
106  [FPAREN_CLOSE]      )
106  [SEMICOLON]         ;
106  [NEWLINE]           
107  [VBRACE_CLOSE]      
108  [BRACE_CLOSE]       }
108  [NEWLINE]           
112  [TYPE]              void
112  [FUNC_DEF]          output_parsed
112  [FPAREN_OPEN]       (
112  [TYPE]              FILE
112  [PTR_TYPE]          *
112  [WORD]              pfile
112  [FPAREN_CLOSE]      )
112  [NEWLINE]           
113  [BRACE_OPEN]        {
113  [NEWLINE]           
114  [TYPE]              chunk_t
114  [PTR_TYPE]          *
114  [WORD]              pc
114  [SEMICOLON]         ;
114  [NEWLINE]           
115  [TYPE]              int
115  [WORD]              cnt
115  [SEMICOLON]         ;
115  [NEWLINE]           
117  [FUNC_CALL]         output_options
117  [FPAREN_OPEN]       (
117  [WORD]              pfile
117  [FPAREN_CLOSE]      )
117  [SEMICOLON]         ;
117  [NEWLINE]           
118  [FUNC_CALL]         output_defines
118  [FPAREN_OPEN]       (
118  [WORD]              pfile
118  [FPAREN_CLOSE]      )
118  [SEMICOLON]         ;
118  [NEWLINE]           
119  [FUNC_CALL]         output_types
119  [FPAREN_OPEN]       (
119  [WORD]              pfile
119  [FPAREN_CLOSE]      )
119  [SEMICOLON]         ;
119  [NEWLINE]           
121  [FUNC_CALL]         fprintf
121  [FPAREN_OPEN]       (
121  [WORD]              pfile
121  [COMMA]             ,
121  [STRING]            "-=====-\n"
121  [FPAREN_CLOSE]      )
121  [SEMICOLON]         ;
121  [NEWLINE]           
122  [FUNC_CALL]         fprintf
122  [FPAREN_OPEN]       (
122  [WORD]              pfile
122  [COMMA]             ,
122  [STRING]            "Line      Tag          Parent     Columns  Br/Lvl/pp Flg Nl  Text"
122  [FPAREN_CLOSE]      )
122  [SEMICOLON]         ;
122  [NEWLINE]           
123  [FOR]               for
123  [SPAREN_OPEN]       (
123  [WORD]              pc
123  [ASSIGN]            =
123  [FUNC_CALL]         chunk_get_head
123  [FPAREN_OPEN]       (
123  [FPAREN_CLOSE]      )
123  [SEMICOLON]         ;
123  [WORD]              pc
123  [COMPARE]           !=
123  [WORD]              NULL
123  [SEMICOLON]         ;
123  [WORD]              pc
123  [ASSIGN]            =
123  [FUNC_CALL]         chunk_get_next
123  [FPAREN_OPEN]       (
123  [WORD]              pc
123  [FPAREN_CLOSE]      )
123  [SPAREN_CLOSE]      )
123  [NEWLINE]           
124  [BRACE_OPEN]        {
124  [NEWLINE]           
125  [FUNC_CALL]         fprintf
125  [FPAREN_OPEN]       (
125  [WORD]              pfile
125  [COMMA]             ,
125  [STRING]            "\n%3d> %13.13s[%13.13s][%2d/%2d/%2d][%d/%d/%d][%6x][%d-%d]"
125  [COMMA]             ,
125  [NEWLINE]           
126  [WORD]              pc
126  [MEMBER]            ->
126  [WORD]              orig_line
126  [COMMA]             ,
126  [FUNC_CALL]         get_token_name
126  [FPAREN_OPEN]       (
126  [WORD]              pc
126  [MEMBER]            ->
126  [WORD]              type
126  [FPAREN_CLOSE]      )
126  [COMMA]             ,
126  [NEWLINE]           
127  [FUNC_CALL]         get_token_name
127  [FPAREN_OPEN]       (
127  [WORD]              pc
127  [MEMBER]            ->
127  [WORD]              parent_type
127  [FPAREN_CLOSE]      )
127  [COMMA]             ,
127  [NEWLINE]           
128  [WORD]              pc
128  [MEMBER]            ->
128  [WORD]              column
128  [COMMA]             ,
128  [WORD]              pc
128  [MEMBER]            ->
128  [WORD]              orig_col
128  [COMMA]             ,
128  [WORD]              pc
128  [MEMBER]            ->
128  [WORD]              orig_col_end
128  [COMMA]             ,
128  [NEWLINE]           
129  [WORD]              pc
129  [MEMBER]            ->
129  [WORD]              brace_level
129  [COMMA]             ,
129  [WORD]              pc
129  [MEMBER]            ->
129  [WORD]              level
129  [COMMA]             ,
129  [WORD]              pc
129  [MEMBER]            ->
129  [WORD]              pp_level
129  [COMMA]             ,
129  [NEWLINE]           
130  [WORD]              pc
130  [MEMBER]            ->
130  [WORD]              flags
130  [COMMA]             ,
130  [WORD]              pc
130  [MEMBER]            ->
130  [WORD]              nl_count
130  [COMMA]             ,
130  [WORD]              pc
130  [MEMBER]            ->
130  [WORD]              after_tab
130  [FPAREN_CLOSE]      )
130  [SEMICOLON]         ;
130  [NEWLINE]           
132  [IF]                if
132  [SPAREN_OPEN]       (
132  [PAREN_OPEN]        (
132  [WORD]              pc
132  [MEMBER]            ->
132  [WORD]              type
132  [COMPARE]           !=
132  [WORD]              CT_NEWLINE
132  [PAREN_CLOSE]       )
132  [BOOL]              &&
132  [PAREN_OPEN]        (
132  [WORD]              pc
132  [MEMBER]            ->
132  [WORD]              len
132  [COMPARE]           !=
132  [NUMBER]            0
132  [PAREN_CLOSE]       )
132  [SPAREN_CLOSE]      )
132  [NEWLINE]           
133  [BRACE_OPEN]        {
133  [NEWLINE]           
134  [FOR]               for
134  [SPAREN_OPEN]       (
134  [WORD]              cnt
134  [ASSIGN]            =
134  [NUMBER]            0
134  [SEMICOLON]         ;
134  [WORD]              cnt
134  [COMPARE]           <
134  [WORD]              pc
134  [MEMBER]            ->
134  [WORD]              column
134  [SEMICOLON]         ;
134  [WORD]              cnt
134  [INCDEC_AFTER]      ++
134  [SPAREN_CLOSE]      )
135  [VBRACE_OPEN]       
135  [NEWLINE]           
136  [FUNC_CALL]         fprintf
136  [FPAREN_OPEN]       (
136  [WORD]              pfile
136  [COMMA]             ,
136  [STRING]            " "
136  [FPAREN_CLOSE]      )
136  [SEMICOLON]         ;
136  [NEWLINE]           
137  [VBRACE_CLOSE]      
137  [NEWLINE]           
138  [FUNC_CALL]         fprintf
138  [FPAREN_OPEN]       (
138  [WORD]              pfile
138  [COMMA]             ,
138  [STRING]            "%.*s"
138  [COMMA]             ,
138  [WORD]              pc
138  [MEMBER]            ->
138  [WORD]              len
138  [COMMA]             ,
138  [WORD]              pc
138  [MEMBER]            ->
138  [WORD]              str
138  [FPAREN_CLOSE]      )
138  [SEMICOLON]         ;
138  [NEWLINE]           
139  [BRACE_CLOSE]       }
139  [NEWLINE]           
140  [BRACE_CLOSE]       }
140  [NEWLINE]           
141  [FUNC_CALL]         fprintf
141  [FPAREN_OPEN]       (
141  [WORD]              pfile
141  [COMMA]             ,
141  [STRING]            "\n-=====-\n"
141  [FPAREN_CLOSE]      )
141  [SEMICOLON]         ;
141  [NEWLINE]           
142  [FUNC_CALL]         fflush
142  [FPAREN_OPEN]       (
142  [WORD]              pfile
142  [FPAREN_CLOSE]      )
142  [SEMICOLON]         ;
142  [NEWLINE]           
143  [BRACE_CLOSE]       }
143  [NEWLINE]           
145  [TYPE]              void
145  [FUNC_DEF]          output_options
145  [FPAREN_OPEN]       (
145  [TYPE]              FILE
145  [PTR_TYPE]          *
145  [WORD]              pfile
145  [FPAREN_CLOSE]      )
145  [NEWLINE]           
146  [BRACE_OPEN]        {
146  [NEWLINE]           
147  [TYPE]              int
147  [WORD]              idx
147  [SEMICOLON]         ;
147  [NEWLINE]           
148  [QUALIFIER]         const
148  [TYPE]              option_map_value
148  [PTR_TYPE]          *
148  [WORD]              ptr
148  [SEMICOLON]         ;
148  [NEWLINE]           
150  [FUNC_CALL]         fprintf
150  [FPAREN_OPEN]       (
150  [WORD]              pfile
150  [COMMA]             ,
150  [STRING]            "-== Options ==-\n"
150  [FPAREN_CLOSE]      )
150  [SEMICOLON]         ;
150  [NEWLINE]           
151  [FOR]               for
151  [SPAREN_OPEN]       (
151  [WORD]              idx
151  [ASSIGN]            =
151  [NUMBER]            0
151  [SEMICOLON]         ;
151  [WORD]              idx
151  [COMPARE]           <
151  [WORD]              UO_option_count
151  [SEMICOLON]         ;
151  [WORD]              idx
151  [INCDEC_AFTER]      ++
151  [SPAREN_CLOSE]      )
151  [NEWLINE]           
152  [BRACE_OPEN]        {
152  [NEWLINE]           
153  [WORD]              ptr
153  [ASSIGN]            =
153  [FUNC_CALL]         get_option_name
153  [FPAREN_OPEN]       (
153  [WORD]              idx
153  [FPAREN_CLOSE]      )
153  [SEMICOLON]         ;
153  [NEWLINE]           
154  [IF]                if
154  [SPAREN_OPEN]       (
154  [WORD]              ptr
154  [COMPARE]           !=
154  [WORD]              NULL
154  [SPAREN_CLOSE]      )
154  [NEWLINE]           
155  [BRACE_OPEN]        {
155  [NEWLINE]           
156  [IF]                if
156  [SPAREN_OPEN]       (
156  [WORD]              ptr
156  [MEMBER]            ->
156  [WORD]              type
156  [COMPARE]           ==
156  [WORD]              AT_BOOL
156  [SPAREN_CLOSE]      )
156  [NEWLINE]           
157  [BRACE_OPEN]        {
157  [NEWLINE]           
158  [FUNC_CALL]         fprintf
158  [FPAREN_OPEN]       (
158  [WORD]              pfile
158  [COMMA]             ,
158  [STRING]            "%3d) %32s = %s\n"
158  [COMMA]             ,
158  [NEWLINE]           
159  [WORD]              ptr
159  [MEMBER]            ->
159  [WORD]              id
159  [COMMA]             ,
159  [WORD]              ptr
159  [MEMBER]            ->
159  [WORD]              name
159  [COMMA]             ,
159  [NEWLINE]           
160  [WORD]              cpd
160  [MEMBER]            .
160  [WORD]              settings
160  [SQUARE_OPEN]       [
160  [WORD]              ptr
160  [MEMBER]            ->
160  [WORD]              id
160  [SQUARE_CLOSE]      ]
160  [MEMBER]            .
160  [WORD]              b
160  [QUESTION]          ?
160  [STRING]            "True"
160  [COND_COLON]        :
160  [STRING]            "False"
160  [FPAREN_CLOSE]      )
160  [SEMICOLON]         ;
160  [NEWLINE]           
161  [BRACE_CLOSE]       }
161  [NEWLINE]           
162  [ELSE]              else
162  [ELSEIF]            if
162  [SPAREN_OPEN]       (
162  [WORD]              ptr
162  [MEMBER]            ->
162  [WORD]              type
162  [COMPARE]           ==
162  [WORD]              AT_IARF
162  [SPAREN_CLOSE]      )
162  [NEWLINE]           
163  [BRACE_OPEN]        {
163  [NEWLINE]           
164  [FUNC_CALL]         fprintf
164  [FPAREN_OPEN]       (
164  [WORD]              pfile
164  [COMMA]             ,
164  [STRING]            "%3d) %32s = %s\n"
164  [COMMA]             ,
164  [NEWLINE]           
165  [WORD]              ptr
165  [MEMBER]            ->
165  [WORD]              id
165  [COMMA]             ,
165  [WORD]              ptr
165  [MEMBER]            ->
165  [WORD]              name
165  [COMMA]             ,
165  [NEWLINE]           
166  [PAREN_OPEN]        (
166  [WORD]              cpd
166  [MEMBER]            .
166  [WORD]              settings
166  [SQUARE_OPEN]       [
166  [WORD]              ptr
166  [MEMBER]            ->
166  [WORD]              id
166  [SQUARE_CLOSE]      ]
166  [MEMBER]            .
166  [WORD]              a
166  [COMPARE]           ==
166  [WORD]              AV_ADD
166  [PAREN_CLOSE]       )
166  [QUESTION]          ?
166  [STRING]            "Add"
166  [COND_COLON]        :
166  [NEWLINE]           
167  [PAREN_OPEN]        (
167  [WORD]              cpd
167  [MEMBER]            .
167  [WORD]              settings
167  [SQUARE_OPEN]       [
167  [WORD]              ptr
167  [MEMBER]            ->
167  [WORD]              id
167  [SQUARE_CLOSE]      ]
167  [MEMBER]            .
167  [WORD]              a
167  [COMPARE]           ==
167  [WORD]              AV_REMOVE
167  [PAREN_CLOSE]       )
167  [QUESTION]          ?
167  [STRING]            "Remove"
167  [COND_COLON]        :
167  [NEWLINE]           
168  [PAREN_OPEN]        (
168  [WORD]              cpd
168  [MEMBER]            .
168  [WORD]              settings
168  [SQUARE_OPEN]       [
168  [WORD]              ptr
168  [MEMBER]            ->
168  [WORD]              id
168  [SQUARE_CLOSE]      ]
168  [MEMBER]            .
168  [WORD]              a
168  [COMPARE]           ==
168  [WORD]              AV_FORCE
168  [PAREN_CLOSE]       )
168  [QUESTION]          ?
168  [STRING]            "Force"
168  [COND_COLON]        :
168  [STRING]            "Ignore"
168  [FPAREN_CLOSE]      )
168  [SEMICOLON]         ;
168  [NEWLINE]           
169  [BRACE_CLOSE]       }
169  [NEWLINE]           
170  [ELSE]              else
170  [ELSEIF]            if
170  [SPAREN_OPEN]       (
170  [WORD]              ptr
170  [MEMBER]            ->
170  [WORD]              type
170  [COMPARE]           ==
170  [WORD]              AT_LINE
170  [SPAREN_CLOSE]      )
170  [NEWLINE]           
171  [BRACE_OPEN]        {
171  [NEWLINE]           
172  [FUNC_CALL]         fprintf
172  [FPAREN_OPEN]       (
172  [WORD]              pfile
172  [COMMA]             ,
172  [STRING]            "%3d) %32s = %s\n"
172  [COMMA]             ,
172  [NEWLINE]           
173  [WORD]              ptr
173  [MEMBER]            ->
173  [WORD]              id
173  [COMMA]             ,
173  [WORD]              ptr
173  [MEMBER]            ->
173  [WORD]              name
173  [COMMA]             ,
173  [NEWLINE]           
174  [PAREN_OPEN]        (
174  [WORD]              cpd
174  [MEMBER]            .
174  [WORD]              settings
174  [SQUARE_OPEN]       [
174  [WORD]              ptr
174  [MEMBER]            ->
174  [WORD]              id
174  [SQUARE_CLOSE]      ]
174  [MEMBER]            .
174  [WORD]              le
174  [COMPARE]           ==
174  [WORD]              LE_AUTO
174  [PAREN_CLOSE]       )
174  [QUESTION]          ?
174  [STRING]            "Auto"
174  [COND_COLON]        :
174  [NEWLINE]           
175  [PAREN_OPEN]        (
175  [WORD]              cpd
175  [MEMBER]            .
175  [WORD]              settings
175  [SQUARE_OPEN]       [
175  [WORD]              ptr
175  [MEMBER]            ->
175  [WORD]              id
175  [SQUARE_CLOSE]      ]
175  [MEMBER]            .
175  [WORD]              le
175  [COMPARE]           ==
175  [WORD]              LE_LF
175  [PAREN_CLOSE]       )
175  [QUESTION]          ?
175  [STRING]            "LF"
175  [COND_COLON]        :
175  [NEWLINE]           
176  [PAREN_OPEN]        (
176  [WORD]              cpd
176  [MEMBER]            .
176  [WORD]              settings
176  [SQUARE_OPEN]       [
176  [WORD]              ptr
176  [MEMBER]            ->
176  [WORD]              id
176  [SQUARE_CLOSE]      ]
176  [MEMBER]            .
176  [WORD]              le
176  [COMPARE]           ==
176  [WORD]              LE_CRLF
176  [PAREN_CLOSE]       )
176  [QUESTION]          ?
176  [STRING]            "CRLF"
176  [COND_COLON]        :
176  [NEWLINE]           
177  [PAREN_OPEN]        (
177  [WORD]              cpd
177  [MEMBER]            .
177  [WORD]              settings
177  [SQUARE_OPEN]       [
177  [WORD]              ptr
177  [MEMBER]            ->
177  [WORD]              id
177  [SQUARE_CLOSE]      ]
177  [MEMBER]            .
177  [WORD]              le
177  [COMPARE]           ==
177  [WORD]              LE_CR
177  [PAREN_CLOSE]       )
177  [QUESTION]          ?
177  [STRING]            "CR"
177  [COND_COLON]        :
177  [STRING]            "???"
177  [FPAREN_CLOSE]      )
177  [SEMICOLON]         ;
177  [NEWLINE]           
178  [BRACE_CLOSE]       }
178  [NEWLINE]           
179  [ELSE]              else
179  [COMMENT]           /* AT_NUM */
180  [VBRACE_OPEN]       
180  [NEWLINE]           
181  [FUNC_CALL]         fprintf
181  [FPAREN_OPEN]       (
181  [WORD]              pfile
181  [COMMA]             ,
181  [STRING]            "%3d) %32s = %d\n"
181  [COMMA]             ,
181  [NEWLINE]           
182  [WORD]              ptr
182  [MEMBER]            ->
182  [WORD]              id
182  [COMMA]             ,
182  [WORD]              ptr
182  [MEMBER]            ->
182  [WORD]              name
182  [COMMA]             ,
182  [WORD]              cpd
182  [MEMBER]            .
182  [WORD]              settings
182  [SQUARE_OPEN]       [
182  [WORD]              ptr
182  [MEMBER]            ->
182  [WORD]              id
182  [SQUARE_CLOSE]      ]
182  [MEMBER]            .
182  [WORD]              n
182  [FPAREN_CLOSE]      )
182  [SEMICOLON]         ;
182  [NEWLINE]           
183  [VBRACE_CLOSE]      
184  [BRACE_CLOSE]       }
184  [NEWLINE]           
185  [BRACE_CLOSE]       }
185  [NEWLINE]           
186  [BRACE_CLOSE]       }
186  [NEWLINE]           
188  [COMMENT_MULTI]     /**␤ * This renders the chunk list to a file.␤ */
190  [NEWLINE]           
191  [TYPE]              void
191  [FUNC_DEF]          output_text
191  [FPAREN_OPEN]       (
191  [TYPE]              FILE
191  [PTR_TYPE]          *
191  [WORD]              pfile
191  [FPAREN_CLOSE]      )
191  [NEWLINE]           
192  [BRACE_OPEN]        {
192  [NEWLINE]           
193  [TYPE]              chunk_t
193  [PTR_TYPE]          *
193  [WORD]              pc
193  [SEMICOLON]         ;
193  [NEWLINE]           
194  [TYPE]              chunk_t
194  [PTR_TYPE]          *
194  [WORD]              prev
194  [SEMICOLON]         ;
194  [NEWLINE]           
195  [TYPE]              int
195  [WORD]              cnt
195  [SEMICOLON]         ;
195  [NEWLINE]           
196  [TYPE]              int
196  [WORD]              lvlcol
196  [SEMICOLON]         ;
196  [NEWLINE]           
197  [TYPE]              bool
197  [WORD]              allow_tabs
197  [SEMICOLON]         ;
197  [NEWLINE]           
199  [TYPE]              cpd
199  [MEMBER]            .
199  [WORD]              fout
199  [ASSIGN]            =
199  [WORD]              pfile
199  [SEMICOLON]         ;
199  [NEWLINE]           
201  [FOR]               for
201  [SPAREN_OPEN]       (
201  [WORD]              pc
201  [ASSIGN]            =
201  [FUNC_CALL]         chunk_get_head
201  [FPAREN_OPEN]       (
201  [FPAREN_CLOSE]      )
201  [SEMICOLON]         ;
201  [WORD]              pc
201  [COMPARE]           !=
201  [WORD]              NULL
201  [SEMICOLON]         ;
201  [WORD]              pc
201  [ASSIGN]            =
201  [FUNC_CALL]         chunk_get_next
201  [FPAREN_OPEN]       (
201  [WORD]              pc
201  [FPAREN_CLOSE]      )
201  [SPAREN_CLOSE]      )
201  [NEWLINE]           
202  [BRACE_OPEN]        {
202  [NEWLINE]           
203  [IF]                if
203  [SPAREN_OPEN]       (
203  [WORD]              pc
203  [MEMBER]            ->
203  [WORD]              type
203  [COMPARE]           ==
203  [WORD]              CT_NEWLINE
203  [SPAREN_CLOSE]      )
203  [NEWLINE]           
204  [BRACE_OPEN]        {
204  [NEWLINE]           
205  [FOR]               for
205  [SPAREN_OPEN]       (
205  [WORD]              cnt
205  [ASSIGN]            =
205  [NUMBER]            0
205  [SEMICOLON]         ;
205  [WORD]              cnt
205  [COMPARE]           <
205  [WORD]              pc
205  [MEMBER]            ->
205  [WORD]              nl_count
205  [SEMICOLON]         ;
205  [WORD]              cnt
205  [INCDEC_AFTER]      ++
205  [SPAREN_CLOSE]      )
206  [VBRACE_OPEN]       
206  [NEWLINE]           
207  [FUNC_CALL]         add_char
207  [FPAREN_OPEN]       (
207  [STRING]            '\n'
207  [FPAREN_CLOSE]      )
207  [SEMICOLON]         ;
207  [NEWLINE]           
208  [VBRACE_CLOSE]      
208  [NEWLINE]           
209  [TYPE]              cpd
209  [MEMBER]            .
209  [WORD]              did_newline
209  [ASSIGN]            =
209  [NUMBER]            1
209  [SEMICOLON]         ;
209  [NEWLINE]           
210  [TYPE]              cpd
210  [MEMBER]            .
210  [WORD]              column
210  [ASSIGN]            =
210  [NUMBER]            1
210  [SEMICOLON]         ;
210  [NEWLINE]           
211  [FUNC_CALL]         LOG_FMT
211  [FPAREN_OPEN]       (
211  [WORD]              LOUTIND
211  [COMMA]             ,
211  [STRING]            " xx\n"
211  [FPAREN_CLOSE]      )
211  [SEMICOLON]         ;
211  [NEWLINE]           
212  [BRACE_CLOSE]       }
212  [NEWLINE]           
213  [ELSE]              else
213  [ELSEIF]            if
213  [SPAREN_OPEN]       (
213  [WORD]              pc
213  [MEMBER]            ->
213  [WORD]              type
213  [COMPARE]           ==
213  [WORD]              CT_COMMENT_MULTI
213  [SPAREN_CLOSE]      )
214  [VBRACE_OPEN]       
214  [NEWLINE]           
215  [FUNC_CALL]         output_comment_multi
215  [FPAREN_OPEN]       (
215  [WORD]              pc
215  [FPAREN_CLOSE]      )
215  [SEMICOLON]         ;
215  [NEWLINE]           
216  [VBRACE_CLOSE]      
217  [ELSE]              else
217  [ELSEIF]            if
217  [SPAREN_OPEN]       (
217  [WORD]              pc
217  [MEMBER]            ->
217  [WORD]              type
217  [COMPARE]           ==
217  [WORD]              CT_COMMENT_CPP
217  [SPAREN_CLOSE]      )
218  [VBRACE_OPEN]       
218  [NEWLINE]           
219  [WORD]              pc
219  [ASSIGN]            =
219  [FUNC_CALL]         output_comment_cpp
219  [FPAREN_OPEN]       (
219  [WORD]              pc
219  [FPAREN_CLOSE]      )
219  [SEMICOLON]         ;
219  [NEWLINE]           
220  [VBRACE_CLOSE]      
221  [ELSE]              else
221  [ELSEIF]            if
221  [SPAREN_OPEN]       (
221  [WORD]              pc
221  [MEMBER]            ->
221  [WORD]              len
221  [COMPARE]           ==
221  [NUMBER]            0
221  [SPAREN_CLOSE]      )
222  [VBRACE_OPEN]       
222  [NEWLINE]           
223  [COMMENT]           /* don't do anything for non-visible stuff */
223  [NEWLINE]           
224  [FUNC_CALL]         LOG_FMT
224  [FPAREN_OPEN]       (
224  [WORD]              LOUTIND
224  [COMMA]             ,
224  [STRING]            " <%d> -"
224  [COMMA]             ,
224  [WORD]              pc
224  [MEMBER]            ->
224  [WORD]              column
224  [FPAREN_CLOSE]      )
224  [SEMICOLON]         ;
224  [NEWLINE]           
225  [VBRACE_CLOSE]      
226  [ELSE]              else
226  [NEWLINE]           
227  [BRACE_OPEN]        {
227  [NEWLINE]           
228  [COMMENT]           /* indent to the 'level' first */
228  [NEWLINE]           
229  [IF]                if
229  [SPAREN_OPEN]       (
229  [WORD]              cpd
229  [MEMBER]            .
229  [WORD]              did_newline
229  [SPAREN_CLOSE]      )
229  [NEWLINE]           
230  [BRACE_OPEN]        {
230  [NEWLINE]           
231  [IF]                if
231  [SPAREN_OPEN]       (
231  [WORD]              cpd
231  [MEMBER]            .
231  [WORD]              settings
231  [SQUARE_OPEN]       [
231  [WORD]              UO_indent_with_tabs
231  [SQUARE_CLOSE]      ]
231  [MEMBER]            .
231  [WORD]              n
231  [COMPARE]           ==
231  [NUMBER]            1
231  [SPAREN_CLOSE]      )
231  [NEWLINE]           
232  [BRACE_OPEN]        {
232  [NEWLINE]           
233  [WORD]              lvlcol
233  [ASSIGN]            =
233  [NUMBER]            1
233  [ARITH]             +
233  [PAREN_OPEN]        (
233  [WORD]              pc
233  [MEMBER]            ->
233  [WORD]              brace_level
233  [ARITH]             *
233  [WORD]              cpd
233  [MEMBER]            .
233  [WORD]              settings
233  [SQUARE_OPEN]       [
233  [WORD]              UO_indent_columns
233  [SQUARE_CLOSE]      ]
233  [MEMBER]            .
233  [WORD]              n
233  [PAREN_CLOSE]       )
233  [SEMICOLON]         ;
233  [NEWLINE]           
234  [IF]                if
234  [SPAREN_OPEN]       (
234  [PAREN_OPEN]        (
234  [WORD]              pc
234  [MEMBER]            ->
234  [WORD]              column
234  [COMPARE]           >=
234  [WORD]              lvlcol
234  [PAREN_CLOSE]       )
234  [BOOL]              &&
234  [PAREN_OPEN]        (
234  [WORD]              lvlcol
234  [COMPARE]           >
234  [NUMBER]            1
234  [PAREN_CLOSE]       )
234  [SPAREN_CLOSE]      )
235  [VBRACE_OPEN]       
235  [NEWLINE]           
236  [FUNC_CALL]         output_to_column
236  [FPAREN_OPEN]       (
236  [WORD]              lvlcol
236  [COMMA]             ,
236  [WORD]              true
236  [FPAREN_CLOSE]      )
236  [SEMICOLON]         ;
236  [NEWLINE]           
237  [VBRACE_CLOSE]      
238  [BRACE_CLOSE]       }
238  [NEWLINE]           
239  [WORD]              allow_tabs
239  [ASSIGN]            =
239  [PAREN_OPEN]        (
239  [WORD]              cpd
239  [MEMBER]            .
239  [WORD]              settings
239  [SQUARE_OPEN]       [
239  [WORD]              UO_indent_with_tabs
239  [SQUARE_CLOSE]      ]
239  [MEMBER]            .
239  [WORD]              n
239  [COMPARE]           ==
239  [NUMBER]            2
239  [PAREN_CLOSE]       )
239  [BOOL]              ||
239  [NEWLINE]           
240  [PAREN_OPEN]        (
240  [FUNC_CALL]         chunk_is_comment
240  [FPAREN_OPEN]       (
240  [WORD]              pc
240  [FPAREN_CLOSE]      )
240  [BOOL]              &&
240  [NEWLINE]           
241  [PAREN_OPEN]        (
241  [WORD]              cpd
241  [MEMBER]            .
241  [WORD]              settings
241  [SQUARE_OPEN]       [
241  [WORD]              UO_indent_with_tabs
241  [SQUARE_CLOSE]      ]
241  [MEMBER]            .
241  [WORD]              n
241  [COMPARE]           !=
241  [NUMBER]            0
241  [PAREN_CLOSE]       )
241  [PAREN_CLOSE]       )
241  [SEMICOLON]         ;
241  [NEWLINE]           
243  [FUNC_CALL]         LOG_FMT
243  [FPAREN_OPEN]       (
243  [WORD]              LOUTIND
243  [COMMA]             ,
243  [STRING]            "  %d> col %d/%d - "
243  [COMMA]             ,
243  [WORD]              pc
243  [MEMBER]            ->
243  [WORD]              orig_line
243  [COMMA]             ,
243  [WORD]              pc
243  [MEMBER]            ->
243  [WORD]              column
243  [COMMA]             ,
243  [WORD]              cpd
243  [MEMBER]            .
243  [WORD]              column
243  [FPAREN_CLOSE]      )
243  [SEMICOLON]         ;
243  [NEWLINE]           
244  [BRACE_CLOSE]       }
244  [NEWLINE]           
245  [ELSE]              else
245  [NEWLINE]           
246  [BRACE_OPEN]        {
246  [NEWLINE]           
247  [COMMENT]           /* not the first item on a line */
247  [NEWLINE]           
248  [IF]                if
248  [SPAREN_OPEN]       (
248  [WORD]              cpd
248  [MEMBER]            .
248  [WORD]              settings
248  [SQUARE_OPEN]       [
248  [WORD]              UO_align_keep_tabs
248  [SQUARE_CLOSE]      ]
248  [MEMBER]            .
248  [WORD]              b
248  [SPAREN_CLOSE]      )
249  [VBRACE_OPEN]       
249  [NEWLINE]           
250  [WORD]              allow_tabs
250  [ASSIGN]            =
250  [WORD]              pc
250  [MEMBER]            ->
250  [WORD]              after_tab
250  [SEMICOLON]         ;
250  [NEWLINE]           
251  [VBRACE_CLOSE]      
252  [ELSE]              else
252  [NEWLINE]           
253  [BRACE_OPEN]        {
253  [NEWLINE]           
254  [WORD]              prev
254  [ASSIGN]            =
254  [FUNC_CALL]         chunk_get_prev
254  [FPAREN_OPEN]       (
254  [WORD]              pc
254  [FPAREN_CLOSE]      )
254  [SEMICOLON]         ;
254  [NEWLINE]           
255  [WORD]              allow_tabs
255  [ASSIGN]            =
255  [PAREN_OPEN]        (
255  [WORD]              cpd
255  [MEMBER]            .
255  [WORD]              settings
255  [SQUARE_OPEN]       [
255  [WORD]              UO_align_with_tabs
255  [SQUARE_CLOSE]      ]
255  [MEMBER]            .
255  [WORD]              b
255  [BOOL]              &&
255  [NEWLINE]           
256  [PAREN_OPEN]        (
256  [PAREN_OPEN]        (
256  [WORD]              pc
256  [MEMBER]            ->
256  [WORD]              flags
256  [ARITH]             &
256  [WORD]              PCF_WAS_ALIGNED
256  [PAREN_CLOSE]       )
256  [COMPARE]           !=
256  [NUMBER]            0
256  [PAREN_CLOSE]       )
256  [BOOL]              &&
256  [NEWLINE]           
257  [PAREN_OPEN]        (
257  [PAREN_OPEN]        (
257  [PAREN_OPEN]        (
257  [WORD]              pc
257  [MEMBER]            ->
257  [WORD]              column
257  [ARITH]             -
257  [NUMBER]            1
257  [PAREN_CLOSE]       )
257  [ARITH]             %
257  [WORD]              cpd
257  [MEMBER]            .
257  [WORD]              settings
257  [SQUARE_OPEN]       [
257  [WORD]              UO_output_tab_size
257  [SQUARE_CLOSE]      ]
257  [MEMBER]            .
257  [WORD]              n
257  [PAREN_CLOSE]       )
257  [COMPARE]           ==
257  [NUMBER]            0
257  [PAREN_CLOSE]       )
257  [BOOL]              &&
257  [NEWLINE]           
258  [PAREN_OPEN]        (
258  [PAREN_OPEN]        (
258  [WORD]              prev
258  [MEMBER]            ->
258  [WORD]              column
258  [ARITH]             +
258  [WORD]              prev
258  [MEMBER]            ->
258  [WORD]              len
258  [ARITH]             +
258  [NUMBER]            1
258  [PAREN_CLOSE]       )
258  [COMPARE]           !=
258  [WORD]              pc
258  [MEMBER]            ->
258  [WORD]              column
258  [PAREN_CLOSE]       )
258  [PAREN_CLOSE]       )
258  [SEMICOLON]         ;
258  [NEWLINE]           
259  [BRACE_CLOSE]       }
259  [NEWLINE]           
260  [FUNC_CALL]         LOG_FMT
260  [FPAREN_OPEN]       (
260  [WORD]              LOUTIND
260  [COMMA]             ,
260  [STRING]            " %d -"
260  [COMMA]             ,
260  [WORD]              pc
260  [MEMBER]            ->
260  [WORD]              column
260  [FPAREN_CLOSE]      )
260  [SEMICOLON]         ;
260  [NEWLINE]           
261  [BRACE_CLOSE]       }
261  [NEWLINE]           
263  [FUNC_CALL]         output_to_column
263  [FPAREN_OPEN]       (
263  [WORD]              pc
263  [MEMBER]            ->
263  [WORD]              column
263  [COMMA]             ,
263  [WORD]              allow_tabs
263  [FPAREN_CLOSE]      )
263  [SEMICOLON]         ;
263  [NEWLINE]           
264  [FUNC_CALL]         add_text_len
264  [FPAREN_OPEN]       (
264  [WORD]              pc
264  [MEMBER]            ->
264  [WORD]              str
264  [COMMA]             ,
264  [WORD]              pc
264  [MEMBER]            ->
264  [WORD]              len
264  [FPAREN_CLOSE]      )
264  [SEMICOLON]         ;
264  [NEWLINE]           
265  [TYPE]              cpd
265  [MEMBER]            .
265  [WORD]              did_newline
265  [ASSIGN]            =
265  [FUNC_CALL]         chunk_is_newline
265  [FPAREN_OPEN]       (
265  [WORD]              pc
265  [FPAREN_CLOSE]      )
265  [SEMICOLON]         ;
265  [NEWLINE]           
266  [BRACE_CLOSE]       }
266  [NEWLINE]           
267  [BRACE_CLOSE]       }
267  [NEWLINE]           
268  [BRACE_CLOSE]       }
268  [NEWLINE]           
271  [COMMENT_MULTI]     /**␤ * Given a multi-line comemnt block that starts in column X, figure out how␤ * much subsequent lines should be indented.␤ *␤ * The answer is either 0 or 1.␤ *␤ * The decision is based on:␤ *  - the first line length␤ *  - the second line leader length␤ *  - the last line length␤ *␤ * If the first and last line are the same length and don't contain any alnum␤ * chars and (the first line len > 2 or the second leader is the same as the␤ * first line length), then the indent is 0.␤ *␤ * If the leader on the second line is 1 wide or missing, then the indent is 1.␤ *␤ * Otherwise, the indent is 0.␤ *␤ * @param str       The comment string␤ * @param len       Length of the comment␤ * @param start_col Starting column␤ * @return 0 or 1␤ */
294  [NEWLINE]           
295  [QUALIFIER]         static
295  [TYPE]              int
295  [FUNC_DEF]          calculate_comment_body_indent
295  [FPAREN_OPEN]       (
295  [QUALIFIER]         const
295  [TYPE]              char
295  [PTR_TYPE]          *
295  [WORD]              str
295  [COMMA]             ,
295  [TYPE]              int
295  [WORD]              len
295  [COMMA]             ,
295  [TYPE]              int
295  [WORD]              start_col
295  [FPAREN_CLOSE]      )
295  [NEWLINE]           
296  [BRACE_OPEN]        {
296  [NEWLINE]           
297  [TYPE]              int
297  [WORD]              idx
297  [ASSIGN]            =
297  [NUMBER]            0
297  [SEMICOLON]         ;
297  [NEWLINE]           
298  [TYPE]              int
298  [WORD]              first_len
298  [ASSIGN]            =
298  [NUMBER]            0
298  [SEMICOLON]         ;
298  [NEWLINE]           
299  [TYPE]              int
299  [WORD]              last_len
299  [ASSIGN]            =
299  [NUMBER]            0
299  [SEMICOLON]         ;
299  [NEWLINE]           
300  [TYPE]              int
300  [WORD]              width
300  [ASSIGN]            =
300  [NUMBER]            0
300  [SEMICOLON]         ;
300  [NEWLINE]           
302  [COMMENT]           /* find the last line length */
302  [NEWLINE]           
303  [FOR]               for
303  [SPAREN_OPEN]       (
303  [WORD]              idx
303  [ASSIGN]            =
303  [WORD]              len
303  [ARITH]             -
303  [NUMBER]            1
303  [SEMICOLON]         ;
303  [WORD]              idx
303  [COMPARE]           >
303  [NUMBER]            0
303  [SEMICOLON]         ;
303  [WORD]              idx
303  [INCDEC_AFTER]      --
303  [SPAREN_CLOSE]      )
303  [NEWLINE]           
304  [BRACE_OPEN]        {
304  [NEWLINE]           
305  [IF]                if
305  [SPAREN_OPEN]       (
305  [PAREN_OPEN]        (
305  [WORD]              str
305  [SQUARE_OPEN]       [
305  [WORD]              idx
305  [SQUARE_CLOSE]      ]
305  [COMPARE]           ==
305  [STRING]            '\n'
305  [PAREN_CLOSE]       )
305  [BOOL]              ||
305  [PAREN_OPEN]        (
305  [WORD]              str
305  [SQUARE_OPEN]       [
305  [WORD]              idx
305  [SQUARE_CLOSE]      ]
305  [COMPARE]           ==
305  [STRING]            '\r'
305  [PAREN_CLOSE]       )
305  [SPAREN_CLOSE]      )
305  [NEWLINE]           
306  [BRACE_OPEN]        {
306  [NEWLINE]           
307  [WORD]              idx
307  [INCDEC_AFTER]      ++
307  [SEMICOLON]         ;
307  [NEWLINE]           
308  [WHILE]             while
308  [SPAREN_OPEN]       (
308  [PAREN_OPEN]        (
308  [WORD]              idx
308  [COMPARE]           <
308  [WORD]              len
308  [PAREN_CLOSE]       )
308  [BOOL]              &&
308  [PAREN_OPEN]        (
308  [PAREN_OPEN]        (
308  [WORD]              str
308  [SQUARE_OPEN]       [
308  [WORD]              idx
308  [SQUARE_CLOSE]      ]
308  [COMPARE]           ==
308  [STRING]            ' '
308  [PAREN_CLOSE]       )
308  [BOOL]              ||
308  [PAREN_OPEN]        (
308  [WORD]              str
308  [SQUARE_OPEN]       [
308  [WORD]              idx
308  [SQUARE_CLOSE]      ]
308  [COMPARE]           ==
308  [STRING]            '\t'
308  [PAREN_CLOSE]       )
308  [PAREN_CLOSE]       )
308  [SPAREN_CLOSE]      )
309  [VBRACE_OPEN]       
309  [NEWLINE]           
310  [WORD]              idx
310  [INCDEC_AFTER]      ++
310  [SEMICOLON]         ;
310  [NEWLINE]           
311  [VBRACE_CLOSE]      
311  [NEWLINE]           
312  [WORD]              last_len
312  [ASSIGN]            =
312  [WORD]              len
312  [ARITH]             -
312  [WORD]              idx
312  [SEMICOLON]         ;
312  [NEWLINE]           
313  [BREAK]             break
313  [SEMICOLON]         ;
313  [NEWLINE]           
314  [BRACE_CLOSE]       }
314  [NEWLINE]           
315  [BRACE_CLOSE]       }
315  [NEWLINE]           
317  [COMMENT]           /* find the first line length */
317  [NEWLINE]           
318  [FOR]               for
318  [SPAREN_OPEN]       (
318  [WORD]              idx
318  [ASSIGN]            =
318  [NUMBER]            0
318  [SEMICOLON]         ;
318  [WORD]              idx
318  [COMPARE]           <
318  [WORD]              len
318  [SEMICOLON]         ;
318  [WORD]              idx
318  [INCDEC_AFTER]      ++
318  [SPAREN_CLOSE]      )
318  [NEWLINE]           
319  [BRACE_OPEN]        {
319  [NEWLINE]           
320  [IF]                if
320  [SPAREN_OPEN]       (
320  [PAREN_OPEN]        (
320  [WORD]              str
320  [SQUARE_OPEN]       [
320  [WORD]              idx
320  [SQUARE_CLOSE]      ]
320  [COMPARE]           ==
320  [STRING]            '\n'
320  [PAREN_CLOSE]       )
320  [BOOL]              ||
320  [PAREN_OPEN]        (
320  [WORD]              str
320  [SQUARE_OPEN]       [
320  [WORD]              idx
320  [SQUARE_CLOSE]      ]
320  [COMPARE]           ==
320  [STRING]            '\r'
320  [PAREN_CLOSE]       )
320  [SPAREN_CLOSE]      )
320  [NEWLINE]           
321  [BRACE_OPEN]        {
321  [NEWLINE]           
322  [WORD]              first_len
322  [ASSIGN]            =
322  [WORD]              idx
322  [SEMICOLON]         ;
322  [NEWLINE]           
323  [WHILE]             while
323  [SPAREN_OPEN]       (
323  [PAREN_OPEN]        (
323  [WORD]              str
323  [SQUARE_OPEN]       [
323  [WORD]              first_len
323  [ARITH]             -
323  [NUMBER]            1
323  [SQUARE_CLOSE]      ]
323  [COMPARE]           ==
323  [STRING]            ' '
323  [PAREN_CLOSE]       )
323  [BOOL]              ||
323  [PAREN_OPEN]        (
323  [WORD]              str
323  [SQUARE_OPEN]       [
323  [WORD]              first_len
323  [ARITH]             -
323  [NUMBER]            1
323  [SQUARE_CLOSE]      ]
323  [COMPARE]           ==
323  [STRING]            '\t'
323  [PAREN_CLOSE]       )
323  [SPAREN_CLOSE]      )
324  [VBRACE_OPEN]       
324  [NEWLINE]           
325  [WORD]              first_len
325  [INCDEC_AFTER]      --
325  [SEMICOLON]         ;
326  [VBRACE_CLOSE]      
326  [NEWLINE]           
328  [COMMENT]           /* handle DOS endings */
328  [NEWLINE]           
329  [IF]                if
329  [SPAREN_OPEN]       (
329  [PAREN_OPEN]        (
329  [WORD]              str
329  [SQUARE_OPEN]       [
329  [WORD]              idx
329  [SQUARE_CLOSE]      ]
329  [COMPARE]           ==
329  [STRING]            '\r'
329  [PAREN_CLOSE]       )
329  [BOOL]              &&
329  [PAREN_OPEN]        (
329  [WORD]              str
329  [SQUARE_OPEN]       [
329  [WORD]              idx
329  [ARITH]             +
329  [NUMBER]            1
329  [SQUARE_CLOSE]      ]
329  [COMPARE]           ==
329  [STRING]            '\n'
329  [PAREN_CLOSE]       )
329  [SPAREN_CLOSE]      )
330  [VBRACE_OPEN]       
330  [NEWLINE]           
331  [WORD]              idx
331  [INCDEC_AFTER]      ++
331  [SEMICOLON]         ;
331  [NEWLINE]           
332  [VBRACE_CLOSE]      
332  [NEWLINE]           
333  [WORD]              idx
333  [INCDEC_AFTER]      ++
333  [SEMICOLON]         ;
333  [NEWLINE]           
334  [BREAK]             break
334  [SEMICOLON]         ;
334  [NEWLINE]           
335  [BRACE_CLOSE]       }
335  [NEWLINE]           
336  [BRACE_CLOSE]       }
336  [NEWLINE]           
338  [COMMENT]           /* Scan the second line */
338  [NEWLINE]           
339  [WORD]              width
339  [ASSIGN]            =
339  [NUMBER]            0
339  [SEMICOLON]         ;
339  [NEWLINE]           
340  [FOR]               for
340  [SPAREN_OPEN]       (
340  [COMMENT]           /* nada */
340  [SEMICOLON]         ;
340  [WORD]              idx
340  [COMPARE]           <
340  [WORD]              len
340  [SEMICOLON]         ;
340  [WORD]              idx
340  [INCDEC_AFTER]      ++
340  [SPAREN_CLOSE]      )
340  [NEWLINE]           
341  [BRACE_OPEN]        {
341  [NEWLINE]           
342  [IF]                if
342  [SPAREN_OPEN]       (
342  [PAREN_OPEN]        (
342  [WORD]              str
342  [SQUARE_OPEN]       [
342  [WORD]              idx
342  [SQUARE_CLOSE]      ]
342  [COMPARE]           ==
342  [STRING]            ' '
342  [PAREN_CLOSE]       )
342  [BOOL]              ||
342  [PAREN_OPEN]        (
342  [WORD]              str
342  [SQUARE_OPEN]       [
342  [WORD]              idx
342  [SQUARE_CLOSE]      ]
342  [COMPARE]           ==
342  [STRING]            '\t'
342  [PAREN_CLOSE]       )
342  [SPAREN_CLOSE]      )
342  [NEWLINE]           
343  [BRACE_OPEN]        {
343  [NEWLINE]           
344  [IF]                if
344  [SPAREN_OPEN]       (
344  [WORD]              width
344  [COMPARE]           >
344  [NUMBER]            0
344  [SPAREN_CLOSE]      )
345  [VBRACE_OPEN]       
345  [NEWLINE]           
346  [BREAK]             break
346  [SEMICOLON]         ;
346  [NEWLINE]           
347  [VBRACE_CLOSE]      
347  [NEWLINE]           
348  [CONTINUE]          continue
348  [SEMICOLON]         ;
348  [NEWLINE]           
349  [BRACE_CLOSE]       }
349  [NEWLINE]           
350  [IF]                if
350  [SPAREN_OPEN]       (
350  [PAREN_OPEN]        (
350  [WORD]              str
350  [SQUARE_OPEN]       [
350  [WORD]              idx
350  [SQUARE_CLOSE]      ]
350  [COMPARE]           ==
350  [STRING]            '\n'
350  [PAREN_CLOSE]       )
350  [BOOL]              ||
350  [PAREN_OPEN]        (
350  [WORD]              str
350  [SQUARE_OPEN]       [
350  [WORD]              idx
350  [SQUARE_CLOSE]      ]
350  [COMPARE]           ==
350  [STRING]            '\r'
350  [PAREN_CLOSE]       )
350  [SPAREN_CLOSE]      )
351  [VBRACE_OPEN]       
351  [NEWLINE]           
352  [COMMENT]           /* Done with second line */
352  [NEWLINE]           
353  [BREAK]             break
353  [SEMICOLON]         ;
354  [VBRACE_CLOSE]      
354  [NEWLINE]           
356  [COMMENT]           /* Count the leading chars */
356  [NEWLINE]           
357  [IF]                if
357  [SPAREN_OPEN]       (
357  [PAREN_OPEN]        (
357  [WORD]              str
357  [SQUARE_OPEN]       [
357  [WORD]              idx
357  [SQUARE_CLOSE]      ]
357  [COMPARE]           ==
357  [STRING]            '*'
357  [PAREN_CLOSE]       )
357  [BOOL]              ||
357  [NEWLINE]           
358  [PAREN_OPEN]        (
358  [WORD]              str
358  [SQUARE_OPEN]       [
358  [WORD]              idx
358  [SQUARE_CLOSE]      ]
358  [COMPARE]           ==
358  [STRING]            '|'
358  [PAREN_CLOSE]       )
358  [BOOL]              ||
358  [NEWLINE]           
359  [PAREN_OPEN]        (
359  [WORD]              str
359  [SQUARE_OPEN]       [
359  [WORD]              idx
359  [SQUARE_CLOSE]      ]
359  [COMPARE]           ==
359  [STRING]            '\\'
359  [PAREN_CLOSE]       )
359  [BOOL]              ||
359  [NEWLINE]           
360  [PAREN_OPEN]        (
360  [WORD]              str
360  [SQUARE_OPEN]       [
360  [WORD]              idx
360  [SQUARE_CLOSE]      ]
360  [COMPARE]           ==
360  [STRING]            '#'
360  [PAREN_CLOSE]       )
360  [BOOL]              ||
360  [NEWLINE]           
361  [PAREN_OPEN]        (
361  [WORD]              str
361  [SQUARE_OPEN]       [
361  [WORD]              idx
361  [SQUARE_CLOSE]      ]
361  [COMPARE]           ==
361  [STRING]            '+'
361  [PAREN_CLOSE]       )
361  [SPAREN_CLOSE]      )
362  [VBRACE_OPEN]       
362  [NEWLINE]           
363  [WORD]              width
363  [INCDEC_AFTER]      ++
363  [SEMICOLON]         ;
363  [NEWLINE]           
364  [VBRACE_CLOSE]      
365  [ELSE]              else
366  [VBRACE_OPEN]       
366  [NEWLINE]           
367  [BREAK]             break
367  [SEMICOLON]         ;
367  [NEWLINE]           
368  [VBRACE_CLOSE]      
369  [BRACE_CLOSE]       }
369  [NEWLINE]           
371  [COMMENT_CPP]       //LOG_FMT(LSYS, "%s: first=%d last=%d width=%d\n", __func__, first_len, last_len, width);
371  [NEWLINE]           
373  [COMMENT]           /*TODO: make the first_len minimum (4) configurable? */
373  [NEWLINE]           
374  [IF]                if
374  [SPAREN_OPEN]       (
374  [PAREN_OPEN]        (
374  [WORD]              first_len
374  [COMPARE]           ==
374  [WORD]              last_len
374  [PAREN_CLOSE]       )
374  [BOOL]              &&
374  [PAREN_OPEN]        (
374  [PAREN_OPEN]        (
374  [WORD]              first_len
374  [COMPARE]           >
374  [NUMBER]            4
374  [PAREN_CLOSE]       )
374  [BOOL]              ||
374  [WORD]              first_len
374  [COMPARE]           ==
374  [WORD]              width
374  [PAREN_CLOSE]       )
374  [SPAREN_CLOSE]      )
375  [VBRACE_OPEN]       
375  [NEWLINE]           
376  [RETURN]            return
376  [NUMBER]            0
376  [SEMICOLON]         ;
376  [NEWLINE]           
377  [VBRACE_CLOSE]      
377  [NEWLINE]           
379  [RETURN]            return
379  [PAREN_OPEN]        (
379  [WORD]              width
379  [COMPARE]           ==
379  [NUMBER]            2
379  [PAREN_CLOSE]       )
379  [QUESTION]          ?
379  [NUMBER]            0
379  [COND_COLON]        :
379  [NUMBER]            1
379  [SEMICOLON]         ;
379  [NEWLINE]           
380  [BRACE_CLOSE]       }
380  [NEWLINE]           
382  [COMMENT_MULTI]     /**␤ * Outputs the CPP comment at pc.␤ * CPP comment combining is done here␤ *␤ * @return the last chunk output'd␤ */
387  [NEWLINE]           
388  [TYPE]              chunk_t
388  [PTR_TYPE]          *
388  [FUNC_DEF]          output_comment_cpp
388  [FPAREN_OPEN]       (
388  [TYPE]              chunk_t
388  [PTR_TYPE]          *
388  [WORD]              first
388  [FPAREN_CLOSE]      )
388  [NEWLINE]           
389  [BRACE_OPEN]        {
389  [NEWLINE]           
390  [TYPE]              int
390  [WORD]              col
390  [ASSIGN]            =
390  [WORD]              first
390  [MEMBER]            ->
390  [WORD]              column
390  [SEMICOLON]         ;
390  [NEWLINE]           
391  [TYPE]              int
391  [WORD]              col_br
391  [ASSIGN]            =
391  [NUMBER]            1
391  [ARITH]             +
391  [PAREN_OPEN]        (
391  [WORD]              first
391  [MEMBER]            ->
391  [WORD]              brace_level
391  [ARITH]             *
391  [WORD]              cpd
391  [MEMBER]            .
391  [WORD]              settings
391  [SQUARE_OPEN]       [
391  [WORD]              UO_indent_columns
391  [SQUARE_CLOSE]      ]
391  [MEMBER]            .
391  [WORD]              n
391  [PAREN_CLOSE]       )
391  [SEMICOLON]         ;
391  [NEWLINE]           
393  [COMMENT]           /* Make sure we have at least one space past the last token */
393  [NEWLINE]           
394  [IF]                if
394  [SPAREN_OPEN]       (
394  [WORD]              first
394  [MEMBER]            ->
394  [WORD]              parent_type
394  [COMPARE]           ==
394  [WORD]              CT_COMMENT_END
394  [SPAREN_CLOSE]      )
394  [NEWLINE]           
395  [BRACE_OPEN]        {
395  [NEWLINE]           
396  [TYPE]              chunk_t
396  [PTR_TYPE]          *
396  [WORD]              prev
396  [ASSIGN]            =
396  [FUNC_CALL]         chunk_get_prev
396  [FPAREN_OPEN]       (
396  [WORD]              first
396  [FPAREN_CLOSE]      )
396  [SEMICOLON]         ;
396  [NEWLINE]           
397  [IF]                if
397  [SPAREN_OPEN]       (
397  [WORD]              prev
397  [COMPARE]           !=
397  [WORD]              NULL
397  [SPAREN_CLOSE]      )
397  [NEWLINE]           
398  [BRACE_OPEN]        {
398  [NEWLINE]           
399  [TYPE]              int
399  [WORD]              col_min
399  [ASSIGN]            =
399  [WORD]              prev
399  [MEMBER]            ->
399  [WORD]              column
399  [ARITH]             +
399  [WORD]              prev
399  [MEMBER]            ->
399  [WORD]              len
399  [ARITH]             +
399  [NUMBER]            1
399  [SEMICOLON]         ;
399  [NEWLINE]           
400  [IF]                if
400  [SPAREN_OPEN]       (
400  [WORD]              col
400  [COMPARE]           <
400  [WORD]              col_min
400  [SPAREN_CLOSE]      )
401  [VBRACE_OPEN]       
401  [NEWLINE]           
402  [WORD]              col
402  [ASSIGN]            =
402  [WORD]              col_min
402  [SEMICOLON]         ;
402  [NEWLINE]           
403  [VBRACE_CLOSE]      
404  [BRACE_CLOSE]       }
404  [NEWLINE]           
405  [BRACE_CLOSE]       }
405  [NEWLINE]           
407  [COMMENT]           /* Bump out to the column */
407  [NEWLINE]           
408  [FUNC_CALL]         output_indent
408  [FPAREN_OPEN]       (
408  [WORD]              col
408  [COMMA]             ,
408  [WORD]              col_br
408  [FPAREN_CLOSE]      )
408  [SEMICOLON]         ;
408  [NEWLINE]           
410  [IF]                if
410  [SPAREN_OPEN]       (
410  [NOT]               !
410  [WORD]              cpd
410  [MEMBER]            .
410  [WORD]              settings
410  [SQUARE_OPEN]       [
410  [WORD]              UO_cmt_cpp_to_c
410  [SQUARE_CLOSE]      ]
410  [MEMBER]            .
410  [WORD]              b
410  [SPAREN_CLOSE]      )
410  [NEWLINE]           
411  [BRACE_OPEN]        {
411  [NEWLINE]           
412  [FUNC_CALL]         add_text_len
412  [FPAREN_OPEN]       (
412  [WORD]              first
412  [MEMBER]            ->
412  [WORD]              str
412  [COMMA]             ,
412  [WORD]              first
412  [MEMBER]            ->
412  [WORD]              len
412  [FPAREN_CLOSE]      )
412  [SEMICOLON]         ;
412  [NEWLINE]           
413  [RETURN]            return
413  [WORD]              first
413  [SEMICOLON]         ;
413  [NEWLINE]           
414  [BRACE_CLOSE]       }
414  [NEWLINE]           
416  [COMMENT]           /* If we are grouping, see if there is something to group */
416  [NEWLINE]           
417  [TYPE]              bool
417  [WORD]              combined
417  [ASSIGN]            =
417  [WORD]              false
417  [SEMICOLON]         ;
417  [NEWLINE]           
418  [IF]                if
418  [SPAREN_OPEN]       (
418  [WORD]              cpd
418  [MEMBER]            .
418  [WORD]              settings
418  [SQUARE_OPEN]       [
418  [WORD]              UO_cmt_cpp_group
418  [SQUARE_CLOSE]      ]
418  [MEMBER]            .
418  [WORD]              b
418  [SPAREN_CLOSE]      )
418  [NEWLINE]           
419  [BRACE_OPEN]        {
419  [NEWLINE]           
420  [COMMENT]           /* next is a newline by definition */
420  [NEWLINE]           
421  [TYPE]              chunk_t
421  [PTR_TYPE]          *
421  [WORD]              next
421  [ASSIGN]            =
421  [FUNC_CALL]         chunk_get_next
421  [FPAREN_OPEN]       (
421  [WORD]              first
421  [FPAREN_CLOSE]      )
421  [SEMICOLON]         ;
421  [NEWLINE]           
422  [IF]                if
422  [SPAREN_OPEN]       (
422  [PAREN_OPEN]        (
422  [WORD]              next
422  [COMPARE]           !=
422  [WORD]              NULL
422  [PAREN_CLOSE]       )
422  [BOOL]              &&
422  [PAREN_OPEN]        (
422  [WORD]              next
422  [MEMBER]            ->
422  [WORD]              nl_count
422  [COMPARE]           ==
422  [NUMBER]            1
422  [PAREN_CLOSE]       )
422  [SPAREN_CLOSE]      )
422  [NEWLINE]           
423  [BRACE_OPEN]        {
423  [NEWLINE]           
424  [WORD]              next
424  [ASSIGN]            =
424  [FUNC_CALL]         chunk_get_next
424  [FPAREN_OPEN]       (
424  [WORD]              next
424  [FPAREN_CLOSE]      )
424  [SEMICOLON]         ;
424  [NEWLINE]           
426  [COMMENT_MULTI]     /**␤          * Only combine the next comment if they are both at indent level or␤          * the second one is NOT at indent or less␤          *␤          * A trailing comment cannot be combined with a comment at indent␤          * level or less␤          */
432  [NEWLINE]           
433  [IF]                if
433  [SPAREN_OPEN]       (
433  [PAREN_OPEN]        (
433  [WORD]              next
433  [COMPARE]           !=
433  [WORD]              NULL
433  [PAREN_CLOSE]       )
433  [BOOL]              &&
433  [NEWLINE]           
434  [PAREN_OPEN]        (
434  [WORD]              next
434  [MEMBER]            ->
434  [WORD]              type
434  [COMPARE]           ==
434  [WORD]              CT_COMMENT_CPP
434  [PAREN_CLOSE]       )
434  [BOOL]              &&
434  [NEWLINE]           
435  [PAREN_OPEN]        (
435  [PAREN_OPEN]        (
435  [PAREN_OPEN]        (
435  [WORD]              next
435  [MEMBER]            ->
435  [WORD]              column
435  [COMPARE]           ==
435  [NUMBER]            1
435  [PAREN_CLOSE]       )
435  [BOOL]              &&
435  [PAREN_OPEN]        (
435  [WORD]              first
435  [MEMBER]            ->
435  [WORD]              column
435  [COMPARE]           ==
435  [NUMBER]            1
435  [PAREN_CLOSE]       )
435  [PAREN_CLOSE]       )
435  [BOOL]              ||
435  [NEWLINE]           
436  [PAREN_OPEN]        (
436  [PAREN_OPEN]        (
436  [WORD]              next
436  [MEMBER]            ->
436  [WORD]              column
436  [COMPARE]           ==
436  [WORD]              col_br
436  [PAREN_CLOSE]       )
436  [BOOL]              &&
436  [PAREN_OPEN]        (
436  [WORD]              first
436  [MEMBER]            ->
436  [WORD]              column
436  [COMPARE]           ==
436  [WORD]              col_br
436  [PAREN_CLOSE]       )
436  [PAREN_CLOSE]       )
436  [BOOL]              ||
436  [NEWLINE]           
437  [PAREN_OPEN]        (
437  [PAREN_OPEN]        (
437  [WORD]              next
437  [MEMBER]            ->
437  [WORD]              column
437  [COMPARE]           >
437  [WORD]              col_br
437  [PAREN_CLOSE]       )
437  [BOOL]              &&
437  [PAREN_OPEN]        (
437  [WORD]              first
437  [MEMBER]            ->
437  [WORD]              parent_type
437  [COMPARE]           ==
437  [WORD]              CT_COMMENT_END
437  [PAREN_CLOSE]       )
437  [PAREN_CLOSE]       )
437  [PAREN_CLOSE]       )
437  [SPAREN_CLOSE]      )
438  [VBRACE_OPEN]       
438  [NEWLINE]           
439  [WORD]              combined
439  [ASSIGN]            =
439  [WORD]              true
439  [SEMICOLON]         ;
439  [NEWLINE]           
440  [VBRACE_CLOSE]      
441  [BRACE_CLOSE]       }
441  [NEWLINE]           
442  [BRACE_CLOSE]       }
442  [NEWLINE]           
444  [IF]                if
444  [SPAREN_OPEN]       (
444  [NOT]               !
444  [WORD]              combined
444  [SPAREN_CLOSE]      )
444  [NEWLINE]           
445  [BRACE_OPEN]        {
445  [NEWLINE]           
446  [COMMENT]           /* nothing to group: just output a single line */
446  [NEWLINE]           
447  [FUNC_CALL]         add_text_len
447  [FPAREN_OPEN]       (
447  [STRING]            "/*"
447  [COMMA]             ,
447  [NUMBER]            2
447  [FPAREN_CLOSE]      )
447  [SEMICOLON]         ;
447  [NEWLINE]           
448  [IF]                if
448  [SPAREN_OPEN]       (
448  [PAREN_OPEN]        (
448  [WORD]              first
448  [MEMBER]            ->
448  [WORD]              str
448  [SQUARE_OPEN]       [
448  [NUMBER]            2
448  [SQUARE_CLOSE]      ]
448  [COMPARE]           !=
448  [STRING]            ' '
448  [PAREN_CLOSE]       )
448  [BOOL]              &&
448  [PAREN_OPEN]        (
448  [WORD]              first
448  [MEMBER]            ->
448  [WORD]              str
448  [SQUARE_OPEN]       [
448  [NUMBER]            2
448  [SQUARE_CLOSE]      ]
448  [COMPARE]           !=
448  [STRING]            '\t'
448  [PAREN_CLOSE]       )
448  [SPAREN_CLOSE]      )
449  [VBRACE_OPEN]       
449  [NEWLINE]           
450  [FUNC_CALL]         add_char
450  [FPAREN_OPEN]       (
450  [STRING]            ' '
450  [FPAREN_CLOSE]      )
450  [SEMICOLON]         ;
450  [NEWLINE]           
451  [VBRACE_CLOSE]      
451  [NEWLINE]           
452  [FUNC_CALL]         add_text_len
452  [FPAREN_OPEN]       (
452  [ADDR]              &
452  [WORD]              first
452  [MEMBER]            ->
452  [WORD]              str
452  [SQUARE_OPEN]       [
452  [NUMBER]            2
452  [SQUARE_CLOSE]      ]
452  [COMMA]             ,
452  [WORD]              first
452  [MEMBER]            ->
452  [WORD]              len
452  [ARITH]             -
452  [NUMBER]            2
452  [FPAREN_CLOSE]      )
452  [SEMICOLON]         ;
452  [NEWLINE]           
453  [FUNC_CALL]         add_text_len
453  [FPAREN_OPEN]       (
453  [STRING]            " */"
453  [COMMA]             ,
453  [NUMBER]            3
453  [FPAREN_CLOSE]      )
453  [SEMICOLON]         ;
453  [NEWLINE]           
454  [RETURN]            return
454  [WORD]              first
454  [SEMICOLON]         ;
454  [NEWLINE]           
455  [BRACE_CLOSE]       }
455  [NEWLINE]           
457  [TYPE]              chunk_t
457  [PTR_TYPE]          *
457  [WORD]              pc
457  [ASSIGN]            =
457  [WORD]              first
457  [SEMICOLON]         ;
457  [NEWLINE]           
458  [TYPE]              chunk_t
458  [PTR_TYPE]          *
458  [WORD]              last
458  [ASSIGN]            =
458  [WORD]              first
458  [SEMICOLON]         ;
458  [NEWLINE]           
460  [COMMENT]           /* Output the first line */
460  [NEWLINE]           
461  [FUNC_CALL]         add_text_len
461  [FPAREN_OPEN]       (
461  [STRING]            "/*"
461  [COMMA]             ,
461  [NUMBER]            2
461  [FPAREN_CLOSE]      )
461  [SEMICOLON]         ;
461  [NEWLINE]           
462  [IF]                if
462  [SPAREN_OPEN]       (
462  [WORD]              combined
462  [BOOL]              &&
462  [WORD]              cpd
462  [MEMBER]            .
462  [WORD]              settings
462  [SQUARE_OPEN]       [
462  [WORD]              UO_cmt_cpp_nl_start
462  [SQUARE_CLOSE]      ]
462  [MEMBER]            .
462  [WORD]              b
462  [SPAREN_CLOSE]      )
463  [VBRACE_OPEN]       
463  [NEWLINE]           
464  [COMMENT_MULTI]     /* I suppose someone more clever could do this without a goto or␤       * repeating too much code...␤       */
466  [NEWLINE]           
467  [GOTO]              goto
467  [WORD]              cpp_newline
467  [SEMICOLON]         ;
467  [NEWLINE]           
468  [VBRACE_CLOSE]      
468  [NEWLINE]           
469  [GOTO]              goto
469  [WORD]              cpp_addline
469  [SEMICOLON]         ;
469  [NEWLINE]           
471  [COMMENT]           /* Output combined lines */
471  [NEWLINE]           
472  [WHILE]             while
472  [SPAREN_OPEN]       (
472  [PAREN_OPEN]        (
472  [WORD]              pc
472  [ASSIGN]            =
472  [FUNC_CALL]         chunk_get_next
472  [FPAREN_OPEN]       (
472  [WORD]              pc
472  [FPAREN_CLOSE]      )
472  [PAREN_CLOSE]       )
472  [COMPARE]           !=
472  [WORD]              NULL
472  [SPAREN_CLOSE]      )
472  [NEWLINE]           
473  [BRACE_OPEN]        {
473  [NEWLINE]           
474  [IF]                if
474  [SPAREN_OPEN]       (
474  [PAREN_OPEN]        (
474  [WORD]              pc
474  [MEMBER]            ->
474  [WORD]              type
474  [COMPARE]           ==
474  [WORD]              CT_NEWLINE
474  [PAREN_CLOSE]       )
474  [BOOL]              &&
474  [PAREN_OPEN]        (
474  [WORD]              pc
474  [MEMBER]            ->
474  [WORD]              nl_count
474  [COMPARE]           ==
474  [NUMBER]            1
474  [PAREN_CLOSE]       )
474  [SPAREN_CLOSE]      )
475  [VBRACE_OPEN]       
475  [NEWLINE]           
476  [CONTINUE]          continue
476  [SEMICOLON]         ;
477  [VBRACE_CLOSE]      
477  [NEWLINE]           
478  [IF]                if
478  [SPAREN_OPEN]       (
478  [WORD]              pc
478  [MEMBER]            ->
478  [WORD]              type
478  [COMPARE]           !=
478  [WORD]              CT_COMMENT_CPP
478  [SPAREN_CLOSE]      )
479  [VBRACE_OPEN]       
479  [NEWLINE]           
480  [BREAK]             break
480  [SEMICOLON]         ;
481  [VBRACE_CLOSE]      
481  [NEWLINE]           
482  [IF]                if
482  [SPAREN_OPEN]       (
482  [PAREN_OPEN]        (
482  [PAREN_OPEN]        (
482  [WORD]              pc
482  [MEMBER]            ->
482  [WORD]              column
482  [COMPARE]           ==
482  [NUMBER]            1
482  [PAREN_CLOSE]       )
482  [BOOL]              &&
482  [PAREN_OPEN]        (
482  [WORD]              first
482  [MEMBER]            ->
482  [WORD]              column
482  [COMPARE]           ==
482  [NUMBER]            1
482  [PAREN_CLOSE]       )
482  [PAREN_CLOSE]       )
482  [BOOL]              ||
482  [NEWLINE]           
483  [PAREN_OPEN]        (
483  [PAREN_OPEN]        (
483  [WORD]              pc
483  [MEMBER]            ->
483  [WORD]              column
483  [COMPARE]           ==
483  [WORD]              col_br
483  [PAREN_CLOSE]       )
483  [BOOL]              &&
483  [PAREN_OPEN]        (
483  [WORD]              first
483  [MEMBER]            ->
483  [WORD]              column
483  [COMPARE]           ==
483  [WORD]              col_br
483  [PAREN_CLOSE]       )
483  [PAREN_CLOSE]       )
483  [BOOL]              ||
483  [NEWLINE]           
484  [PAREN_OPEN]        (
484  [PAREN_OPEN]        (
484  [WORD]              pc
484  [MEMBER]            ->
484  [WORD]              column
484  [COMPARE]           >
484  [WORD]              col_br
484  [PAREN_CLOSE]       )
484  [BOOL]              &&
484  [PAREN_OPEN]        (
484  [WORD]              first
484  [MEMBER]            ->
484  [WORD]              parent_type
484  [COMPARE]           ==
484  [WORD]              CT_COMMENT_END
484  [PAREN_CLOSE]       )
484  [PAREN_CLOSE]       )
484  [SPAREN_CLOSE]      )
484  [NEWLINE]           
485  [BRACE_OPEN]        {
485  [NEWLINE]           
486  [WORD]              last
486  [ASSIGN]            =
486  [WORD]              pc
486  [SEMICOLON]         ;
486  [NEWLINE]           
487  [LABEL]             cpp_newline
487  [LABEL_COLON]       :
487  [NEWLINE]           
488  [FUNC_CALL]         add_char
488  [FPAREN_OPEN]       (
488  [STRING]            '\n'
488  [FPAREN_CLOSE]      )
488  [SEMICOLON]         ;
488  [NEWLINE]           
489  [FUNC_CALL]         output_indent
489  [FPAREN_OPEN]       (
489  [WORD]              col
489  [COMMA]             ,
489  [WORD]              col_br
489  [FPAREN_CLOSE]      )
489  [SEMICOLON]         ;
489  [NEWLINE]           
490  [FUNC_CALL]         add_char
490  [FPAREN_OPEN]       (
490  [STRING]            ' '
490  [FPAREN_CLOSE]      )
490  [SEMICOLON]         ;
490  [NEWLINE]           
491  [FUNC_CALL]         add_char
491  [FPAREN_OPEN]       (
491  [WORD]              cpd
491  [MEMBER]            .
491  [WORD]              settings
491  [SQUARE_OPEN]       [
491  [WORD]              UO_cmt_star_cont
491  [SQUARE_CLOSE]      ]
491  [MEMBER]            .
491  [WORD]              b
491  [QUESTION]          ?
491  [STRING]            '*'
491  [COND_COLON]        :
491  [STRING]            ' '
491  [FPAREN_CLOSE]      )
491  [SEMICOLON]         ;
491  [NEWLINE]           
492  [LABEL]             cpp_addline
492  [LABEL_COLON]       :
492  [NEWLINE]           
493  [IF]                if
493  [SPAREN_OPEN]       (
493  [PAREN_OPEN]        (
493  [WORD]              pc
493  [MEMBER]            ->
493  [WORD]              str
493  [SQUARE_OPEN]       [
493  [NUMBER]            2
493  [SQUARE_CLOSE]      ]
493  [COMPARE]           !=
493  [STRING]            ' '
493  [PAREN_CLOSE]       )
493  [BOOL]              &&
493  [PAREN_OPEN]        (
493  [WORD]              pc
493  [MEMBER]            ->
493  [WORD]              str
493  [SQUARE_OPEN]       [
493  [NUMBER]            2
493  [SQUARE_CLOSE]      ]
493  [COMPARE]           !=
493  [STRING]            '\t'
493  [PAREN_CLOSE]       )
493  [SPAREN_CLOSE]      )
494  [VBRACE_OPEN]       
494  [NEWLINE]           
495  [FUNC_CALL]         add_char
495  [FPAREN_OPEN]       (
495  [STRING]            ' '
495  [FPAREN_CLOSE]      )
495  [SEMICOLON]         ;
495  [NEWLINE]           
496  [VBRACE_CLOSE]      
496  [NEWLINE]           
497  [FUNC_CALL]         add_text_len
497  [FPAREN_OPEN]       (
497  [ADDR]              &
497  [WORD]              pc
497  [MEMBER]            ->
497  [WORD]              str
497  [SQUARE_OPEN]       [
497  [NUMBER]            2
497  [SQUARE_CLOSE]      ]
497  [COMMA]             ,
497  [WORD]              pc
497  [MEMBER]            ->
497  [WORD]              len
497  [ARITH]             -
497  [NUMBER]            2
497  [FPAREN_CLOSE]      )
497  [SEMICOLON]         ;
497  [NEWLINE]           
498  [BRACE_CLOSE]       }
498  [NEWLINE]           
499  [BRACE_CLOSE]       }
499  [NEWLINE]           
501  [IF]                if
501  [SPAREN_OPEN]       (
501  [WORD]              cpd
501  [MEMBER]            .
501  [WORD]              settings
501  [SQUARE_OPEN]       [
501  [WORD]              UO_cmt_cpp_nl_end
501  [SQUARE_CLOSE]      ]
501  [MEMBER]            .
501  [WORD]              b
501  [SPAREN_CLOSE]      )
501  [NEWLINE]           
502  [BRACE_OPEN]        {
502  [NEWLINE]           
503  [FUNC_CALL]         add_char
503  [FPAREN_OPEN]       (
503  [STRING]            '\n'
503  [FPAREN_CLOSE]      )
503  [SEMICOLON]         ;
503  [NEWLINE]           
504  [FUNC_CALL]         output_indent
504  [FPAREN_OPEN]       (
504  [WORD]              col
504  [COMMA]             ,
504  [WORD]              col_br
504  [FPAREN_CLOSE]      )
504  [SEMICOLON]         ;
504  [NEWLINE]           
505  [BRACE_CLOSE]       }
505  [NEWLINE]           
506  [FUNC_CALL]         add_text_len
506  [FPAREN_OPEN]       (
506  [STRING]            " */"
506  [COMMA]             ,
506  [NUMBER]            3
506  [FPAREN_CLOSE]      )
506  [SEMICOLON]         ;
506  [NEWLINE]           
507  [RETURN]            return
507  [WORD]              last
507  [SEMICOLON]         ;
507  [NEWLINE]           
508  [BRACE_CLOSE]       }
508  [NEWLINE]           
510  [TYPE]              void
510  [FUNC_DEF]          output_comment_multi
510  [FPAREN_OPEN]       (
510  [TYPE]              chunk_t
510  [PTR_TYPE]          *
510  [WORD]              pc
510  [FPAREN_CLOSE]      )
510  [NEWLINE]           
511  [BRACE_OPEN]        {
511  [NEWLINE]           
512  [TYPE]              int
512  [WORD]              cmt_col
512  [ASSIGN]            =
512  [WORD]              pc
512  [MEMBER]            ->
512  [WORD]              column
512  [SEMICOLON]         ;
512  [NEWLINE]           
513  [QUALIFIER]         const
513  [TYPE]              char
513  [PTR_TYPE]          *
513  [WORD]              cmt_str
513  [SEMICOLON]         ;
513  [NEWLINE]           
514  [TYPE]              int
514  [WORD]              remaining
514  [SEMICOLON]         ;
514  [NEWLINE]           
515  [TYPE]              char
515  [WORD]              ch
515  [SEMICOLON]         ;
515  [NEWLINE]           
516  [TYPE]              chunk_t
516  [PTR_TYPE]          *
516  [WORD]              prev
516  [SEMICOLON]         ;
516  [NEWLINE]           
517  [TYPE]              char
517  [WORD]              line
517  [SQUARE_OPEN]       [
517  [NUMBER]            1024
517  [SQUARE_CLOSE]      ]
517  [SEMICOLON]         ;
517  [NEWLINE]           
518  [TYPE]              int
518  [WORD]              line_len
518  [SEMICOLON]         ;
518  [NEWLINE]           
519  [TYPE]              int
519  [WORD]              line_count
519  [ASSIGN]            =
519  [NUMBER]            0
519  [SEMICOLON]         ;
519  [NEWLINE]           
520  [TYPE]              int
520  [WORD]              ccol
520  [SEMICOLON]         ;
520  [NEWLINE]           
521  [TYPE]              int
521  [WORD]              col_diff
521  [ASSIGN]            =
521  [NUMBER]            0
521  [SEMICOLON]         ;
521  [NEWLINE]           
522  [TYPE]              int
522  [WORD]              xtra
522  [ASSIGN]            =
522  [NUMBER]            1
522  [SEMICOLON]         ;
522  [NEWLINE]           
524  [WORD]              prev
524  [ASSIGN]            =
524  [FUNC_CALL]         chunk_get_prev
524  [FPAREN_OPEN]       (
524  [WORD]              pc
524  [FPAREN_CLOSE]      )
524  [SEMICOLON]         ;
524  [NEWLINE]           
525  [IF]                if
525  [SPAREN_OPEN]       (
525  [PAREN_OPEN]        (
525  [WORD]              prev
525  [COMPARE]           !=
525  [WORD]              NULL
525  [PAREN_CLOSE]       )
525  [BOOL]              &&
525  [PAREN_OPEN]        (
525  [WORD]              prev
525  [MEMBER]            ->
525  [WORD]              type
525  [COMPARE]           !=
525  [WORD]              CT_NEWLINE
525  [PAREN_CLOSE]       )
525  [SPAREN_CLOSE]      )
526  [VBRACE_OPEN]       
526  [NEWLINE]           
527  [WORD]              cmt_col
527  [ASSIGN]            =
527  [WORD]              pc
527  [MEMBER]            ->
527  [WORD]              orig_col
527  [SEMICOLON]         ;
527  [NEWLINE]           
528  [VBRACE_CLOSE]      
529  [ELSE]              else
530  [VBRACE_OPEN]       
530  [NEWLINE]           
531  [WORD]              col_diff
531  [ASSIGN]            =
531  [WORD]              pc
531  [MEMBER]            ->
531  [WORD]              orig_col
531  [ARITH]             -
531  [WORD]              pc
531  [MEMBER]            ->
531  [WORD]              column
531  [SEMICOLON]         ;
531  [NEWLINE]           
532  [VBRACE_CLOSE]      
532  [NEWLINE]           
534  [COMMENT_CPP]       //   fprintf(stderr, "Indenting1 line %d to col %d (orig=%d) col_diff=%d\n",
534  [NEWLINE]           
535  [COMMENT_CPP]       //           pc->orig_line, cmt_col, pc->orig_col, col_diff);
535  [NEWLINE]           
537  [WORD]              xtra
537  [ASSIGN]            =
537  [FUNC_CALL]         calculate_comment_body_indent
537  [FPAREN_OPEN]       (
537  [WORD]              pc
537  [MEMBER]            ->
537  [WORD]              str
537  [COMMA]             ,
537  [WORD]              pc
537  [MEMBER]            ->
537  [WORD]              len
537  [COMMA]             ,
537  [WORD]              pc
537  [MEMBER]            ->
537  [WORD]              column
537  [FPAREN_CLOSE]      )
537  [SEMICOLON]         ;
537  [NEWLINE]           
539  [WORD]              ccol
539  [ASSIGN]            =
539  [NUMBER]            1
539  [SEMICOLON]         ;
539  [NEWLINE]           
540  [WORD]              remaining
540  [ASSIGN]            =
540  [WORD]              pc
540  [MEMBER]            ->
540  [WORD]              len
540  [SEMICOLON]         ;
540  [NEWLINE]           
541  [WORD]              cmt_str
541  [ASSIGN]            =
541  [WORD]              pc
541  [MEMBER]            ->
541  [WORD]              str
541  [SEMICOLON]         ;
541  [NEWLINE]           
542  [WORD]              line_len
542  [ASSIGN]            =
542  [NUMBER]            0
542  [SEMICOLON]         ;
542  [NEWLINE]           
543  [WHILE]             while
543  [SPAREN_OPEN]       (
543  [WORD]              remaining
543  [COMPARE]           >
543  [NUMBER]            0
543  [SPAREN_CLOSE]      )
543  [NEWLINE]           
544  [BRACE_OPEN]        {
544  [NEWLINE]           
545  [WORD]              ch
545  [ASSIGN]            =
545  [DEREF]             *
545  [WORD]              cmt_str
545  [SEMICOLON]         ;
545  [NEWLINE]           
546  [WORD]              cmt_str
546  [INCDEC_AFTER]      ++
546  [SEMICOLON]         ;
546  [NEWLINE]           
547  [WORD]              remaining
547  [INCDEC_AFTER]      --
547  [SEMICOLON]         ;
547  [NEWLINE]           
549  [COMMENT]           /* handle the CRLF and CR endings. convert both to LF */
549  [NEWLINE]           
550  [IF]                if
550  [SPAREN_OPEN]       (
550  [WORD]              ch
550  [COMPARE]           ==
550  [STRING]            '\r'
550  [SPAREN_CLOSE]      )
550  [NEWLINE]           
551  [BRACE_OPEN]        {
551  [NEWLINE]           
552  [WORD]              ch
552  [ASSIGN]            =
552  [STRING]            '\n'
552  [SEMICOLON]         ;
552  [NEWLINE]           
553  [IF]                if
553  [SPAREN_OPEN]       (
553  [DEREF]             *
553  [WORD]              cmt_str
553  [COMPARE]           ==
553  [STRING]            '\n'
553  [SPAREN_CLOSE]      )
553  [NEWLINE]           
554  [BRACE_OPEN]        {
554  [NEWLINE]           
555  [WORD]              cmt_str
555  [INCDEC_AFTER]      ++
555  [SEMICOLON]         ;
555  [NEWLINE]           
556  [WORD]              remaining
556  [INCDEC_AFTER]      --
556  [SEMICOLON]         ;
556  [NEWLINE]           
557  [BRACE_CLOSE]       }
557  [NEWLINE]           
558  [BRACE_CLOSE]       }
558  [NEWLINE]           
560  [COMMENT]           /* Find the start column */
560  [NEWLINE]           
561  [IF]                if
561  [SPAREN_OPEN]       (
561  [WORD]              line_len
561  [COMPARE]           ==
561  [NUMBER]            0
561  [SPAREN_CLOSE]      )
561  [NEWLINE]           
562  [BRACE_OPEN]        {
562  [NEWLINE]           
563  [IF]                if
563  [SPAREN_OPEN]       (
563  [WORD]              ch
563  [COMPARE]           ==
563  [STRING]            ' '
563  [SPAREN_CLOSE]      )
563  [NEWLINE]           
564  [BRACE_OPEN]        {
564  [NEWLINE]           
565  [WORD]              ccol
565  [INCDEC_AFTER]      ++
565  [SEMICOLON]         ;
565  [NEWLINE]           
566  [CONTINUE]          continue
566  [SEMICOLON]         ;
566  [NEWLINE]           
567  [BRACE_CLOSE]       }
567  [NEWLINE]           
568  [ELSE]              else
568  [ELSEIF]            if
568  [SPAREN_OPEN]       (
568  [WORD]              ch
568  [COMPARE]           ==
568  [STRING]            '\t'
568  [SPAREN_CLOSE]      )
568  [NEWLINE]           
569  [BRACE_OPEN]        {
569  [NEWLINE]           
570  [WORD]              ccol
570  [ASSIGN]            =
570  [FUNC_CALL]         calc_next_tab_column
570  [FPAREN_OPEN]       (
570  [WORD]              ccol
570  [COMMA]             ,
570  [WORD]              cpd
570  [MEMBER]            .
570  [WORD]              settings
570  [SQUARE_OPEN]       [
570  [WORD]              UO_input_tab_size
570  [SQUARE_CLOSE]      ]
570  [MEMBER]            .
570  [WORD]              n
570  [FPAREN_CLOSE]      )
570  [SEMICOLON]         ;
570  [NEWLINE]           
571  [CONTINUE]          continue
571  [SEMICOLON]         ;
571  [NEWLINE]           
572  [BRACE_CLOSE]       }
572  [NEWLINE]           
573  [ELSE]              else
573  [NEWLINE]           
574  [BRACE_OPEN]        {
574  [NEWLINE]           
575  [COMMENT_CPP]       //fprintf(stderr, "%d] Text starts in col %d\n", line_count, ccol);
575  [NEWLINE]           
576  [BRACE_CLOSE]       }
576  [NEWLINE]           
577  [BRACE_CLOSE]       }
577  [NEWLINE]           
579  [WORD]              line
579  [SQUARE_OPEN]       [
579  [WORD]              line_len
579  [INCDEC_AFTER]      ++
579  [SQUARE_CLOSE]      ]
579  [ASSIGN]            =
579  [WORD]              ch
579  [SEMICOLON]         ;
579  [NEWLINE]           
581  [COMMENT]           /* If we just hit an end of line OR we just hit end-of-comment... */
581  [NEWLINE]           
582  [IF]                if
582  [SPAREN_OPEN]       (
582  [PAREN_OPEN]        (
582  [WORD]              ch
582  [COMPARE]           ==
582  [STRING]            '\n'
582  [PAREN_CLOSE]       )
582  [BOOL]              ||
582  [PAREN_OPEN]        (
582  [WORD]              remaining
582  [COMPARE]           ==
582  [NUMBER]            0
582  [PAREN_CLOSE]       )
582  [SPAREN_CLOSE]      )
582  [NEWLINE]           
583  [BRACE_OPEN]        {
583  [NEWLINE]           
584  [WORD]              line_count
584  [INCDEC_AFTER]      ++
584  [SEMICOLON]         ;
584  [NEWLINE]           
586  [COMMENT]           /* strip trailing tabs and spaces before the newline */
586  [NEWLINE]           
587  [IF]                if
587  [SPAREN_OPEN]       (
587  [WORD]              ch
587  [COMPARE]           ==
587  [STRING]            '\n'
587  [SPAREN_CLOSE]      )
587  [NEWLINE]           
588  [BRACE_OPEN]        {
588  [NEWLINE]           
589  [WORD]              line_len
589  [INCDEC_AFTER]      --
589  [SEMICOLON]         ;
589  [NEWLINE]           
590  [WHILE]             while
590  [SPAREN_OPEN]       (
590  [PAREN_OPEN]        (
590  [WORD]              line_len
590  [COMPARE]           >
590  [NUMBER]            0
590  [PAREN_CLOSE]       )
590  [BOOL]              &&
590  [NEWLINE]           
591  [PAREN_OPEN]        (
591  [PAREN_OPEN]        (
591  [WORD]              line
591  [SQUARE_OPEN]       [
591  [WORD]              line_len
591  [ARITH]             -
591  [NUMBER]            1
591  [SQUARE_CLOSE]      ]
591  [COMPARE]           ==
591  [STRING]            ' '
591  [PAREN_CLOSE]       )
591  [BOOL]              ||
591  [NEWLINE]           
592  [PAREN_OPEN]        (
592  [WORD]              line
592  [SQUARE_OPEN]       [
592  [WORD]              line_len
592  [ARITH]             -
592  [NUMBER]            1
592  [SQUARE_CLOSE]      ]
592  [COMPARE]           ==
592  [STRING]            '\t'
592  [PAREN_CLOSE]       )
592  [PAREN_CLOSE]       )
592  [SPAREN_CLOSE]      )
593  [VBRACE_OPEN]       
593  [NEWLINE]           
594  [WORD]              line_len
594  [INCDEC_AFTER]      --
594  [SEMICOLON]         ;
594  [NEWLINE]           
595  [VBRACE_CLOSE]      
595  [NEWLINE]           
596  [WORD]              line
596  [SQUARE_OPEN]       [
596  [WORD]              line_len
596  [INCDEC_AFTER]      ++
596  [SQUARE_CLOSE]      ]
596  [ASSIGN]            =
596  [WORD]              ch
596  [SEMICOLON]         ;
596  [NEWLINE]           
597  [BRACE_CLOSE]       }
597  [NEWLINE]           
598  [WORD]              line
598  [SQUARE_OPEN]       [
598  [WORD]              line_len
598  [SQUARE_CLOSE]      ]
598  [ASSIGN]            =
598  [NUMBER]            0
598  [SEMICOLON]         ;
598  [NEWLINE]           
600  [IF]                if
600  [SPAREN_OPEN]       (
600  [WORD]              line_count
600  [COMPARE]           ==
600  [NUMBER]            1
600  [SPAREN_CLOSE]      )
600  [NEWLINE]           
601  [BRACE_OPEN]        {
601  [NEWLINE]           
602  [COMMENT]           /* this is the first line - add unchanged */
602  [NEWLINE]           
604  [COMMENT]           /*TODO: need to support indent_with_tabs mode 1 */
604  [NEWLINE]           
605  [FUNC_CALL]         output_to_column
605  [FPAREN_OPEN]       (
605  [WORD]              cmt_col
605  [COMMA]             ,
605  [WORD]              cpd
605  [MEMBER]            .
605  [WORD]              settings
605  [SQUARE_OPEN]       [
605  [WORD]              UO_indent_with_tabs
605  [SQUARE_CLOSE]      ]
605  [MEMBER]            .
605  [WORD]              b
605  [FPAREN_CLOSE]      )
605  [SEMICOLON]         ;
605  [NEWLINE]           
606  [FUNC_CALL]         add_text_len
606  [FPAREN_OPEN]       (
606  [WORD]              line
606  [COMMA]             ,
606  [WORD]              line_len
606  [FPAREN_CLOSE]      )
606  [SEMICOLON]         ;
606  [NEWLINE]           
607  [BRACE_CLOSE]       }
607  [NEWLINE]           
608  [ELSE]              else
608  [NEWLINE]           
609  [BRACE_OPEN]        {
609  [NEWLINE]           
610  [COMMENT_MULTI]     /* This is not the first line, so we need to indent to the␤             * correct column.␤             */
612  [NEWLINE]           
613  [WORD]              ccol
613  [ASSIGN]            -=
613  [WORD]              col_diff
613  [SEMICOLON]         ;
613  [NEWLINE]           
614  [IF]                if
614  [SPAREN_OPEN]       (
614  [WORD]              ccol
614  [COMPARE]           <
614  [WORD]              cmt_col
614  [SPAREN_CLOSE]      )
615  [VBRACE_OPEN]       
615  [NEWLINE]           
616  [WORD]              ccol
616  [ASSIGN]            =
616  [WORD]              cmt_col
616  [SEMICOLON]         ;
617  [VBRACE_CLOSE]      
617  [NEWLINE]           
619  [IF]                if
619  [SPAREN_OPEN]       (
619  [WORD]              line
619  [SQUARE_OPEN]       [
619  [NUMBER]            0
619  [SQUARE_CLOSE]      ]
619  [COMPARE]           ==
619  [STRING]            '\n'
619  [SPAREN_CLOSE]      )
619  [NEWLINE]           
620  [BRACE_OPEN]        {
620  [NEWLINE]           
621  [COMMENT]           /* Emtpy line - just a '\n' */
621  [NEWLINE]           
622  [IF]                if
622  [SPAREN_OPEN]       (
622  [WORD]              cpd
622  [MEMBER]            .
622  [WORD]              settings
622  [SQUARE_OPEN]       [
622  [WORD]              UO_cmt_star_cont
622  [SQUARE_CLOSE]      ]
622  [MEMBER]            .
622  [WORD]              b
622  [SPAREN_CLOSE]      )
622  [NEWLINE]           
623  [BRACE_OPEN]        {
623  [NEWLINE]           
624  [FUNC_CALL]         output_to_column
624  [FPAREN_OPEN]       (
624  [WORD]              cmt_col
624  [COMMA]             ,
624  [WORD]              cpd
624  [MEMBER]            .
624  [WORD]              settings
624  [SQUARE_OPEN]       [
624  [WORD]              UO_indent_with_tabs
624  [SQUARE_CLOSE]      ]
624  [MEMBER]            .
624  [WORD]              b
624  [FPAREN_CLOSE]      )
624  [SEMICOLON]         ;
624  [NEWLINE]           
625  [FUNC_CALL]         add_text
625  [FPAREN_OPEN]       (
625  [PAREN_OPEN]        (
625  [WORD]              xtra
625  [COMPARE]           ==
625  [NUMBER]            1
625  [PAREN_CLOSE]       )
625  [QUESTION]          ?
625  [STRING]            " *"
625  [COND_COLON]        :
625  [STRING]            "*"
625  [FPAREN_CLOSE]      )
625  [SEMICOLON]         ;
625  [NEWLINE]           
626  [BRACE_CLOSE]       }
626  [NEWLINE]           
627  [FUNC_CALL]         add_char
627  [FPAREN_OPEN]       (
627  [STRING]            '\n'
627  [FPAREN_CLOSE]      )
627  [SEMICOLON]         ;
627  [NEWLINE]           
628  [BRACE_CLOSE]       }
628  [NEWLINE]           
629  [ELSE]              else
629  [NEWLINE]           
630  [BRACE_OPEN]        {
630  [NEWLINE]           
631  [COMMENT]           /* If this doesn't start with a '*' or '|' */
631  [NEWLINE]           
632  [IF]                if
632  [SPAREN_OPEN]       (
632  [PAREN_OPEN]        (
632  [WORD]              line
632  [SQUARE_OPEN]       [
632  [NUMBER]            0
632  [SQUARE_CLOSE]      ]
632  [COMPARE]           !=
632  [STRING]            '*'
632  [PAREN_CLOSE]       )
632  [BOOL]              &&
632  [PAREN_OPEN]        (
632  [WORD]              line
632  [SQUARE_OPEN]       [
632  [NUMBER]            0
632  [SQUARE_CLOSE]      ]
632  [COMPARE]           !=
632  [STRING]            '|'
632  [PAREN_CLOSE]       )
632  [BOOL]              &&
632  [PAREN_OPEN]        (
632  [WORD]              line
632  [SQUARE_OPEN]       [
632  [NUMBER]            0
632  [SQUARE_CLOSE]      ]
632  [COMPARE]           !=
632  [STRING]            '#'
632  [PAREN_CLOSE]       )
632  [BOOL]              &&
632  [NEWLINE]           
633  [PAREN_OPEN]        (
633  [WORD]              line
633  [SQUARE_OPEN]       [
633  [NUMBER]            0
633  [SQUARE_CLOSE]      ]
633  [COMPARE]           !=
633  [STRING]            '\\'
633  [PAREN_CLOSE]       )
633  [BOOL]              &&
633  [PAREN_OPEN]        (
633  [WORD]              line
633  [SQUARE_OPEN]       [
633  [NUMBER]            0
633  [SQUARE_CLOSE]      ]
633  [COMPARE]           !=
633  [STRING]            '+'
633  [PAREN_CLOSE]       )
633  [SPAREN_CLOSE]      )
633  [NEWLINE]           
634  [BRACE_OPEN]        {
634  [NEWLINE]           
635  [FUNC_CALL]         output_to_column
635  [FPAREN_OPEN]       (
635  [WORD]              cmt_col
635  [COMMA]             ,
635  [WORD]              cpd
635  [MEMBER]            .
635  [WORD]              settings
635  [SQUARE_OPEN]       [
635  [WORD]              UO_indent_with_tabs
635  [SQUARE_CLOSE]      ]
635  [MEMBER]            .
635  [WORD]              b
635  [FPAREN_CLOSE]      )
635  [SEMICOLON]         ;
635  [NEWLINE]           
636  [IF]                if
636  [SPAREN_OPEN]       (
636  [WORD]              cpd
636  [MEMBER]            .
636  [WORD]              settings
636  [SQUARE_OPEN]       [
636  [WORD]              UO_cmt_star_cont
636  [SQUARE_CLOSE]      ]
636  [MEMBER]            .
636  [WORD]              b
636  [SPAREN_CLOSE]      )
637  [VBRACE_OPEN]       
637  [NEWLINE]           
638  [FUNC_CALL]         add_text
638  [FPAREN_OPEN]       (
638  [PAREN_OPEN]        (
638  [WORD]              xtra
638  [COMPARE]           ==
638  [NUMBER]            1
638  [PAREN_CLOSE]       )
638  [QUESTION]          ?
638  [STRING]            " * "
638  [COND_COLON]        :
638  [STRING]            "*  "
638  [FPAREN_CLOSE]      )
638  [SEMICOLON]         ;
638  [NEWLINE]           
639  [VBRACE_CLOSE]      
640  [ELSE]              else
641  [VBRACE_OPEN]       
641  [NEWLINE]           
642  [FUNC_CALL]         add_text
642  [FPAREN_OPEN]       (
642  [STRING]            "   "
642  [FPAREN_CLOSE]      )
642  [SEMICOLON]         ;
642  [NEWLINE]           
643  [VBRACE_CLOSE]      
643  [NEWLINE]           
644  [FUNC_CALL]         output_to_column
644  [FPAREN_OPEN]       (
644  [WORD]              ccol
644  [COMMA]             ,
644  [WORD]              cpd
644  [MEMBER]            .
644  [WORD]              settings
644  [SQUARE_OPEN]       [
644  [WORD]              UO_indent_with_tabs
644  [SQUARE_CLOSE]      ]
644  [MEMBER]            .
644  [WORD]              b
644  [FPAREN_CLOSE]      )
644  [SEMICOLON]         ;
644  [NEWLINE]           
645  [BRACE_CLOSE]       }
645  [NEWLINE]           
646  [ELSE]              else
647  [VBRACE_OPEN]       
647  [NEWLINE]           
648  [FUNC_CALL]         output_to_column
648  [FPAREN_OPEN]       (
648  [WORD]              cmt_col
648  [ARITH]             +
648  [WORD]              xtra
648  [COMMA]             ,
648  [WORD]              cpd
648  [MEMBER]            .
648  [WORD]              settings
648  [SQUARE_OPEN]       [
648  [WORD]              UO_indent_with_tabs
648  [SQUARE_CLOSE]      ]
648  [MEMBER]            .
648  [WORD]              b
648  [FPAREN_CLOSE]      )
648  [SEMICOLON]         ;
648  [NEWLINE]           
649  [VBRACE_CLOSE]      
649  [NEWLINE]           
650  [FUNC_CALL]         add_text_len
650  [FPAREN_OPEN]       (
650  [WORD]              line
650  [COMMA]             ,
650  [WORD]              line_len
650  [FPAREN_CLOSE]      )
650  [SEMICOLON]         ;
650  [NEWLINE]           
651  [BRACE_CLOSE]       }
651  [NEWLINE]           
652  [BRACE_CLOSE]       }
652  [NEWLINE]           
653  [WORD]              line_len
653  [ASSIGN]            =
653  [NUMBER]            0
653  [SEMICOLON]         ;
653  [NEWLINE]           
654  [WORD]              ccol
654  [ASSIGN]            =
654  [NUMBER]            1
654  [SEMICOLON]         ;
654  [NEWLINE]           
655  [BRACE_CLOSE]       }
655  [NEWLINE]           
656  [BRACE_CLOSE]       }
656  [NEWLINE]           
657  [BRACE_CLOSE]       }
657  [NEWLINE]           