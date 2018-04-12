Line [Parent]            Text
1    [COMMENT_WHOLE]     /**␍␤ * @file Timestamp.h␍␤ * Definition of class example::Timestamp.␍␤ */
4    [NONE]              
6    [PP_IF]             #
6    [NONE]              ifndef
6    [NONE]              __Timestamp_h_
6    [NONE]              
7    [PP_DEFINE]         #
7    [NONE]              define
7    [NONE]              __Timestamp_h_
7    [NONE]              
9    [PP_INCLUDE]        #
9    [NONE]              include
9    [NONE]              <string>
9    [NONE]              
11   [NONE]              namespace
11   [NAMESPACE]         example
11   [NAMESPACE]         {
11   [NONE]              
13   [NONE]              class
13   [CLASS]             IStreamable
13   [NONE]              ;
13   [NONE]              
14   [NONE]              class
14   [CLASS]             InStream
14   [NONE]              ;
14   [NONE]              
15   [NONE]              class
15   [CLASS]             OutStream
15   [NONE]              ;
15   [NONE]              
17   [COMMENT_WHOLE]     /**␍␤ * Timestamp is a timestamp with nanosecond resolution.␍␤ */
19   [NONE]              
20   [NONE]              class
20   [CLASS]             Timestamp
20   [NONE]              
21   [NONE]              :
21   [NONE]              public
21   [NONE]              IStreamable
21   [NONE]              
22   [CLASS]             {
22   [NONE]              
24   [NONE]              public
24   [NONE]              :
24   [NONE]              
26   [COMMENT_WHOLE]     /**␍␤   * Default constructor.␍␤   */
28   [NONE]              
29   [NONE]              Timestamp
29   [FUNC_CLASS_PROTO]    (
29   [FUNC_CLASS_PROTO]    )
29   [FUNC_CLASS_PROTO]    ;
29   [NONE]              
31   [COMMENT_WHOLE]     /**␍␤   * Constructor.␍␤   *␍␤   * @param sec   The seconds␍␤   * @param nsec  The nanoseconds␍␤   */
36   [NONE]              
37   [NONE]              Timestamp
37   [FUNC_CLASS_PROTO]    (
37   [NONE]              long
37   [NONE]              sec
37   [NONE]              ,
37   [NONE]              unsigned
37   [NONE]              long
37   [NONE]              nsec
37   [FUNC_CLASS_PROTO]    )
37   [FUNC_CLASS_PROTO]    ;
37   [NONE]              
39   [COMMENT_WHOLE]     /**␍␤   * Destructor.␍␤   */
41   [NONE]              
42   [NONE]              virtual
42   [NONE]              ~
42   [DESTRUCTOR]        Timestamp
42   [FUNC_CLASS_PROTO]    (
42   [FUNC_CLASS_PROTO]    )
42   [FUNC_CLASS_PROTO]    ;
42   [NONE]              
44   [COMMENT_WHOLE]     /**␍␤   * Adds two timestamps.␍␤   *␍␤   * @param rhs The other timestamp␍␤   * @return The resulting timestamp␍␤   */
49   [NONE]              
50   [FUNC_PROTO]        Timestamp
50   [FUNC_PROTO]        operator
50   [OPERATOR]          +
50   [FUNC_PROTO]        (
50   [NONE]              const
50   [NONE]              Timestamp
50   [NONE]              &
50   [NONE]              rhs
50   [FUNC_PROTO]        )
50   [NONE]              const
50   [FUNC_PROTO]        ;
50   [NONE]              
52   [COMMENT_WHOLE]     /**␍␤   * Substracts two timestamps.␍␤   *␍␤   * @param rhs The other timestamp␍␤   * @return The resulting timestamp␍␤   */
57   [NONE]              
58   [FUNC_PROTO]        Timestamp
58   [FUNC_PROTO]        operator
58   [OPERATOR]          -
58   [FUNC_PROTO]        (
58   [NONE]              const
58   [NONE]              Timestamp
58   [NONE]              &
58   [NONE]              rhs
58   [FUNC_PROTO]        )
58   [NONE]              const
58   [FUNC_PROTO]        ;
58   [NONE]              
60   [COMMENT_WHOLE]     /**␍␤   * Compares two timestamps.␍␤   *␍␤   * @param rhs The other timestamp␍␤   * @return true if timestamp is smaller than the given timestamp␍␤   */
65   [NONE]              
66   [FUNC_PROTO]        bool
66   [FUNC_PROTO]        operator
66   [OPERATOR]          <
66   [FUNC_PROTO]        (
66   [NONE]              const
66   [NONE]              Timestamp
66   [NONE]              &
66   [NONE]              rhs
66   [FUNC_PROTO]        )
66   [NONE]              const
66   [FUNC_PROTO]        ;
66   [NONE]              
68   [COMMENT_WHOLE]     /**␍␤   * Compares two timestamps.␍␤   *␍␤   * @param rhs The other timestamp␍␤   * @return true if timestamp is greater than the given timestamp␍␤   */
73   [NONE]              
74   [FUNC_PROTO]        bool
74   [FUNC_PROTO]        operator
74   [OPERATOR]          >
74   [FUNC_PROTO]        (
74   [NONE]              const
74   [NONE]              Timestamp
74   [NONE]              &
74   [NONE]              rhs
74   [FUNC_PROTO]        )
74   [NONE]              const
74   [FUNC_PROTO]        ;
74   [NONE]              
76   [COMMENT_WHOLE]     /**␍␤   * Compares two timestamps.␍␤   *␍␤   * @param rhs The other timestamp␍␤   * @return true if timestamp is equal to the given timestamp␍␤   */
81   [NONE]              
82   [FUNC_PROTO]        bool
82   [FUNC_PROTO]        operator
82   [OPERATOR]          ==
82   [FUNC_PROTO]        (
82   [NONE]              const
82   [NONE]              Timestamp
82   [NONE]              &
82   [NONE]              rhs
82   [FUNC_PROTO]        )
82   [NONE]              const
82   [FUNC_PROTO]        ;
82   [NONE]              
84   [COMMENT_WHOLE]     /**␍␤   * Compares two timestamps.␍␤   *␍␤   * @param rhs The other timestamp␍␤   * @return true if timestamp is not equal to the given timestamp␍␤   */
89   [NONE]              
90   [FUNC_PROTO]        bool
90   [FUNC_PROTO]        operator
90   [OPERATOR]          !=
90   [FUNC_PROTO]        (
90   [NONE]              const
90   [NONE]              Timestamp
90   [NONE]              &
90   [NONE]              rhs
90   [FUNC_PROTO]        )
90   [NONE]              const
90   [FUNC_PROTO]        ;
90   [NONE]              
92   [COMMENT_WHOLE]     /**␍␤   * Adds an other timestamp.␍␤   *␍␤   * @param rhs The other timestamp␍␤   */
96   [NONE]              
97   [FUNC_PROTO]        void
97   [FUNC_PROTO]        operator
97   [OPERATOR]          +=
97   [FUNC_PROTO]        (
97   [NONE]              const
97   [NONE]              Timestamp
97   [NONE]              &
97   [NONE]              rhs
97   [FUNC_PROTO]        )
97   [FUNC_PROTO]        ;
97   [NONE]              
99   [COMMENT_WHOLE]     /**␍␤   * Adds milliseconds.␍␤   *␍␤   * @param ms The milliseconds␍␤   * @return The resulting timestamp␍␤   */
104  [NONE]              
105  [FUNC_PROTO]        Timestamp
105  [NONE]              addMilliseconds
105  [FUNC_PROTO]        (
105  [NONE]              unsigned
105  [NONE]              long
105  [NONE]              ms
105  [FUNC_PROTO]        )
105  [NONE]              const
105  [FUNC_PROTO]        ;
105  [NONE]              
107  [COMMENT_WHOLE]     /**␍␤   * Adds nanoseconds.␍␤   *␍␤   * @param ns The nanoseconds␍␤   * @return The resulting timestamp␍␤   */
112  [NONE]              
113  [FUNC_PROTO]        Timestamp
113  [NONE]              addNanoseconds
113  [FUNC_PROTO]        (
113  [NONE]              unsigned
113  [NONE]              long
113  [NONE]              ns
113  [FUNC_PROTO]        )
113  [NONE]              const
113  [FUNC_PROTO]        ;
113  [NONE]              
115  [COMMENT_WHOLE]     /**␍␤   * Checks if this timestamp is zero.␍␤   *␍␤   * @return true if timestamp is zero␍␤   */
119  [NONE]              
120  [FUNC_PROTO]        bool
120  [NONE]              isZero
120  [FUNC_PROTO]        (
120  [FUNC_PROTO]        )
120  [NONE]              const
120  [FUNC_PROTO]        ;
120  [NONE]              
122  [COMMENT_WHOLE]     /**␍␤   * Gets the milliseconds.␍␤   * @attention Negativ timestamp return zero␍␤   *␍␤   * @return The milliseconds␍␤   */
127  [NONE]              
128  [FUNC_PROTO]        unsigned
128  [FUNC_PROTO]        long
128  [NONE]              getMilliseconds
128  [FUNC_PROTO]        (
128  [FUNC_PROTO]        )
128  [NONE]              const
128  [FUNC_PROTO]        ;
128  [NONE]              
130  [COMMENT_WHOLE]     /**␍␤   * Divide timestamps by two.␍␤   *␍␤   * @return The resulting timestamp␍␤   */
134  [NONE]              
135  [FUNC_PROTO]        Timestamp
135  [NONE]              divideByTwo
135  [FUNC_PROTO]        (
135  [FUNC_PROTO]        )
135  [FUNC_PROTO]        ;
135  [NONE]              
137  [COMMENT_WHOLE]     /**␍␤   * Gets the string-representation.␍␤   *␍␤   * @return The string representation␍␤   */
141  [NONE]              
142  [FUNC_PROTO]        std
142  [FUNC_PROTO]        ::
142  [FUNC_PROTO]        string
142  [NONE]              getString
142  [FUNC_PROTO]        (
142  [FUNC_PROTO]        )
142  [NONE]              const
142  [FUNC_PROTO]        ;
142  [NONE]              
144  [COMMENT_WHOLE]     /**␍␤   * Gets the string-representation in milliseconds.␍␤   *␍␤   * @return The string representation␍␤   */
148  [NONE]              
149  [FUNC_PROTO]        std
149  [FUNC_PROTO]        ::
149  [FUNC_PROTO]        string
149  [NONE]              getStringMilliseconds
149  [FUNC_PROTO]        (
149  [FUNC_PROTO]        )
149  [NONE]              const
149  [FUNC_PROTO]        ;
149  [NONE]              
151  [COMMENT_WHOLE]     /**␍␤   * Resets the timestamp.␍␤   */
153  [NONE]              
154  [FUNC_PROTO]        void
154  [NONE]              reset
154  [FUNC_PROTO]        (
154  [FUNC_PROTO]        )
154  [FUNC_PROTO]        ;
154  [NONE]              
156  [COMMENT_WHOLE]     /** The seconds */
156  [NONE]              
157  [NONE]              long
157  [NONE]              sec
157  [NONE]              ;
157  [NONE]              
159  [COMMENT_WHOLE]     /** The nanoseconds */
159  [NONE]              
160  [NONE]              unsigned
160  [NONE]              long
160  [NONE]              nsec
160  [NONE]              ;
160  [NONE]              
162  [FUNC_PROTO]        InStream
162  [FUNC_PROTO]        &
162  [FUNC_PROTO]        operator
162  [OPERATOR]          <<
162  [FUNC_PROTO]        (
162  [NONE]              InStream
162  [NONE]              &
162  [NONE]              in
162  [FUNC_PROTO]        )
162  [FUNC_PROTO]        ;
162  [NONE]              
164  [FUNC_PROTO]        OutStream
164  [FUNC_PROTO]        &
164  [FUNC_PROTO]        operator
164  [OPERATOR]          >>
164  [FUNC_PROTO]        (
164  [NONE]              OutStream
164  [NONE]              &
164  [NONE]              out
164  [FUNC_PROTO]        )
164  [NONE]              const
164  [FUNC_PROTO]        ;
164  [NONE]              
166  [CLASS]             }
166  [CLASS]             ;
166  [NONE]              
167  [NAMESPACE]         }
167  [COMMENT_END]       // namespace
167  [NONE]              
169  [PP_ENDIF]          #
169  [NONE]              endif
169  [COMMENT_END]       // __Timestamp_h_
169  [NONE]              