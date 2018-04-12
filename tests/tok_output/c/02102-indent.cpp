Line [Token]             Text
1    [COMMENT_MULTI]     /**␤ * @file indent.cpp␤ * Does all the indenting stuff.␤ *␤ * $Id: indent.cpp 548 2006-10-21 02:31:55Z bengardner $␤ */
6    [NEWLINE]           
7    [PREPROC]           #
7    [PP_INCLUDE]        include
7    [PREPROC_BODY]      "uncrustify_types.h"
7    [NEWLINE]           
8    [PREPROC]           #
8    [PP_INCLUDE]        include
8    [PREPROC_BODY]      "chunk_list.h"
8    [NEWLINE]           
9    [PREPROC]           #
9    [PP_INCLUDE]        include
9    [PREPROC_BODY]      "prototypes.h"
9    [NEWLINE]           
10   [PREPROC]           #
10   [PP_INCLUDE]        include
10   [PREPROC_BODY]      <cstdio>
10   [NEWLINE]           
11   [PREPROC]           #
11   [PP_INCLUDE]        include
11   [PREPROC_BODY]      <cstdlib>
11   [NEWLINE]           
12   [PREPROC]           #
12   [PP_INCLUDE]        include
12   [PREPROC_BODY]      <cstring>
12   [NEWLINE]           
13   [PREPROC]           #
13   [PP_INCLUDE]        include
13   [PREPROC_BODY]      <cerrno>
13   [NEWLINE]           
14   [PREPROC]           #
14   [PP_INCLUDE]        include
14   [PREPROC_BODY]      <cctype>
14   [NEWLINE]           
17   [COMMENT_MULTI]     /**␤ * General indenting approach:␤ * Indenting levels are put into a stack.␤ *␤ * The stack entries contain:␤ *  - opening type␤ *  - brace column␤ *  - continuation column␤ *␤ * Items that start a new stack item:␤ *  - preprocessor (new parse frame)␤ *  - Brace Open (Virtual brace also)␤ *  - Paren, Square, Angle open␤ *  - Assignments␤ *  - C++ '<<' operator (ie, cout << "blah")␤ *  - case␤ *  - class colon␤ *  - return␤ *  - types␤ *  - any other continued statement␤ *␤ * Note that the column of items marked 'PCF_WAS_ALIGNED' is not changed.␤ *␤ * For an open brace:␤ *  - indent increases by indent_columns␤ *  - if part of if/else/do/while/switch/etc, an extra indent may be applied␤ *  - if in a paren, then cont-col is set to column + 1, ie "({ some code })"␤ *␤ * Open paren/square/angle:␤ * cont-col is set to the column of the item after the open paren, unless␤ * followed by a newline, then it is set to (brace-col + indent_columns).␤ * Examples:␤ *    a_really_long_funcion_name(␤ *       param1, param2);␤ *    a_really_long_funcion_name(param1,␤ *                               param2);␤ *␤ * Assignments:␤ * Assignments are continued aligned with the first item after the assignment,␤ * unless the assign is followed by a newline.␤ * Examples:␤ *    some.variable = asdf + asdf +␤ *                    asdf;␤ *    some.variable =␤ *       asdf + asdf + asdf;␤ *␤ * C++ << operator:␤ * Handled the same as assignment.␤ * Examples:␤ *    cout << "this is test number: "␤ *         << test_number;␤ *␤ * case:␤ * Started with case or default.␤ * Terminated with close brace at level or another case or default.␤ * Special indenting according to various rules.␤ *  - indent of case label␤ *  - indent of case body␤ *  - how to handle optional braces␤ * Examples:␤ * {␤ * case x: {␤ *    a++;␤ *    break;␤ *    }␤ * case y:␤ *    b--;␤ *    break;␤ * default:␤ *    c++;␤ *    break;␤ * }␤ *␤ * Class colon:␤ * Indent continuation by indent_columns:␤ * class my_class :␤ *    baseclass1,␤ *    baseclass2␤ * {␤ *␤ * Return: same as assignemts␤ * If the return statement is not fully paren'd, then the indent continues at␤ * the column of the item after the return. If it is paren'd, then the paren␤ * rules apply.␤ * return somevalue +␤ *        othervalue;␤ *␤ * Type: pretty much the same as assignments␤ * Examples:␤ * int foo,␤ *     bar,␤ *     baz;␤ *␤ * Any other continued item:␤ * There shouldn't be anything not covered by the above cases, but any other␤ * continued item is indented by indent_columns:␤ * Example:␤ * somereallycrazylongname.with[lotsoflongstuff].␤ *    thatreallyannoysme.whenIhavetomaintain[thecode] = 3;␤ */
116  [NEWLINE]           
118  [QUALIFIER]         static
118  [TYPE]              void
118  [FUNC_PROTO]        indent_comment
118  [FPAREN_OPEN]       (
118  [TYPE]              chunk_t
118  [PTR_TYPE]          *
118  [WORD]              pc
118  [COMMA]             ,
118  [TYPE]              int
118  [WORD]              col
118  [FPAREN_CLOSE]      )
118  [SEMICOLON]         ;
118  [NEWLINE]           
121  [TYPE]              void
121  [FUNC_DEF]          indent_to_column
121  [FPAREN_OPEN]       (
121  [TYPE]              chunk_t
121  [PTR_TYPE]          *
121  [WORD]              pc
121  [COMMA]             ,
121  [TYPE]              int
121  [WORD]              column
121  [FPAREN_CLOSE]      )
121  [NEWLINE]           
122  [BRACE_OPEN]        {
122  [NEWLINE]           
123  [IF]                if
123  [SPAREN_OPEN]       (
123  [WORD]              column
123  [COMPARE]           <
123  [WORD]              pc
123  [MEMBER]            ->
123  [WORD]              column
123  [SPAREN_CLOSE]      )
124  [VBRACE_OPEN]       
124  [NEWLINE]           
125  [WORD]              column
125  [ASSIGN]            =
125  [WORD]              pc
125  [MEMBER]            ->
125  [WORD]              column
125  [SEMICOLON]         ;
125  [NEWLINE]           
126  [VBRACE_CLOSE]      
126  [NEWLINE]           
127  [FUNC_CALL]         reindent_line
127  [FPAREN_OPEN]       (
127  [WORD]              pc
127  [COMMA]             ,
127  [WORD]              column
127  [FPAREN_CLOSE]      )
127  [SEMICOLON]         ;
127  [NEWLINE]           
128  [BRACE_CLOSE]       }
128  [NEWLINE]           
130  [COMMENT_MULTI]     /**␤ * Changes the initial indent for a line to the given column␤ *␤ * @param pc      The chunk at the start of the line␤ * @param column  The desired column␤ */
135  [NEWLINE]           
136  [TYPE]              void
136  [FUNC_DEF]          reindent_line
136  [FPAREN_OPEN]       (
136  [TYPE]              chunk_t
136  [PTR_TYPE]          *
136  [WORD]              pc
136  [COMMA]             ,
136  [TYPE]              int
136  [WORD]              column
136  [FPAREN_CLOSE]      )
136  [NEWLINE]           
137  [BRACE_OPEN]        {
137  [NEWLINE]           
138  [TYPE]              int
138  [WORD]              col_delta
138  [SEMICOLON]         ;
138  [NEWLINE]           
139  [TYPE]              int
139  [WORD]              min_col
139  [SEMICOLON]         ;
139  [NEWLINE]           
141  [FUNC_CALL]         LOG_FMT
141  [FPAREN_OPEN]       (
141  [WORD]              LINDLINE
141  [COMMA]             ,
141  [STRING]            "%s: %d] col %d on %.*s [%s] => %d\n"
141  [COMMA]             ,
141  [NEWLINE]           
142  [WORD]              __func__
142  [COMMA]             ,
142  [WORD]              pc
142  [MEMBER]            ->
142  [WORD]              orig_line
142  [COMMA]             ,
142  [WORD]              pc
142  [MEMBER]            ->
142  [WORD]              column
142  [COMMA]             ,
142  [WORD]              pc
142  [MEMBER]            ->
142  [WORD]              len
142  [COMMA]             ,
142  [WORD]              pc
142  [MEMBER]            ->
142  [WORD]              str
142  [COMMA]             ,
142  [NEWLINE]           
143  [FUNC_CALL]         get_token_name
143  [FPAREN_OPEN]       (
143  [WORD]              pc
143  [MEMBER]            ->
143  [WORD]              type
143  [FPAREN_CLOSE]      )
143  [COMMA]             ,
143  [WORD]              column
143  [FPAREN_CLOSE]      )
143  [SEMICOLON]         ;
143  [NEWLINE]           
145  [IF]                if
145  [SPAREN_OPEN]       (
145  [WORD]              column
145  [COMPARE]           ==
145  [WORD]              pc
145  [MEMBER]            ->
145  [WORD]              column
145  [SPAREN_CLOSE]      )
146  [VBRACE_OPEN]       
146  [NEWLINE]           
147  [RETURN]            return
147  [SEMICOLON]         ;
147  [NEWLINE]           
148  [VBRACE_CLOSE]      
148  [NEWLINE]           
149  [WORD]              col_delta
149  [ASSIGN]            =
149  [WORD]              column
149  [ARITH]             -
149  [WORD]              pc
149  [MEMBER]            ->
149  [WORD]              column
149  [SEMICOLON]         ;
149  [NEWLINE]           
150  [TYPE]              pc
150  [MEMBER]            ->
150  [WORD]              column
150  [ASSIGN]            =
150  [WORD]              column
150  [SEMICOLON]         ;
150  [NEWLINE]           
151  [WORD]              min_col
151  [ASSIGN]            =
151  [WORD]              pc
151  [MEMBER]            ->
151  [WORD]              column
151  [SEMICOLON]         ;
151  [NEWLINE]           
153  [DO]                do
153  [NEWLINE]           
154  [BRACE_OPEN]        {
154  [NEWLINE]           
155  [WORD]              min_col
155  [ASSIGN]            +=
155  [WORD]              pc
155  [MEMBER]            ->
155  [WORD]              len
155  [SEMICOLON]         ;
155  [NEWLINE]           
156  [WORD]              pc
156  [ASSIGN]            =
156  [FUNC_CALL]         chunk_get_next
156  [FPAREN_OPEN]       (
156  [WORD]              pc
156  [FPAREN_CLOSE]      )
156  [SEMICOLON]         ;
156  [NEWLINE]           
157  [IF]                if
157  [SPAREN_OPEN]       (
157  [WORD]              pc
157  [COMPARE]           !=
157  [WORD]              NULL
157  [SPAREN_CLOSE]      )
157  [NEWLINE]           
158  [BRACE_OPEN]        {
158  [NEWLINE]           
159  [IF]                if
159  [SPAREN_OPEN]       (
159  [FUNC_CALL]         chunk_is_comment
159  [FPAREN_OPEN]       (
159  [WORD]              pc
159  [FPAREN_CLOSE]      )
159  [SPAREN_CLOSE]      )
159  [NEWLINE]           
160  [BRACE_OPEN]        {
160  [NEWLINE]           
161  [TYPE]              pc
161  [MEMBER]            ->
161  [WORD]              column
161  [ASSIGN]            =
161  [WORD]              pc
161  [MEMBER]            ->
161  [WORD]              orig_col
161  [SEMICOLON]         ;
161  [NEWLINE]           
162  [IF]                if
162  [SPAREN_OPEN]       (
162  [WORD]              pc
162  [MEMBER]            ->
162  [WORD]              column
162  [COMPARE]           <
162  [WORD]              min_col
162  [SPAREN_CLOSE]      )
163  [VBRACE_OPEN]       
163  [NEWLINE]           
164  [TYPE]              pc
164  [MEMBER]            ->
164  [WORD]              column
164  [ASSIGN]            =
164  [WORD]              min_col
164  [ARITH]             +
164  [NUMBER]            1
164  [SEMICOLON]         ;
164  [NEWLINE]           
165  [VBRACE_CLOSE]      
165  [NEWLINE]           
166  [FUNC_CALL]         LOG_FMT
166  [FPAREN_OPEN]       (
166  [WORD]              LINDLINE
166  [COMMA]             ,
166  [STRING]            "%s: set comment on line %d to col %d (orig %d)\n"
166  [COMMA]             ,
166  [NEWLINE]           
167  [WORD]              __func__
167  [COMMA]             ,
167  [WORD]              pc
167  [MEMBER]            ->
167  [WORD]              orig_line
167  [COMMA]             ,
167  [WORD]              pc
167  [MEMBER]            ->
167  [WORD]              column
167  [COMMA]             ,
167  [WORD]              pc
167  [MEMBER]            ->
167  [WORD]              orig_col
167  [FPAREN_CLOSE]      )
167  [SEMICOLON]         ;
167  [NEWLINE]           
168  [BRACE_CLOSE]       }
168  [NEWLINE]           
169  [ELSE]              else
169  [NEWLINE]           
170  [BRACE_OPEN]        {
170  [NEWLINE]           
171  [TYPE]              pc
171  [MEMBER]            ->
171  [WORD]              column
171  [ASSIGN]            +=
171  [WORD]              col_delta
171  [SEMICOLON]         ;
171  [NEWLINE]           
172  [IF]                if
172  [SPAREN_OPEN]       (
172  [WORD]              pc
172  [MEMBER]            ->
172  [WORD]              column
172  [COMPARE]           <
172  [WORD]              min_col
172  [SPAREN_CLOSE]      )
173  [VBRACE_OPEN]       
173  [NEWLINE]           
174  [TYPE]              pc
174  [MEMBER]            ->
174  [WORD]              column
174  [ASSIGN]            =
174  [WORD]              min_col
174  [SEMICOLON]         ;
174  [NEWLINE]           
175  [VBRACE_CLOSE]      
176  [BRACE_CLOSE]       }
176  [NEWLINE]           
177  [BRACE_CLOSE]       }
177  [NEWLINE]           
178  [BRACE_CLOSE]       }
178  [NEWLINE]           
178  [WHILE_OF_DO]       while
178  [SPAREN_OPEN]       (
178  [PAREN_OPEN]        (
178  [WORD]              pc
178  [COMPARE]           !=
178  [WORD]              NULL
178  [PAREN_CLOSE]       )
178  [BOOL]              &&
178  [PAREN_OPEN]        (
178  [WORD]              pc
178  [MEMBER]            ->
178  [WORD]              nl_count
178  [COMPARE]           ==
178  [NUMBER]            0
178  [PAREN_CLOSE]       )
178  [SPAREN_CLOSE]      )
178  [SEMICOLON]         ;
178  [NEWLINE]           
179  [BRACE_CLOSE]       }
179  [NEWLINE]           
182  [COMMENT_MULTI]     /**␤ * Starts a new entry␤ *␤ * @param frm  The parse frame␤ * @param pc   The chunk causing the push␤ */
187  [NEWLINE]           
188  [QUALIFIER]         static
188  [TYPE]              void
188  [FUNC_DEF]          indent_pse_push
188  [FPAREN_OPEN]       (
188  [STRUCT]            struct
188  [TYPE]              parse_frame
188  [BYREF]             &
188  [WORD]              frm
188  [COMMA]             ,
188  [TYPE]              chunk_t
188  [PTR_TYPE]          *
188  [WORD]              pc
188  [FPAREN_CLOSE]      )
188  [NEWLINE]           
189  [BRACE_OPEN]        {
189  [NEWLINE]           
190  [QUALIFIER]         static
190  [TYPE]              int
190  [WORD]              ref
190  [ASSIGN]            =
190  [NUMBER]            0
190  [SEMICOLON]         ;
190  [NEWLINE]           
192  [COMMENT]           /* check the stack depth */
192  [NEWLINE]           
193  [IF]                if
193  [SPAREN_OPEN]       (
193  [WORD]              frm
193  [MEMBER]            .
193  [WORD]              pse_tos
193  [COMPARE]           <
193  [PAREN_OPEN]        (
193  [TYPE]              int
193  [PAREN_CLOSE]       )
193  [FUNC_CALL]         ARRAY_SIZE
193  [FPAREN_OPEN]       (
193  [WORD]              frm
193  [MEMBER]            .
193  [WORD]              pse
193  [FPAREN_CLOSE]      )
193  [SPAREN_CLOSE]      )
193  [NEWLINE]           
194  [BRACE_OPEN]        {
194  [NEWLINE]           
195  [COMMENT]           /* Bump up the index and initialize it */
195  [NEWLINE]           
196  [TYPE]              frm
196  [MEMBER]            .
196  [WORD]              pse_tos
196  [INCDEC_AFTER]      ++
196  [SEMICOLON]         ;
196  [NEWLINE]           
197  [FUNC_CALL]         memset
197  [FPAREN_OPEN]       (
197  [ADDR]              &
197  [WORD]              frm
197  [MEMBER]            .
197  [WORD]              pse
197  [SQUARE_OPEN]       [
197  [WORD]              frm
197  [MEMBER]            .
197  [WORD]              pse_tos
197  [SQUARE_CLOSE]      ]
197  [COMMA]             ,
197  [NUMBER]            0
197  [COMMA]             ,
197  [SIZEOF]            sizeof
197  [PAREN_OPEN]        (
197  [WORD]              frm
197  [MEMBER]            .
197  [WORD]              pse
197  [SQUARE_OPEN]       [
197  [WORD]              frm
197  [MEMBER]            .
197  [WORD]              pse_tos
197  [SQUARE_CLOSE]      ]
197  [PAREN_CLOSE]       )
197  [FPAREN_CLOSE]      )
197  [SEMICOLON]         ;
197  [NEWLINE]           
199  [FUNC_CALL]         LOG_FMT
199  [FPAREN_OPEN]       (
199  [WORD]              LINDPSE
199  [COMMA]             ,
199  [STRING]            "%4d] OPEN  [%d,%s] level=%d\n"
199  [COMMA]             ,
199  [NEWLINE]           
200  [WORD]              pc
200  [MEMBER]            ->
200  [WORD]              orig_line
200  [COMMA]             ,
200  [WORD]              frm
200  [MEMBER]            .
200  [WORD]              pse_tos
200  [COMMA]             ,
200  [FUNC_CALL]         get_token_name
200  [FPAREN_OPEN]       (
200  [WORD]              pc
200  [MEMBER]            ->
200  [WORD]              type
200  [FPAREN_CLOSE]      )
200  [COMMA]             ,
200  [WORD]              pc
200  [MEMBER]            ->
200  [WORD]              level
200  [FPAREN_CLOSE]      )
200  [SEMICOLON]         ;
200  [NEWLINE]           
202  [TYPE]              frm
202  [MEMBER]            .
202  [WORD]              pse
202  [SQUARE_OPEN]       [
202  [WORD]              frm
202  [MEMBER]            .
202  [WORD]              pse_tos
202  [SQUARE_CLOSE]      ]
202  [MEMBER]            .
202  [WORD]              type
202  [ASSIGN]            =
202  [WORD]              pc
202  [MEMBER]            ->
202  [WORD]              type
202  [SEMICOLON]         ;
202  [NEWLINE]           
203  [TYPE]              frm
203  [MEMBER]            .
203  [WORD]              pse
203  [SQUARE_OPEN]       [
203  [WORD]              frm
203  [MEMBER]            .
203  [WORD]              pse_tos
203  [SQUARE_CLOSE]      ]
203  [MEMBER]            .
203  [WORD]              level
203  [ASSIGN]            =
203  [WORD]              pc
203  [MEMBER]            ->
203  [WORD]              level
203  [SEMICOLON]         ;
203  [NEWLINE]           
204  [TYPE]              frm
204  [MEMBER]            .
204  [WORD]              pse
204  [SQUARE_OPEN]       [
204  [WORD]              frm
204  [MEMBER]            .
204  [WORD]              pse_tos
204  [SQUARE_CLOSE]      ]
204  [MEMBER]            .
204  [WORD]              open_line
204  [ASSIGN]            =
204  [WORD]              pc
204  [MEMBER]            ->
204  [WORD]              orig_line
204  [SEMICOLON]         ;
204  [NEWLINE]           
205  [TYPE]              frm
205  [MEMBER]            .
205  [WORD]              pse
205  [SQUARE_OPEN]       [
205  [WORD]              frm
205  [MEMBER]            .
205  [WORD]              pse_tos
205  [SQUARE_CLOSE]      ]
205  [MEMBER]            .
205  [WORD]              ref
205  [ASSIGN]            =
205  [INCDEC_BEFORE]     ++
205  [WORD]              ref
205  [SEMICOLON]         ;
205  [NEWLINE]           
206  [TYPE]              frm
206  [MEMBER]            .
206  [WORD]              pse
206  [SQUARE_OPEN]       [
206  [WORD]              frm
206  [MEMBER]            .
206  [WORD]              pse_tos
206  [SQUARE_CLOSE]      ]
206  [MEMBER]            .
206  [WORD]              in_preproc
206  [ASSIGN]            =
206  [PAREN_OPEN]        (
206  [WORD]              pc
206  [MEMBER]            ->
206  [WORD]              flags
206  [ARITH]             &
206  [WORD]              PCF_IN_PREPROC
206  [PAREN_CLOSE]       )
206  [COMPARE]           !=
206  [NUMBER]            0
206  [SEMICOLON]         ;
206  [NEWLINE]           
207  [BRACE_CLOSE]       }
207  [NEWLINE]           
208  [BRACE_CLOSE]       }
208  [NEWLINE]           
211  [COMMENT_MULTI]     /**␤ * Removes the top entry␤ *␤ * @param frm  The parse frame␤ * @param pc   The chunk causing the push␤ */
216  [NEWLINE]           
217  [QUALIFIER]         static
217  [TYPE]              void
217  [FUNC_DEF]          indent_pse_pop
217  [FPAREN_OPEN]       (
217  [STRUCT]            struct
217  [TYPE]              parse_frame
217  [BYREF]             &
217  [WORD]              frm
217  [COMMA]             ,
217  [TYPE]              chunk_t
217  [PTR_TYPE]          *
217  [WORD]              pc
217  [FPAREN_CLOSE]      )
217  [NEWLINE]           
218  [BRACE_OPEN]        {
218  [NEWLINE]           
219  [COMMENT]           /* Bump up the index and initialize it */
219  [NEWLINE]           
220  [IF]                if
220  [SPAREN_OPEN]       (
220  [WORD]              frm
220  [MEMBER]            .
220  [WORD]              pse_tos
220  [COMPARE]           >
220  [NUMBER]            0
220  [SPAREN_CLOSE]      )
220  [NEWLINE]           
221  [BRACE_OPEN]        {
221  [NEWLINE]           
222  [IF]                if
222  [SPAREN_OPEN]       (
222  [WORD]              pc
222  [COMPARE]           !=
222  [WORD]              NULL
222  [SPAREN_CLOSE]      )
222  [NEWLINE]           
223  [BRACE_OPEN]        {
223  [NEWLINE]           
224  [FUNC_CALL]         LOG_FMT
224  [FPAREN_OPEN]       (
224  [WORD]              LINDPSE
224  [COMMA]             ,
224  [STRING]            "%4d] CLOSE [%d,%s] on %s, started on line %d, level=%d/%d\n"
224  [COMMA]             ,
224  [NEWLINE]           
225  [WORD]              pc
225  [MEMBER]            ->
225  [WORD]              orig_line
225  [COMMA]             ,
225  [WORD]              frm
225  [MEMBER]            .
225  [WORD]              pse_tos
225  [COMMA]             ,
225  [NEWLINE]           
226  [FUNC_CALL]         get_token_name
226  [FPAREN_OPEN]       (
226  [WORD]              frm
226  [MEMBER]            .
226  [WORD]              pse
226  [SQUARE_OPEN]       [
226  [WORD]              frm
226  [MEMBER]            .
226  [WORD]              pse_tos
226  [SQUARE_CLOSE]      ]
226  [MEMBER]            .
226  [WORD]              type
226  [FPAREN_CLOSE]      )
226  [COMMA]             ,
226  [NEWLINE]           
227  [FUNC_CALL]         get_token_name
227  [FPAREN_OPEN]       (
227  [WORD]              pc
227  [MEMBER]            ->
227  [WORD]              type
227  [FPAREN_CLOSE]      )
227  [COMMA]             ,
227  [NEWLINE]           
228  [WORD]              frm
228  [MEMBER]            .
228  [WORD]              pse
228  [SQUARE_OPEN]       [
228  [WORD]              frm
228  [MEMBER]            .
228  [WORD]              pse_tos
228  [SQUARE_CLOSE]      ]
228  [MEMBER]            .
228  [WORD]              open_line
228  [COMMA]             ,
228  [NEWLINE]           
229  [WORD]              frm
229  [MEMBER]            .
229  [WORD]              pse
229  [SQUARE_OPEN]       [
229  [WORD]              frm
229  [MEMBER]            .
229  [WORD]              pse_tos
229  [SQUARE_CLOSE]      ]
229  [MEMBER]            .
229  [WORD]              level
229  [COMMA]             ,
229  [NEWLINE]           
230  [WORD]              pc
230  [MEMBER]            ->
230  [WORD]              level
230  [FPAREN_CLOSE]      )
230  [SEMICOLON]         ;
230  [NEWLINE]           
231  [BRACE_CLOSE]       }
231  [NEWLINE]           
232  [ELSE]              else
232  [NEWLINE]           
233  [BRACE_OPEN]        {
233  [NEWLINE]           
234  [FUNC_CALL]         LOG_FMT
234  [FPAREN_OPEN]       (
234  [WORD]              LINDPSE
234  [COMMA]             ,
234  [STRING]            " EOF] CLOSE [%d,%s], started on line %d\n"
234  [COMMA]             ,
234  [NEWLINE]           
235  [WORD]              frm
235  [MEMBER]            .
235  [WORD]              pse_tos
235  [COMMA]             ,
235  [FUNC_CALL]         get_token_name
235  [FPAREN_OPEN]       (
235  [WORD]              frm
235  [MEMBER]            .
235  [WORD]              pse
235  [SQUARE_OPEN]       [
235  [WORD]              frm
235  [MEMBER]            .
235  [WORD]              pse_tos
235  [SQUARE_CLOSE]      ]
235  [MEMBER]            .
235  [WORD]              type
235  [FPAREN_CLOSE]      )
235  [COMMA]             ,
235  [NEWLINE]           
236  [WORD]              frm
236  [MEMBER]            .
236  [WORD]              pse
236  [SQUARE_OPEN]       [
236  [WORD]              frm
236  [MEMBER]            .
236  [WORD]              pse_tos
236  [SQUARE_CLOSE]      ]
236  [MEMBER]            .
236  [WORD]              open_line
236  [FPAREN_CLOSE]      )
236  [SEMICOLON]         ;
236  [NEWLINE]           
237  [BRACE_CLOSE]       }
237  [NEWLINE]           
238  [TYPE]              frm
238  [MEMBER]            .
238  [WORD]              pse_tos
238  [INCDEC_AFTER]      --
238  [SEMICOLON]         ;
238  [NEWLINE]           
239  [BRACE_CLOSE]       }
239  [NEWLINE]           
240  [BRACE_CLOSE]       }
240  [NEWLINE]           
243  [QUALIFIER]         static
243  [TYPE]              int
243  [FUNC_DEF]          token_indent
243  [FPAREN_OPEN]       (
243  [TYPE]              c_token_t
243  [WORD]              type
243  [FPAREN_CLOSE]      )
243  [NEWLINE]           
244  [BRACE_OPEN]        {
244  [NEWLINE]           
245  [SWITCH]            switch
245  [SPAREN_OPEN]       (
245  [WORD]              type
245  [SPAREN_CLOSE]      )
245  [NEWLINE]           
246  [BRACE_OPEN]        {
246  [NEWLINE]           
247  [CASE]              case
247  [WORD]              CT_IF
247  [CASE_COLON]        :
247  [NEWLINE]           
248  [CASE]              case
248  [WORD]              CT_DO
248  [CASE_COLON]        :
248  [NEWLINE]           
249  [RETURN]            return
249  [NUMBER]            3
249  [SEMICOLON]         ;
249  [NEWLINE]           
251  [CASE]              case
251  [WORD]              CT_FOR
251  [CASE_COLON]        :
251  [NEWLINE]           
252  [CASE]              case
252  [WORD]              CT_ELSE
252  [CASE_COLON]        :
252  [COMMENT_CPP]       // wacky, but that's what is wanted
252  [NEWLINE]           
253  [RETURN]            return
253  [NUMBER]            4
253  [SEMICOLON]         ;
253  [NEWLINE]           
255  [CASE]              case
255  [WORD]              CT_WHILE
255  [CASE_COLON]        :
255  [NEWLINE]           
256  [RETURN]            return
256  [NUMBER]            6
256  [SEMICOLON]         ;
256  [NEWLINE]           
258  [CASE]              case
258  [WORD]              CT_SWITCH
258  [CASE_COLON]        :
258  [NEWLINE]           
259  [RETURN]            return
259  [NUMBER]            7
259  [SEMICOLON]         ;
259  [NEWLINE]           
261  [CASE]              case
261  [WORD]              CT_ELSEIF
261  [CASE_COLON]        :
261  [NEWLINE]           
262  [RETURN]            return
262  [NUMBER]            8
262  [SEMICOLON]         ;
262  [NEWLINE]           
264  [CASE]              default
264  [CASE_COLON]        :
264  [NEWLINE]           
265  [RETURN]            return
265  [NUMBER]            0
265  [SEMICOLON]         ;
265  [COMMENT_CPP]       //cpd.settings[UO_indent_braces].n;
265  [NEWLINE]           
266  [BRACE_CLOSE]       }
266  [NEWLINE]           
267  [BRACE_CLOSE]       }
267  [NEWLINE]           
270  [COMMENT_MULTI]     /**␤ * Change the top-level indentation only by changing the column member in␤ * the chunk structures.␤ * The level indicator must already be set.␤ */
274  [NEWLINE]           
275  [TYPE]              void
275  [FUNC_DEF]          indent_text
275  [FPAREN_OPEN]       (
275  [TYPE]              void
275  [FPAREN_CLOSE]      )
275  [NEWLINE]           
276  [BRACE_OPEN]        {
276  [NEWLINE]           
277  [TYPE]              chunk_t
277  [PTR_TYPE]          *
277  [WORD]              pc
277  [SEMICOLON]         ;
277  [NEWLINE]           
278  [TYPE]              chunk_t
278  [PTR_TYPE]          *
278  [WORD]              next
278  [SEMICOLON]         ;
278  [NEWLINE]           
279  [TYPE]              chunk_t
279  [PTR_TYPE]          *
279  [WORD]              prev
279  [ASSIGN]            =
279  [WORD]              NULL
279  [SEMICOLON]         ;
279  [NEWLINE]           
280  [TYPE]              bool
280  [WORD]              did_newline
280  [ASSIGN]            =
280  [WORD]              true
280  [SEMICOLON]         ;
280  [NEWLINE]           
281  [TYPE]              int
281  [WORD]              idx
281  [SEMICOLON]         ;
281  [NEWLINE]           
282  [TYPE]              int
282  [WORD]              vardefcol
282  [ASSIGN]            =
282  [NUMBER]            0
282  [SEMICOLON]         ;
282  [NEWLINE]           
283  [TYPE]              int
283  [WORD]              indent_size
283  [ASSIGN]            =
283  [WORD]              cpd
283  [MEMBER]            .
283  [WORD]              settings
283  [SQUARE_OPEN]       [
283  [WORD]              UO_indent_columns
283  [SQUARE_CLOSE]      ]
283  [MEMBER]            .
283  [WORD]              n
283  [SEMICOLON]         ;
283  [NEWLINE]           
284  [TYPE]              int
284  [WORD]              tmp
284  [SEMICOLON]         ;
284  [NEWLINE]           
285  [STRUCT]            struct
285  [TYPE]              parse_frame
285  [WORD]              frm
285  [SEMICOLON]         ;
285  [NEWLINE]           
286  [TYPE]              bool
286  [WORD]              in_preproc
286  [ASSIGN]            =
286  [WORD]              false
286  [COMMA]             ,
286  [WORD]              was_preproc
286  [ASSIGN]            =
286  [WORD]              false
286  [SEMICOLON]         ;
286  [NEWLINE]           
287  [TYPE]              int
287  [WORD]              indent_column
287  [SEMICOLON]         ;
287  [NEWLINE]           
288  [TYPE]              int
288  [WORD]              cout_col
288  [ASSIGN]            =
288  [NUMBER]            0
288  [SEMICOLON]         ;
288  [COMMENT_CPP]       // for aligning << stuff
288  [NEWLINE]           
289  [TYPE]              int
289  [WORD]              cout_level
289  [ASSIGN]            =
289  [NUMBER]            0
289  [SEMICOLON]         ;
289  [COMMENT_CPP]       // for aligning << stuff
289  [NEWLINE]           
290  [TYPE]              int
290  [WORD]              parent_token_indent
290  [ASSIGN]            =
290  [NUMBER]            0
290  [SEMICOLON]         ;
290  [NEWLINE]           
292  [FUNC_CALL]         memset
292  [FPAREN_OPEN]       (
292  [ADDR]              &
292  [WORD]              frm
292  [COMMA]             ,
292  [NUMBER]            0
292  [COMMA]             ,
292  [SIZEOF]            sizeof
292  [PAREN_OPEN]        (
292  [WORD]              frm
292  [PAREN_CLOSE]       )
292  [FPAREN_CLOSE]      )
292  [SEMICOLON]         ;
292  [NEWLINE]           
294  [COMMENT]           /* dummy top-level entry */
294  [NEWLINE]           
295  [TYPE]              frm
295  [MEMBER]            .
295  [WORD]              pse
295  [SQUARE_OPEN]       [
295  [NUMBER]            0
295  [SQUARE_CLOSE]      ]
295  [MEMBER]            .
295  [WORD]              indent
295  [ASSIGN]            =
295  [NUMBER]            1
295  [SEMICOLON]         ;
295  [NEWLINE]           
296  [TYPE]              frm
296  [MEMBER]            .
296  [WORD]              pse
296  [SQUARE_OPEN]       [
296  [NUMBER]            0
296  [SQUARE_CLOSE]      ]
296  [MEMBER]            .
296  [WORD]              indent_tmp
296  [ASSIGN]            =
296  [NUMBER]            1
296  [SEMICOLON]         ;
296  [NEWLINE]           
297  [TYPE]              frm
297  [MEMBER]            .
297  [WORD]              pse
297  [SQUARE_OPEN]       [
297  [NUMBER]            0
297  [SQUARE_CLOSE]      ]
297  [MEMBER]            .
297  [WORD]              type
297  [ASSIGN]            =
297  [WORD]              CT_EOF
297  [SEMICOLON]         ;
297  [NEWLINE]           
299  [WORD]              pc
299  [ASSIGN]            =
299  [FUNC_CALL]         chunk_get_head
299  [FPAREN_OPEN]       (
299  [FPAREN_CLOSE]      )
299  [SEMICOLON]         ;
299  [NEWLINE]           
300  [WHILE]             while
300  [SPAREN_OPEN]       (
300  [WORD]              pc
300  [COMPARE]           !=
300  [WORD]              NULL
300  [SPAREN_CLOSE]      )
300  [NEWLINE]           
301  [BRACE_OPEN]        {
301  [NEWLINE]           
302  [COMMENT]           /* Handle proprocessor transitions */
302  [NEWLINE]           
303  [WORD]              was_preproc
303  [ASSIGN]            =
303  [WORD]              in_preproc
303  [SEMICOLON]         ;
303  [NEWLINE]           
304  [WORD]              in_preproc
304  [ASSIGN]            =
304  [PAREN_OPEN]        (
304  [WORD]              pc
304  [MEMBER]            ->
304  [WORD]              flags
304  [ARITH]             &
304  [WORD]              PCF_IN_PREPROC
304  [PAREN_CLOSE]       )
304  [COMPARE]           !=
304  [NUMBER]            0
304  [SEMICOLON]         ;
304  [NEWLINE]           
306  [IF]                if
306  [SPAREN_OPEN]       (
306  [WORD]              cpd
306  [MEMBER]            .
306  [WORD]              settings
306  [SQUARE_OPEN]       [
306  [WORD]              UO_indent_brace_parent
306  [SQUARE_CLOSE]      ]
306  [MEMBER]            .
306  [WORD]              b
306  [SPAREN_CLOSE]      )
307  [VBRACE_OPEN]       
307  [NEWLINE]           
308  [WORD]              parent_token_indent
308  [ASSIGN]            =
308  [FUNC_CALL]         token_indent
308  [FPAREN_OPEN]       (
308  [WORD]              pc
308  [MEMBER]            ->
308  [WORD]              parent_type
308  [FPAREN_CLOSE]      )
308  [SEMICOLON]         ;
309  [VBRACE_CLOSE]      
309  [NEWLINE]           
311  [COMMENT]           /* Clean up after a #define */
311  [NEWLINE]           
312  [IF]                if
312  [SPAREN_OPEN]       (
312  [NOT]               !
312  [WORD]              in_preproc
312  [SPAREN_CLOSE]      )
313  [VBRACE_OPEN]       
313  [NEWLINE]           
314  [WHILE]             while
314  [SPAREN_OPEN]       (
314  [PAREN_OPEN]        (
314  [WORD]              frm
314  [MEMBER]            .
314  [WORD]              pse_tos
314  [COMPARE]           >
314  [NUMBER]            0
314  [PAREN_CLOSE]       )
314  [BOOL]              &&
314  [WORD]              frm
314  [MEMBER]            .
314  [WORD]              pse
314  [SQUARE_OPEN]       [
314  [WORD]              frm
314  [MEMBER]            .
314  [WORD]              pse_tos
314  [SQUARE_CLOSE]      ]
314  [MEMBER]            .
314  [WORD]              in_preproc
314  [SPAREN_CLOSE]      )
315  [VBRACE_OPEN]       
315  [NEWLINE]           
316  [FUNC_CALL]         indent_pse_pop
316  [FPAREN_OPEN]       (
316  [WORD]              frm
316  [COMMA]             ,
316  [WORD]              pc
316  [FPAREN_CLOSE]      )
316  [SEMICOLON]         ;
316  [NEWLINE]           
317  [VBRACE_CLOSE]      
317  [NEWLINE]           
318  [VBRACE_CLOSE]      
319  [ELSE]              else
319  [NEWLINE]           
320  [BRACE_OPEN]        {
320  [NEWLINE]           
321  [FUNC_CALL]         pf_check
321  [FPAREN_OPEN]       (
321  [ADDR]              &
321  [WORD]              frm
321  [COMMA]             ,
321  [WORD]              pc
321  [FPAREN_CLOSE]      )
321  [SEMICOLON]         ;
321  [NEWLINE]           
323  [IF]                if
323  [SPAREN_OPEN]       (
323  [NOT]               !
323  [WORD]              was_preproc
323  [SPAREN_CLOSE]      )
323  [NEWLINE]           
324  [BRACE_OPEN]        {
324  [NEWLINE]           
325  [COMMENT]           /* Transition into a preproc by creating a dummy indent */
325  [NEWLINE]           
326  [TYPE]              frm
326  [MEMBER]            .
326  [WORD]              level
326  [INCDEC_AFTER]      ++
326  [SEMICOLON]         ;
326  [NEWLINE]           
327  [FUNC_CALL]         indent_pse_push
327  [FPAREN_OPEN]       (
327  [WORD]              frm
327  [COMMA]             ,
327  [WORD]              pc
327  [FPAREN_CLOSE]      )
327  [SEMICOLON]         ;
327  [NEWLINE]           
329  [TYPE]              frm
329  [MEMBER]            .
329  [WORD]              pse
329  [SQUARE_OPEN]       [
329  [WORD]              frm
329  [MEMBER]            .
329  [WORD]              pse_tos
329  [SQUARE_CLOSE]      ]
329  [MEMBER]            .
329  [WORD]              indent
329  [ASSIGN]            =
329  [NUMBER]            1
329  [ARITH]             +
329  [WORD]              indent_size
329  [SEMICOLON]         ;
329  [NEWLINE]           
330  [TYPE]              frm
330  [MEMBER]            .
330  [WORD]              pse
330  [SQUARE_OPEN]       [
330  [WORD]              frm
330  [MEMBER]            .
330  [WORD]              pse_tos
330  [SQUARE_CLOSE]      ]
330  [MEMBER]            .
330  [WORD]              indent_tmp
330  [ASSIGN]            =
330  [WORD]              frm
330  [MEMBER]            .
330  [WORD]              pse
330  [SQUARE_OPEN]       [
330  [WORD]              frm
330  [MEMBER]            .
330  [WORD]              pse_tos
330  [SQUARE_CLOSE]      ]
330  [MEMBER]            .
330  [WORD]              indent
330  [SEMICOLON]         ;
330  [NEWLINE]           
331  [BRACE_CLOSE]       }
331  [NEWLINE]           
332  [BRACE_CLOSE]       }
332  [NEWLINE]           
334  [IF]                if
334  [SPAREN_OPEN]       (
334  [PAREN_OPEN]        (
334  [WORD]              cout_col
334  [COMPARE]           >
334  [NUMBER]            0
334  [PAREN_CLOSE]       )
334  [BOOL]              &&
334  [NEWLINE]           
335  [PAREN_OPEN]        (
335  [FUNC_CALL]         chunk_is_semicolon
335  [FPAREN_OPEN]       (
335  [WORD]              pc
335  [FPAREN_CLOSE]      )
335  [BOOL]              ||
335  [NEWLINE]           
336  [PAREN_OPEN]        (
336  [WORD]              pc
336  [MEMBER]            ->
336  [WORD]              level
336  [COMPARE]           <
336  [WORD]              cout_level
336  [PAREN_CLOSE]       )
336  [PAREN_CLOSE]       )
336  [SPAREN_CLOSE]      )
336  [NEWLINE]           
337  [BRACE_OPEN]        {
337  [NEWLINE]           
338  [WORD]              cout_col
338  [ASSIGN]            =
338  [NUMBER]            0
338  [SEMICOLON]         ;
338  [NEWLINE]           
339  [WORD]              cout_level
339  [ASSIGN]            =
339  [NUMBER]            0
339  [SEMICOLON]         ;
339  [NEWLINE]           
340  [BRACE_CLOSE]       }
340  [NEWLINE]           
342  [COMMENT_MULTI]     /**␤       * Handle non-brace closures␤       */
344  [NEWLINE]           
346  [TYPE]              int
346  [WORD]              old_pse_tos
346  [SEMICOLON]         ;
346  [NEWLINE]           
347  [DO]                do
347  [NEWLINE]           
348  [BRACE_OPEN]        {
348  [NEWLINE]           
349  [WORD]              old_pse_tos
349  [ASSIGN]            =
349  [WORD]              frm
349  [MEMBER]            .
349  [WORD]              pse_tos
349  [SEMICOLON]         ;
349  [NEWLINE]           
351  [COMMENT_MULTI]     /* End anything that drops a level␤          * REVISIT: not sure about the preproc check␤          */
353  [NEWLINE]           
354  [IF]                if
354  [SPAREN_OPEN]       (
354  [NOT]               !
354  [FUNC_CALL]         chunk_is_newline
354  [FPAREN_OPEN]       (
354  [WORD]              pc
354  [FPAREN_CLOSE]      )
354  [BOOL]              &&
354  [NEWLINE]           
355  [NOT]               !
355  [FUNC_CALL]         chunk_is_comment
355  [FPAREN_OPEN]       (
355  [WORD]              pc
355  [FPAREN_CLOSE]      )
355  [BOOL]              &&
355  [NEWLINE]           
356  [PAREN_OPEN]        (
356  [PAREN_OPEN]        (
356  [WORD]              pc
356  [MEMBER]            ->
356  [WORD]              flags
356  [ARITH]             &
356  [WORD]              PCF_IN_PREPROC
356  [PAREN_CLOSE]       )
356  [COMPARE]           ==
356  [NUMBER]            0
356  [PAREN_CLOSE]       )
356  [BOOL]              &&
356  [NEWLINE]           
357  [PAREN_OPEN]        (
357  [WORD]              frm
357  [MEMBER]            .
357  [WORD]              pse
357  [SQUARE_OPEN]       [
357  [WORD]              frm
357  [MEMBER]            .
357  [WORD]              pse_tos
357  [SQUARE_CLOSE]      ]
357  [MEMBER]            .
357  [WORD]              level
357  [COMPARE]           >
357  [WORD]              pc
357  [MEMBER]            ->
357  [WORD]              level
357  [PAREN_CLOSE]       )
357  [SPAREN_CLOSE]      )
358  [VBRACE_OPEN]       
358  [NEWLINE]           
359  [FUNC_CALL]         indent_pse_pop
359  [FPAREN_OPEN]       (
359  [WORD]              frm
359  [COMMA]             ,
359  [WORD]              pc
359  [FPAREN_CLOSE]      )
359  [SEMICOLON]         ;
360  [VBRACE_CLOSE]      
360  [NEWLINE]           
362  [IF]                if
362  [SPAREN_OPEN]       (
362  [WORD]              frm
362  [MEMBER]            .
362  [WORD]              pse
362  [SQUARE_OPEN]       [
362  [WORD]              frm
362  [MEMBER]            .
362  [WORD]              pse_tos
362  [SQUARE_CLOSE]      ]
362  [MEMBER]            .
362  [WORD]              level
362  [COMPARE]           ==
362  [WORD]              pc
362  [MEMBER]            ->
362  [WORD]              level
362  [SPAREN_CLOSE]      )
362  [NEWLINE]           
363  [BRACE_OPEN]        {
363  [NEWLINE]           
364  [COMMENT]           /* process virtual braces closes (no text output) */
364  [NEWLINE]           
365  [IF]                if
365  [SPAREN_OPEN]       (
365  [PAREN_OPEN]        (
365  [WORD]              pc
365  [MEMBER]            ->
365  [WORD]              type
365  [COMPARE]           ==
365  [WORD]              CT_VBRACE_CLOSE
365  [PAREN_CLOSE]       )
365  [BOOL]              &&
365  [NEWLINE]           
366  [PAREN_OPEN]        (
366  [WORD]              frm
366  [MEMBER]            .
366  [WORD]              pse
366  [SQUARE_OPEN]       [
366  [WORD]              frm
366  [MEMBER]            .
366  [WORD]              pse_tos
366  [SQUARE_CLOSE]      ]
366  [MEMBER]            .
366  [WORD]              type
366  [COMPARE]           ==
366  [WORD]              CT_VBRACE_OPEN
366  [PAREN_CLOSE]       )
366  [SPAREN_CLOSE]      )
366  [NEWLINE]           
367  [BRACE_OPEN]        {
367  [NEWLINE]           
368  [FUNC_CALL]         indent_pse_pop
368  [FPAREN_OPEN]       (
368  [WORD]              frm
368  [COMMA]             ,
368  [WORD]              pc
368  [FPAREN_CLOSE]      )
368  [SEMICOLON]         ;
368  [NEWLINE]           
369  [TYPE]              frm
369  [MEMBER]            .
369  [WORD]              level
369  [INCDEC_AFTER]      --
369  [SEMICOLON]         ;
369  [NEWLINE]           
370  [WORD]              pc
370  [ASSIGN]            =
370  [FUNC_CALL]         chunk_get_next
370  [FPAREN_OPEN]       (
370  [WORD]              pc
370  [FPAREN_CLOSE]      )
370  [SEMICOLON]         ;
370  [NEWLINE]           
371  [BRACE_CLOSE]       }
371  [NEWLINE]           
373  [COMMENT]           /* End any assign operations with a semicolon on the same level */
373  [NEWLINE]           
374  [IF]                if
374  [SPAREN_OPEN]       (
374  [PAREN_OPEN]        (
374  [WORD]              frm
374  [MEMBER]            .
374  [WORD]              pse
374  [SQUARE_OPEN]       [
374  [WORD]              frm
374  [MEMBER]            .
374  [WORD]              pse_tos
374  [SQUARE_CLOSE]      ]
374  [MEMBER]            .
374  [WORD]              type
374  [COMPARE]           ==
374  [WORD]              CT_ASSIGN
374  [PAREN_CLOSE]       )
374  [BOOL]              &&
374  [NEWLINE]           
375  [PAREN_OPEN]        (
375  [FUNC_CALL]         chunk_is_semicolon
375  [FPAREN_OPEN]       (
375  [WORD]              pc
375  [FPAREN_CLOSE]      )
375  [BOOL]              ||
375  [NEWLINE]           
376  [PAREN_OPEN]        (
376  [WORD]              pc
376  [MEMBER]            ->
376  [WORD]              type
376  [COMPARE]           ==
376  [WORD]              CT_COMMA
376  [PAREN_CLOSE]       )
376  [BOOL]              ||
376  [NEWLINE]           
377  [PAREN_OPEN]        (
377  [WORD]              pc
377  [MEMBER]            ->
377  [WORD]              type
377  [COMPARE]           ==
377  [WORD]              CT_BRACE_OPEN
377  [PAREN_CLOSE]       )
377  [PAREN_CLOSE]       )
377  [SPAREN_CLOSE]      )
378  [VBRACE_OPEN]       
378  [NEWLINE]           
379  [FUNC_CALL]         indent_pse_pop
379  [FPAREN_OPEN]       (
379  [WORD]              frm
379  [COMMA]             ,
379  [WORD]              pc
379  [FPAREN_CLOSE]      )
379  [SEMICOLON]         ;
380  [VBRACE_CLOSE]      
380  [NEWLINE]           
382  [COMMENT]           /* End any CPP class colon crap */
382  [NEWLINE]           
383  [IF]                if
383  [SPAREN_OPEN]       (
383  [PAREN_OPEN]        (
383  [WORD]              frm
383  [MEMBER]            .
383  [WORD]              pse
383  [SQUARE_OPEN]       [
383  [WORD]              frm
383  [MEMBER]            .
383  [WORD]              pse_tos
383  [SQUARE_CLOSE]      ]
383  [MEMBER]            .
383  [WORD]              type
383  [COMPARE]           ==
383  [WORD]              CT_CLASS_COLON
383  [PAREN_CLOSE]       )
383  [BOOL]              &&
383  [NEWLINE]           
384  [PAREN_OPEN]        (
384  [PAREN_OPEN]        (
384  [WORD]              pc
384  [MEMBER]            ->
384  [WORD]              type
384  [COMPARE]           ==
384  [WORD]              CT_BRACE_OPEN
384  [PAREN_CLOSE]       )
384  [BOOL]              ||
384  [NEWLINE]           
385  [FUNC_CALL]         chunk_is_semicolon
385  [FPAREN_OPEN]       (
385  [WORD]              pc
385  [FPAREN_CLOSE]      )
385  [PAREN_CLOSE]       )
385  [SPAREN_CLOSE]      )
386  [VBRACE_OPEN]       
386  [NEWLINE]           
387  [FUNC_CALL]         indent_pse_pop
387  [FPAREN_OPEN]       (
387  [WORD]              frm
387  [COMMA]             ,
387  [WORD]              pc
387  [FPAREN_CLOSE]      )
387  [SEMICOLON]         ;
388  [VBRACE_CLOSE]      
388  [NEWLINE]           
390  [COMMENT]           /* a case is ended with another case or a close brace */
390  [NEWLINE]           
391  [IF]                if
391  [SPAREN_OPEN]       (
391  [PAREN_OPEN]        (
391  [WORD]              frm
391  [MEMBER]            .
391  [WORD]              pse
391  [SQUARE_OPEN]       [
391  [WORD]              frm
391  [MEMBER]            .
391  [WORD]              pse_tos
391  [SQUARE_CLOSE]      ]
391  [MEMBER]            .
391  [WORD]              type
391  [COMPARE]           ==
391  [WORD]              CT_CASE
391  [PAREN_CLOSE]       )
391  [BOOL]              &&
391  [NEWLINE]           
392  [PAREN_OPEN]        (
392  [PAREN_OPEN]        (
392  [WORD]              pc
392  [MEMBER]            ->
392  [WORD]              type
392  [COMPARE]           ==
392  [WORD]              CT_BRACE_CLOSE
392  [PAREN_CLOSE]       )
392  [BOOL]              ||
392  [NEWLINE]           
393  [PAREN_OPEN]        (
393  [WORD]              pc
393  [MEMBER]            ->
393  [WORD]              type
393  [COMPARE]           ==
393  [WORD]              CT_CASE
393  [PAREN_CLOSE]       )
393  [PAREN_CLOSE]       )
393  [SPAREN_CLOSE]      )
394  [VBRACE_OPEN]       
394  [NEWLINE]           
395  [FUNC_CALL]         indent_pse_pop
395  [FPAREN_OPEN]       (
395  [WORD]              frm
395  [COMMA]             ,
395  [WORD]              pc
395  [FPAREN_CLOSE]      )
395  [SEMICOLON]         ;
396  [VBRACE_CLOSE]      
396  [NEWLINE]           
398  [COMMENT]           /* a return is ended with a semicolon */
398  [NEWLINE]           
399  [IF]                if
399  [SPAREN_OPEN]       (
399  [PAREN_OPEN]        (
399  [WORD]              frm
399  [MEMBER]            .
399  [WORD]              pse
399  [SQUARE_OPEN]       [
399  [WORD]              frm
399  [MEMBER]            .
399  [WORD]              pse_tos
399  [SQUARE_CLOSE]      ]
399  [MEMBER]            .
399  [WORD]              type
399  [COMPARE]           ==
399  [WORD]              CT_RETURN
399  [PAREN_CLOSE]       )
399  [BOOL]              &&
399  [NEWLINE]           
400  [FUNC_CALL]         chunk_is_semicolon
400  [FPAREN_OPEN]       (
400  [WORD]              pc
400  [FPAREN_CLOSE]      )
400  [SPAREN_CLOSE]      )
401  [VBRACE_OPEN]       
401  [NEWLINE]           
402  [FUNC_CALL]         indent_pse_pop
402  [FPAREN_OPEN]       (
402  [WORD]              frm
402  [COMMA]             ,
402  [WORD]              pc
402  [FPAREN_CLOSE]      )
402  [SEMICOLON]         ;
403  [VBRACE_CLOSE]      
403  [NEWLINE]           
405  [COMMENT]           /* Close out parens and squares */
405  [NEWLINE]           
406  [IF]                if
406  [SPAREN_OPEN]       (
406  [PAREN_OPEN]        (
406  [WORD]              frm
406  [MEMBER]            .
406  [WORD]              pse
406  [SQUARE_OPEN]       [
406  [WORD]              frm
406  [MEMBER]            .
406  [WORD]              pse_tos
406  [SQUARE_CLOSE]      ]
406  [MEMBER]            .
406  [WORD]              type
406  [COMPARE]           ==
406  [PAREN_OPEN]        (
406  [WORD]              pc
406  [MEMBER]            ->
406  [WORD]              type
406  [ARITH]             -
406  [NUMBER]            1
406  [PAREN_CLOSE]       )
406  [PAREN_CLOSE]       )
406  [BOOL]              &&
406  [NEWLINE]           
407  [PAREN_OPEN]        (
407  [PAREN_OPEN]        (
407  [WORD]              pc
407  [MEMBER]            ->
407  [WORD]              type
407  [COMPARE]           ==
407  [WORD]              CT_PAREN_CLOSE
407  [PAREN_CLOSE]       )
407  [BOOL]              ||
407  [NEWLINE]           
408  [PAREN_OPEN]        (
408  [WORD]              pc
408  [MEMBER]            ->
408  [WORD]              type
408  [COMPARE]           ==
408  [WORD]              CT_SPAREN_CLOSE
408  [PAREN_CLOSE]       )
408  [BOOL]              ||
408  [NEWLINE]           
409  [PAREN_OPEN]        (
409  [WORD]              pc
409  [MEMBER]            ->
409  [WORD]              type
409  [COMPARE]           ==
409  [WORD]              CT_FPAREN_CLOSE
409  [PAREN_CLOSE]       )
409  [BOOL]              ||
409  [NEWLINE]           
410  [PAREN_OPEN]        (
410  [WORD]              pc
410  [MEMBER]            ->
410  [WORD]              type
410  [COMPARE]           ==
410  [WORD]              CT_SQUARE_CLOSE
410  [PAREN_CLOSE]       )
410  [BOOL]              ||
410  [NEWLINE]           
411  [PAREN_OPEN]        (
411  [WORD]              pc
411  [MEMBER]            ->
411  [WORD]              type
411  [COMPARE]           ==
411  [WORD]              CT_ANGLE_CLOSE
411  [PAREN_CLOSE]       )
411  [PAREN_CLOSE]       )
411  [SPAREN_CLOSE]      )
411  [NEWLINE]           
412  [BRACE_OPEN]        {
412  [NEWLINE]           
413  [FUNC_CALL]         indent_pse_pop
413  [FPAREN_OPEN]       (
413  [WORD]              frm
413  [COMMA]             ,
413  [WORD]              pc
413  [FPAREN_CLOSE]      )
413  [SEMICOLON]         ;
413  [NEWLINE]           
414  [TYPE]              frm
414  [MEMBER]            .
414  [WORD]              paren_count
414  [INCDEC_AFTER]      --
414  [SEMICOLON]         ;
414  [NEWLINE]           
415  [BRACE_CLOSE]       }
415  [NEWLINE]           
416  [BRACE_CLOSE]       }
416  [NEWLINE]           
417  [BRACE_CLOSE]       }
417  [NEWLINE]           
417  [WHILE_OF_DO]       while
417  [SPAREN_OPEN]       (
417  [WORD]              old_pse_tos
417  [COMPARE]           >
417  [WORD]              frm
417  [MEMBER]            .
417  [WORD]              pse_tos
417  [SPAREN_CLOSE]      )
417  [SEMICOLON]         ;
417  [NEWLINE]           
419  [COMMENT]           /* Grab a copy of the current indent */
419  [NEWLINE]           
420  [WORD]              indent_column
420  [ASSIGN]            =
420  [WORD]              frm
420  [MEMBER]            .
420  [WORD]              pse
420  [SQUARE_OPEN]       [
420  [WORD]              frm
420  [MEMBER]            .
420  [WORD]              pse_tos
420  [SQUARE_CLOSE]      ]
420  [MEMBER]            .
420  [WORD]              indent_tmp
420  [SEMICOLON]         ;
420  [NEWLINE]           
422  [IF]                if
422  [SPAREN_OPEN]       (
422  [NOT]               !
422  [FUNC_CALL]         chunk_is_newline
422  [FPAREN_OPEN]       (
422  [WORD]              pc
422  [FPAREN_CLOSE]      )
422  [BOOL]              &&
422  [NOT]               !
422  [FUNC_CALL]         chunk_is_comment
422  [FPAREN_OPEN]       (
422  [WORD]              pc
422  [FPAREN_CLOSE]      )
422  [SPAREN_CLOSE]      )
422  [NEWLINE]           
423  [BRACE_OPEN]        {
423  [NEWLINE]           
424  [FUNC_CALL]         LOG_FMT
424  [FPAREN_OPEN]       (
424  [WORD]              LINDPC
424  [COMMA]             ,
424  [STRING]            " -=[ %.*s ]=- top=%d %s %d/%d\n"
424  [COMMA]             ,
424  [NEWLINE]           
425  [WORD]              pc
425  [MEMBER]            ->
425  [WORD]              len
425  [COMMA]             ,
425  [WORD]              pc
425  [MEMBER]            ->
425  [WORD]              str
425  [COMMA]             ,
425  [NEWLINE]           
426  [WORD]              frm
426  [MEMBER]            .
426  [WORD]              pse_tos
426  [COMMA]             ,
426  [NEWLINE]           
427  [FUNC_CALL]         get_token_name
427  [FPAREN_OPEN]       (
427  [WORD]              frm
427  [MEMBER]            .
427  [WORD]              pse
427  [SQUARE_OPEN]       [
427  [WORD]              frm
427  [MEMBER]            .
427  [WORD]              pse_tos
427  [SQUARE_CLOSE]      ]
427  [MEMBER]            .
427  [WORD]              type
427  [FPAREN_CLOSE]      )
427  [COMMA]             ,
427  [NEWLINE]           
428  [WORD]              frm
428  [MEMBER]            .
428  [WORD]              pse
428  [SQUARE_OPEN]       [
428  [WORD]              frm
428  [MEMBER]            .
428  [WORD]              pse_tos
428  [SQUARE_CLOSE]      ]
428  [MEMBER]            .
428  [WORD]              indent_tmp
428  [COMMA]             ,
428  [NEWLINE]           
429  [WORD]              frm
429  [MEMBER]            .
429  [WORD]              pse
429  [SQUARE_OPEN]       [
429  [WORD]              frm
429  [MEMBER]            .
429  [WORD]              pse_tos
429  [SQUARE_CLOSE]      ]
429  [MEMBER]            .
429  [WORD]              indent
429  [FPAREN_CLOSE]      )
429  [SEMICOLON]         ;
429  [NEWLINE]           
430  [BRACE_CLOSE]       }
430  [NEWLINE]           
432  [COMMENT_MULTI]     /**␤       * Handle stuff that can affect the current indent:␤       *  - brace close␤       *  - vbrace open␤       *  - brace open␤       *  - case         (immediate)␤       *  - labels       (immediate)␤       *  - class colons (immediate)␤       *␤       * And some stuff that can't␤       *  - open paren␤       *  - open square␤       *  - assignment␤       *  - return␤       */
446  [NEWLINE]           
448  [IF]                if
448  [SPAREN_OPEN]       (
448  [WORD]              pc
448  [MEMBER]            ->
448  [WORD]              type
448  [COMPARE]           ==
448  [WORD]              CT_BRACE_CLOSE
448  [SPAREN_CLOSE]      )
448  [NEWLINE]           
449  [BRACE_OPEN]        {
449  [NEWLINE]           
450  [IF]                if
450  [SPAREN_OPEN]       (
450  [WORD]              frm
450  [MEMBER]            .
450  [WORD]              pse
450  [SQUARE_OPEN]       [
450  [WORD]              frm
450  [MEMBER]            .
450  [WORD]              pse_tos
450  [SQUARE_CLOSE]      ]
450  [MEMBER]            .
450  [WORD]              type
450  [COMPARE]           ==
450  [WORD]              CT_BRACE_OPEN
450  [SPAREN_CLOSE]      )
450  [NEWLINE]           
451  [BRACE_OPEN]        {
451  [NEWLINE]           
452  [FUNC_CALL]         indent_pse_pop
452  [FPAREN_OPEN]       (
452  [WORD]              frm
452  [COMMA]             ,
452  [WORD]              pc
452  [FPAREN_CLOSE]      )
452  [SEMICOLON]         ;
452  [NEWLINE]           
453  [TYPE]              frm
453  [MEMBER]            .
453  [WORD]              level
453  [INCDEC_AFTER]      --
453  [SEMICOLON]         ;
453  [NEWLINE]           
455  [COMMENT]           /* Update the indent_column if needed */
455  [NEWLINE]           
456  [IF]                if
456  [SPAREN_OPEN]       (
456  [NOT]               !
456  [WORD]              cpd
456  [MEMBER]            .
456  [WORD]              settings
456  [SQUARE_OPEN]       [
456  [WORD]              UO_indent_braces
456  [SQUARE_CLOSE]      ]
456  [MEMBER]            .
456  [WORD]              b
456  [BOOL]              &&
456  [NEWLINE]           
457  [PAREN_OPEN]        (
457  [WORD]              parent_token_indent
457  [COMPARE]           ==
457  [NUMBER]            0
457  [PAREN_CLOSE]       )
457  [SPAREN_CLOSE]      )
458  [VBRACE_OPEN]       
458  [NEWLINE]           
459  [WORD]              indent_column
459  [ASSIGN]            =
459  [WORD]              frm
459  [MEMBER]            .
459  [WORD]              pse
459  [SQUARE_OPEN]       [
459  [WORD]              frm
459  [MEMBER]            .
459  [WORD]              pse_tos
459  [SQUARE_CLOSE]      ]
459  [MEMBER]            .
459  [WORD]              indent_tmp
459  [SEMICOLON]         ;
460  [VBRACE_CLOSE]      
460  [NEWLINE]           
462  [IF]                if
462  [SPAREN_OPEN]       (
462  [PAREN_OPEN]        (
462  [WORD]              pc
462  [MEMBER]            ->
462  [WORD]              parent_type
462  [COMPARE]           ==
462  [WORD]              CT_IF
462  [PAREN_CLOSE]       )
462  [BOOL]              ||
462  [NEWLINE]           
463  [PAREN_OPEN]        (
463  [WORD]              pc
463  [MEMBER]            ->
463  [WORD]              parent_type
463  [COMPARE]           ==
463  [WORD]              CT_ELSE
463  [PAREN_CLOSE]       )
463  [BOOL]              ||
463  [NEWLINE]           
464  [PAREN_OPEN]        (
464  [WORD]              pc
464  [MEMBER]            ->
464  [WORD]              parent_type
464  [COMPARE]           ==
464  [WORD]              CT_ELSEIF
464  [PAREN_CLOSE]       )
464  [BOOL]              ||
464  [NEWLINE]           
465  [PAREN_OPEN]        (
465  [WORD]              pc
465  [MEMBER]            ->
465  [WORD]              parent_type
465  [COMPARE]           ==
465  [WORD]              CT_DO
465  [PAREN_CLOSE]       )
465  [BOOL]              ||
465  [NEWLINE]           
466  [PAREN_OPEN]        (
466  [WORD]              pc
466  [MEMBER]            ->
466  [WORD]              parent_type
466  [COMPARE]           ==
466  [WORD]              CT_WHILE
466  [PAREN_CLOSE]       )
466  [BOOL]              ||
466  [NEWLINE]           
467  [PAREN_OPEN]        (
467  [WORD]              pc
467  [MEMBER]            ->
467  [WORD]              parent_type
467  [COMPARE]           ==
467  [WORD]              CT_SWITCH
467  [PAREN_CLOSE]       )
467  [BOOL]              ||
467  [NEWLINE]           
468  [PAREN_OPEN]        (
468  [WORD]              pc
468  [MEMBER]            ->
468  [WORD]              parent_type
468  [COMPARE]           ==
468  [WORD]              CT_FOR
468  [PAREN_CLOSE]       )
468  [SPAREN_CLOSE]      )
469  [VBRACE_OPEN]       
469  [NEWLINE]           
470  [WORD]              indent_column
470  [ASSIGN]            +=
470  [WORD]              cpd
470  [MEMBER]            .
470  [WORD]              settings
470  [SQUARE_OPEN]       [
470  [WORD]              UO_indent_brace
470  [SQUARE_CLOSE]      ]
470  [MEMBER]            .
470  [WORD]              n
470  [SEMICOLON]         ;
470  [NEWLINE]           
471  [VBRACE_CLOSE]      
472  [BRACE_CLOSE]       }
472  [NEWLINE]           
473  [BRACE_CLOSE]       }
473  [NEWLINE]           
474  [ELSE]              else
474  [ELSEIF]            if
474  [SPAREN_OPEN]       (
474  [WORD]              pc
474  [MEMBER]            ->
474  [WORD]              type
474  [COMPARE]           ==
474  [WORD]              CT_VBRACE_OPEN
474  [SPAREN_CLOSE]      )
474  [NEWLINE]           
475  [BRACE_OPEN]        {
475  [NEWLINE]           
476  [TYPE]              frm
476  [MEMBER]            .
476  [WORD]              level
476  [INCDEC_AFTER]      ++
476  [SEMICOLON]         ;
476  [NEWLINE]           
477  [FUNC_CALL]         indent_pse_push
477  [FPAREN_OPEN]       (
477  [WORD]              frm
477  [COMMA]             ,
477  [WORD]              pc
477  [FPAREN_CLOSE]      )
477  [SEMICOLON]         ;
477  [NEWLINE]           
479  [TYPE]              frm
479  [MEMBER]            .
479  [WORD]              pse
479  [SQUARE_OPEN]       [
479  [WORD]              frm
479  [MEMBER]            .
479  [WORD]              pse_tos
479  [SQUARE_CLOSE]      ]
479  [MEMBER]            .
479  [WORD]              indent
479  [ASSIGN]            =
479  [WORD]              frm
479  [MEMBER]            .
479  [WORD]              pse
479  [SQUARE_OPEN]       [
479  [WORD]              frm
479  [MEMBER]            .
479  [WORD]              pse_tos
479  [ARITH]             -
479  [NUMBER]            1
479  [SQUARE_CLOSE]      ]
479  [MEMBER]            .
479  [WORD]              indent
479  [ARITH]             +
479  [WORD]              indent_size
479  [SEMICOLON]         ;
479  [NEWLINE]           
480  [TYPE]              frm
480  [MEMBER]            .
480  [WORD]              pse
480  [SQUARE_OPEN]       [
480  [WORD]              frm
480  [MEMBER]            .
480  [WORD]              pse_tos
480  [SQUARE_CLOSE]      ]
480  [MEMBER]            .
480  [WORD]              indent_tmp
480  [ASSIGN]            =
480  [WORD]              frm
480  [MEMBER]            .
480  [WORD]              pse
480  [SQUARE_OPEN]       [
480  [WORD]              frm
480  [MEMBER]            .
480  [WORD]              pse_tos
480  [SQUARE_CLOSE]      ]
480  [MEMBER]            .
480  [WORD]              indent
480  [SEMICOLON]         ;
480  [NEWLINE]           
482  [COMMENT]           /* Always indent on virtual braces */
482  [NEWLINE]           
483  [WORD]              indent_column
483  [ASSIGN]            =
483  [WORD]              frm
483  [MEMBER]            .
483  [WORD]              pse
483  [SQUARE_OPEN]       [
483  [WORD]              frm
483  [MEMBER]            .
483  [WORD]              pse_tos
483  [SQUARE_CLOSE]      ]
483  [MEMBER]            .
483  [WORD]              indent_tmp
483  [SEMICOLON]         ;
483  [NEWLINE]           
484  [BRACE_CLOSE]       }
484  [NEWLINE]           
485  [ELSE]              else
485  [ELSEIF]            if
485  [SPAREN_OPEN]       (
485  [WORD]              pc
485  [MEMBER]            ->
485  [WORD]              type
485  [COMPARE]           ==
485  [WORD]              CT_BRACE_OPEN
485  [SPAREN_CLOSE]      )
485  [NEWLINE]           
486  [BRACE_OPEN]        {
486  [NEWLINE]           
487  [TYPE]              frm
487  [MEMBER]            .
487  [WORD]              level
487  [INCDEC_AFTER]      ++
487  [SEMICOLON]         ;
487  [NEWLINE]           
488  [FUNC_CALL]         indent_pse_push
488  [FPAREN_OPEN]       (
488  [WORD]              frm
488  [COMMA]             ,
488  [WORD]              pc
488  [FPAREN_CLOSE]      )
488  [SEMICOLON]         ;
488  [NEWLINE]           
490  [IF]                if
490  [SPAREN_OPEN]       (
490  [WORD]              frm
490  [MEMBER]            .
490  [WORD]              paren_count
490  [COMPARE]           !=
490  [NUMBER]            0
490  [SPAREN_CLOSE]      )
491  [VBRACE_OPEN]       
491  [NEWLINE]           
492  [COMMENT]           /* We are inside ({ ... }) -- indent one tab from the paren */
492  [NEWLINE]           
493  [TYPE]              frm
493  [MEMBER]            .
493  [WORD]              pse
493  [SQUARE_OPEN]       [
493  [WORD]              frm
493  [MEMBER]            .
493  [WORD]              pse_tos
493  [SQUARE_CLOSE]      ]
493  [MEMBER]            .
493  [WORD]              indent
493  [ASSIGN]            =
493  [WORD]              frm
493  [MEMBER]            .
493  [WORD]              pse
493  [SQUARE_OPEN]       [
493  [WORD]              frm
493  [MEMBER]            .
493  [WORD]              pse_tos
493  [ARITH]             -
493  [NUMBER]            1
493  [SQUARE_CLOSE]      ]
493  [MEMBER]            .
493  [WORD]              indent_tmp
493  [ARITH]             +
493  [WORD]              indent_size
493  [SEMICOLON]         ;
493  [NEWLINE]           
494  [VBRACE_CLOSE]      
495  [ELSE]              else
495  [NEWLINE]           
496  [BRACE_OPEN]        {
496  [NEWLINE]           
497  [COMMENT]           /* Use the prev indent level + indent_size. */
497  [NEWLINE]           
498  [TYPE]              frm
498  [MEMBER]            .
498  [WORD]              pse
498  [SQUARE_OPEN]       [
498  [WORD]              frm
498  [MEMBER]            .
498  [WORD]              pse_tos
498  [SQUARE_CLOSE]      ]
498  [MEMBER]            .
498  [WORD]              indent
498  [ASSIGN]            =
498  [WORD]              frm
498  [MEMBER]            .
498  [WORD]              pse
498  [SQUARE_OPEN]       [
498  [WORD]              frm
498  [MEMBER]            .
498  [WORD]              pse_tos
498  [ARITH]             -
498  [NUMBER]            1
498  [SQUARE_CLOSE]      ]
498  [MEMBER]            .
498  [WORD]              indent
498  [ARITH]             +
498  [WORD]              indent_size
498  [SEMICOLON]         ;
498  [NEWLINE]           
500  [COMMENT]           /* If this brace is part of a statement, bump it out by indent_brace */
500  [NEWLINE]           
501  [IF]                if
501  [SPAREN_OPEN]       (
501  [PAREN_OPEN]        (
501  [WORD]              pc
501  [MEMBER]            ->
501  [WORD]              parent_type
501  [COMPARE]           ==
501  [WORD]              CT_IF
501  [PAREN_CLOSE]       )
501  [BOOL]              ||
501  [NEWLINE]           
502  [PAREN_OPEN]        (
502  [WORD]              pc
502  [MEMBER]            ->
502  [WORD]              parent_type
502  [COMPARE]           ==
502  [WORD]              CT_ELSE
502  [PAREN_CLOSE]       )
502  [BOOL]              ||
502  [NEWLINE]           
503  [PAREN_OPEN]        (
503  [WORD]              pc
503  [MEMBER]            ->
503  [WORD]              parent_type
503  [COMPARE]           ==
503  [WORD]              CT_ELSEIF
503  [PAREN_CLOSE]       )
503  [BOOL]              ||
503  [NEWLINE]           
504  [PAREN_OPEN]        (
504  [WORD]              pc
504  [MEMBER]            ->
504  [WORD]              parent_type
504  [COMPARE]           ==
504  [WORD]              CT_DO
504  [PAREN_CLOSE]       )
504  [BOOL]              ||
504  [NEWLINE]           
505  [PAREN_OPEN]        (
505  [WORD]              pc
505  [MEMBER]            ->
505  [WORD]              parent_type
505  [COMPARE]           ==
505  [WORD]              CT_WHILE
505  [PAREN_CLOSE]       )
505  [BOOL]              ||
505  [NEWLINE]           
506  [PAREN_OPEN]        (
506  [WORD]              pc
506  [MEMBER]            ->
506  [WORD]              parent_type
506  [COMPARE]           ==
506  [WORD]              CT_SWITCH
506  [PAREN_CLOSE]       )
506  [BOOL]              ||
506  [NEWLINE]           
507  [PAREN_OPEN]        (
507  [WORD]              pc
507  [MEMBER]            ->
507  [WORD]              parent_type
507  [COMPARE]           ==
507  [WORD]              CT_FOR
507  [PAREN_CLOSE]       )
507  [SPAREN_CLOSE]      )
507  [NEWLINE]           
508  [BRACE_OPEN]        {
508  [NEWLINE]           
509  [IF]                if
509  [SPAREN_OPEN]       (
509  [WORD]              parent_token_indent
509  [COMPARE]           !=
509  [NUMBER]            0
509  [SPAREN_CLOSE]      )
510  [VBRACE_OPEN]       
510  [NEWLINE]           
511  [TYPE]              frm
511  [MEMBER]            .
511  [WORD]              pse
511  [SQUARE_OPEN]       [
511  [WORD]              frm
511  [MEMBER]            .
511  [WORD]              pse_tos
511  [SQUARE_CLOSE]      ]
511  [MEMBER]            .
511  [WORD]              indent
511  [ASSIGN]            +=
511  [WORD]              parent_token_indent
511  [ARITH]             -
511  [WORD]              indent_size
511  [SEMICOLON]         ;
511  [NEWLINE]           
512  [VBRACE_CLOSE]      
513  [ELSE]              else
513  [NEWLINE]           
514  [BRACE_OPEN]        {
514  [NEWLINE]           
515  [TYPE]              frm
515  [MEMBER]            .
515  [WORD]              pse
515  [SQUARE_OPEN]       [
515  [WORD]              frm
515  [MEMBER]            .
515  [WORD]              pse_tos
515  [SQUARE_CLOSE]      ]
515  [MEMBER]            .
515  [WORD]              indent
515  [ASSIGN]            +=
515  [WORD]              cpd
515  [MEMBER]            .
515  [WORD]              settings
515  [SQUARE_OPEN]       [
515  [WORD]              UO_indent_brace
515  [SQUARE_CLOSE]      ]
515  [MEMBER]            .
515  [WORD]              n
515  [SEMICOLON]         ;
515  [NEWLINE]           
516  [WORD]              indent_column
516  [ASSIGN]            +=
516  [WORD]              cpd
516  [MEMBER]            .
516  [WORD]              settings
516  [SQUARE_OPEN]       [
516  [WORD]              UO_indent_brace
516  [SQUARE_CLOSE]      ]
516  [MEMBER]            .
516  [WORD]              n
516  [SEMICOLON]         ;
516  [NEWLINE]           
517  [BRACE_CLOSE]       }
517  [NEWLINE]           
518  [BRACE_CLOSE]       }
518  [NEWLINE]           
519  [ELSE]              else
519  [ELSEIF]            if
519  [SPAREN_OPEN]       (
519  [WORD]              pc
519  [MEMBER]            ->
519  [WORD]              parent_type
519  [COMPARE]           ==
519  [WORD]              CT_CASE
519  [SPAREN_CLOSE]      )
519  [NEWLINE]           
520  [BRACE_OPEN]        {
520  [NEWLINE]           
521  [COMMENT]           /* The indent_case_brace setting affects the parent CT_CASE */
521  [NEWLINE]           
522  [TYPE]              frm
522  [MEMBER]            .
522  [WORD]              pse
522  [SQUARE_OPEN]       [
522  [WORD]              frm
522  [MEMBER]            .
522  [WORD]              pse_tos
522  [SQUARE_CLOSE]      ]
522  [MEMBER]            .
522  [WORD]              indent_tmp
522  [ASSIGN]            +=
522  [WORD]              cpd
522  [MEMBER]            .
522  [WORD]              settings
522  [SQUARE_OPEN]       [
522  [WORD]              UO_indent_case_brace
522  [SQUARE_CLOSE]      ]
522  [MEMBER]            .
522  [WORD]              n
522  [SEMICOLON]         ;
522  [NEWLINE]           
523  [TYPE]              frm
523  [MEMBER]            .
523  [WORD]              pse
523  [SQUARE_OPEN]       [
523  [WORD]              frm
523  [MEMBER]            .
523  [WORD]              pse_tos
523  [SQUARE_CLOSE]      ]
523  [MEMBER]            .
523  [WORD]              indent
523  [ASSIGN]            +=
523  [WORD]              cpd
523  [MEMBER]            .
523  [WORD]              settings
523  [SQUARE_OPEN]       [
523  [WORD]              UO_indent_case_brace
523  [SQUARE_CLOSE]      ]
523  [MEMBER]            .
523  [WORD]              n
523  [SEMICOLON]         ;
523  [NEWLINE]           
524  [BRACE_CLOSE]       }
524  [NEWLINE]           
525  [ELSE]              else
525  [ELSEIF]            if
525  [SPAREN_OPEN]       (
525  [PAREN_OPEN]        (
525  [WORD]              pc
525  [MEMBER]            ->
525  [WORD]              parent_type
525  [COMPARE]           ==
525  [WORD]              CT_CLASS
525  [PAREN_CLOSE]       )
525  [BOOL]              &&
525  [NOT]               !
525  [WORD]              cpd
525  [MEMBER]            .
525  [WORD]              settings
525  [SQUARE_OPEN]       [
525  [WORD]              UO_indent_class
525  [SQUARE_CLOSE]      ]
525  [MEMBER]            .
525  [WORD]              b
525  [SPAREN_CLOSE]      )
526  [VBRACE_OPEN]       
526  [NEWLINE]           
527  [TYPE]              frm
527  [MEMBER]            .
527  [WORD]              pse
527  [SQUARE_OPEN]       [
527  [WORD]              frm
527  [MEMBER]            .
527  [WORD]              pse_tos
527  [SQUARE_CLOSE]      ]
527  [MEMBER]            .
527  [WORD]              indent
527  [ASSIGN]            -=
527  [WORD]              indent_size
527  [SEMICOLON]         ;
527  [NEWLINE]           
528  [VBRACE_CLOSE]      
529  [ELSE]              else
529  [ELSEIF]            if
529  [SPAREN_OPEN]       (
529  [PAREN_OPEN]        (
529  [WORD]              pc
529  [MEMBER]            ->
529  [WORD]              parent_type
529  [COMPARE]           ==
529  [WORD]              CT_NAMESPACE
529  [PAREN_CLOSE]       )
529  [BOOL]              &&
529  [NOT]               !
529  [WORD]              cpd
529  [MEMBER]            .
529  [WORD]              settings
529  [SQUARE_OPEN]       [
529  [WORD]              UO_indent_namespace
529  [SQUARE_CLOSE]      ]
529  [MEMBER]            .
529  [WORD]              b
529  [SPAREN_CLOSE]      )
530  [VBRACE_OPEN]       
530  [NEWLINE]           
531  [TYPE]              frm
531  [MEMBER]            .
531  [WORD]              pse
531  [SQUARE_OPEN]       [
531  [WORD]              frm
531  [MEMBER]            .
531  [WORD]              pse_tos
531  [SQUARE_CLOSE]      ]
531  [MEMBER]            .
531  [WORD]              indent
531  [ASSIGN]            -=
531  [WORD]              indent_size
531  [SEMICOLON]         ;
531  [NEWLINE]           
532  [VBRACE_CLOSE]      
533  [BRACE_CLOSE]       }
533  [NEWLINE]           
535  [IF]                if
535  [SPAREN_OPEN]       (
535  [PAREN_OPEN]        (
535  [WORD]              pc
535  [MEMBER]            ->
535  [WORD]              flags
535  [ARITH]             &
535  [WORD]              PCF_DONT_INDENT
535  [PAREN_CLOSE]       )
535  [COMPARE]           !=
535  [NUMBER]            0
535  [SPAREN_CLOSE]      )
535  [NEWLINE]           
536  [BRACE_OPEN]        {
536  [NEWLINE]           
537  [TYPE]              frm
537  [MEMBER]            .
537  [WORD]              pse
537  [SQUARE_OPEN]       [
537  [WORD]              frm
537  [MEMBER]            .
537  [WORD]              pse_tos
537  [SQUARE_CLOSE]      ]
537  [MEMBER]            .
537  [WORD]              indent
537  [ASSIGN]            =
537  [WORD]              pc
537  [MEMBER]            ->
537  [WORD]              column
537  [SEMICOLON]         ;
537  [NEWLINE]           
538  [WORD]              indent_column
538  [ASSIGN]            =
538  [WORD]              pc
538  [MEMBER]            ->
538  [WORD]              column
538  [SEMICOLON]         ;
538  [NEWLINE]           
539  [BRACE_CLOSE]       }
539  [NEWLINE]           
540  [ELSE]              else
540  [NEWLINE]           
541  [BRACE_OPEN]        {
541  [NEWLINE]           
542  [COMMENT_MULTI]     /**␤             * If there isn't a newline between the open brace and the next␤             * item, just indent to wherever the next token is.␤             * This covers this sort of stuff:␤             * { a++;␤             *   b--; };␤             */
548  [NEWLINE]           
549  [WORD]              next
549  [ASSIGN]            =
549  [FUNC_CALL]         chunk_get_next_ncnl
549  [FPAREN_OPEN]       (
549  [WORD]              pc
549  [FPAREN_CLOSE]      )
549  [SEMICOLON]         ;
549  [NEWLINE]           
550  [IF]                if
550  [SPAREN_OPEN]       (
550  [NOT]               !
550  [FUNC_CALL]         chunk_is_newline_between
550  [FPAREN_OPEN]       (
550  [WORD]              pc
550  [COMMA]             ,
550  [WORD]              next
550  [FPAREN_CLOSE]      )
550  [SPAREN_CLOSE]      )
551  [VBRACE_OPEN]       
551  [NEWLINE]           
552  [TYPE]              frm
552  [MEMBER]            .
552  [WORD]              pse
552  [SQUARE_OPEN]       [
552  [WORD]              frm
552  [MEMBER]            .
552  [WORD]              pse_tos
552  [SQUARE_CLOSE]      ]
552  [MEMBER]            .
552  [WORD]              indent
552  [ASSIGN]            =
552  [WORD]              next
552  [MEMBER]            ->
552  [WORD]              column
552  [SEMICOLON]         ;
552  [NEWLINE]           
553  [VBRACE_CLOSE]      
553  [NEWLINE]           
554  [TYPE]              frm
554  [MEMBER]            .
554  [WORD]              pse
554  [SQUARE_OPEN]       [
554  [WORD]              frm
554  [MEMBER]            .
554  [WORD]              pse_tos
554  [SQUARE_CLOSE]      ]
554  [MEMBER]            .
554  [WORD]              indent_tmp
554  [ASSIGN]            =
554  [WORD]              frm
554  [MEMBER]            .
554  [WORD]              pse
554  [SQUARE_OPEN]       [
554  [WORD]              frm
554  [MEMBER]            .
554  [WORD]              pse_tos
554  [SQUARE_CLOSE]      ]
554  [MEMBER]            .
554  [WORD]              indent
554  [SEMICOLON]         ;
554  [NEWLINE]           
555  [TYPE]              frm
555  [MEMBER]            .
555  [WORD]              pse
555  [SQUARE_OPEN]       [
555  [WORD]              frm
555  [MEMBER]            .
555  [WORD]              pse_tos
555  [SQUARE_CLOSE]      ]
555  [MEMBER]            .
555  [WORD]              open_line
555  [ASSIGN]            =
555  [WORD]              pc
555  [MEMBER]            ->
555  [WORD]              orig_line
555  [SEMICOLON]         ;
555  [NEWLINE]           
557  [COMMENT]           /* Update the indent_column if needed */
557  [NEWLINE]           
558  [IF]                if
558  [SPAREN_OPEN]       (
558  [WORD]              cpd
558  [MEMBER]            .
558  [WORD]              settings
558  [SQUARE_OPEN]       [
558  [WORD]              UO_indent_braces
558  [SQUARE_CLOSE]      ]
558  [MEMBER]            .
558  [WORD]              n
558  [BOOL]              ||
558  [NEWLINE]           
559  [PAREN_OPEN]        (
559  [WORD]              parent_token_indent
559  [COMPARE]           !=
559  [NUMBER]            0
559  [PAREN_CLOSE]       )
559  [SPAREN_CLOSE]      )
560  [VBRACE_OPEN]       
560  [NEWLINE]           
561  [WORD]              indent_column
561  [ASSIGN]            =
561  [WORD]              frm
561  [MEMBER]            .
561  [WORD]              pse
561  [SQUARE_OPEN]       [
561  [WORD]              frm
561  [MEMBER]            .
561  [WORD]              pse_tos
561  [SQUARE_CLOSE]      ]
561  [MEMBER]            .
561  [WORD]              indent_tmp
561  [SEMICOLON]         ;
561  [NEWLINE]           
562  [VBRACE_CLOSE]      
563  [BRACE_CLOSE]       }
563  [NEWLINE]           
564  [BRACE_CLOSE]       }
564  [NEWLINE]           
565  [ELSE]              else
565  [ELSEIF]            if
565  [SPAREN_OPEN]       (
565  [WORD]              pc
565  [MEMBER]            ->
565  [WORD]              type
565  [COMPARE]           ==
565  [WORD]              CT_CASE
565  [SPAREN_CLOSE]      )
565  [NEWLINE]           
566  [BRACE_OPEN]        {
566  [NEWLINE]           
567  [COMMENT]           /* Start a case - indent UO_indent_switch_case from the switch level */
567  [NEWLINE]           
568  [WORD]              tmp
568  [ASSIGN]            =
568  [WORD]              frm
568  [MEMBER]            .
568  [WORD]              pse
568  [SQUARE_OPEN]       [
568  [WORD]              frm
568  [MEMBER]            .
568  [WORD]              pse_tos
568  [SQUARE_CLOSE]      ]
568  [MEMBER]            .
568  [WORD]              indent
568  [ARITH]             +
568  [WORD]              cpd
568  [MEMBER]            .
568  [WORD]              settings
568  [SQUARE_OPEN]       [
568  [WORD]              UO_indent_switch_case
568  [SQUARE_CLOSE]      ]
568  [MEMBER]            .
568  [WORD]              n
568  [SEMICOLON]         ;
568  [NEWLINE]           
570  [FUNC_CALL]         indent_pse_push
570  [FPAREN_OPEN]       (
570  [WORD]              frm
570  [COMMA]             ,
570  [WORD]              pc
570  [FPAREN_CLOSE]      )
570  [SEMICOLON]         ;
570  [NEWLINE]           
572  [TYPE]              frm
572  [MEMBER]            .
572  [WORD]              pse
572  [SQUARE_OPEN]       [
572  [WORD]              frm
572  [MEMBER]            .
572  [WORD]              pse_tos
572  [SQUARE_CLOSE]      ]
572  [MEMBER]            .
572  [WORD]              indent
572  [ASSIGN]            =
572  [WORD]              tmp
572  [SEMICOLON]         ;
572  [NEWLINE]           
573  [TYPE]              frm
573  [MEMBER]            .
573  [WORD]              pse
573  [SQUARE_OPEN]       [
573  [WORD]              frm
573  [MEMBER]            .
573  [WORD]              pse_tos
573  [SQUARE_CLOSE]      ]
573  [MEMBER]            .
573  [WORD]              indent_tmp
573  [ASSIGN]            =
573  [WORD]              tmp
573  [ARITH]             -
573  [WORD]              indent_size
573  [SEMICOLON]         ;
573  [NEWLINE]           
575  [COMMENT]           /* Always set on case statements */
575  [NEWLINE]           
576  [WORD]              indent_column
576  [ASSIGN]            =
576  [WORD]              frm
576  [MEMBER]            .
576  [WORD]              pse
576  [SQUARE_OPEN]       [
576  [WORD]              frm
576  [MEMBER]            .
576  [WORD]              pse_tos
576  [SQUARE_CLOSE]      ]
576  [MEMBER]            .
576  [WORD]              indent_tmp
576  [SEMICOLON]         ;
576  [NEWLINE]           
577  [BRACE_CLOSE]       }
577  [NEWLINE]           
578  [ELSE]              else
578  [ELSEIF]            if
578  [SPAREN_OPEN]       (
578  [WORD]              pc
578  [MEMBER]            ->
578  [WORD]              type
578  [COMPARE]           ==
578  [WORD]              CT_LABEL
578  [SPAREN_CLOSE]      )
578  [NEWLINE]           
579  [BRACE_OPEN]        {
579  [NEWLINE]           
580  [COMMENT]           /* Labels get sent to the left or backed up */
580  [NEWLINE]           
581  [IF]                if
581  [SPAREN_OPEN]       (
581  [WORD]              cpd
581  [MEMBER]            .
581  [WORD]              settings
581  [SQUARE_OPEN]       [
581  [WORD]              UO_indent_label
581  [SQUARE_CLOSE]      ]
581  [MEMBER]            .
581  [WORD]              n
581  [COMPARE]           >
581  [NUMBER]            0
581  [SPAREN_CLOSE]      )
582  [VBRACE_OPEN]       
582  [NEWLINE]           
583  [WORD]              indent_column
583  [ASSIGN]            =
583  [WORD]              cpd
583  [MEMBER]            .
583  [WORD]              settings
583  [SQUARE_OPEN]       [
583  [WORD]              UO_indent_label
583  [SQUARE_CLOSE]      ]
583  [MEMBER]            .
583  [WORD]              n
583  [SEMICOLON]         ;
583  [NEWLINE]           
584  [VBRACE_CLOSE]      
585  [ELSE]              else
586  [VBRACE_OPEN]       
586  [NEWLINE]           
587  [WORD]              indent_column
587  [ASSIGN]            =
587  [WORD]              frm
587  [MEMBER]            .
587  [WORD]              pse
587  [SQUARE_OPEN]       [
587  [WORD]              frm
587  [MEMBER]            .
587  [WORD]              pse_tos
587  [SQUARE_CLOSE]      ]
587  [MEMBER]            .
587  [WORD]              indent
587  [ARITH]             +
587  [NEWLINE]           
588  [WORD]              cpd
588  [MEMBER]            .
588  [WORD]              settings
588  [SQUARE_OPEN]       [
588  [WORD]              UO_indent_label
588  [SQUARE_CLOSE]      ]
588  [MEMBER]            .
588  [WORD]              n
588  [SEMICOLON]         ;
588  [NEWLINE]           
589  [VBRACE_CLOSE]      
590  [BRACE_CLOSE]       }
590  [NEWLINE]           
591  [ELSE]              else
591  [ELSEIF]            if
591  [SPAREN_OPEN]       (
591  [WORD]              pc
591  [MEMBER]            ->
591  [WORD]              type
591  [COMPARE]           ==
591  [WORD]              CT_CLASS_COLON
591  [SPAREN_CLOSE]      )
591  [NEWLINE]           
592  [BRACE_OPEN]        {
592  [NEWLINE]           
593  [COMMENT]           /* just indent one level */
593  [NEWLINE]           
594  [FUNC_CALL]         indent_pse_push
594  [FPAREN_OPEN]       (
594  [WORD]              frm
594  [COMMA]             ,
594  [WORD]              pc
594  [FPAREN_CLOSE]      )
594  [SEMICOLON]         ;
594  [NEWLINE]           
595  [TYPE]              frm
595  [MEMBER]            .
595  [WORD]              pse
595  [SQUARE_OPEN]       [
595  [WORD]              frm
595  [MEMBER]            .
595  [WORD]              pse_tos
595  [SQUARE_CLOSE]      ]
595  [MEMBER]            .
595  [WORD]              indent
595  [ASSIGN]            =
595  [WORD]              frm
595  [MEMBER]            .
595  [WORD]              pse
595  [SQUARE_OPEN]       [
595  [WORD]              frm
595  [MEMBER]            .
595  [WORD]              pse_tos
595  [ARITH]             -
595  [NUMBER]            1
595  [SQUARE_CLOSE]      ]
595  [MEMBER]            .
595  [WORD]              indent_tmp
595  [ARITH]             +
595  [WORD]              indent_size
595  [SEMICOLON]         ;
595  [NEWLINE]           
596  [TYPE]              frm
596  [MEMBER]            .
596  [WORD]              pse
596  [SQUARE_OPEN]       [
596  [WORD]              frm
596  [MEMBER]            .
596  [WORD]              pse_tos
596  [SQUARE_CLOSE]      ]
596  [MEMBER]            .
596  [WORD]              indent_tmp
596  [ASSIGN]            =
596  [WORD]              frm
596  [MEMBER]            .
596  [WORD]              pse
596  [SQUARE_OPEN]       [
596  [WORD]              frm
596  [MEMBER]            .
596  [WORD]              pse_tos
596  [SQUARE_CLOSE]      ]
596  [MEMBER]            .
596  [WORD]              indent
596  [SEMICOLON]         ;
596  [NEWLINE]           
598  [WORD]              indent_column
598  [ASSIGN]            =
598  [WORD]              frm
598  [MEMBER]            .
598  [WORD]              pse
598  [SQUARE_OPEN]       [
598  [WORD]              frm
598  [MEMBER]            .
598  [WORD]              pse_tos
598  [SQUARE_CLOSE]      ]
598  [MEMBER]            .
598  [WORD]              indent_tmp
598  [SEMICOLON]         ;
598  [NEWLINE]           
600  [IF]                if
600  [SPAREN_OPEN]       (
600  [WORD]              cpd
600  [MEMBER]            .
600  [WORD]              settings
600  [SQUARE_OPEN]       [
600  [WORD]              UO_indent_class_colon
600  [SQUARE_CLOSE]      ]
600  [MEMBER]            .
600  [WORD]              b
600  [SPAREN_CLOSE]      )
600  [NEWLINE]           
601  [BRACE_OPEN]        {
601  [NEWLINE]           
602  [WORD]              prev
602  [ASSIGN]            =
602  [FUNC_CALL]         chunk_get_prev
602  [FPAREN_OPEN]       (
602  [WORD]              pc
602  [FPAREN_CLOSE]      )
602  [SEMICOLON]         ;
602  [NEWLINE]           
603  [IF]                if
603  [SPAREN_OPEN]       (
603  [FUNC_CALL]         chunk_is_newline
603  [FPAREN_OPEN]       (
603  [WORD]              prev
603  [FPAREN_CLOSE]      )
603  [SPAREN_CLOSE]      )
604  [VBRACE_OPEN]       
604  [NEWLINE]           
605  [TYPE]              frm
605  [MEMBER]            .
605  [WORD]              pse
605  [SQUARE_OPEN]       [
605  [WORD]              frm
605  [MEMBER]            .
605  [WORD]              pse_tos
605  [SQUARE_CLOSE]      ]
605  [MEMBER]            .
605  [WORD]              indent
605  [ASSIGN]            +=
605  [NUMBER]            2
605  [SEMICOLON]         ;
605  [NEWLINE]           
606  [COMMENT]           /* don't change indent of current line */
606  [NEWLINE]           
607  [VBRACE_CLOSE]      
608  [BRACE_CLOSE]       }
608  [NEWLINE]           
609  [BRACE_CLOSE]       }
609  [NEWLINE]           
610  [ELSE]              else
610  [ELSEIF]            if
610  [SPAREN_OPEN]       (
610  [PAREN_OPEN]        (
610  [WORD]              pc
610  [MEMBER]            ->
610  [WORD]              type
610  [COMPARE]           ==
610  [WORD]              CT_PAREN_OPEN
610  [PAREN_CLOSE]       )
610  [BOOL]              ||
610  [NEWLINE]           
611  [PAREN_OPEN]        (
611  [WORD]              pc
611  [MEMBER]            ->
611  [WORD]              type
611  [COMPARE]           ==
611  [WORD]              CT_SPAREN_OPEN
611  [PAREN_CLOSE]       )
611  [BOOL]              ||
611  [NEWLINE]           
612  [PAREN_OPEN]        (
612  [WORD]              pc
612  [MEMBER]            ->
612  [WORD]              type
612  [COMPARE]           ==
612  [WORD]              CT_FPAREN_OPEN
612  [PAREN_CLOSE]       )
612  [BOOL]              ||
612  [NEWLINE]           
613  [PAREN_OPEN]        (
613  [WORD]              pc
613  [MEMBER]            ->
613  [WORD]              type
613  [COMPARE]           ==
613  [WORD]              CT_SQUARE_OPEN
613  [PAREN_CLOSE]       )
613  [BOOL]              ||
613  [NEWLINE]           
614  [PAREN_OPEN]        (
614  [WORD]              pc
614  [MEMBER]            ->
614  [WORD]              type
614  [COMPARE]           ==
614  [WORD]              CT_ANGLE_OPEN
614  [PAREN_CLOSE]       )
614  [SPAREN_CLOSE]      )
614  [NEWLINE]           
615  [BRACE_OPEN]        {
615  [NEWLINE]           
616  [COMMENT]           /* Open parens and squares - never update indent_column */
616  [NEWLINE]           
617  [FUNC_CALL]         indent_pse_push
617  [FPAREN_OPEN]       (
617  [WORD]              frm
617  [COMMA]             ,
617  [WORD]              pc
617  [FPAREN_CLOSE]      )
617  [SEMICOLON]         ;
617  [NEWLINE]           
618  [TYPE]              frm
618  [MEMBER]            .
618  [WORD]              pse
618  [SQUARE_OPEN]       [
618  [WORD]              frm
618  [MEMBER]            .
618  [WORD]              pse_tos
618  [SQUARE_CLOSE]      ]
618  [MEMBER]            .
618  [WORD]              indent
618  [ASSIGN]            =
618  [WORD]              pc
618  [MEMBER]            ->
618  [WORD]              column
618  [ARITH]             +
618  [WORD]              pc
618  [MEMBER]            ->
618  [WORD]              len
618  [SEMICOLON]         ;
618  [NEWLINE]           
620  [IF]                if
620  [SPAREN_OPEN]       (
620  [WORD]              cpd
620  [MEMBER]            .
620  [WORD]              settings
620  [SQUARE_OPEN]       [
620  [WORD]              UO_indent_func_call_param
620  [SQUARE_CLOSE]      ]
620  [MEMBER]            .
620  [WORD]              b
620  [BOOL]              &&
620  [NEWLINE]           
621  [PAREN_OPEN]        (
621  [WORD]              pc
621  [MEMBER]            ->
621  [WORD]              type
621  [COMPARE]           ==
621  [WORD]              CT_FPAREN_OPEN
621  [PAREN_CLOSE]       )
621  [BOOL]              &&
621  [NEWLINE]           
622  [PAREN_OPEN]        (
622  [WORD]              pc
622  [MEMBER]            ->
622  [WORD]              parent_type
622  [COMPARE]           ==
622  [WORD]              CT_FUNC_CALL
622  [PAREN_CLOSE]       )
622  [SPAREN_CLOSE]      )
623  [VBRACE_OPEN]       
623  [NEWLINE]           
624  [TYPE]              frm
624  [MEMBER]            .
624  [WORD]              pse
624  [SQUARE_OPEN]       [
624  [WORD]              frm
624  [MEMBER]            .
624  [WORD]              pse_tos
624  [SQUARE_CLOSE]      ]
624  [MEMBER]            .
624  [WORD]              indent
624  [ASSIGN]            =
624  [WORD]              frm
624  [MEMBER]            .
624  [WORD]              pse
624  [SQUARE_OPEN]       [
624  [WORD]              frm
624  [MEMBER]            .
624  [WORD]              pse_tos
624  [ARITH]             -
624  [NUMBER]            1
624  [SQUARE_CLOSE]      ]
624  [MEMBER]            .
624  [WORD]              indent
624  [ARITH]             +
624  [WORD]              indent_size
624  [SEMICOLON]         ;
625  [VBRACE_CLOSE]      
625  [NEWLINE]           
627  [IF]                if
627  [SPAREN_OPEN]       (
627  [PAREN_OPEN]        (
627  [FUNC_CALL]         chunk_is_str
627  [FPAREN_OPEN]       (
627  [WORD]              pc
627  [COMMA]             ,
627  [STRING]            "("
627  [COMMA]             ,
627  [NUMBER]            1
627  [FPAREN_CLOSE]      )
627  [BOOL]              &&
627  [NOT]               !
627  [WORD]              cpd
627  [MEMBER]            .
627  [WORD]              settings
627  [SQUARE_OPEN]       [
627  [WORD]              UO_indent_paren_nl
627  [SQUARE_CLOSE]      ]
627  [MEMBER]            .
627  [WORD]              b
627  [PAREN_CLOSE]       )
627  [BOOL]              ||
627  [NEWLINE]           
628  [PAREN_OPEN]        (
628  [FUNC_CALL]         chunk_is_str
628  [FPAREN_OPEN]       (
628  [WORD]              pc
628  [COMMA]             ,
628  [STRING]            "["
628  [COMMA]             ,
628  [NUMBER]            1
628  [FPAREN_CLOSE]      )
628  [BOOL]              &&
628  [NOT]               !
628  [WORD]              cpd
628  [MEMBER]            .
628  [WORD]              settings
628  [SQUARE_OPEN]       [
628  [WORD]              UO_indent_square_nl
628  [SQUARE_CLOSE]      ]
628  [MEMBER]            .
628  [WORD]              b
628  [PAREN_CLOSE]       )
628  [SPAREN_CLOSE]      )
628  [NEWLINE]           
629  [BRACE_OPEN]        {
629  [NEWLINE]           
630  [WORD]              next
630  [ASSIGN]            =
630  [FUNC_CALL]         chunk_get_next_nc
630  [FPAREN_OPEN]       (
630  [WORD]              pc
630  [FPAREN_CLOSE]      )
630  [SEMICOLON]         ;
630  [NEWLINE]           
631  [IF]                if
631  [SPAREN_OPEN]       (
631  [FUNC_CALL]         chunk_is_newline
631  [FPAREN_OPEN]       (
631  [WORD]              next
631  [FPAREN_CLOSE]      )
631  [SPAREN_CLOSE]      )
631  [NEWLINE]           
632  [BRACE_OPEN]        {
632  [NEWLINE]           
633  [TYPE]              int
633  [WORD]              sub
633  [ASSIGN]            =
633  [NUMBER]            1
633  [SEMICOLON]         ;
633  [NEWLINE]           
634  [IF]                if
634  [SPAREN_OPEN]       (
634  [WORD]              frm
634  [MEMBER]            .
634  [WORD]              pse
634  [SQUARE_OPEN]       [
634  [WORD]              frm
634  [MEMBER]            .
634  [WORD]              pse_tos
634  [ARITH]             -
634  [NUMBER]            1
634  [SQUARE_CLOSE]      ]
634  [MEMBER]            .
634  [WORD]              type
634  [COMPARE]           ==
634  [WORD]              CT_ASSIGN
634  [SPAREN_CLOSE]      )
635  [VBRACE_OPEN]       
635  [NEWLINE]           
636  [WORD]              sub
636  [ASSIGN]            =
636  [NUMBER]            2
636  [SEMICOLON]         ;
636  [NEWLINE]           
637  [VBRACE_CLOSE]      
637  [NEWLINE]           
638  [TYPE]              frm
638  [MEMBER]            .
638  [WORD]              pse
638  [SQUARE_OPEN]       [
638  [WORD]              frm
638  [MEMBER]            .
638  [WORD]              pse_tos
638  [SQUARE_CLOSE]      ]
638  [MEMBER]            .
638  [WORD]              indent
638  [ASSIGN]            =
638  [WORD]              frm
638  [MEMBER]            .
638  [WORD]              pse
638  [SQUARE_OPEN]       [
638  [WORD]              frm
638  [MEMBER]            .
638  [WORD]              pse_tos
638  [ARITH]             -
638  [WORD]              sub
638  [SQUARE_CLOSE]      ]
638  [MEMBER]            .
638  [WORD]              indent
638  [ARITH]             +
638  [WORD]              indent_size
638  [SEMICOLON]         ;
638  [NEWLINE]           
639  [BRACE_CLOSE]       }
639  [NEWLINE]           
640  [BRACE_CLOSE]       }
640  [NEWLINE]           
641  [TYPE]              frm
641  [MEMBER]            .
641  [WORD]              pse
641  [SQUARE_OPEN]       [
641  [WORD]              frm
641  [MEMBER]            .
641  [WORD]              pse_tos
641  [SQUARE_CLOSE]      ]
641  [MEMBER]            .
641  [WORD]              indent_tmp
641  [ASSIGN]            =
641  [WORD]              frm
641  [MEMBER]            .
641  [WORD]              pse
641  [SQUARE_OPEN]       [
641  [WORD]              frm
641  [MEMBER]            .
641  [WORD]              pse_tos
641  [SQUARE_CLOSE]      ]
641  [MEMBER]            .
641  [WORD]              indent
641  [SEMICOLON]         ;
641  [NEWLINE]           
642  [TYPE]              frm
642  [MEMBER]            .
642  [WORD]              paren_count
642  [INCDEC_AFTER]      ++
642  [SEMICOLON]         ;
642  [NEWLINE]           
643  [BRACE_CLOSE]       }
643  [NEWLINE]           
644  [ELSE]              else
644  [ELSEIF]            if
644  [SPAREN_OPEN]       (
644  [WORD]              pc
644  [MEMBER]            ->
644  [WORD]              type
644  [COMPARE]           ==
644  [WORD]              CT_ASSIGN
644  [SPAREN_CLOSE]      )
644  [NEWLINE]           
645  [BRACE_OPEN]        {
645  [NEWLINE]           
646  [COMMENT_MULTI]     /**␤          * if there is a newline after the '=', just indent one level,␤          * otherwise align on the '='.␤          * Never update indent_column.␤          */
650  [NEWLINE]           
651  [WORD]              next
651  [ASSIGN]            =
651  [FUNC_CALL]         chunk_get_next
651  [FPAREN_OPEN]       (
651  [WORD]              pc
651  [FPAREN_CLOSE]      )
651  [SEMICOLON]         ;
651  [NEWLINE]           
652  [IF]                if
652  [SPAREN_OPEN]       (
652  [WORD]              next
652  [COMPARE]           !=
652  [WORD]              NULL
652  [SPAREN_CLOSE]      )
652  [NEWLINE]           
653  [BRACE_OPEN]        {
653  [NEWLINE]           
654  [FUNC_CALL]         indent_pse_push
654  [FPAREN_OPEN]       (
654  [WORD]              frm
654  [COMMA]             ,
654  [WORD]              pc
654  [FPAREN_CLOSE]      )
654  [SEMICOLON]         ;
654  [NEWLINE]           
655  [IF]                if
655  [SPAREN_OPEN]       (
655  [FUNC_CALL]         chunk_is_newline
655  [FPAREN_OPEN]       (
655  [WORD]              next
655  [FPAREN_CLOSE]      )
655  [SPAREN_CLOSE]      )
656  [VBRACE_OPEN]       
656  [NEWLINE]           
657  [TYPE]              frm
657  [MEMBER]            .
657  [WORD]              pse
657  [SQUARE_OPEN]       [
657  [WORD]              frm
657  [MEMBER]            .
657  [WORD]              pse_tos
657  [SQUARE_CLOSE]      ]
657  [MEMBER]            .
657  [WORD]              indent
657  [ASSIGN]            =
657  [WORD]              frm
657  [MEMBER]            .
657  [WORD]              pse
657  [SQUARE_OPEN]       [
657  [WORD]              frm
657  [MEMBER]            .
657  [WORD]              pse_tos
657  [ARITH]             -
657  [NUMBER]            1
657  [SQUARE_CLOSE]      ]
657  [MEMBER]            .
657  [WORD]              indent_tmp
657  [ARITH]             +
657  [WORD]              indent_size
657  [SEMICOLON]         ;
657  [NEWLINE]           
658  [VBRACE_CLOSE]      
659  [ELSE]              else
660  [VBRACE_OPEN]       
660  [NEWLINE]           
661  [TYPE]              frm
661  [MEMBER]            .
661  [WORD]              pse
661  [SQUARE_OPEN]       [
661  [WORD]              frm
661  [MEMBER]            .
661  [WORD]              pse_tos
661  [SQUARE_CLOSE]      ]
661  [MEMBER]            .
661  [WORD]              indent
661  [ASSIGN]            =
661  [WORD]              pc
661  [MEMBER]            ->
661  [WORD]              column
661  [ARITH]             +
661  [WORD]              pc
661  [MEMBER]            ->
661  [WORD]              len
661  [ARITH]             +
661  [NUMBER]            1
661  [SEMICOLON]         ;
661  [NEWLINE]           
662  [VBRACE_CLOSE]      
662  [NEWLINE]           
663  [TYPE]              frm
663  [MEMBER]            .
663  [WORD]              pse
663  [SQUARE_OPEN]       [
663  [WORD]              frm
663  [MEMBER]            .
663  [WORD]              pse_tos
663  [SQUARE_CLOSE]      ]
663  [MEMBER]            .
663  [WORD]              indent_tmp
663  [ASSIGN]            =
663  [WORD]              frm
663  [MEMBER]            .
663  [WORD]              pse
663  [SQUARE_OPEN]       [
663  [WORD]              frm
663  [MEMBER]            .
663  [WORD]              pse_tos
663  [SQUARE_CLOSE]      ]
663  [MEMBER]            .
663  [WORD]              indent
663  [SEMICOLON]         ;
663  [NEWLINE]           
664  [BRACE_CLOSE]       }
664  [NEWLINE]           
665  [BRACE_CLOSE]       }
665  [NEWLINE]           
666  [ELSE]              else
666  [ELSEIF]            if
666  [SPAREN_OPEN]       (
666  [WORD]              pc
666  [MEMBER]            ->
666  [WORD]              type
666  [COMPARE]           ==
666  [WORD]              CT_RETURN
666  [SPAREN_CLOSE]      )
666  [NEWLINE]           
667  [BRACE_OPEN]        {
667  [NEWLINE]           
668  [COMMENT]           /* don't count returns inside a () or [] */
668  [NEWLINE]           
669  [IF]                if
669  [SPAREN_OPEN]       (
669  [WORD]              pc
669  [MEMBER]            ->
669  [WORD]              level
669  [COMPARE]           ==
669  [WORD]              pc
669  [MEMBER]            ->
669  [WORD]              brace_level
669  [SPAREN_CLOSE]      )
669  [NEWLINE]           
670  [BRACE_OPEN]        {
670  [NEWLINE]           
671  [FUNC_CALL]         indent_pse_push
671  [FPAREN_OPEN]       (
671  [WORD]              frm
671  [COMMA]             ,
671  [WORD]              pc
671  [FPAREN_CLOSE]      )
671  [SEMICOLON]         ;
671  [NEWLINE]           
672  [TYPE]              frm
672  [MEMBER]            .
672  [WORD]              pse
672  [SQUARE_OPEN]       [
672  [WORD]              frm
672  [MEMBER]            .
672  [WORD]              pse_tos
672  [SQUARE_CLOSE]      ]
672  [MEMBER]            .
672  [WORD]              indent
672  [ASSIGN]            =
672  [WORD]              frm
672  [MEMBER]            .
672  [WORD]              pse
672  [SQUARE_OPEN]       [
672  [WORD]              frm
672  [MEMBER]            .
672  [WORD]              pse_tos
672  [ARITH]             -
672  [NUMBER]            1
672  [SQUARE_CLOSE]      ]
672  [MEMBER]            .
672  [WORD]              indent
672  [ARITH]             +
672  [WORD]              pc
672  [MEMBER]            ->
672  [WORD]              len
672  [ARITH]             +
672  [NUMBER]            1
672  [SEMICOLON]         ;
672  [NEWLINE]           
673  [TYPE]              frm
673  [MEMBER]            .
673  [WORD]              pse
673  [SQUARE_OPEN]       [
673  [WORD]              frm
673  [MEMBER]            .
673  [WORD]              pse_tos
673  [SQUARE_CLOSE]      ]
673  [MEMBER]            .
673  [WORD]              indent_tmp
673  [ASSIGN]            =
673  [WORD]              frm
673  [MEMBER]            .
673  [WORD]              pse
673  [SQUARE_OPEN]       [
673  [WORD]              frm
673  [MEMBER]            .
673  [WORD]              pse_tos
673  [ARITH]             -
673  [NUMBER]            1
673  [SQUARE_CLOSE]      ]
673  [MEMBER]            .
673  [WORD]              indent
673  [SEMICOLON]         ;
673  [NEWLINE]           
674  [BRACE_CLOSE]       }
674  [NEWLINE]           
675  [BRACE_CLOSE]       }
675  [NEWLINE]           
676  [ELSE]              else
676  [ELSEIF]            if
676  [SPAREN_OPEN]       (
676  [FUNC_CALL]         chunk_is_str
676  [FPAREN_OPEN]       (
676  [WORD]              pc
676  [COMMA]             ,
676  [STRING]            "<<"
676  [COMMA]             ,
676  [NUMBER]            2
676  [FPAREN_CLOSE]      )
676  [SPAREN_CLOSE]      )
676  [NEWLINE]           
677  [BRACE_OPEN]        {
677  [NEWLINE]           
678  [IF]                if
678  [SPAREN_OPEN]       (
678  [WORD]              cout_col
678  [COMPARE]           ==
678  [NUMBER]            0
678  [SPAREN_CLOSE]      )
678  [NEWLINE]           
679  [BRACE_OPEN]        {
679  [NEWLINE]           
680  [WORD]              cout_col
680  [ASSIGN]            =
680  [WORD]              pc
680  [MEMBER]            ->
680  [WORD]              column
680  [SEMICOLON]         ;
680  [NEWLINE]           
681  [WORD]              cout_level
681  [ASSIGN]            =
681  [WORD]              pc
681  [MEMBER]            ->
681  [WORD]              level
681  [SEMICOLON]         ;
681  [NEWLINE]           
682  [BRACE_CLOSE]       }
682  [NEWLINE]           
683  [BRACE_CLOSE]       }
683  [NEWLINE]           
684  [ELSE]              else
684  [NEWLINE]           
685  [BRACE_OPEN]        {
685  [NEWLINE]           
686  [COMMENT]           /* anything else? */
686  [NEWLINE]           
687  [BRACE_CLOSE]       }
687  [NEWLINE]           
690  [COMMENT_MULTI]     /**␤       * Indent the line if needed␤       */
692  [NEWLINE]           
693  [IF]                if
693  [SPAREN_OPEN]       (
693  [WORD]              did_newline
693  [BOOL]              &&
693  [NOT]               !
693  [FUNC_CALL]         chunk_is_newline
693  [FPAREN_OPEN]       (
693  [WORD]              pc
693  [FPAREN_CLOSE]      )
693  [BOOL]              &&
693  [PAREN_OPEN]        (
693  [WORD]              pc
693  [MEMBER]            ->
693  [WORD]              len
693  [COMPARE]           !=
693  [NUMBER]            0
693  [PAREN_CLOSE]       )
693  [SPAREN_CLOSE]      )
693  [NEWLINE]           
694  [BRACE_OPEN]        {
694  [NEWLINE]           
695  [COMMENT_MULTI]     /**␤          * Check for special continuations.␤          * Note that some of these could be done as a stack item like␤          * everything else␤          */
699  [NEWLINE]           
701  [WORD]              prev
701  [ASSIGN]            =
701  [FUNC_CALL]         chunk_get_prev_ncnl
701  [FPAREN_OPEN]       (
701  [WORD]              pc
701  [FPAREN_CLOSE]      )
701  [SEMICOLON]         ;
701  [NEWLINE]           
702  [IF]                if
702  [SPAREN_OPEN]       (
702  [PAREN_OPEN]        (
702  [WORD]              pc
702  [MEMBER]            ->
702  [WORD]              type
702  [COMPARE]           ==
702  [WORD]              CT_MEMBER
702  [PAREN_CLOSE]       )
702  [BOOL]              ||
702  [NEWLINE]           
703  [PAREN_OPEN]        (
703  [WORD]              pc
703  [MEMBER]            ->
703  [WORD]              type
703  [COMPARE]           ==
703  [WORD]              CT_DC_MEMBER
703  [PAREN_CLOSE]       )
703  [BOOL]              ||
703  [NEWLINE]           
704  [PAREN_OPEN]        (
704  [PAREN_OPEN]        (
704  [WORD]              prev
704  [COMPARE]           !=
704  [WORD]              NULL
704  [PAREN_CLOSE]       )
704  [BOOL]              &&
704  [NEWLINE]           
705  [PAREN_OPEN]        (
705  [PAREN_OPEN]        (
705  [WORD]              prev
705  [MEMBER]            ->
705  [WORD]              type
705  [COMPARE]           ==
705  [WORD]              CT_MEMBER
705  [PAREN_CLOSE]       )
705  [BOOL]              ||
705  [NEWLINE]           
706  [PAREN_OPEN]        (
706  [WORD]              prev
706  [MEMBER]            ->
706  [WORD]              type
706  [COMPARE]           ==
706  [WORD]              CT_DC_MEMBER
706  [PAREN_CLOSE]       )
706  [PAREN_CLOSE]       )
706  [PAREN_CLOSE]       )
706  [SPAREN_CLOSE]      )
706  [NEWLINE]           
707  [BRACE_OPEN]        {
707  [NEWLINE]           
708  [WORD]              tmp
708  [ASSIGN]            =
708  [WORD]              cpd
708  [MEMBER]            .
708  [WORD]              settings
708  [SQUARE_OPEN]       [
708  [WORD]              UO_indent_member
708  [SQUARE_CLOSE]      ]
708  [MEMBER]            .
708  [WORD]              n
708  [ARITH]             +
708  [WORD]              indent_column
708  [SEMICOLON]         ;
708  [NEWLINE]           
709  [FUNC_CALL]         LOG_FMT
709  [FPAREN_OPEN]       (
709  [WORD]              LINDENT
709  [COMMA]             ,
709  [STRING]            "%s: %d] member => %d\n"
709  [COMMA]             ,
709  [NEWLINE]           
710  [WORD]              __func__
710  [COMMA]             ,
710  [WORD]              pc
710  [MEMBER]            ->
710  [WORD]              orig_line
710  [COMMA]             ,
710  [WORD]              tmp
710  [FPAREN_CLOSE]      )
710  [SEMICOLON]         ;
710  [NEWLINE]           
711  [FUNC_CALL]         reindent_line
711  [FPAREN_OPEN]       (
711  [WORD]              pc
711  [COMMA]             ,
711  [WORD]              tmp
711  [FPAREN_CLOSE]      )
711  [SEMICOLON]         ;
711  [NEWLINE]           
712  [BRACE_CLOSE]       }
712  [NEWLINE]           
713  [ELSE]              else
713  [ELSEIF]            if
713  [SPAREN_OPEN]       (
713  [FUNC_CALL]         chunk_is_str
713  [FPAREN_OPEN]       (
713  [WORD]              pc
713  [COMMA]             ,
713  [STRING]            "<<"
713  [COMMA]             ,
713  [NUMBER]            2
713  [FPAREN_CLOSE]      )
713  [BOOL]              &&
713  [PAREN_OPEN]        (
713  [WORD]              cout_col
713  [COMPARE]           >
713  [NUMBER]            0
713  [PAREN_CLOSE]       )
713  [SPAREN_CLOSE]      )
713  [NEWLINE]           
714  [BRACE_OPEN]        {
714  [NEWLINE]           
715  [FUNC_CALL]         LOG_FMT
715  [FPAREN_OPEN]       (
715  [WORD]              LINDENT
715  [COMMA]             ,
715  [STRING]            "%s: %d] cout_col => %d\n"
715  [COMMA]             ,
715  [NEWLINE]           
716  [WORD]              __func__
716  [COMMA]             ,
716  [WORD]              pc
716  [MEMBER]            ->
716  [WORD]              orig_line
716  [COMMA]             ,
716  [WORD]              cout_col
716  [FPAREN_CLOSE]      )
716  [SEMICOLON]         ;
716  [NEWLINE]           
717  [FUNC_CALL]         reindent_line
717  [FPAREN_OPEN]       (
717  [WORD]              pc
717  [COMMA]             ,
717  [WORD]              cout_col
717  [FPAREN_CLOSE]      )
717  [SEMICOLON]         ;
717  [NEWLINE]           
718  [BRACE_CLOSE]       }
718  [NEWLINE]           
719  [ELSE]              else
719  [ELSEIF]            if
719  [SPAREN_OPEN]       (
719  [PAREN_OPEN]        (
719  [WORD]              vardefcol
719  [COMPARE]           >
719  [NUMBER]            0
719  [PAREN_CLOSE]       )
719  [BOOL]              &&
719  [NEWLINE]           
720  [PAREN_OPEN]        (
720  [WORD]              pc
720  [MEMBER]            ->
720  [WORD]              type
720  [COMPARE]           ==
720  [WORD]              CT_WORD
720  [PAREN_CLOSE]       )
720  [BOOL]              &&
720  [NEWLINE]           
721  [PAREN_OPEN]        (
721  [PAREN_OPEN]        (
721  [WORD]              pc
721  [MEMBER]            ->
721  [WORD]              flags
721  [ARITH]             &
721  [WORD]              PCF_VAR_DEF
721  [PAREN_CLOSE]       )
721  [COMPARE]           !=
721  [NUMBER]            0
721  [PAREN_CLOSE]       )
721  [BOOL]              &&
721  [NEWLINE]           
722  [PAREN_OPEN]        (
722  [WORD]              prev
722  [COMPARE]           !=
722  [WORD]              NULL
722  [PAREN_CLOSE]       )
722  [BOOL]              &&
722  [PAREN_OPEN]        (
722  [WORD]              prev
722  [MEMBER]            ->
722  [WORD]              type
722  [COMPARE]           ==
722  [WORD]              CT_COMMA
722  [PAREN_CLOSE]       )
722  [SPAREN_CLOSE]      )
722  [NEWLINE]           
723  [BRACE_OPEN]        {
723  [NEWLINE]           
724  [FUNC_CALL]         LOG_FMT
724  [FPAREN_OPEN]       (
724  [WORD]              LINDENT
724  [COMMA]             ,
724  [STRING]            "%s: %d] Vardefcol => %d\n"
724  [COMMA]             ,
724  [NEWLINE]           
725  [WORD]              __func__
725  [COMMA]             ,
725  [WORD]              pc
725  [MEMBER]            ->
725  [WORD]              orig_line
725  [COMMA]             ,
725  [WORD]              vardefcol
725  [FPAREN_CLOSE]      )
725  [SEMICOLON]         ;
725  [NEWLINE]           
726  [FUNC_CALL]         reindent_line
726  [FPAREN_OPEN]       (
726  [WORD]              pc
726  [COMMA]             ,
726  [WORD]              vardefcol
726  [FPAREN_CLOSE]      )
726  [SEMICOLON]         ;
726  [NEWLINE]           
727  [BRACE_CLOSE]       }
727  [NEWLINE]           
728  [ELSE]              else
728  [ELSEIF]            if
728  [SPAREN_OPEN]       (
728  [PAREN_OPEN]        (
728  [WORD]              pc
728  [MEMBER]            ->
728  [WORD]              type
728  [COMPARE]           ==
728  [WORD]              CT_STRING
728  [PAREN_CLOSE]       )
728  [BOOL]              &&
728  [PAREN_OPEN]        (
728  [WORD]              prev
728  [MEMBER]            ->
728  [WORD]              type
728  [COMPARE]           ==
728  [WORD]              CT_STRING
728  [PAREN_CLOSE]       )
728  [BOOL]              &&
728  [NEWLINE]           
729  [WORD]              cpd
729  [MEMBER]            .
729  [WORD]              settings
729  [SQUARE_OPEN]       [
729  [WORD]              UO_indent_align_string
729  [SQUARE_CLOSE]      ]
729  [MEMBER]            .
729  [WORD]              b
729  [SPAREN_CLOSE]      )
729  [NEWLINE]           
730  [BRACE_OPEN]        {
730  [NEWLINE]           
731  [FUNC_CALL]         LOG_FMT
731  [FPAREN_OPEN]       (
731  [WORD]              LINDENT
731  [COMMA]             ,
731  [STRING]            "%s: %d] String => %d\n"
731  [COMMA]             ,
731  [NEWLINE]           
732  [WORD]              __func__
732  [COMMA]             ,
732  [WORD]              pc
732  [MEMBER]            ->
732  [WORD]              orig_line
732  [COMMA]             ,
732  [WORD]              prev
732  [MEMBER]            ->
732  [WORD]              column
732  [FPAREN_CLOSE]      )
732  [SEMICOLON]         ;
732  [NEWLINE]           
733  [FUNC_CALL]         reindent_line
733  [FPAREN_OPEN]       (
733  [WORD]              pc
733  [COMMA]             ,
733  [WORD]              prev
733  [MEMBER]            ->
733  [WORD]              column
733  [FPAREN_CLOSE]      )
733  [SEMICOLON]         ;
733  [NEWLINE]           
734  [BRACE_CLOSE]       }
734  [NEWLINE]           
735  [ELSE]              else
735  [ELSEIF]            if
735  [SPAREN_OPEN]       (
735  [FUNC_CALL]         chunk_is_comment
735  [FPAREN_OPEN]       (
735  [WORD]              pc
735  [FPAREN_CLOSE]      )
735  [SPAREN_CLOSE]      )
735  [NEWLINE]           
736  [BRACE_OPEN]        {
736  [NEWLINE]           
737  [FUNC_CALL]         LOG_FMT
737  [FPAREN_OPEN]       (
737  [WORD]              LINDENT
737  [COMMA]             ,
737  [STRING]            "%s: %d] comment => %d\n"
737  [COMMA]             ,
737  [NEWLINE]           
738  [WORD]              __func__
738  [COMMA]             ,
738  [WORD]              pc
738  [MEMBER]            ->
738  [WORD]              orig_line
738  [COMMA]             ,
738  [WORD]              frm
738  [MEMBER]            .
738  [WORD]              pse
738  [SQUARE_OPEN]       [
738  [WORD]              frm
738  [MEMBER]            .
738  [WORD]              pse_tos
738  [SQUARE_CLOSE]      ]
738  [MEMBER]            .
738  [WORD]              indent_tmp
738  [FPAREN_CLOSE]      )
738  [SEMICOLON]         ;
738  [NEWLINE]           
739  [FUNC_CALL]         indent_comment
739  [FPAREN_OPEN]       (
739  [WORD]              pc
739  [COMMA]             ,
739  [WORD]              frm
739  [MEMBER]            .
739  [WORD]              pse
739  [SQUARE_OPEN]       [
739  [WORD]              frm
739  [MEMBER]            .
739  [WORD]              pse_tos
739  [SQUARE_CLOSE]      ]
739  [MEMBER]            .
739  [WORD]              indent_tmp
739  [FPAREN_CLOSE]      )
739  [SEMICOLON]         ;
739  [NEWLINE]           
740  [BRACE_CLOSE]       }
740  [NEWLINE]           
741  [ELSE]              else
741  [ELSEIF]            if
741  [SPAREN_OPEN]       (
741  [WORD]              pc
741  [MEMBER]            ->
741  [WORD]              type
741  [COMPARE]           ==
741  [WORD]              CT_PREPROC
741  [SPAREN_CLOSE]      )
741  [NEWLINE]           
742  [BRACE_OPEN]        {
742  [NEWLINE]           
743  [COMMENT]           /* Preprocs are always in column 1. See indent_preproc() */
743  [NEWLINE]           
744  [IF]                if
744  [SPAREN_OPEN]       (
744  [WORD]              pc
744  [MEMBER]            ->
744  [WORD]              column
744  [COMPARE]           !=
744  [NUMBER]            1
744  [SPAREN_CLOSE]      )
745  [VBRACE_OPEN]       
745  [NEWLINE]           
746  [FUNC_CALL]         reindent_line
746  [FPAREN_OPEN]       (
746  [WORD]              pc
746  [COMMA]             ,
746  [NUMBER]            1
746  [FPAREN_CLOSE]      )
746  [SEMICOLON]         ;
746  [NEWLINE]           
747  [VBRACE_CLOSE]      
748  [BRACE_CLOSE]       }
748  [NEWLINE]           
749  [ELSE]              else
749  [NEWLINE]           
750  [BRACE_OPEN]        {
750  [NEWLINE]           
751  [IF]                if
751  [SPAREN_OPEN]       (
751  [WORD]              pc
751  [MEMBER]            ->
751  [WORD]              column
751  [COMPARE]           !=
751  [WORD]              indent_column
751  [SPAREN_CLOSE]      )
751  [NEWLINE]           
752  [BRACE_OPEN]        {
752  [NEWLINE]           
753  [FUNC_CALL]         LOG_FMT
753  [FPAREN_OPEN]       (
753  [WORD]              LINDENT
753  [COMMA]             ,
753  [STRING]            "%s: %d] indent => %d [%.*s]\n"
753  [COMMA]             ,
753  [NEWLINE]           
754  [WORD]              __func__
754  [COMMA]             ,
754  [WORD]              pc
754  [MEMBER]            ->
754  [WORD]              orig_line
754  [COMMA]             ,
754  [WORD]              indent_column
754  [COMMA]             ,
754  [WORD]              pc
754  [MEMBER]            ->
754  [WORD]              len
754  [COMMA]             ,
754  [WORD]              pc
754  [MEMBER]            ->
754  [WORD]              str
754  [FPAREN_CLOSE]      )
754  [SEMICOLON]         ;
754  [NEWLINE]           
755  [FUNC_CALL]         reindent_line
755  [FPAREN_OPEN]       (
755  [WORD]              pc
755  [COMMA]             ,
755  [WORD]              indent_column
755  [FPAREN_CLOSE]      )
755  [SEMICOLON]         ;
755  [NEWLINE]           
756  [BRACE_CLOSE]       }
756  [NEWLINE]           
757  [BRACE_CLOSE]       }
757  [NEWLINE]           
758  [WORD]              did_newline
758  [ASSIGN]            =
758  [WORD]              false
758  [SEMICOLON]         ;
758  [NEWLINE]           
759  [BRACE_CLOSE]       }
759  [NEWLINE]           
761  [COMMENT_MULTI]     /**␤       * Handle variable definition continuation indenting␤       */
763  [NEWLINE]           
764  [IF]                if
764  [SPAREN_OPEN]       (
764  [PAREN_OPEN]        (
764  [WORD]              pc
764  [MEMBER]            ->
764  [WORD]              type
764  [COMPARE]           ==
764  [WORD]              CT_WORD
764  [PAREN_CLOSE]       )
764  [BOOL]              &&
764  [NEWLINE]           
765  [PAREN_OPEN]        (
765  [PAREN_OPEN]        (
765  [WORD]              pc
765  [MEMBER]            ->
765  [WORD]              flags
765  [ARITH]             &
765  [WORD]              PCF_IN_FCN_DEF
765  [PAREN_CLOSE]       )
765  [COMPARE]           ==
765  [NUMBER]            0
765  [PAREN_CLOSE]       )
765  [BOOL]              &&
765  [NEWLINE]           
766  [PAREN_OPEN]        (
766  [PAREN_OPEN]        (
766  [WORD]              pc
766  [MEMBER]            ->
766  [WORD]              flags
766  [ARITH]             &
766  [WORD]              PCF_VAR_1ST_DEF
766  [PAREN_CLOSE]       )
766  [COMPARE]           ==
766  [WORD]              PCF_VAR_1ST_DEF
766  [PAREN_CLOSE]       )
766  [SPAREN_CLOSE]      )
767  [VBRACE_OPEN]       
767  [NEWLINE]           
768  [WORD]              vardefcol
768  [ASSIGN]            =
768  [WORD]              pc
768  [MEMBER]            ->
768  [WORD]              column
768  [SEMICOLON]         ;
769  [VBRACE_CLOSE]      
769  [NEWLINE]           
770  [IF]                if
770  [SPAREN_OPEN]       (
770  [FUNC_CALL]         chunk_is_semicolon
770  [FPAREN_OPEN]       (
770  [WORD]              pc
770  [FPAREN_CLOSE]      )
770  [BOOL]              ||
770  [NEWLINE]           
771  [PAREN_OPEN]        (
771  [PAREN_OPEN]        (
771  [WORD]              pc
771  [MEMBER]            ->
771  [WORD]              type
771  [COMPARE]           ==
771  [WORD]              CT_BRACE_OPEN
771  [PAREN_CLOSE]       )
771  [BOOL]              &&
771  [PAREN_OPEN]        (
771  [WORD]              pc
771  [MEMBER]            ->
771  [WORD]              parent_type
771  [COMPARE]           ==
771  [WORD]              CT_FUNCTION
771  [PAREN_CLOSE]       )
771  [PAREN_CLOSE]       )
771  [SPAREN_CLOSE]      )
772  [VBRACE_OPEN]       
772  [NEWLINE]           
773  [WORD]              vardefcol
773  [ASSIGN]            =
773  [NUMBER]            0
773  [SEMICOLON]         ;
774  [VBRACE_CLOSE]      
774  [NEWLINE]           
776  [COMMENT]           /* if we hit a newline, reset indent_tmp */
776  [NEWLINE]           
777  [IF]                if
777  [SPAREN_OPEN]       (
777  [FUNC_CALL]         chunk_is_newline
777  [FPAREN_OPEN]       (
777  [WORD]              pc
777  [FPAREN_CLOSE]      )
777  [BOOL]              ||
777  [NEWLINE]           
778  [PAREN_OPEN]        (
778  [WORD]              pc
778  [MEMBER]            ->
778  [WORD]              type
778  [COMPARE]           ==
778  [WORD]              CT_COMMENT_MULTI
778  [PAREN_CLOSE]       )
778  [BOOL]              ||
778  [NEWLINE]           
779  [PAREN_OPEN]        (
779  [WORD]              pc
779  [MEMBER]            ->
779  [WORD]              type
779  [COMPARE]           ==
779  [WORD]              CT_COMMENT_CPP
779  [PAREN_CLOSE]       )
779  [SPAREN_CLOSE]      )
779  [NEWLINE]           
780  [BRACE_OPEN]        {
780  [NEWLINE]           
781  [TYPE]              frm
781  [MEMBER]            .
781  [WORD]              pse
781  [SQUARE_OPEN]       [
781  [WORD]              frm
781  [MEMBER]            .
781  [WORD]              pse_tos
781  [SQUARE_CLOSE]      ]
781  [MEMBER]            .
781  [WORD]              indent_tmp
781  [ASSIGN]            =
781  [WORD]              frm
781  [MEMBER]            .
781  [WORD]              pse
781  [SQUARE_OPEN]       [
781  [WORD]              frm
781  [MEMBER]            .
781  [WORD]              pse_tos
781  [SQUARE_CLOSE]      ]
781  [MEMBER]            .
781  [WORD]              indent
781  [SEMICOLON]         ;
781  [NEWLINE]           
783  [COMMENT_MULTI]     /**␤          * Handle the case of a multi-line #define w/o anything on the␤          * first line (indent_tmp will be 1 or 0)␤          */
786  [NEWLINE]           
787  [IF]                if
787  [SPAREN_OPEN]       (
787  [PAREN_OPEN]        (
787  [WORD]              pc
787  [MEMBER]            ->
787  [WORD]              type
787  [COMPARE]           ==
787  [WORD]              CT_NL_CONT
787  [PAREN_CLOSE]       )
787  [BOOL]              &&
787  [NEWLINE]           
788  [PAREN_OPEN]        (
788  [WORD]              frm
788  [MEMBER]            .
788  [WORD]              pse
788  [SQUARE_OPEN]       [
788  [WORD]              frm
788  [MEMBER]            .
788  [WORD]              pse_tos
788  [SQUARE_CLOSE]      ]
788  [MEMBER]            .
788  [WORD]              indent_tmp
788  [COMPARE]           <=
788  [WORD]              indent_size
788  [PAREN_CLOSE]       )
788  [SPAREN_CLOSE]      )
789  [VBRACE_OPEN]       
789  [NEWLINE]           
790  [TYPE]              frm
790  [MEMBER]            .
790  [WORD]              pse
790  [SQUARE_OPEN]       [
790  [WORD]              frm
790  [MEMBER]            .
790  [WORD]              pse_tos
790  [SQUARE_CLOSE]      ]
790  [MEMBER]            .
790  [WORD]              indent_tmp
790  [ASSIGN]            =
790  [WORD]              indent_size
790  [ARITH]             +
790  [NUMBER]            1
790  [SEMICOLON]         ;
790  [NEWLINE]           
791  [VBRACE_CLOSE]      
791  [NEWLINE]           
793  [COMMENT]           /* Get ready to indent the next item */
793  [NEWLINE]           
794  [WORD]              did_newline
794  [ASSIGN]            =
794  [WORD]              true
794  [SEMICOLON]         ;
794  [NEWLINE]           
795  [BRACE_CLOSE]       }
795  [NEWLINE]           
797  [IF]                if
797  [SPAREN_OPEN]       (
797  [NOT]               !
797  [FUNC_CALL]         chunk_is_comment
797  [FPAREN_OPEN]       (
797  [WORD]              pc
797  [FPAREN_CLOSE]      )
797  [BOOL]              &&
797  [NOT]               !
797  [FUNC_CALL]         chunk_is_newline
797  [FPAREN_OPEN]       (
797  [WORD]              pc
797  [FPAREN_CLOSE]      )
797  [SPAREN_CLOSE]      )
798  [VBRACE_OPEN]       
798  [NEWLINE]           
799  [WORD]              prev
799  [ASSIGN]            =
799  [WORD]              pc
799  [SEMICOLON]         ;
799  [NEWLINE]           
800  [VBRACE_CLOSE]      
800  [NEWLINE]           
801  [WORD]              pc
801  [ASSIGN]            =
801  [FUNC_CALL]         chunk_get_next
801  [FPAREN_OPEN]       (
801  [WORD]              pc
801  [FPAREN_CLOSE]      )
801  [SEMICOLON]         ;
801  [NEWLINE]           
802  [BRACE_CLOSE]       }
802  [NEWLINE]           
804  [COMMENT]           /* Throw out any stuff inside a preprocessor - no need to warn */
804  [NEWLINE]           
805  [WHILE]             while
805  [SPAREN_OPEN]       (
805  [PAREN_OPEN]        (
805  [WORD]              frm
805  [MEMBER]            .
805  [WORD]              pse_tos
805  [COMPARE]           >
805  [NUMBER]            0
805  [PAREN_CLOSE]       )
805  [BOOL]              &&
805  [WORD]              frm
805  [MEMBER]            .
805  [WORD]              pse
805  [SQUARE_OPEN]       [
805  [WORD]              frm
805  [MEMBER]            .
805  [WORD]              pse_tos
805  [SQUARE_CLOSE]      ]
805  [MEMBER]            .
805  [WORD]              in_preproc
805  [SPAREN_CLOSE]      )
806  [VBRACE_OPEN]       
806  [NEWLINE]           
807  [FUNC_CALL]         indent_pse_pop
807  [FPAREN_OPEN]       (
807  [WORD]              frm
807  [COMMA]             ,
807  [WORD]              pc
807  [FPAREN_CLOSE]      )
807  [SEMICOLON]         ;
808  [VBRACE_CLOSE]      
808  [NEWLINE]           
810  [FOR]               for
810  [SPAREN_OPEN]       (
810  [WORD]              idx
810  [ASSIGN]            =
810  [NUMBER]            1
810  [SEMICOLON]         ;
810  [WORD]              idx
810  [COMPARE]           <=
810  [WORD]              frm
810  [MEMBER]            .
810  [WORD]              pse_tos
810  [SEMICOLON]         ;
810  [WORD]              idx
810  [INCDEC_AFTER]      ++
810  [SPAREN_CLOSE]      )
810  [NEWLINE]           
811  [BRACE_OPEN]        {
811  [NEWLINE]           
812  [FUNC_CALL]         LOG_FMT
812  [FPAREN_OPEN]       (
812  [WORD]              LWARN
812  [COMMA]             ,
812  [STRING]            "%s:%d Unmatched %s\n"
812  [COMMA]             ,
812  [NEWLINE]           
813  [WORD]              cpd
813  [MEMBER]            .
813  [WORD]              filename
813  [COMMA]             ,
813  [WORD]              frm
813  [MEMBER]            .
813  [WORD]              pse
813  [SQUARE_OPEN]       [
813  [WORD]              idx
813  [SQUARE_CLOSE]      ]
813  [MEMBER]            .
813  [WORD]              open_line
813  [COMMA]             ,
813  [NEWLINE]           
814  [FUNC_CALL]         get_token_name
814  [FPAREN_OPEN]       (
814  [WORD]              frm
814  [MEMBER]            .
814  [WORD]              pse
814  [SQUARE_OPEN]       [
814  [WORD]              idx
814  [SQUARE_CLOSE]      ]
814  [MEMBER]            .
814  [WORD]              type
814  [FPAREN_CLOSE]      )
814  [FPAREN_CLOSE]      )
814  [SEMICOLON]         ;
814  [NEWLINE]           
815  [TYPE]              cpd
815  [MEMBER]            .
815  [WORD]              error_count
815  [INCDEC_AFTER]      ++
815  [SEMICOLON]         ;
815  [NEWLINE]           
816  [BRACE_CLOSE]       }
816  [NEWLINE]           
817  [BRACE_CLOSE]       }
817  [NEWLINE]           
819  [COMMENT_MULTI]     /**␤ * returns true if forward scan reveals only single newlines or comments␤ * stops when hits code␤ * false if next thing hit is a closing brace, also if 2 newlines in a row␤ */
823  [NEWLINE]           
826  [QUALIFIER]         static
826  [TYPE]              bool
826  [FUNC_DEF]          single_line_comment_indent_rule_applies
826  [FPAREN_OPEN]       (
826  [TYPE]              chunk_t
826  [PTR_TYPE]          *
826  [WORD]              start
826  [FPAREN_CLOSE]      )
826  [NEWLINE]           
827  [BRACE_OPEN]        {
827  [NEWLINE]           
828  [TYPE]              chunk_t
828  [PTR_TYPE]          *
828  [WORD]              pc
828  [ASSIGN]            =
828  [WORD]              start
828  [SEMICOLON]         ;
828  [NEWLINE]           
829  [TYPE]              int
829  [WORD]              nl_count
829  [ASSIGN]            =
829  [NUMBER]            0
829  [SEMICOLON]         ;
829  [NEWLINE]           
830  [IF]                if
830  [SPAREN_OPEN]       (
830  [NOT]               !
830  [FUNC_CALL]         chunk_is_single_line_comment
830  [FPAREN_OPEN]       (
830  [WORD]              pc
830  [FPAREN_CLOSE]      )
830  [SPAREN_CLOSE]      )
831  [VBRACE_OPEN]       
831  [NEWLINE]           
832  [RETURN]            return
832  [WORD]              false
832  [SEMICOLON]         ;
833  [VBRACE_CLOSE]      
833  [NEWLINE]           
834  [COMMENT]           /* scan forward, if only single newlines and comments before next line of code, we want to apply */
834  [NEWLINE]           
835  [WHILE]             while
835  [SPAREN_OPEN]       (
835  [PAREN_OPEN]        (
835  [WORD]              pc
835  [ASSIGN]            =
835  [FUNC_CALL]         chunk_get_next
835  [FPAREN_OPEN]       (
835  [WORD]              pc
835  [FPAREN_CLOSE]      )
835  [PAREN_CLOSE]       )
835  [COMPARE]           !=
835  [WORD]              NULL
835  [SPAREN_CLOSE]      )
835  [NEWLINE]           
836  [BRACE_OPEN]        {
836  [NEWLINE]           
837  [IF]                if
837  [SPAREN_OPEN]       (
837  [FUNC_CALL]         chunk_is_newline
837  [FPAREN_OPEN]       (
837  [WORD]              pc
837  [FPAREN_CLOSE]      )
837  [SPAREN_CLOSE]      )
837  [NEWLINE]           
838  [BRACE_OPEN]        {
838  [NEWLINE]           
839  [IF]                if
839  [SPAREN_OPEN]       (
839  [WORD]              nl_count
839  [COMPARE]           >
839  [NUMBER]            0
839  [BOOL]              ||
839  [WORD]              pc
839  [MEMBER]            ->
839  [WORD]              nl_count
839  [COMPARE]           >
839  [NUMBER]            1
839  [SPAREN_CLOSE]      )
840  [VBRACE_OPEN]       
840  [NEWLINE]           
841  [RETURN]            return
841  [WORD]              false
841  [SEMICOLON]         ;
841  [NEWLINE]           
842  [VBRACE_CLOSE]      
842  [NEWLINE]           
844  [WORD]              nl_count
844  [INCDEC_AFTER]      ++
844  [SEMICOLON]         ;
844  [NEWLINE]           
845  [BRACE_CLOSE]       }
845  [NEWLINE]           
846  [ELSE]              else
846  [NEWLINE]           
847  [BRACE_OPEN]        {
847  [NEWLINE]           
848  [WORD]              nl_count
848  [ASSIGN]            =
848  [NUMBER]            0
848  [SEMICOLON]         ;
848  [NEWLINE]           
849  [IF]                if
849  [SPAREN_OPEN]       (
849  [NOT]               !
849  [FUNC_CALL]         chunk_is_single_line_comment
849  [FPAREN_OPEN]       (
849  [WORD]              pc
849  [FPAREN_CLOSE]      )
849  [SPAREN_CLOSE]      )
849  [NEWLINE]           
850  [BRACE_OPEN]        {
850  [NEWLINE]           
851  [COMMENT]           /* here we check for things to run into that we wouldn't want to indent the comment for */
851  [NEWLINE]           
852  [COMMENT]           /* for example, non-single line comment, closing brace */
852  [NEWLINE]           
853  [IF]                if
853  [SPAREN_OPEN]       (
853  [FUNC_CALL]         chunk_is_comment
853  [FPAREN_OPEN]       (
853  [WORD]              pc
853  [FPAREN_CLOSE]      )
853  [BOOL]              ||
853  [FUNC_CALL]         chunk_is_closing_brace
853  [FPAREN_OPEN]       (
853  [WORD]              pc
853  [FPAREN_CLOSE]      )
853  [SPAREN_CLOSE]      )
854  [VBRACE_OPEN]       
854  [NEWLINE]           
855  [RETURN]            return
855  [WORD]              false
855  [SEMICOLON]         ;
855  [NEWLINE]           
856  [VBRACE_CLOSE]      
856  [NEWLINE]           
858  [RETURN]            return
858  [WORD]              true
858  [SEMICOLON]         ;
858  [NEWLINE]           
859  [BRACE_CLOSE]       }
859  [NEWLINE]           
860  [BRACE_CLOSE]       }
860  [NEWLINE]           
861  [BRACE_CLOSE]       }
861  [NEWLINE]           
863  [RETURN]            return
863  [WORD]              false
863  [SEMICOLON]         ;
863  [NEWLINE]           
864  [BRACE_CLOSE]       }
864  [NEWLINE]           
866  [COMMENT_MULTI]     /**␤ * REVISIT: This needs to be re-checked, maybe cleaned up␤ *␤ * Indents comments in a (hopefully) smart manner.␤ *␤ * There are two type of comments that get indented:␤ *  - stand alone (ie, no tokens on the line before the comment)␤ *  - trailing comments (last token on the line apart from a linefeed)␤ *    + note that a stand-alone comment is a special case of a trailing␤ *␤ * The stand alone comments will get indented in one of three ways:␤ *  - column 1:␤ *    + There is an empty line before the comment AND the indent level is 0␤ *    + The comment was originally in column 1␤ *␤ *  - Same column as trailing comment on previous line (ie, aligned)␤ *    + if originally within TBD (3) columns of the previous comment␤ *␤ *  - syntax indent level␤ *    + doesn't fit in the previous categories␤ *␤ * Options modify this behavior:␤ *  - keep original column (don't move the comment, if possible)␤ *  - keep relative column (move out the same amount as first item on line)␤ *  - fix trailing comment in column TBD␤ *␤ * @param pc   The comment, which is the first item on a line␤ * @param col  The column if this is to be put at indent level␤ */
894  [NEWLINE]           
895  [QUALIFIER]         static
895  [TYPE]              void
895  [FUNC_DEF]          indent_comment
895  [FPAREN_OPEN]       (
895  [TYPE]              chunk_t
895  [PTR_TYPE]          *
895  [WORD]              pc
895  [COMMA]             ,
895  [TYPE]              int
895  [WORD]              col
895  [FPAREN_CLOSE]      )
895  [NEWLINE]           
896  [BRACE_OPEN]        {
896  [NEWLINE]           
897  [TYPE]              chunk_t
897  [PTR_TYPE]          *
897  [WORD]              nl
897  [SEMICOLON]         ;
897  [NEWLINE]           
898  [TYPE]              chunk_t
898  [PTR_TYPE]          *
898  [WORD]              prev
898  [SEMICOLON]         ;
898  [NEWLINE]           
900  [FUNC_CALL]         LOG_FMT
900  [FPAREN_OPEN]       (
900  [WORD]              LCMTIND
900  [COMMA]             ,
900  [STRING]            "%s: line %d, col %d, level %d: "
900  [COMMA]             ,
900  [WORD]              __func__
900  [COMMA]             ,
900  [NEWLINE]           
901  [WORD]              pc
901  [MEMBER]            ->
901  [WORD]              orig_line
901  [COMMA]             ,
901  [WORD]              pc
901  [MEMBER]            ->
901  [WORD]              orig_col
901  [COMMA]             ,
901  [WORD]              pc
901  [MEMBER]            ->
901  [WORD]              level
901  [FPAREN_CLOSE]      )
901  [SEMICOLON]         ;
901  [NEWLINE]           
903  [COMMENT]           /* force column 1 comment to column 1 if not changing them */
903  [NEWLINE]           
904  [IF]                if
904  [SPAREN_OPEN]       (
904  [PAREN_OPEN]        (
904  [WORD]              pc
904  [MEMBER]            ->
904  [WORD]              orig_col
904  [COMPARE]           ==
904  [NUMBER]            1
904  [PAREN_CLOSE]       )
904  [BOOL]              &&
904  [NOT]               !
904  [WORD]              cpd
904  [MEMBER]            .
904  [WORD]              settings
904  [SQUARE_OPEN]       [
904  [WORD]              UO_indent_col1_comment
904  [SQUARE_CLOSE]      ]
904  [MEMBER]            .
904  [WORD]              b
904  [SPAREN_CLOSE]      )
904  [NEWLINE]           
905  [BRACE_OPEN]        {
905  [NEWLINE]           
906  [FUNC_CALL]         LOG_FMT
906  [FPAREN_OPEN]       (
906  [WORD]              LCMTIND
906  [COMMA]             ,
906  [STRING]            "rule 1 - keep in col 1\n"
906  [FPAREN_CLOSE]      )
906  [SEMICOLON]         ;
906  [NEWLINE]           
907  [TYPE]              pc
907  [MEMBER]            ->
907  [WORD]              column
907  [ASSIGN]            =
907  [NUMBER]            1
907  [SEMICOLON]         ;
907  [NEWLINE]           
908  [RETURN]            return
908  [SEMICOLON]         ;
908  [NEWLINE]           
909  [BRACE_CLOSE]       }
909  [NEWLINE]           
911  [WORD]              nl
911  [ASSIGN]            =
911  [FUNC_CALL]         chunk_get_prev
911  [FPAREN_OPEN]       (
911  [WORD]              pc
911  [FPAREN_CLOSE]      )
911  [SEMICOLON]         ;
911  [NEWLINE]           
913  [COMMENT]           /* outside of any expression or statement? */
913  [NEWLINE]           
914  [IF]                if
914  [SPAREN_OPEN]       (
914  [WORD]              pc
914  [MEMBER]            ->
914  [WORD]              level
914  [COMPARE]           ==
914  [NUMBER]            0
914  [SPAREN_CLOSE]      )
914  [NEWLINE]           
915  [BRACE_OPEN]        {
915  [NEWLINE]           
916  [IF]                if
916  [SPAREN_OPEN]       (
916  [PAREN_OPEN]        (
916  [WORD]              nl
916  [COMPARE]           !=
916  [WORD]              NULL
916  [PAREN_CLOSE]       )
916  [BOOL]              &&
916  [PAREN_OPEN]        (
916  [WORD]              nl
916  [MEMBER]            ->
916  [WORD]              nl_count
916  [COMPARE]           >
916  [NUMBER]            1
916  [PAREN_CLOSE]       )
916  [SPAREN_CLOSE]      )
916  [NEWLINE]           
917  [BRACE_OPEN]        {
917  [NEWLINE]           
918  [FUNC_CALL]         LOG_FMT
918  [FPAREN_OPEN]       (
918  [WORD]              LCMTIND
918  [COMMA]             ,
918  [STRING]            "rule 2 - level 0, nl before\n"
918  [FPAREN_CLOSE]      )
918  [SEMICOLON]         ;
918  [NEWLINE]           
919  [TYPE]              pc
919  [MEMBER]            ->
919  [WORD]              column
919  [ASSIGN]            =
919  [NUMBER]            1
919  [SEMICOLON]         ;
919  [NEWLINE]           
920  [RETURN]            return
920  [SEMICOLON]         ;
920  [NEWLINE]           
921  [BRACE_CLOSE]       }
921  [NEWLINE]           
922  [BRACE_CLOSE]       }
922  [NEWLINE]           
924  [WORD]              prev
924  [ASSIGN]            =
924  [FUNC_CALL]         chunk_get_prev
924  [FPAREN_OPEN]       (
924  [WORD]              nl
924  [FPAREN_CLOSE]      )
924  [SEMICOLON]         ;
924  [NEWLINE]           
925  [IF]                if
925  [SPAREN_OPEN]       (
925  [FUNC_CALL]         chunk_is_comment
925  [FPAREN_OPEN]       (
925  [WORD]              prev
925  [FPAREN_CLOSE]      )
925  [BOOL]              &&
925  [PAREN_OPEN]        (
925  [WORD]              nl
925  [MEMBER]            ->
925  [WORD]              nl_count
925  [COMPARE]           ==
925  [NUMBER]            1
925  [PAREN_CLOSE]       )
925  [SPAREN_CLOSE]      )
925  [NEWLINE]           
926  [BRACE_OPEN]        {
926  [NEWLINE]           
927  [TYPE]              int
927  [WORD]              coldiff
927  [ASSIGN]            =
927  [WORD]              prev
927  [MEMBER]            ->
927  [WORD]              orig_col
927  [ARITH]             -
927  [WORD]              pc
927  [MEMBER]            ->
927  [WORD]              orig_col
927  [SEMICOLON]         ;
927  [NEWLINE]           
929  [IF]                if
929  [SPAREN_OPEN]       (
929  [PAREN_OPEN]        (
929  [WORD]              coldiff
929  [COMPARE]           <=
929  [NUMBER]            3
929  [PAREN_CLOSE]       )
929  [BOOL]              &&
929  [PAREN_OPEN]        (
929  [WORD]              coldiff
929  [COMPARE]           >=
929  [NEG]               -
929  [NUMBER]            3
929  [PAREN_CLOSE]       )
929  [SPAREN_CLOSE]      )
929  [NEWLINE]           
930  [BRACE_OPEN]        {
930  [NEWLINE]           
931  [TYPE]              pc
931  [MEMBER]            ->
931  [WORD]              column
931  [ASSIGN]            =
931  [WORD]              prev
931  [MEMBER]            ->
931  [WORD]              column
931  [SEMICOLON]         ;
931  [NEWLINE]           
932  [FUNC_CALL]         LOG_FMT
932  [FPAREN_OPEN]       (
932  [WORD]              LCMTIND
932  [COMMA]             ,
932  [STRING]            "rule 3 - prev comment, coldiff = %d, now in %d\n"
932  [COMMA]             ,
932  [NEWLINE]           
933  [WORD]              coldiff
933  [COMMA]             ,
933  [WORD]              pc
933  [MEMBER]            ->
933  [WORD]              column
933  [FPAREN_CLOSE]      )
933  [SEMICOLON]         ;
933  [NEWLINE]           
934  [RETURN]            return
934  [SEMICOLON]         ;
934  [NEWLINE]           
935  [BRACE_CLOSE]       }
935  [NEWLINE]           
936  [BRACE_CLOSE]       }
936  [NEWLINE]           
937  [COMMENT]           /* check if special single line comment rule applies */
937  [NEWLINE]           
938  [IF]                if
938  [SPAREN_OPEN]       (
938  [WORD]              cpd
938  [MEMBER]            .
938  [WORD]              settings
938  [SQUARE_OPEN]       [
938  [WORD]              UO_indent_sing_line_comments
938  [SQUARE_CLOSE]      ]
938  [MEMBER]            .
938  [WORD]              n
938  [COMPARE]           >
938  [NUMBER]            0
938  [BOOL]              &&
938  [FUNC_CALL]         single_line_comment_indent_rule_applies
938  [FPAREN_OPEN]       (
938  [WORD]              pc
938  [FPAREN_CLOSE]      )
938  [SPAREN_CLOSE]      )
938  [NEWLINE]           
939  [BRACE_OPEN]        {
939  [NEWLINE]           
940  [TYPE]              pc
940  [MEMBER]            ->
940  [WORD]              column
940  [ASSIGN]            =
940  [WORD]              col
940  [ARITH]             +
940  [WORD]              cpd
940  [MEMBER]            .
940  [WORD]              settings
940  [SQUARE_OPEN]       [
940  [WORD]              UO_indent_sing_line_comments
940  [SQUARE_CLOSE]      ]
940  [MEMBER]            .
940  [WORD]              n
940  [SEMICOLON]         ;
940  [NEWLINE]           
941  [FUNC_CALL]         LOG_FMT
941  [FPAREN_OPEN]       (
941  [WORD]              LCMTIND
941  [COMMA]             ,
941  [STRING]            "rule 4 - single line comment indent, now in %d\n"
941  [COMMA]             ,
941  [WORD]              pc
941  [MEMBER]            ->
941  [WORD]              column
941  [FPAREN_CLOSE]      )
941  [SEMICOLON]         ;
941  [NEWLINE]           
942  [RETURN]            return
942  [SEMICOLON]         ;
942  [NEWLINE]           
943  [BRACE_CLOSE]       }
943  [NEWLINE]           
944  [FUNC_CALL]         LOG_FMT
944  [FPAREN_OPEN]       (
944  [WORD]              LCMTIND
944  [COMMA]             ,
944  [STRING]            "rule 5 - fall-through, stay in %d\n"
944  [COMMA]             ,
944  [WORD]              col
944  [FPAREN_CLOSE]      )
944  [SEMICOLON]         ;
944  [NEWLINE]           
946  [TYPE]              pc
946  [MEMBER]            ->
946  [WORD]              column
946  [ASSIGN]            =
946  [WORD]              col
946  [SEMICOLON]         ;
946  [NEWLINE]           
947  [BRACE_CLOSE]       }
947  [NEWLINE]           
950  [COMMENT_MULTI]     /**␤ * Put spaces on either side of the preproc (#) symbol.␤ * This is done by pointing pc->str into pp_str and adjusting the␤ * length.␤ */
954  [NEWLINE]           
955  [TYPE]              void
955  [FUNC_DEF]          indent_preproc
955  [FPAREN_OPEN]       (
955  [TYPE]              void
955  [FPAREN_CLOSE]      )
955  [NEWLINE]           
956  [BRACE_OPEN]        {
956  [NEWLINE]           
957  [TYPE]              chunk_t
957  [PTR_TYPE]          *
957  [WORD]              pc
957  [SEMICOLON]         ;
957  [NEWLINE]           
958  [TYPE]              chunk_t
958  [PTR_TYPE]          *
958  [WORD]              next
958  [SEMICOLON]         ;
958  [NEWLINE]           
959  [TYPE]              int
959  [WORD]              pp_level
959  [SEMICOLON]         ;
959  [NEWLINE]           
960  [TYPE]              int
960  [WORD]              pp_level_sub
960  [ASSIGN]            =
960  [NUMBER]            0
960  [SEMICOLON]         ;
960  [NEWLINE]           
961  [TYPE]              int
961  [WORD]              tmp
961  [SEMICOLON]         ;
961  [NEWLINE]           
963  [COMMENT]           /* Define a string of 16 spaces + # + 16 spaces */
963  [NEWLINE]           
964  [QUALIFIER]         static
964  [QUALIFIER]         const
964  [TYPE]              char
964  [PTR_TYPE]          *
964  [WORD]              pp_str
964  [ASSIGN]            =
964  [STRING]            "                #                "
964  [SEMICOLON]         ;
964  [NEWLINE]           
965  [QUALIFIER]         static
965  [QUALIFIER]         const
965  [TYPE]              char
965  [PTR_TYPE]          *
965  [WORD]              alt_str
965  [ASSIGN]            =
965  [STRING]            "                %:                "
965  [SEMICOLON]         ;
965  [NEWLINE]           
967  [COMMENT]           /* Scan to see if the whole file is covered by one #ifdef */
967  [NEWLINE]           
968  [TYPE]              int
968  [WORD]              stage
968  [ASSIGN]            =
968  [NUMBER]            0
968  [SEMICOLON]         ;
968  [NEWLINE]           
970  [FOR]               for
970  [SPAREN_OPEN]       (
970  [WORD]              pc
970  [ASSIGN]            =
970  [FUNC_CALL]         chunk_get_head
970  [FPAREN_OPEN]       (
970  [FPAREN_CLOSE]      )
970  [SEMICOLON]         ;
970  [WORD]              pc
970  [COMPARE]           !=
970  [WORD]              NULL
970  [SEMICOLON]         ;
970  [WORD]              pc
970  [ASSIGN]            =
970  [FUNC_CALL]         chunk_get_next
970  [FPAREN_OPEN]       (
970  [WORD]              pc
970  [FPAREN_CLOSE]      )
970  [SPAREN_CLOSE]      )
970  [NEWLINE]           
971  [BRACE_OPEN]        {
971  [NEWLINE]           
972  [IF]                if
972  [SPAREN_OPEN]       (
972  [FUNC_CALL]         chunk_is_comment
972  [FPAREN_OPEN]       (
972  [WORD]              pc
972  [FPAREN_CLOSE]      )
972  [BOOL]              ||
972  [FUNC_CALL]         chunk_is_newline
972  [FPAREN_OPEN]       (
972  [WORD]              pc
972  [FPAREN_CLOSE]      )
972  [SPAREN_CLOSE]      )
973  [VBRACE_OPEN]       
973  [NEWLINE]           
974  [CONTINUE]          continue
974  [SEMICOLON]         ;
975  [VBRACE_CLOSE]      
975  [NEWLINE]           
977  [IF]                if
977  [SPAREN_OPEN]       (
977  [WORD]              stage
977  [COMPARE]           ==
977  [NUMBER]            0
977  [SPAREN_CLOSE]      )
977  [NEWLINE]           
978  [BRACE_OPEN]        {
978  [NEWLINE]           
979  [COMMENT]           /* Check the first PP, make sure it is an #if type */
979  [NEWLINE]           
980  [IF]                if
980  [SPAREN_OPEN]       (
980  [WORD]              pc
980  [MEMBER]            ->
980  [WORD]              type
980  [COMPARE]           !=
980  [WORD]              CT_PREPROC
980  [SPAREN_CLOSE]      )
981  [VBRACE_OPEN]       
981  [NEWLINE]           
982  [BREAK]             break
982  [SEMICOLON]         ;
982  [NEWLINE]           
983  [VBRACE_CLOSE]      
983  [NEWLINE]           
984  [WORD]              next
984  [ASSIGN]            =
984  [FUNC_CALL]         chunk_get_next
984  [FPAREN_OPEN]       (
984  [WORD]              pc
984  [FPAREN_CLOSE]      )
984  [SEMICOLON]         ;
984  [NEWLINE]           
985  [IF]                if
985  [SPAREN_OPEN]       (
985  [PAREN_OPEN]        (
985  [WORD]              next
985  [COMPARE]           ==
985  [WORD]              NULL
985  [PAREN_CLOSE]       )
985  [BOOL]              ||
985  [PAREN_OPEN]        (
985  [WORD]              next
985  [MEMBER]            ->
985  [WORD]              type
985  [COMPARE]           !=
985  [WORD]              CT_PP_IF
985  [PAREN_CLOSE]       )
985  [SPAREN_CLOSE]      )
986  [VBRACE_OPEN]       
986  [NEWLINE]           
987  [BREAK]             break
987  [SEMICOLON]         ;
987  [NEWLINE]           
988  [VBRACE_CLOSE]      
988  [NEWLINE]           
989  [WORD]              stage
989  [ASSIGN]            =
989  [NUMBER]            1
989  [SEMICOLON]         ;
989  [NEWLINE]           
990  [BRACE_CLOSE]       }
990  [NEWLINE]           
991  [ELSE]              else
991  [ELSEIF]            if
991  [SPAREN_OPEN]       (
991  [WORD]              stage
991  [COMPARE]           ==
991  [NUMBER]            1
991  [SPAREN_CLOSE]      )
991  [NEWLINE]           
992  [BRACE_OPEN]        {
992  [NEWLINE]           
993  [COMMENT]           /* Scan until a PP at level 0 is found - the close to the #if */
993  [NEWLINE]           
994  [IF]                if
994  [SPAREN_OPEN]       (
994  [PAREN_OPEN]        (
994  [WORD]              pc
994  [MEMBER]            ->
994  [WORD]              type
994  [COMPARE]           ==
994  [WORD]              CT_PREPROC
994  [PAREN_CLOSE]       )
994  [BOOL]              &&
994  [NEWLINE]           
995  [PAREN_OPEN]        (
995  [WORD]              pc
995  [MEMBER]            ->
995  [WORD]              pp_level
995  [COMPARE]           ==
995  [NUMBER]            0
995  [PAREN_CLOSE]       )
995  [SPAREN_CLOSE]      )
996  [VBRACE_OPEN]       
996  [NEWLINE]           
997  [WORD]              stage
997  [ASSIGN]            =
997  [NUMBER]            2
997  [SEMICOLON]         ;
997  [NEWLINE]           
998  [VBRACE_CLOSE]      
998  [NEWLINE]           
999  [CONTINUE]          continue
999  [SEMICOLON]         ;
999  [NEWLINE]           
1000 [BRACE_CLOSE]       }
1000 [NEWLINE]           
1001 [ELSE]              else
1001 [ELSEIF]            if
1001 [SPAREN_OPEN]       (
1001 [WORD]              stage
1001 [COMPARE]           ==
1001 [NUMBER]            2
1001 [SPAREN_CLOSE]      )
1001 [NEWLINE]           
1002 [BRACE_OPEN]        {
1002 [NEWLINE]           
1003 [COMMENT]           /* We should only see the rest of the preprocessor */
1003 [NEWLINE]           
1004 [IF]                if
1004 [SPAREN_OPEN]       (
1004 [PAREN_OPEN]        (
1004 [WORD]              pc
1004 [MEMBER]            ->
1004 [WORD]              type
1004 [COMPARE]           ==
1004 [WORD]              CT_PREPROC
1004 [PAREN_CLOSE]       )
1004 [BOOL]              ||
1004 [NEWLINE]           
1005 [PAREN_OPEN]        (
1005 [PAREN_OPEN]        (
1005 [WORD]              pc
1005 [MEMBER]            ->
1005 [WORD]              flags
1005 [ARITH]             &
1005 [WORD]              PCF_IN_PREPROC
1005 [PAREN_CLOSE]       )
1005 [COMPARE]           ==
1005 [NUMBER]            0
1005 [PAREN_CLOSE]       )
1005 [SPAREN_CLOSE]      )
1005 [NEWLINE]           
1006 [BRACE_OPEN]        {
1006 [NEWLINE]           
1007 [WORD]              stage
1007 [ASSIGN]            =
1007 [NUMBER]            0
1007 [SEMICOLON]         ;
1007 [NEWLINE]           
1008 [BREAK]             break
1008 [SEMICOLON]         ;
1008 [NEWLINE]           
1009 [BRACE_CLOSE]       }
1009 [NEWLINE]           
1010 [BRACE_CLOSE]       }
1010 [NEWLINE]           
1011 [BRACE_CLOSE]       }
1011 [NEWLINE]           
1013 [IF]                if
1013 [SPAREN_OPEN]       (
1013 [WORD]              stage
1013 [COMPARE]           ==
1013 [NUMBER]            2
1013 [SPAREN_CLOSE]      )
1013 [NEWLINE]           
1014 [BRACE_OPEN]        {
1014 [NEWLINE]           
1015 [FUNC_CALL]         LOG_FMT
1015 [FPAREN_OPEN]       (
1015 [WORD]              LINFO
1015 [COMMA]             ,
1015 [STRING]            "The whole file is covered by a #IF\n"
1015 [FPAREN_CLOSE]      )
1015 [SEMICOLON]         ;
1015 [NEWLINE]           
1016 [WORD]              pp_level_sub
1016 [ASSIGN]            =
1016 [NUMBER]            1
1016 [SEMICOLON]         ;
1016 [NEWLINE]           
1017 [BRACE_CLOSE]       }
1017 [NEWLINE]           
1019 [FOR]               for
1019 [SPAREN_OPEN]       (
1019 [WORD]              pc
1019 [ASSIGN]            =
1019 [FUNC_CALL]         chunk_get_head
1019 [FPAREN_OPEN]       (
1019 [FPAREN_CLOSE]      )
1019 [SEMICOLON]         ;
1019 [WORD]              pc
1019 [COMPARE]           !=
1019 [WORD]              NULL
1019 [SEMICOLON]         ;
1019 [WORD]              pc
1019 [ASSIGN]            =
1019 [FUNC_CALL]         chunk_get_next
1019 [FPAREN_OPEN]       (
1019 [WORD]              pc
1019 [FPAREN_CLOSE]      )
1019 [SPAREN_CLOSE]      )
1019 [NEWLINE]           
1020 [BRACE_OPEN]        {
1020 [NEWLINE]           
1021 [IF]                if
1021 [SPAREN_OPEN]       (
1021 [WORD]              pc
1021 [MEMBER]            ->
1021 [WORD]              type
1021 [COMPARE]           !=
1021 [WORD]              CT_PREPROC
1021 [SPAREN_CLOSE]      )
1022 [VBRACE_OPEN]       
1022 [NEWLINE]           
1023 [CONTINUE]          continue
1023 [SEMICOLON]         ;
1024 [VBRACE_CLOSE]      
1024 [NEWLINE]           
1026 [IF]                if
1026 [SPAREN_OPEN]       (
1026 [WORD]              pc
1026 [MEMBER]            ->
1026 [WORD]              column
1026 [COMPARE]           !=
1026 [NUMBER]            1
1026 [SPAREN_CLOSE]      )
1026 [NEWLINE]           
1027 [BRACE_OPEN]        {
1027 [NEWLINE]           
1028 [COMMENT]           /* Don't handle preprocessors that aren't in column 1 */
1028 [NEWLINE]           
1029 [FUNC_CALL]         LOG_FMT
1029 [FPAREN_OPEN]       (
1029 [WORD]              LINFO
1029 [COMMA]             ,
1029 [STRING]            "%s: Line %d doesn't start in column 1 (%d)\n"
1029 [COMMA]             ,
1029 [NEWLINE]           
1030 [WORD]              __func__
1030 [COMMA]             ,
1030 [WORD]              pc
1030 [MEMBER]            ->
1030 [WORD]              orig_line
1030 [COMMA]             ,
1030 [WORD]              pc
1030 [MEMBER]            ->
1030 [WORD]              column
1030 [FPAREN_CLOSE]      )
1030 [SEMICOLON]         ;
1030 [NEWLINE]           
1031 [CONTINUE]          continue
1031 [SEMICOLON]         ;
1031 [NEWLINE]           
1032 [BRACE_CLOSE]       }
1032 [NEWLINE]           
1034 [COMMENT]           /* point into pp_str */
1034 [NEWLINE]           
1035 [IF]                if
1035 [SPAREN_OPEN]       (
1035 [WORD]              pc
1035 [MEMBER]            ->
1035 [WORD]              len
1035 [COMPARE]           ==
1035 [NUMBER]            2
1035 [SPAREN_CLOSE]      )
1036 [VBRACE_OPEN]       
1036 [NEWLINE]           
1037 [COMMENT]           /* alternate token crap */
1037 [NEWLINE]           
1038 [TYPE]              pc
1038 [MEMBER]            ->
1038 [WORD]              str
1038 [ASSIGN]            =
1038 [ADDR]              &
1038 [WORD]              alt_str
1038 [SQUARE_OPEN]       [
1038 [NUMBER]            16
1038 [SQUARE_CLOSE]      ]
1038 [SEMICOLON]         ;
1038 [NEWLINE]           
1039 [VBRACE_CLOSE]      
1040 [ELSE]              else
1041 [VBRACE_OPEN]       
1041 [NEWLINE]           
1042 [TYPE]              pc
1042 [MEMBER]            ->
1042 [WORD]              str
1042 [ASSIGN]            =
1042 [ADDR]              &
1042 [WORD]              pp_str
1042 [SQUARE_OPEN]       [
1042 [NUMBER]            16
1042 [SQUARE_CLOSE]      ]
1042 [SEMICOLON]         ;
1042 [NEWLINE]           
1043 [VBRACE_CLOSE]      
1043 [NEWLINE]           
1045 [WORD]              pp_level
1045 [ASSIGN]            =
1045 [WORD]              pc
1045 [MEMBER]            ->
1045 [WORD]              pp_level
1045 [ARITH]             -
1045 [WORD]              pp_level_sub
1045 [SEMICOLON]         ;
1045 [NEWLINE]           
1046 [IF]                if
1046 [SPAREN_OPEN]       (
1046 [WORD]              pp_level
1046 [COMPARE]           <
1046 [NUMBER]            0
1046 [SPAREN_CLOSE]      )
1047 [VBRACE_OPEN]       
1047 [NEWLINE]           
1048 [WORD]              pp_level
1048 [ASSIGN]            =
1048 [NUMBER]            0
1048 [SEMICOLON]         ;
1048 [NEWLINE]           
1049 [VBRACE_CLOSE]      
1050 [ELSE]              else
1050 [ELSEIF]            if
1050 [SPAREN_OPEN]       (
1050 [WORD]              pp_level
1050 [COMPARE]           >
1050 [NUMBER]            16
1050 [SPAREN_CLOSE]      )
1051 [VBRACE_OPEN]       
1051 [NEWLINE]           
1052 [WORD]              pp_level
1052 [ASSIGN]            =
1052 [NUMBER]            16
1052 [SEMICOLON]         ;
1053 [VBRACE_CLOSE]      
1053 [NEWLINE]           
1055 [COMMENT]           /* Note that the indent is removed by default */
1055 [NEWLINE]           
1056 [IF]                if
1056 [SPAREN_OPEN]       (
1056 [PAREN_OPEN]        (
1056 [WORD]              cpd
1056 [MEMBER]            .
1056 [WORD]              settings
1056 [SQUARE_OPEN]       [
1056 [WORD]              UO_pp_indent
1056 [SQUARE_CLOSE]      ]
1056 [MEMBER]            .
1056 [WORD]              a
1056 [ARITH]             &
1056 [WORD]              AV_ADD
1056 [PAREN_CLOSE]       )
1056 [COMPARE]           !=
1056 [NUMBER]            0
1056 [SPAREN_CLOSE]      )
1056 [NEWLINE]           
1057 [BRACE_OPEN]        {
1057 [NEWLINE]           
1058 [COMMENT]           /* Need to add some spaces */
1058 [NEWLINE]           
1059 [TYPE]              pc
1059 [MEMBER]            ->
1059 [WORD]              str
1059 [ASSIGN]            -=
1059 [WORD]              pp_level
1059 [SEMICOLON]         ;
1059 [NEWLINE]           
1060 [TYPE]              pc
1060 [MEMBER]            ->
1060 [WORD]              len
1060 [ASSIGN]            +=
1060 [WORD]              pp_level
1060 [SEMICOLON]         ;
1060 [NEWLINE]           
1061 [BRACE_CLOSE]       }
1061 [NEWLINE]           
1062 [ELSE]              else
1062 [ELSEIF]            if
1062 [SPAREN_OPEN]       (
1062 [WORD]              cpd
1062 [MEMBER]            .
1062 [WORD]              settings
1062 [SQUARE_OPEN]       [
1062 [WORD]              UO_pp_indent
1062 [SQUARE_CLOSE]      ]
1062 [MEMBER]            .
1062 [WORD]              a
1062 [COMPARE]           ==
1062 [WORD]              AV_IGNORE
1062 [SPAREN_CLOSE]      )
1062 [NEWLINE]           
1063 [BRACE_OPEN]        {
1063 [NEWLINE]           
1064 [WORD]              tmp
1064 [ASSIGN]            =
1064 [PAREN_OPEN]        (
1064 [WORD]              pc
1064 [MEMBER]            ->
1064 [WORD]              orig_col
1064 [COMPARE]           <=
1064 [NUMBER]            16
1064 [PAREN_CLOSE]       )
1064 [QUESTION]          ?
1064 [WORD]              pc
1064 [MEMBER]            ->
1064 [WORD]              orig_col
1064 [ARITH]             -
1064 [NUMBER]            1
1064 [COND_COLON]        :
1064 [NUMBER]            16
1064 [SEMICOLON]         ;
1064 [NEWLINE]           
1065 [TYPE]              pc
1065 [MEMBER]            ->
1065 [WORD]              str
1065 [ASSIGN]            -=
1065 [WORD]              tmp
1065 [SEMICOLON]         ;
1065 [NEWLINE]           
1066 [TYPE]              pc
1066 [MEMBER]            ->
1066 [WORD]              len
1066 [ASSIGN]            +=
1066 [WORD]              tmp
1066 [SEMICOLON]         ;
1066 [NEWLINE]           
1067 [BRACE_CLOSE]       }
1067 [NEWLINE]           
1069 [COMMENT]           /* Add spacing by adjusting the length */
1069 [NEWLINE]           
1070 [IF]                if
1070 [SPAREN_OPEN]       (
1070 [PAREN_OPEN]        (
1070 [WORD]              cpd
1070 [MEMBER]            .
1070 [WORD]              settings
1070 [SQUARE_OPEN]       [
1070 [WORD]              UO_pp_space
1070 [SQUARE_CLOSE]      ]
1070 [MEMBER]            .
1070 [WORD]              a
1070 [ARITH]             &
1070 [WORD]              AV_ADD
1070 [PAREN_CLOSE]       )
1070 [COMPARE]           !=
1070 [NUMBER]            0
1070 [SPAREN_CLOSE]      )
1071 [VBRACE_OPEN]       
1071 [NEWLINE]           
1072 [TYPE]              pc
1072 [MEMBER]            ->
1072 [WORD]              len
1072 [ASSIGN]            +=
1072 [WORD]              pp_level
1072 [SEMICOLON]         ;
1072 [NEWLINE]           
1073 [VBRACE_CLOSE]      
1073 [NEWLINE]           
1075 [WORD]              next
1075 [ASSIGN]            =
1075 [FUNC_CALL]         chunk_get_next
1075 [FPAREN_OPEN]       (
1075 [WORD]              pc
1075 [FPAREN_CLOSE]      )
1075 [SEMICOLON]         ;
1075 [NEWLINE]           
1076 [IF]                if
1076 [SPAREN_OPEN]       (
1076 [WORD]              next
1076 [COMPARE]           !=
1076 [WORD]              NULL
1076 [SPAREN_CLOSE]      )
1077 [VBRACE_OPEN]       
1077 [NEWLINE]           
1078 [FUNC_CALL]         reindent_line
1078 [FPAREN_OPEN]       (
1078 [WORD]              next
1078 [COMMA]             ,
1078 [WORD]              pc
1078 [MEMBER]            ->
1078 [WORD]              len
1078 [ARITH]             +
1078 [NUMBER]            1
1078 [FPAREN_CLOSE]      )
1078 [SEMICOLON]         ;
1078 [NEWLINE]           
1079 [VBRACE_CLOSE]      
1079 [NEWLINE]           
1081 [FUNC_CALL]         LOG_FMT
1081 [FPAREN_OPEN]       (
1081 [WORD]              LPPIS
1081 [COMMA]             ,
1081 [STRING]            "%s: Indent line %d to %d (len %d, next->col %d)\n"
1081 [COMMA]             ,
1081 [NEWLINE]           
1082 [WORD]              __func__
1082 [COMMA]             ,
1082 [WORD]              pc
1082 [MEMBER]            ->
1082 [WORD]              orig_line
1082 [COMMA]             ,
1082 [WORD]              pp_level
1082 [COMMA]             ,
1082 [WORD]              pc
1082 [MEMBER]            ->
1082 [WORD]              len
1082 [COMMA]             ,
1082 [WORD]              next
1082 [MEMBER]            ->
1082 [WORD]              column
1082 [FPAREN_CLOSE]      )
1082 [SEMICOLON]         ;
1082 [NEWLINE]           
1083 [BRACE_CLOSE]       }
1083 [NEWLINE]           
1084 [BRACE_CLOSE]       }
1084 [NEWLINE]           