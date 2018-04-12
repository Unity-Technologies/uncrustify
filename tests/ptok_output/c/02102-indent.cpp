Line [Parent]            Text
1    [COMMENT_WHOLE]     /**␤ * @file indent.cpp␤ * Does all the indenting stuff.␤ *␤ * $Id: indent.cpp 548 2006-10-21 02:31:55Z bengardner $␤ */
6    [NONE]              
7    [PP_INCLUDE]        #
7    [NONE]              include
7    [NONE]              "uncrustify_types.h"
7    [NONE]              
8    [PP_INCLUDE]        #
8    [NONE]              include
8    [NONE]              "chunk_list.h"
8    [NONE]              
9    [PP_INCLUDE]        #
9    [NONE]              include
9    [NONE]              "prototypes.h"
9    [NONE]              
10   [PP_INCLUDE]        #
10   [NONE]              include
10   [NONE]              <cstdio>
10   [NONE]              
11   [PP_INCLUDE]        #
11   [NONE]              include
11   [NONE]              <cstdlib>
11   [NONE]              
12   [PP_INCLUDE]        #
12   [NONE]              include
12   [NONE]              <cstring>
12   [NONE]              
13   [PP_INCLUDE]        #
13   [NONE]              include
13   [NONE]              <cerrno>
13   [NONE]              
14   [PP_INCLUDE]        #
14   [NONE]              include
14   [NONE]              <cctype>
14   [NONE]              
17   [COMMENT_WHOLE]     /**␤ * General indenting approach:␤ * Indenting levels are put into a stack.␤ *␤ * The stack entries contain:␤ *  - opening type␤ *  - brace column␤ *  - continuation column␤ *␤ * Items that start a new stack item:␤ *  - preprocessor (new parse frame)␤ *  - Brace Open (Virtual brace also)␤ *  - Paren, Square, Angle open␤ *  - Assignments␤ *  - C++ '<<' operator (ie, cout << "blah")␤ *  - case␤ *  - class colon␤ *  - return␤ *  - types␤ *  - any other continued statement␤ *␤ * Note that the column of items marked 'PCF_WAS_ALIGNED' is not changed.␤ *␤ * For an open brace:␤ *  - indent increases by indent_columns␤ *  - if part of if/else/do/while/switch/etc, an extra indent may be applied␤ *  - if in a paren, then cont-col is set to column + 1, ie "({ some code })"␤ *␤ * Open paren/square/angle:␤ * cont-col is set to the column of the item after the open paren, unless␤ * followed by a newline, then it is set to (brace-col + indent_columns).␤ * Examples:␤ *    a_really_long_funcion_name(␤ *       param1, param2);␤ *    a_really_long_funcion_name(param1,␤ *                               param2);␤ *␤ * Assignments:␤ * Assignments are continued aligned with the first item after the assignment,␤ * unless the assign is followed by a newline.␤ * Examples:␤ *    some.variable = asdf + asdf +␤ *                    asdf;␤ *    some.variable =␤ *       asdf + asdf + asdf;␤ *␤ * C++ << operator:␤ * Handled the same as assignment.␤ * Examples:␤ *    cout << "this is test number: "␤ *         << test_number;␤ *␤ * case:␤ * Started with case or default.␤ * Terminated with close brace at level or another case or default.␤ * Special indenting according to various rules.␤ *  - indent of case label␤ *  - indent of case body␤ *  - how to handle optional braces␤ * Examples:␤ * {␤ * case x: {␤ *    a++;␤ *    break;␤ *    }␤ * case y:␤ *    b--;␤ *    break;␤ * default:␤ *    c++;␤ *    break;␤ * }␤ *␤ * Class colon:␤ * Indent continuation by indent_columns:␤ * class my_class :␤ *    baseclass1,␤ *    baseclass2␤ * {␤ *␤ * Return: same as assignemts␤ * If the return statement is not fully paren'd, then the indent continues at␤ * the column of the item after the return. If it is paren'd, then the paren␤ * rules apply.␤ * return somevalue +␤ *        othervalue;␤ *␤ * Type: pretty much the same as assignments␤ * Examples:␤ * int foo,␤ *     bar,␤ *     baz;␤ *␤ * Any other continued item:␤ * There shouldn't be anything not covered by the above cases, but any other␤ * continued item is indented by indent_columns:␤ * Example:␤ * somereallycrazylongname.with[lotsoflongstuff].␤ *    thatreallyannoysme.whenIhavetomaintain[thecode] = 3;␤ */
116  [NONE]              
118  [FUNC_PROTO]        static
118  [FUNC_PROTO]        void
118  [NONE]              indent_comment
118  [FUNC_PROTO]        (
118  [NONE]              chunk_t
118  [NONE]              *
118  [NONE]              pc
118  [NONE]              ,
118  [NONE]              int
118  [NONE]              col
118  [FUNC_PROTO]        )
118  [FUNC_PROTO]        ;
118  [NONE]              
121  [FUNC_DEF]          void
121  [NONE]              indent_to_column
121  [FUNC_DEF]          (
121  [NONE]              chunk_t
121  [NONE]              *
121  [NONE]              pc
121  [NONE]              ,
121  [NONE]              int
121  [NONE]              column
121  [FUNC_DEF]          )
121  [NONE]              
122  [FUNC_DEF]          {
122  [NONE]              
123  [NONE]              if
123  [IF]                (
123  [NONE]              column
123  [NONE]              <
123  [NONE]              pc
123  [NONE]              ->
123  [NONE]              column
123  [IF]                )
124  [IF]                
124  [NONE]              
125  [NONE]              column
125  [NONE]              =
125  [NONE]              pc
125  [NONE]              ->
125  [NONE]              column
125  [NONE]              ;
125  [NONE]              
126  [IF]                
126  [NONE]              
127  [NONE]              reindent_line
127  [FUNC_CALL]         (
127  [NONE]              pc
127  [NONE]              ,
127  [NONE]              column
127  [FUNC_CALL]         )
127  [NONE]              ;
127  [NONE]              
128  [FUNC_DEF]          }
128  [NONE]              
130  [COMMENT_WHOLE]     /**␤ * Changes the initial indent for a line to the given column␤ *␤ * @param pc      The chunk at the start of the line␤ * @param column  The desired column␤ */
135  [NONE]              
136  [FUNC_DEF]          void
136  [NONE]              reindent_line
136  [FUNC_DEF]          (
136  [NONE]              chunk_t
136  [NONE]              *
136  [NONE]              pc
136  [NONE]              ,
136  [NONE]              int
136  [NONE]              column
136  [FUNC_DEF]          )
136  [NONE]              
137  [FUNC_DEF]          {
137  [NONE]              
138  [NONE]              int
138  [NONE]              col_delta
138  [NONE]              ;
138  [NONE]              
139  [NONE]              int
139  [NONE]              min_col
139  [NONE]              ;
139  [NONE]              
141  [NONE]              LOG_FMT
141  [FUNC_CALL]         (
141  [NONE]              LINDLINE
141  [NONE]              ,
141  [NONE]              "%s: %d] col %d on %.*s [%s] => %d\n"
141  [NONE]              ,
141  [NONE]              
142  [NONE]              __func__
142  [NONE]              ,
142  [NONE]              pc
142  [NONE]              ->
142  [NONE]              orig_line
142  [NONE]              ,
142  [NONE]              pc
142  [NONE]              ->
142  [NONE]              column
142  [NONE]              ,
142  [NONE]              pc
142  [NONE]              ->
142  [NONE]              len
142  [NONE]              ,
142  [NONE]              pc
142  [NONE]              ->
142  [NONE]              str
142  [NONE]              ,
142  [NONE]              
143  [NONE]              get_token_name
143  [FUNC_CALL]         (
143  [NONE]              pc
143  [NONE]              ->
143  [NONE]              type
143  [FUNC_CALL]         )
143  [NONE]              ,
143  [NONE]              column
143  [FUNC_CALL]         )
143  [NONE]              ;
143  [NONE]              
145  [NONE]              if
145  [IF]                (
145  [NONE]              column
145  [NONE]              ==
145  [NONE]              pc
145  [NONE]              ->
145  [NONE]              column
145  [IF]                )
146  [IF]                
146  [NONE]              
147  [NONE]              return
147  [NONE]              ;
147  [NONE]              
148  [IF]                
148  [NONE]              
149  [NONE]              col_delta
149  [NONE]              =
149  [NONE]              column
149  [NONE]              -
149  [NONE]              pc
149  [NONE]              ->
149  [NONE]              column
149  [NONE]              ;
149  [NONE]              
150  [NONE]              pc
150  [NONE]              ->
150  [NONE]              column
150  [NONE]              =
150  [NONE]              column
150  [NONE]              ;
150  [NONE]              
151  [NONE]              min_col
151  [NONE]              =
151  [NONE]              pc
151  [NONE]              ->
151  [NONE]              column
151  [NONE]              ;
151  [NONE]              
153  [NONE]              do
153  [NONE]              
154  [DO]                {
154  [NONE]              
155  [NONE]              min_col
155  [NONE]              +=
155  [NONE]              pc
155  [NONE]              ->
155  [NONE]              len
155  [NONE]              ;
155  [NONE]              
156  [NONE]              pc
156  [NONE]              =
156  [NONE]              chunk_get_next
156  [FUNC_CALL]         (
156  [NONE]              pc
156  [FUNC_CALL]         )
156  [NONE]              ;
156  [NONE]              
157  [NONE]              if
157  [IF]                (
157  [NONE]              pc
157  [NONE]              !=
157  [NONE]              NULL
157  [IF]                )
157  [NONE]              
158  [IF]                {
158  [NONE]              
159  [NONE]              if
159  [IF]                (
159  [NONE]              chunk_is_comment
159  [FUNC_CALL]         (
159  [NONE]              pc
159  [FUNC_CALL]         )
159  [IF]                )
159  [NONE]              
160  [IF]                {
160  [NONE]              
161  [NONE]              pc
161  [NONE]              ->
161  [NONE]              column
161  [NONE]              =
161  [NONE]              pc
161  [NONE]              ->
161  [NONE]              orig_col
161  [NONE]              ;
161  [NONE]              
162  [NONE]              if
162  [IF]                (
162  [NONE]              pc
162  [NONE]              ->
162  [NONE]              column
162  [NONE]              <
162  [NONE]              min_col
162  [IF]                )
163  [IF]                
163  [NONE]              
164  [NONE]              pc
164  [NONE]              ->
164  [NONE]              column
164  [NONE]              =
164  [NONE]              min_col
164  [NONE]              +
164  [NONE]              1
164  [NONE]              ;
164  [NONE]              
165  [IF]                
165  [NONE]              
166  [NONE]              LOG_FMT
166  [FUNC_CALL]         (
166  [NONE]              LINDLINE
166  [NONE]              ,
166  [NONE]              "%s: set comment on line %d to col %d (orig %d)\n"
166  [NONE]              ,
166  [NONE]              
167  [NONE]              __func__
167  [NONE]              ,
167  [NONE]              pc
167  [NONE]              ->
167  [NONE]              orig_line
167  [NONE]              ,
167  [NONE]              pc
167  [NONE]              ->
167  [NONE]              column
167  [NONE]              ,
167  [NONE]              pc
167  [NONE]              ->
167  [NONE]              orig_col
167  [FUNC_CALL]         )
167  [NONE]              ;
167  [NONE]              
168  [IF]                }
168  [NONE]              
169  [NONE]              else
169  [NONE]              
170  [ELSE]              {
170  [NONE]              
171  [NONE]              pc
171  [NONE]              ->
171  [NONE]              column
171  [NONE]              +=
171  [NONE]              col_delta
171  [NONE]              ;
171  [NONE]              
172  [NONE]              if
172  [IF]                (
172  [NONE]              pc
172  [NONE]              ->
172  [NONE]              column
172  [NONE]              <
172  [NONE]              min_col
172  [IF]                )
173  [IF]                
173  [NONE]              
174  [NONE]              pc
174  [NONE]              ->
174  [NONE]              column
174  [NONE]              =
174  [NONE]              min_col
174  [NONE]              ;
174  [NONE]              
175  [IF]                
176  [ELSE]              }
176  [NONE]              
177  [IF]                }
177  [NONE]              
178  [DO]                }
178  [NONE]              
178  [NONE]              while
178  [WHILE_OF_DO]       (
178  [NONE]              (
178  [NONE]              pc
178  [NONE]              !=
178  [NONE]              NULL
178  [NONE]              )
178  [NONE]              &&
178  [NONE]              (
178  [NONE]              pc
178  [NONE]              ->
178  [NONE]              nl_count
178  [NONE]              ==
178  [NONE]              0
178  [NONE]              )
178  [WHILE_OF_DO]       )
178  [WHILE_OF_DO]       ;
178  [NONE]              
179  [FUNC_DEF]          }
179  [NONE]              
182  [COMMENT_WHOLE]     /**␤ * Starts a new entry␤ *␤ * @param frm  The parse frame␤ * @param pc   The chunk causing the push␤ */
187  [NONE]              
188  [FUNC_DEF]          static
188  [FUNC_DEF]          void
188  [NONE]              indent_pse_push
188  [FUNC_DEF]          (
188  [NONE]              struct
188  [STRUCT]            parse_frame
188  [STRUCT]            &
188  [NONE]              frm
188  [NONE]              ,
188  [NONE]              chunk_t
188  [NONE]              *
188  [NONE]              pc
188  [FUNC_DEF]          )
188  [NONE]              
189  [FUNC_DEF]          {
189  [NONE]              
190  [NONE]              static
190  [NONE]              int
190  [NONE]              ref
190  [NONE]              =
190  [NONE]              0
190  [NONE]              ;
190  [NONE]              
192  [COMMENT_WHOLE]     /* check the stack depth */
192  [NONE]              
193  [NONE]              if
193  [IF]                (
193  [NONE]              frm
193  [NONE]              .
193  [NONE]              pse_tos
193  [NONE]              <
193  [C_CAST]            (
193  [C_CAST]            int
193  [C_CAST]            )
193  [NONE]              ARRAY_SIZE
193  [FUNC_CALL]         (
193  [NONE]              frm
193  [NONE]              .
193  [NONE]              pse
193  [FUNC_CALL]         )
193  [IF]                )
193  [NONE]              
194  [IF]                {
194  [NONE]              
195  [COMMENT_WHOLE]     /* Bump up the index and initialize it */
195  [NONE]              
196  [NONE]              frm
196  [NONE]              .
196  [NONE]              pse_tos
196  [NONE]              ++
196  [NONE]              ;
196  [NONE]              
197  [NONE]              memset
197  [FUNC_CALL]         (
197  [NONE]              &
197  [NONE]              frm
197  [NONE]              .
197  [NONE]              pse
197  [NONE]              [
197  [NONE]              frm
197  [NONE]              .
197  [NONE]              pse_tos
197  [NONE]              ]
197  [NONE]              ,
197  [NONE]              0
197  [NONE]              ,
197  [NONE]              sizeof
197  [TYPE_CAST]         (
197  [NONE]              frm
197  [NONE]              .
197  [NONE]              pse
197  [NONE]              [
197  [NONE]              frm
197  [NONE]              .
197  [NONE]              pse_tos
197  [NONE]              ]
197  [TYPE_CAST]         )
197  [FUNC_CALL]         )
197  [NONE]              ;
197  [NONE]              
199  [NONE]              LOG_FMT
199  [FUNC_CALL]         (
199  [NONE]              LINDPSE
199  [NONE]              ,
199  [NONE]              "%4d] OPEN  [%d,%s] level=%d\n"
199  [NONE]              ,
199  [NONE]              
200  [NONE]              pc
200  [NONE]              ->
200  [NONE]              orig_line
200  [NONE]              ,
200  [NONE]              frm
200  [NONE]              .
200  [NONE]              pse_tos
200  [NONE]              ,
200  [NONE]              get_token_name
200  [FUNC_CALL]         (
200  [NONE]              pc
200  [NONE]              ->
200  [NONE]              type
200  [FUNC_CALL]         )
200  [NONE]              ,
200  [NONE]              pc
200  [NONE]              ->
200  [NONE]              level
200  [FUNC_CALL]         )
200  [NONE]              ;
200  [NONE]              
202  [NONE]              frm
202  [NONE]              .
202  [NONE]              pse
202  [NONE]              [
202  [NONE]              frm
202  [NONE]              .
202  [NONE]              pse_tos
202  [NONE]              ]
202  [NONE]              .
202  [NONE]              type
202  [NONE]              =
202  [NONE]              pc
202  [NONE]              ->
202  [NONE]              type
202  [NONE]              ;
202  [NONE]              
203  [NONE]              frm
203  [NONE]              .
203  [NONE]              pse
203  [NONE]              [
203  [NONE]              frm
203  [NONE]              .
203  [NONE]              pse_tos
203  [NONE]              ]
203  [NONE]              .
203  [NONE]              level
203  [NONE]              =
203  [NONE]              pc
203  [NONE]              ->
203  [NONE]              level
203  [NONE]              ;
203  [NONE]              
204  [NONE]              frm
204  [NONE]              .
204  [NONE]              pse
204  [NONE]              [
204  [NONE]              frm
204  [NONE]              .
204  [NONE]              pse_tos
204  [NONE]              ]
204  [NONE]              .
204  [NONE]              open_line
204  [NONE]              =
204  [NONE]              pc
204  [NONE]              ->
204  [NONE]              orig_line
204  [NONE]              ;
204  [NONE]              
205  [NONE]              frm
205  [NONE]              .
205  [NONE]              pse
205  [NONE]              [
205  [NONE]              frm
205  [NONE]              .
205  [NONE]              pse_tos
205  [NONE]              ]
205  [NONE]              .
205  [NONE]              ref
205  [NONE]              =
205  [NONE]              ++
205  [NONE]              ref
205  [NONE]              ;
205  [NONE]              
206  [NONE]              frm
206  [NONE]              .
206  [NONE]              pse
206  [NONE]              [
206  [NONE]              frm
206  [NONE]              .
206  [NONE]              pse_tos
206  [NONE]              ]
206  [NONE]              .
206  [NONE]              in_preproc
206  [NONE]              =
206  [NONE]              (
206  [NONE]              pc
206  [NONE]              ->
206  [NONE]              flags
206  [NONE]              &
206  [NONE]              PCF_IN_PREPROC
206  [NONE]              )
206  [NONE]              !=
206  [NONE]              0
206  [NONE]              ;
206  [NONE]              
207  [IF]                }
207  [NONE]              
208  [FUNC_DEF]          }
208  [NONE]              
211  [COMMENT_WHOLE]     /**␤ * Removes the top entry␤ *␤ * @param frm  The parse frame␤ * @param pc   The chunk causing the push␤ */
216  [NONE]              
217  [FUNC_DEF]          static
217  [FUNC_DEF]          void
217  [NONE]              indent_pse_pop
217  [FUNC_DEF]          (
217  [NONE]              struct
217  [STRUCT]            parse_frame
217  [STRUCT]            &
217  [NONE]              frm
217  [NONE]              ,
217  [NONE]              chunk_t
217  [NONE]              *
217  [NONE]              pc
217  [FUNC_DEF]          )
217  [NONE]              
218  [FUNC_DEF]          {
218  [NONE]              
219  [COMMENT_WHOLE]     /* Bump up the index and initialize it */
219  [NONE]              
220  [NONE]              if
220  [IF]                (
220  [NONE]              frm
220  [NONE]              .
220  [NONE]              pse_tos
220  [NONE]              >
220  [NONE]              0
220  [IF]                )
220  [NONE]              
221  [IF]                {
221  [NONE]              
222  [NONE]              if
222  [IF]                (
222  [NONE]              pc
222  [NONE]              !=
222  [NONE]              NULL
222  [IF]                )
222  [NONE]              
223  [IF]                {
223  [NONE]              
224  [NONE]              LOG_FMT
224  [FUNC_CALL]         (
224  [NONE]              LINDPSE
224  [NONE]              ,
224  [NONE]              "%4d] CLOSE [%d,%s] on %s, started on line %d, level=%d/%d\n"
224  [NONE]              ,
224  [NONE]              
225  [NONE]              pc
225  [NONE]              ->
225  [NONE]              orig_line
225  [NONE]              ,
225  [NONE]              frm
225  [NONE]              .
225  [NONE]              pse_tos
225  [NONE]              ,
225  [NONE]              
226  [NONE]              get_token_name
226  [FUNC_CALL]         (
226  [NONE]              frm
226  [NONE]              .
226  [NONE]              pse
226  [NONE]              [
226  [NONE]              frm
226  [NONE]              .
226  [NONE]              pse_tos
226  [NONE]              ]
226  [NONE]              .
226  [NONE]              type
226  [FUNC_CALL]         )
226  [NONE]              ,
226  [NONE]              
227  [NONE]              get_token_name
227  [FUNC_CALL]         (
227  [NONE]              pc
227  [NONE]              ->
227  [NONE]              type
227  [FUNC_CALL]         )
227  [NONE]              ,
227  [NONE]              
228  [NONE]              frm
228  [NONE]              .
228  [NONE]              pse
228  [NONE]              [
228  [NONE]              frm
228  [NONE]              .
228  [NONE]              pse_tos
228  [NONE]              ]
228  [NONE]              .
228  [NONE]              open_line
228  [NONE]              ,
228  [NONE]              
229  [NONE]              frm
229  [NONE]              .
229  [NONE]              pse
229  [NONE]              [
229  [NONE]              frm
229  [NONE]              .
229  [NONE]              pse_tos
229  [NONE]              ]
229  [NONE]              .
229  [NONE]              level
229  [NONE]              ,
229  [NONE]              
230  [NONE]              pc
230  [NONE]              ->
230  [NONE]              level
230  [FUNC_CALL]         )
230  [NONE]              ;
230  [NONE]              
231  [IF]                }
231  [NONE]              
232  [NONE]              else
232  [NONE]              
233  [ELSE]              {
233  [NONE]              
234  [NONE]              LOG_FMT
234  [FUNC_CALL]         (
234  [NONE]              LINDPSE
234  [NONE]              ,
234  [NONE]              " EOF] CLOSE [%d,%s], started on line %d\n"
234  [NONE]              ,
234  [NONE]              
235  [NONE]              frm
235  [NONE]              .
235  [NONE]              pse_tos
235  [NONE]              ,
235  [NONE]              get_token_name
235  [FUNC_CALL]         (
235  [NONE]              frm
235  [NONE]              .
235  [NONE]              pse
235  [NONE]              [
235  [NONE]              frm
235  [NONE]              .
235  [NONE]              pse_tos
235  [NONE]              ]
235  [NONE]              .
235  [NONE]              type
235  [FUNC_CALL]         )
235  [NONE]              ,
235  [NONE]              
236  [NONE]              frm
236  [NONE]              .
236  [NONE]              pse
236  [NONE]              [
236  [NONE]              frm
236  [NONE]              .
236  [NONE]              pse_tos
236  [NONE]              ]
236  [NONE]              .
236  [NONE]              open_line
236  [FUNC_CALL]         )
236  [NONE]              ;
236  [NONE]              
237  [ELSE]              }
237  [NONE]              
238  [NONE]              frm
238  [NONE]              .
238  [NONE]              pse_tos
238  [NONE]              --
238  [NONE]              ;
238  [NONE]              
239  [IF]                }
239  [NONE]              
240  [FUNC_DEF]          }
240  [NONE]              
243  [FUNC_DEF]          static
243  [FUNC_DEF]          int
243  [NONE]              token_indent
243  [FUNC_DEF]          (
243  [NONE]              c_token_t
243  [NONE]              type
243  [FUNC_DEF]          )
243  [NONE]              
244  [FUNC_DEF]          {
244  [NONE]              
245  [NONE]              switch
245  [SWITCH]            (
245  [NONE]              type
245  [SWITCH]            )
245  [NONE]              
246  [SWITCH]            {
246  [NONE]              
247  [NONE]              case
247  [NONE]              CT_IF
247  [NONE]              :
247  [NONE]              
248  [NONE]              case
248  [NONE]              CT_DO
248  [NONE]              :
248  [NONE]              
249  [CASE]              return
249  [NONE]              3
249  [NONE]              ;
249  [NONE]              
251  [NONE]              case
251  [NONE]              CT_FOR
251  [NONE]              :
251  [NONE]              
252  [NONE]              case
252  [NONE]              CT_ELSE
252  [NONE]              :
252  [COMMENT_END]       // wacky, but that's what is wanted
252  [NONE]              
253  [CASE]              return
253  [NONE]              4
253  [NONE]              ;
253  [NONE]              
255  [NONE]              case
255  [NONE]              CT_WHILE
255  [NONE]              :
255  [NONE]              
256  [CASE]              return
256  [NONE]              6
256  [NONE]              ;
256  [NONE]              
258  [NONE]              case
258  [NONE]              CT_SWITCH
258  [NONE]              :
258  [NONE]              
259  [CASE]              return
259  [NONE]              7
259  [NONE]              ;
259  [NONE]              
261  [NONE]              case
261  [NONE]              CT_ELSEIF
261  [NONE]              :
261  [NONE]              
262  [CASE]              return
262  [NONE]              8
262  [NONE]              ;
262  [NONE]              
264  [NONE]              default
264  [NONE]              :
264  [NONE]              
265  [CASE]              return
265  [NONE]              0
265  [NONE]              ;
265  [COMMENT_END]       //cpd.settings[UO_indent_braces].n;
265  [NONE]              
266  [SWITCH]            }
266  [NONE]              
267  [FUNC_DEF]          }
267  [NONE]              
270  [COMMENT_WHOLE]     /**␤ * Change the top-level indentation only by changing the column member in␤ * the chunk structures.␤ * The level indicator must already be set.␤ */
274  [NONE]              
275  [FUNC_DEF]          void
275  [NONE]              indent_text
275  [FUNC_DEF]          (
275  [NONE]              void
275  [FUNC_DEF]          )
275  [NONE]              
276  [FUNC_DEF]          {
276  [NONE]              
277  [NONE]              chunk_t
277  [NONE]              *
277  [NONE]              pc
277  [NONE]              ;
277  [NONE]              
278  [NONE]              chunk_t
278  [NONE]              *
278  [NONE]              next
278  [NONE]              ;
278  [NONE]              
279  [NONE]              chunk_t
279  [NONE]              *
279  [NONE]              prev
279  [NONE]              =
279  [NONE]              NULL
279  [NONE]              ;
279  [NONE]              
280  [NONE]              bool
280  [NONE]              did_newline
280  [NONE]              =
280  [NONE]              true
280  [NONE]              ;
280  [NONE]              
281  [NONE]              int
281  [NONE]              idx
281  [NONE]              ;
281  [NONE]              
282  [NONE]              int
282  [NONE]              vardefcol
282  [NONE]              =
282  [NONE]              0
282  [NONE]              ;
282  [NONE]              
283  [NONE]              int
283  [NONE]              indent_size
283  [NONE]              =
283  [NONE]              cpd
283  [NONE]              .
283  [NONE]              settings
283  [NONE]              [
283  [NONE]              UO_indent_columns
283  [NONE]              ]
283  [NONE]              .
283  [NONE]              n
283  [NONE]              ;
283  [NONE]              
284  [NONE]              int
284  [NONE]              tmp
284  [NONE]              ;
284  [NONE]              
285  [NONE]              struct
285  [STRUCT]            parse_frame
285  [STRUCT]            frm
285  [NONE]              ;
285  [NONE]              
286  [NONE]              bool
286  [NONE]              in_preproc
286  [NONE]              =
286  [NONE]              false
286  [NONE]              ,
286  [NONE]              was_preproc
286  [NONE]              =
286  [NONE]              false
286  [NONE]              ;
286  [NONE]              
287  [NONE]              int
287  [NONE]              indent_column
287  [NONE]              ;
287  [NONE]              
288  [NONE]              int
288  [NONE]              cout_col
288  [NONE]              =
288  [NONE]              0
288  [NONE]              ;
288  [COMMENT_END]       // for aligning << stuff
288  [NONE]              
289  [NONE]              int
289  [NONE]              cout_level
289  [NONE]              =
289  [NONE]              0
289  [NONE]              ;
289  [COMMENT_END]       // for aligning << stuff
289  [NONE]              
290  [NONE]              int
290  [NONE]              parent_token_indent
290  [NONE]              =
290  [NONE]              0
290  [NONE]              ;
290  [NONE]              
292  [NONE]              memset
292  [FUNC_CALL]         (
292  [NONE]              &
292  [NONE]              frm
292  [NONE]              ,
292  [NONE]              0
292  [NONE]              ,
292  [NONE]              sizeof
292  [TYPE_CAST]         (
292  [NONE]              frm
292  [TYPE_CAST]         )
292  [FUNC_CALL]         )
292  [NONE]              ;
292  [NONE]              
294  [COMMENT_WHOLE]     /* dummy top-level entry */
294  [NONE]              
295  [NONE]              frm
295  [NONE]              .
295  [NONE]              pse
295  [NONE]              [
295  [NONE]              0
295  [NONE]              ]
295  [NONE]              .
295  [NONE]              indent
295  [NONE]              =
295  [NONE]              1
295  [NONE]              ;
295  [NONE]              
296  [NONE]              frm
296  [NONE]              .
296  [NONE]              pse
296  [NONE]              [
296  [NONE]              0
296  [NONE]              ]
296  [NONE]              .
296  [NONE]              indent_tmp
296  [NONE]              =
296  [NONE]              1
296  [NONE]              ;
296  [NONE]              
297  [NONE]              frm
297  [NONE]              .
297  [NONE]              pse
297  [NONE]              [
297  [NONE]              0
297  [NONE]              ]
297  [NONE]              .
297  [NONE]              type
297  [NONE]              =
297  [NONE]              CT_EOF
297  [NONE]              ;
297  [NONE]              
299  [NONE]              pc
299  [NONE]              =
299  [NONE]              chunk_get_head
299  [FUNC_CALL]         (
299  [FUNC_CALL]         )
299  [NONE]              ;
299  [NONE]              
300  [NONE]              while
300  [WHILE]             (
300  [NONE]              pc
300  [NONE]              !=
300  [NONE]              NULL
300  [WHILE]             )
300  [NONE]              
301  [WHILE]             {
301  [NONE]              
302  [COMMENT_WHOLE]     /* Handle proprocessor transitions */
302  [NONE]              
303  [NONE]              was_preproc
303  [NONE]              =
303  [NONE]              in_preproc
303  [NONE]              ;
303  [NONE]              
304  [NONE]              in_preproc
304  [NONE]              =
304  [NONE]              (
304  [NONE]              pc
304  [NONE]              ->
304  [NONE]              flags
304  [NONE]              &
304  [NONE]              PCF_IN_PREPROC
304  [NONE]              )
304  [NONE]              !=
304  [NONE]              0
304  [NONE]              ;
304  [NONE]              
306  [NONE]              if
306  [IF]                (
306  [NONE]              cpd
306  [NONE]              .
306  [NONE]              settings
306  [NONE]              [
306  [NONE]              UO_indent_brace_parent
306  [NONE]              ]
306  [NONE]              .
306  [NONE]              b
306  [IF]                )
307  [IF]                
307  [NONE]              
308  [NONE]              parent_token_indent
308  [NONE]              =
308  [NONE]              token_indent
308  [FUNC_CALL]         (
308  [NONE]              pc
308  [NONE]              ->
308  [NONE]              parent_type
308  [FUNC_CALL]         )
308  [NONE]              ;
309  [IF]                
309  [NONE]              
311  [COMMENT_WHOLE]     /* Clean up after a #define */
311  [NONE]              
312  [NONE]              if
312  [IF]                (
312  [NONE]              !
312  [NONE]              in_preproc
312  [IF]                )
313  [IF]                
313  [NONE]              
314  [NONE]              while
314  [WHILE]             (
314  [NONE]              (
314  [NONE]              frm
314  [NONE]              .
314  [NONE]              pse_tos
314  [NONE]              >
314  [NONE]              0
314  [NONE]              )
314  [NONE]              &&
314  [NONE]              frm
314  [NONE]              .
314  [NONE]              pse
314  [NONE]              [
314  [NONE]              frm
314  [NONE]              .
314  [NONE]              pse_tos
314  [NONE]              ]
314  [NONE]              .
314  [NONE]              in_preproc
314  [WHILE]             )
315  [WHILE]             
315  [NONE]              
316  [NONE]              indent_pse_pop
316  [FUNC_CALL]         (
316  [NONE]              frm
316  [NONE]              ,
316  [NONE]              pc
316  [FUNC_CALL]         )
316  [NONE]              ;
316  [NONE]              
317  [WHILE]             
317  [NONE]              
318  [IF]                
319  [NONE]              else
319  [NONE]              
320  [ELSE]              {
320  [NONE]              
321  [NONE]              pf_check
321  [FUNC_CALL]         (
321  [NONE]              &
321  [NONE]              frm
321  [NONE]              ,
321  [NONE]              pc
321  [FUNC_CALL]         )
321  [NONE]              ;
321  [NONE]              
323  [NONE]              if
323  [IF]                (
323  [NONE]              !
323  [NONE]              was_preproc
323  [IF]                )
323  [NONE]              
324  [IF]                {
324  [NONE]              
325  [COMMENT_WHOLE]     /* Transition into a preproc by creating a dummy indent */
325  [NONE]              
326  [NONE]              frm
326  [NONE]              .
326  [NONE]              level
326  [NONE]              ++
326  [NONE]              ;
326  [NONE]              
327  [NONE]              indent_pse_push
327  [FUNC_CALL]         (
327  [NONE]              frm
327  [NONE]              ,
327  [NONE]              pc
327  [FUNC_CALL]         )
327  [NONE]              ;
327  [NONE]              
329  [NONE]              frm
329  [NONE]              .
329  [NONE]              pse
329  [NONE]              [
329  [NONE]              frm
329  [NONE]              .
329  [NONE]              pse_tos
329  [NONE]              ]
329  [NONE]              .
329  [NONE]              indent
329  [NONE]              =
329  [NONE]              1
329  [NONE]              +
329  [NONE]              indent_size
329  [NONE]              ;
329  [NONE]              
330  [NONE]              frm
330  [NONE]              .
330  [NONE]              pse
330  [NONE]              [
330  [NONE]              frm
330  [NONE]              .
330  [NONE]              pse_tos
330  [NONE]              ]
330  [NONE]              .
330  [NONE]              indent_tmp
330  [NONE]              =
330  [NONE]              frm
330  [NONE]              .
330  [NONE]              pse
330  [NONE]              [
330  [NONE]              frm
330  [NONE]              .
330  [NONE]              pse_tos
330  [NONE]              ]
330  [NONE]              .
330  [NONE]              indent
330  [NONE]              ;
330  [NONE]              
331  [IF]                }
331  [NONE]              
332  [ELSE]              }
332  [NONE]              
334  [NONE]              if
334  [IF]                (
334  [NONE]              (
334  [NONE]              cout_col
334  [NONE]              >
334  [NONE]              0
334  [NONE]              )
334  [NONE]              &&
334  [NONE]              
335  [NONE]              (
335  [NONE]              chunk_is_semicolon
335  [FUNC_CALL]         (
335  [NONE]              pc
335  [FUNC_CALL]         )
335  [NONE]              ||
335  [NONE]              
336  [NONE]              (
336  [NONE]              pc
336  [NONE]              ->
336  [NONE]              level
336  [NONE]              <
336  [NONE]              cout_level
336  [NONE]              )
336  [NONE]              )
336  [IF]                )
336  [NONE]              
337  [IF]                {
337  [NONE]              
338  [NONE]              cout_col
338  [NONE]              =
338  [NONE]              0
338  [NONE]              ;
338  [NONE]              
339  [NONE]              cout_level
339  [NONE]              =
339  [NONE]              0
339  [NONE]              ;
339  [NONE]              
340  [IF]                }
340  [NONE]              
342  [COMMENT_WHOLE]     /**␤       * Handle non-brace closures␤       */
344  [NONE]              
346  [NONE]              int
346  [NONE]              old_pse_tos
346  [NONE]              ;
346  [NONE]              
347  [NONE]              do
347  [NONE]              
348  [DO]                {
348  [NONE]              
349  [NONE]              old_pse_tos
349  [NONE]              =
349  [NONE]              frm
349  [NONE]              .
349  [NONE]              pse_tos
349  [NONE]              ;
349  [NONE]              
351  [COMMENT_WHOLE]     /* End anything that drops a level␤          * REVISIT: not sure about the preproc check␤          */
353  [NONE]              
354  [NONE]              if
354  [IF]                (
354  [NONE]              !
354  [NONE]              chunk_is_newline
354  [FUNC_CALL]         (
354  [NONE]              pc
354  [FUNC_CALL]         )
354  [NONE]              &&
354  [NONE]              
355  [NONE]              !
355  [NONE]              chunk_is_comment
355  [FUNC_CALL]         (
355  [NONE]              pc
355  [FUNC_CALL]         )
355  [NONE]              &&
355  [NONE]              
356  [NONE]              (
356  [NONE]              (
356  [NONE]              pc
356  [NONE]              ->
356  [NONE]              flags
356  [NONE]              &
356  [NONE]              PCF_IN_PREPROC
356  [NONE]              )
356  [NONE]              ==
356  [NONE]              0
356  [NONE]              )
356  [NONE]              &&
356  [NONE]              
357  [NONE]              (
357  [NONE]              frm
357  [NONE]              .
357  [NONE]              pse
357  [NONE]              [
357  [NONE]              frm
357  [NONE]              .
357  [NONE]              pse_tos
357  [NONE]              ]
357  [NONE]              .
357  [NONE]              level
357  [NONE]              >
357  [NONE]              pc
357  [NONE]              ->
357  [NONE]              level
357  [NONE]              )
357  [IF]                )
358  [IF]                
358  [NONE]              
359  [NONE]              indent_pse_pop
359  [FUNC_CALL]         (
359  [NONE]              frm
359  [NONE]              ,
359  [NONE]              pc
359  [FUNC_CALL]         )
359  [NONE]              ;
360  [IF]                
360  [NONE]              
362  [NONE]              if
362  [IF]                (
362  [NONE]              frm
362  [NONE]              .
362  [NONE]              pse
362  [NONE]              [
362  [NONE]              frm
362  [NONE]              .
362  [NONE]              pse_tos
362  [NONE]              ]
362  [NONE]              .
362  [NONE]              level
362  [NONE]              ==
362  [NONE]              pc
362  [NONE]              ->
362  [NONE]              level
362  [IF]                )
362  [NONE]              
363  [IF]                {
363  [NONE]              
364  [COMMENT_WHOLE]     /* process virtual braces closes (no text output) */
364  [NONE]              
365  [NONE]              if
365  [IF]                (
365  [NONE]              (
365  [NONE]              pc
365  [NONE]              ->
365  [NONE]              type
365  [NONE]              ==
365  [NONE]              CT_VBRACE_CLOSE
365  [NONE]              )
365  [NONE]              &&
365  [NONE]              
366  [NONE]              (
366  [NONE]              frm
366  [NONE]              .
366  [NONE]              pse
366  [NONE]              [
366  [NONE]              frm
366  [NONE]              .
366  [NONE]              pse_tos
366  [NONE]              ]
366  [NONE]              .
366  [NONE]              type
366  [NONE]              ==
366  [NONE]              CT_VBRACE_OPEN
366  [NONE]              )
366  [IF]                )
366  [NONE]              
367  [IF]                {
367  [NONE]              
368  [NONE]              indent_pse_pop
368  [FUNC_CALL]         (
368  [NONE]              frm
368  [NONE]              ,
368  [NONE]              pc
368  [FUNC_CALL]         )
368  [NONE]              ;
368  [NONE]              
369  [NONE]              frm
369  [NONE]              .
369  [NONE]              level
369  [NONE]              --
369  [NONE]              ;
369  [NONE]              
370  [NONE]              pc
370  [NONE]              =
370  [NONE]              chunk_get_next
370  [FUNC_CALL]         (
370  [NONE]              pc
370  [FUNC_CALL]         )
370  [NONE]              ;
370  [NONE]              
371  [IF]                }
371  [NONE]              
373  [COMMENT_WHOLE]     /* End any assign operations with a semicolon on the same level */
373  [NONE]              
374  [NONE]              if
374  [IF]                (
374  [NONE]              (
374  [NONE]              frm
374  [NONE]              .
374  [NONE]              pse
374  [NONE]              [
374  [NONE]              frm
374  [NONE]              .
374  [NONE]              pse_tos
374  [NONE]              ]
374  [NONE]              .
374  [NONE]              type
374  [NONE]              ==
374  [NONE]              CT_ASSIGN
374  [NONE]              )
374  [NONE]              &&
374  [NONE]              
375  [NONE]              (
375  [NONE]              chunk_is_semicolon
375  [FUNC_CALL]         (
375  [NONE]              pc
375  [FUNC_CALL]         )
375  [NONE]              ||
375  [NONE]              
376  [NONE]              (
376  [NONE]              pc
376  [NONE]              ->
376  [NONE]              type
376  [NONE]              ==
376  [NONE]              CT_COMMA
376  [NONE]              )
376  [NONE]              ||
376  [NONE]              
377  [NONE]              (
377  [NONE]              pc
377  [NONE]              ->
377  [NONE]              type
377  [NONE]              ==
377  [NONE]              CT_BRACE_OPEN
377  [NONE]              )
377  [NONE]              )
377  [IF]                )
378  [IF]                
378  [NONE]              
379  [NONE]              indent_pse_pop
379  [FUNC_CALL]         (
379  [NONE]              frm
379  [NONE]              ,
379  [NONE]              pc
379  [FUNC_CALL]         )
379  [NONE]              ;
380  [IF]                
380  [NONE]              
382  [COMMENT_WHOLE]     /* End any CPP class colon crap */
382  [NONE]              
383  [NONE]              if
383  [IF]                (
383  [NONE]              (
383  [NONE]              frm
383  [NONE]              .
383  [NONE]              pse
383  [NONE]              [
383  [NONE]              frm
383  [NONE]              .
383  [NONE]              pse_tos
383  [NONE]              ]
383  [NONE]              .
383  [NONE]              type
383  [NONE]              ==
383  [NONE]              CT_CLASS_COLON
383  [NONE]              )
383  [NONE]              &&
383  [NONE]              
384  [NONE]              (
384  [NONE]              (
384  [NONE]              pc
384  [NONE]              ->
384  [NONE]              type
384  [NONE]              ==
384  [NONE]              CT_BRACE_OPEN
384  [NONE]              )
384  [NONE]              ||
384  [NONE]              
385  [NONE]              chunk_is_semicolon
385  [FUNC_CALL]         (
385  [NONE]              pc
385  [FUNC_CALL]         )
385  [NONE]              )
385  [IF]                )
386  [IF]                
386  [NONE]              
387  [NONE]              indent_pse_pop
387  [FUNC_CALL]         (
387  [NONE]              frm
387  [NONE]              ,
387  [NONE]              pc
387  [FUNC_CALL]         )
387  [NONE]              ;
388  [IF]                
388  [NONE]              
390  [COMMENT_WHOLE]     /* a case is ended with another case or a close brace */
390  [NONE]              
391  [NONE]              if
391  [IF]                (
391  [NONE]              (
391  [NONE]              frm
391  [NONE]              .
391  [NONE]              pse
391  [NONE]              [
391  [NONE]              frm
391  [NONE]              .
391  [NONE]              pse_tos
391  [NONE]              ]
391  [NONE]              .
391  [NONE]              type
391  [NONE]              ==
391  [NONE]              CT_CASE
391  [NONE]              )
391  [NONE]              &&
391  [NONE]              
392  [NONE]              (
392  [NONE]              (
392  [NONE]              pc
392  [NONE]              ->
392  [NONE]              type
392  [NONE]              ==
392  [NONE]              CT_BRACE_CLOSE
392  [NONE]              )
392  [NONE]              ||
392  [NONE]              
393  [NONE]              (
393  [NONE]              pc
393  [NONE]              ->
393  [NONE]              type
393  [NONE]              ==
393  [NONE]              CT_CASE
393  [NONE]              )
393  [NONE]              )
393  [IF]                )
394  [IF]                
394  [NONE]              
395  [NONE]              indent_pse_pop
395  [FUNC_CALL]         (
395  [NONE]              frm
395  [NONE]              ,
395  [NONE]              pc
395  [FUNC_CALL]         )
395  [NONE]              ;
396  [IF]                
396  [NONE]              
398  [COMMENT_WHOLE]     /* a return is ended with a semicolon */
398  [NONE]              
399  [NONE]              if
399  [IF]                (
399  [NONE]              (
399  [NONE]              frm
399  [NONE]              .
399  [NONE]              pse
399  [NONE]              [
399  [NONE]              frm
399  [NONE]              .
399  [NONE]              pse_tos
399  [NONE]              ]
399  [NONE]              .
399  [NONE]              type
399  [NONE]              ==
399  [NONE]              CT_RETURN
399  [NONE]              )
399  [NONE]              &&
399  [NONE]              
400  [NONE]              chunk_is_semicolon
400  [FUNC_CALL]         (
400  [NONE]              pc
400  [FUNC_CALL]         )
400  [IF]                )
401  [IF]                
401  [NONE]              
402  [NONE]              indent_pse_pop
402  [FUNC_CALL]         (
402  [NONE]              frm
402  [NONE]              ,
402  [NONE]              pc
402  [FUNC_CALL]         )
402  [NONE]              ;
403  [IF]                
403  [NONE]              
405  [COMMENT_WHOLE]     /* Close out parens and squares */
405  [NONE]              
406  [NONE]              if
406  [IF]                (
406  [NONE]              (
406  [NONE]              frm
406  [NONE]              .
406  [NONE]              pse
406  [NONE]              [
406  [NONE]              frm
406  [NONE]              .
406  [NONE]              pse_tos
406  [NONE]              ]
406  [NONE]              .
406  [NONE]              type
406  [NONE]              ==
406  [NONE]              (
406  [NONE]              pc
406  [NONE]              ->
406  [NONE]              type
406  [NONE]              -
406  [NONE]              1
406  [NONE]              )
406  [NONE]              )
406  [NONE]              &&
406  [NONE]              
407  [NONE]              (
407  [NONE]              (
407  [NONE]              pc
407  [NONE]              ->
407  [NONE]              type
407  [NONE]              ==
407  [NONE]              CT_PAREN_CLOSE
407  [NONE]              )
407  [NONE]              ||
407  [NONE]              
408  [NONE]              (
408  [NONE]              pc
408  [NONE]              ->
408  [NONE]              type
408  [NONE]              ==
408  [NONE]              CT_SPAREN_CLOSE
408  [NONE]              )
408  [NONE]              ||
408  [NONE]              
409  [NONE]              (
409  [NONE]              pc
409  [NONE]              ->
409  [NONE]              type
409  [NONE]              ==
409  [NONE]              CT_FPAREN_CLOSE
409  [NONE]              )
409  [NONE]              ||
409  [NONE]              
410  [NONE]              (
410  [NONE]              pc
410  [NONE]              ->
410  [NONE]              type
410  [NONE]              ==
410  [NONE]              CT_SQUARE_CLOSE
410  [NONE]              )
410  [NONE]              ||
410  [NONE]              
411  [NONE]              (
411  [NONE]              pc
411  [NONE]              ->
411  [NONE]              type
411  [NONE]              ==
411  [NONE]              CT_ANGLE_CLOSE
411  [NONE]              )
411  [NONE]              )
411  [IF]                )
411  [NONE]              
412  [IF]                {
412  [NONE]              
413  [NONE]              indent_pse_pop
413  [FUNC_CALL]         (
413  [NONE]              frm
413  [NONE]              ,
413  [NONE]              pc
413  [FUNC_CALL]         )
413  [NONE]              ;
413  [NONE]              
414  [NONE]              frm
414  [NONE]              .
414  [NONE]              paren_count
414  [NONE]              --
414  [NONE]              ;
414  [NONE]              
415  [IF]                }
415  [NONE]              
416  [IF]                }
416  [NONE]              
417  [DO]                }
417  [NONE]              
417  [NONE]              while
417  [WHILE_OF_DO]       (
417  [NONE]              old_pse_tos
417  [NONE]              >
417  [NONE]              frm
417  [NONE]              .
417  [NONE]              pse_tos
417  [WHILE_OF_DO]       )
417  [WHILE_OF_DO]       ;
417  [NONE]              
419  [COMMENT_WHOLE]     /* Grab a copy of the current indent */
419  [NONE]              
420  [NONE]              indent_column
420  [NONE]              =
420  [NONE]              frm
420  [NONE]              .
420  [NONE]              pse
420  [NONE]              [
420  [NONE]              frm
420  [NONE]              .
420  [NONE]              pse_tos
420  [NONE]              ]
420  [NONE]              .
420  [NONE]              indent_tmp
420  [NONE]              ;
420  [NONE]              
422  [NONE]              if
422  [IF]                (
422  [NONE]              !
422  [NONE]              chunk_is_newline
422  [FUNC_CALL]         (
422  [NONE]              pc
422  [FUNC_CALL]         )
422  [NONE]              &&
422  [NONE]              !
422  [NONE]              chunk_is_comment
422  [FUNC_CALL]         (
422  [NONE]              pc
422  [FUNC_CALL]         )
422  [IF]                )
422  [NONE]              
423  [IF]                {
423  [NONE]              
424  [NONE]              LOG_FMT
424  [FUNC_CALL]         (
424  [NONE]              LINDPC
424  [NONE]              ,
424  [NONE]              " -=[ %.*s ]=- top=%d %s %d/%d\n"
424  [NONE]              ,
424  [NONE]              
425  [NONE]              pc
425  [NONE]              ->
425  [NONE]              len
425  [NONE]              ,
425  [NONE]              pc
425  [NONE]              ->
425  [NONE]              str
425  [NONE]              ,
425  [NONE]              
426  [NONE]              frm
426  [NONE]              .
426  [NONE]              pse_tos
426  [NONE]              ,
426  [NONE]              
427  [NONE]              get_token_name
427  [FUNC_CALL]         (
427  [NONE]              frm
427  [NONE]              .
427  [NONE]              pse
427  [NONE]              [
427  [NONE]              frm
427  [NONE]              .
427  [NONE]              pse_tos
427  [NONE]              ]
427  [NONE]              .
427  [NONE]              type
427  [FUNC_CALL]         )
427  [NONE]              ,
427  [NONE]              
428  [NONE]              frm
428  [NONE]              .
428  [NONE]              pse
428  [NONE]              [
428  [NONE]              frm
428  [NONE]              .
428  [NONE]              pse_tos
428  [NONE]              ]
428  [NONE]              .
428  [NONE]              indent_tmp
428  [NONE]              ,
428  [NONE]              
429  [NONE]              frm
429  [NONE]              .
429  [NONE]              pse
429  [NONE]              [
429  [NONE]              frm
429  [NONE]              .
429  [NONE]              pse_tos
429  [NONE]              ]
429  [NONE]              .
429  [NONE]              indent
429  [FUNC_CALL]         )
429  [NONE]              ;
429  [NONE]              
430  [IF]                }
430  [NONE]              
432  [COMMENT_WHOLE]     /**␤       * Handle stuff that can affect the current indent:␤       *  - brace close␤       *  - vbrace open␤       *  - brace open␤       *  - case         (immediate)␤       *  - labels       (immediate)␤       *  - class colons (immediate)␤       *␤       * And some stuff that can't␤       *  - open paren␤       *  - open square␤       *  - assignment␤       *  - return␤       */
446  [NONE]              
448  [NONE]              if
448  [IF]                (
448  [NONE]              pc
448  [NONE]              ->
448  [NONE]              type
448  [NONE]              ==
448  [NONE]              CT_BRACE_CLOSE
448  [IF]                )
448  [NONE]              
449  [IF]                {
449  [NONE]              
450  [NONE]              if
450  [IF]                (
450  [NONE]              frm
450  [NONE]              .
450  [NONE]              pse
450  [NONE]              [
450  [NONE]              frm
450  [NONE]              .
450  [NONE]              pse_tos
450  [NONE]              ]
450  [NONE]              .
450  [NONE]              type
450  [NONE]              ==
450  [NONE]              CT_BRACE_OPEN
450  [IF]                )
450  [NONE]              
451  [IF]                {
451  [NONE]              
452  [NONE]              indent_pse_pop
452  [FUNC_CALL]         (
452  [NONE]              frm
452  [NONE]              ,
452  [NONE]              pc
452  [FUNC_CALL]         )
452  [NONE]              ;
452  [NONE]              
453  [NONE]              frm
453  [NONE]              .
453  [NONE]              level
453  [NONE]              --
453  [NONE]              ;
453  [NONE]              
455  [COMMENT_WHOLE]     /* Update the indent_column if needed */
455  [NONE]              
456  [NONE]              if
456  [IF]                (
456  [NONE]              !
456  [NONE]              cpd
456  [NONE]              .
456  [NONE]              settings
456  [NONE]              [
456  [NONE]              UO_indent_braces
456  [NONE]              ]
456  [NONE]              .
456  [NONE]              b
456  [NONE]              &&
456  [NONE]              
457  [NONE]              (
457  [NONE]              parent_token_indent
457  [NONE]              ==
457  [NONE]              0
457  [NONE]              )
457  [IF]                )
458  [IF]                
458  [NONE]              
459  [NONE]              indent_column
459  [NONE]              =
459  [NONE]              frm
459  [NONE]              .
459  [NONE]              pse
459  [NONE]              [
459  [NONE]              frm
459  [NONE]              .
459  [NONE]              pse_tos
459  [NONE]              ]
459  [NONE]              .
459  [NONE]              indent_tmp
459  [NONE]              ;
460  [IF]                
460  [NONE]              
462  [NONE]              if
462  [IF]                (
462  [NONE]              (
462  [NONE]              pc
462  [NONE]              ->
462  [NONE]              parent_type
462  [NONE]              ==
462  [NONE]              CT_IF
462  [NONE]              )
462  [NONE]              ||
462  [NONE]              
463  [NONE]              (
463  [NONE]              pc
463  [NONE]              ->
463  [NONE]              parent_type
463  [NONE]              ==
463  [NONE]              CT_ELSE
463  [NONE]              )
463  [NONE]              ||
463  [NONE]              
464  [NONE]              (
464  [NONE]              pc
464  [NONE]              ->
464  [NONE]              parent_type
464  [NONE]              ==
464  [NONE]              CT_ELSEIF
464  [NONE]              )
464  [NONE]              ||
464  [NONE]              
465  [NONE]              (
465  [NONE]              pc
465  [NONE]              ->
465  [NONE]              parent_type
465  [NONE]              ==
465  [NONE]              CT_DO
465  [NONE]              )
465  [NONE]              ||
465  [NONE]              
466  [NONE]              (
466  [NONE]              pc
466  [NONE]              ->
466  [NONE]              parent_type
466  [NONE]              ==
466  [NONE]              CT_WHILE
466  [NONE]              )
466  [NONE]              ||
466  [NONE]              
467  [NONE]              (
467  [NONE]              pc
467  [NONE]              ->
467  [NONE]              parent_type
467  [NONE]              ==
467  [NONE]              CT_SWITCH
467  [NONE]              )
467  [NONE]              ||
467  [NONE]              
468  [NONE]              (
468  [NONE]              pc
468  [NONE]              ->
468  [NONE]              parent_type
468  [NONE]              ==
468  [NONE]              CT_FOR
468  [NONE]              )
468  [IF]                )
469  [IF]                
469  [NONE]              
470  [NONE]              indent_column
470  [NONE]              +=
470  [NONE]              cpd
470  [NONE]              .
470  [NONE]              settings
470  [NONE]              [
470  [NONE]              UO_indent_brace
470  [NONE]              ]
470  [NONE]              .
470  [NONE]              n
470  [NONE]              ;
470  [NONE]              
471  [IF]                
472  [IF]                }
472  [NONE]              
473  [IF]                }
473  [NONE]              
474  [NONE]              else
474  [NONE]              if
474  [ELSEIF]            (
474  [NONE]              pc
474  [NONE]              ->
474  [NONE]              type
474  [NONE]              ==
474  [NONE]              CT_VBRACE_OPEN
474  [ELSEIF]            )
474  [NONE]              
475  [ELSEIF]            {
475  [NONE]              
476  [NONE]              frm
476  [NONE]              .
476  [NONE]              level
476  [NONE]              ++
476  [NONE]              ;
476  [NONE]              
477  [NONE]              indent_pse_push
477  [FUNC_CALL]         (
477  [NONE]              frm
477  [NONE]              ,
477  [NONE]              pc
477  [FUNC_CALL]         )
477  [NONE]              ;
477  [NONE]              
479  [NONE]              frm
479  [NONE]              .
479  [NONE]              pse
479  [NONE]              [
479  [NONE]              frm
479  [NONE]              .
479  [NONE]              pse_tos
479  [NONE]              ]
479  [NONE]              .
479  [NONE]              indent
479  [NONE]              =
479  [NONE]              frm
479  [NONE]              .
479  [NONE]              pse
479  [NONE]              [
479  [NONE]              frm
479  [NONE]              .
479  [NONE]              pse_tos
479  [NONE]              -
479  [NONE]              1
479  [NONE]              ]
479  [NONE]              .
479  [NONE]              indent
479  [NONE]              +
479  [NONE]              indent_size
479  [NONE]              ;
479  [NONE]              
480  [NONE]              frm
480  [NONE]              .
480  [NONE]              pse
480  [NONE]              [
480  [NONE]              frm
480  [NONE]              .
480  [NONE]              pse_tos
480  [NONE]              ]
480  [NONE]              .
480  [NONE]              indent_tmp
480  [NONE]              =
480  [NONE]              frm
480  [NONE]              .
480  [NONE]              pse
480  [NONE]              [
480  [NONE]              frm
480  [NONE]              .
480  [NONE]              pse_tos
480  [NONE]              ]
480  [NONE]              .
480  [NONE]              indent
480  [NONE]              ;
480  [NONE]              
482  [COMMENT_WHOLE]     /* Always indent on virtual braces */
482  [NONE]              
483  [NONE]              indent_column
483  [NONE]              =
483  [NONE]              frm
483  [NONE]              .
483  [NONE]              pse
483  [NONE]              [
483  [NONE]              frm
483  [NONE]              .
483  [NONE]              pse_tos
483  [NONE]              ]
483  [NONE]              .
483  [NONE]              indent_tmp
483  [NONE]              ;
483  [NONE]              
484  [ELSEIF]            }
484  [NONE]              
485  [NONE]              else
485  [NONE]              if
485  [ELSEIF]            (
485  [NONE]              pc
485  [NONE]              ->
485  [NONE]              type
485  [NONE]              ==
485  [NONE]              CT_BRACE_OPEN
485  [ELSEIF]            )
485  [NONE]              
486  [ELSEIF]            {
486  [NONE]              
487  [NONE]              frm
487  [NONE]              .
487  [NONE]              level
487  [NONE]              ++
487  [NONE]              ;
487  [NONE]              
488  [NONE]              indent_pse_push
488  [FUNC_CALL]         (
488  [NONE]              frm
488  [NONE]              ,
488  [NONE]              pc
488  [FUNC_CALL]         )
488  [NONE]              ;
488  [NONE]              
490  [NONE]              if
490  [IF]                (
490  [NONE]              frm
490  [NONE]              .
490  [NONE]              paren_count
490  [NONE]              !=
490  [NONE]              0
490  [IF]                )
491  [IF]                
491  [NONE]              
492  [COMMENT_WHOLE]     /* We are inside ({ ... }) -- indent one tab from the paren */
492  [NONE]              
493  [NONE]              frm
493  [NONE]              .
493  [NONE]              pse
493  [NONE]              [
493  [NONE]              frm
493  [NONE]              .
493  [NONE]              pse_tos
493  [NONE]              ]
493  [NONE]              .
493  [NONE]              indent
493  [NONE]              =
493  [NONE]              frm
493  [NONE]              .
493  [NONE]              pse
493  [NONE]              [
493  [NONE]              frm
493  [NONE]              .
493  [NONE]              pse_tos
493  [NONE]              -
493  [NONE]              1
493  [NONE]              ]
493  [NONE]              .
493  [NONE]              indent_tmp
493  [NONE]              +
493  [NONE]              indent_size
493  [NONE]              ;
493  [NONE]              
494  [IF]                
495  [NONE]              else
495  [NONE]              
496  [ELSE]              {
496  [NONE]              
497  [COMMENT_WHOLE]     /* Use the prev indent level + indent_size. */
497  [NONE]              
498  [NONE]              frm
498  [NONE]              .
498  [NONE]              pse
498  [NONE]              [
498  [NONE]              frm
498  [NONE]              .
498  [NONE]              pse_tos
498  [NONE]              ]
498  [NONE]              .
498  [NONE]              indent
498  [NONE]              =
498  [NONE]              frm
498  [NONE]              .
498  [NONE]              pse
498  [NONE]              [
498  [NONE]              frm
498  [NONE]              .
498  [NONE]              pse_tos
498  [NONE]              -
498  [NONE]              1
498  [NONE]              ]
498  [NONE]              .
498  [NONE]              indent
498  [NONE]              +
498  [NONE]              indent_size
498  [NONE]              ;
498  [NONE]              
500  [COMMENT_WHOLE]     /* If this brace is part of a statement, bump it out by indent_brace */
500  [NONE]              
501  [NONE]              if
501  [IF]                (
501  [NONE]              (
501  [NONE]              pc
501  [NONE]              ->
501  [NONE]              parent_type
501  [NONE]              ==
501  [NONE]              CT_IF
501  [NONE]              )
501  [NONE]              ||
501  [NONE]              
502  [NONE]              (
502  [NONE]              pc
502  [NONE]              ->
502  [NONE]              parent_type
502  [NONE]              ==
502  [NONE]              CT_ELSE
502  [NONE]              )
502  [NONE]              ||
502  [NONE]              
503  [NONE]              (
503  [NONE]              pc
503  [NONE]              ->
503  [NONE]              parent_type
503  [NONE]              ==
503  [NONE]              CT_ELSEIF
503  [NONE]              )
503  [NONE]              ||
503  [NONE]              
504  [NONE]              (
504  [NONE]              pc
504  [NONE]              ->
504  [NONE]              parent_type
504  [NONE]              ==
504  [NONE]              CT_DO
504  [NONE]              )
504  [NONE]              ||
504  [NONE]              
505  [NONE]              (
505  [NONE]              pc
505  [NONE]              ->
505  [NONE]              parent_type
505  [NONE]              ==
505  [NONE]              CT_WHILE
505  [NONE]              )
505  [NONE]              ||
505  [NONE]              
506  [NONE]              (
506  [NONE]              pc
506  [NONE]              ->
506  [NONE]              parent_type
506  [NONE]              ==
506  [NONE]              CT_SWITCH
506  [NONE]              )
506  [NONE]              ||
506  [NONE]              
507  [NONE]              (
507  [NONE]              pc
507  [NONE]              ->
507  [NONE]              parent_type
507  [NONE]              ==
507  [NONE]              CT_FOR
507  [NONE]              )
507  [IF]                )
507  [NONE]              
508  [IF]                {
508  [NONE]              
509  [NONE]              if
509  [IF]                (
509  [NONE]              parent_token_indent
509  [NONE]              !=
509  [NONE]              0
509  [IF]                )
510  [IF]                
510  [NONE]              
511  [NONE]              frm
511  [NONE]              .
511  [NONE]              pse
511  [NONE]              [
511  [NONE]              frm
511  [NONE]              .
511  [NONE]              pse_tos
511  [NONE]              ]
511  [NONE]              .
511  [NONE]              indent
511  [NONE]              +=
511  [NONE]              parent_token_indent
511  [NONE]              -
511  [NONE]              indent_size
511  [NONE]              ;
511  [NONE]              
512  [IF]                
513  [NONE]              else
513  [NONE]              
514  [ELSE]              {
514  [NONE]              
515  [NONE]              frm
515  [NONE]              .
515  [NONE]              pse
515  [NONE]              [
515  [NONE]              frm
515  [NONE]              .
515  [NONE]              pse_tos
515  [NONE]              ]
515  [NONE]              .
515  [NONE]              indent
515  [NONE]              +=
515  [NONE]              cpd
515  [NONE]              .
515  [NONE]              settings
515  [NONE]              [
515  [NONE]              UO_indent_brace
515  [NONE]              ]
515  [NONE]              .
515  [NONE]              n
515  [NONE]              ;
515  [NONE]              
516  [NONE]              indent_column
516  [NONE]              +=
516  [NONE]              cpd
516  [NONE]              .
516  [NONE]              settings
516  [NONE]              [
516  [NONE]              UO_indent_brace
516  [NONE]              ]
516  [NONE]              .
516  [NONE]              n
516  [NONE]              ;
516  [NONE]              
517  [ELSE]              }
517  [NONE]              
518  [IF]                }
518  [NONE]              
519  [NONE]              else
519  [NONE]              if
519  [ELSEIF]            (
519  [NONE]              pc
519  [NONE]              ->
519  [NONE]              parent_type
519  [NONE]              ==
519  [NONE]              CT_CASE
519  [ELSEIF]            )
519  [NONE]              
520  [ELSEIF]            {
520  [NONE]              
521  [COMMENT_WHOLE]     /* The indent_case_brace setting affects the parent CT_CASE */
521  [NONE]              
522  [NONE]              frm
522  [NONE]              .
522  [NONE]              pse
522  [NONE]              [
522  [NONE]              frm
522  [NONE]              .
522  [NONE]              pse_tos
522  [NONE]              ]
522  [NONE]              .
522  [NONE]              indent_tmp
522  [NONE]              +=
522  [NONE]              cpd
522  [NONE]              .
522  [NONE]              settings
522  [NONE]              [
522  [NONE]              UO_indent_case_brace
522  [NONE]              ]
522  [NONE]              .
522  [NONE]              n
522  [NONE]              ;
522  [NONE]              
523  [NONE]              frm
523  [NONE]              .
523  [NONE]              pse
523  [NONE]              [
523  [NONE]              frm
523  [NONE]              .
523  [NONE]              pse_tos
523  [NONE]              ]
523  [NONE]              .
523  [NONE]              indent
523  [NONE]              +=
523  [NONE]              cpd
523  [NONE]              .
523  [NONE]              settings
523  [NONE]              [
523  [NONE]              UO_indent_case_brace
523  [NONE]              ]
523  [NONE]              .
523  [NONE]              n
523  [NONE]              ;
523  [NONE]              
524  [ELSEIF]            }
524  [NONE]              
525  [NONE]              else
525  [NONE]              if
525  [ELSEIF]            (
525  [NONE]              (
525  [NONE]              pc
525  [NONE]              ->
525  [NONE]              parent_type
525  [NONE]              ==
525  [NONE]              CT_CLASS
525  [NONE]              )
525  [NONE]              &&
525  [NONE]              !
525  [NONE]              cpd
525  [NONE]              .
525  [NONE]              settings
525  [NONE]              [
525  [NONE]              UO_indent_class
525  [NONE]              ]
525  [NONE]              .
525  [NONE]              b
525  [ELSEIF]            )
526  [ELSEIF]            
526  [NONE]              
527  [NONE]              frm
527  [NONE]              .
527  [NONE]              pse
527  [NONE]              [
527  [NONE]              frm
527  [NONE]              .
527  [NONE]              pse_tos
527  [NONE]              ]
527  [NONE]              .
527  [NONE]              indent
527  [NONE]              -=
527  [NONE]              indent_size
527  [NONE]              ;
527  [NONE]              
528  [ELSEIF]            
529  [NONE]              else
529  [NONE]              if
529  [ELSEIF]            (
529  [NONE]              (
529  [NONE]              pc
529  [NONE]              ->
529  [NONE]              parent_type
529  [NONE]              ==
529  [NONE]              CT_NAMESPACE
529  [NONE]              )
529  [NONE]              &&
529  [NONE]              !
529  [NONE]              cpd
529  [NONE]              .
529  [NONE]              settings
529  [NONE]              [
529  [NONE]              UO_indent_namespace
529  [NONE]              ]
529  [NONE]              .
529  [NONE]              b
529  [ELSEIF]            )
530  [ELSEIF]            
530  [NONE]              
531  [NONE]              frm
531  [NONE]              .
531  [NONE]              pse
531  [NONE]              [
531  [NONE]              frm
531  [NONE]              .
531  [NONE]              pse_tos
531  [NONE]              ]
531  [NONE]              .
531  [NONE]              indent
531  [NONE]              -=
531  [NONE]              indent_size
531  [NONE]              ;
531  [NONE]              
532  [ELSEIF]            
533  [ELSE]              }
533  [NONE]              
535  [NONE]              if
535  [IF]                (
535  [NONE]              (
535  [NONE]              pc
535  [NONE]              ->
535  [NONE]              flags
535  [NONE]              &
535  [NONE]              PCF_DONT_INDENT
535  [NONE]              )
535  [NONE]              !=
535  [NONE]              0
535  [IF]                )
535  [NONE]              
536  [IF]                {
536  [NONE]              
537  [NONE]              frm
537  [NONE]              .
537  [NONE]              pse
537  [NONE]              [
537  [NONE]              frm
537  [NONE]              .
537  [NONE]              pse_tos
537  [NONE]              ]
537  [NONE]              .
537  [NONE]              indent
537  [NONE]              =
537  [NONE]              pc
537  [NONE]              ->
537  [NONE]              column
537  [NONE]              ;
537  [NONE]              
538  [NONE]              indent_column
538  [NONE]              =
538  [NONE]              pc
538  [NONE]              ->
538  [NONE]              column
538  [NONE]              ;
538  [NONE]              
539  [IF]                }
539  [NONE]              
540  [NONE]              else
540  [NONE]              
541  [ELSE]              {
541  [NONE]              
542  [COMMENT_WHOLE]     /**␤             * If there isn't a newline between the open brace and the next␤             * item, just indent to wherever the next token is.␤             * This covers this sort of stuff:␤             * { a++;␤             *   b--; };␤             */
548  [NONE]              
549  [NONE]              next
549  [NONE]              =
549  [NONE]              chunk_get_next_ncnl
549  [FUNC_CALL]         (
549  [NONE]              pc
549  [FUNC_CALL]         )
549  [NONE]              ;
549  [NONE]              
550  [NONE]              if
550  [IF]                (
550  [NONE]              !
550  [NONE]              chunk_is_newline_between
550  [FUNC_CALL]         (
550  [NONE]              pc
550  [NONE]              ,
550  [NONE]              next
550  [FUNC_CALL]         )
550  [IF]                )
551  [IF]                
551  [NONE]              
552  [NONE]              frm
552  [NONE]              .
552  [NONE]              pse
552  [NONE]              [
552  [NONE]              frm
552  [NONE]              .
552  [NONE]              pse_tos
552  [NONE]              ]
552  [NONE]              .
552  [NONE]              indent
552  [NONE]              =
552  [NONE]              next
552  [NONE]              ->
552  [NONE]              column
552  [NONE]              ;
552  [NONE]              
553  [IF]                
553  [NONE]              
554  [NONE]              frm
554  [NONE]              .
554  [NONE]              pse
554  [NONE]              [
554  [NONE]              frm
554  [NONE]              .
554  [NONE]              pse_tos
554  [NONE]              ]
554  [NONE]              .
554  [NONE]              indent_tmp
554  [NONE]              =
554  [NONE]              frm
554  [NONE]              .
554  [NONE]              pse
554  [NONE]              [
554  [NONE]              frm
554  [NONE]              .
554  [NONE]              pse_tos
554  [NONE]              ]
554  [NONE]              .
554  [NONE]              indent
554  [NONE]              ;
554  [NONE]              
555  [NONE]              frm
555  [NONE]              .
555  [NONE]              pse
555  [NONE]              [
555  [NONE]              frm
555  [NONE]              .
555  [NONE]              pse_tos
555  [NONE]              ]
555  [NONE]              .
555  [NONE]              open_line
555  [NONE]              =
555  [NONE]              pc
555  [NONE]              ->
555  [NONE]              orig_line
555  [NONE]              ;
555  [NONE]              
557  [COMMENT_WHOLE]     /* Update the indent_column if needed */
557  [NONE]              
558  [NONE]              if
558  [IF]                (
558  [NONE]              cpd
558  [NONE]              .
558  [NONE]              settings
558  [NONE]              [
558  [NONE]              UO_indent_braces
558  [NONE]              ]
558  [NONE]              .
558  [NONE]              n
558  [NONE]              ||
558  [NONE]              
559  [NONE]              (
559  [NONE]              parent_token_indent
559  [NONE]              !=
559  [NONE]              0
559  [NONE]              )
559  [IF]                )
560  [IF]                
560  [NONE]              
561  [NONE]              indent_column
561  [NONE]              =
561  [NONE]              frm
561  [NONE]              .
561  [NONE]              pse
561  [NONE]              [
561  [NONE]              frm
561  [NONE]              .
561  [NONE]              pse_tos
561  [NONE]              ]
561  [NONE]              .
561  [NONE]              indent_tmp
561  [NONE]              ;
561  [NONE]              
562  [IF]                
563  [ELSE]              }
563  [NONE]              
564  [ELSEIF]            }
564  [NONE]              
565  [NONE]              else
565  [NONE]              if
565  [ELSEIF]            (
565  [NONE]              pc
565  [NONE]              ->
565  [NONE]              type
565  [NONE]              ==
565  [NONE]              CT_CASE
565  [ELSEIF]            )
565  [NONE]              
566  [ELSEIF]            {
566  [NONE]              
567  [COMMENT_WHOLE]     /* Start a case - indent UO_indent_switch_case from the switch level */
567  [NONE]              
568  [NONE]              tmp
568  [NONE]              =
568  [NONE]              frm
568  [NONE]              .
568  [NONE]              pse
568  [NONE]              [
568  [NONE]              frm
568  [NONE]              .
568  [NONE]              pse_tos
568  [NONE]              ]
568  [NONE]              .
568  [NONE]              indent
568  [NONE]              +
568  [NONE]              cpd
568  [NONE]              .
568  [NONE]              settings
568  [NONE]              [
568  [NONE]              UO_indent_switch_case
568  [NONE]              ]
568  [NONE]              .
568  [NONE]              n
568  [NONE]              ;
568  [NONE]              
570  [NONE]              indent_pse_push
570  [FUNC_CALL]         (
570  [NONE]              frm
570  [NONE]              ,
570  [NONE]              pc
570  [FUNC_CALL]         )
570  [NONE]              ;
570  [NONE]              
572  [NONE]              frm
572  [NONE]              .
572  [NONE]              pse
572  [NONE]              [
572  [NONE]              frm
572  [NONE]              .
572  [NONE]              pse_tos
572  [NONE]              ]
572  [NONE]              .
572  [NONE]              indent
572  [NONE]              =
572  [NONE]              tmp
572  [NONE]              ;
572  [NONE]              
573  [NONE]              frm
573  [NONE]              .
573  [NONE]              pse
573  [NONE]              [
573  [NONE]              frm
573  [NONE]              .
573  [NONE]              pse_tos
573  [NONE]              ]
573  [NONE]              .
573  [NONE]              indent_tmp
573  [NONE]              =
573  [NONE]              tmp
573  [NONE]              -
573  [NONE]              indent_size
573  [NONE]              ;
573  [NONE]              
575  [COMMENT_WHOLE]     /* Always set on case statements */
575  [NONE]              
576  [NONE]              indent_column
576  [NONE]              =
576  [NONE]              frm
576  [NONE]              .
576  [NONE]              pse
576  [NONE]              [
576  [NONE]              frm
576  [NONE]              .
576  [NONE]              pse_tos
576  [NONE]              ]
576  [NONE]              .
576  [NONE]              indent_tmp
576  [NONE]              ;
576  [NONE]              
577  [ELSEIF]            }
577  [NONE]              
578  [NONE]              else
578  [NONE]              if
578  [ELSEIF]            (
578  [NONE]              pc
578  [NONE]              ->
578  [NONE]              type
578  [NONE]              ==
578  [NONE]              CT_LABEL
578  [ELSEIF]            )
578  [NONE]              
579  [ELSEIF]            {
579  [NONE]              
580  [COMMENT_WHOLE]     /* Labels get sent to the left or backed up */
580  [NONE]              
581  [NONE]              if
581  [IF]                (
581  [NONE]              cpd
581  [NONE]              .
581  [NONE]              settings
581  [NONE]              [
581  [NONE]              UO_indent_label
581  [NONE]              ]
581  [NONE]              .
581  [NONE]              n
581  [NONE]              >
581  [NONE]              0
581  [IF]                )
582  [IF]                
582  [NONE]              
583  [NONE]              indent_column
583  [NONE]              =
583  [NONE]              cpd
583  [NONE]              .
583  [NONE]              settings
583  [NONE]              [
583  [NONE]              UO_indent_label
583  [NONE]              ]
583  [NONE]              .
583  [NONE]              n
583  [NONE]              ;
583  [NONE]              
584  [IF]                
585  [NONE]              else
586  [ELSE]              
586  [NONE]              
587  [NONE]              indent_column
587  [NONE]              =
587  [NONE]              frm
587  [NONE]              .
587  [NONE]              pse
587  [NONE]              [
587  [NONE]              frm
587  [NONE]              .
587  [NONE]              pse_tos
587  [NONE]              ]
587  [NONE]              .
587  [NONE]              indent
587  [NONE]              +
587  [NONE]              
588  [NONE]              cpd
588  [NONE]              .
588  [NONE]              settings
588  [NONE]              [
588  [NONE]              UO_indent_label
588  [NONE]              ]
588  [NONE]              .
588  [NONE]              n
588  [NONE]              ;
588  [NONE]              
589  [ELSE]              
590  [ELSEIF]            }
590  [NONE]              
591  [NONE]              else
591  [NONE]              if
591  [ELSEIF]            (
591  [NONE]              pc
591  [NONE]              ->
591  [NONE]              type
591  [NONE]              ==
591  [NONE]              CT_CLASS_COLON
591  [ELSEIF]            )
591  [NONE]              
592  [ELSEIF]            {
592  [NONE]              
593  [COMMENT_WHOLE]     /* just indent one level */
593  [NONE]              
594  [NONE]              indent_pse_push
594  [FUNC_CALL]         (
594  [NONE]              frm
594  [NONE]              ,
594  [NONE]              pc
594  [FUNC_CALL]         )
594  [NONE]              ;
594  [NONE]              
595  [NONE]              frm
595  [NONE]              .
595  [NONE]              pse
595  [NONE]              [
595  [NONE]              frm
595  [NONE]              .
595  [NONE]              pse_tos
595  [NONE]              ]
595  [NONE]              .
595  [NONE]              indent
595  [NONE]              =
595  [NONE]              frm
595  [NONE]              .
595  [NONE]              pse
595  [NONE]              [
595  [NONE]              frm
595  [NONE]              .
595  [NONE]              pse_tos
595  [NONE]              -
595  [NONE]              1
595  [NONE]              ]
595  [NONE]              .
595  [NONE]              indent_tmp
595  [NONE]              +
595  [NONE]              indent_size
595  [NONE]              ;
595  [NONE]              
596  [NONE]              frm
596  [NONE]              .
596  [NONE]              pse
596  [NONE]              [
596  [NONE]              frm
596  [NONE]              .
596  [NONE]              pse_tos
596  [NONE]              ]
596  [NONE]              .
596  [NONE]              indent_tmp
596  [NONE]              =
596  [NONE]              frm
596  [NONE]              .
596  [NONE]              pse
596  [NONE]              [
596  [NONE]              frm
596  [NONE]              .
596  [NONE]              pse_tos
596  [NONE]              ]
596  [NONE]              .
596  [NONE]              indent
596  [NONE]              ;
596  [NONE]              
598  [NONE]              indent_column
598  [NONE]              =
598  [NONE]              frm
598  [NONE]              .
598  [NONE]              pse
598  [NONE]              [
598  [NONE]              frm
598  [NONE]              .
598  [NONE]              pse_tos
598  [NONE]              ]
598  [NONE]              .
598  [NONE]              indent_tmp
598  [NONE]              ;
598  [NONE]              
600  [NONE]              if
600  [IF]                (
600  [NONE]              cpd
600  [NONE]              .
600  [NONE]              settings
600  [NONE]              [
600  [NONE]              UO_indent_class_colon
600  [NONE]              ]
600  [NONE]              .
600  [NONE]              b
600  [IF]                )
600  [NONE]              
601  [IF]                {
601  [NONE]              
602  [NONE]              prev
602  [NONE]              =
602  [NONE]              chunk_get_prev
602  [FUNC_CALL]         (
602  [NONE]              pc
602  [FUNC_CALL]         )
602  [NONE]              ;
602  [NONE]              
603  [NONE]              if
603  [IF]                (
603  [NONE]              chunk_is_newline
603  [FUNC_CALL]         (
603  [NONE]              prev
603  [FUNC_CALL]         )
603  [IF]                )
604  [IF]                
604  [NONE]              
605  [NONE]              frm
605  [NONE]              .
605  [NONE]              pse
605  [NONE]              [
605  [NONE]              frm
605  [NONE]              .
605  [NONE]              pse_tos
605  [NONE]              ]
605  [NONE]              .
605  [NONE]              indent
605  [NONE]              +=
605  [NONE]              2
605  [NONE]              ;
605  [NONE]              
606  [COMMENT_WHOLE]     /* don't change indent of current line */
606  [NONE]              
607  [IF]                
608  [IF]                }
608  [NONE]              
609  [ELSEIF]            }
609  [NONE]              
610  [NONE]              else
610  [NONE]              if
610  [ELSEIF]            (
610  [NONE]              (
610  [NONE]              pc
610  [NONE]              ->
610  [NONE]              type
610  [NONE]              ==
610  [NONE]              CT_PAREN_OPEN
610  [NONE]              )
610  [NONE]              ||
610  [NONE]              
611  [NONE]              (
611  [NONE]              pc
611  [NONE]              ->
611  [NONE]              type
611  [NONE]              ==
611  [NONE]              CT_SPAREN_OPEN
611  [NONE]              )
611  [NONE]              ||
611  [NONE]              
612  [NONE]              (
612  [NONE]              pc
612  [NONE]              ->
612  [NONE]              type
612  [NONE]              ==
612  [NONE]              CT_FPAREN_OPEN
612  [NONE]              )
612  [NONE]              ||
612  [NONE]              
613  [NONE]              (
613  [NONE]              pc
613  [NONE]              ->
613  [NONE]              type
613  [NONE]              ==
613  [NONE]              CT_SQUARE_OPEN
613  [NONE]              )
613  [NONE]              ||
613  [NONE]              
614  [NONE]              (
614  [NONE]              pc
614  [NONE]              ->
614  [NONE]              type
614  [NONE]              ==
614  [NONE]              CT_ANGLE_OPEN
614  [NONE]              )
614  [ELSEIF]            )
614  [NONE]              
615  [ELSEIF]            {
615  [NONE]              
616  [COMMENT_WHOLE]     /* Open parens and squares - never update indent_column */
616  [NONE]              
617  [NONE]              indent_pse_push
617  [FUNC_CALL]         (
617  [NONE]              frm
617  [NONE]              ,
617  [NONE]              pc
617  [FUNC_CALL]         )
617  [NONE]              ;
617  [NONE]              
618  [NONE]              frm
618  [NONE]              .
618  [NONE]              pse
618  [NONE]              [
618  [NONE]              frm
618  [NONE]              .
618  [NONE]              pse_tos
618  [NONE]              ]
618  [NONE]              .
618  [NONE]              indent
618  [NONE]              =
618  [NONE]              pc
618  [NONE]              ->
618  [NONE]              column
618  [NONE]              +
618  [NONE]              pc
618  [NONE]              ->
618  [NONE]              len
618  [NONE]              ;
618  [NONE]              
620  [NONE]              if
620  [IF]                (
620  [NONE]              cpd
620  [NONE]              .
620  [NONE]              settings
620  [NONE]              [
620  [NONE]              UO_indent_func_call_param
620  [NONE]              ]
620  [NONE]              .
620  [NONE]              b
620  [NONE]              &&
620  [NONE]              
621  [NONE]              (
621  [NONE]              pc
621  [NONE]              ->
621  [NONE]              type
621  [NONE]              ==
621  [NONE]              CT_FPAREN_OPEN
621  [NONE]              )
621  [NONE]              &&
621  [NONE]              
622  [NONE]              (
622  [NONE]              pc
622  [NONE]              ->
622  [NONE]              parent_type
622  [NONE]              ==
622  [NONE]              CT_FUNC_CALL
622  [NONE]              )
622  [IF]                )
623  [IF]                
623  [NONE]              
624  [NONE]              frm
624  [NONE]              .
624  [NONE]              pse
624  [NONE]              [
624  [NONE]              frm
624  [NONE]              .
624  [NONE]              pse_tos
624  [NONE]              ]
624  [NONE]              .
624  [NONE]              indent
624  [NONE]              =
624  [NONE]              frm
624  [NONE]              .
624  [NONE]              pse
624  [NONE]              [
624  [NONE]              frm
624  [NONE]              .
624  [NONE]              pse_tos
624  [NONE]              -
624  [NONE]              1
624  [NONE]              ]
624  [NONE]              .
624  [NONE]              indent
624  [NONE]              +
624  [NONE]              indent_size
624  [NONE]              ;
625  [IF]                
625  [NONE]              
627  [NONE]              if
627  [IF]                (
627  [NONE]              (
627  [NONE]              chunk_is_str
627  [FUNC_CALL]         (
627  [NONE]              pc
627  [NONE]              ,
627  [NONE]              "("
627  [NONE]              ,
627  [NONE]              1
627  [FUNC_CALL]         )
627  [NONE]              &&
627  [NONE]              !
627  [NONE]              cpd
627  [NONE]              .
627  [NONE]              settings
627  [NONE]              [
627  [NONE]              UO_indent_paren_nl
627  [NONE]              ]
627  [NONE]              .
627  [NONE]              b
627  [NONE]              )
627  [NONE]              ||
627  [NONE]              
628  [NONE]              (
628  [NONE]              chunk_is_str
628  [FUNC_CALL]         (
628  [NONE]              pc
628  [NONE]              ,
628  [NONE]              "["
628  [NONE]              ,
628  [NONE]              1
628  [FUNC_CALL]         )
628  [NONE]              &&
628  [NONE]              !
628  [NONE]              cpd
628  [NONE]              .
628  [NONE]              settings
628  [NONE]              [
628  [NONE]              UO_indent_square_nl
628  [NONE]              ]
628  [NONE]              .
628  [NONE]              b
628  [NONE]              )
628  [IF]                )
628  [NONE]              
629  [IF]                {
629  [NONE]              
630  [NONE]              next
630  [NONE]              =
630  [NONE]              chunk_get_next_nc
630  [FUNC_CALL]         (
630  [NONE]              pc
630  [FUNC_CALL]         )
630  [NONE]              ;
630  [NONE]              
631  [NONE]              if
631  [IF]                (
631  [NONE]              chunk_is_newline
631  [FUNC_CALL]         (
631  [NONE]              next
631  [FUNC_CALL]         )
631  [IF]                )
631  [NONE]              
632  [IF]                {
632  [NONE]              
633  [NONE]              int
633  [NONE]              sub
633  [NONE]              =
633  [NONE]              1
633  [NONE]              ;
633  [NONE]              
634  [NONE]              if
634  [IF]                (
634  [NONE]              frm
634  [NONE]              .
634  [NONE]              pse
634  [NONE]              [
634  [NONE]              frm
634  [NONE]              .
634  [NONE]              pse_tos
634  [NONE]              -
634  [NONE]              1
634  [NONE]              ]
634  [NONE]              .
634  [NONE]              type
634  [NONE]              ==
634  [NONE]              CT_ASSIGN
634  [IF]                )
635  [IF]                
635  [NONE]              
636  [NONE]              sub
636  [NONE]              =
636  [NONE]              2
636  [NONE]              ;
636  [NONE]              
637  [IF]                
637  [NONE]              
638  [NONE]              frm
638  [NONE]              .
638  [NONE]              pse
638  [NONE]              [
638  [NONE]              frm
638  [NONE]              .
638  [NONE]              pse_tos
638  [NONE]              ]
638  [NONE]              .
638  [NONE]              indent
638  [NONE]              =
638  [NONE]              frm
638  [NONE]              .
638  [NONE]              pse
638  [NONE]              [
638  [NONE]              frm
638  [NONE]              .
638  [NONE]              pse_tos
638  [NONE]              -
638  [NONE]              sub
638  [NONE]              ]
638  [NONE]              .
638  [NONE]              indent
638  [NONE]              +
638  [NONE]              indent_size
638  [NONE]              ;
638  [NONE]              
639  [IF]                }
639  [NONE]              
640  [IF]                }
640  [NONE]              
641  [NONE]              frm
641  [NONE]              .
641  [NONE]              pse
641  [NONE]              [
641  [NONE]              frm
641  [NONE]              .
641  [NONE]              pse_tos
641  [NONE]              ]
641  [NONE]              .
641  [NONE]              indent_tmp
641  [NONE]              =
641  [NONE]              frm
641  [NONE]              .
641  [NONE]              pse
641  [NONE]              [
641  [NONE]              frm
641  [NONE]              .
641  [NONE]              pse_tos
641  [NONE]              ]
641  [NONE]              .
641  [NONE]              indent
641  [NONE]              ;
641  [NONE]              
642  [NONE]              frm
642  [NONE]              .
642  [NONE]              paren_count
642  [NONE]              ++
642  [NONE]              ;
642  [NONE]              
643  [ELSEIF]            }
643  [NONE]              
644  [NONE]              else
644  [NONE]              if
644  [ELSEIF]            (
644  [NONE]              pc
644  [NONE]              ->
644  [NONE]              type
644  [NONE]              ==
644  [NONE]              CT_ASSIGN
644  [ELSEIF]            )
644  [NONE]              
645  [ELSEIF]            {
645  [NONE]              
646  [COMMENT_WHOLE]     /**␤          * if there is a newline after the '=', just indent one level,␤          * otherwise align on the '='.␤          * Never update indent_column.␤          */
650  [NONE]              
651  [NONE]              next
651  [NONE]              =
651  [NONE]              chunk_get_next
651  [FUNC_CALL]         (
651  [NONE]              pc
651  [FUNC_CALL]         )
651  [NONE]              ;
651  [NONE]              
652  [NONE]              if
652  [IF]                (
652  [NONE]              next
652  [NONE]              !=
652  [NONE]              NULL
652  [IF]                )
652  [NONE]              
653  [IF]                {
653  [NONE]              
654  [NONE]              indent_pse_push
654  [FUNC_CALL]         (
654  [NONE]              frm
654  [NONE]              ,
654  [NONE]              pc
654  [FUNC_CALL]         )
654  [NONE]              ;
654  [NONE]              
655  [NONE]              if
655  [IF]                (
655  [NONE]              chunk_is_newline
655  [FUNC_CALL]         (
655  [NONE]              next
655  [FUNC_CALL]         )
655  [IF]                )
656  [IF]                
656  [NONE]              
657  [NONE]              frm
657  [NONE]              .
657  [NONE]              pse
657  [NONE]              [
657  [NONE]              frm
657  [NONE]              .
657  [NONE]              pse_tos
657  [NONE]              ]
657  [NONE]              .
657  [NONE]              indent
657  [NONE]              =
657  [NONE]              frm
657  [NONE]              .
657  [NONE]              pse
657  [NONE]              [
657  [NONE]              frm
657  [NONE]              .
657  [NONE]              pse_tos
657  [NONE]              -
657  [NONE]              1
657  [NONE]              ]
657  [NONE]              .
657  [NONE]              indent_tmp
657  [NONE]              +
657  [NONE]              indent_size
657  [NONE]              ;
657  [NONE]              
658  [IF]                
659  [NONE]              else
660  [ELSE]              
660  [NONE]              
661  [NONE]              frm
661  [NONE]              .
661  [NONE]              pse
661  [NONE]              [
661  [NONE]              frm
661  [NONE]              .
661  [NONE]              pse_tos
661  [NONE]              ]
661  [NONE]              .
661  [NONE]              indent
661  [NONE]              =
661  [NONE]              pc
661  [NONE]              ->
661  [NONE]              column
661  [NONE]              +
661  [NONE]              pc
661  [NONE]              ->
661  [NONE]              len
661  [NONE]              +
661  [NONE]              1
661  [NONE]              ;
661  [NONE]              
662  [ELSE]              
662  [NONE]              
663  [NONE]              frm
663  [NONE]              .
663  [NONE]              pse
663  [NONE]              [
663  [NONE]              frm
663  [NONE]              .
663  [NONE]              pse_tos
663  [NONE]              ]
663  [NONE]              .
663  [NONE]              indent_tmp
663  [NONE]              =
663  [NONE]              frm
663  [NONE]              .
663  [NONE]              pse
663  [NONE]              [
663  [NONE]              frm
663  [NONE]              .
663  [NONE]              pse_tos
663  [NONE]              ]
663  [NONE]              .
663  [NONE]              indent
663  [NONE]              ;
663  [NONE]              
664  [IF]                }
664  [NONE]              
665  [ELSEIF]            }
665  [NONE]              
666  [NONE]              else
666  [NONE]              if
666  [ELSEIF]            (
666  [NONE]              pc
666  [NONE]              ->
666  [NONE]              type
666  [NONE]              ==
666  [NONE]              CT_RETURN
666  [ELSEIF]            )
666  [NONE]              
667  [ELSEIF]            {
667  [NONE]              
668  [COMMENT_WHOLE]     /* don't count returns inside a () or [] */
668  [NONE]              
669  [NONE]              if
669  [IF]                (
669  [NONE]              pc
669  [NONE]              ->
669  [NONE]              level
669  [NONE]              ==
669  [NONE]              pc
669  [NONE]              ->
669  [NONE]              brace_level
669  [IF]                )
669  [NONE]              
670  [IF]                {
670  [NONE]              
671  [NONE]              indent_pse_push
671  [FUNC_CALL]         (
671  [NONE]              frm
671  [NONE]              ,
671  [NONE]              pc
671  [FUNC_CALL]         )
671  [NONE]              ;
671  [NONE]              
672  [NONE]              frm
672  [NONE]              .
672  [NONE]              pse
672  [NONE]              [
672  [NONE]              frm
672  [NONE]              .
672  [NONE]              pse_tos
672  [NONE]              ]
672  [NONE]              .
672  [NONE]              indent
672  [NONE]              =
672  [NONE]              frm
672  [NONE]              .
672  [NONE]              pse
672  [NONE]              [
672  [NONE]              frm
672  [NONE]              .
672  [NONE]              pse_tos
672  [NONE]              -
672  [NONE]              1
672  [NONE]              ]
672  [NONE]              .
672  [NONE]              indent
672  [NONE]              +
672  [NONE]              pc
672  [NONE]              ->
672  [NONE]              len
672  [NONE]              +
672  [NONE]              1
672  [NONE]              ;
672  [NONE]              
673  [NONE]              frm
673  [NONE]              .
673  [NONE]              pse
673  [NONE]              [
673  [NONE]              frm
673  [NONE]              .
673  [NONE]              pse_tos
673  [NONE]              ]
673  [NONE]              .
673  [NONE]              indent_tmp
673  [NONE]              =
673  [NONE]              frm
673  [NONE]              .
673  [NONE]              pse
673  [NONE]              [
673  [NONE]              frm
673  [NONE]              .
673  [NONE]              pse_tos
673  [NONE]              -
673  [NONE]              1
673  [NONE]              ]
673  [NONE]              .
673  [NONE]              indent
673  [NONE]              ;
673  [NONE]              
674  [IF]                }
674  [NONE]              
675  [ELSEIF]            }
675  [NONE]              
676  [NONE]              else
676  [NONE]              if
676  [ELSEIF]            (
676  [NONE]              chunk_is_str
676  [FUNC_CALL]         (
676  [NONE]              pc
676  [NONE]              ,
676  [NONE]              "<<"
676  [NONE]              ,
676  [NONE]              2
676  [FUNC_CALL]         )
676  [ELSEIF]            )
676  [NONE]              
677  [ELSEIF]            {
677  [NONE]              
678  [NONE]              if
678  [IF]                (
678  [NONE]              cout_col
678  [NONE]              ==
678  [NONE]              0
678  [IF]                )
678  [NONE]              
679  [IF]                {
679  [NONE]              
680  [NONE]              cout_col
680  [NONE]              =
680  [NONE]              pc
680  [NONE]              ->
680  [NONE]              column
680  [NONE]              ;
680  [NONE]              
681  [NONE]              cout_level
681  [NONE]              =
681  [NONE]              pc
681  [NONE]              ->
681  [NONE]              level
681  [NONE]              ;
681  [NONE]              
682  [IF]                }
682  [NONE]              
683  [ELSEIF]            }
683  [NONE]              
684  [NONE]              else
684  [NONE]              
685  [ELSE]              {
685  [NONE]              
686  [COMMENT_WHOLE]     /* anything else? */
686  [NONE]              
687  [ELSE]              }
687  [NONE]              
690  [COMMENT_WHOLE]     /**␤       * Indent the line if needed␤       */
692  [NONE]              
693  [NONE]              if
693  [IF]                (
693  [NONE]              did_newline
693  [NONE]              &&
693  [NONE]              !
693  [NONE]              chunk_is_newline
693  [FUNC_CALL]         (
693  [NONE]              pc
693  [FUNC_CALL]         )
693  [NONE]              &&
693  [NONE]              (
693  [NONE]              pc
693  [NONE]              ->
693  [NONE]              len
693  [NONE]              !=
693  [NONE]              0
693  [NONE]              )
693  [IF]                )
693  [NONE]              
694  [IF]                {
694  [NONE]              
695  [COMMENT_WHOLE]     /**␤          * Check for special continuations.␤          * Note that some of these could be done as a stack item like␤          * everything else␤          */
699  [NONE]              
701  [NONE]              prev
701  [NONE]              =
701  [NONE]              chunk_get_prev_ncnl
701  [FUNC_CALL]         (
701  [NONE]              pc
701  [FUNC_CALL]         )
701  [NONE]              ;
701  [NONE]              
702  [NONE]              if
702  [IF]                (
702  [NONE]              (
702  [NONE]              pc
702  [NONE]              ->
702  [NONE]              type
702  [NONE]              ==
702  [NONE]              CT_MEMBER
702  [NONE]              )
702  [NONE]              ||
702  [NONE]              
703  [NONE]              (
703  [NONE]              pc
703  [NONE]              ->
703  [NONE]              type
703  [NONE]              ==
703  [NONE]              CT_DC_MEMBER
703  [NONE]              )
703  [NONE]              ||
703  [NONE]              
704  [NONE]              (
704  [NONE]              (
704  [NONE]              prev
704  [NONE]              !=
704  [NONE]              NULL
704  [NONE]              )
704  [NONE]              &&
704  [NONE]              
705  [NONE]              (
705  [NONE]              (
705  [NONE]              prev
705  [NONE]              ->
705  [NONE]              type
705  [NONE]              ==
705  [NONE]              CT_MEMBER
705  [NONE]              )
705  [NONE]              ||
705  [NONE]              
706  [NONE]              (
706  [NONE]              prev
706  [NONE]              ->
706  [NONE]              type
706  [NONE]              ==
706  [NONE]              CT_DC_MEMBER
706  [NONE]              )
706  [NONE]              )
706  [NONE]              )
706  [IF]                )
706  [NONE]              
707  [IF]                {
707  [NONE]              
708  [NONE]              tmp
708  [NONE]              =
708  [NONE]              cpd
708  [NONE]              .
708  [NONE]              settings
708  [NONE]              [
708  [NONE]              UO_indent_member
708  [NONE]              ]
708  [NONE]              .
708  [NONE]              n
708  [NONE]              +
708  [NONE]              indent_column
708  [NONE]              ;
708  [NONE]              
709  [NONE]              LOG_FMT
709  [FUNC_CALL]         (
709  [NONE]              LINDENT
709  [NONE]              ,
709  [NONE]              "%s: %d] member => %d\n"
709  [NONE]              ,
709  [NONE]              
710  [NONE]              __func__
710  [NONE]              ,
710  [NONE]              pc
710  [NONE]              ->
710  [NONE]              orig_line
710  [NONE]              ,
710  [NONE]              tmp
710  [FUNC_CALL]         )
710  [NONE]              ;
710  [NONE]              
711  [NONE]              reindent_line
711  [FUNC_CALL]         (
711  [NONE]              pc
711  [NONE]              ,
711  [NONE]              tmp
711  [FUNC_CALL]         )
711  [NONE]              ;
711  [NONE]              
712  [IF]                }
712  [NONE]              
713  [NONE]              else
713  [NONE]              if
713  [ELSEIF]            (
713  [NONE]              chunk_is_str
713  [FUNC_CALL]         (
713  [NONE]              pc
713  [NONE]              ,
713  [NONE]              "<<"
713  [NONE]              ,
713  [NONE]              2
713  [FUNC_CALL]         )
713  [NONE]              &&
713  [NONE]              (
713  [NONE]              cout_col
713  [NONE]              >
713  [NONE]              0
713  [NONE]              )
713  [ELSEIF]            )
713  [NONE]              
714  [ELSEIF]            {
714  [NONE]              
715  [NONE]              LOG_FMT
715  [FUNC_CALL]         (
715  [NONE]              LINDENT
715  [NONE]              ,
715  [NONE]              "%s: %d] cout_col => %d\n"
715  [NONE]              ,
715  [NONE]              
716  [NONE]              __func__
716  [NONE]              ,
716  [NONE]              pc
716  [NONE]              ->
716  [NONE]              orig_line
716  [NONE]              ,
716  [NONE]              cout_col
716  [FUNC_CALL]         )
716  [NONE]              ;
716  [NONE]              
717  [NONE]              reindent_line
717  [FUNC_CALL]         (
717  [NONE]              pc
717  [NONE]              ,
717  [NONE]              cout_col
717  [FUNC_CALL]         )
717  [NONE]              ;
717  [NONE]              
718  [ELSEIF]            }
718  [NONE]              
719  [NONE]              else
719  [NONE]              if
719  [ELSEIF]            (
719  [NONE]              (
719  [NONE]              vardefcol
719  [NONE]              >
719  [NONE]              0
719  [NONE]              )
719  [NONE]              &&
719  [NONE]              
720  [NONE]              (
720  [NONE]              pc
720  [NONE]              ->
720  [NONE]              type
720  [NONE]              ==
720  [NONE]              CT_WORD
720  [NONE]              )
720  [NONE]              &&
720  [NONE]              
721  [NONE]              (
721  [NONE]              (
721  [NONE]              pc
721  [NONE]              ->
721  [NONE]              flags
721  [NONE]              &
721  [NONE]              PCF_VAR_DEF
721  [NONE]              )
721  [NONE]              !=
721  [NONE]              0
721  [NONE]              )
721  [NONE]              &&
721  [NONE]              
722  [NONE]              (
722  [NONE]              prev
722  [NONE]              !=
722  [NONE]              NULL
722  [NONE]              )
722  [NONE]              &&
722  [NONE]              (
722  [NONE]              prev
722  [NONE]              ->
722  [NONE]              type
722  [NONE]              ==
722  [NONE]              CT_COMMA
722  [NONE]              )
722  [ELSEIF]            )
722  [NONE]              
723  [ELSEIF]            {
723  [NONE]              
724  [NONE]              LOG_FMT
724  [FUNC_CALL]         (
724  [NONE]              LINDENT
724  [NONE]              ,
724  [NONE]              "%s: %d] Vardefcol => %d\n"
724  [NONE]              ,
724  [NONE]              
725  [NONE]              __func__
725  [NONE]              ,
725  [NONE]              pc
725  [NONE]              ->
725  [NONE]              orig_line
725  [NONE]              ,
725  [NONE]              vardefcol
725  [FUNC_CALL]         )
725  [NONE]              ;
725  [NONE]              
726  [NONE]              reindent_line
726  [FUNC_CALL]         (
726  [NONE]              pc
726  [NONE]              ,
726  [NONE]              vardefcol
726  [FUNC_CALL]         )
726  [NONE]              ;
726  [NONE]              
727  [ELSEIF]            }
727  [NONE]              
728  [NONE]              else
728  [NONE]              if
728  [ELSEIF]            (
728  [NONE]              (
728  [NONE]              pc
728  [NONE]              ->
728  [NONE]              type
728  [NONE]              ==
728  [NONE]              CT_STRING
728  [NONE]              )
728  [NONE]              &&
728  [NONE]              (
728  [NONE]              prev
728  [NONE]              ->
728  [NONE]              type
728  [NONE]              ==
728  [NONE]              CT_STRING
728  [NONE]              )
728  [NONE]              &&
728  [NONE]              
729  [NONE]              cpd
729  [NONE]              .
729  [NONE]              settings
729  [NONE]              [
729  [NONE]              UO_indent_align_string
729  [NONE]              ]
729  [NONE]              .
729  [NONE]              b
729  [ELSEIF]            )
729  [NONE]              
730  [ELSEIF]            {
730  [NONE]              
731  [NONE]              LOG_FMT
731  [FUNC_CALL]         (
731  [NONE]              LINDENT
731  [NONE]              ,
731  [NONE]              "%s: %d] String => %d\n"
731  [NONE]              ,
731  [NONE]              
732  [NONE]              __func__
732  [NONE]              ,
732  [NONE]              pc
732  [NONE]              ->
732  [NONE]              orig_line
732  [NONE]              ,
732  [NONE]              prev
732  [NONE]              ->
732  [NONE]              column
732  [FUNC_CALL]         )
732  [NONE]              ;
732  [NONE]              
733  [NONE]              reindent_line
733  [FUNC_CALL]         (
733  [NONE]              pc
733  [NONE]              ,
733  [NONE]              prev
733  [NONE]              ->
733  [NONE]              column
733  [FUNC_CALL]         )
733  [NONE]              ;
733  [NONE]              
734  [ELSEIF]            }
734  [NONE]              
735  [NONE]              else
735  [NONE]              if
735  [ELSEIF]            (
735  [NONE]              chunk_is_comment
735  [FUNC_CALL]         (
735  [NONE]              pc
735  [FUNC_CALL]         )
735  [ELSEIF]            )
735  [NONE]              
736  [ELSEIF]            {
736  [NONE]              
737  [NONE]              LOG_FMT
737  [FUNC_CALL]         (
737  [NONE]              LINDENT
737  [NONE]              ,
737  [NONE]              "%s: %d] comment => %d\n"
737  [NONE]              ,
737  [NONE]              
738  [NONE]              __func__
738  [NONE]              ,
738  [NONE]              pc
738  [NONE]              ->
738  [NONE]              orig_line
738  [NONE]              ,
738  [NONE]              frm
738  [NONE]              .
738  [NONE]              pse
738  [NONE]              [
738  [NONE]              frm
738  [NONE]              .
738  [NONE]              pse_tos
738  [NONE]              ]
738  [NONE]              .
738  [NONE]              indent_tmp
738  [FUNC_CALL]         )
738  [NONE]              ;
738  [NONE]              
739  [NONE]              indent_comment
739  [FUNC_CALL]         (
739  [NONE]              pc
739  [NONE]              ,
739  [NONE]              frm
739  [NONE]              .
739  [NONE]              pse
739  [NONE]              [
739  [NONE]              frm
739  [NONE]              .
739  [NONE]              pse_tos
739  [NONE]              ]
739  [NONE]              .
739  [NONE]              indent_tmp
739  [FUNC_CALL]         )
739  [NONE]              ;
739  [NONE]              
740  [ELSEIF]            }
740  [NONE]              
741  [NONE]              else
741  [NONE]              if
741  [ELSEIF]            (
741  [NONE]              pc
741  [NONE]              ->
741  [NONE]              type
741  [NONE]              ==
741  [NONE]              CT_PREPROC
741  [ELSEIF]            )
741  [NONE]              
742  [ELSEIF]            {
742  [NONE]              
743  [COMMENT_WHOLE]     /* Preprocs are always in column 1. See indent_preproc() */
743  [NONE]              
744  [NONE]              if
744  [IF]                (
744  [NONE]              pc
744  [NONE]              ->
744  [NONE]              column
744  [NONE]              !=
744  [NONE]              1
744  [IF]                )
745  [IF]                
745  [NONE]              
746  [NONE]              reindent_line
746  [FUNC_CALL]         (
746  [NONE]              pc
746  [NONE]              ,
746  [NONE]              1
746  [FUNC_CALL]         )
746  [NONE]              ;
746  [NONE]              
747  [IF]                
748  [ELSEIF]            }
748  [NONE]              
749  [NONE]              else
749  [NONE]              
750  [ELSE]              {
750  [NONE]              
751  [NONE]              if
751  [IF]                (
751  [NONE]              pc
751  [NONE]              ->
751  [NONE]              column
751  [NONE]              !=
751  [NONE]              indent_column
751  [IF]                )
751  [NONE]              
752  [IF]                {
752  [NONE]              
753  [NONE]              LOG_FMT
753  [FUNC_CALL]         (
753  [NONE]              LINDENT
753  [NONE]              ,
753  [NONE]              "%s: %d] indent => %d [%.*s]\n"
753  [NONE]              ,
753  [NONE]              
754  [NONE]              __func__
754  [NONE]              ,
754  [NONE]              pc
754  [NONE]              ->
754  [NONE]              orig_line
754  [NONE]              ,
754  [NONE]              indent_column
754  [NONE]              ,
754  [NONE]              pc
754  [NONE]              ->
754  [NONE]              len
754  [NONE]              ,
754  [NONE]              pc
754  [NONE]              ->
754  [NONE]              str
754  [FUNC_CALL]         )
754  [NONE]              ;
754  [NONE]              
755  [NONE]              reindent_line
755  [FUNC_CALL]         (
755  [NONE]              pc
755  [NONE]              ,
755  [NONE]              indent_column
755  [FUNC_CALL]         )
755  [NONE]              ;
755  [NONE]              
756  [IF]                }
756  [NONE]              
757  [ELSE]              }
757  [NONE]              
758  [NONE]              did_newline
758  [NONE]              =
758  [NONE]              false
758  [NONE]              ;
758  [NONE]              
759  [IF]                }
759  [NONE]              
761  [COMMENT_WHOLE]     /**␤       * Handle variable definition continuation indenting␤       */
763  [NONE]              
764  [NONE]              if
764  [IF]                (
764  [NONE]              (
764  [NONE]              pc
764  [NONE]              ->
764  [NONE]              type
764  [NONE]              ==
764  [NONE]              CT_WORD
764  [NONE]              )
764  [NONE]              &&
764  [NONE]              
765  [NONE]              (
765  [NONE]              (
765  [NONE]              pc
765  [NONE]              ->
765  [NONE]              flags
765  [NONE]              &
765  [NONE]              PCF_IN_FCN_DEF
765  [NONE]              )
765  [NONE]              ==
765  [NONE]              0
765  [NONE]              )
765  [NONE]              &&
765  [NONE]              
766  [NONE]              (
766  [NONE]              (
766  [NONE]              pc
766  [NONE]              ->
766  [NONE]              flags
766  [NONE]              &
766  [NONE]              PCF_VAR_1ST_DEF
766  [NONE]              )
766  [NONE]              ==
766  [NONE]              PCF_VAR_1ST_DEF
766  [NONE]              )
766  [IF]                )
767  [IF]                
767  [NONE]              
768  [NONE]              vardefcol
768  [NONE]              =
768  [NONE]              pc
768  [NONE]              ->
768  [NONE]              column
768  [NONE]              ;
769  [IF]                
769  [NONE]              
770  [NONE]              if
770  [IF]                (
770  [NONE]              chunk_is_semicolon
770  [FUNC_CALL]         (
770  [NONE]              pc
770  [FUNC_CALL]         )
770  [NONE]              ||
770  [NONE]              
771  [NONE]              (
771  [NONE]              (
771  [NONE]              pc
771  [NONE]              ->
771  [NONE]              type
771  [NONE]              ==
771  [NONE]              CT_BRACE_OPEN
771  [NONE]              )
771  [NONE]              &&
771  [NONE]              (
771  [NONE]              pc
771  [NONE]              ->
771  [NONE]              parent_type
771  [NONE]              ==
771  [NONE]              CT_FUNCTION
771  [NONE]              )
771  [NONE]              )
771  [IF]                )
772  [IF]                
772  [NONE]              
773  [NONE]              vardefcol
773  [NONE]              =
773  [NONE]              0
773  [NONE]              ;
774  [IF]                
774  [NONE]              
776  [COMMENT_WHOLE]     /* if we hit a newline, reset indent_tmp */
776  [NONE]              
777  [NONE]              if
777  [IF]                (
777  [NONE]              chunk_is_newline
777  [FUNC_CALL]         (
777  [NONE]              pc
777  [FUNC_CALL]         )
777  [NONE]              ||
777  [NONE]              
778  [NONE]              (
778  [NONE]              pc
778  [NONE]              ->
778  [NONE]              type
778  [NONE]              ==
778  [NONE]              CT_COMMENT_MULTI
778  [NONE]              )
778  [NONE]              ||
778  [NONE]              
779  [NONE]              (
779  [NONE]              pc
779  [NONE]              ->
779  [NONE]              type
779  [NONE]              ==
779  [NONE]              CT_COMMENT_CPP
779  [NONE]              )
779  [IF]                )
779  [NONE]              
780  [IF]                {
780  [NONE]              
781  [NONE]              frm
781  [NONE]              .
781  [NONE]              pse
781  [NONE]              [
781  [NONE]              frm
781  [NONE]              .
781  [NONE]              pse_tos
781  [NONE]              ]
781  [NONE]              .
781  [NONE]              indent_tmp
781  [NONE]              =
781  [NONE]              frm
781  [NONE]              .
781  [NONE]              pse
781  [NONE]              [
781  [NONE]              frm
781  [NONE]              .
781  [NONE]              pse_tos
781  [NONE]              ]
781  [NONE]              .
781  [NONE]              indent
781  [NONE]              ;
781  [NONE]              
783  [COMMENT_WHOLE]     /**␤          * Handle the case of a multi-line #define w/o anything on the␤          * first line (indent_tmp will be 1 or 0)␤          */
786  [NONE]              
787  [NONE]              if
787  [IF]                (
787  [NONE]              (
787  [NONE]              pc
787  [NONE]              ->
787  [NONE]              type
787  [NONE]              ==
787  [NONE]              CT_NL_CONT
787  [NONE]              )
787  [NONE]              &&
787  [NONE]              
788  [NONE]              (
788  [NONE]              frm
788  [NONE]              .
788  [NONE]              pse
788  [NONE]              [
788  [NONE]              frm
788  [NONE]              .
788  [NONE]              pse_tos
788  [NONE]              ]
788  [NONE]              .
788  [NONE]              indent_tmp
788  [NONE]              <=
788  [NONE]              indent_size
788  [NONE]              )
788  [IF]                )
789  [IF]                
789  [NONE]              
790  [NONE]              frm
790  [NONE]              .
790  [NONE]              pse
790  [NONE]              [
790  [NONE]              frm
790  [NONE]              .
790  [NONE]              pse_tos
790  [NONE]              ]
790  [NONE]              .
790  [NONE]              indent_tmp
790  [NONE]              =
790  [NONE]              indent_size
790  [NONE]              +
790  [NONE]              1
790  [NONE]              ;
790  [NONE]              
791  [IF]                
791  [NONE]              
793  [COMMENT_WHOLE]     /* Get ready to indent the next item */
793  [NONE]              
794  [NONE]              did_newline
794  [NONE]              =
794  [NONE]              true
794  [NONE]              ;
794  [NONE]              
795  [IF]                }
795  [NONE]              
797  [NONE]              if
797  [IF]                (
797  [NONE]              !
797  [NONE]              chunk_is_comment
797  [FUNC_CALL]         (
797  [NONE]              pc
797  [FUNC_CALL]         )
797  [NONE]              &&
797  [NONE]              !
797  [NONE]              chunk_is_newline
797  [FUNC_CALL]         (
797  [NONE]              pc
797  [FUNC_CALL]         )
797  [IF]                )
798  [IF]                
798  [NONE]              
799  [NONE]              prev
799  [NONE]              =
799  [NONE]              pc
799  [NONE]              ;
799  [NONE]              
800  [IF]                
800  [NONE]              
801  [NONE]              pc
801  [NONE]              =
801  [NONE]              chunk_get_next
801  [FUNC_CALL]         (
801  [NONE]              pc
801  [FUNC_CALL]         )
801  [NONE]              ;
801  [NONE]              
802  [WHILE]             }
802  [NONE]              
804  [COMMENT_WHOLE]     /* Throw out any stuff inside a preprocessor - no need to warn */
804  [NONE]              
805  [NONE]              while
805  [WHILE]             (
805  [NONE]              (
805  [NONE]              frm
805  [NONE]              .
805  [NONE]              pse_tos
805  [NONE]              >
805  [NONE]              0
805  [NONE]              )
805  [NONE]              &&
805  [NONE]              frm
805  [NONE]              .
805  [NONE]              pse
805  [NONE]              [
805  [NONE]              frm
805  [NONE]              .
805  [NONE]              pse_tos
805  [NONE]              ]
805  [NONE]              .
805  [NONE]              in_preproc
805  [WHILE]             )
806  [WHILE]             
806  [NONE]              
807  [NONE]              indent_pse_pop
807  [FUNC_CALL]         (
807  [NONE]              frm
807  [NONE]              ,
807  [NONE]              pc
807  [FUNC_CALL]         )
807  [NONE]              ;
808  [WHILE]             
808  [NONE]              
810  [NONE]              for
810  [FOR]               (
810  [NONE]              idx
810  [NONE]              =
810  [NONE]              1
810  [FOR]               ;
810  [NONE]              idx
810  [NONE]              <=
810  [NONE]              frm
810  [NONE]              .
810  [NONE]              pse_tos
810  [FOR]               ;
810  [NONE]              idx
810  [NONE]              ++
810  [FOR]               )
810  [NONE]              
811  [FOR]               {
811  [NONE]              
812  [NONE]              LOG_FMT
812  [FUNC_CALL]         (
812  [NONE]              LWARN
812  [NONE]              ,
812  [NONE]              "%s:%d Unmatched %s\n"
812  [NONE]              ,
812  [NONE]              
813  [NONE]              cpd
813  [NONE]              .
813  [NONE]              filename
813  [NONE]              ,
813  [NONE]              frm
813  [NONE]              .
813  [NONE]              pse
813  [NONE]              [
813  [NONE]              idx
813  [NONE]              ]
813  [NONE]              .
813  [NONE]              open_line
813  [NONE]              ,
813  [NONE]              
814  [NONE]              get_token_name
814  [FUNC_CALL]         (
814  [NONE]              frm
814  [NONE]              .
814  [NONE]              pse
814  [NONE]              [
814  [NONE]              idx
814  [NONE]              ]
814  [NONE]              .
814  [NONE]              type
814  [FUNC_CALL]         )
814  [FUNC_CALL]         )
814  [NONE]              ;
814  [NONE]              
815  [NONE]              cpd
815  [NONE]              .
815  [NONE]              error_count
815  [NONE]              ++
815  [NONE]              ;
815  [NONE]              
816  [FOR]               }
816  [NONE]              
817  [FUNC_DEF]          }
817  [NONE]              
819  [COMMENT_WHOLE]     /**␤ * returns true if forward scan reveals only single newlines or comments␤ * stops when hits code␤ * false if next thing hit is a closing brace, also if 2 newlines in a row␤ */
823  [NONE]              
826  [FUNC_DEF]          static
826  [FUNC_DEF]          bool
826  [NONE]              single_line_comment_indent_rule_applies
826  [FUNC_DEF]          (
826  [NONE]              chunk_t
826  [NONE]              *
826  [NONE]              start
826  [FUNC_DEF]          )
826  [NONE]              
827  [FUNC_DEF]          {
827  [NONE]              
828  [NONE]              chunk_t
828  [NONE]              *
828  [NONE]              pc
828  [NONE]              =
828  [NONE]              start
828  [NONE]              ;
828  [NONE]              
829  [NONE]              int
829  [NONE]              nl_count
829  [NONE]              =
829  [NONE]              0
829  [NONE]              ;
829  [NONE]              
830  [NONE]              if
830  [IF]                (
830  [NONE]              !
830  [NONE]              chunk_is_single_line_comment
830  [FUNC_CALL]         (
830  [NONE]              pc
830  [FUNC_CALL]         )
830  [IF]                )
831  [IF]                
831  [NONE]              
832  [NONE]              return
832  [NONE]              false
832  [NONE]              ;
833  [IF]                
833  [NONE]              
834  [COMMENT_WHOLE]     /* scan forward, if only single newlines and comments before next line of code, we want to apply */
834  [NONE]              
835  [NONE]              while
835  [WHILE]             (
835  [NONE]              (
835  [NONE]              pc
835  [NONE]              =
835  [NONE]              chunk_get_next
835  [FUNC_CALL]         (
835  [NONE]              pc
835  [FUNC_CALL]         )
835  [NONE]              )
835  [NONE]              !=
835  [NONE]              NULL
835  [WHILE]             )
835  [NONE]              
836  [WHILE]             {
836  [NONE]              
837  [NONE]              if
837  [IF]                (
837  [NONE]              chunk_is_newline
837  [FUNC_CALL]         (
837  [NONE]              pc
837  [FUNC_CALL]         )
837  [IF]                )
837  [NONE]              
838  [IF]                {
838  [NONE]              
839  [NONE]              if
839  [IF]                (
839  [NONE]              nl_count
839  [NONE]              >
839  [NONE]              0
839  [NONE]              ||
839  [NONE]              pc
839  [NONE]              ->
839  [NONE]              nl_count
839  [NONE]              >
839  [NONE]              1
839  [IF]                )
840  [IF]                
840  [NONE]              
841  [NONE]              return
841  [NONE]              false
841  [NONE]              ;
841  [NONE]              
842  [IF]                
842  [NONE]              
844  [NONE]              nl_count
844  [NONE]              ++
844  [NONE]              ;
844  [NONE]              
845  [IF]                }
845  [NONE]              
846  [NONE]              else
846  [NONE]              
847  [ELSE]              {
847  [NONE]              
848  [NONE]              nl_count
848  [NONE]              =
848  [NONE]              0
848  [NONE]              ;
848  [NONE]              
849  [NONE]              if
849  [IF]                (
849  [NONE]              !
849  [NONE]              chunk_is_single_line_comment
849  [FUNC_CALL]         (
849  [NONE]              pc
849  [FUNC_CALL]         )
849  [IF]                )
849  [NONE]              
850  [IF]                {
850  [NONE]              
851  [COMMENT_WHOLE]     /* here we check for things to run into that we wouldn't want to indent the comment for */
851  [NONE]              
852  [COMMENT_WHOLE]     /* for example, non-single line comment, closing brace */
852  [NONE]              
853  [NONE]              if
853  [IF]                (
853  [NONE]              chunk_is_comment
853  [FUNC_CALL]         (
853  [NONE]              pc
853  [FUNC_CALL]         )
853  [NONE]              ||
853  [NONE]              chunk_is_closing_brace
853  [FUNC_CALL]         (
853  [NONE]              pc
853  [FUNC_CALL]         )
853  [IF]                )
854  [IF]                
854  [NONE]              
855  [NONE]              return
855  [NONE]              false
855  [NONE]              ;
855  [NONE]              
856  [IF]                
856  [NONE]              
858  [NONE]              return
858  [NONE]              true
858  [NONE]              ;
858  [NONE]              
859  [IF]                }
859  [NONE]              
860  [ELSE]              }
860  [NONE]              
861  [WHILE]             }
861  [NONE]              
863  [NONE]              return
863  [NONE]              false
863  [NONE]              ;
863  [NONE]              
864  [FUNC_DEF]          }
864  [NONE]              
866  [COMMENT_WHOLE]     /**␤ * REVISIT: This needs to be re-checked, maybe cleaned up␤ *␤ * Indents comments in a (hopefully) smart manner.␤ *␤ * There are two type of comments that get indented:␤ *  - stand alone (ie, no tokens on the line before the comment)␤ *  - trailing comments (last token on the line apart from a linefeed)␤ *    + note that a stand-alone comment is a special case of a trailing␤ *␤ * The stand alone comments will get indented in one of three ways:␤ *  - column 1:␤ *    + There is an empty line before the comment AND the indent level is 0␤ *    + The comment was originally in column 1␤ *␤ *  - Same column as trailing comment on previous line (ie, aligned)␤ *    + if originally within TBD (3) columns of the previous comment␤ *␤ *  - syntax indent level␤ *    + doesn't fit in the previous categories␤ *␤ * Options modify this behavior:␤ *  - keep original column (don't move the comment, if possible)␤ *  - keep relative column (move out the same amount as first item on line)␤ *  - fix trailing comment in column TBD␤ *␤ * @param pc   The comment, which is the first item on a line␤ * @param col  The column if this is to be put at indent level␤ */
894  [NONE]              
895  [FUNC_DEF]          static
895  [FUNC_DEF]          void
895  [NONE]              indent_comment
895  [FUNC_DEF]          (
895  [NONE]              chunk_t
895  [NONE]              *
895  [NONE]              pc
895  [NONE]              ,
895  [NONE]              int
895  [NONE]              col
895  [FUNC_DEF]          )
895  [NONE]              
896  [FUNC_DEF]          {
896  [NONE]              
897  [NONE]              chunk_t
897  [NONE]              *
897  [NONE]              nl
897  [NONE]              ;
897  [NONE]              
898  [NONE]              chunk_t
898  [NONE]              *
898  [NONE]              prev
898  [NONE]              ;
898  [NONE]              
900  [NONE]              LOG_FMT
900  [FUNC_CALL]         (
900  [NONE]              LCMTIND
900  [NONE]              ,
900  [NONE]              "%s: line %d, col %d, level %d: "
900  [NONE]              ,
900  [NONE]              __func__
900  [NONE]              ,
900  [NONE]              
901  [NONE]              pc
901  [NONE]              ->
901  [NONE]              orig_line
901  [NONE]              ,
901  [NONE]              pc
901  [NONE]              ->
901  [NONE]              orig_col
901  [NONE]              ,
901  [NONE]              pc
901  [NONE]              ->
901  [NONE]              level
901  [FUNC_CALL]         )
901  [NONE]              ;
901  [NONE]              
903  [COMMENT_WHOLE]     /* force column 1 comment to column 1 if not changing them */
903  [NONE]              
904  [NONE]              if
904  [IF]                (
904  [NONE]              (
904  [NONE]              pc
904  [NONE]              ->
904  [NONE]              orig_col
904  [NONE]              ==
904  [NONE]              1
904  [NONE]              )
904  [NONE]              &&
904  [NONE]              !
904  [NONE]              cpd
904  [NONE]              .
904  [NONE]              settings
904  [NONE]              [
904  [NONE]              UO_indent_col1_comment
904  [NONE]              ]
904  [NONE]              .
904  [NONE]              b
904  [IF]                )
904  [NONE]              
905  [IF]                {
905  [NONE]              
906  [NONE]              LOG_FMT
906  [FUNC_CALL]         (
906  [NONE]              LCMTIND
906  [NONE]              ,
906  [NONE]              "rule 1 - keep in col 1\n"
906  [FUNC_CALL]         )
906  [NONE]              ;
906  [NONE]              
907  [NONE]              pc
907  [NONE]              ->
907  [NONE]              column
907  [NONE]              =
907  [NONE]              1
907  [NONE]              ;
907  [NONE]              
908  [NONE]              return
908  [NONE]              ;
908  [NONE]              
909  [IF]                }
909  [NONE]              
911  [NONE]              nl
911  [NONE]              =
911  [NONE]              chunk_get_prev
911  [FUNC_CALL]         (
911  [NONE]              pc
911  [FUNC_CALL]         )
911  [NONE]              ;
911  [NONE]              
913  [COMMENT_WHOLE]     /* outside of any expression or statement? */
913  [NONE]              
914  [NONE]              if
914  [IF]                (
914  [NONE]              pc
914  [NONE]              ->
914  [NONE]              level
914  [NONE]              ==
914  [NONE]              0
914  [IF]                )
914  [NONE]              
915  [IF]                {
915  [NONE]              
916  [NONE]              if
916  [IF]                (
916  [NONE]              (
916  [NONE]              nl
916  [NONE]              !=
916  [NONE]              NULL
916  [NONE]              )
916  [NONE]              &&
916  [NONE]              (
916  [NONE]              nl
916  [NONE]              ->
916  [NONE]              nl_count
916  [NONE]              >
916  [NONE]              1
916  [NONE]              )
916  [IF]                )
916  [NONE]              
917  [IF]                {
917  [NONE]              
918  [NONE]              LOG_FMT
918  [FUNC_CALL]         (
918  [NONE]              LCMTIND
918  [NONE]              ,
918  [NONE]              "rule 2 - level 0, nl before\n"
918  [FUNC_CALL]         )
918  [NONE]              ;
918  [NONE]              
919  [NONE]              pc
919  [NONE]              ->
919  [NONE]              column
919  [NONE]              =
919  [NONE]              1
919  [NONE]              ;
919  [NONE]              
920  [NONE]              return
920  [NONE]              ;
920  [NONE]              
921  [IF]                }
921  [NONE]              
922  [IF]                }
922  [NONE]              
924  [NONE]              prev
924  [NONE]              =
924  [NONE]              chunk_get_prev
924  [FUNC_CALL]         (
924  [NONE]              nl
924  [FUNC_CALL]         )
924  [NONE]              ;
924  [NONE]              
925  [NONE]              if
925  [IF]                (
925  [NONE]              chunk_is_comment
925  [FUNC_CALL]         (
925  [NONE]              prev
925  [FUNC_CALL]         )
925  [NONE]              &&
925  [NONE]              (
925  [NONE]              nl
925  [NONE]              ->
925  [NONE]              nl_count
925  [NONE]              ==
925  [NONE]              1
925  [NONE]              )
925  [IF]                )
925  [NONE]              
926  [IF]                {
926  [NONE]              
927  [NONE]              int
927  [NONE]              coldiff
927  [NONE]              =
927  [NONE]              prev
927  [NONE]              ->
927  [NONE]              orig_col
927  [NONE]              -
927  [NONE]              pc
927  [NONE]              ->
927  [NONE]              orig_col
927  [NONE]              ;
927  [NONE]              
929  [NONE]              if
929  [IF]                (
929  [NONE]              (
929  [NONE]              coldiff
929  [NONE]              <=
929  [NONE]              3
929  [NONE]              )
929  [NONE]              &&
929  [NONE]              (
929  [NONE]              coldiff
929  [NONE]              >=
929  [NONE]              -
929  [NONE]              3
929  [NONE]              )
929  [IF]                )
929  [NONE]              
930  [IF]                {
930  [NONE]              
931  [NONE]              pc
931  [NONE]              ->
931  [NONE]              column
931  [NONE]              =
931  [NONE]              prev
931  [NONE]              ->
931  [NONE]              column
931  [NONE]              ;
931  [NONE]              
932  [NONE]              LOG_FMT
932  [FUNC_CALL]         (
932  [NONE]              LCMTIND
932  [NONE]              ,
932  [NONE]              "rule 3 - prev comment, coldiff = %d, now in %d\n"
932  [NONE]              ,
932  [NONE]              
933  [NONE]              coldiff
933  [NONE]              ,
933  [NONE]              pc
933  [NONE]              ->
933  [NONE]              column
933  [FUNC_CALL]         )
933  [NONE]              ;
933  [NONE]              
934  [NONE]              return
934  [NONE]              ;
934  [NONE]              
935  [IF]                }
935  [NONE]              
936  [IF]                }
936  [NONE]              
937  [COMMENT_WHOLE]     /* check if special single line comment rule applies */
937  [NONE]              
938  [NONE]              if
938  [IF]                (
938  [NONE]              cpd
938  [NONE]              .
938  [NONE]              settings
938  [NONE]              [
938  [NONE]              UO_indent_sing_line_comments
938  [NONE]              ]
938  [NONE]              .
938  [NONE]              n
938  [NONE]              >
938  [NONE]              0
938  [NONE]              &&
938  [NONE]              single_line_comment_indent_rule_applies
938  [FUNC_CALL]         (
938  [NONE]              pc
938  [FUNC_CALL]         )
938  [IF]                )
938  [NONE]              
939  [IF]                {
939  [NONE]              
940  [NONE]              pc
940  [NONE]              ->
940  [NONE]              column
940  [NONE]              =
940  [NONE]              col
940  [NONE]              +
940  [NONE]              cpd
940  [NONE]              .
940  [NONE]              settings
940  [NONE]              [
940  [NONE]              UO_indent_sing_line_comments
940  [NONE]              ]
940  [NONE]              .
940  [NONE]              n
940  [NONE]              ;
940  [NONE]              
941  [NONE]              LOG_FMT
941  [FUNC_CALL]         (
941  [NONE]              LCMTIND
941  [NONE]              ,
941  [NONE]              "rule 4 - single line comment indent, now in %d\n"
941  [NONE]              ,
941  [NONE]              pc
941  [NONE]              ->
941  [NONE]              column
941  [FUNC_CALL]         )
941  [NONE]              ;
941  [NONE]              
942  [NONE]              return
942  [NONE]              ;
942  [NONE]              
943  [IF]                }
943  [NONE]              
944  [NONE]              LOG_FMT
944  [FUNC_CALL]         (
944  [NONE]              LCMTIND
944  [NONE]              ,
944  [NONE]              "rule 5 - fall-through, stay in %d\n"
944  [NONE]              ,
944  [NONE]              col
944  [FUNC_CALL]         )
944  [NONE]              ;
944  [NONE]              
946  [NONE]              pc
946  [NONE]              ->
946  [NONE]              column
946  [NONE]              =
946  [NONE]              col
946  [NONE]              ;
946  [NONE]              
947  [FUNC_DEF]          }
947  [NONE]              
950  [COMMENT_WHOLE]     /**␤ * Put spaces on either side of the preproc (#) symbol.␤ * This is done by pointing pc->str into pp_str and adjusting the␤ * length.␤ */
954  [NONE]              
955  [FUNC_DEF]          void
955  [NONE]              indent_preproc
955  [FUNC_DEF]          (
955  [NONE]              void
955  [FUNC_DEF]          )
955  [NONE]              
956  [FUNC_DEF]          {
956  [NONE]              
957  [NONE]              chunk_t
957  [NONE]              *
957  [NONE]              pc
957  [NONE]              ;
957  [NONE]              
958  [NONE]              chunk_t
958  [NONE]              *
958  [NONE]              next
958  [NONE]              ;
958  [NONE]              
959  [NONE]              int
959  [NONE]              pp_level
959  [NONE]              ;
959  [NONE]              
960  [NONE]              int
960  [NONE]              pp_level_sub
960  [NONE]              =
960  [NONE]              0
960  [NONE]              ;
960  [NONE]              
961  [NONE]              int
961  [NONE]              tmp
961  [NONE]              ;
961  [NONE]              
963  [COMMENT_WHOLE]     /* Define a string of 16 spaces + # + 16 spaces */
963  [NONE]              
964  [NONE]              static
964  [NONE]              const
964  [NONE]              char
964  [NONE]              *
964  [NONE]              pp_str
964  [NONE]              =
964  [NONE]              "                #                "
964  [NONE]              ;
964  [NONE]              
965  [NONE]              static
965  [NONE]              const
965  [NONE]              char
965  [NONE]              *
965  [NONE]              alt_str
965  [NONE]              =
965  [NONE]              "                %:                "
965  [NONE]              ;
965  [NONE]              
967  [COMMENT_WHOLE]     /* Scan to see if the whole file is covered by one #ifdef */
967  [NONE]              
968  [NONE]              int
968  [NONE]              stage
968  [NONE]              =
968  [NONE]              0
968  [NONE]              ;
968  [NONE]              
970  [NONE]              for
970  [FOR]               (
970  [NONE]              pc
970  [NONE]              =
970  [NONE]              chunk_get_head
970  [FUNC_CALL]         (
970  [FUNC_CALL]         )
970  [FOR]               ;
970  [NONE]              pc
970  [NONE]              !=
970  [NONE]              NULL
970  [FOR]               ;
970  [NONE]              pc
970  [NONE]              =
970  [NONE]              chunk_get_next
970  [FUNC_CALL]         (
970  [NONE]              pc
970  [FUNC_CALL]         )
970  [FOR]               )
970  [NONE]              
971  [FOR]               {
971  [NONE]              
972  [NONE]              if
972  [IF]                (
972  [NONE]              chunk_is_comment
972  [FUNC_CALL]         (
972  [NONE]              pc
972  [FUNC_CALL]         )
972  [NONE]              ||
972  [NONE]              chunk_is_newline
972  [FUNC_CALL]         (
972  [NONE]              pc
972  [FUNC_CALL]         )
972  [IF]                )
973  [IF]                
973  [NONE]              
974  [NONE]              continue
974  [NONE]              ;
975  [IF]                
975  [NONE]              
977  [NONE]              if
977  [IF]                (
977  [NONE]              stage
977  [NONE]              ==
977  [NONE]              0
977  [IF]                )
977  [NONE]              
978  [IF]                {
978  [NONE]              
979  [COMMENT_WHOLE]     /* Check the first PP, make sure it is an #if type */
979  [NONE]              
980  [NONE]              if
980  [IF]                (
980  [NONE]              pc
980  [NONE]              ->
980  [NONE]              type
980  [NONE]              !=
980  [NONE]              CT_PREPROC
980  [IF]                )
981  [IF]                
981  [NONE]              
982  [NONE]              break
982  [NONE]              ;
982  [NONE]              
983  [IF]                
983  [NONE]              
984  [NONE]              next
984  [NONE]              =
984  [NONE]              chunk_get_next
984  [FUNC_CALL]         (
984  [NONE]              pc
984  [FUNC_CALL]         )
984  [NONE]              ;
984  [NONE]              
985  [NONE]              if
985  [IF]                (
985  [NONE]              (
985  [NONE]              next
985  [NONE]              ==
985  [NONE]              NULL
985  [NONE]              )
985  [NONE]              ||
985  [NONE]              (
985  [NONE]              next
985  [NONE]              ->
985  [NONE]              type
985  [NONE]              !=
985  [NONE]              CT_PP_IF
985  [NONE]              )
985  [IF]                )
986  [IF]                
986  [NONE]              
987  [NONE]              break
987  [NONE]              ;
987  [NONE]              
988  [IF]                
988  [NONE]              
989  [NONE]              stage
989  [NONE]              =
989  [NONE]              1
989  [NONE]              ;
989  [NONE]              
990  [IF]                }
990  [NONE]              
991  [NONE]              else
991  [NONE]              if
991  [ELSEIF]            (
991  [NONE]              stage
991  [NONE]              ==
991  [NONE]              1
991  [ELSEIF]            )
991  [NONE]              
992  [ELSEIF]            {
992  [NONE]              
993  [COMMENT_WHOLE]     /* Scan until a PP at level 0 is found - the close to the #if */
993  [NONE]              
994  [NONE]              if
994  [IF]                (
994  [NONE]              (
994  [NONE]              pc
994  [NONE]              ->
994  [NONE]              type
994  [NONE]              ==
994  [NONE]              CT_PREPROC
994  [NONE]              )
994  [NONE]              &&
994  [NONE]              
995  [NONE]              (
995  [NONE]              pc
995  [NONE]              ->
995  [NONE]              pp_level
995  [NONE]              ==
995  [NONE]              0
995  [NONE]              )
995  [IF]                )
996  [IF]                
996  [NONE]              
997  [NONE]              stage
997  [NONE]              =
997  [NONE]              2
997  [NONE]              ;
997  [NONE]              
998  [IF]                
998  [NONE]              
999  [NONE]              continue
999  [NONE]              ;
999  [NONE]              
1000 [ELSEIF]            }
1000 [NONE]              
1001 [NONE]              else
1001 [NONE]              if
1001 [ELSEIF]            (
1001 [NONE]              stage
1001 [NONE]              ==
1001 [NONE]              2
1001 [ELSEIF]            )
1001 [NONE]              
1002 [ELSEIF]            {
1002 [NONE]              
1003 [COMMENT_WHOLE]     /* We should only see the rest of the preprocessor */
1003 [NONE]              
1004 [NONE]              if
1004 [IF]                (
1004 [NONE]              (
1004 [NONE]              pc
1004 [NONE]              ->
1004 [NONE]              type
1004 [NONE]              ==
1004 [NONE]              CT_PREPROC
1004 [NONE]              )
1004 [NONE]              ||
1004 [NONE]              
1005 [NONE]              (
1005 [NONE]              (
1005 [NONE]              pc
1005 [NONE]              ->
1005 [NONE]              flags
1005 [NONE]              &
1005 [NONE]              PCF_IN_PREPROC
1005 [NONE]              )
1005 [NONE]              ==
1005 [NONE]              0
1005 [NONE]              )
1005 [IF]                )
1005 [NONE]              
1006 [IF]                {
1006 [NONE]              
1007 [NONE]              stage
1007 [NONE]              =
1007 [NONE]              0
1007 [NONE]              ;
1007 [NONE]              
1008 [NONE]              break
1008 [NONE]              ;
1008 [NONE]              
1009 [IF]                }
1009 [NONE]              
1010 [ELSEIF]            }
1010 [NONE]              
1011 [FOR]               }
1011 [NONE]              
1013 [NONE]              if
1013 [IF]                (
1013 [NONE]              stage
1013 [NONE]              ==
1013 [NONE]              2
1013 [IF]                )
1013 [NONE]              
1014 [IF]                {
1014 [NONE]              
1015 [NONE]              LOG_FMT
1015 [FUNC_CALL]         (
1015 [NONE]              LINFO
1015 [NONE]              ,
1015 [NONE]              "The whole file is covered by a #IF\n"
1015 [FUNC_CALL]         )
1015 [NONE]              ;
1015 [NONE]              
1016 [NONE]              pp_level_sub
1016 [NONE]              =
1016 [NONE]              1
1016 [NONE]              ;
1016 [NONE]              
1017 [IF]                }
1017 [NONE]              
1019 [NONE]              for
1019 [FOR]               (
1019 [NONE]              pc
1019 [NONE]              =
1019 [NONE]              chunk_get_head
1019 [FUNC_CALL]         (
1019 [FUNC_CALL]         )
1019 [FOR]               ;
1019 [NONE]              pc
1019 [NONE]              !=
1019 [NONE]              NULL
1019 [FOR]               ;
1019 [NONE]              pc
1019 [NONE]              =
1019 [NONE]              chunk_get_next
1019 [FUNC_CALL]         (
1019 [NONE]              pc
1019 [FUNC_CALL]         )
1019 [FOR]               )
1019 [NONE]              
1020 [FOR]               {
1020 [NONE]              
1021 [NONE]              if
1021 [IF]                (
1021 [NONE]              pc
1021 [NONE]              ->
1021 [NONE]              type
1021 [NONE]              !=
1021 [NONE]              CT_PREPROC
1021 [IF]                )
1022 [IF]                
1022 [NONE]              
1023 [NONE]              continue
1023 [NONE]              ;
1024 [IF]                
1024 [NONE]              
1026 [NONE]              if
1026 [IF]                (
1026 [NONE]              pc
1026 [NONE]              ->
1026 [NONE]              column
1026 [NONE]              !=
1026 [NONE]              1
1026 [IF]                )
1026 [NONE]              
1027 [IF]                {
1027 [NONE]              
1028 [COMMENT_WHOLE]     /* Don't handle preprocessors that aren't in column 1 */
1028 [NONE]              
1029 [NONE]              LOG_FMT
1029 [FUNC_CALL]         (
1029 [NONE]              LINFO
1029 [NONE]              ,
1029 [NONE]              "%s: Line %d doesn't start in column 1 (%d)\n"
1029 [NONE]              ,
1029 [NONE]              
1030 [NONE]              __func__
1030 [NONE]              ,
1030 [NONE]              pc
1030 [NONE]              ->
1030 [NONE]              orig_line
1030 [NONE]              ,
1030 [NONE]              pc
1030 [NONE]              ->
1030 [NONE]              column
1030 [FUNC_CALL]         )
1030 [NONE]              ;
1030 [NONE]              
1031 [NONE]              continue
1031 [NONE]              ;
1031 [NONE]              
1032 [IF]                }
1032 [NONE]              
1034 [COMMENT_WHOLE]     /* point into pp_str */
1034 [NONE]              
1035 [NONE]              if
1035 [IF]                (
1035 [NONE]              pc
1035 [NONE]              ->
1035 [NONE]              len
1035 [NONE]              ==
1035 [NONE]              2
1035 [IF]                )
1036 [IF]                
1036 [NONE]              
1037 [COMMENT_WHOLE]     /* alternate token crap */
1037 [NONE]              
1038 [NONE]              pc
1038 [NONE]              ->
1038 [NONE]              str
1038 [NONE]              =
1038 [NONE]              &
1038 [NONE]              alt_str
1038 [NONE]              [
1038 [NONE]              16
1038 [NONE]              ]
1038 [NONE]              ;
1038 [NONE]              
1039 [IF]                
1040 [NONE]              else
1041 [ELSE]              
1041 [NONE]              
1042 [NONE]              pc
1042 [NONE]              ->
1042 [NONE]              str
1042 [NONE]              =
1042 [NONE]              &
1042 [NONE]              pp_str
1042 [NONE]              [
1042 [NONE]              16
1042 [NONE]              ]
1042 [NONE]              ;
1042 [NONE]              
1043 [ELSE]              
1043 [NONE]              
1045 [NONE]              pp_level
1045 [NONE]              =
1045 [NONE]              pc
1045 [NONE]              ->
1045 [NONE]              pp_level
1045 [NONE]              -
1045 [NONE]              pp_level_sub
1045 [NONE]              ;
1045 [NONE]              
1046 [NONE]              if
1046 [IF]                (
1046 [NONE]              pp_level
1046 [NONE]              <
1046 [NONE]              0
1046 [IF]                )
1047 [IF]                
1047 [NONE]              
1048 [NONE]              pp_level
1048 [NONE]              =
1048 [NONE]              0
1048 [NONE]              ;
1048 [NONE]              
1049 [IF]                
1050 [NONE]              else
1050 [NONE]              if
1050 [ELSEIF]            (
1050 [NONE]              pp_level
1050 [NONE]              >
1050 [NONE]              16
1050 [ELSEIF]            )
1051 [ELSEIF]            
1051 [NONE]              
1052 [NONE]              pp_level
1052 [NONE]              =
1052 [NONE]              16
1052 [NONE]              ;
1053 [ELSEIF]            
1053 [NONE]              
1055 [COMMENT_WHOLE]     /* Note that the indent is removed by default */
1055 [NONE]              
1056 [NONE]              if
1056 [IF]                (
1056 [NONE]              (
1056 [NONE]              cpd
1056 [NONE]              .
1056 [NONE]              settings
1056 [NONE]              [
1056 [NONE]              UO_pp_indent
1056 [NONE]              ]
1056 [NONE]              .
1056 [NONE]              a
1056 [NONE]              &
1056 [NONE]              AV_ADD
1056 [NONE]              )
1056 [NONE]              !=
1056 [NONE]              0
1056 [IF]                )
1056 [NONE]              
1057 [IF]                {
1057 [NONE]              
1058 [COMMENT_WHOLE]     /* Need to add some spaces */
1058 [NONE]              
1059 [NONE]              pc
1059 [NONE]              ->
1059 [NONE]              str
1059 [NONE]              -=
1059 [NONE]              pp_level
1059 [NONE]              ;
1059 [NONE]              
1060 [NONE]              pc
1060 [NONE]              ->
1060 [NONE]              len
1060 [NONE]              +=
1060 [NONE]              pp_level
1060 [NONE]              ;
1060 [NONE]              
1061 [IF]                }
1061 [NONE]              
1062 [NONE]              else
1062 [NONE]              if
1062 [ELSEIF]            (
1062 [NONE]              cpd
1062 [NONE]              .
1062 [NONE]              settings
1062 [NONE]              [
1062 [NONE]              UO_pp_indent
1062 [NONE]              ]
1062 [NONE]              .
1062 [NONE]              a
1062 [NONE]              ==
1062 [NONE]              AV_IGNORE
1062 [ELSEIF]            )
1062 [NONE]              
1063 [ELSEIF]            {
1063 [NONE]              
1064 [NONE]              tmp
1064 [NONE]              =
1064 [NONE]              (
1064 [NONE]              pc
1064 [NONE]              ->
1064 [NONE]              orig_col
1064 [NONE]              <=
1064 [NONE]              16
1064 [NONE]              )
1064 [NONE]              ?
1064 [NONE]              pc
1064 [NONE]              ->
1064 [NONE]              orig_col
1064 [NONE]              -
1064 [NONE]              1
1064 [NONE]              :
1064 [NONE]              16
1064 [NONE]              ;
1064 [NONE]              
1065 [NONE]              pc
1065 [NONE]              ->
1065 [NONE]              str
1065 [NONE]              -=
1065 [NONE]              tmp
1065 [NONE]              ;
1065 [NONE]              
1066 [NONE]              pc
1066 [NONE]              ->
1066 [NONE]              len
1066 [NONE]              +=
1066 [NONE]              tmp
1066 [NONE]              ;
1066 [NONE]              
1067 [ELSEIF]            }
1067 [NONE]              
1069 [COMMENT_WHOLE]     /* Add spacing by adjusting the length */
1069 [NONE]              
1070 [NONE]              if
1070 [IF]                (
1070 [NONE]              (
1070 [NONE]              cpd
1070 [NONE]              .
1070 [NONE]              settings
1070 [NONE]              [
1070 [NONE]              UO_pp_space
1070 [NONE]              ]
1070 [NONE]              .
1070 [NONE]              a
1070 [NONE]              &
1070 [NONE]              AV_ADD
1070 [NONE]              )
1070 [NONE]              !=
1070 [NONE]              0
1070 [IF]                )
1071 [IF]                
1071 [NONE]              
1072 [NONE]              pc
1072 [NONE]              ->
1072 [NONE]              len
1072 [NONE]              +=
1072 [NONE]              pp_level
1072 [NONE]              ;
1072 [NONE]              
1073 [IF]                
1073 [NONE]              
1075 [NONE]              next
1075 [NONE]              =
1075 [NONE]              chunk_get_next
1075 [FUNC_CALL]         (
1075 [NONE]              pc
1075 [FUNC_CALL]         )
1075 [NONE]              ;
1075 [NONE]              
1076 [NONE]              if
1076 [IF]                (
1076 [NONE]              next
1076 [NONE]              !=
1076 [NONE]              NULL
1076 [IF]                )
1077 [IF]                
1077 [NONE]              
1078 [NONE]              reindent_line
1078 [FUNC_CALL]         (
1078 [NONE]              next
1078 [NONE]              ,
1078 [NONE]              pc
1078 [NONE]              ->
1078 [NONE]              len
1078 [NONE]              +
1078 [NONE]              1
1078 [FUNC_CALL]         )
1078 [NONE]              ;
1078 [NONE]              
1079 [IF]                
1079 [NONE]              
1081 [NONE]              LOG_FMT
1081 [FUNC_CALL]         (
1081 [NONE]              LPPIS
1081 [NONE]              ,
1081 [NONE]              "%s: Indent line %d to %d (len %d, next->col %d)\n"
1081 [NONE]              ,
1081 [NONE]              
1082 [NONE]              __func__
1082 [NONE]              ,
1082 [NONE]              pc
1082 [NONE]              ->
1082 [NONE]              orig_line
1082 [NONE]              ,
1082 [NONE]              pp_level
1082 [NONE]              ,
1082 [NONE]              pc
1082 [NONE]              ->
1082 [NONE]              len
1082 [NONE]              ,
1082 [NONE]              next
1082 [NONE]              ->
1082 [NONE]              column
1082 [FUNC_CALL]         )
1082 [NONE]              ;
1082 [NONE]              
1083 [FOR]               }
1083 [NONE]              
1084 [FUNC_DEF]          }
1084 [NONE]              