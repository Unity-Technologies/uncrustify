Line [Token]             Text
1    [COMMENT_MULTI]     /**␍␤ * @file Timestamp.h␍␤ * Definition of class example::Timestamp.␍␤ */
4    [NEWLINE]           
6    [PREPROC]           #
6    [PP_IF]             ifndef
6    [WORD]              __Timestamp_h_
6    [NEWLINE]           
7    [PREPROC]           #
7    [PP_DEFINE]         define
7    [MACRO]             __Timestamp_h_
7    [NEWLINE]           
9    [PREPROC]           #
9    [PP_INCLUDE]        include
9    [PREPROC_BODY]      <string>
9    [NEWLINE]           
11   [NAMESPACE]         namespace
11   [WORD]              example
11   [BRACE_OPEN]        {
11   [NEWLINE]           
13   [CLASS]             class
13   [TYPE]              IStreamable
13   [SEMICOLON]         ;
13   [NEWLINE]           
14   [CLASS]             class
14   [TYPE]              InStream
14   [SEMICOLON]         ;
14   [NEWLINE]           
15   [CLASS]             class
15   [TYPE]              OutStream
15   [SEMICOLON]         ;
15   [NEWLINE]           
17   [COMMENT_MULTI]     /**␍␤ * Timestamp is a timestamp with nanosecond resolution.␍␤ */
19   [NEWLINE]           
20   [CLASS]             class
20   [TYPE]              Timestamp
20   [NEWLINE]           
21   [CLASS_COLON]       :
21   [QUALIFIER]         public
21   [WORD]              IStreamable
21   [NEWLINE]           
22   [BRACE_OPEN]        {
22   [NEWLINE]           
24   [PRIVATE]           public
24   [PRIVATE_COLON]     :
24   [NEWLINE]           
26   [COMMENT_MULTI]     /**␍␤   * Default constructor.␍␤   */
28   [NEWLINE]           
29   [FUNC_CLASS_PROTO]    Timestamp
29   [FPAREN_OPEN]       (
29   [FPAREN_CLOSE]      )
29   [SEMICOLON]         ;
29   [NEWLINE]           
31   [COMMENT_MULTI]     /**␍␤   * Constructor.␍␤   *␍␤   * @param sec   The seconds␍␤   * @param nsec  The nanoseconds␍␤   */
36   [NEWLINE]           
37   [FUNC_CLASS_PROTO]    Timestamp
37   [FPAREN_OPEN]       (
37   [TYPE]              long
37   [WORD]              sec
37   [COMMA]             ,
37   [TYPE]              unsigned
37   [TYPE]              long
37   [WORD]              nsec
37   [FPAREN_CLOSE]      )
37   [SEMICOLON]         ;
37   [NEWLINE]           
39   [COMMENT_MULTI]     /**␍␤   * Destructor.␍␤   */
41   [NEWLINE]           
42   [QUALIFIER]         virtual
42   [DESTRUCTOR]        ~
42   [FUNC_CLASS_PROTO]    Timestamp
42   [FPAREN_OPEN]       (
42   [FPAREN_CLOSE]      )
42   [SEMICOLON]         ;
42   [NEWLINE]           
44   [COMMENT_MULTI]     /**␍␤   * Adds two timestamps.␍␤   *␍␤   * @param rhs The other timestamp␍␤   * @return The resulting timestamp␍␤   */
49   [NEWLINE]           
50   [TYPE]              Timestamp
50   [OPERATOR]          operator
50   [FUNC_PROTO]        +
50   [FPAREN_OPEN]       (
50   [QUALIFIER]         const
50   [TYPE]              Timestamp
50   [BYREF]             &
50   [WORD]              rhs
50   [FPAREN_CLOSE]      )
50   [QUALIFIER]         const
50   [SEMICOLON]         ;
50   [NEWLINE]           
52   [COMMENT_MULTI]     /**␍␤   * Substracts two timestamps.␍␤   *␍␤   * @param rhs The other timestamp␍␤   * @return The resulting timestamp␍␤   */
57   [NEWLINE]           
58   [TYPE]              Timestamp
58   [OPERATOR]          operator
58   [FUNC_PROTO]        -
58   [FPAREN_OPEN]       (
58   [QUALIFIER]         const
58   [TYPE]              Timestamp
58   [BYREF]             &
58   [WORD]              rhs
58   [FPAREN_CLOSE]      )
58   [QUALIFIER]         const
58   [SEMICOLON]         ;
58   [NEWLINE]           
60   [COMMENT_MULTI]     /**␍␤   * Compares two timestamps.␍␤   *␍␤   * @param rhs The other timestamp␍␤   * @return true if timestamp is smaller than the given timestamp␍␤   */
65   [NEWLINE]           
66   [TYPE]              bool
66   [OPERATOR]          operator
66   [FUNC_PROTO]        <
66   [FPAREN_OPEN]       (
66   [QUALIFIER]         const
66   [TYPE]              Timestamp
66   [BYREF]             &
66   [WORD]              rhs
66   [FPAREN_CLOSE]      )
66   [QUALIFIER]         const
66   [SEMICOLON]         ;
66   [NEWLINE]           
68   [COMMENT_MULTI]     /**␍␤   * Compares two timestamps.␍␤   *␍␤   * @param rhs The other timestamp␍␤   * @return true if timestamp is greater than the given timestamp␍␤   */
73   [NEWLINE]           
74   [TYPE]              bool
74   [OPERATOR]          operator
74   [FUNC_PROTO]        >
74   [FPAREN_OPEN]       (
74   [QUALIFIER]         const
74   [TYPE]              Timestamp
74   [BYREF]             &
74   [WORD]              rhs
74   [FPAREN_CLOSE]      )
74   [QUALIFIER]         const
74   [SEMICOLON]         ;
74   [NEWLINE]           
76   [COMMENT_MULTI]     /**␍␤   * Compares two timestamps.␍␤   *␍␤   * @param rhs The other timestamp␍␤   * @return true if timestamp is equal to the given timestamp␍␤   */
81   [NEWLINE]           
82   [TYPE]              bool
82   [OPERATOR]          operator
82   [FUNC_PROTO]        ==
82   [FPAREN_OPEN]       (
82   [QUALIFIER]         const
82   [TYPE]              Timestamp
82   [BYREF]             &
82   [WORD]              rhs
82   [FPAREN_CLOSE]      )
82   [QUALIFIER]         const
82   [SEMICOLON]         ;
82   [NEWLINE]           
84   [COMMENT_MULTI]     /**␍␤   * Compares two timestamps.␍␤   *␍␤   * @param rhs The other timestamp␍␤   * @return true if timestamp is not equal to the given timestamp␍␤   */
89   [NEWLINE]           
90   [TYPE]              bool
90   [OPERATOR]          operator
90   [FUNC_PROTO]        !=
90   [FPAREN_OPEN]       (
90   [QUALIFIER]         const
90   [TYPE]              Timestamp
90   [BYREF]             &
90   [WORD]              rhs
90   [FPAREN_CLOSE]      )
90   [QUALIFIER]         const
90   [SEMICOLON]         ;
90   [NEWLINE]           
92   [COMMENT_MULTI]     /**␍␤   * Adds an other timestamp.␍␤   *␍␤   * @param rhs The other timestamp␍␤   */
96   [NEWLINE]           
97   [TYPE]              void
97   [OPERATOR]          operator
97   [FUNC_PROTO]        +=
97   [FPAREN_OPEN]       (
97   [QUALIFIER]         const
97   [TYPE]              Timestamp
97   [BYREF]             &
97   [WORD]              rhs
97   [FPAREN_CLOSE]      )
97   [SEMICOLON]         ;
97   [NEWLINE]           
99   [COMMENT_MULTI]     /**␍␤   * Adds milliseconds.␍␤   *␍␤   * @param ms The milliseconds␍␤   * @return The resulting timestamp␍␤   */
104  [NEWLINE]           
105  [TYPE]              Timestamp
105  [FUNC_PROTO]        addMilliseconds
105  [FPAREN_OPEN]       (
105  [TYPE]              unsigned
105  [TYPE]              long
105  [WORD]              ms
105  [FPAREN_CLOSE]      )
105  [QUALIFIER]         const
105  [SEMICOLON]         ;
105  [NEWLINE]           
107  [COMMENT_MULTI]     /**␍␤   * Adds nanoseconds.␍␤   *␍␤   * @param ns The nanoseconds␍␤   * @return The resulting timestamp␍␤   */
112  [NEWLINE]           
113  [TYPE]              Timestamp
113  [FUNC_PROTO]        addNanoseconds
113  [FPAREN_OPEN]       (
113  [TYPE]              unsigned
113  [TYPE]              long
113  [WORD]              ns
113  [FPAREN_CLOSE]      )
113  [QUALIFIER]         const
113  [SEMICOLON]         ;
113  [NEWLINE]           
115  [COMMENT_MULTI]     /**␍␤   * Checks if this timestamp is zero.␍␤   *␍␤   * @return true if timestamp is zero␍␤   */
119  [NEWLINE]           
120  [TYPE]              bool
120  [FUNC_PROTO]        isZero
120  [FPAREN_OPEN]       (
120  [FPAREN_CLOSE]      )
120  [QUALIFIER]         const
120  [SEMICOLON]         ;
120  [NEWLINE]           
122  [COMMENT_MULTI]     /**␍␤   * Gets the milliseconds.␍␤   * @attention Negativ timestamp return zero␍␤   *␍␤   * @return The milliseconds␍␤   */
127  [NEWLINE]           
128  [TYPE]              unsigned
128  [TYPE]              long
128  [FUNC_PROTO]        getMilliseconds
128  [FPAREN_OPEN]       (
128  [FPAREN_CLOSE]      )
128  [QUALIFIER]         const
128  [SEMICOLON]         ;
128  [NEWLINE]           
130  [COMMENT_MULTI]     /**␍␤   * Divide timestamps by two.␍␤   *␍␤   * @return The resulting timestamp␍␤   */
134  [NEWLINE]           
135  [TYPE]              Timestamp
135  [FUNC_PROTO]        divideByTwo
135  [FPAREN_OPEN]       (
135  [FPAREN_CLOSE]      )
135  [SEMICOLON]         ;
135  [NEWLINE]           
137  [COMMENT_MULTI]     /**␍␤   * Gets the string-representation.␍␤   *␍␤   * @return The string representation␍␤   */
141  [NEWLINE]           
142  [TYPE]              std
142  [DC_MEMBER]         ::
142  [TYPE]              string
142  [FUNC_PROTO]        getString
142  [FPAREN_OPEN]       (
142  [FPAREN_CLOSE]      )
142  [QUALIFIER]         const
142  [SEMICOLON]         ;
142  [NEWLINE]           
144  [COMMENT_MULTI]     /**␍␤   * Gets the string-representation in milliseconds.␍␤   *␍␤   * @return The string representation␍␤   */
148  [NEWLINE]           
149  [TYPE]              std
149  [DC_MEMBER]         ::
149  [TYPE]              string
149  [FUNC_PROTO]        getStringMilliseconds
149  [FPAREN_OPEN]       (
149  [FPAREN_CLOSE]      )
149  [QUALIFIER]         const
149  [SEMICOLON]         ;
149  [NEWLINE]           
151  [COMMENT_MULTI]     /**␍␤   * Resets the timestamp.␍␤   */
153  [NEWLINE]           
154  [TYPE]              void
154  [FUNC_PROTO]        reset
154  [FPAREN_OPEN]       (
154  [FPAREN_CLOSE]      )
154  [SEMICOLON]         ;
154  [NEWLINE]           
156  [COMMENT]           /** The seconds */
156  [NEWLINE]           
157  [TYPE]              long
157  [WORD]              sec
157  [SEMICOLON]         ;
157  [NEWLINE]           
159  [COMMENT]           /** The nanoseconds */
159  [NEWLINE]           
160  [TYPE]              unsigned
160  [TYPE]              long
160  [WORD]              nsec
160  [SEMICOLON]         ;
160  [NEWLINE]           
162  [TYPE]              InStream
162  [BYREF]             &
162  [OPERATOR]          operator
162  [FUNC_PROTO]        <<
162  [FPAREN_OPEN]       (
162  [TYPE]              InStream
162  [BYREF]             &
162  [WORD]              in
162  [FPAREN_CLOSE]      )
162  [SEMICOLON]         ;
162  [NEWLINE]           
164  [TYPE]              OutStream
164  [BYREF]             &
164  [OPERATOR]          operator
164  [FUNC_PROTO]        >>
164  [FPAREN_OPEN]       (
164  [TYPE]              OutStream
164  [BYREF]             &
164  [WORD]              out
164  [FPAREN_CLOSE]      )
164  [QUALIFIER]         const
164  [SEMICOLON]         ;
164  [NEWLINE]           
166  [BRACE_CLOSE]       }
166  [SEMICOLON]         ;
166  [NEWLINE]           
167  [BRACE_CLOSE]       }
167  [COMMENT_CPP]       // namespace
167  [NEWLINE]           
169  [PREPROC]           #
169  [PP_ENDIF]          endif
169  [COMMENT_CPP]       // __Timestamp_h_
169  [NEWLINE]           