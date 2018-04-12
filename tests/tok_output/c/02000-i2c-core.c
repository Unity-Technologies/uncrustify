Line [Token]             Text
1    [COMMENT]           /* i2c-core.c - a device driver for the iic-bus interface		     */
1    [NEWLINE]           
2    [COMMENT]           /* ------------------------------------------------------------------------- */
2    [NEWLINE]           
3    [COMMENT_MULTI]     /*   Copyright (C) 1995-99 Simon G. Vogl␤␤    This program is free software; you can redistribute it and/or modify␤    it under the terms of the GNU General Public License as published by␤    the Free Software Foundation; either version 2 of the License, or␤    (at your option) any later version.␤␤    This program is distributed in the hope that it will be useful,␤    but WITHOUT ANY WARRANTY; without even the implied warranty of␤    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the␤    GNU General Public License for more details.␤␤    You should have received a copy of the GNU General Public License␤    along with this program; if not, write to the Free Software␤    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.		     */
17   [NEWLINE]           
18   [COMMENT]           /* ------------------------------------------------------------------------- */
18   [NEWLINE]           
20   [COMMENT_MULTI]     /* With some changes from Kyösti Mälkki <kmalkki@cc.hut.fi>.␤   All SMBus-related things are written by Frodo Looijaard <frodol@dds.nl>␤   SMBus 2.0 support by Mark Studebaker <mdsxyz123@yahoo.com>                */
22   [NEWLINE]           
24   [PREPROC]           #
24   [PP_INCLUDE]        include
24   [PREPROC_BODY]      <linux/module.h>
24   [NEWLINE]           
25   [PREPROC]           #
25   [PP_INCLUDE]        include
25   [PREPROC_BODY]      <linux/kernel.h>
25   [NEWLINE]           
26   [PREPROC]           #
26   [PP_INCLUDE]        include
26   [PREPROC_BODY]      <linux/errno.h>
26   [NEWLINE]           
27   [PREPROC]           #
27   [PP_INCLUDE]        include
27   [PREPROC_BODY]      <linux/slab.h>
27   [NEWLINE]           
28   [PREPROC]           #
28   [PP_INCLUDE]        include
28   [PREPROC_BODY]      <linux/i2c.h>
28   [NEWLINE]           
29   [PREPROC]           #
29   [PP_INCLUDE]        include
29   [PREPROC_BODY]      <linux/init.h>
29   [NEWLINE]           
30   [PREPROC]           #
30   [PP_INCLUDE]        include
30   [PREPROC_BODY]      <linux/idr.h>
30   [NEWLINE]           
31   [PREPROC]           #
31   [PP_INCLUDE]        include
31   [PREPROC_BODY]      <linux/seq_file.h>
31   [NEWLINE]           
32   [PREPROC]           #
32   [PP_INCLUDE]        include
32   [PREPROC_BODY]      <asm/uaccess.h>
32   [NEWLINE]           
35   [QUALIFIER]         static
35   [FUNC_CALL]         LIST_HEAD
35   [FPAREN_OPEN]       (
35   [WORD]              adapters
35   [FPAREN_CLOSE]      )
35   [SEMICOLON]         ;
35   [NEWLINE]           
36   [QUALIFIER]         static
36   [FUNC_CALL]         LIST_HEAD
36   [FPAREN_OPEN]       (
36   [WORD]              drivers
36   [FPAREN_CLOSE]      )
36   [SEMICOLON]         ;
36   [NEWLINE]           
37   [QUALIFIER]         static
37   [FUNC_CALL]         DECLARE_MUTEX
37   [FPAREN_OPEN]       (
37   [WORD]              core_lists
37   [FPAREN_CLOSE]      )
37   [SEMICOLON]         ;
37   [NEWLINE]           
38   [QUALIFIER]         static
38   [FUNC_CALL]         DEFINE_IDR
38   [FPAREN_OPEN]       (
38   [WORD]              i2c_adapter_idr
38   [FPAREN_CLOSE]      )
38   [SEMICOLON]         ;
38   [NEWLINE]           
40   [QUALIFIER]         static
40   [TYPE]              int
40   [FUNC_DEF]          i2c_device_match
40   [FPAREN_OPEN]       (
40   [STRUCT]            struct
40   [TYPE]              device
40   [PTR_TYPE]          *
40   [WORD]              dev
40   [COMMA]             ,
40   [STRUCT]            struct
40   [TYPE]              device_driver
40   [PTR_TYPE]          *
40   [WORD]              drv
40   [FPAREN_CLOSE]      )
40   [NEWLINE]           
41   [BRACE_OPEN]        {
41   [NEWLINE]           
42   [RETURN]            return
42   [PAREN_OPEN]        (
42   [NUMBER]            1
42   [PAREN_CLOSE]       )
42   [SEMICOLON]         ;
42   [NEWLINE]           
43   [BRACE_CLOSE]       }
43   [NEWLINE]           
45   [QUALIFIER]         static
45   [TYPE]              int
45   [FUNC_DEF]          i2c_bus_suspend
45   [FPAREN_OPEN]       (
45   [STRUCT]            struct
45   [TYPE]              device
45   [PTR_TYPE]          *
45   [WORD]              dev
45   [COMMA]             ,
45   [TYPE]              pm_message_t
45   [WORD]              state
45   [FPAREN_CLOSE]      )
45   [NEWLINE]           
46   [BRACE_OPEN]        {
46   [NEWLINE]           
47   [TYPE]              int
47   [WORD]              rc
47   [ASSIGN]            =
47   [NUMBER]            0
47   [SEMICOLON]         ;
47   [NEWLINE]           
49   [IF]                if
49   [SPAREN_OPEN]       (
49   [WORD]              dev
49   [MEMBER]            ->
49   [WORD]              driver
49   [BOOL]              &&
49   [WORD]              dev
49   [MEMBER]            ->
49   [WORD]              driver
49   [MEMBER]            ->
49   [WORD]              suspend
49   [SPAREN_CLOSE]      )
49   [NEWLINE]           
49   [BRACE_OPEN]        {
49   [NEWLINE]           
50   [WORD]              rc
50   [ASSIGN]            =
50   [WORD]              dev
50   [MEMBER]            ->
50   [WORD]              driver
50   [MEMBER]            ->
50   [FUNC_CALL]         suspend
50   [FPAREN_OPEN]       (
50   [WORD]              dev
50   [COMMA]             ,
50   [WORD]              state
50   [COMMA]             ,
50   [NUMBER]            0
50   [FPAREN_CLOSE]      )
50   [SEMICOLON]         ;
50   [NEWLINE]           
50   [BRACE_CLOSE]       }
50   [NEWLINE]           
51   [RETURN]            return
51   [PAREN_OPEN]        (
51   [WORD]              rc
51   [PAREN_CLOSE]       )
51   [SEMICOLON]         ;
51   [NEWLINE]           
52   [BRACE_CLOSE]       }
52   [NEWLINE]           
54   [QUALIFIER]         static
54   [TYPE]              int
54   [FUNC_DEF]          i2c_bus_resume
54   [FPAREN_OPEN]       (
54   [STRUCT]            struct
54   [TYPE]              device
54   [PTR_TYPE]          *
54   [WORD]              dev
54   [FPAREN_CLOSE]      )
54   [NEWLINE]           
55   [BRACE_OPEN]        {
55   [NEWLINE]           
56   [TYPE]              int
56   [WORD]              rc
56   [ASSIGN]            =
56   [NUMBER]            0
56   [SEMICOLON]         ;
56   [NEWLINE]           
58   [IF]                if
58   [SPAREN_OPEN]       (
58   [WORD]              dev
58   [MEMBER]            ->
58   [WORD]              driver
58   [BOOL]              &&
58   [WORD]              dev
58   [MEMBER]            ->
58   [WORD]              driver
58   [MEMBER]            ->
58   [WORD]              resume
58   [SPAREN_CLOSE]      )
58   [NEWLINE]           
58   [BRACE_OPEN]        {
58   [NEWLINE]           
59   [WORD]              rc
59   [ASSIGN]            =
59   [WORD]              dev
59   [MEMBER]            ->
59   [WORD]              driver
59   [MEMBER]            ->
59   [FUNC_CALL]         resume
59   [FPAREN_OPEN]       (
59   [WORD]              dev
59   [COMMA]             ,
59   [NUMBER]            0
59   [FPAREN_CLOSE]      )
59   [SEMICOLON]         ;
59   [NEWLINE]           
59   [BRACE_CLOSE]       }
59   [NEWLINE]           
60   [RETURN]            return
60   [PAREN_OPEN]        (
60   [WORD]              rc
60   [PAREN_CLOSE]       )
60   [SEMICOLON]         ;
60   [NEWLINE]           
61   [BRACE_CLOSE]       }
61   [NEWLINE]           
63   [STRUCT]            struct
63   [TYPE]              bus_type
63   [WORD]              i2c_bus_type
63   [ASSIGN]            =
63   [NEWLINE]           
63   [BRACE_OPEN]        {
63   [NEWLINE]           
64   [C99_MEMBER]        .
64   [WORD]              name
64   [ASSIGN]            =
64   [STRING]            "i2c"
64   [COMMA]             ,
64   [NEWLINE]           
65   [C99_MEMBER]        .
65   [WORD]              match
65   [ASSIGN]            =
65   [WORD]              i2c_device_match
65   [COMMA]             ,
65   [NEWLINE]           
66   [C99_MEMBER]        .
66   [WORD]              suspend
66   [ASSIGN]            =
66   [WORD]              i2c_bus_suspend
66   [COMMA]             ,
66   [NEWLINE]           
67   [C99_MEMBER]        .
67   [WORD]              resume
67   [ASSIGN]            =
67   [WORD]              i2c_bus_resume
67   [COMMA]             ,
67   [NEWLINE]           
68   [BRACE_CLOSE]       }
68   [SEMICOLON]         ;
68   [NEWLINE]           
70   [QUALIFIER]         static
70   [TYPE]              int
70   [FUNC_DEF]          i2c_device_probe
70   [FPAREN_OPEN]       (
70   [STRUCT]            struct
70   [TYPE]              device
70   [PTR_TYPE]          *
70   [WORD]              dev
70   [FPAREN_CLOSE]      )
70   [NEWLINE]           
71   [BRACE_OPEN]        {
71   [NEWLINE]           
72   [RETURN]            return
72   [PAREN_OPEN]        (
72   [NEG]               -
72   [WORD]              ENODEV
72   [PAREN_CLOSE]       )
72   [SEMICOLON]         ;
72   [NEWLINE]           
73   [BRACE_CLOSE]       }
73   [NEWLINE]           
75   [QUALIFIER]         static
75   [TYPE]              int
75   [FUNC_DEF]          i2c_device_remove
75   [FPAREN_OPEN]       (
75   [STRUCT]            struct
75   [TYPE]              device
75   [PTR_TYPE]          *
75   [WORD]              dev
75   [FPAREN_CLOSE]      )
75   [NEWLINE]           
76   [BRACE_OPEN]        {
76   [NEWLINE]           
77   [RETURN]            return
77   [PAREN_OPEN]        (
77   [NUMBER]            0
77   [PAREN_CLOSE]       )
77   [SEMICOLON]         ;
77   [NEWLINE]           
78   [BRACE_CLOSE]       }
78   [NEWLINE]           
80   [TYPE]              void
80   [FUNC_DEF]          i2c_adapter_dev_release
80   [FPAREN_OPEN]       (
80   [STRUCT]            struct
80   [TYPE]              device
80   [PTR_TYPE]          *
80   [WORD]              dev
80   [FPAREN_CLOSE]      )
80   [NEWLINE]           
81   [BRACE_OPEN]        {
81   [NEWLINE]           
82   [STRUCT]            struct
82   [TYPE]              i2c_adapter
82   [PTR_TYPE]          *
82   [WORD]              adap
82   [ASSIGN]            =
82   [FUNC_CALL]         dev_to_i2c_adapter
82   [FPAREN_OPEN]       (
82   [WORD]              dev
82   [FPAREN_CLOSE]      )
82   [SEMICOLON]         ;
82   [NEWLINE]           
83   [FUNC_CALL]         complete
83   [FPAREN_OPEN]       (
83   [ADDR]              &
83   [WORD]              adap
83   [MEMBER]            ->
83   [WORD]              dev_released
83   [FPAREN_CLOSE]      )
83   [SEMICOLON]         ;
83   [NEWLINE]           
84   [BRACE_CLOSE]       }
84   [NEWLINE]           
86   [STRUCT]            struct
86   [TYPE]              device_driver
86   [WORD]              i2c_adapter_driver
86   [ASSIGN]            =
86   [NEWLINE]           
86   [BRACE_OPEN]        {
86   [NEWLINE]           
87   [C99_MEMBER]        .
87   [WORD]              name
87   [ASSIGN]            =
87   [STRING]            "i2c_adapter"
87   [COMMA]             ,
87   [NEWLINE]           
88   [C99_MEMBER]        .
88   [WORD]              bus
88   [ASSIGN]            =
88   [ADDR]              &
88   [WORD]              i2c_bus_type
88   [COMMA]             ,
88   [NEWLINE]           
89   [C99_MEMBER]        .
89   [WORD]              probe
89   [ASSIGN]            =
89   [WORD]              i2c_device_probe
89   [COMMA]             ,
89   [NEWLINE]           
90   [C99_MEMBER]        .
90   [WORD]              remove
90   [ASSIGN]            =
90   [WORD]              i2c_device_remove
90   [COMMA]             ,
90   [NEWLINE]           
91   [BRACE_CLOSE]       }
91   [SEMICOLON]         ;
91   [NEWLINE]           
93   [QUALIFIER]         static
93   [TYPE]              void
93   [FUNC_DEF]          i2c_adapter_class_dev_release
93   [FPAREN_OPEN]       (
93   [STRUCT]            struct
93   [TYPE]              class_device
93   [PTR_TYPE]          *
93   [WORD]              dev
93   [FPAREN_CLOSE]      )
93   [NEWLINE]           
94   [BRACE_OPEN]        {
94   [NEWLINE]           
95   [STRUCT]            struct
95   [TYPE]              i2c_adapter
95   [PTR_TYPE]          *
95   [WORD]              adap
95   [ASSIGN]            =
95   [FUNC_CALL]         class_dev_to_i2c_adapter
95   [FPAREN_OPEN]       (
95   [WORD]              dev
95   [FPAREN_CLOSE]      )
95   [SEMICOLON]         ;
95   [NEWLINE]           
96   [FUNC_CALL]         complete
96   [FPAREN_OPEN]       (
96   [ADDR]              &
96   [WORD]              adap
96   [MEMBER]            ->
96   [WORD]              class_dev_released
96   [FPAREN_CLOSE]      )
96   [SEMICOLON]         ;
96   [NEWLINE]           
97   [BRACE_CLOSE]       }
97   [NEWLINE]           
99   [STRUCT]            struct
99   [TYPE]              class
99   [WORD]              i2c_adapter_class
99   [ASSIGN]            =
99   [NEWLINE]           
99   [BRACE_OPEN]        {
99   [NEWLINE]           
100  [C99_MEMBER]        .
100  [WORD]              name
100  [ASSIGN]            =
100  [STRING]            "i2c-adapter"
100  [COMMA]             ,
100  [NEWLINE]           
101  [C99_MEMBER]        .
101  [WORD]              release
101  [ASSIGN]            =
101  [ADDR]              &
101  [WORD]              i2c_adapter_class_dev_release
101  [COMMA]             ,
101  [NEWLINE]           
102  [BRACE_CLOSE]       }
102  [SEMICOLON]         ;
102  [NEWLINE]           
104  [QUALIFIER]         static
104  [TYPE]              ssize_t
104  [FUNC_DEF]          show_adapter_name
104  [FPAREN_OPEN]       (
104  [STRUCT]            struct
104  [TYPE]              device
104  [PTR_TYPE]          *
104  [WORD]              dev
104  [COMMA]             ,
104  [STRUCT]            struct
104  [TYPE]              device_attribute
104  [PTR_TYPE]          *
104  [WORD]              attr
104  [COMMA]             ,
104  [TYPE]              char
104  [PTR_TYPE]          *
104  [WORD]              buf
104  [FPAREN_CLOSE]      )
104  [NEWLINE]           
105  [BRACE_OPEN]        {
105  [NEWLINE]           
106  [STRUCT]            struct
106  [TYPE]              i2c_adapter
106  [PTR_TYPE]          *
106  [WORD]              adap
106  [ASSIGN]            =
106  [FUNC_CALL]         dev_to_i2c_adapter
106  [FPAREN_OPEN]       (
106  [WORD]              dev
106  [FPAREN_CLOSE]      )
106  [SEMICOLON]         ;
106  [NEWLINE]           
107  [RETURN]            return
107  [PAREN_OPEN]        (
107  [FUNC_CALL]         sprintf
107  [FPAREN_OPEN]       (
107  [WORD]              buf
107  [COMMA]             ,
107  [STRING]            "%s\n"
107  [COMMA]             ,
107  [WORD]              adap
107  [MEMBER]            ->
107  [WORD]              name
107  [FPAREN_CLOSE]      )
107  [PAREN_CLOSE]       )
107  [SEMICOLON]         ;
107  [NEWLINE]           
108  [BRACE_CLOSE]       }
108  [NEWLINE]           
109  [QUALIFIER]         static
109  [FUNC_CALL]         DEVICE_ATTR
109  [FPAREN_OPEN]       (
109  [WORD]              name
109  [COMMA]             ,
109  [WORD]              S_IRUGO
109  [COMMA]             ,
109  [WORD]              show_adapter_name
109  [COMMA]             ,
109  [WORD]              NULL
109  [FPAREN_CLOSE]      )
109  [SEMICOLON]         ;
109  [NEWLINE]           
112  [QUALIFIER]         static
112  [TYPE]              void
112  [FUNC_DEF]          i2c_client_release
112  [FPAREN_OPEN]       (
112  [STRUCT]            struct
112  [TYPE]              device
112  [PTR_TYPE]          *
112  [WORD]              dev
112  [FPAREN_CLOSE]      )
112  [NEWLINE]           
113  [BRACE_OPEN]        {
113  [NEWLINE]           
114  [STRUCT]            struct
114  [TYPE]              i2c_client
114  [PTR_TYPE]          *
114  [WORD]              client
114  [ASSIGN]            =
114  [FUNC_CALL]         to_i2c_client
114  [FPAREN_OPEN]       (
114  [WORD]              dev
114  [FPAREN_CLOSE]      )
114  [SEMICOLON]         ;
114  [NEWLINE]           
115  [FUNC_CALL]         complete
115  [FPAREN_OPEN]       (
115  [ADDR]              &
115  [WORD]              client
115  [MEMBER]            ->
115  [WORD]              released
115  [FPAREN_CLOSE]      )
115  [SEMICOLON]         ;
115  [NEWLINE]           
116  [BRACE_CLOSE]       }
116  [NEWLINE]           
118  [QUALIFIER]         static
118  [TYPE]              ssize_t
118  [FUNC_DEF]          show_client_name
118  [FPAREN_OPEN]       (
118  [STRUCT]            struct
118  [TYPE]              device
118  [PTR_TYPE]          *
118  [WORD]              dev
118  [COMMA]             ,
118  [STRUCT]            struct
118  [TYPE]              device_attribute
118  [PTR_TYPE]          *
118  [WORD]              attr
118  [COMMA]             ,
118  [TYPE]              char
118  [PTR_TYPE]          *
118  [WORD]              buf
118  [FPAREN_CLOSE]      )
118  [NEWLINE]           
119  [BRACE_OPEN]        {
119  [NEWLINE]           
120  [STRUCT]            struct
120  [TYPE]              i2c_client
120  [PTR_TYPE]          *
120  [WORD]              client
120  [ASSIGN]            =
120  [FUNC_CALL]         to_i2c_client
120  [FPAREN_OPEN]       (
120  [WORD]              dev
120  [FPAREN_CLOSE]      )
120  [SEMICOLON]         ;
120  [NEWLINE]           
121  [RETURN]            return
121  [PAREN_OPEN]        (
121  [FUNC_CALL]         sprintf
121  [FPAREN_OPEN]       (
121  [WORD]              buf
121  [COMMA]             ,
121  [STRING]            "%s\n"
121  [COMMA]             ,
121  [WORD]              client
121  [MEMBER]            ->
121  [WORD]              name
121  [FPAREN_CLOSE]      )
121  [PAREN_CLOSE]       )
121  [SEMICOLON]         ;
121  [NEWLINE]           
122  [BRACE_CLOSE]       }
122  [NEWLINE]           
124  [COMMENT_MULTI]     /*␤ * We can't use the DEVICE_ATTR() macro here as we want the same filename for a␤ * different type of a device.  So beware if the DEVICE_ATTR() macro ever␤ * changes, this definition will also have to change.␤ */
128  [NEWLINE]           
129  [QUALIFIER]         static
129  [STRUCT]            struct
129  [TYPE]              device_attribute
129  [WORD]              dev_attr_client_name
129  [ASSIGN]            =
129  [NEWLINE]           
129  [BRACE_OPEN]        {
129  [NEWLINE]           
130  [C99_MEMBER]        .
130  [WORD]              attr
130  [ASSIGN]            =
130  [BRACE_OPEN]        {
130  [C99_MEMBER]        .
130  [WORD]              name
130  [ASSIGN]            =
130  [STRING]            "name"
130  [COMMA]             ,
130  [C99_MEMBER]        .
130  [WORD]              mode
130  [ASSIGN]            =
130  [WORD]              S_IRUGO
130  [COMMA]             ,
130  [C99_MEMBER]        .
130  [WORD]              owner
130  [ASSIGN]            =
130  [WORD]              THIS_MODULE
130  [BRACE_CLOSE]       }
130  [COMMA]             ,
130  [NEWLINE]           
131  [C99_MEMBER]        .
131  [WORD]              show
131  [ASSIGN]            =
131  [ADDR]              &
131  [WORD]              show_client_name
131  [COMMA]             ,
131  [NEWLINE]           
132  [BRACE_CLOSE]       }
132  [SEMICOLON]         ;
132  [NEWLINE]           
135  [COMMENT_MULTI]     /* ---------------------------------------------------␤ * registering functions␤ * ---------------------------------------------------␤ */
138  [NEWLINE]           
140  [COMMENT_MULTI]     /* -----␤ * i2c_add_adapter is called from within the algorithm layer,␤ * when a new hw adapter registers. A new device is register to be␤ * available for clients.␤ */
144  [NEWLINE]           
145  [TYPE]              int
145  [FUNC_DEF]          i2c_add_adapter
145  [FPAREN_OPEN]       (
145  [STRUCT]            struct
145  [TYPE]              i2c_adapter
145  [PTR_TYPE]          *
145  [WORD]              adap
145  [FPAREN_CLOSE]      )
145  [NEWLINE]           
146  [BRACE_OPEN]        {
146  [NEWLINE]           
147  [TYPE]              int
147  [WORD]              id
147  [COMMA]             ,
147  [WORD]              res
147  [ASSIGN]            =
147  [NUMBER]            0
147  [SEMICOLON]         ;
147  [NEWLINE]           
148  [STRUCT]            struct
148  [TYPE]              list_head
148  [PTR_TYPE]          *
148  [WORD]              item
148  [SEMICOLON]         ;
148  [NEWLINE]           
149  [STRUCT]            struct
149  [TYPE]              i2c_driver
149  [PTR_TYPE]          *
149  [WORD]              driver
149  [SEMICOLON]         ;
149  [NEWLINE]           
151  [FUNC_CALL]         down
151  [FPAREN_OPEN]       (
151  [ADDR]              &
151  [WORD]              core_lists
151  [FPAREN_CLOSE]      )
151  [SEMICOLON]         ;
151  [NEWLINE]           
153  [IF]                if
153  [SPAREN_OPEN]       (
153  [FUNC_CALL]         idr_pre_get
153  [FPAREN_OPEN]       (
153  [ADDR]              &
153  [WORD]              i2c_adapter_idr
153  [COMMA]             ,
153  [WORD]              GFP_KERNEL
153  [FPAREN_CLOSE]      )
153  [COMPARE]           ==
153  [NUMBER]            0
153  [SPAREN_CLOSE]      )
153  [NEWLINE]           
153  [BRACE_OPEN]        {
153  [NEWLINE]           
154  [WORD]              res
154  [ASSIGN]            =
154  [NEG]               -
154  [WORD]              ENOMEM
154  [SEMICOLON]         ;
154  [NEWLINE]           
155  [GOTO]              goto
155  [WORD]              out_unlock
155  [SEMICOLON]         ;
155  [NEWLINE]           
156  [BRACE_CLOSE]       }
156  [NEWLINE]           
158  [WORD]              res
158  [ASSIGN]            =
158  [FUNC_CALL]         idr_get_new
158  [FPAREN_OPEN]       (
158  [ADDR]              &
158  [WORD]              i2c_adapter_idr
158  [COMMA]             ,
158  [WORD]              adap
158  [COMMA]             ,
158  [ADDR]              &
158  [WORD]              id
158  [FPAREN_CLOSE]      )
158  [SEMICOLON]         ;
158  [NEWLINE]           
159  [IF]                if
159  [SPAREN_OPEN]       (
159  [WORD]              res
159  [COMPARE]           <
159  [NUMBER]            0
159  [SPAREN_CLOSE]      )
159  [NEWLINE]           
159  [BRACE_OPEN]        {
159  [NEWLINE]           
160  [IF]                if
160  [SPAREN_OPEN]       (
160  [WORD]              res
160  [COMPARE]           ==
160  [NEG]               -
160  [WORD]              EAGAIN
160  [SPAREN_CLOSE]      )
160  [NEWLINE]           
160  [BRACE_OPEN]        {
160  [NEWLINE]           
161  [WORD]              res
161  [ASSIGN]            =
161  [NEG]               -
161  [WORD]              ENOMEM
161  [SEMICOLON]         ;
161  [NEWLINE]           
161  [BRACE_CLOSE]       }
161  [NEWLINE]           
162  [GOTO]              goto
162  [WORD]              out_unlock
162  [SEMICOLON]         ;
162  [NEWLINE]           
163  [BRACE_CLOSE]       }
163  [NEWLINE]           
165  [TYPE]              adap
165  [MEMBER]            ->
165  [WORD]              nr
165  [ASSIGN]            =
165  [WORD]              id
165  [ARITH]             &
165  [WORD]              MAX_ID_MASK
165  [SEMICOLON]         ;
165  [NEWLINE]           
166  [FUNC_CALL]         init_MUTEX
166  [FPAREN_OPEN]       (
166  [ADDR]              &
166  [WORD]              adap
166  [MEMBER]            ->
166  [WORD]              bus_lock
166  [FPAREN_CLOSE]      )
166  [SEMICOLON]         ;
166  [NEWLINE]           
167  [FUNC_CALL]         init_MUTEX
167  [FPAREN_OPEN]       (
167  [ADDR]              &
167  [WORD]              adap
167  [MEMBER]            ->
167  [WORD]              clist_lock
167  [FPAREN_CLOSE]      )
167  [SEMICOLON]         ;
167  [NEWLINE]           
168  [FUNC_CALL]         list_add_tail
168  [FPAREN_OPEN]       (
168  [ADDR]              &
168  [WORD]              adap
168  [MEMBER]            ->
168  [WORD]              list
168  [COMMA]             ,
168  [ADDR]              &
168  [WORD]              adapters
168  [FPAREN_CLOSE]      )
168  [SEMICOLON]         ;
168  [NEWLINE]           
169  [FUNC_CALL]         INIT_LIST_HEAD
169  [FPAREN_OPEN]       (
169  [ADDR]              &
169  [WORD]              adap
169  [MEMBER]            ->
169  [WORD]              clients
169  [FPAREN_CLOSE]      )
169  [SEMICOLON]         ;
169  [NEWLINE]           
171  [COMMENT_MULTI]     /* Add the adapter to the driver core.␤	 * If the parent pointer is not set up,␤	 * we add this adapter to the host bus.␤	 */
174  [NEWLINE]           
175  [IF]                if
175  [SPAREN_OPEN]       (
175  [WORD]              adap
175  [MEMBER]            ->
175  [WORD]              dev
175  [MEMBER]            .
175  [WORD]              parent
175  [COMPARE]           ==
175  [WORD]              NULL
175  [SPAREN_CLOSE]      )
175  [NEWLINE]           
175  [BRACE_OPEN]        {
175  [NEWLINE]           
176  [TYPE]              adap
176  [MEMBER]            ->
176  [TYPE]              dev
176  [MEMBER]            .
176  [WORD]              parent
176  [ASSIGN]            =
176  [ADDR]              &
176  [WORD]              platform_bus
176  [SEMICOLON]         ;
176  [NEWLINE]           
176  [BRACE_CLOSE]       }
176  [NEWLINE]           
177  [FUNC_CALL]         sprintf
177  [FPAREN_OPEN]       (
177  [WORD]              adap
177  [MEMBER]            ->
177  [WORD]              dev
177  [MEMBER]            .
177  [WORD]              bus_id
177  [COMMA]             ,
177  [STRING]            "i2c-%d"
177  [COMMA]             ,
177  [WORD]              adap
177  [MEMBER]            ->
177  [WORD]              nr
177  [FPAREN_CLOSE]      )
177  [SEMICOLON]         ;
177  [NEWLINE]           
178  [TYPE]              adap
178  [MEMBER]            ->
178  [TYPE]              dev
178  [MEMBER]            .
178  [WORD]              driver
178  [ASSIGN]            =
178  [ADDR]              &
178  [WORD]              i2c_adapter_driver
178  [SEMICOLON]         ;
178  [NEWLINE]           
179  [TYPE]              adap
179  [MEMBER]            ->
179  [TYPE]              dev
179  [MEMBER]            .
179  [WORD]              release
179  [ASSIGN]            =
179  [ADDR]              &
179  [WORD]              i2c_adapter_dev_release
179  [SEMICOLON]         ;
179  [NEWLINE]           
180  [FUNC_CALL]         device_register
180  [FPAREN_OPEN]       (
180  [ADDR]              &
180  [WORD]              adap
180  [MEMBER]            ->
180  [WORD]              dev
180  [FPAREN_CLOSE]      )
180  [SEMICOLON]         ;
180  [NEWLINE]           
181  [FUNC_CALL]         device_create_file
181  [FPAREN_OPEN]       (
181  [ADDR]              &
181  [WORD]              adap
181  [MEMBER]            ->
181  [WORD]              dev
181  [COMMA]             ,
181  [ADDR]              &
181  [WORD]              dev_attr_name
181  [FPAREN_CLOSE]      )
181  [SEMICOLON]         ;
181  [NEWLINE]           
183  [COMMENT]           /* Add this adapter to the i2c_adapter class */
183  [NEWLINE]           
184  [FUNC_CALL]         memset
184  [FPAREN_OPEN]       (
184  [ADDR]              &
184  [WORD]              adap
184  [MEMBER]            ->
184  [WORD]              class_dev
184  [COMMA]             ,
184  [NUMBER]            0x00
184  [COMMA]             ,
184  [SIZEOF]            sizeof
184  [PAREN_OPEN]        (
184  [STRUCT]            struct
184  [TYPE]              class_device
184  [PAREN_CLOSE]       )
184  [FPAREN_CLOSE]      )
184  [SEMICOLON]         ;
184  [NEWLINE]           
185  [TYPE]              adap
185  [MEMBER]            ->
185  [TYPE]              class_dev
185  [MEMBER]            .
185  [WORD]              dev
185  [ASSIGN]            =
185  [ADDR]              &
185  [WORD]              adap
185  [MEMBER]            ->
185  [WORD]              dev
185  [SEMICOLON]         ;
185  [NEWLINE]           
186  [TYPE]              adap
186  [MEMBER]            ->
186  [TYPE]              class_dev
186  [MEMBER]            .
186  [WORD]              class
186  [ASSIGN]            =
186  [ADDR]              &
186  [WORD]              i2c_adapter_class
186  [SEMICOLON]         ;
186  [NEWLINE]           
187  [FUNC_CALL]         strlcpy
187  [FPAREN_OPEN]       (
187  [WORD]              adap
187  [MEMBER]            ->
187  [WORD]              class_dev
187  [MEMBER]            .
187  [WORD]              class_id
187  [COMMA]             ,
187  [WORD]              adap
187  [MEMBER]            ->
187  [WORD]              dev
187  [MEMBER]            .
187  [WORD]              bus_id
187  [COMMA]             ,
187  [WORD]              BUS_ID_SIZE
187  [FPAREN_CLOSE]      )
187  [SEMICOLON]         ;
187  [NEWLINE]           
188  [FUNC_CALL]         class_device_register
188  [FPAREN_OPEN]       (
188  [ADDR]              &
188  [WORD]              adap
188  [MEMBER]            ->
188  [WORD]              class_dev
188  [FPAREN_CLOSE]      )
188  [SEMICOLON]         ;
188  [NEWLINE]           
190  [FUNC_CALL]         dev_dbg
190  [FPAREN_OPEN]       (
190  [ADDR]              &
190  [WORD]              adap
190  [MEMBER]            ->
190  [WORD]              dev
190  [COMMA]             ,
190  [STRING]            "adapter [%s] registered\n"
190  [COMMA]             ,
190  [WORD]              adap
190  [MEMBER]            ->
190  [WORD]              name
190  [FPAREN_CLOSE]      )
190  [SEMICOLON]         ;
190  [NEWLINE]           
192  [COMMENT]           /* inform drivers of new adapters */
192  [NEWLINE]           
193  [FUNC_CALL]         list_for_each
193  [FPAREN_OPEN]       (
193  [WORD]              item
193  [COMMA]             ,
193  [ADDR]              &
193  [WORD]              drivers
193  [FPAREN_CLOSE]      )
193  [NEWLINE]           
193  [BRACE_OPEN]        {
193  [NEWLINE]           
194  [WORD]              driver
194  [ASSIGN]            =
194  [FUNC_CALL]         list_entry
194  [FPAREN_OPEN]       (
194  [WORD]              item
194  [COMMA]             ,
194  [STRUCT]            struct
194  [TYPE]              i2c_driver
194  [COMMA]             ,
194  [WORD]              list
194  [FPAREN_CLOSE]      )
194  [SEMICOLON]         ;
194  [NEWLINE]           
195  [IF]                if
195  [SPAREN_OPEN]       (
195  [WORD]              driver
195  [MEMBER]            ->
195  [WORD]              flags
195  [ARITH]             &
195  [WORD]              I2C_DF_NOTIFY
195  [SPAREN_CLOSE]      )
195  [NEWLINE]           
195  [BRACE_OPEN]        {
195  [NEWLINE]           
196  [COMMENT]           /* We ignore the return code; if it fails, too bad */
196  [NEWLINE]           
197  [TYPE]              driver
197  [MEMBER]            ->
197  [FUNC_CALL]         attach_adapter
197  [FPAREN_OPEN]       (
197  [WORD]              adap
197  [FPAREN_CLOSE]      )
197  [SEMICOLON]         ;
197  [NEWLINE]           
197  [BRACE_CLOSE]       }
197  [NEWLINE]           
198  [BRACE_CLOSE]       }
198  [NEWLINE]           
200  [LABEL]             out_unlock
200  [LABEL_COLON]       :
200  [NEWLINE]           
201  [FUNC_CALL]         up
201  [FPAREN_OPEN]       (
201  [ADDR]              &
201  [WORD]              core_lists
201  [FPAREN_CLOSE]      )
201  [SEMICOLON]         ;
201  [NEWLINE]           
202  [RETURN]            return
202  [PAREN_OPEN]        (
202  [WORD]              res
202  [PAREN_CLOSE]       )
202  [SEMICOLON]         ;
202  [NEWLINE]           
203  [BRACE_CLOSE]       }
203  [COMMENT]           /* i2c_add_adapter */
203  [NEWLINE]           
206  [TYPE]              int
206  [FUNC_DEF]          i2c_del_adapter
206  [FPAREN_OPEN]       (
206  [STRUCT]            struct
206  [TYPE]              i2c_adapter
206  [PTR_TYPE]          *
206  [WORD]              adap
206  [FPAREN_CLOSE]      )
206  [NEWLINE]           
207  [BRACE_OPEN]        {
207  [NEWLINE]           
208  [STRUCT]            struct
208  [TYPE]              list_head
208  [PTR_TYPE]          *
208  [WORD]              item
208  [COMMA]             ,
208  [PTR_TYPE]          *
208  [WORD]              _n
208  [SEMICOLON]         ;
208  [NEWLINE]           
209  [STRUCT]            struct
209  [TYPE]              i2c_adapter
209  [PTR_TYPE]          *
209  [WORD]              adap_from_list
209  [SEMICOLON]         ;
209  [NEWLINE]           
210  [STRUCT]            struct
210  [TYPE]              i2c_driver
210  [PTR_TYPE]          *
210  [WORD]              driver
210  [SEMICOLON]         ;
210  [NEWLINE]           
211  [STRUCT]            struct
211  [TYPE]              i2c_client
211  [PTR_TYPE]          *
211  [WORD]              client
211  [SEMICOLON]         ;
211  [NEWLINE]           
212  [TYPE]              int
212  [WORD]              res
212  [ASSIGN]            =
212  [NUMBER]            0
212  [SEMICOLON]         ;
212  [NEWLINE]           
214  [FUNC_CALL]         down
214  [FPAREN_OPEN]       (
214  [ADDR]              &
214  [WORD]              core_lists
214  [FPAREN_CLOSE]      )
214  [SEMICOLON]         ;
214  [NEWLINE]           
216  [COMMENT]           /* First make sure that this adapter was ever added */
216  [NEWLINE]           
217  [FUNC_CALL]         list_for_each_entry
217  [FPAREN_OPEN]       (
217  [WORD]              adap_from_list
217  [COMMA]             ,
217  [ADDR]              &
217  [WORD]              adapters
217  [COMMA]             ,
217  [WORD]              list
217  [FPAREN_CLOSE]      )
217  [NEWLINE]           
217  [BRACE_OPEN]        {
217  [NEWLINE]           
218  [IF]                if
218  [SPAREN_OPEN]       (
218  [WORD]              adap_from_list
218  [COMPARE]           ==
218  [WORD]              adap
218  [SPAREN_CLOSE]      )
218  [NEWLINE]           
218  [BRACE_OPEN]        {
218  [NEWLINE]           
219  [BREAK]             break
219  [SEMICOLON]         ;
219  [NEWLINE]           
219  [BRACE_CLOSE]       }
219  [NEWLINE]           
220  [BRACE_CLOSE]       }
220  [NEWLINE]           
221  [IF]                if
221  [SPAREN_OPEN]       (
221  [WORD]              adap_from_list
221  [COMPARE]           !=
221  [WORD]              adap
221  [SPAREN_CLOSE]      )
221  [NEWLINE]           
221  [BRACE_OPEN]        {
221  [NEWLINE]           
222  [FUNC_CALL]         pr_debug
222  [FPAREN_OPEN]       (
222  [STRING]            "i2c-core: attempting to delete unregistered "
222  [NEWLINE]           
223  [STRING]            "adapter [%s]\n"
223  [COMMA]             ,
223  [WORD]              adap
223  [MEMBER]            ->
223  [WORD]              name
223  [FPAREN_CLOSE]      )
223  [SEMICOLON]         ;
223  [NEWLINE]           
224  [WORD]              res
224  [ASSIGN]            =
224  [NEG]               -
224  [WORD]              EINVAL
224  [SEMICOLON]         ;
224  [NEWLINE]           
225  [GOTO]              goto
225  [WORD]              out_unlock
225  [SEMICOLON]         ;
225  [NEWLINE]           
226  [BRACE_CLOSE]       }
226  [NEWLINE]           
228  [FUNC_CALL]         list_for_each
228  [FPAREN_OPEN]       (
228  [WORD]              item
228  [COMMA]             ,
228  [ADDR]              &
228  [WORD]              drivers
228  [FPAREN_CLOSE]      )
228  [NEWLINE]           
228  [BRACE_OPEN]        {
228  [NEWLINE]           
229  [WORD]              driver
229  [ASSIGN]            =
229  [FUNC_CALL]         list_entry
229  [FPAREN_OPEN]       (
229  [WORD]              item
229  [COMMA]             ,
229  [STRUCT]            struct
229  [TYPE]              i2c_driver
229  [COMMA]             ,
229  [WORD]              list
229  [FPAREN_CLOSE]      )
229  [SEMICOLON]         ;
229  [NEWLINE]           
230  [IF]                if
230  [SPAREN_OPEN]       (
230  [WORD]              driver
230  [MEMBER]            ->
230  [WORD]              detach_adapter
230  [SPAREN_CLOSE]      )
230  [NEWLINE]           
230  [BRACE_OPEN]        {
230  [NEWLINE]           
231  [IF]                if
231  [SPAREN_OPEN]       (
231  [PAREN_OPEN]        (
231  [WORD]              res
231  [ASSIGN]            =
231  [WORD]              driver
231  [MEMBER]            ->
231  [FUNC_CALL]         detach_adapter
231  [FPAREN_OPEN]       (
231  [WORD]              adap
231  [FPAREN_CLOSE]      )
231  [PAREN_CLOSE]       )
231  [SPAREN_CLOSE]      )
231  [NEWLINE]           
231  [BRACE_OPEN]        {
231  [NEWLINE]           
232  [FUNC_CALL]         dev_err
232  [FPAREN_OPEN]       (
232  [ADDR]              &
232  [WORD]              adap
232  [MEMBER]            ->
232  [WORD]              dev
232  [COMMA]             ,
232  [STRING]            "detach_adapter failed "
232  [NEWLINE]           
233  [STRING]            "for driver [%s]\n"
233  [COMMA]             ,
233  [WORD]              driver
233  [MEMBER]            ->
233  [WORD]              name
233  [FPAREN_CLOSE]      )
233  [SEMICOLON]         ;
233  [NEWLINE]           
234  [GOTO]              goto
234  [WORD]              out_unlock
234  [SEMICOLON]         ;
234  [NEWLINE]           
235  [BRACE_CLOSE]       }
235  [NEWLINE]           
235  [BRACE_CLOSE]       }
235  [NEWLINE]           
236  [BRACE_CLOSE]       }
236  [NEWLINE]           
238  [COMMENT_MULTI]     /* detach any active clients. This must be done first, because␤	 * it can fail; in which case we give up. */
239  [NEWLINE]           
240  [FUNC_CALL]         list_for_each_safe
240  [FPAREN_OPEN]       (
240  [WORD]              item
240  [COMMA]             ,
240  [WORD]              _n
240  [COMMA]             ,
240  [ADDR]              &
240  [WORD]              adap
240  [MEMBER]            ->
240  [WORD]              clients
240  [FPAREN_CLOSE]      )
240  [NEWLINE]           
240  [BRACE_OPEN]        {
240  [NEWLINE]           
241  [WORD]              client
241  [ASSIGN]            =
241  [FUNC_CALL]         list_entry
241  [FPAREN_OPEN]       (
241  [WORD]              item
241  [COMMA]             ,
241  [STRUCT]            struct
241  [TYPE]              i2c_client
241  [COMMA]             ,
241  [WORD]              list
241  [FPAREN_CLOSE]      )
241  [SEMICOLON]         ;
241  [NEWLINE]           
243  [COMMENT_MULTI]     /* detaching devices is unconditional of the set notify␤		 * flag, as _all_ clients that reside on the adapter␤		 * must be deleted, as this would cause invalid states.␤		 */
246  [NEWLINE]           
247  [IF]                if
247  [SPAREN_OPEN]       (
247  [PAREN_OPEN]        (
247  [WORD]              res
247  [ASSIGN]            =
247  [WORD]              client
247  [MEMBER]            ->
247  [WORD]              driver
247  [MEMBER]            ->
247  [FUNC_CALL]         detach_client
247  [FPAREN_OPEN]       (
247  [WORD]              client
247  [FPAREN_CLOSE]      )
247  [PAREN_CLOSE]       )
247  [SPAREN_CLOSE]      )
247  [NEWLINE]           
247  [BRACE_OPEN]        {
247  [NEWLINE]           
248  [FUNC_CALL]         dev_err
248  [FPAREN_OPEN]       (
248  [ADDR]              &
248  [WORD]              adap
248  [MEMBER]            ->
248  [WORD]              dev
248  [COMMA]             ,
248  [STRING]            "detach_client failed for client "
248  [NEWLINE]           
249  [STRING]            "[%s] at address 0x%02x\n"
249  [COMMA]             ,
249  [WORD]              client
249  [MEMBER]            ->
249  [WORD]              name
249  [COMMA]             ,
249  [NEWLINE]           
250  [WORD]              client
250  [MEMBER]            ->
250  [WORD]              addr
250  [FPAREN_CLOSE]      )
250  [SEMICOLON]         ;
250  [NEWLINE]           
251  [GOTO]              goto
251  [WORD]              out_unlock
251  [SEMICOLON]         ;
251  [NEWLINE]           
252  [BRACE_CLOSE]       }
252  [NEWLINE]           
253  [BRACE_CLOSE]       }
253  [NEWLINE]           
255  [COMMENT]           /* clean up the sysfs representation */
255  [NEWLINE]           
256  [FUNC_CALL]         init_completion
256  [FPAREN_OPEN]       (
256  [ADDR]              &
256  [WORD]              adap
256  [MEMBER]            ->
256  [WORD]              dev_released
256  [FPAREN_CLOSE]      )
256  [SEMICOLON]         ;
256  [NEWLINE]           
257  [FUNC_CALL]         init_completion
257  [FPAREN_OPEN]       (
257  [ADDR]              &
257  [WORD]              adap
257  [MEMBER]            ->
257  [WORD]              class_dev_released
257  [FPAREN_CLOSE]      )
257  [SEMICOLON]         ;
257  [NEWLINE]           
258  [FUNC_CALL]         class_device_unregister
258  [FPAREN_OPEN]       (
258  [ADDR]              &
258  [WORD]              adap
258  [MEMBER]            ->
258  [WORD]              class_dev
258  [FPAREN_CLOSE]      )
258  [SEMICOLON]         ;
258  [NEWLINE]           
259  [FUNC_CALL]         device_remove_file
259  [FPAREN_OPEN]       (
259  [ADDR]              &
259  [WORD]              adap
259  [MEMBER]            ->
259  [WORD]              dev
259  [COMMA]             ,
259  [ADDR]              &
259  [WORD]              dev_attr_name
259  [FPAREN_CLOSE]      )
259  [SEMICOLON]         ;
259  [NEWLINE]           
260  [FUNC_CALL]         device_unregister
260  [FPAREN_OPEN]       (
260  [ADDR]              &
260  [WORD]              adap
260  [MEMBER]            ->
260  [WORD]              dev
260  [FPAREN_CLOSE]      )
260  [SEMICOLON]         ;
260  [NEWLINE]           
261  [FUNC_CALL]         list_del
261  [FPAREN_OPEN]       (
261  [ADDR]              &
261  [WORD]              adap
261  [MEMBER]            ->
261  [WORD]              list
261  [FPAREN_CLOSE]      )
261  [SEMICOLON]         ;
261  [NEWLINE]           
263  [COMMENT]           /* wait for sysfs to drop all references */
263  [NEWLINE]           
264  [FUNC_CALL]         wait_for_completion
264  [FPAREN_OPEN]       (
264  [ADDR]              &
264  [WORD]              adap
264  [MEMBER]            ->
264  [WORD]              dev_released
264  [FPAREN_CLOSE]      )
264  [SEMICOLON]         ;
264  [NEWLINE]           
265  [FUNC_CALL]         wait_for_completion
265  [FPAREN_OPEN]       (
265  [ADDR]              &
265  [WORD]              adap
265  [MEMBER]            ->
265  [WORD]              class_dev_released
265  [FPAREN_CLOSE]      )
265  [SEMICOLON]         ;
265  [NEWLINE]           
267  [COMMENT]           /* free dynamically allocated bus id */
267  [NEWLINE]           
268  [FUNC_CALL]         idr_remove
268  [FPAREN_OPEN]       (
268  [ADDR]              &
268  [WORD]              i2c_adapter_idr
268  [COMMA]             ,
268  [WORD]              adap
268  [MEMBER]            ->
268  [WORD]              nr
268  [FPAREN_CLOSE]      )
268  [SEMICOLON]         ;
268  [NEWLINE]           
270  [FUNC_CALL]         dev_dbg
270  [FPAREN_OPEN]       (
270  [ADDR]              &
270  [WORD]              adap
270  [MEMBER]            ->
270  [WORD]              dev
270  [COMMA]             ,
270  [STRING]            "adapter [%s] unregistered\n"
270  [COMMA]             ,
270  [WORD]              adap
270  [MEMBER]            ->
270  [WORD]              name
270  [FPAREN_CLOSE]      )
270  [SEMICOLON]         ;
270  [NEWLINE]           
272  [LABEL]             out_unlock
272  [LABEL_COLON]       :
272  [NEWLINE]           
273  [FUNC_CALL]         up
273  [FPAREN_OPEN]       (
273  [ADDR]              &
273  [WORD]              core_lists
273  [FPAREN_CLOSE]      )
273  [SEMICOLON]         ;
273  [NEWLINE]           
274  [RETURN]            return
274  [PAREN_OPEN]        (
274  [WORD]              res
274  [PAREN_CLOSE]       )
274  [SEMICOLON]         ;
274  [NEWLINE]           
275  [BRACE_CLOSE]       }
275  [COMMENT]           /* i2c_del_adapter */
275  [NEWLINE]           
278  [COMMENT_MULTI]     /* -----␤ * What follows is the "upwards" interface: commands for talking to clients,␤ * which implement the functions to access the physical information of the␤ * chips.␤ */
282  [NEWLINE]           
284  [TYPE]              int
284  [FUNC_DEF]          i2c_add_driver
284  [FPAREN_OPEN]       (
284  [STRUCT]            struct
284  [TYPE]              i2c_driver
284  [PTR_TYPE]          *
284  [WORD]              driver
284  [FPAREN_CLOSE]      )
284  [NEWLINE]           
285  [BRACE_OPEN]        {
285  [NEWLINE]           
286  [STRUCT]            struct
286  [TYPE]              list_head
286  [PTR_TYPE]          *
286  [WORD]              item
286  [SEMICOLON]         ;
286  [NEWLINE]           
287  [STRUCT]            struct
287  [TYPE]              i2c_adapter
287  [PTR_TYPE]          *
287  [WORD]              adapter
287  [SEMICOLON]         ;
287  [NEWLINE]           
288  [TYPE]              int
288  [WORD]              res
288  [ASSIGN]            =
288  [NUMBER]            0
288  [SEMICOLON]         ;
288  [NEWLINE]           
290  [FUNC_CALL]         down
290  [FPAREN_OPEN]       (
290  [ADDR]              &
290  [WORD]              core_lists
290  [FPAREN_CLOSE]      )
290  [SEMICOLON]         ;
290  [NEWLINE]           
292  [COMMENT]           /* add the driver to the list of i2c drivers in the driver core */
292  [NEWLINE]           
293  [TYPE]              driver
293  [MEMBER]            ->
293  [TYPE]              driver
293  [MEMBER]            .
293  [WORD]              name
293  [ASSIGN]            =
293  [WORD]              driver
293  [MEMBER]            ->
293  [WORD]              name
293  [SEMICOLON]         ;
293  [NEWLINE]           
294  [TYPE]              driver
294  [MEMBER]            ->
294  [TYPE]              driver
294  [MEMBER]            .
294  [WORD]              bus
294  [ASSIGN]            =
294  [ADDR]              &
294  [WORD]              i2c_bus_type
294  [SEMICOLON]         ;
294  [NEWLINE]           
295  [TYPE]              driver
295  [MEMBER]            ->
295  [TYPE]              driver
295  [MEMBER]            .
295  [WORD]              probe
295  [ASSIGN]            =
295  [WORD]              i2c_device_probe
295  [SEMICOLON]         ;
295  [NEWLINE]           
296  [TYPE]              driver
296  [MEMBER]            ->
296  [TYPE]              driver
296  [MEMBER]            .
296  [WORD]              remove
296  [ASSIGN]            =
296  [WORD]              i2c_device_remove
296  [SEMICOLON]         ;
296  [NEWLINE]           
298  [WORD]              res
298  [ASSIGN]            =
298  [FUNC_CALL]         driver_register
298  [FPAREN_OPEN]       (
298  [ADDR]              &
298  [WORD]              driver
298  [MEMBER]            ->
298  [WORD]              driver
298  [FPAREN_CLOSE]      )
298  [SEMICOLON]         ;
298  [NEWLINE]           
299  [IF]                if
299  [SPAREN_OPEN]       (
299  [WORD]              res
299  [SPAREN_CLOSE]      )
299  [NEWLINE]           
299  [BRACE_OPEN]        {
299  [NEWLINE]           
300  [GOTO]              goto
300  [WORD]              out_unlock
300  [SEMICOLON]         ;
300  [NEWLINE]           
300  [BRACE_CLOSE]       }
300  [NEWLINE]           
302  [FUNC_CALL]         list_add_tail
302  [FPAREN_OPEN]       (
302  [ADDR]              &
302  [WORD]              driver
302  [MEMBER]            ->
302  [WORD]              list
302  [COMMA]             ,
302  [ADDR]              &
302  [WORD]              drivers
302  [FPAREN_CLOSE]      )
302  [SEMICOLON]         ;
302  [NEWLINE]           
303  [FUNC_CALL]         pr_debug
303  [FPAREN_OPEN]       (
303  [STRING]            "i2c-core: driver [%s] registered\n"
303  [COMMA]             ,
303  [WORD]              driver
303  [MEMBER]            ->
303  [WORD]              name
303  [FPAREN_CLOSE]      )
303  [SEMICOLON]         ;
303  [NEWLINE]           
305  [COMMENT]           /* now look for instances of driver on our adapters */
305  [NEWLINE]           
306  [IF]                if
306  [SPAREN_OPEN]       (
306  [WORD]              driver
306  [MEMBER]            ->
306  [WORD]              flags
306  [ARITH]             &
306  [WORD]              I2C_DF_NOTIFY
306  [SPAREN_CLOSE]      )
306  [NEWLINE]           
306  [BRACE_OPEN]        {
306  [NEWLINE]           
307  [FUNC_CALL]         list_for_each
307  [FPAREN_OPEN]       (
307  [WORD]              item
307  [COMMA]             ,
307  [ADDR]              &
307  [WORD]              adapters
307  [FPAREN_CLOSE]      )
307  [NEWLINE]           
307  [BRACE_OPEN]        {
307  [NEWLINE]           
308  [WORD]              adapter
308  [ASSIGN]            =
308  [FUNC_CALL]         list_entry
308  [FPAREN_OPEN]       (
308  [WORD]              item
308  [COMMA]             ,
308  [STRUCT]            struct
308  [TYPE]              i2c_adapter
308  [COMMA]             ,
308  [WORD]              list
308  [FPAREN_CLOSE]      )
308  [SEMICOLON]         ;
308  [NEWLINE]           
309  [TYPE]              driver
309  [MEMBER]            ->
309  [FUNC_CALL]         attach_adapter
309  [FPAREN_OPEN]       (
309  [WORD]              adapter
309  [FPAREN_CLOSE]      )
309  [SEMICOLON]         ;
309  [NEWLINE]           
310  [BRACE_CLOSE]       }
310  [NEWLINE]           
311  [BRACE_CLOSE]       }
311  [NEWLINE]           
313  [LABEL]             out_unlock
313  [LABEL_COLON]       :
313  [NEWLINE]           
314  [FUNC_CALL]         up
314  [FPAREN_OPEN]       (
314  [ADDR]              &
314  [WORD]              core_lists
314  [FPAREN_CLOSE]      )
314  [SEMICOLON]         ;
314  [NEWLINE]           
315  [RETURN]            return
315  [PAREN_OPEN]        (
315  [WORD]              res
315  [PAREN_CLOSE]       )
315  [SEMICOLON]         ;
315  [NEWLINE]           
316  [BRACE_CLOSE]       }
316  [NEWLINE]           
318  [TYPE]              int
318  [FUNC_DEF]          i2c_del_driver
318  [FPAREN_OPEN]       (
318  [STRUCT]            struct
318  [TYPE]              i2c_driver
318  [PTR_TYPE]          *
318  [WORD]              driver
318  [FPAREN_CLOSE]      )
318  [NEWLINE]           
319  [BRACE_OPEN]        {
319  [NEWLINE]           
320  [STRUCT]            struct
320  [TYPE]              list_head
320  [PTR_TYPE]          *
320  [WORD]              item1
320  [COMMA]             ,
320  [PTR_TYPE]          *
320  [WORD]              item2
320  [COMMA]             ,
320  [PTR_TYPE]          *
320  [WORD]              _n
320  [SEMICOLON]         ;
320  [NEWLINE]           
321  [STRUCT]            struct
321  [TYPE]              i2c_client
321  [PTR_TYPE]          *
321  [WORD]              client
321  [SEMICOLON]         ;
321  [NEWLINE]           
322  [STRUCT]            struct
322  [TYPE]              i2c_adapter
322  [PTR_TYPE]          *
322  [WORD]              adap
322  [SEMICOLON]         ;
322  [NEWLINE]           
324  [TYPE]              int
324  [WORD]              res
324  [ASSIGN]            =
324  [NUMBER]            0
324  [SEMICOLON]         ;
324  [NEWLINE]           
326  [FUNC_CALL]         down
326  [FPAREN_OPEN]       (
326  [ADDR]              &
326  [WORD]              core_lists
326  [FPAREN_CLOSE]      )
326  [SEMICOLON]         ;
326  [NEWLINE]           
328  [COMMENT_MULTI]     /* Have a look at each adapter, if clients of this driver are still␤	 * attached. If so, detach them to be able to kill the driver␤	 * afterwards.␤	 *␤	 * Removing clients does not depend on the notify flag, else␤	 * invalid operation might (will!) result, when using stale client␤	 * pointers.␤	 */
335  [NEWLINE]           
336  [FUNC_CALL]         list_for_each
336  [FPAREN_OPEN]       (
336  [WORD]              item1
336  [COMMA]             ,
336  [ADDR]              &
336  [WORD]              adapters
336  [FPAREN_CLOSE]      )
336  [NEWLINE]           
336  [BRACE_OPEN]        {
336  [NEWLINE]           
337  [WORD]              adap
337  [ASSIGN]            =
337  [FUNC_CALL]         list_entry
337  [FPAREN_OPEN]       (
337  [WORD]              item1
337  [COMMA]             ,
337  [STRUCT]            struct
337  [TYPE]              i2c_adapter
337  [COMMA]             ,
337  [WORD]              list
337  [FPAREN_CLOSE]      )
337  [SEMICOLON]         ;
337  [NEWLINE]           
338  [IF]                if
338  [SPAREN_OPEN]       (
338  [WORD]              driver
338  [MEMBER]            ->
338  [WORD]              detach_adapter
338  [SPAREN_CLOSE]      )
338  [NEWLINE]           
338  [BRACE_OPEN]        {
338  [NEWLINE]           
339  [IF]                if
339  [SPAREN_OPEN]       (
339  [PAREN_OPEN]        (
339  [WORD]              res
339  [ASSIGN]            =
339  [WORD]              driver
339  [MEMBER]            ->
339  [FUNC_CALL]         detach_adapter
339  [FPAREN_OPEN]       (
339  [WORD]              adap
339  [FPAREN_CLOSE]      )
339  [PAREN_CLOSE]       )
339  [SPAREN_CLOSE]      )
339  [NEWLINE]           
339  [BRACE_OPEN]        {
339  [NEWLINE]           
340  [FUNC_CALL]         dev_err
340  [FPAREN_OPEN]       (
340  [ADDR]              &
340  [WORD]              adap
340  [MEMBER]            ->
340  [WORD]              dev
340  [COMMA]             ,
340  [STRING]            "detach_adapter failed "
340  [NEWLINE]           
341  [STRING]            "for driver [%s]\n"
341  [COMMA]             ,
341  [WORD]              driver
341  [MEMBER]            ->
341  [WORD]              name
341  [FPAREN_CLOSE]      )
341  [SEMICOLON]         ;
341  [NEWLINE]           
342  [GOTO]              goto
342  [WORD]              out_unlock
342  [SEMICOLON]         ;
342  [NEWLINE]           
343  [BRACE_CLOSE]       }
343  [NEWLINE]           
344  [BRACE_CLOSE]       }
344  [NEWLINE]           
344  [ELSE]              else
344  [NEWLINE]           
344  [BRACE_OPEN]        {
344  [NEWLINE]           
345  [FUNC_CALL]         list_for_each_safe
345  [FPAREN_OPEN]       (
345  [WORD]              item2
345  [COMMA]             ,
345  [WORD]              _n
345  [COMMA]             ,
345  [ADDR]              &
345  [WORD]              adap
345  [MEMBER]            ->
345  [WORD]              clients
345  [FPAREN_CLOSE]      )
345  [NEWLINE]           
345  [BRACE_OPEN]        {
345  [NEWLINE]           
346  [WORD]              client
346  [ASSIGN]            =
346  [FUNC_CALL]         list_entry
346  [FPAREN_OPEN]       (
346  [WORD]              item2
346  [COMMA]             ,
346  [STRUCT]            struct
346  [TYPE]              i2c_client
346  [COMMA]             ,
346  [WORD]              list
346  [FPAREN_CLOSE]      )
346  [SEMICOLON]         ;
346  [NEWLINE]           
347  [IF]                if
347  [SPAREN_OPEN]       (
347  [WORD]              client
347  [MEMBER]            ->
347  [WORD]              driver
347  [COMPARE]           !=
347  [WORD]              driver
347  [SPAREN_CLOSE]      )
347  [NEWLINE]           
347  [BRACE_OPEN]        {
347  [NEWLINE]           
348  [CONTINUE]          continue
348  [SEMICOLON]         ;
348  [NEWLINE]           
348  [BRACE_CLOSE]       }
348  [NEWLINE]           
349  [FUNC_CALL]         dev_dbg
349  [FPAREN_OPEN]       (
349  [ADDR]              &
349  [WORD]              adap
349  [MEMBER]            ->
349  [WORD]              dev
349  [COMMA]             ,
349  [STRING]            "detaching client [%s] "
349  [NEWLINE]           
350  [STRING]            "at 0x%02x\n"
350  [COMMA]             ,
350  [WORD]              client
350  [MEMBER]            ->
350  [WORD]              name
350  [COMMA]             ,
350  [NEWLINE]           
351  [WORD]              client
351  [MEMBER]            ->
351  [WORD]              addr
351  [FPAREN_CLOSE]      )
351  [SEMICOLON]         ;
351  [NEWLINE]           
352  [IF]                if
352  [SPAREN_OPEN]       (
352  [PAREN_OPEN]        (
352  [WORD]              res
352  [ASSIGN]            =
352  [WORD]              driver
352  [MEMBER]            ->
352  [FUNC_CALL]         detach_client
352  [FPAREN_OPEN]       (
352  [WORD]              client
352  [FPAREN_CLOSE]      )
352  [PAREN_CLOSE]       )
352  [SPAREN_CLOSE]      )
352  [NEWLINE]           
352  [BRACE_OPEN]        {
352  [NEWLINE]           
353  [FUNC_CALL]         dev_err
353  [FPAREN_OPEN]       (
353  [ADDR]              &
353  [WORD]              adap
353  [MEMBER]            ->
353  [WORD]              dev
353  [COMMA]             ,
353  [STRING]            "detach_client "
353  [NEWLINE]           
354  [STRING]            "failed for client [%s] at "
354  [NEWLINE]           
355  [STRING]            "0x%02x\n"
355  [COMMA]             ,
355  [WORD]              client
355  [MEMBER]            ->
355  [WORD]              name
355  [COMMA]             ,
355  [NEWLINE]           
356  [WORD]              client
356  [MEMBER]            ->
356  [WORD]              addr
356  [FPAREN_CLOSE]      )
356  [SEMICOLON]         ;
356  [NEWLINE]           
357  [GOTO]              goto
357  [WORD]              out_unlock
357  [SEMICOLON]         ;
357  [NEWLINE]           
358  [BRACE_CLOSE]       }
358  [NEWLINE]           
359  [BRACE_CLOSE]       }
359  [NEWLINE]           
360  [BRACE_CLOSE]       }
360  [NEWLINE]           
361  [BRACE_CLOSE]       }
361  [NEWLINE]           
363  [FUNC_CALL]         driver_unregister
363  [FPAREN_OPEN]       (
363  [ADDR]              &
363  [WORD]              driver
363  [MEMBER]            ->
363  [WORD]              driver
363  [FPAREN_CLOSE]      )
363  [SEMICOLON]         ;
363  [NEWLINE]           
364  [FUNC_CALL]         list_del
364  [FPAREN_OPEN]       (
364  [ADDR]              &
364  [WORD]              driver
364  [MEMBER]            ->
364  [WORD]              list
364  [FPAREN_CLOSE]      )
364  [SEMICOLON]         ;
364  [NEWLINE]           
365  [FUNC_CALL]         pr_debug
365  [FPAREN_OPEN]       (
365  [STRING]            "i2c-core: driver [%s] unregistered\n"
365  [COMMA]             ,
365  [WORD]              driver
365  [MEMBER]            ->
365  [WORD]              name
365  [FPAREN_CLOSE]      )
365  [SEMICOLON]         ;
365  [NEWLINE]           
367  [LABEL]             out_unlock
367  [LABEL_COLON]       :
367  [NEWLINE]           
368  [FUNC_CALL]         up
368  [FPAREN_OPEN]       (
368  [ADDR]              &
368  [WORD]              core_lists
368  [FPAREN_CLOSE]      )
368  [SEMICOLON]         ;
368  [NEWLINE]           
369  [RETURN]            return
369  [PAREN_OPEN]        (
369  [NUMBER]            0
369  [PAREN_CLOSE]       )
369  [SEMICOLON]         ;
369  [NEWLINE]           
370  [BRACE_CLOSE]       }
370  [COMMENT]           /* i2c_del_driver */
370  [NEWLINE]           
372  [QUALIFIER]         static
372  [TYPE]              int
372  [FUNC_DEF]          __i2c_check_addr
372  [FPAREN_OPEN]       (
372  [STRUCT]            struct
372  [TYPE]              i2c_adapter
372  [PTR_TYPE]          *
372  [WORD]              adapter
372  [COMMA]             ,
372  [TYPE]              unsigned
372  [TYPE]              int
372  [WORD]              addr
372  [FPAREN_CLOSE]      )
372  [NEWLINE]           
373  [BRACE_OPEN]        {
373  [NEWLINE]           
374  [STRUCT]            struct
374  [TYPE]              list_head
374  [PTR_TYPE]          *
374  [WORD]              item
374  [SEMICOLON]         ;
374  [NEWLINE]           
375  [STRUCT]            struct
375  [TYPE]              i2c_client
375  [PTR_TYPE]          *
375  [WORD]              client
375  [SEMICOLON]         ;
375  [NEWLINE]           
377  [FUNC_CALL]         list_for_each
377  [FPAREN_OPEN]       (
377  [WORD]              item
377  [COMMA]             ,
377  [ADDR]              &
377  [WORD]              adapter
377  [MEMBER]            ->
377  [WORD]              clients
377  [FPAREN_CLOSE]      )
377  [NEWLINE]           
377  [BRACE_OPEN]        {
377  [NEWLINE]           
378  [WORD]              client
378  [ASSIGN]            =
378  [FUNC_CALL]         list_entry
378  [FPAREN_OPEN]       (
378  [WORD]              item
378  [COMMA]             ,
378  [STRUCT]            struct
378  [TYPE]              i2c_client
378  [COMMA]             ,
378  [WORD]              list
378  [FPAREN_CLOSE]      )
378  [SEMICOLON]         ;
378  [NEWLINE]           
379  [IF]                if
379  [SPAREN_OPEN]       (
379  [WORD]              client
379  [MEMBER]            ->
379  [WORD]              addr
379  [COMPARE]           ==
379  [WORD]              addr
379  [SPAREN_CLOSE]      )
379  [NEWLINE]           
379  [BRACE_OPEN]        {
379  [NEWLINE]           
380  [RETURN]            return
380  [PAREN_OPEN]        (
380  [NEG]               -
380  [WORD]              EBUSY
380  [PAREN_CLOSE]       )
380  [SEMICOLON]         ;
380  [NEWLINE]           
380  [BRACE_CLOSE]       }
380  [NEWLINE]           
381  [BRACE_CLOSE]       }
381  [NEWLINE]           
382  [RETURN]            return
382  [PAREN_OPEN]        (
382  [NUMBER]            0
382  [PAREN_CLOSE]       )
382  [SEMICOLON]         ;
382  [NEWLINE]           
383  [BRACE_CLOSE]       }
383  [NEWLINE]           
385  [TYPE]              int
385  [FUNC_DEF]          i2c_check_addr
385  [FPAREN_OPEN]       (
385  [STRUCT]            struct
385  [TYPE]              i2c_adapter
385  [PTR_TYPE]          *
385  [WORD]              adapter
385  [COMMA]             ,
385  [TYPE]              int
385  [WORD]              addr
385  [FPAREN_CLOSE]      )
385  [NEWLINE]           
386  [BRACE_OPEN]        {
386  [NEWLINE]           
387  [TYPE]              int
387  [WORD]              rval
387  [SEMICOLON]         ;
387  [NEWLINE]           
389  [FUNC_CALL]         down
389  [FPAREN_OPEN]       (
389  [ADDR]              &
389  [WORD]              adapter
389  [MEMBER]            ->
389  [WORD]              clist_lock
389  [FPAREN_CLOSE]      )
389  [SEMICOLON]         ;
389  [NEWLINE]           
390  [WORD]              rval
390  [ASSIGN]            =
390  [FUNC_CALL]         __i2c_check_addr
390  [FPAREN_OPEN]       (
390  [WORD]              adapter
390  [COMMA]             ,
390  [WORD]              addr
390  [FPAREN_CLOSE]      )
390  [SEMICOLON]         ;
390  [NEWLINE]           
391  [FUNC_CALL]         up
391  [FPAREN_OPEN]       (
391  [ADDR]              &
391  [WORD]              adapter
391  [MEMBER]            ->
391  [WORD]              clist_lock
391  [FPAREN_CLOSE]      )
391  [SEMICOLON]         ;
391  [NEWLINE]           
393  [RETURN]            return
393  [PAREN_OPEN]        (
393  [WORD]              rval
393  [PAREN_CLOSE]       )
393  [SEMICOLON]         ;
393  [NEWLINE]           
394  [BRACE_CLOSE]       }
394  [NEWLINE]           
396  [TYPE]              int
396  [FUNC_DEF]          i2c_attach_client
396  [FPAREN_OPEN]       (
396  [STRUCT]            struct
396  [TYPE]              i2c_client
396  [PTR_TYPE]          *
396  [WORD]              client
396  [FPAREN_CLOSE]      )
396  [NEWLINE]           
397  [BRACE_OPEN]        {
397  [NEWLINE]           
398  [STRUCT]            struct
398  [TYPE]              i2c_adapter
398  [PTR_TYPE]          *
398  [WORD]              adapter
398  [ASSIGN]            =
398  [WORD]              client
398  [MEMBER]            ->
398  [WORD]              adapter
398  [SEMICOLON]         ;
398  [NEWLINE]           
400  [FUNC_CALL]         down
400  [FPAREN_OPEN]       (
400  [ADDR]              &
400  [WORD]              adapter
400  [MEMBER]            ->
400  [WORD]              clist_lock
400  [FPAREN_CLOSE]      )
400  [SEMICOLON]         ;
400  [NEWLINE]           
401  [IF]                if
401  [SPAREN_OPEN]       (
401  [FUNC_CALL]         __i2c_check_addr
401  [FPAREN_OPEN]       (
401  [WORD]              client
401  [MEMBER]            ->
401  [WORD]              adapter
401  [COMMA]             ,
401  [WORD]              client
401  [MEMBER]            ->
401  [WORD]              addr
401  [FPAREN_CLOSE]      )
401  [SPAREN_CLOSE]      )
401  [NEWLINE]           
401  [BRACE_OPEN]        {
401  [NEWLINE]           
402  [FUNC_CALL]         up
402  [FPAREN_OPEN]       (
402  [ADDR]              &
402  [WORD]              adapter
402  [MEMBER]            ->
402  [WORD]              clist_lock
402  [FPAREN_CLOSE]      )
402  [SEMICOLON]         ;
402  [NEWLINE]           
403  [RETURN]            return
403  [PAREN_OPEN]        (
403  [NEG]               -
403  [WORD]              EBUSY
403  [PAREN_CLOSE]       )
403  [SEMICOLON]         ;
403  [NEWLINE]           
404  [BRACE_CLOSE]       }
404  [NEWLINE]           
405  [FUNC_CALL]         list_add_tail
405  [FPAREN_OPEN]       (
405  [ADDR]              &
405  [WORD]              client
405  [MEMBER]            ->
405  [WORD]              list
405  [COMMA]             ,
405  [ADDR]              &
405  [WORD]              adapter
405  [MEMBER]            ->
405  [WORD]              clients
405  [FPAREN_CLOSE]      )
405  [SEMICOLON]         ;
405  [NEWLINE]           
406  [FUNC_CALL]         up
406  [FPAREN_OPEN]       (
406  [ADDR]              &
406  [WORD]              adapter
406  [MEMBER]            ->
406  [WORD]              clist_lock
406  [FPAREN_CLOSE]      )
406  [SEMICOLON]         ;
406  [NEWLINE]           
408  [IF]                if
408  [SPAREN_OPEN]       (
408  [WORD]              adapter
408  [MEMBER]            ->
408  [WORD]              client_register
408  [SPAREN_CLOSE]      )
408  [NEWLINE]           
408  [BRACE_OPEN]        {
408  [NEWLINE]           
409  [IF]                if
409  [SPAREN_OPEN]       (
409  [WORD]              adapter
409  [MEMBER]            ->
409  [FUNC_CALL]         client_register
409  [FPAREN_OPEN]       (
409  [WORD]              client
409  [FPAREN_CLOSE]      )
409  [SPAREN_CLOSE]      )
409  [NEWLINE]           
409  [BRACE_OPEN]        {
409  [NEWLINE]           
410  [FUNC_CALL]         dev_dbg
410  [FPAREN_OPEN]       (
410  [ADDR]              &
410  [WORD]              adapter
410  [MEMBER]            ->
410  [WORD]              dev
410  [COMMA]             ,
410  [STRING]            "client_register "
410  [NEWLINE]           
411  [STRING]            "failed for client [%s] at 0x%02x\n"
411  [COMMA]             ,
411  [NEWLINE]           
412  [WORD]              client
412  [MEMBER]            ->
412  [WORD]              name
412  [COMMA]             ,
412  [WORD]              client
412  [MEMBER]            ->
412  [WORD]              addr
412  [FPAREN_CLOSE]      )
412  [SEMICOLON]         ;
412  [NEWLINE]           
413  [BRACE_CLOSE]       }
413  [NEWLINE]           
414  [BRACE_CLOSE]       }
414  [NEWLINE]           
416  [IF]                if
416  [SPAREN_OPEN]       (
416  [WORD]              client
416  [MEMBER]            ->
416  [WORD]              flags
416  [ARITH]             &
416  [WORD]              I2C_CLIENT_ALLOW_USE
416  [SPAREN_CLOSE]      )
416  [NEWLINE]           
416  [BRACE_OPEN]        {
416  [NEWLINE]           
417  [TYPE]              client
417  [MEMBER]            ->
417  [WORD]              usage_count
417  [ASSIGN]            =
417  [NUMBER]            0
417  [SEMICOLON]         ;
417  [NEWLINE]           
417  [BRACE_CLOSE]       }
417  [NEWLINE]           
419  [TYPE]              client
419  [MEMBER]            ->
419  [TYPE]              dev
419  [MEMBER]            .
419  [WORD]              parent
419  [ASSIGN]            =
419  [ADDR]              &
419  [WORD]              client
419  [MEMBER]            ->
419  [WORD]              adapter
419  [MEMBER]            ->
419  [WORD]              dev
419  [SEMICOLON]         ;
419  [NEWLINE]           
420  [TYPE]              client
420  [MEMBER]            ->
420  [TYPE]              dev
420  [MEMBER]            .
420  [WORD]              driver
420  [ASSIGN]            =
420  [ADDR]              &
420  [WORD]              client
420  [MEMBER]            ->
420  [WORD]              driver
420  [MEMBER]            ->
420  [WORD]              driver
420  [SEMICOLON]         ;
420  [NEWLINE]           
421  [TYPE]              client
421  [MEMBER]            ->
421  [TYPE]              dev
421  [MEMBER]            .
421  [WORD]              bus
421  [ASSIGN]            =
421  [ADDR]              &
421  [WORD]              i2c_bus_type
421  [SEMICOLON]         ;
421  [NEWLINE]           
422  [TYPE]              client
422  [MEMBER]            ->
422  [TYPE]              dev
422  [MEMBER]            .
422  [WORD]              release
422  [ASSIGN]            =
422  [ADDR]              &
422  [WORD]              i2c_client_release
422  [SEMICOLON]         ;
422  [NEWLINE]           
424  [FUNC_CALL]         snprintf
424  [FPAREN_OPEN]       (
424  [ADDR]              &
424  [WORD]              client
424  [MEMBER]            ->
424  [WORD]              dev
424  [MEMBER]            .
424  [WORD]              bus_id
424  [SQUARE_OPEN]       [
424  [NUMBER]            0
424  [SQUARE_CLOSE]      ]
424  [COMMA]             ,
424  [SIZEOF]            sizeof
424  [PAREN_OPEN]        (
424  [WORD]              client
424  [MEMBER]            ->
424  [WORD]              dev
424  [MEMBER]            .
424  [WORD]              bus_id
424  [PAREN_CLOSE]       )
424  [COMMA]             ,
424  [NEWLINE]           
425  [STRING]            "%d-%04x"
425  [COMMA]             ,
425  [FUNC_CALL]         i2c_adapter_id
425  [FPAREN_OPEN]       (
425  [WORD]              adapter
425  [FPAREN_CLOSE]      )
425  [COMMA]             ,
425  [WORD]              client
425  [MEMBER]            ->
425  [WORD]              addr
425  [FPAREN_CLOSE]      )
425  [SEMICOLON]         ;
425  [NEWLINE]           
426  [FUNC_CALL]         dev_dbg
426  [FPAREN_OPEN]       (
426  [ADDR]              &
426  [WORD]              adapter
426  [MEMBER]            ->
426  [WORD]              dev
426  [COMMA]             ,
426  [STRING]            "client [%s] registered with bus id %s\n"
426  [COMMA]             ,
426  [NEWLINE]           
427  [WORD]              client
427  [MEMBER]            ->
427  [WORD]              name
427  [COMMA]             ,
427  [WORD]              client
427  [MEMBER]            ->
427  [WORD]              dev
427  [MEMBER]            .
427  [WORD]              bus_id
427  [FPAREN_CLOSE]      )
427  [SEMICOLON]         ;
427  [NEWLINE]           
428  [FUNC_CALL]         device_register
428  [FPAREN_OPEN]       (
428  [ADDR]              &
428  [WORD]              client
428  [MEMBER]            ->
428  [WORD]              dev
428  [FPAREN_CLOSE]      )
428  [SEMICOLON]         ;
428  [NEWLINE]           
429  [FUNC_CALL]         device_create_file
429  [FPAREN_OPEN]       (
429  [ADDR]              &
429  [WORD]              client
429  [MEMBER]            ->
429  [WORD]              dev
429  [COMMA]             ,
429  [ADDR]              &
429  [WORD]              dev_attr_client_name
429  [FPAREN_CLOSE]      )
429  [SEMICOLON]         ;
429  [NEWLINE]           
431  [RETURN]            return
431  [PAREN_OPEN]        (
431  [NUMBER]            0
431  [PAREN_CLOSE]       )
431  [SEMICOLON]         ;
431  [NEWLINE]           
432  [BRACE_CLOSE]       }
432  [COMMENT]           /* i2c_attach_client */
432  [NEWLINE]           
435  [TYPE]              int
435  [FUNC_DEF]          i2c_detach_client
435  [FPAREN_OPEN]       (
435  [STRUCT]            struct
435  [TYPE]              i2c_client
435  [PTR_TYPE]          *
435  [WORD]              client
435  [FPAREN_CLOSE]      )
435  [NEWLINE]           
436  [BRACE_OPEN]        {
436  [NEWLINE]           
437  [STRUCT]            struct
437  [TYPE]              i2c_adapter
437  [PTR_TYPE]          *
437  [WORD]              adapter
437  [ASSIGN]            =
437  [WORD]              client
437  [MEMBER]            ->
437  [WORD]              adapter
437  [SEMICOLON]         ;
437  [NEWLINE]           
438  [TYPE]              int
438  [WORD]              res
438  [ASSIGN]            =
438  [NUMBER]            0
438  [SEMICOLON]         ;
438  [NEWLINE]           
440  [IF]                if
440  [SPAREN_OPEN]       (
440  [PAREN_OPEN]        (
440  [WORD]              client
440  [MEMBER]            ->
440  [WORD]              flags
440  [ARITH]             &
440  [WORD]              I2C_CLIENT_ALLOW_USE
440  [PAREN_CLOSE]       )
440  [NEWLINE]           
441  [BOOL]              &&
441  [PAREN_OPEN]        (
441  [WORD]              client
441  [MEMBER]            ->
441  [WORD]              usage_count
441  [COMPARE]           >
441  [NUMBER]            0
441  [PAREN_CLOSE]       )
441  [SPAREN_CLOSE]      )
441  [NEWLINE]           
441  [BRACE_OPEN]        {
441  [NEWLINE]           
442  [FUNC_CALL]         dev_warn
442  [FPAREN_OPEN]       (
442  [ADDR]              &
442  [WORD]              client
442  [MEMBER]            ->
442  [WORD]              dev
442  [COMMA]             ,
442  [STRING]            "Client [%s] still busy, "
442  [NEWLINE]           
443  [STRING]            "can't detach\n"
443  [COMMA]             ,
443  [WORD]              client
443  [MEMBER]            ->
443  [WORD]              name
443  [FPAREN_CLOSE]      )
443  [SEMICOLON]         ;
443  [NEWLINE]           
444  [RETURN]            return
444  [PAREN_OPEN]        (
444  [NEG]               -
444  [WORD]              EBUSY
444  [PAREN_CLOSE]       )
444  [SEMICOLON]         ;
444  [NEWLINE]           
445  [BRACE_CLOSE]       }
445  [NEWLINE]           
447  [IF]                if
447  [SPAREN_OPEN]       (
447  [WORD]              adapter
447  [MEMBER]            ->
447  [WORD]              client_unregister
447  [SPAREN_CLOSE]      )
447  [NEWLINE]           
447  [BRACE_OPEN]        {
447  [NEWLINE]           
448  [WORD]              res
448  [ASSIGN]            =
448  [WORD]              adapter
448  [MEMBER]            ->
448  [FUNC_CALL]         client_unregister
448  [FPAREN_OPEN]       (
448  [WORD]              client
448  [FPAREN_CLOSE]      )
448  [SEMICOLON]         ;
448  [NEWLINE]           
449  [IF]                if
449  [SPAREN_OPEN]       (
449  [WORD]              res
449  [SPAREN_CLOSE]      )
449  [NEWLINE]           
449  [BRACE_OPEN]        {
449  [NEWLINE]           
450  [FUNC_CALL]         dev_err
450  [FPAREN_OPEN]       (
450  [ADDR]              &
450  [WORD]              client
450  [MEMBER]            ->
450  [WORD]              dev
450  [COMMA]             ,
450  [NEWLINE]           
451  [STRING]            "client_unregister [%s] failed, "
451  [NEWLINE]           
452  [STRING]            "client not detached\n"
452  [COMMA]             ,
452  [WORD]              client
452  [MEMBER]            ->
452  [WORD]              name
452  [FPAREN_CLOSE]      )
452  [SEMICOLON]         ;
452  [NEWLINE]           
453  [GOTO]              goto
453  [WORD]              out
453  [SEMICOLON]         ;
453  [NEWLINE]           
454  [BRACE_CLOSE]       }
454  [NEWLINE]           
455  [BRACE_CLOSE]       }
455  [NEWLINE]           
457  [FUNC_CALL]         down
457  [FPAREN_OPEN]       (
457  [ADDR]              &
457  [WORD]              adapter
457  [MEMBER]            ->
457  [WORD]              clist_lock
457  [FPAREN_CLOSE]      )
457  [SEMICOLON]         ;
457  [NEWLINE]           
458  [FUNC_CALL]         list_del
458  [FPAREN_OPEN]       (
458  [ADDR]              &
458  [WORD]              client
458  [MEMBER]            ->
458  [WORD]              list
458  [FPAREN_CLOSE]      )
458  [SEMICOLON]         ;
458  [NEWLINE]           
459  [FUNC_CALL]         init_completion
459  [FPAREN_OPEN]       (
459  [ADDR]              &
459  [WORD]              client
459  [MEMBER]            ->
459  [WORD]              released
459  [FPAREN_CLOSE]      )
459  [SEMICOLON]         ;
459  [NEWLINE]           
460  [FUNC_CALL]         device_remove_file
460  [FPAREN_OPEN]       (
460  [ADDR]              &
460  [WORD]              client
460  [MEMBER]            ->
460  [WORD]              dev
460  [COMMA]             ,
460  [ADDR]              &
460  [WORD]              dev_attr_client_name
460  [FPAREN_CLOSE]      )
460  [SEMICOLON]         ;
460  [NEWLINE]           
461  [FUNC_CALL]         device_unregister
461  [FPAREN_OPEN]       (
461  [ADDR]              &
461  [WORD]              client
461  [MEMBER]            ->
461  [WORD]              dev
461  [FPAREN_CLOSE]      )
461  [SEMICOLON]         ;
461  [NEWLINE]           
462  [FUNC_CALL]         up
462  [FPAREN_OPEN]       (
462  [ADDR]              &
462  [WORD]              adapter
462  [MEMBER]            ->
462  [WORD]              clist_lock
462  [FPAREN_CLOSE]      )
462  [SEMICOLON]         ;
462  [NEWLINE]           
463  [FUNC_CALL]         wait_for_completion
463  [FPAREN_OPEN]       (
463  [ADDR]              &
463  [WORD]              client
463  [MEMBER]            ->
463  [WORD]              released
463  [FPAREN_CLOSE]      )
463  [SEMICOLON]         ;
463  [NEWLINE]           
465  [LABEL]             out
465  [LABEL_COLON]       :
465  [NEWLINE]           
466  [RETURN]            return
466  [PAREN_OPEN]        (
466  [WORD]              res
466  [PAREN_CLOSE]       )
466  [SEMICOLON]         ;
466  [NEWLINE]           
467  [BRACE_CLOSE]       }
467  [NEWLINE]           
469  [QUALIFIER]         static
469  [TYPE]              int
469  [FUNC_DEF]          i2c_inc_use_client
469  [FPAREN_OPEN]       (
469  [STRUCT]            struct
469  [TYPE]              i2c_client
469  [PTR_TYPE]          *
469  [WORD]              client
469  [FPAREN_CLOSE]      )
469  [NEWLINE]           
470  [BRACE_OPEN]        {
470  [NEWLINE]           
472  [IF]                if
472  [SPAREN_OPEN]       (
472  [NOT]               !
472  [FUNC_CALL]         try_module_get
472  [FPAREN_OPEN]       (
472  [WORD]              client
472  [MEMBER]            ->
472  [WORD]              driver
472  [MEMBER]            ->
472  [WORD]              owner
472  [FPAREN_CLOSE]      )
472  [SPAREN_CLOSE]      )
472  [NEWLINE]           
472  [BRACE_OPEN]        {
472  [NEWLINE]           
473  [RETURN]            return
473  [PAREN_OPEN]        (
473  [NEG]               -
473  [WORD]              ENODEV
473  [PAREN_CLOSE]       )
473  [SEMICOLON]         ;
473  [NEWLINE]           
473  [BRACE_CLOSE]       }
473  [NEWLINE]           
474  [IF]                if
474  [SPAREN_OPEN]       (
474  [NOT]               !
474  [FUNC_CALL]         try_module_get
474  [FPAREN_OPEN]       (
474  [WORD]              client
474  [MEMBER]            ->
474  [WORD]              adapter
474  [MEMBER]            ->
474  [WORD]              owner
474  [FPAREN_CLOSE]      )
474  [SPAREN_CLOSE]      )
474  [NEWLINE]           
474  [BRACE_OPEN]        {
474  [NEWLINE]           
475  [FUNC_CALL]         module_put
475  [FPAREN_OPEN]       (
475  [WORD]              client
475  [MEMBER]            ->
475  [WORD]              driver
475  [MEMBER]            ->
475  [WORD]              owner
475  [FPAREN_CLOSE]      )
475  [SEMICOLON]         ;
475  [NEWLINE]           
476  [RETURN]            return
476  [PAREN_OPEN]        (
476  [NEG]               -
476  [WORD]              ENODEV
476  [PAREN_CLOSE]       )
476  [SEMICOLON]         ;
476  [NEWLINE]           
477  [BRACE_CLOSE]       }
477  [NEWLINE]           
479  [RETURN]            return
479  [PAREN_OPEN]        (
479  [NUMBER]            0
479  [PAREN_CLOSE]       )
479  [SEMICOLON]         ;
479  [NEWLINE]           
480  [BRACE_CLOSE]       }
480  [NEWLINE]           
482  [QUALIFIER]         static
482  [TYPE]              void
482  [FUNC_DEF]          i2c_dec_use_client
482  [FPAREN_OPEN]       (
482  [STRUCT]            struct
482  [TYPE]              i2c_client
482  [PTR_TYPE]          *
482  [WORD]              client
482  [FPAREN_CLOSE]      )
482  [NEWLINE]           
483  [BRACE_OPEN]        {
483  [NEWLINE]           
484  [FUNC_CALL]         module_put
484  [FPAREN_OPEN]       (
484  [WORD]              client
484  [MEMBER]            ->
484  [WORD]              driver
484  [MEMBER]            ->
484  [WORD]              owner
484  [FPAREN_CLOSE]      )
484  [SEMICOLON]         ;
484  [NEWLINE]           
485  [FUNC_CALL]         module_put
485  [FPAREN_OPEN]       (
485  [WORD]              client
485  [MEMBER]            ->
485  [WORD]              adapter
485  [MEMBER]            ->
485  [WORD]              owner
485  [FPAREN_CLOSE]      )
485  [SEMICOLON]         ;
485  [NEWLINE]           
486  [BRACE_CLOSE]       }
486  [NEWLINE]           
488  [TYPE]              int
488  [FUNC_DEF]          i2c_use_client
488  [FPAREN_OPEN]       (
488  [STRUCT]            struct
488  [TYPE]              i2c_client
488  [PTR_TYPE]          *
488  [WORD]              client
488  [FPAREN_CLOSE]      )
488  [NEWLINE]           
489  [BRACE_OPEN]        {
489  [NEWLINE]           
490  [TYPE]              int
490  [WORD]              ret
490  [SEMICOLON]         ;
490  [NEWLINE]           
492  [WORD]              ret
492  [ASSIGN]            =
492  [FUNC_CALL]         i2c_inc_use_client
492  [FPAREN_OPEN]       (
492  [WORD]              client
492  [FPAREN_CLOSE]      )
492  [SEMICOLON]         ;
492  [NEWLINE]           
493  [IF]                if
493  [SPAREN_OPEN]       (
493  [WORD]              ret
493  [SPAREN_CLOSE]      )
493  [NEWLINE]           
493  [BRACE_OPEN]        {
493  [NEWLINE]           
494  [RETURN]            return
494  [PAREN_OPEN]        (
494  [WORD]              ret
494  [PAREN_CLOSE]       )
494  [SEMICOLON]         ;
494  [NEWLINE]           
494  [BRACE_CLOSE]       }
494  [NEWLINE]           
496  [IF]                if
496  [SPAREN_OPEN]       (
496  [WORD]              client
496  [MEMBER]            ->
496  [WORD]              flags
496  [ARITH]             &
496  [WORD]              I2C_CLIENT_ALLOW_USE
496  [SPAREN_CLOSE]      )
496  [NEWLINE]           
496  [BRACE_OPEN]        {
496  [NEWLINE]           
497  [IF]                if
497  [SPAREN_OPEN]       (
497  [WORD]              client
497  [MEMBER]            ->
497  [WORD]              flags
497  [ARITH]             &
497  [WORD]              I2C_CLIENT_ALLOW_MULTIPLE_USE
497  [SPAREN_CLOSE]      )
497  [NEWLINE]           
497  [BRACE_OPEN]        {
497  [NEWLINE]           
498  [TYPE]              client
498  [MEMBER]            ->
498  [WORD]              usage_count
498  [INCDEC_AFTER]      ++
498  [SEMICOLON]         ;
498  [NEWLINE]           
498  [BRACE_CLOSE]       }
498  [NEWLINE]           
499  [ELSE]              else
499  [ELSEIF]            if
499  [SPAREN_OPEN]       (
499  [WORD]              client
499  [MEMBER]            ->
499  [WORD]              usage_count
499  [COMPARE]           >
499  [NUMBER]            0
499  [SPAREN_CLOSE]      )
499  [NEWLINE]           
499  [BRACE_OPEN]        {
499  [NEWLINE]           
500  [GOTO]              goto
500  [WORD]              busy
500  [SEMICOLON]         ;
500  [NEWLINE]           
500  [BRACE_CLOSE]       }
500  [NEWLINE]           
501  [ELSE]              else
501  [NEWLINE]           
501  [BRACE_OPEN]        {
501  [NEWLINE]           
502  [TYPE]              client
502  [MEMBER]            ->
502  [WORD]              usage_count
502  [INCDEC_AFTER]      ++
502  [SEMICOLON]         ;
502  [NEWLINE]           
502  [BRACE_CLOSE]       }
502  [NEWLINE]           
503  [BRACE_CLOSE]       }
503  [NEWLINE]           
505  [RETURN]            return
505  [PAREN_OPEN]        (
505  [NUMBER]            0
505  [PAREN_CLOSE]       )
505  [SEMICOLON]         ;
505  [NEWLINE]           
506  [LABEL]             busy
506  [LABEL_COLON]       :
506  [NEWLINE]           
507  [FUNC_CALL]         i2c_dec_use_client
507  [FPAREN_OPEN]       (
507  [WORD]              client
507  [FPAREN_CLOSE]      )
507  [SEMICOLON]         ;
507  [NEWLINE]           
508  [RETURN]            return
508  [PAREN_OPEN]        (
508  [NEG]               -
508  [WORD]              EBUSY
508  [PAREN_CLOSE]       )
508  [SEMICOLON]         ;
508  [NEWLINE]           
509  [BRACE_CLOSE]       }
509  [NEWLINE]           
511  [TYPE]              int
511  [FUNC_DEF]          i2c_release_client
511  [FPAREN_OPEN]       (
511  [STRUCT]            struct
511  [TYPE]              i2c_client
511  [PTR_TYPE]          *
511  [WORD]              client
511  [FPAREN_CLOSE]      )
511  [NEWLINE]           
512  [BRACE_OPEN]        {
512  [NEWLINE]           
513  [IF]                if
513  [SPAREN_OPEN]       (
513  [WORD]              client
513  [MEMBER]            ->
513  [WORD]              flags
513  [ARITH]             &
513  [WORD]              I2C_CLIENT_ALLOW_USE
513  [SPAREN_CLOSE]      )
513  [NEWLINE]           
513  [BRACE_OPEN]        {
513  [NEWLINE]           
514  [IF]                if
514  [SPAREN_OPEN]       (
514  [WORD]              client
514  [MEMBER]            ->
514  [WORD]              usage_count
514  [COMPARE]           >
514  [NUMBER]            0
514  [SPAREN_CLOSE]      )
514  [NEWLINE]           
514  [BRACE_OPEN]        {
514  [NEWLINE]           
515  [TYPE]              client
515  [MEMBER]            ->
515  [WORD]              usage_count
515  [INCDEC_AFTER]      --
515  [SEMICOLON]         ;
515  [NEWLINE]           
515  [BRACE_CLOSE]       }
515  [NEWLINE]           
516  [ELSE]              else
516  [NEWLINE]           
516  [BRACE_OPEN]        {
516  [NEWLINE]           
517  [FUNC_CALL]         pr_debug
517  [FPAREN_OPEN]       (
517  [STRING]            "i2c-core: %s used one too many times\n"
517  [COMMA]             ,
517  [NEWLINE]           
518  [WORD]              __FUNCTION__
518  [FPAREN_CLOSE]      )
518  [SEMICOLON]         ;
518  [NEWLINE]           
519  [RETURN]            return
519  [PAREN_OPEN]        (
519  [NEG]               -
519  [WORD]              EPERM
519  [PAREN_CLOSE]       )
519  [SEMICOLON]         ;
519  [NEWLINE]           
520  [BRACE_CLOSE]       }
520  [NEWLINE]           
521  [BRACE_CLOSE]       }
521  [NEWLINE]           
523  [FUNC_CALL]         i2c_dec_use_client
523  [FPAREN_OPEN]       (
523  [WORD]              client
523  [FPAREN_CLOSE]      )
523  [SEMICOLON]         ;
523  [NEWLINE]           
525  [RETURN]            return
525  [PAREN_OPEN]        (
525  [NUMBER]            0
525  [PAREN_CLOSE]       )
525  [SEMICOLON]         ;
525  [NEWLINE]           
526  [BRACE_CLOSE]       }
526  [NEWLINE]           
528  [TYPE]              void
528  [FUNC_DEF]          i2c_clients_command
528  [FPAREN_OPEN]       (
528  [STRUCT]            struct
528  [TYPE]              i2c_adapter
528  [PTR_TYPE]          *
528  [WORD]              adap
528  [COMMA]             ,
528  [TYPE]              unsigned
528  [TYPE]              int
528  [WORD]              cmd
528  [COMMA]             ,
528  [TYPE]              void
528  [PTR_TYPE]          *
528  [WORD]              arg
528  [FPAREN_CLOSE]      )
528  [NEWLINE]           
529  [BRACE_OPEN]        {
529  [NEWLINE]           
530  [STRUCT]            struct
530  [TYPE]              list_head
530  [PTR_TYPE]          *
530  [WORD]              item
530  [SEMICOLON]         ;
530  [NEWLINE]           
531  [STRUCT]            struct
531  [TYPE]              i2c_client
531  [PTR_TYPE]          *
531  [WORD]              client
531  [SEMICOLON]         ;
531  [NEWLINE]           
533  [FUNC_CALL]         down
533  [FPAREN_OPEN]       (
533  [ADDR]              &
533  [WORD]              adap
533  [MEMBER]            ->
533  [WORD]              clist_lock
533  [FPAREN_CLOSE]      )
533  [SEMICOLON]         ;
533  [NEWLINE]           
534  [FUNC_CALL]         list_for_each
534  [FPAREN_OPEN]       (
534  [WORD]              item
534  [COMMA]             ,
534  [ADDR]              &
534  [WORD]              adap
534  [MEMBER]            ->
534  [WORD]              clients
534  [FPAREN_CLOSE]      )
534  [NEWLINE]           
534  [BRACE_OPEN]        {
534  [NEWLINE]           
535  [WORD]              client
535  [ASSIGN]            =
535  [FUNC_CALL]         list_entry
535  [FPAREN_OPEN]       (
535  [WORD]              item
535  [COMMA]             ,
535  [STRUCT]            struct
535  [TYPE]              i2c_client
535  [COMMA]             ,
535  [WORD]              list
535  [FPAREN_CLOSE]      )
535  [SEMICOLON]         ;
535  [NEWLINE]           
536  [IF]                if
536  [SPAREN_OPEN]       (
536  [NOT]               !
536  [FUNC_CALL]         try_module_get
536  [FPAREN_OPEN]       (
536  [WORD]              client
536  [MEMBER]            ->
536  [WORD]              driver
536  [MEMBER]            ->
536  [WORD]              owner
536  [FPAREN_CLOSE]      )
536  [SPAREN_CLOSE]      )
536  [NEWLINE]           
536  [BRACE_OPEN]        {
536  [NEWLINE]           
537  [CONTINUE]          continue
537  [SEMICOLON]         ;
537  [NEWLINE]           
537  [BRACE_CLOSE]       }
537  [NEWLINE]           
538  [IF]                if
538  [SPAREN_OPEN]       (
538  [WORD]              NULL
538  [COMPARE]           !=
538  [WORD]              client
538  [MEMBER]            ->
538  [WORD]              driver
538  [MEMBER]            ->
538  [WORD]              command
538  [SPAREN_CLOSE]      )
538  [NEWLINE]           
538  [BRACE_OPEN]        {
538  [NEWLINE]           
539  [FUNC_CALL]         up
539  [FPAREN_OPEN]       (
539  [ADDR]              &
539  [WORD]              adap
539  [MEMBER]            ->
539  [WORD]              clist_lock
539  [FPAREN_CLOSE]      )
539  [SEMICOLON]         ;
539  [NEWLINE]           
540  [TYPE]              client
540  [MEMBER]            ->
540  [TYPE]              driver
540  [MEMBER]            ->
540  [FUNC_CALL]         command
540  [FPAREN_OPEN]       (
540  [WORD]              client
540  [COMMA]             ,
540  [WORD]              cmd
540  [COMMA]             ,
540  [WORD]              arg
540  [FPAREN_CLOSE]      )
540  [SEMICOLON]         ;
540  [NEWLINE]           
541  [FUNC_CALL]         down
541  [FPAREN_OPEN]       (
541  [ADDR]              &
541  [WORD]              adap
541  [MEMBER]            ->
541  [WORD]              clist_lock
541  [FPAREN_CLOSE]      )
541  [SEMICOLON]         ;
541  [NEWLINE]           
542  [BRACE_CLOSE]       }
542  [NEWLINE]           
543  [FUNC_CALL]         module_put
543  [FPAREN_OPEN]       (
543  [WORD]              client
543  [MEMBER]            ->
543  [WORD]              driver
543  [MEMBER]            ->
543  [WORD]              owner
543  [FPAREN_CLOSE]      )
543  [SEMICOLON]         ;
543  [NEWLINE]           
544  [BRACE_CLOSE]       }
544  [NEWLINE]           
545  [FUNC_CALL]         up
545  [FPAREN_OPEN]       (
545  [ADDR]              &
545  [WORD]              adap
545  [MEMBER]            ->
545  [WORD]              clist_lock
545  [FPAREN_CLOSE]      )
545  [SEMICOLON]         ;
545  [NEWLINE]           
546  [BRACE_CLOSE]       }
546  [NEWLINE]           
548  [QUALIFIER]         static
548  [TYPE]              int
548  [TYPE]              __init
548  [FUNC_DEF]          i2c_init
548  [FPAREN_OPEN]       (
548  [TYPE]              void
548  [FPAREN_CLOSE]      )
548  [NEWLINE]           
549  [BRACE_OPEN]        {
549  [NEWLINE]           
550  [TYPE]              int
550  [WORD]              retval
550  [SEMICOLON]         ;
550  [NEWLINE]           
552  [WORD]              retval
552  [ASSIGN]            =
552  [FUNC_CALL]         bus_register
552  [FPAREN_OPEN]       (
552  [ADDR]              &
552  [WORD]              i2c_bus_type
552  [FPAREN_CLOSE]      )
552  [SEMICOLON]         ;
552  [NEWLINE]           
553  [IF]                if
553  [SPAREN_OPEN]       (
553  [WORD]              retval
553  [SPAREN_CLOSE]      )
553  [NEWLINE]           
553  [BRACE_OPEN]        {
553  [NEWLINE]           
554  [RETURN]            return
554  [PAREN_OPEN]        (
554  [WORD]              retval
554  [PAREN_CLOSE]       )
554  [SEMICOLON]         ;
554  [NEWLINE]           
554  [BRACE_CLOSE]       }
554  [NEWLINE]           
555  [WORD]              retval
555  [ASSIGN]            =
555  [FUNC_CALL]         driver_register
555  [FPAREN_OPEN]       (
555  [ADDR]              &
555  [WORD]              i2c_adapter_driver
555  [FPAREN_CLOSE]      )
555  [SEMICOLON]         ;
555  [NEWLINE]           
556  [IF]                if
556  [SPAREN_OPEN]       (
556  [WORD]              retval
556  [SPAREN_CLOSE]      )
556  [NEWLINE]           
556  [BRACE_OPEN]        {
556  [NEWLINE]           
557  [RETURN]            return
557  [PAREN_OPEN]        (
557  [WORD]              retval
557  [PAREN_CLOSE]       )
557  [SEMICOLON]         ;
557  [NEWLINE]           
557  [BRACE_CLOSE]       }
557  [NEWLINE]           
558  [RETURN]            return
558  [PAREN_OPEN]        (
558  [FUNC_CALL]         class_register
558  [FPAREN_OPEN]       (
558  [ADDR]              &
558  [WORD]              i2c_adapter_class
558  [FPAREN_CLOSE]      )
558  [PAREN_CLOSE]       )
558  [SEMICOLON]         ;
558  [NEWLINE]           
559  [BRACE_CLOSE]       }
559  [NEWLINE]           
561  [QUALIFIER]         static
561  [TYPE]              void
561  [TYPE]              __exit
561  [FUNC_DEF]          i2c_exit
561  [FPAREN_OPEN]       (
561  [TYPE]              void
561  [FPAREN_CLOSE]      )
561  [NEWLINE]           
562  [BRACE_OPEN]        {
562  [NEWLINE]           
563  [FUNC_CALL]         class_unregister
563  [FPAREN_OPEN]       (
563  [ADDR]              &
563  [WORD]              i2c_adapter_class
563  [FPAREN_CLOSE]      )
563  [SEMICOLON]         ;
563  [NEWLINE]           
564  [FUNC_CALL]         driver_unregister
564  [FPAREN_OPEN]       (
564  [ADDR]              &
564  [WORD]              i2c_adapter_driver
564  [FPAREN_CLOSE]      )
564  [SEMICOLON]         ;
564  [NEWLINE]           
565  [FUNC_CALL]         bus_unregister
565  [FPAREN_OPEN]       (
565  [ADDR]              &
565  [WORD]              i2c_bus_type
565  [FPAREN_CLOSE]      )
565  [SEMICOLON]         ;
565  [NEWLINE]           
566  [BRACE_CLOSE]       }
566  [NEWLINE]           
568  [FUNC_CALL]         subsys_initcall
568  [FPAREN_OPEN]       (
568  [WORD]              i2c_init
568  [FPAREN_CLOSE]      )
568  [SEMICOLON]         ;
568  [NEWLINE]           
569  [FUNC_CALL]         module_exit
569  [FPAREN_OPEN]       (
569  [WORD]              i2c_exit
569  [FPAREN_CLOSE]      )
569  [SEMICOLON]         ;
569  [NEWLINE]           
571  [COMMENT_MULTI]     /* ----------------------------------------------------␤ * the functional interface to the i2c busses.␤ * ----------------------------------------------------␤ */
574  [NEWLINE]           
576  [TYPE]              int
576  [FUNC_DEF]          i2c_transfer
576  [FPAREN_OPEN]       (
576  [STRUCT]            struct
576  [TYPE]              i2c_adapter
576  [PTR_TYPE]          *
576  [WORD]              adap
576  [COMMA]             ,
576  [STRUCT]            struct
576  [TYPE]              i2c_msg
576  [PTR_TYPE]          *
576  [WORD]              msgs
576  [COMMA]             ,
576  [TYPE]              int
576  [WORD]              num
576  [FPAREN_CLOSE]      )
576  [NEWLINE]           
577  [BRACE_OPEN]        {
577  [NEWLINE]           
578  [TYPE]              int
578  [WORD]              ret
578  [SEMICOLON]         ;
578  [NEWLINE]           
580  [IF]                if
580  [SPAREN_OPEN]       (
580  [WORD]              adap
580  [MEMBER]            ->
580  [WORD]              algo
580  [MEMBER]            ->
580  [WORD]              master_xfer
580  [SPAREN_CLOSE]      )
580  [NEWLINE]           
580  [BRACE_OPEN]        {
580  [NEWLINE]           
581  [PREPROC]           #
581  [PP_IF]             ifdef
581  [WORD]              DEBUG
581  [NEWLINE]           
582  [FOR]               for
582  [SPAREN_OPEN]       (
582  [WORD]              ret
582  [ASSIGN]            =
582  [NUMBER]            0
582  [SEMICOLON]         ;
582  [WORD]              ret
582  [COMPARE]           <
582  [WORD]              num
582  [SEMICOLON]         ;
582  [WORD]              ret
582  [INCDEC_AFTER]      ++
582  [SPAREN_CLOSE]      )
582  [NEWLINE]           
582  [BRACE_OPEN]        {
582  [NEWLINE]           
583  [FUNC_CALL]         dev_dbg
583  [FPAREN_OPEN]       (
583  [ADDR]              &
583  [WORD]              adap
583  [MEMBER]            ->
583  [WORD]              dev
583  [COMMA]             ,
583  [STRING]            "master_xfer[%d] %c, addr=0x%02x, "
583  [NEWLINE]           
584  [STRING]            "len=%d\n"
584  [COMMA]             ,
584  [WORD]              ret
584  [COMMA]             ,
584  [WORD]              msgs
584  [SQUARE_OPEN]       [
584  [WORD]              ret
584  [SQUARE_CLOSE]      ]
584  [MEMBER]            .
584  [WORD]              flags
584  [ARITH]             &
584  [WORD]              I2C_M_RD
584  [QUESTION]          ?
584  [NEWLINE]           
585  [STRING]            'R'
585  [COND_COLON]        :
585  [STRING]            'W'
585  [COMMA]             ,
585  [WORD]              msgs
585  [SQUARE_OPEN]       [
585  [WORD]              ret
585  [SQUARE_CLOSE]      ]
585  [MEMBER]            .
585  [WORD]              addr
585  [COMMA]             ,
585  [WORD]              msgs
585  [SQUARE_OPEN]       [
585  [WORD]              ret
585  [SQUARE_CLOSE]      ]
585  [MEMBER]            .
585  [WORD]              len
585  [FPAREN_CLOSE]      )
585  [SEMICOLON]         ;
585  [NEWLINE]           
586  [BRACE_CLOSE]       }
586  [NEWLINE]           
587  [PREPROC]           #
587  [PP_ENDIF]          endif
587  [NEWLINE]           
589  [FUNC_CALL]         down
589  [FPAREN_OPEN]       (
589  [ADDR]              &
589  [WORD]              adap
589  [MEMBER]            ->
589  [WORD]              bus_lock
589  [FPAREN_CLOSE]      )
589  [SEMICOLON]         ;
589  [NEWLINE]           
590  [WORD]              ret
590  [ASSIGN]            =
590  [WORD]              adap
590  [MEMBER]            ->
590  [WORD]              algo
590  [MEMBER]            ->
590  [FUNC_CALL]         master_xfer
590  [FPAREN_OPEN]       (
590  [WORD]              adap
590  [COMMA]             ,
590  [WORD]              msgs
590  [COMMA]             ,
590  [WORD]              num
590  [FPAREN_CLOSE]      )
590  [SEMICOLON]         ;
590  [NEWLINE]           
591  [FUNC_CALL]         up
591  [FPAREN_OPEN]       (
591  [ADDR]              &
591  [WORD]              adap
591  [MEMBER]            ->
591  [WORD]              bus_lock
591  [FPAREN_CLOSE]      )
591  [SEMICOLON]         ;
591  [NEWLINE]           
593  [RETURN]            return
593  [PAREN_OPEN]        (
593  [WORD]              ret
593  [PAREN_CLOSE]       )
593  [SEMICOLON]         ;
593  [NEWLINE]           
594  [BRACE_CLOSE]       }
594  [NEWLINE]           
594  [ELSE]              else
594  [NEWLINE]           
594  [BRACE_OPEN]        {
594  [NEWLINE]           
595  [FUNC_CALL]         dev_dbg
595  [FPAREN_OPEN]       (
595  [ADDR]              &
595  [WORD]              adap
595  [MEMBER]            ->
595  [WORD]              dev
595  [COMMA]             ,
595  [STRING]            "I2C level transfers not supported\n"
595  [FPAREN_CLOSE]      )
595  [SEMICOLON]         ;
595  [NEWLINE]           
596  [RETURN]            return
596  [PAREN_OPEN]        (
596  [NEG]               -
596  [WORD]              ENOSYS
596  [PAREN_CLOSE]       )
596  [SEMICOLON]         ;
596  [NEWLINE]           
597  [BRACE_CLOSE]       }
597  [NEWLINE]           
598  [BRACE_CLOSE]       }
598  [NEWLINE]           
600  [TYPE]              int
600  [FUNC_DEF]          i2c_master_send
600  [FPAREN_OPEN]       (
600  [STRUCT]            struct
600  [TYPE]              i2c_client
600  [PTR_TYPE]          *
600  [WORD]              client
600  [COMMA]             ,
600  [QUALIFIER]         const
600  [TYPE]              char
600  [PTR_TYPE]          *
600  [WORD]              buf
600  [COMMA]             ,
600  [TYPE]              int
600  [WORD]              count
600  [FPAREN_CLOSE]      )
600  [NEWLINE]           
601  [BRACE_OPEN]        {
601  [NEWLINE]           
602  [TYPE]              int
602  [WORD]              ret
602  [SEMICOLON]         ;
602  [NEWLINE]           
603  [STRUCT]            struct
603  [TYPE]              i2c_adapter
603  [PTR_TYPE]          *
603  [WORD]              adap
603  [ASSIGN]            =
603  [WORD]              client
603  [MEMBER]            ->
603  [WORD]              adapter
603  [SEMICOLON]         ;
603  [NEWLINE]           
604  [STRUCT]            struct
604  [TYPE]              i2c_msg
604  [WORD]              msg
604  [SEMICOLON]         ;
604  [NEWLINE]           
606  [TYPE]              msg
606  [MEMBER]            .
606  [WORD]              addr
606  [ASSIGN]            =
606  [WORD]              client
606  [MEMBER]            ->
606  [WORD]              addr
606  [SEMICOLON]         ;
606  [NEWLINE]           
607  [TYPE]              msg
607  [MEMBER]            .
607  [WORD]              flags
607  [ASSIGN]            =
607  [WORD]              client
607  [MEMBER]            ->
607  [WORD]              flags
607  [ARITH]             &
607  [WORD]              I2C_M_TEN
607  [SEMICOLON]         ;
607  [NEWLINE]           
608  [TYPE]              msg
608  [MEMBER]            .
608  [WORD]              len
608  [ASSIGN]            =
608  [WORD]              count
608  [SEMICOLON]         ;
608  [NEWLINE]           
609  [TYPE]              msg
609  [MEMBER]            .
609  [WORD]              buf
609  [ASSIGN]            =
609  [PAREN_OPEN]        (
609  [TYPE]              char
609  [PTR_TYPE]          *
609  [PAREN_CLOSE]       )
609  [WORD]              buf
609  [SEMICOLON]         ;
609  [NEWLINE]           
611  [WORD]              ret
611  [ASSIGN]            =
611  [FUNC_CALL]         i2c_transfer
611  [FPAREN_OPEN]       (
611  [WORD]              adap
611  [COMMA]             ,
611  [ADDR]              &
611  [WORD]              msg
611  [COMMA]             ,
611  [NUMBER]            1
611  [FPAREN_CLOSE]      )
611  [SEMICOLON]         ;
611  [NEWLINE]           
613  [COMMENT_MULTI]     /* If everything went ok (i.e. 1 msg transmitted), return #bytes␤	   transmitted, else error code. */
614  [NEWLINE]           
615  [RETURN]            return
615  [PAREN_OPEN]        (
615  [PAREN_OPEN]        (
615  [WORD]              ret
615  [COMPARE]           ==
615  [NUMBER]            1
615  [PAREN_CLOSE]       )
615  [QUESTION]          ?
615  [WORD]              count
615  [COND_COLON]        :
615  [WORD]              ret
615  [PAREN_CLOSE]       )
615  [SEMICOLON]         ;
615  [NEWLINE]           
616  [BRACE_CLOSE]       }
616  [NEWLINE]           
618  [TYPE]              int
618  [FUNC_DEF]          i2c_master_recv
618  [FPAREN_OPEN]       (
618  [STRUCT]            struct
618  [TYPE]              i2c_client
618  [PTR_TYPE]          *
618  [WORD]              client
618  [COMMA]             ,
618  [TYPE]              char
618  [PTR_TYPE]          *
618  [WORD]              buf
618  [COMMA]             ,
618  [TYPE]              int
618  [WORD]              count
618  [FPAREN_CLOSE]      )
618  [NEWLINE]           
619  [BRACE_OPEN]        {
619  [NEWLINE]           
620  [STRUCT]            struct
620  [TYPE]              i2c_adapter
620  [PTR_TYPE]          *
620  [WORD]              adap
620  [ASSIGN]            =
620  [WORD]              client
620  [MEMBER]            ->
620  [WORD]              adapter
620  [SEMICOLON]         ;
620  [NEWLINE]           
621  [STRUCT]            struct
621  [TYPE]              i2c_msg
621  [WORD]              msg
621  [SEMICOLON]         ;
621  [NEWLINE]           
622  [TYPE]              int
622  [WORD]              ret
622  [SEMICOLON]         ;
622  [NEWLINE]           
624  [TYPE]              msg
624  [MEMBER]            .
624  [WORD]              addr
624  [ASSIGN]            =
624  [WORD]              client
624  [MEMBER]            ->
624  [WORD]              addr
624  [SEMICOLON]         ;
624  [NEWLINE]           
625  [TYPE]              msg
625  [MEMBER]            .
625  [WORD]              flags
625  [ASSIGN]            =
625  [WORD]              client
625  [MEMBER]            ->
625  [WORD]              flags
625  [ARITH]             &
625  [WORD]              I2C_M_TEN
625  [SEMICOLON]         ;
625  [NEWLINE]           
626  [TYPE]              msg
626  [MEMBER]            .
626  [WORD]              flags
626  [ASSIGN]            |=
626  [WORD]              I2C_M_RD
626  [SEMICOLON]         ;
626  [NEWLINE]           
627  [TYPE]              msg
627  [MEMBER]            .
627  [WORD]              len
627  [ASSIGN]            =
627  [WORD]              count
627  [SEMICOLON]         ;
627  [NEWLINE]           
628  [TYPE]              msg
628  [MEMBER]            .
628  [WORD]              buf
628  [ASSIGN]            =
628  [WORD]              buf
628  [SEMICOLON]         ;
628  [NEWLINE]           
630  [WORD]              ret
630  [ASSIGN]            =
630  [FUNC_CALL]         i2c_transfer
630  [FPAREN_OPEN]       (
630  [WORD]              adap
630  [COMMA]             ,
630  [ADDR]              &
630  [WORD]              msg
630  [COMMA]             ,
630  [NUMBER]            1
630  [FPAREN_CLOSE]      )
630  [SEMICOLON]         ;
630  [NEWLINE]           
632  [COMMENT_MULTI]     /* If everything went ok (i.e. 1 msg transmitted), return #bytes␤	   transmitted, else error code. */
633  [NEWLINE]           
634  [RETURN]            return
634  [PAREN_OPEN]        (
634  [PAREN_OPEN]        (
634  [WORD]              ret
634  [COMPARE]           ==
634  [NUMBER]            1
634  [PAREN_CLOSE]       )
634  [QUESTION]          ?
634  [WORD]              count
634  [COND_COLON]        :
634  [WORD]              ret
634  [PAREN_CLOSE]       )
634  [SEMICOLON]         ;
634  [NEWLINE]           
635  [BRACE_CLOSE]       }
635  [NEWLINE]           
638  [TYPE]              int
638  [FUNC_DEF]          i2c_control
638  [FPAREN_OPEN]       (
638  [STRUCT]            struct
638  [TYPE]              i2c_client
638  [PTR_TYPE]          *
638  [WORD]              client
638  [COMMA]             ,
638  [NEWLINE]           
639  [TYPE]              unsigned
639  [TYPE]              int
639  [WORD]              cmd
639  [COMMA]             ,
639  [TYPE]              unsigned
639  [TYPE]              long
639  [WORD]              arg
639  [FPAREN_CLOSE]      )
639  [NEWLINE]           
640  [BRACE_OPEN]        {
640  [NEWLINE]           
641  [TYPE]              int
641  [WORD]              ret
641  [ASSIGN]            =
641  [NUMBER]            0
641  [SEMICOLON]         ;
641  [NEWLINE]           
642  [STRUCT]            struct
642  [TYPE]              i2c_adapter
642  [PTR_TYPE]          *
642  [WORD]              adap
642  [ASSIGN]            =
642  [WORD]              client
642  [MEMBER]            ->
642  [WORD]              adapter
642  [SEMICOLON]         ;
642  [NEWLINE]           
644  [FUNC_CALL]         dev_dbg
644  [FPAREN_OPEN]       (
644  [ADDR]              &
644  [WORD]              client
644  [MEMBER]            ->
644  [WORD]              adapter
644  [MEMBER]            ->
644  [WORD]              dev
644  [COMMA]             ,
644  [STRING]            "i2c ioctl, cmd: 0x%x, arg: %#lx\n"
644  [COMMA]             ,
644  [WORD]              cmd
644  [COMMA]             ,
644  [WORD]              arg
644  [FPAREN_CLOSE]      )
644  [SEMICOLON]         ;
644  [NEWLINE]           
645  [SWITCH]            switch
645  [SPAREN_OPEN]       (
645  [WORD]              cmd
645  [SPAREN_CLOSE]      )
645  [NEWLINE]           
645  [BRACE_OPEN]        {
645  [NEWLINE]           
646  [CASE]              case
646  [WORD]              I2C_RETRIES
646  [CASE_COLON]        :
646  [NEWLINE]           
647  [TYPE]              adap
647  [MEMBER]            ->
647  [WORD]              retries
647  [ASSIGN]            =
647  [WORD]              arg
647  [SEMICOLON]         ;
647  [NEWLINE]           
648  [BREAK]             break
648  [SEMICOLON]         ;
648  [NEWLINE]           
649  [CASE]              case
649  [WORD]              I2C_TIMEOUT
649  [CASE_COLON]        :
649  [NEWLINE]           
650  [TYPE]              adap
650  [MEMBER]            ->
650  [WORD]              timeout
650  [ASSIGN]            =
650  [WORD]              arg
650  [SEMICOLON]         ;
650  [NEWLINE]           
651  [BREAK]             break
651  [SEMICOLON]         ;
651  [NEWLINE]           
652  [CASE]              default
652  [CASE_COLON]        :
652  [NEWLINE]           
653  [IF]                if
653  [SPAREN_OPEN]       (
653  [WORD]              adap
653  [MEMBER]            ->
653  [WORD]              algo
653  [MEMBER]            ->
653  [WORD]              algo_control
653  [COMPARE]           !=
653  [WORD]              NULL
653  [SPAREN_CLOSE]      )
653  [NEWLINE]           
653  [BRACE_OPEN]        {
653  [NEWLINE]           
654  [WORD]              ret
654  [ASSIGN]            =
654  [WORD]              adap
654  [MEMBER]            ->
654  [WORD]              algo
654  [MEMBER]            ->
654  [FUNC_CALL]         algo_control
654  [FPAREN_OPEN]       (
654  [WORD]              adap
654  [COMMA]             ,
654  [WORD]              cmd
654  [COMMA]             ,
654  [WORD]              arg
654  [FPAREN_CLOSE]      )
654  [SEMICOLON]         ;
654  [NEWLINE]           
654  [BRACE_CLOSE]       }
654  [NEWLINE]           
655  [BRACE_CLOSE]       }
655  [NEWLINE]           
656  [RETURN]            return
656  [PAREN_OPEN]        (
656  [WORD]              ret
656  [PAREN_CLOSE]       )
656  [SEMICOLON]         ;
656  [NEWLINE]           
657  [BRACE_CLOSE]       }
657  [NEWLINE]           
659  [COMMENT_MULTI]     /* ----------------------------------------------------␤ * the i2c address scanning function␤ * Will not work for 10-bit addresses!␤ * ----------------------------------------------------␤ */
663  [NEWLINE]           
664  [QUALIFIER]         static
664  [TYPE]              int
664  [FUNC_DEF]          i2c_probe_address
664  [FPAREN_OPEN]       (
664  [STRUCT]            struct
664  [TYPE]              i2c_adapter
664  [PTR_TYPE]          *
664  [WORD]              adapter
664  [COMMA]             ,
664  [TYPE]              int
664  [WORD]              addr
664  [COMMA]             ,
664  [TYPE]              int
664  [WORD]              kind
664  [COMMA]             ,
664  [NEWLINE]           
665  [TYPE]              int
665  [PAREN_OPEN]        (
665  [PTR_TYPE]          *
665  [FUNC_VAR]          found_proc
665  [PAREN_CLOSE]       )
665  [FPAREN_OPEN]       (
665  [STRUCT]            struct
665  [TYPE]              i2c_adapter
665  [PTR_TYPE]          *
665  [COMMA]             ,
665  [TYPE]              int
665  [COMMA]             ,
665  [TYPE]              int
665  [FPAREN_CLOSE]      )
665  [FPAREN_CLOSE]      )
665  [NEWLINE]           
666  [BRACE_OPEN]        {
666  [NEWLINE]           
667  [TYPE]              int
667  [WORD]              err
667  [SEMICOLON]         ;
667  [NEWLINE]           
669  [COMMENT]           /* Make sure the address is valid */
669  [NEWLINE]           
670  [IF]                if
670  [SPAREN_OPEN]       (
670  [WORD]              addr
670  [COMPARE]           <
670  [NUMBER]            0x03
670  [BOOL]              ||
670  [WORD]              addr
670  [COMPARE]           >
670  [NUMBER]            0x77
670  [SPAREN_CLOSE]      )
670  [NEWLINE]           
670  [BRACE_OPEN]        {
670  [NEWLINE]           
671  [FUNC_CALL]         dev_warn
671  [FPAREN_OPEN]       (
671  [ADDR]              &
671  [WORD]              adapter
671  [MEMBER]            ->
671  [WORD]              dev
671  [COMMA]             ,
671  [STRING]            "Invalid probe address 0x%02x\n"
671  [COMMA]             ,
671  [NEWLINE]           
672  [WORD]              addr
672  [FPAREN_CLOSE]      )
672  [SEMICOLON]         ;
672  [NEWLINE]           
673  [RETURN]            return
673  [PAREN_OPEN]        (
673  [NEG]               -
673  [WORD]              EINVAL
673  [PAREN_CLOSE]       )
673  [SEMICOLON]         ;
673  [NEWLINE]           
674  [BRACE_CLOSE]       }
674  [NEWLINE]           
676  [COMMENT]           /* Skip if already in use */
676  [NEWLINE]           
677  [IF]                if
677  [SPAREN_OPEN]       (
677  [FUNC_CALL]         i2c_check_addr
677  [FPAREN_OPEN]       (
677  [WORD]              adapter
677  [COMMA]             ,
677  [WORD]              addr
677  [FPAREN_CLOSE]      )
677  [SPAREN_CLOSE]      )
677  [NEWLINE]           
677  [BRACE_OPEN]        {
677  [NEWLINE]           
678  [RETURN]            return
678  [PAREN_OPEN]        (
678  [NUMBER]            0
678  [PAREN_CLOSE]       )
678  [SEMICOLON]         ;
678  [NEWLINE]           
678  [BRACE_CLOSE]       }
678  [NEWLINE]           
680  [COMMENT]           /* Make sure there is something at this address, unless forced */
680  [NEWLINE]           
681  [IF]                if
681  [SPAREN_OPEN]       (
681  [WORD]              kind
681  [COMPARE]           <
681  [NUMBER]            0
681  [SPAREN_CLOSE]      )
681  [NEWLINE]           
681  [BRACE_OPEN]        {
681  [NEWLINE]           
682  [IF]                if
682  [SPAREN_OPEN]       (
682  [FUNC_CALL]         i2c_smbus_xfer
682  [FPAREN_OPEN]       (
682  [WORD]              adapter
682  [COMMA]             ,
682  [WORD]              addr
682  [COMMA]             ,
682  [NUMBER]            0
682  [COMMA]             ,
682  [NUMBER]            0
682  [COMMA]             ,
682  [NUMBER]            0
682  [COMMA]             ,
682  [NEWLINE]           
683  [WORD]              I2C_SMBUS_QUICK
683  [COMMA]             ,
683  [WORD]              NULL
683  [FPAREN_CLOSE]      )
683  [COMPARE]           <
683  [NUMBER]            0
683  [SPAREN_CLOSE]      )
683  [NEWLINE]           
683  [BRACE_OPEN]        {
683  [NEWLINE]           
684  [RETURN]            return
684  [PAREN_OPEN]        (
684  [NUMBER]            0
684  [PAREN_CLOSE]       )
684  [SEMICOLON]         ;
684  [NEWLINE]           
684  [BRACE_CLOSE]       }
684  [NEWLINE]           
686  [COMMENT]           /* prevent 24RF08 corruption */
686  [NEWLINE]           
687  [IF]                if
687  [SPAREN_OPEN]       (
687  [PAREN_OPEN]        (
687  [WORD]              addr
687  [ARITH]             &
687  [INV]               ~
687  [NUMBER]            0x0f
687  [PAREN_CLOSE]       )
687  [COMPARE]           ==
687  [NUMBER]            0x50
687  [SPAREN_CLOSE]      )
687  [NEWLINE]           
687  [BRACE_OPEN]        {
687  [NEWLINE]           
688  [FUNC_CALL]         i2c_smbus_xfer
688  [FPAREN_OPEN]       (
688  [WORD]              adapter
688  [COMMA]             ,
688  [WORD]              addr
688  [COMMA]             ,
688  [NUMBER]            0
688  [COMMA]             ,
688  [NUMBER]            0
688  [COMMA]             ,
688  [NUMBER]            0
688  [COMMA]             ,
688  [NEWLINE]           
689  [WORD]              I2C_SMBUS_QUICK
689  [COMMA]             ,
689  [WORD]              NULL
689  [FPAREN_CLOSE]      )
689  [SEMICOLON]         ;
689  [NEWLINE]           
689  [BRACE_CLOSE]       }
689  [NEWLINE]           
690  [BRACE_CLOSE]       }
690  [NEWLINE]           
692  [COMMENT]           /* Finally call the custom detection function */
692  [NEWLINE]           
693  [WORD]              err
693  [ASSIGN]            =
693  [FUNC_CALL]         found_proc
693  [FPAREN_OPEN]       (
693  [WORD]              adapter
693  [COMMA]             ,
693  [WORD]              addr
693  [COMMA]             ,
693  [WORD]              kind
693  [FPAREN_CLOSE]      )
693  [SEMICOLON]         ;
693  [NEWLINE]           
695  [COMMENT_MULTI]     /* -ENODEV can be returned if there is a chip at the given address␤	   but it isn't supported by this chip driver. We catch it here as␤	   this isn't an error. */
697  [NEWLINE]           
698  [RETURN]            return
698  [PAREN_OPEN]        (
698  [PAREN_OPEN]        (
698  [WORD]              err
698  [COMPARE]           ==
698  [NEG]               -
698  [WORD]              ENODEV
698  [PAREN_CLOSE]       )
698  [QUESTION]          ?
698  [NUMBER]            0
698  [COND_COLON]        :
698  [WORD]              err
698  [PAREN_CLOSE]       )
698  [SEMICOLON]         ;
698  [NEWLINE]           
699  [BRACE_CLOSE]       }
699  [NEWLINE]           
701  [TYPE]              int
701  [FUNC_DEF]          i2c_probe
701  [FPAREN_OPEN]       (
701  [STRUCT]            struct
701  [TYPE]              i2c_adapter
701  [PTR_TYPE]          *
701  [WORD]              adapter
701  [COMMA]             ,
701  [NEWLINE]           
702  [STRUCT]            struct
702  [TYPE]              i2c_client_address_data
702  [PTR_TYPE]          *
702  [WORD]              address_data
702  [COMMA]             ,
702  [NEWLINE]           
703  [TYPE]              int
703  [PAREN_OPEN]        (
703  [PTR_TYPE]          *
703  [FUNC_VAR]          found_proc
703  [PAREN_CLOSE]       )
703  [FPAREN_OPEN]       (
703  [STRUCT]            struct
703  [TYPE]              i2c_adapter
703  [PTR_TYPE]          *
703  [COMMA]             ,
703  [TYPE]              int
703  [COMMA]             ,
703  [TYPE]              int
703  [FPAREN_CLOSE]      )
703  [FPAREN_CLOSE]      )
703  [NEWLINE]           
704  [BRACE_OPEN]        {
704  [NEWLINE]           
705  [TYPE]              int
705  [WORD]              i
705  [COMMA]             ,
705  [WORD]              err
705  [SEMICOLON]         ;
705  [NEWLINE]           
706  [TYPE]              int
706  [WORD]              adap_id
706  [ASSIGN]            =
706  [FUNC_CALL]         i2c_adapter_id
706  [FPAREN_OPEN]       (
706  [WORD]              adapter
706  [FPAREN_CLOSE]      )
706  [SEMICOLON]         ;
706  [NEWLINE]           
708  [COMMENT]           /* Forget it if we can't probe using SMBUS_QUICK */
708  [NEWLINE]           
709  [IF]                if
709  [SPAREN_OPEN]       (
709  [NOT]               !
709  [FUNC_CALL]         i2c_check_functionality
709  [FPAREN_OPEN]       (
709  [WORD]              adapter
709  [COMMA]             ,
709  [WORD]              I2C_FUNC_SMBUS_QUICK
709  [FPAREN_CLOSE]      )
709  [SPAREN_CLOSE]      )
709  [NEWLINE]           
709  [BRACE_OPEN]        {
709  [NEWLINE]           
710  [RETURN]            return
710  [PAREN_OPEN]        (
710  [NEG]               -
710  [NUMBER]            1
710  [PAREN_CLOSE]       )
710  [SEMICOLON]         ;
710  [NEWLINE]           
710  [BRACE_CLOSE]       }
710  [NEWLINE]           
712  [COMMENT_MULTI]     /* Force entries are done first, and are not affected by ignore␤	   entries */
713  [NEWLINE]           
714  [IF]                if
714  [SPAREN_OPEN]       (
714  [WORD]              address_data
714  [MEMBER]            ->
714  [WORD]              forces
714  [SPAREN_CLOSE]      )
714  [NEWLINE]           
714  [BRACE_OPEN]        {
714  [NEWLINE]           
715  [TYPE]              unsigned
715  [TYPE]              short
715  [PTR_TYPE]          *
715  [PTR_TYPE]          *
715  [WORD]              forces
715  [ASSIGN]            =
715  [WORD]              address_data
715  [MEMBER]            ->
715  [WORD]              forces
715  [SEMICOLON]         ;
715  [NEWLINE]           
716  [TYPE]              int
716  [WORD]              kind
716  [SEMICOLON]         ;
716  [NEWLINE]           
718  [FOR]               for
718  [SPAREN_OPEN]       (
718  [WORD]              kind
718  [ASSIGN]            =
718  [NUMBER]            0
718  [SEMICOLON]         ;
718  [WORD]              forces
718  [SQUARE_OPEN]       [
718  [WORD]              kind
718  [SQUARE_CLOSE]      ]
718  [SEMICOLON]         ;
718  [WORD]              kind
718  [INCDEC_AFTER]      ++
718  [SPAREN_CLOSE]      )
718  [NEWLINE]           
718  [BRACE_OPEN]        {
718  [NEWLINE]           
719  [FOR]               for
719  [SPAREN_OPEN]       (
719  [WORD]              i
719  [ASSIGN]            =
719  [NUMBER]            0
719  [SEMICOLON]         ;
719  [WORD]              forces
719  [SQUARE_OPEN]       [
719  [WORD]              kind
719  [SQUARE_CLOSE]      ]
719  [SQUARE_OPEN]       [
719  [WORD]              i
719  [SQUARE_CLOSE]      ]
719  [COMPARE]           !=
719  [WORD]              I2C_CLIENT_END
719  [SEMICOLON]         ;
719  [NEWLINE]           
720  [WORD]              i
720  [ASSIGN]            +=
720  [NUMBER]            2
720  [SPAREN_CLOSE]      )
720  [NEWLINE]           
720  [BRACE_OPEN]        {
720  [NEWLINE]           
721  [IF]                if
721  [SPAREN_OPEN]       (
721  [WORD]              forces
721  [SQUARE_OPEN]       [
721  [WORD]              kind
721  [SQUARE_CLOSE]      ]
721  [SQUARE_OPEN]       [
721  [WORD]              i
721  [SQUARE_CLOSE]      ]
721  [COMPARE]           ==
721  [WORD]              adap_id
721  [NEWLINE]           
722  [BOOL]              ||
722  [WORD]              forces
722  [SQUARE_OPEN]       [
722  [WORD]              kind
722  [SQUARE_CLOSE]      ]
722  [SQUARE_OPEN]       [
722  [WORD]              i
722  [SQUARE_CLOSE]      ]
722  [COMPARE]           ==
722  [WORD]              ANY_I2C_BUS
722  [SPAREN_CLOSE]      )
722  [NEWLINE]           
722  [BRACE_OPEN]        {
722  [NEWLINE]           
723  [FUNC_CALL]         dev_dbg
723  [FPAREN_OPEN]       (
723  [ADDR]              &
723  [WORD]              adapter
723  [MEMBER]            ->
723  [WORD]              dev
723  [COMMA]             ,
723  [STRING]            "found force "
723  [NEWLINE]           
724  [STRING]            "parameter for adapter %d, "
724  [NEWLINE]           
725  [STRING]            "addr 0x%02x, kind %d\n"
725  [COMMA]             ,
725  [NEWLINE]           
726  [WORD]              adap_id
726  [COMMA]             ,
726  [WORD]              forces
726  [SQUARE_OPEN]       [
726  [WORD]              kind
726  [SQUARE_CLOSE]      ]
726  [SQUARE_OPEN]       [
726  [WORD]              i
726  [ARITH]             +
726  [NUMBER]            1
726  [SQUARE_CLOSE]      ]
726  [COMMA]             ,
726  [NEWLINE]           
727  [WORD]              kind
727  [FPAREN_CLOSE]      )
727  [SEMICOLON]         ;
727  [NEWLINE]           
728  [WORD]              err
728  [ASSIGN]            =
728  [FUNC_CALL]         i2c_probe_address
728  [FPAREN_OPEN]       (
728  [WORD]              adapter
728  [COMMA]             ,
728  [NEWLINE]           
729  [WORD]              forces
729  [SQUARE_OPEN]       [
729  [WORD]              kind
729  [SQUARE_CLOSE]      ]
729  [SQUARE_OPEN]       [
729  [WORD]              i
729  [ARITH]             +
729  [NUMBER]            1
729  [SQUARE_CLOSE]      ]
729  [COMMA]             ,
729  [NEWLINE]           
730  [WORD]              kind
730  [COMMA]             ,
730  [WORD]              found_proc
730  [FPAREN_CLOSE]      )
730  [SEMICOLON]         ;
730  [NEWLINE]           
731  [IF]                if
731  [SPAREN_OPEN]       (
731  [WORD]              err
731  [SPAREN_CLOSE]      )
731  [NEWLINE]           
731  [BRACE_OPEN]        {
731  [NEWLINE]           
732  [RETURN]            return
732  [PAREN_OPEN]        (
732  [WORD]              err
732  [PAREN_CLOSE]       )
732  [SEMICOLON]         ;
732  [NEWLINE]           
732  [BRACE_CLOSE]       }
732  [NEWLINE]           
733  [BRACE_CLOSE]       }
733  [NEWLINE]           
734  [BRACE_CLOSE]       }
734  [NEWLINE]           
735  [BRACE_CLOSE]       }
735  [NEWLINE]           
736  [BRACE_CLOSE]       }
736  [NEWLINE]           
738  [COMMENT_MULTI]     /* Probe entries are done second, and are not affected by ignore␤	   entries either */
739  [NEWLINE]           
740  [FOR]               for
740  [SPAREN_OPEN]       (
740  [WORD]              i
740  [ASSIGN]            =
740  [NUMBER]            0
740  [SEMICOLON]         ;
740  [WORD]              address_data
740  [MEMBER]            ->
740  [WORD]              probe
740  [SQUARE_OPEN]       [
740  [WORD]              i
740  [SQUARE_CLOSE]      ]
740  [COMPARE]           !=
740  [WORD]              I2C_CLIENT_END
740  [SEMICOLON]         ;
740  [WORD]              i
740  [ASSIGN]            +=
740  [NUMBER]            2
740  [SPAREN_CLOSE]      )
740  [NEWLINE]           
740  [BRACE_OPEN]        {
740  [NEWLINE]           
741  [IF]                if
741  [SPAREN_OPEN]       (
741  [WORD]              address_data
741  [MEMBER]            ->
741  [WORD]              probe
741  [SQUARE_OPEN]       [
741  [WORD]              i
741  [SQUARE_CLOSE]      ]
741  [COMPARE]           ==
741  [WORD]              adap_id
741  [NEWLINE]           
742  [BOOL]              ||
742  [WORD]              address_data
742  [MEMBER]            ->
742  [WORD]              probe
742  [SQUARE_OPEN]       [
742  [WORD]              i
742  [SQUARE_CLOSE]      ]
742  [COMPARE]           ==
742  [WORD]              ANY_I2C_BUS
742  [SPAREN_CLOSE]      )
742  [NEWLINE]           
742  [BRACE_OPEN]        {
742  [NEWLINE]           
743  [FUNC_CALL]         dev_dbg
743  [FPAREN_OPEN]       (
743  [ADDR]              &
743  [WORD]              adapter
743  [MEMBER]            ->
743  [WORD]              dev
743  [COMMA]             ,
743  [STRING]            "found probe parameter for "
743  [NEWLINE]           
744  [STRING]            "adapter %d, addr 0x%02x\n"
744  [COMMA]             ,
744  [WORD]              adap_id
744  [COMMA]             ,
744  [NEWLINE]           
745  [WORD]              address_data
745  [MEMBER]            ->
745  [WORD]              probe
745  [SQUARE_OPEN]       [
745  [WORD]              i
745  [ARITH]             +
745  [NUMBER]            1
745  [SQUARE_CLOSE]      ]
745  [FPAREN_CLOSE]      )
745  [SEMICOLON]         ;
745  [NEWLINE]           
746  [WORD]              err
746  [ASSIGN]            =
746  [FUNC_CALL]         i2c_probe_address
746  [FPAREN_OPEN]       (
746  [WORD]              adapter
746  [COMMA]             ,
746  [NEWLINE]           
747  [WORD]              address_data
747  [MEMBER]            ->
747  [WORD]              probe
747  [SQUARE_OPEN]       [
747  [WORD]              i
747  [ARITH]             +
747  [NUMBER]            1
747  [SQUARE_CLOSE]      ]
747  [COMMA]             ,
747  [NEWLINE]           
748  [NEG]               -
748  [NUMBER]            1
748  [COMMA]             ,
748  [WORD]              found_proc
748  [FPAREN_CLOSE]      )
748  [SEMICOLON]         ;
748  [NEWLINE]           
749  [IF]                if
749  [SPAREN_OPEN]       (
749  [WORD]              err
749  [SPAREN_CLOSE]      )
749  [NEWLINE]           
749  [BRACE_OPEN]        {
749  [NEWLINE]           
750  [RETURN]            return
750  [PAREN_OPEN]        (
750  [WORD]              err
750  [PAREN_CLOSE]       )
750  [SEMICOLON]         ;
750  [NEWLINE]           
750  [BRACE_CLOSE]       }
750  [NEWLINE]           
751  [BRACE_CLOSE]       }
751  [NEWLINE]           
752  [BRACE_CLOSE]       }
752  [NEWLINE]           
754  [COMMENT]           /* Normal entries are done last, unless shadowed by an ignore entry */
754  [NEWLINE]           
755  [FOR]               for
755  [SPAREN_OPEN]       (
755  [WORD]              i
755  [ASSIGN]            =
755  [NUMBER]            0
755  [SEMICOLON]         ;
755  [WORD]              address_data
755  [MEMBER]            ->
755  [WORD]              normal_i2c
755  [SQUARE_OPEN]       [
755  [WORD]              i
755  [SQUARE_CLOSE]      ]
755  [COMPARE]           !=
755  [WORD]              I2C_CLIENT_END
755  [SEMICOLON]         ;
755  [WORD]              i
755  [ASSIGN]            +=
755  [NUMBER]            1
755  [SPAREN_CLOSE]      )
755  [NEWLINE]           
755  [BRACE_OPEN]        {
755  [NEWLINE]           
756  [TYPE]              int
756  [WORD]              j
756  [COMMA]             ,
756  [WORD]              ignore
756  [SEMICOLON]         ;
756  [NEWLINE]           
758  [WORD]              ignore
758  [ASSIGN]            =
758  [NUMBER]            0
758  [SEMICOLON]         ;
758  [NEWLINE]           
759  [FOR]               for
759  [SPAREN_OPEN]       (
759  [WORD]              j
759  [ASSIGN]            =
759  [NUMBER]            0
759  [SEMICOLON]         ;
759  [WORD]              address_data
759  [MEMBER]            ->
759  [WORD]              ignore
759  [SQUARE_OPEN]       [
759  [WORD]              j
759  [SQUARE_CLOSE]      ]
759  [COMPARE]           !=
759  [WORD]              I2C_CLIENT_END
759  [SEMICOLON]         ;
759  [NEWLINE]           
760  [WORD]              j
760  [ASSIGN]            +=
760  [NUMBER]            2
760  [SPAREN_CLOSE]      )
760  [NEWLINE]           
760  [BRACE_OPEN]        {
760  [NEWLINE]           
761  [IF]                if
761  [SPAREN_OPEN]       (
761  [PAREN_OPEN]        (
761  [WORD]              address_data
761  [MEMBER]            ->
761  [WORD]              ignore
761  [SQUARE_OPEN]       [
761  [WORD]              j
761  [SQUARE_CLOSE]      ]
761  [COMPARE]           ==
761  [WORD]              adap_id
761  [BOOL]              ||
761  [NEWLINE]           
762  [WORD]              address_data
762  [MEMBER]            ->
762  [WORD]              ignore
762  [SQUARE_OPEN]       [
762  [WORD]              j
762  [SQUARE_CLOSE]      ]
762  [COMPARE]           ==
762  [WORD]              ANY_I2C_BUS
762  [PAREN_CLOSE]       )
762  [NEWLINE]           
763  [BOOL]              &&
763  [WORD]              address_data
763  [MEMBER]            ->
763  [WORD]              ignore
763  [SQUARE_OPEN]       [
763  [WORD]              j
763  [ARITH]             +
763  [NUMBER]            1
763  [SQUARE_CLOSE]      ]
763  [NEWLINE]           
764  [COMPARE]           ==
764  [WORD]              address_data
764  [MEMBER]            ->
764  [WORD]              normal_i2c
764  [SQUARE_OPEN]       [
764  [WORD]              i
764  [SQUARE_CLOSE]      ]
764  [SPAREN_CLOSE]      )
764  [NEWLINE]           
764  [BRACE_OPEN]        {
764  [NEWLINE]           
765  [FUNC_CALL]         dev_dbg
765  [FPAREN_OPEN]       (
765  [ADDR]              &
765  [WORD]              adapter
765  [MEMBER]            ->
765  [WORD]              dev
765  [COMMA]             ,
765  [STRING]            "found ignore "
765  [NEWLINE]           
766  [STRING]            "parameter for adapter %d, "
766  [NEWLINE]           
767  [STRING]            "addr 0x%02x\n"
767  [COMMA]             ,
767  [WORD]              adap_id
767  [COMMA]             ,
767  [NEWLINE]           
768  [WORD]              address_data
768  [MEMBER]            ->
768  [WORD]              ignore
768  [SQUARE_OPEN]       [
768  [WORD]              j
768  [ARITH]             +
768  [NUMBER]            1
768  [SQUARE_CLOSE]      ]
768  [FPAREN_CLOSE]      )
768  [SEMICOLON]         ;
768  [NEWLINE]           
769  [BRACE_CLOSE]       }
769  [NEWLINE]           
770  [WORD]              ignore
770  [ASSIGN]            =
770  [NUMBER]            1
770  [SEMICOLON]         ;
770  [NEWLINE]           
771  [BREAK]             break
771  [SEMICOLON]         ;
771  [NEWLINE]           
772  [BRACE_CLOSE]       }
772  [NEWLINE]           
773  [IF]                if
773  [SPAREN_OPEN]       (
773  [WORD]              ignore
773  [SPAREN_CLOSE]      )
773  [NEWLINE]           
773  [BRACE_OPEN]        {
773  [NEWLINE]           
774  [CONTINUE]          continue
774  [SEMICOLON]         ;
774  [NEWLINE]           
774  [BRACE_CLOSE]       }
774  [NEWLINE]           
776  [FUNC_CALL]         dev_dbg
776  [FPAREN_OPEN]       (
776  [ADDR]              &
776  [WORD]              adapter
776  [MEMBER]            ->
776  [WORD]              dev
776  [COMMA]             ,
776  [STRING]            "found normal entry for adapter %d, "
776  [NEWLINE]           
777  [STRING]            "addr 0x%02x\n"
777  [COMMA]             ,
777  [WORD]              adap_id
777  [COMMA]             ,
777  [NEWLINE]           
778  [WORD]              address_data
778  [MEMBER]            ->
778  [WORD]              normal_i2c
778  [SQUARE_OPEN]       [
778  [WORD]              i
778  [SQUARE_CLOSE]      ]
778  [FPAREN_CLOSE]      )
778  [SEMICOLON]         ;
778  [NEWLINE]           
779  [WORD]              err
779  [ASSIGN]            =
779  [FUNC_CALL]         i2c_probe_address
779  [FPAREN_OPEN]       (
779  [WORD]              adapter
779  [COMMA]             ,
779  [WORD]              address_data
779  [MEMBER]            ->
779  [WORD]              normal_i2c
779  [SQUARE_OPEN]       [
779  [WORD]              i
779  [SQUARE_CLOSE]      ]
779  [COMMA]             ,
779  [NEWLINE]           
780  [NEG]               -
780  [NUMBER]            1
780  [COMMA]             ,
780  [WORD]              found_proc
780  [FPAREN_CLOSE]      )
780  [SEMICOLON]         ;
780  [NEWLINE]           
781  [IF]                if
781  [SPAREN_OPEN]       (
781  [WORD]              err
781  [SPAREN_CLOSE]      )
781  [NEWLINE]           
781  [BRACE_OPEN]        {
781  [NEWLINE]           
782  [RETURN]            return
782  [PAREN_OPEN]        (
782  [WORD]              err
782  [PAREN_CLOSE]       )
782  [SEMICOLON]         ;
782  [NEWLINE]           
782  [BRACE_CLOSE]       }
782  [NEWLINE]           
783  [BRACE_CLOSE]       }
783  [NEWLINE]           
785  [RETURN]            return
785  [PAREN_OPEN]        (
785  [NUMBER]            0
785  [PAREN_CLOSE]       )
785  [SEMICOLON]         ;
785  [NEWLINE]           
786  [BRACE_CLOSE]       }
786  [COMMENT]           /* i2c_probe */
786  [NEWLINE]           
788  [STRUCT]            struct
788  [TYPE]              i2c_adapter
788  [PTR_TYPE]          *
788  [FUNC_DEF]          i2c_get_adapter
788  [FPAREN_OPEN]       (
788  [TYPE]              int
788  [WORD]              id
788  [FPAREN_CLOSE]      )
788  [NEWLINE]           
789  [BRACE_OPEN]        {
789  [NEWLINE]           
790  [STRUCT]            struct
790  [TYPE]              i2c_adapter
790  [PTR_TYPE]          *
790  [WORD]              adapter
790  [SEMICOLON]         ;
790  [NEWLINE]           
792  [FUNC_CALL]         down
792  [FPAREN_OPEN]       (
792  [ADDR]              &
792  [WORD]              core_lists
792  [FPAREN_CLOSE]      )
792  [SEMICOLON]         ;
792  [NEWLINE]           
793  [WORD]              adapter
793  [ASSIGN]            =
793  [PAREN_OPEN]        (
793  [STRUCT]            struct
793  [TYPE]              i2c_adapter
793  [PTR_TYPE]          *
793  [PAREN_CLOSE]       )
793  [FUNC_CALL]         idr_find
793  [FPAREN_OPEN]       (
793  [ADDR]              &
793  [WORD]              i2c_adapter_idr
793  [COMMA]             ,
793  [WORD]              id
793  [FPAREN_CLOSE]      )
793  [SEMICOLON]         ;
793  [NEWLINE]           
794  [IF]                if
794  [SPAREN_OPEN]       (
794  [WORD]              adapter
794  [BOOL]              &&
794  [NOT]               !
794  [FUNC_CALL]         try_module_get
794  [FPAREN_OPEN]       (
794  [WORD]              adapter
794  [MEMBER]            ->
794  [WORD]              owner
794  [FPAREN_CLOSE]      )
794  [SPAREN_CLOSE]      )
794  [NEWLINE]           
794  [BRACE_OPEN]        {
794  [NEWLINE]           
795  [WORD]              adapter
795  [ASSIGN]            =
795  [WORD]              NULL
795  [SEMICOLON]         ;
795  [NEWLINE]           
795  [BRACE_CLOSE]       }
795  [NEWLINE]           
797  [FUNC_CALL]         up
797  [FPAREN_OPEN]       (
797  [ADDR]              &
797  [WORD]              core_lists
797  [FPAREN_CLOSE]      )
797  [SEMICOLON]         ;
797  [NEWLINE]           
798  [RETURN]            return
798  [PAREN_OPEN]        (
798  [WORD]              adapter
798  [PAREN_CLOSE]       )
798  [SEMICOLON]         ;
798  [NEWLINE]           
799  [BRACE_CLOSE]       }
799  [NEWLINE]           
801  [TYPE]              void
801  [FUNC_DEF]          i2c_put_adapter
801  [FPAREN_OPEN]       (
801  [STRUCT]            struct
801  [TYPE]              i2c_adapter
801  [PTR_TYPE]          *
801  [WORD]              adap
801  [FPAREN_CLOSE]      )
801  [NEWLINE]           
802  [BRACE_OPEN]        {
802  [NEWLINE]           
803  [FUNC_CALL]         module_put
803  [FPAREN_OPEN]       (
803  [WORD]              adap
803  [MEMBER]            ->
803  [WORD]              owner
803  [FPAREN_CLOSE]      )
803  [SEMICOLON]         ;
803  [NEWLINE]           
804  [BRACE_CLOSE]       }
804  [NEWLINE]           
806  [COMMENT]           /* The SMBus parts */
806  [NEWLINE]           
808  [PREPROC]           #
808  [PP_DEFINE]         define
808  [MACRO]             POLY
808  [PAREN_OPEN]        (
808  [NUMBER]            0x1070U
808  [ARITH]             <<
808  [NUMBER]            3
808  [PAREN_CLOSE]       )
808  [NEWLINE]           
809  [QUALIFIER]         static
809  [TYPE]              u8
809  [NEWLINE]           
810  [FUNC_DEF]          crc8
810  [FPAREN_OPEN]       (
810  [TYPE]              u16
810  [WORD]              data
810  [FPAREN_CLOSE]      )
810  [NEWLINE]           
811  [BRACE_OPEN]        {
811  [NEWLINE]           
812  [TYPE]              int
812  [WORD]              i
812  [SEMICOLON]         ;
812  [NEWLINE]           
814  [FOR]               for
814  [SPAREN_OPEN]       (
814  [WORD]              i
814  [ASSIGN]            =
814  [NUMBER]            0
814  [SEMICOLON]         ;
814  [WORD]              i
814  [COMPARE]           <
814  [NUMBER]            8
814  [SEMICOLON]         ;
814  [WORD]              i
814  [INCDEC_AFTER]      ++
814  [SPAREN_CLOSE]      )
814  [NEWLINE]           
814  [BRACE_OPEN]        {
814  [NEWLINE]           
815  [IF]                if
815  [SPAREN_OPEN]       (
815  [WORD]              data
815  [ARITH]             &
815  [NUMBER]            0x8000
815  [SPAREN_CLOSE]      )
815  [NEWLINE]           
815  [BRACE_OPEN]        {
815  [NEWLINE]           
816  [WORD]              data
816  [ASSIGN]            =
816  [WORD]              data
816  [CARET]             ^
816  [WORD]              POLY
816  [SEMICOLON]         ;
816  [NEWLINE]           
816  [BRACE_CLOSE]       }
816  [NEWLINE]           
817  [WORD]              data
817  [ASSIGN]            =
817  [WORD]              data
817  [ARITH]             <<
817  [NUMBER]            1
817  [SEMICOLON]         ;
817  [NEWLINE]           
818  [BRACE_CLOSE]       }
818  [NEWLINE]           
819  [RETURN]            return
819  [PAREN_OPEN]        (
819  [PAREN_OPEN]        (
819  [TYPE]              u8
819  [PAREN_CLOSE]       )
819  [PAREN_OPEN]        (
819  [WORD]              data
819  [ARITH]             >>
819  [NUMBER]            8
819  [PAREN_CLOSE]       )
819  [PAREN_CLOSE]       )
819  [SEMICOLON]         ;
819  [NEWLINE]           
820  [BRACE_CLOSE]       }
820  [NEWLINE]           
822  [COMMENT_MULTI]     /* CRC over count bytes in the first array plus the bytes in the rest␤   array if it is non-null. rest[0] is the (length of rest) - 1␤   and is included. */
824  [NEWLINE]           
825  [QUALIFIER]         static
825  [TYPE]              u8
825  [FUNC_DEF]          i2c_smbus_partial_pec
825  [FPAREN_OPEN]       (
825  [TYPE]              u8
825  [WORD]              crc
825  [COMMA]             ,
825  [TYPE]              int
825  [WORD]              count
825  [COMMA]             ,
825  [TYPE]              u8
825  [PTR_TYPE]          *
825  [WORD]              first
825  [COMMA]             ,
825  [TYPE]              u8
825  [PTR_TYPE]          *
825  [WORD]              rest
825  [FPAREN_CLOSE]      )
825  [NEWLINE]           
826  [BRACE_OPEN]        {
826  [NEWLINE]           
827  [TYPE]              int
827  [WORD]              i
827  [SEMICOLON]         ;
827  [NEWLINE]           
829  [FOR]               for
829  [SPAREN_OPEN]       (
829  [WORD]              i
829  [ASSIGN]            =
829  [NUMBER]            0
829  [SEMICOLON]         ;
829  [WORD]              i
829  [COMPARE]           <
829  [WORD]              count
829  [SEMICOLON]         ;
829  [WORD]              i
829  [INCDEC_AFTER]      ++
829  [SPAREN_CLOSE]      )
829  [NEWLINE]           
829  [BRACE_OPEN]        {
829  [NEWLINE]           
830  [WORD]              crc
830  [ASSIGN]            =
830  [FUNC_CALL]         crc8
830  [FPAREN_OPEN]       (
830  [PAREN_OPEN]        (
830  [WORD]              crc
830  [CARET]             ^
830  [WORD]              first
830  [SQUARE_OPEN]       [
830  [WORD]              i
830  [SQUARE_CLOSE]      ]
830  [PAREN_CLOSE]       )
830  [ARITH]             <<
830  [NUMBER]            8
830  [FPAREN_CLOSE]      )
830  [SEMICOLON]         ;
830  [NEWLINE]           
830  [BRACE_CLOSE]       }
830  [NEWLINE]           
831  [IF]                if
831  [SPAREN_OPEN]       (
831  [WORD]              rest
831  [COMPARE]           !=
831  [WORD]              NULL
831  [SPAREN_CLOSE]      )
831  [NEWLINE]           
831  [BRACE_OPEN]        {
831  [NEWLINE]           
832  [FOR]               for
832  [SPAREN_OPEN]       (
832  [WORD]              i
832  [ASSIGN]            =
832  [NUMBER]            0
832  [SEMICOLON]         ;
832  [WORD]              i
832  [COMPARE]           <=
832  [WORD]              rest
832  [SQUARE_OPEN]       [
832  [NUMBER]            0
832  [SQUARE_CLOSE]      ]
832  [SEMICOLON]         ;
832  [WORD]              i
832  [INCDEC_AFTER]      ++
832  [SPAREN_CLOSE]      )
832  [NEWLINE]           
832  [BRACE_OPEN]        {
832  [NEWLINE]           
833  [WORD]              crc
833  [ASSIGN]            =
833  [FUNC_CALL]         crc8
833  [FPAREN_OPEN]       (
833  [PAREN_OPEN]        (
833  [WORD]              crc
833  [CARET]             ^
833  [WORD]              rest
833  [SQUARE_OPEN]       [
833  [WORD]              i
833  [SQUARE_CLOSE]      ]
833  [PAREN_CLOSE]       )
833  [ARITH]             <<
833  [NUMBER]            8
833  [FPAREN_CLOSE]      )
833  [SEMICOLON]         ;
833  [NEWLINE]           
833  [BRACE_CLOSE]       }
833  [NEWLINE]           
833  [BRACE_CLOSE]       }
833  [NEWLINE]           
834  [RETURN]            return
834  [PAREN_OPEN]        (
834  [WORD]              crc
834  [PAREN_CLOSE]       )
834  [SEMICOLON]         ;
834  [NEWLINE]           
835  [BRACE_CLOSE]       }
835  [NEWLINE]           
837  [QUALIFIER]         static
837  [TYPE]              u8
837  [FUNC_DEF]          i2c_smbus_pec
837  [FPAREN_OPEN]       (
837  [TYPE]              int
837  [WORD]              count
837  [COMMA]             ,
837  [TYPE]              u8
837  [PTR_TYPE]          *
837  [WORD]              first
837  [COMMA]             ,
837  [TYPE]              u8
837  [PTR_TYPE]          *
837  [WORD]              rest
837  [FPAREN_CLOSE]      )
837  [NEWLINE]           
838  [BRACE_OPEN]        {
838  [NEWLINE]           
839  [RETURN]            return
839  [PAREN_OPEN]        (
839  [FUNC_CALL]         i2c_smbus_partial_pec
839  [FPAREN_OPEN]       (
839  [NUMBER]            0
839  [COMMA]             ,
839  [WORD]              count
839  [COMMA]             ,
839  [WORD]              first
839  [COMMA]             ,
839  [WORD]              rest
839  [FPAREN_CLOSE]      )
839  [PAREN_CLOSE]       )
839  [SEMICOLON]         ;
839  [NEWLINE]           
840  [BRACE_CLOSE]       }
840  [NEWLINE]           
842  [COMMENT_MULTI]     /* Returns new "size" (transaction type)␤   Note that we convert byte to byte_data and byte_data to word_data␤   rather than invent new xxx_PEC transactions. */
844  [NEWLINE]           
845  [QUALIFIER]         static
845  [TYPE]              int
845  [FUNC_DEF]          i2c_smbus_add_pec
845  [FPAREN_OPEN]       (
845  [TYPE]              u16
845  [WORD]              addr
845  [COMMA]             ,
845  [TYPE]              u8
845  [WORD]              command
845  [COMMA]             ,
845  [TYPE]              int
845  [WORD]              size
845  [COMMA]             ,
845  [NEWLINE]           
846  [UNION]             union
846  [TYPE]              i2c_smbus_data
846  [PTR_TYPE]          *
846  [WORD]              data
846  [FPAREN_CLOSE]      )
846  [NEWLINE]           
847  [BRACE_OPEN]        {
847  [NEWLINE]           
848  [TYPE]              u8
848  [WORD]              buf
848  [SQUARE_OPEN]       [
848  [NUMBER]            3
848  [SQUARE_CLOSE]      ]
848  [SEMICOLON]         ;
848  [NEWLINE]           
850  [WORD]              buf
850  [SQUARE_OPEN]       [
850  [NUMBER]            0
850  [SQUARE_CLOSE]      ]
850  [ASSIGN]            =
850  [WORD]              addr
850  [ARITH]             <<
850  [NUMBER]            1
850  [SEMICOLON]         ;
850  [NEWLINE]           
851  [WORD]              buf
851  [SQUARE_OPEN]       [
851  [NUMBER]            1
851  [SQUARE_CLOSE]      ]
851  [ASSIGN]            =
851  [WORD]              command
851  [SEMICOLON]         ;
851  [NEWLINE]           
852  [SWITCH]            switch
852  [SPAREN_OPEN]       (
852  [WORD]              size
852  [SPAREN_CLOSE]      )
852  [NEWLINE]           
852  [BRACE_OPEN]        {
852  [NEWLINE]           
853  [CASE]              case
853  [WORD]              I2C_SMBUS_BYTE
853  [CASE_COLON]        :
853  [NEWLINE]           
854  [TYPE]              data
854  [MEMBER]            ->
854  [WORD]              byte
854  [ASSIGN]            =
854  [FUNC_CALL]         i2c_smbus_pec
854  [FPAREN_OPEN]       (
854  [NUMBER]            2
854  [COMMA]             ,
854  [WORD]              buf
854  [COMMA]             ,
854  [WORD]              NULL
854  [FPAREN_CLOSE]      )
854  [SEMICOLON]         ;
854  [NEWLINE]           
855  [WORD]              size
855  [ASSIGN]            =
855  [WORD]              I2C_SMBUS_BYTE_DATA
855  [SEMICOLON]         ;
855  [NEWLINE]           
856  [BREAK]             break
856  [SEMICOLON]         ;
856  [NEWLINE]           
857  [CASE]              case
857  [WORD]              I2C_SMBUS_BYTE_DATA
857  [CASE_COLON]        :
857  [NEWLINE]           
858  [WORD]              buf
858  [SQUARE_OPEN]       [
858  [NUMBER]            2
858  [SQUARE_CLOSE]      ]
858  [ASSIGN]            =
858  [WORD]              data
858  [MEMBER]            ->
858  [WORD]              byte
858  [SEMICOLON]         ;
858  [NEWLINE]           
859  [TYPE]              data
859  [MEMBER]            ->
859  [WORD]              word
859  [ASSIGN]            =
859  [WORD]              buf
859  [SQUARE_OPEN]       [
859  [NUMBER]            2
859  [SQUARE_CLOSE]      ]
859  [BOOL]              ||
859  [NEWLINE]           
860  [PAREN_OPEN]        (
860  [FUNC_CALL]         i2c_smbus_pec
860  [FPAREN_OPEN]       (
860  [NUMBER]            3
860  [COMMA]             ,
860  [WORD]              buf
860  [COMMA]             ,
860  [WORD]              NULL
860  [FPAREN_CLOSE]      )
860  [ARITH]             <<
860  [NUMBER]            8
860  [PAREN_CLOSE]       )
860  [SEMICOLON]         ;
860  [NEWLINE]           
861  [WORD]              size
861  [ASSIGN]            =
861  [WORD]              I2C_SMBUS_WORD_DATA
861  [SEMICOLON]         ;
861  [NEWLINE]           
862  [BREAK]             break
862  [SEMICOLON]         ;
862  [NEWLINE]           
863  [CASE]              case
863  [WORD]              I2C_SMBUS_WORD_DATA
863  [CASE_COLON]        :
863  [NEWLINE]           
864  [COMMENT]           /* unsupported */
864  [NEWLINE]           
865  [BREAK]             break
865  [SEMICOLON]         ;
865  [NEWLINE]           
866  [CASE]              case
866  [WORD]              I2C_SMBUS_BLOCK_DATA
866  [CASE_COLON]        :
866  [NEWLINE]           
867  [TYPE]              data
867  [MEMBER]            ->
867  [WORD]              block
867  [SQUARE_OPEN]       [
867  [WORD]              data
867  [MEMBER]            ->
867  [WORD]              block
867  [SQUARE_OPEN]       [
867  [NUMBER]            0
867  [SQUARE_CLOSE]      ]
867  [ARITH]             +
867  [NUMBER]            1
867  [SQUARE_CLOSE]      ]
867  [ASSIGN]            =
867  [NEWLINE]           
868  [FUNC_CALL]         i2c_smbus_pec
868  [FPAREN_OPEN]       (
868  [NUMBER]            2
868  [COMMA]             ,
868  [WORD]              buf
868  [COMMA]             ,
868  [WORD]              data
868  [MEMBER]            ->
868  [WORD]              block
868  [FPAREN_CLOSE]      )
868  [SEMICOLON]         ;
868  [NEWLINE]           
869  [WORD]              size
869  [ASSIGN]            =
869  [WORD]              I2C_SMBUS_BLOCK_DATA_PEC
869  [SEMICOLON]         ;
869  [NEWLINE]           
870  [BREAK]             break
870  [SEMICOLON]         ;
870  [NEWLINE]           
871  [BRACE_CLOSE]       }
871  [NEWLINE]           
872  [RETURN]            return
872  [PAREN_OPEN]        (
872  [WORD]              size
872  [PAREN_CLOSE]       )
872  [SEMICOLON]         ;
872  [NEWLINE]           
873  [BRACE_CLOSE]       }
873  [NEWLINE]           
875  [QUALIFIER]         static
875  [TYPE]              int
875  [FUNC_DEF]          i2c_smbus_check_pec
875  [FPAREN_OPEN]       (
875  [TYPE]              u16
875  [WORD]              addr
875  [COMMA]             ,
875  [TYPE]              u8
875  [WORD]              command
875  [COMMA]             ,
875  [TYPE]              int
875  [WORD]              size
875  [COMMA]             ,
875  [TYPE]              u8
875  [WORD]              partial
875  [COMMA]             ,
875  [NEWLINE]           
876  [UNION]             union
876  [TYPE]              i2c_smbus_data
876  [PTR_TYPE]          *
876  [WORD]              data
876  [FPAREN_CLOSE]      )
876  [NEWLINE]           
877  [BRACE_OPEN]        {
877  [NEWLINE]           
878  [TYPE]              u8
878  [WORD]              buf
878  [SQUARE_OPEN]       [
878  [NUMBER]            3
878  [SQUARE_CLOSE]      ]
878  [COMMA]             ,
878  [WORD]              rpec
878  [COMMA]             ,
878  [WORD]              cpec
878  [SEMICOLON]         ;
878  [NEWLINE]           
880  [WORD]              buf
880  [SQUARE_OPEN]       [
880  [NUMBER]            1
880  [SQUARE_CLOSE]      ]
880  [ASSIGN]            =
880  [WORD]              command
880  [SEMICOLON]         ;
880  [NEWLINE]           
881  [SWITCH]            switch
881  [SPAREN_OPEN]       (
881  [WORD]              size
881  [SPAREN_CLOSE]      )
881  [NEWLINE]           
881  [BRACE_OPEN]        {
881  [NEWLINE]           
882  [CASE]              case
882  [WORD]              I2C_SMBUS_BYTE_DATA
882  [CASE_COLON]        :
882  [NEWLINE]           
883  [WORD]              buf
883  [SQUARE_OPEN]       [
883  [NUMBER]            0
883  [SQUARE_CLOSE]      ]
883  [ASSIGN]            =
883  [PAREN_OPEN]        (
883  [WORD]              addr
883  [ARITH]             <<
883  [NUMBER]            1
883  [PAREN_CLOSE]       )
883  [ARITH]             |
883  [NUMBER]            1
883  [SEMICOLON]         ;
883  [NEWLINE]           
884  [WORD]              cpec
884  [ASSIGN]            =
884  [FUNC_CALL]         i2c_smbus_pec
884  [FPAREN_OPEN]       (
884  [NUMBER]            2
884  [COMMA]             ,
884  [WORD]              buf
884  [COMMA]             ,
884  [WORD]              NULL
884  [FPAREN_CLOSE]      )
884  [SEMICOLON]         ;
884  [NEWLINE]           
885  [WORD]              rpec
885  [ASSIGN]            =
885  [WORD]              data
885  [MEMBER]            ->
885  [WORD]              byte
885  [SEMICOLON]         ;
885  [NEWLINE]           
886  [BREAK]             break
886  [SEMICOLON]         ;
886  [NEWLINE]           
887  [CASE]              case
887  [WORD]              I2C_SMBUS_WORD_DATA
887  [CASE_COLON]        :
887  [NEWLINE]           
888  [WORD]              buf
888  [SQUARE_OPEN]       [
888  [NUMBER]            0
888  [SQUARE_CLOSE]      ]
888  [ASSIGN]            =
888  [PAREN_OPEN]        (
888  [WORD]              addr
888  [ARITH]             <<
888  [NUMBER]            1
888  [PAREN_CLOSE]       )
888  [ARITH]             |
888  [NUMBER]            1
888  [SEMICOLON]         ;
888  [NEWLINE]           
889  [WORD]              buf
889  [SQUARE_OPEN]       [
889  [NUMBER]            2
889  [SQUARE_CLOSE]      ]
889  [ASSIGN]            =
889  [WORD]              data
889  [MEMBER]            ->
889  [WORD]              word
889  [ARITH]             &
889  [NUMBER]            0xff
889  [SEMICOLON]         ;
889  [NEWLINE]           
890  [WORD]              cpec
890  [ASSIGN]            =
890  [FUNC_CALL]         i2c_smbus_pec
890  [FPAREN_OPEN]       (
890  [NUMBER]            3
890  [COMMA]             ,
890  [WORD]              buf
890  [COMMA]             ,
890  [WORD]              NULL
890  [FPAREN_CLOSE]      )
890  [SEMICOLON]         ;
890  [NEWLINE]           
891  [WORD]              rpec
891  [ASSIGN]            =
891  [WORD]              data
891  [MEMBER]            ->
891  [WORD]              word
891  [ARITH]             >>
891  [NUMBER]            8
891  [SEMICOLON]         ;
891  [NEWLINE]           
892  [BREAK]             break
892  [SEMICOLON]         ;
892  [NEWLINE]           
893  [CASE]              case
893  [WORD]              I2C_SMBUS_WORD_DATA_PEC
893  [CASE_COLON]        :
893  [NEWLINE]           
894  [COMMENT]           /* unsupported */
894  [NEWLINE]           
895  [WORD]              cpec
895  [ASSIGN]            =
895  [WORD]              rpec
895  [ASSIGN]            =
895  [NUMBER]            0
895  [SEMICOLON]         ;
895  [NEWLINE]           
896  [BREAK]             break
896  [SEMICOLON]         ;
896  [NEWLINE]           
897  [CASE]              case
897  [WORD]              I2C_SMBUS_PROC_CALL_PEC
897  [CASE_COLON]        :
897  [NEWLINE]           
898  [COMMENT]           /* unsupported */
898  [NEWLINE]           
899  [WORD]              cpec
899  [ASSIGN]            =
899  [WORD]              rpec
899  [ASSIGN]            =
899  [NUMBER]            0
899  [SEMICOLON]         ;
899  [NEWLINE]           
900  [BREAK]             break
900  [SEMICOLON]         ;
900  [NEWLINE]           
901  [CASE]              case
901  [WORD]              I2C_SMBUS_BLOCK_DATA_PEC
901  [CASE_COLON]        :
901  [NEWLINE]           
902  [WORD]              buf
902  [SQUARE_OPEN]       [
902  [NUMBER]            0
902  [SQUARE_CLOSE]      ]
902  [ASSIGN]            =
902  [PAREN_OPEN]        (
902  [WORD]              addr
902  [ARITH]             <<
902  [NUMBER]            1
902  [PAREN_CLOSE]       )
902  [SEMICOLON]         ;
902  [NEWLINE]           
903  [WORD]              buf
903  [SQUARE_OPEN]       [
903  [NUMBER]            2
903  [SQUARE_CLOSE]      ]
903  [ASSIGN]            =
903  [PAREN_OPEN]        (
903  [WORD]              addr
903  [ARITH]             <<
903  [NUMBER]            1
903  [PAREN_CLOSE]       )
903  [ARITH]             |
903  [NUMBER]            1
903  [SEMICOLON]         ;
903  [NEWLINE]           
904  [WORD]              cpec
904  [ASSIGN]            =
904  [FUNC_CALL]         i2c_smbus_pec
904  [FPAREN_OPEN]       (
904  [NUMBER]            3
904  [COMMA]             ,
904  [WORD]              buf
904  [COMMA]             ,
904  [WORD]              data
904  [MEMBER]            ->
904  [WORD]              block
904  [FPAREN_CLOSE]      )
904  [SEMICOLON]         ;
904  [NEWLINE]           
905  [WORD]              rpec
905  [ASSIGN]            =
905  [WORD]              data
905  [MEMBER]            ->
905  [WORD]              block
905  [SQUARE_OPEN]       [
905  [WORD]              data
905  [MEMBER]            ->
905  [WORD]              block
905  [SQUARE_OPEN]       [
905  [NUMBER]            0
905  [SQUARE_CLOSE]      ]
905  [ARITH]             +
905  [NUMBER]            1
905  [SQUARE_CLOSE]      ]
905  [SEMICOLON]         ;
905  [NEWLINE]           
906  [BREAK]             break
906  [SEMICOLON]         ;
906  [NEWLINE]           
907  [CASE]              case
907  [WORD]              I2C_SMBUS_BLOCK_PROC_CALL_PEC
907  [CASE_COLON]        :
907  [NEWLINE]           
908  [WORD]              buf
908  [SQUARE_OPEN]       [
908  [NUMBER]            0
908  [SQUARE_CLOSE]      ]
908  [ASSIGN]            =
908  [PAREN_OPEN]        (
908  [WORD]              addr
908  [ARITH]             <<
908  [NUMBER]            1
908  [PAREN_CLOSE]       )
908  [ARITH]             |
908  [NUMBER]            1
908  [SEMICOLON]         ;
908  [NEWLINE]           
909  [WORD]              rpec
909  [ASSIGN]            =
909  [FUNC_CALL]         i2c_smbus_partial_pec
909  [FPAREN_OPEN]       (
909  [WORD]              partial
909  [COMMA]             ,
909  [NUMBER]            1
909  [COMMA]             ,
909  [NEWLINE]           
910  [WORD]              buf
910  [COMMA]             ,
910  [WORD]              data
910  [MEMBER]            ->
910  [WORD]              block
910  [FPAREN_CLOSE]      )
910  [SEMICOLON]         ;
910  [NEWLINE]           
911  [WORD]              cpec
911  [ASSIGN]            =
911  [WORD]              data
911  [MEMBER]            ->
911  [WORD]              block
911  [SQUARE_OPEN]       [
911  [WORD]              data
911  [MEMBER]            ->
911  [WORD]              block
911  [SQUARE_OPEN]       [
911  [NUMBER]            0
911  [SQUARE_CLOSE]      ]
911  [ARITH]             +
911  [NUMBER]            1
911  [SQUARE_CLOSE]      ]
911  [SEMICOLON]         ;
911  [NEWLINE]           
912  [BREAK]             break
912  [SEMICOLON]         ;
912  [NEWLINE]           
913  [CASE]              default
913  [CASE_COLON]        :
913  [NEWLINE]           
914  [WORD]              cpec
914  [ASSIGN]            =
914  [WORD]              rpec
914  [ASSIGN]            =
914  [NUMBER]            0
914  [SEMICOLON]         ;
914  [NEWLINE]           
915  [BREAK]             break
915  [SEMICOLON]         ;
915  [NEWLINE]           
916  [BRACE_CLOSE]       }
916  [COMMENT]           /* switch */
916  [NEWLINE]           
917  [IF]                if
917  [SPAREN_OPEN]       (
917  [WORD]              rpec
917  [COMPARE]           !=
917  [WORD]              cpec
917  [SPAREN_CLOSE]      )
917  [NEWLINE]           
917  [BRACE_OPEN]        {
917  [NEWLINE]           
918  [FUNC_CALL]         pr_debug
918  [FPAREN_OPEN]       (
918  [STRING]            "i2c-core: Bad PEC 0x%02x vs. 0x%02x\n"
918  [COMMA]             ,
918  [NEWLINE]           
919  [WORD]              rpec
919  [COMMA]             ,
919  [WORD]              cpec
919  [FPAREN_CLOSE]      )
919  [SEMICOLON]         ;
919  [NEWLINE]           
920  [RETURN]            return
920  [PAREN_OPEN]        (
920  [NEG]               -
920  [NUMBER]            1
920  [PAREN_CLOSE]       )
920  [SEMICOLON]         ;
920  [NEWLINE]           
921  [BRACE_CLOSE]       }
921  [NEWLINE]           
922  [RETURN]            return
922  [PAREN_OPEN]        (
922  [NUMBER]            0
922  [PAREN_CLOSE]       )
922  [SEMICOLON]         ;
922  [NEWLINE]           
923  [BRACE_CLOSE]       }
923  [COMMENT]           /* i2c_smbus_check_pec */
923  [NEWLINE]           
925  [TYPE]              s32
925  [FUNC_DEF]          i2c_smbus_write_quick
925  [FPAREN_OPEN]       (
925  [STRUCT]            struct
925  [TYPE]              i2c_client
925  [PTR_TYPE]          *
925  [WORD]              client
925  [COMMA]             ,
925  [TYPE]              u8
925  [WORD]              value
925  [FPAREN_CLOSE]      )
925  [NEWLINE]           
926  [BRACE_OPEN]        {
926  [NEWLINE]           
927  [RETURN]            return
927  [PAREN_OPEN]        (
927  [FUNC_CALL]         i2c_smbus_xfer
927  [FPAREN_OPEN]       (
927  [WORD]              client
927  [MEMBER]            ->
927  [WORD]              adapter
927  [COMMA]             ,
927  [WORD]              client
927  [MEMBER]            ->
927  [WORD]              addr
927  [COMMA]             ,
927  [WORD]              client
927  [MEMBER]            ->
927  [WORD]              flags
927  [COMMA]             ,
927  [NEWLINE]           
928  [WORD]              value
928  [COMMA]             ,
928  [NUMBER]            0
928  [COMMA]             ,
928  [WORD]              I2C_SMBUS_QUICK
928  [COMMA]             ,
928  [WORD]              NULL
928  [FPAREN_CLOSE]      )
928  [PAREN_CLOSE]       )
928  [SEMICOLON]         ;
928  [NEWLINE]           
929  [BRACE_CLOSE]       }
929  [NEWLINE]           
931  [TYPE]              s32
931  [FUNC_DEF]          i2c_smbus_read_byte
931  [FPAREN_OPEN]       (
931  [STRUCT]            struct
931  [TYPE]              i2c_client
931  [PTR_TYPE]          *
931  [WORD]              client
931  [FPAREN_CLOSE]      )
931  [NEWLINE]           
932  [BRACE_OPEN]        {
932  [NEWLINE]           
933  [UNION]             union
933  [TYPE]              i2c_smbus_data
933  [WORD]              data
933  [SEMICOLON]         ;
933  [NEWLINE]           
934  [IF]                if
934  [SPAREN_OPEN]       (
934  [FUNC_CALL]         i2c_smbus_xfer
934  [FPAREN_OPEN]       (
934  [WORD]              client
934  [MEMBER]            ->
934  [WORD]              adapter
934  [COMMA]             ,
934  [WORD]              client
934  [MEMBER]            ->
934  [WORD]              addr
934  [COMMA]             ,
934  [WORD]              client
934  [MEMBER]            ->
934  [WORD]              flags
934  [COMMA]             ,
934  [NEWLINE]           
935  [WORD]              I2C_SMBUS_READ
935  [COMMA]             ,
935  [NUMBER]            0
935  [COMMA]             ,
935  [WORD]              I2C_SMBUS_BYTE
935  [COMMA]             ,
935  [ADDR]              &
935  [WORD]              data
935  [FPAREN_CLOSE]      )
935  [SPAREN_CLOSE]      )
935  [NEWLINE]           
935  [BRACE_OPEN]        {
935  [NEWLINE]           
936  [RETURN]            return
936  [PAREN_OPEN]        (
936  [NEG]               -
936  [NUMBER]            1
936  [PAREN_CLOSE]       )
936  [SEMICOLON]         ;
936  [NEWLINE]           
936  [BRACE_CLOSE]       }
936  [NEWLINE]           
937  [ELSE]              else
937  [NEWLINE]           
937  [BRACE_OPEN]        {
937  [NEWLINE]           
938  [RETURN]            return
938  [PAREN_OPEN]        (
938  [NUMBER]            0x0FF
938  [ARITH]             &
938  [WORD]              data
938  [MEMBER]            .
938  [WORD]              byte
938  [PAREN_CLOSE]       )
938  [SEMICOLON]         ;
938  [NEWLINE]           
938  [BRACE_CLOSE]       }
938  [NEWLINE]           
939  [BRACE_CLOSE]       }
939  [NEWLINE]           
941  [TYPE]              s32
941  [FUNC_DEF]          i2c_smbus_write_byte
941  [FPAREN_OPEN]       (
941  [STRUCT]            struct
941  [TYPE]              i2c_client
941  [PTR_TYPE]          *
941  [WORD]              client
941  [COMMA]             ,
941  [TYPE]              u8
941  [WORD]              value
941  [FPAREN_CLOSE]      )
941  [NEWLINE]           
942  [BRACE_OPEN]        {
942  [NEWLINE]           
943  [UNION]             union
943  [TYPE]              i2c_smbus_data
943  [WORD]              data
943  [SEMICOLON]         ;
943  [COMMENT]           /* only for PEC */
943  [NEWLINE]           
944  [RETURN]            return
944  [PAREN_OPEN]        (
944  [FUNC_CALL]         i2c_smbus_xfer
944  [FPAREN_OPEN]       (
944  [WORD]              client
944  [MEMBER]            ->
944  [WORD]              adapter
944  [COMMA]             ,
944  [WORD]              client
944  [MEMBER]            ->
944  [WORD]              addr
944  [COMMA]             ,
944  [WORD]              client
944  [MEMBER]            ->
944  [WORD]              flags
944  [COMMA]             ,
944  [NEWLINE]           
945  [WORD]              I2C_SMBUS_WRITE
945  [COMMA]             ,
945  [WORD]              value
945  [COMMA]             ,
945  [WORD]              I2C_SMBUS_BYTE
945  [COMMA]             ,
945  [ADDR]              &
945  [WORD]              data
945  [FPAREN_CLOSE]      )
945  [PAREN_CLOSE]       )
945  [SEMICOLON]         ;
945  [NEWLINE]           
946  [BRACE_CLOSE]       }
946  [NEWLINE]           
948  [TYPE]              s32
948  [FUNC_DEF]          i2c_smbus_read_byte_data
948  [FPAREN_OPEN]       (
948  [STRUCT]            struct
948  [TYPE]              i2c_client
948  [PTR_TYPE]          *
948  [WORD]              client
948  [COMMA]             ,
948  [TYPE]              u8
948  [WORD]              command
948  [FPAREN_CLOSE]      )
948  [NEWLINE]           
949  [BRACE_OPEN]        {
949  [NEWLINE]           
950  [UNION]             union
950  [TYPE]              i2c_smbus_data
950  [WORD]              data
950  [SEMICOLON]         ;
950  [NEWLINE]           
951  [IF]                if
951  [SPAREN_OPEN]       (
951  [FUNC_CALL]         i2c_smbus_xfer
951  [FPAREN_OPEN]       (
951  [WORD]              client
951  [MEMBER]            ->
951  [WORD]              adapter
951  [COMMA]             ,
951  [WORD]              client
951  [MEMBER]            ->
951  [WORD]              addr
951  [COMMA]             ,
951  [WORD]              client
951  [MEMBER]            ->
951  [WORD]              flags
951  [COMMA]             ,
951  [NEWLINE]           
952  [WORD]              I2C_SMBUS_READ
952  [COMMA]             ,
952  [WORD]              command
952  [COMMA]             ,
952  [WORD]              I2C_SMBUS_BYTE_DATA
952  [COMMA]             ,
952  [ADDR]              &
952  [WORD]              data
952  [FPAREN_CLOSE]      )
952  [SPAREN_CLOSE]      )
952  [NEWLINE]           
952  [BRACE_OPEN]        {
952  [NEWLINE]           
953  [RETURN]            return
953  [PAREN_OPEN]        (
953  [NEG]               -
953  [NUMBER]            1
953  [PAREN_CLOSE]       )
953  [SEMICOLON]         ;
953  [NEWLINE]           
953  [BRACE_CLOSE]       }
953  [NEWLINE]           
954  [ELSE]              else
954  [NEWLINE]           
954  [BRACE_OPEN]        {
954  [NEWLINE]           
955  [RETURN]            return
955  [PAREN_OPEN]        (
955  [NUMBER]            0x0FF
955  [ARITH]             &
955  [WORD]              data
955  [MEMBER]            .
955  [WORD]              byte
955  [PAREN_CLOSE]       )
955  [SEMICOLON]         ;
955  [NEWLINE]           
955  [BRACE_CLOSE]       }
955  [NEWLINE]           
956  [BRACE_CLOSE]       }
956  [NEWLINE]           
958  [TYPE]              s32
958  [FUNC_DEF]          i2c_smbus_write_byte_data
958  [FPAREN_OPEN]       (
958  [STRUCT]            struct
958  [TYPE]              i2c_client
958  [PTR_TYPE]          *
958  [WORD]              client
958  [COMMA]             ,
958  [TYPE]              u8
958  [WORD]              command
958  [COMMA]             ,
958  [TYPE]              u8
958  [WORD]              value
958  [FPAREN_CLOSE]      )
958  [NEWLINE]           
959  [BRACE_OPEN]        {
959  [NEWLINE]           
960  [UNION]             union
960  [TYPE]              i2c_smbus_data
960  [WORD]              data
960  [SEMICOLON]         ;
960  [NEWLINE]           
961  [TYPE]              data
961  [MEMBER]            .
961  [WORD]              byte
961  [ASSIGN]            =
961  [WORD]              value
961  [SEMICOLON]         ;
961  [NEWLINE]           
962  [RETURN]            return
962  [PAREN_OPEN]        (
962  [FUNC_CALL]         i2c_smbus_xfer
962  [FPAREN_OPEN]       (
962  [WORD]              client
962  [MEMBER]            ->
962  [WORD]              adapter
962  [COMMA]             ,
962  [WORD]              client
962  [MEMBER]            ->
962  [WORD]              addr
962  [COMMA]             ,
962  [WORD]              client
962  [MEMBER]            ->
962  [WORD]              flags
962  [COMMA]             ,
962  [NEWLINE]           
963  [WORD]              I2C_SMBUS_WRITE
963  [COMMA]             ,
963  [WORD]              command
963  [COMMA]             ,
963  [NEWLINE]           
964  [WORD]              I2C_SMBUS_BYTE_DATA
964  [COMMA]             ,
964  [ADDR]              &
964  [WORD]              data
964  [FPAREN_CLOSE]      )
964  [PAREN_CLOSE]       )
964  [SEMICOLON]         ;
964  [NEWLINE]           
965  [BRACE_CLOSE]       }
965  [NEWLINE]           
967  [TYPE]              s32
967  [FUNC_DEF]          i2c_smbus_read_word_data
967  [FPAREN_OPEN]       (
967  [STRUCT]            struct
967  [TYPE]              i2c_client
967  [PTR_TYPE]          *
967  [WORD]              client
967  [COMMA]             ,
967  [TYPE]              u8
967  [WORD]              command
967  [FPAREN_CLOSE]      )
967  [NEWLINE]           
968  [BRACE_OPEN]        {
968  [NEWLINE]           
969  [UNION]             union
969  [TYPE]              i2c_smbus_data
969  [WORD]              data
969  [SEMICOLON]         ;
969  [NEWLINE]           
970  [IF]                if
970  [SPAREN_OPEN]       (
970  [FUNC_CALL]         i2c_smbus_xfer
970  [FPAREN_OPEN]       (
970  [WORD]              client
970  [MEMBER]            ->
970  [WORD]              adapter
970  [COMMA]             ,
970  [WORD]              client
970  [MEMBER]            ->
970  [WORD]              addr
970  [COMMA]             ,
970  [WORD]              client
970  [MEMBER]            ->
970  [WORD]              flags
970  [COMMA]             ,
970  [NEWLINE]           
971  [WORD]              I2C_SMBUS_READ
971  [COMMA]             ,
971  [WORD]              command
971  [COMMA]             ,
971  [WORD]              I2C_SMBUS_WORD_DATA
971  [COMMA]             ,
971  [ADDR]              &
971  [WORD]              data
971  [FPAREN_CLOSE]      )
971  [SPAREN_CLOSE]      )
971  [NEWLINE]           
971  [BRACE_OPEN]        {
971  [NEWLINE]           
972  [RETURN]            return
972  [PAREN_OPEN]        (
972  [NEG]               -
972  [NUMBER]            1
972  [PAREN_CLOSE]       )
972  [SEMICOLON]         ;
972  [NEWLINE]           
972  [BRACE_CLOSE]       }
972  [NEWLINE]           
973  [ELSE]              else
973  [NEWLINE]           
973  [BRACE_OPEN]        {
973  [NEWLINE]           
974  [RETURN]            return
974  [PAREN_OPEN]        (
974  [NUMBER]            0x0FFFF
974  [ARITH]             &
974  [WORD]              data
974  [MEMBER]            .
974  [WORD]              word
974  [PAREN_CLOSE]       )
974  [SEMICOLON]         ;
974  [NEWLINE]           
974  [BRACE_CLOSE]       }
974  [NEWLINE]           
975  [BRACE_CLOSE]       }
975  [NEWLINE]           
977  [TYPE]              s32
977  [FUNC_DEF]          i2c_smbus_write_word_data
977  [FPAREN_OPEN]       (
977  [STRUCT]            struct
977  [TYPE]              i2c_client
977  [PTR_TYPE]          *
977  [WORD]              client
977  [COMMA]             ,
977  [TYPE]              u8
977  [WORD]              command
977  [COMMA]             ,
977  [TYPE]              u16
977  [WORD]              value
977  [FPAREN_CLOSE]      )
977  [NEWLINE]           
978  [BRACE_OPEN]        {
978  [NEWLINE]           
979  [UNION]             union
979  [TYPE]              i2c_smbus_data
979  [WORD]              data
979  [SEMICOLON]         ;
979  [NEWLINE]           
980  [TYPE]              data
980  [MEMBER]            .
980  [WORD]              word
980  [ASSIGN]            =
980  [WORD]              value
980  [SEMICOLON]         ;
980  [NEWLINE]           
981  [RETURN]            return
981  [PAREN_OPEN]        (
981  [FUNC_CALL]         i2c_smbus_xfer
981  [FPAREN_OPEN]       (
981  [WORD]              client
981  [MEMBER]            ->
981  [WORD]              adapter
981  [COMMA]             ,
981  [WORD]              client
981  [MEMBER]            ->
981  [WORD]              addr
981  [COMMA]             ,
981  [WORD]              client
981  [MEMBER]            ->
981  [WORD]              flags
981  [COMMA]             ,
981  [NEWLINE]           
982  [WORD]              I2C_SMBUS_WRITE
982  [COMMA]             ,
982  [WORD]              command
982  [COMMA]             ,
982  [NEWLINE]           
983  [WORD]              I2C_SMBUS_WORD_DATA
983  [COMMA]             ,
983  [ADDR]              &
983  [WORD]              data
983  [FPAREN_CLOSE]      )
983  [PAREN_CLOSE]       )
983  [SEMICOLON]         ;
983  [NEWLINE]           
984  [BRACE_CLOSE]       }
984  [NEWLINE]           
986  [TYPE]              s32
986  [FUNC_DEF]          i2c_smbus_write_block_data
986  [FPAREN_OPEN]       (
986  [STRUCT]            struct
986  [TYPE]              i2c_client
986  [PTR_TYPE]          *
986  [WORD]              client
986  [COMMA]             ,
986  [TYPE]              u8
986  [WORD]              command
986  [COMMA]             ,
986  [NEWLINE]           
987  [TYPE]              u8
987  [WORD]              length
987  [COMMA]             ,
987  [TYPE]              u8
987  [PTR_TYPE]          *
987  [WORD]              values
987  [FPAREN_CLOSE]      )
987  [NEWLINE]           
988  [BRACE_OPEN]        {
988  [NEWLINE]           
989  [UNION]             union
989  [TYPE]              i2c_smbus_data
989  [WORD]              data
989  [SEMICOLON]         ;
989  [NEWLINE]           
990  [TYPE]              int
990  [WORD]              i
990  [SEMICOLON]         ;
990  [NEWLINE]           
991  [IF]                if
991  [SPAREN_OPEN]       (
991  [WORD]              length
991  [COMPARE]           >
991  [WORD]              I2C_SMBUS_BLOCK_MAX
991  [SPAREN_CLOSE]      )
991  [NEWLINE]           
991  [BRACE_OPEN]        {
991  [NEWLINE]           
992  [WORD]              length
992  [ASSIGN]            =
992  [WORD]              I2C_SMBUS_BLOCK_MAX
992  [SEMICOLON]         ;
992  [NEWLINE]           
992  [BRACE_CLOSE]       }
992  [NEWLINE]           
993  [FOR]               for
993  [SPAREN_OPEN]       (
993  [WORD]              i
993  [ASSIGN]            =
993  [NUMBER]            1
993  [SEMICOLON]         ;
993  [WORD]              i
993  [COMPARE]           <=
993  [WORD]              length
993  [SEMICOLON]         ;
993  [WORD]              i
993  [INCDEC_AFTER]      ++
993  [SPAREN_CLOSE]      )
993  [NEWLINE]           
993  [BRACE_OPEN]        {
993  [NEWLINE]           
994  [TYPE]              data
994  [MEMBER]            .
994  [WORD]              block
994  [SQUARE_OPEN]       [
994  [WORD]              i
994  [SQUARE_CLOSE]      ]
994  [ASSIGN]            =
994  [WORD]              values
994  [SQUARE_OPEN]       [
994  [WORD]              i
994  [ARITH]             -
994  [NUMBER]            1
994  [SQUARE_CLOSE]      ]
994  [SEMICOLON]         ;
994  [NEWLINE]           
994  [BRACE_CLOSE]       }
994  [NEWLINE]           
995  [TYPE]              data
995  [MEMBER]            .
995  [WORD]              block
995  [SQUARE_OPEN]       [
995  [NUMBER]            0
995  [SQUARE_CLOSE]      ]
995  [ASSIGN]            =
995  [WORD]              length
995  [SEMICOLON]         ;
995  [NEWLINE]           
996  [RETURN]            return
996  [PAREN_OPEN]        (
996  [FUNC_CALL]         i2c_smbus_xfer
996  [FPAREN_OPEN]       (
996  [WORD]              client
996  [MEMBER]            ->
996  [WORD]              adapter
996  [COMMA]             ,
996  [WORD]              client
996  [MEMBER]            ->
996  [WORD]              addr
996  [COMMA]             ,
996  [WORD]              client
996  [MEMBER]            ->
996  [WORD]              flags
996  [COMMA]             ,
996  [NEWLINE]           
997  [WORD]              I2C_SMBUS_WRITE
997  [COMMA]             ,
997  [WORD]              command
997  [COMMA]             ,
997  [NEWLINE]           
998  [WORD]              I2C_SMBUS_BLOCK_DATA
998  [COMMA]             ,
998  [ADDR]              &
998  [WORD]              data
998  [FPAREN_CLOSE]      )
998  [PAREN_CLOSE]       )
998  [SEMICOLON]         ;
998  [NEWLINE]           
999  [BRACE_CLOSE]       }
999  [NEWLINE]           
1001 [COMMENT]           /* Returns the number of read bytes */
1001 [NEWLINE]           
1002 [TYPE]              s32
1002 [FUNC_DEF]          i2c_smbus_read_i2c_block_data
1002 [FPAREN_OPEN]       (
1002 [STRUCT]            struct
1002 [TYPE]              i2c_client
1002 [PTR_TYPE]          *
1002 [WORD]              client
1002 [COMMA]             ,
1002 [TYPE]              u8
1002 [WORD]              command
1002 [COMMA]             ,
1002 [TYPE]              u8
1002 [PTR_TYPE]          *
1002 [WORD]              values
1002 [FPAREN_CLOSE]      )
1002 [NEWLINE]           
1003 [BRACE_OPEN]        {
1003 [NEWLINE]           
1004 [UNION]             union
1004 [TYPE]              i2c_smbus_data
1004 [WORD]              data
1004 [SEMICOLON]         ;
1004 [NEWLINE]           
1005 [TYPE]              int
1005 [WORD]              i
1005 [SEMICOLON]         ;
1005 [NEWLINE]           
1006 [IF]                if
1006 [SPAREN_OPEN]       (
1006 [FUNC_CALL]         i2c_smbus_xfer
1006 [FPAREN_OPEN]       (
1006 [WORD]              client
1006 [MEMBER]            ->
1006 [WORD]              adapter
1006 [COMMA]             ,
1006 [WORD]              client
1006 [MEMBER]            ->
1006 [WORD]              addr
1006 [COMMA]             ,
1006 [WORD]              client
1006 [MEMBER]            ->
1006 [WORD]              flags
1006 [COMMA]             ,
1006 [NEWLINE]           
1007 [WORD]              I2C_SMBUS_READ
1007 [COMMA]             ,
1007 [WORD]              command
1007 [COMMA]             ,
1007 [NEWLINE]           
1008 [WORD]              I2C_SMBUS_I2C_BLOCK_DATA
1008 [COMMA]             ,
1008 [ADDR]              &
1008 [WORD]              data
1008 [FPAREN_CLOSE]      )
1008 [SPAREN_CLOSE]      )
1008 [NEWLINE]           
1008 [BRACE_OPEN]        {
1008 [NEWLINE]           
1009 [RETURN]            return
1009 [PAREN_OPEN]        (
1009 [NEG]               -
1009 [NUMBER]            1
1009 [PAREN_CLOSE]       )
1009 [SEMICOLON]         ;
1009 [NEWLINE]           
1009 [BRACE_CLOSE]       }
1009 [NEWLINE]           
1010 [ELSE]              else
1010 [NEWLINE]           
1010 [BRACE_OPEN]        {
1010 [NEWLINE]           
1011 [FOR]               for
1011 [SPAREN_OPEN]       (
1011 [WORD]              i
1011 [ASSIGN]            =
1011 [NUMBER]            1
1011 [SEMICOLON]         ;
1011 [WORD]              i
1011 [COMPARE]           <=
1011 [WORD]              data
1011 [MEMBER]            .
1011 [WORD]              block
1011 [SQUARE_OPEN]       [
1011 [NUMBER]            0
1011 [SQUARE_CLOSE]      ]
1011 [SEMICOLON]         ;
1011 [WORD]              i
1011 [INCDEC_AFTER]      ++
1011 [SPAREN_CLOSE]      )
1011 [NEWLINE]           
1011 [BRACE_OPEN]        {
1011 [NEWLINE]           
1012 [WORD]              values
1012 [SQUARE_OPEN]       [
1012 [WORD]              i
1012 [ARITH]             -
1012 [NUMBER]            1
1012 [SQUARE_CLOSE]      ]
1012 [ASSIGN]            =
1012 [WORD]              data
1012 [MEMBER]            .
1012 [WORD]              block
1012 [SQUARE_OPEN]       [
1012 [WORD]              i
1012 [SQUARE_CLOSE]      ]
1012 [SEMICOLON]         ;
1012 [NEWLINE]           
1012 [BRACE_CLOSE]       }
1012 [NEWLINE]           
1013 [RETURN]            return
1013 [PAREN_OPEN]        (
1013 [WORD]              data
1013 [MEMBER]            .
1013 [WORD]              block
1013 [SQUARE_OPEN]       [
1013 [NUMBER]            0
1013 [SQUARE_CLOSE]      ]
1013 [PAREN_CLOSE]       )
1013 [SEMICOLON]         ;
1013 [NEWLINE]           
1014 [BRACE_CLOSE]       }
1014 [NEWLINE]           
1015 [BRACE_CLOSE]       }
1015 [NEWLINE]           
1017 [COMMENT_MULTI]     /* Simulate a SMBus command using the i2c protocol␤   No checking of parameters is done!  */
1018 [NEWLINE]           
1019 [QUALIFIER]         static
1019 [TYPE]              s32
1019 [FUNC_DEF]          i2c_smbus_xfer_emulated
1019 [FPAREN_OPEN]       (
1019 [STRUCT]            struct
1019 [TYPE]              i2c_adapter
1019 [PTR_TYPE]          *
1019 [WORD]              adapter
1019 [COMMA]             ,
1019 [TYPE]              u16
1019 [WORD]              addr
1019 [COMMA]             ,
1019 [NEWLINE]           
1020 [TYPE]              unsigned
1020 [TYPE]              short
1020 [WORD]              flags
1020 [COMMA]             ,
1020 [NEWLINE]           
1021 [TYPE]              char
1021 [WORD]              read_write
1021 [COMMA]             ,
1021 [TYPE]              u8
1021 [WORD]              command
1021 [COMMA]             ,
1021 [TYPE]              int
1021 [WORD]              size
1021 [COMMA]             ,
1021 [NEWLINE]           
1022 [UNION]             union
1022 [TYPE]              i2c_smbus_data
1022 [PTR_TYPE]          *
1022 [WORD]              data
1022 [FPAREN_CLOSE]      )
1022 [NEWLINE]           
1023 [BRACE_OPEN]        {
1023 [NEWLINE]           
1024 [COMMENT_MULTI]     /* So we need to generate a series of msgs. In the case of writing, we␤	  need to use only one message; when reading, we need two. We initialize␤	  most things with sane defaults, to keep the code below somewhat␤	  simpler. */
1027 [NEWLINE]           
1028 [TYPE]              unsigned
1028 [TYPE]              char
1028 [WORD]              msgbuf0
1028 [SQUARE_OPEN]       [
1028 [NUMBER]            34
1028 [SQUARE_CLOSE]      ]
1028 [SEMICOLON]         ;
1028 [NEWLINE]           
1029 [TYPE]              unsigned
1029 [TYPE]              char
1029 [WORD]              msgbuf1
1029 [SQUARE_OPEN]       [
1029 [NUMBER]            34
1029 [SQUARE_CLOSE]      ]
1029 [SEMICOLON]         ;
1029 [NEWLINE]           
1030 [TYPE]              int
1030 [WORD]              num
1030 [ASSIGN]            =
1030 [WORD]              read_write
1030 [COMPARE]           ==
1030 [WORD]              I2C_SMBUS_READ
1030 [QUESTION]          ?
1030 [NUMBER]            2
1030 [COND_COLON]        :
1030 [NUMBER]            1
1030 [SEMICOLON]         ;
1030 [NEWLINE]           
1031 [STRUCT]            struct
1031 [TYPE]              i2c_msg
1031 [WORD]              msg
1031 [SQUARE_OPEN]       [
1031 [NUMBER]            2
1031 [SQUARE_CLOSE]      ]
1031 [ASSIGN]            =
1031 [BRACE_OPEN]        {
1031 [BRACE_OPEN]        {
1031 [WORD]              addr
1031 [COMMA]             ,
1031 [WORD]              flags
1031 [COMMA]             ,
1031 [NUMBER]            1
1031 [COMMA]             ,
1031 [WORD]              msgbuf0
1031 [BRACE_CLOSE]       }
1031 [COMMA]             ,
1031 [NEWLINE]           
1032 [BRACE_OPEN]        {
1032 [WORD]              addr
1032 [COMMA]             ,
1032 [WORD]              flags
1032 [ARITH]             |
1032 [WORD]              I2C_M_RD
1032 [COMMA]             ,
1032 [NUMBER]            0
1032 [COMMA]             ,
1032 [WORD]              msgbuf1
1032 [BRACE_CLOSE]       }
1033 [BRACE_CLOSE]       }
1033 [SEMICOLON]         ;
1033 [NEWLINE]           
1034 [TYPE]              int
1034 [WORD]              i
1034 [SEMICOLON]         ;
1034 [NEWLINE]           
1036 [WORD]              msgbuf0
1036 [SQUARE_OPEN]       [
1036 [NUMBER]            0
1036 [SQUARE_CLOSE]      ]
1036 [ASSIGN]            =
1036 [WORD]              command
1036 [SEMICOLON]         ;
1036 [NEWLINE]           
1037 [SWITCH]            switch
1037 [SPAREN_OPEN]       (
1037 [WORD]              size
1037 [SPAREN_CLOSE]      )
1037 [NEWLINE]           
1037 [BRACE_OPEN]        {
1037 [NEWLINE]           
1038 [CASE]              case
1038 [WORD]              I2C_SMBUS_QUICK
1038 [CASE_COLON]        :
1038 [NEWLINE]           
1039 [WORD]              msg
1039 [SQUARE_OPEN]       [
1039 [NUMBER]            0
1039 [SQUARE_CLOSE]      ]
1039 [MEMBER]            .
1039 [WORD]              len
1039 [ASSIGN]            =
1039 [NUMBER]            0
1039 [SEMICOLON]         ;
1039 [NEWLINE]           
1040 [COMMENT]           /* Special case: The read/write field is used as data */
1040 [NEWLINE]           
1041 [WORD]              msg
1041 [SQUARE_OPEN]       [
1041 [NUMBER]            0
1041 [SQUARE_CLOSE]      ]
1041 [MEMBER]            .
1041 [WORD]              flags
1041 [ASSIGN]            =
1041 [WORD]              flags
1041 [ARITH]             |
1041 [PAREN_OPEN]        (
1041 [WORD]              read_write
1041 [COMPARE]           ==
1041 [WORD]              I2C_SMBUS_READ
1041 [PAREN_CLOSE]       )
1041 [QUESTION]          ?
1041 [WORD]              I2C_M_RD
1041 [COND_COLON]        :
1041 [NUMBER]            0
1041 [SEMICOLON]         ;
1041 [NEWLINE]           
1042 [WORD]              num
1042 [ASSIGN]            =
1042 [NUMBER]            1
1042 [SEMICOLON]         ;
1042 [NEWLINE]           
1043 [BREAK]             break
1043 [SEMICOLON]         ;
1043 [NEWLINE]           
1044 [CASE]              case
1044 [WORD]              I2C_SMBUS_BYTE
1044 [CASE_COLON]        :
1044 [NEWLINE]           
1045 [IF]                if
1045 [SPAREN_OPEN]       (
1045 [WORD]              read_write
1045 [COMPARE]           ==
1045 [WORD]              I2C_SMBUS_READ
1045 [SPAREN_CLOSE]      )
1045 [NEWLINE]           
1045 [BRACE_OPEN]        {
1045 [NEWLINE]           
1046 [COMMENT]           /* Special case: only a read! */
1046 [NEWLINE]           
1047 [WORD]              msg
1047 [SQUARE_OPEN]       [
1047 [NUMBER]            0
1047 [SQUARE_CLOSE]      ]
1047 [MEMBER]            .
1047 [WORD]              flags
1047 [ASSIGN]            =
1047 [WORD]              I2C_M_RD
1047 [ARITH]             |
1047 [WORD]              flags
1047 [SEMICOLON]         ;
1047 [NEWLINE]           
1048 [WORD]              num
1048 [ASSIGN]            =
1048 [NUMBER]            1
1048 [SEMICOLON]         ;
1048 [NEWLINE]           
1049 [BRACE_CLOSE]       }
1049 [NEWLINE]           
1050 [BREAK]             break
1050 [SEMICOLON]         ;
1050 [NEWLINE]           
1051 [CASE]              case
1051 [WORD]              I2C_SMBUS_BYTE_DATA
1051 [CASE_COLON]        :
1051 [NEWLINE]           
1052 [IF]                if
1052 [SPAREN_OPEN]       (
1052 [WORD]              read_write
1052 [COMPARE]           ==
1052 [WORD]              I2C_SMBUS_READ
1052 [SPAREN_CLOSE]      )
1052 [NEWLINE]           
1052 [BRACE_OPEN]        {
1052 [NEWLINE]           
1053 [WORD]              msg
1053 [SQUARE_OPEN]       [
1053 [NUMBER]            1
1053 [SQUARE_CLOSE]      ]
1053 [MEMBER]            .
1053 [WORD]              len
1053 [ASSIGN]            =
1053 [NUMBER]            1
1053 [SEMICOLON]         ;
1053 [NEWLINE]           
1053 [BRACE_CLOSE]       }
1053 [NEWLINE]           
1054 [ELSE]              else
1054 [NEWLINE]           
1054 [BRACE_OPEN]        {
1054 [NEWLINE]           
1055 [WORD]              msg
1055 [SQUARE_OPEN]       [
1055 [NUMBER]            0
1055 [SQUARE_CLOSE]      ]
1055 [MEMBER]            .
1055 [WORD]              len
1055 [ASSIGN]            =
1055 [NUMBER]            2
1055 [SEMICOLON]         ;
1055 [NEWLINE]           
1056 [WORD]              msgbuf0
1056 [SQUARE_OPEN]       [
1056 [NUMBER]            1
1056 [SQUARE_CLOSE]      ]
1056 [ASSIGN]            =
1056 [WORD]              data
1056 [MEMBER]            ->
1056 [WORD]              byte
1056 [SEMICOLON]         ;
1056 [NEWLINE]           
1057 [BRACE_CLOSE]       }
1057 [NEWLINE]           
1058 [BREAK]             break
1058 [SEMICOLON]         ;
1058 [NEWLINE]           
1059 [CASE]              case
1059 [WORD]              I2C_SMBUS_WORD_DATA
1059 [CASE_COLON]        :
1059 [NEWLINE]           
1060 [IF]                if
1060 [SPAREN_OPEN]       (
1060 [WORD]              read_write
1060 [COMPARE]           ==
1060 [WORD]              I2C_SMBUS_READ
1060 [SPAREN_CLOSE]      )
1060 [NEWLINE]           
1060 [BRACE_OPEN]        {
1060 [NEWLINE]           
1061 [WORD]              msg
1061 [SQUARE_OPEN]       [
1061 [NUMBER]            1
1061 [SQUARE_CLOSE]      ]
1061 [MEMBER]            .
1061 [WORD]              len
1061 [ASSIGN]            =
1061 [NUMBER]            2
1061 [SEMICOLON]         ;
1061 [NEWLINE]           
1061 [BRACE_CLOSE]       }
1061 [NEWLINE]           
1062 [ELSE]              else
1062 [NEWLINE]           
1062 [BRACE_OPEN]        {
1062 [NEWLINE]           
1063 [WORD]              msg
1063 [SQUARE_OPEN]       [
1063 [NUMBER]            0
1063 [SQUARE_CLOSE]      ]
1063 [MEMBER]            .
1063 [WORD]              len
1063 [ASSIGN]            =
1063 [NUMBER]            3
1063 [SEMICOLON]         ;
1063 [NEWLINE]           
1064 [WORD]              msgbuf0
1064 [SQUARE_OPEN]       [
1064 [NUMBER]            1
1064 [SQUARE_CLOSE]      ]
1064 [ASSIGN]            =
1064 [WORD]              data
1064 [MEMBER]            ->
1064 [WORD]              word
1064 [ARITH]             &
1064 [NUMBER]            0xff
1064 [SEMICOLON]         ;
1064 [NEWLINE]           
1065 [WORD]              msgbuf0
1065 [SQUARE_OPEN]       [
1065 [NUMBER]            2
1065 [SQUARE_CLOSE]      ]
1065 [ASSIGN]            =
1065 [PAREN_OPEN]        (
1065 [WORD]              data
1065 [MEMBER]            ->
1065 [WORD]              word
1065 [ARITH]             >>
1065 [NUMBER]            8
1065 [PAREN_CLOSE]       )
1065 [ARITH]             &
1065 [NUMBER]            0xff
1065 [SEMICOLON]         ;
1065 [NEWLINE]           
1066 [BRACE_CLOSE]       }
1066 [NEWLINE]           
1067 [BREAK]             break
1067 [SEMICOLON]         ;
1067 [NEWLINE]           
1068 [CASE]              case
1068 [WORD]              I2C_SMBUS_PROC_CALL
1068 [CASE_COLON]        :
1068 [NEWLINE]           
1069 [WORD]              num
1069 [ASSIGN]            =
1069 [NUMBER]            2
1069 [SEMICOLON]         ;
1069 [COMMENT]           /* Special case */
1069 [NEWLINE]           
1070 [WORD]              read_write
1070 [ASSIGN]            =
1070 [WORD]              I2C_SMBUS_READ
1070 [SEMICOLON]         ;
1070 [NEWLINE]           
1071 [WORD]              msg
1071 [SQUARE_OPEN]       [
1071 [NUMBER]            0
1071 [SQUARE_CLOSE]      ]
1071 [MEMBER]            .
1071 [WORD]              len
1071 [ASSIGN]            =
1071 [NUMBER]            3
1071 [SEMICOLON]         ;
1071 [NEWLINE]           
1072 [WORD]              msg
1072 [SQUARE_OPEN]       [
1072 [NUMBER]            1
1072 [SQUARE_CLOSE]      ]
1072 [MEMBER]            .
1072 [WORD]              len
1072 [ASSIGN]            =
1072 [NUMBER]            2
1072 [SEMICOLON]         ;
1072 [NEWLINE]           
1073 [WORD]              msgbuf0
1073 [SQUARE_OPEN]       [
1073 [NUMBER]            1
1073 [SQUARE_CLOSE]      ]
1073 [ASSIGN]            =
1073 [WORD]              data
1073 [MEMBER]            ->
1073 [WORD]              word
1073 [ARITH]             &
1073 [NUMBER]            0xff
1073 [SEMICOLON]         ;
1073 [NEWLINE]           
1074 [WORD]              msgbuf0
1074 [SQUARE_OPEN]       [
1074 [NUMBER]            2
1074 [SQUARE_CLOSE]      ]
1074 [ASSIGN]            =
1074 [PAREN_OPEN]        (
1074 [WORD]              data
1074 [MEMBER]            ->
1074 [WORD]              word
1074 [ARITH]             >>
1074 [NUMBER]            8
1074 [PAREN_CLOSE]       )
1074 [ARITH]             &
1074 [NUMBER]            0xff
1074 [SEMICOLON]         ;
1074 [NEWLINE]           
1075 [BREAK]             break
1075 [SEMICOLON]         ;
1075 [NEWLINE]           
1076 [CASE]              case
1076 [WORD]              I2C_SMBUS_BLOCK_DATA
1076 [CASE_COLON]        :
1076 [NEWLINE]           
1077 [CASE]              case
1077 [WORD]              I2C_SMBUS_BLOCK_DATA_PEC
1077 [CASE_COLON]        :
1077 [NEWLINE]           
1078 [IF]                if
1078 [SPAREN_OPEN]       (
1078 [WORD]              read_write
1078 [COMPARE]           ==
1078 [WORD]              I2C_SMBUS_READ
1078 [SPAREN_CLOSE]      )
1078 [NEWLINE]           
1078 [BRACE_OPEN]        {
1078 [NEWLINE]           
1079 [FUNC_CALL]         dev_err
1079 [FPAREN_OPEN]       (
1079 [ADDR]              &
1079 [WORD]              adapter
1079 [MEMBER]            ->
1079 [WORD]              dev
1079 [COMMA]             ,
1079 [STRING]            "Block read not supported "
1079 [NEWLINE]           
1080 [STRING]            "under I2C emulation!\n"
1080 [FPAREN_CLOSE]      )
1080 [SEMICOLON]         ;
1080 [NEWLINE]           
1081 [RETURN]            return
1081 [PAREN_OPEN]        (
1081 [NEG]               -
1081 [NUMBER]            1
1081 [PAREN_CLOSE]       )
1081 [SEMICOLON]         ;
1081 [NEWLINE]           
1082 [BRACE_CLOSE]       }
1082 [NEWLINE]           
1082 [ELSE]              else
1082 [NEWLINE]           
1082 [BRACE_OPEN]        {
1082 [NEWLINE]           
1083 [WORD]              msg
1083 [SQUARE_OPEN]       [
1083 [NUMBER]            0
1083 [SQUARE_CLOSE]      ]
1083 [MEMBER]            .
1083 [WORD]              len
1083 [ASSIGN]            =
1083 [WORD]              data
1083 [MEMBER]            ->
1083 [WORD]              block
1083 [SQUARE_OPEN]       [
1083 [NUMBER]            0
1083 [SQUARE_CLOSE]      ]
1083 [ARITH]             +
1083 [NUMBER]            2
1083 [SEMICOLON]         ;
1083 [NEWLINE]           
1084 [IF]                if
1084 [SPAREN_OPEN]       (
1084 [WORD]              msg
1084 [SQUARE_OPEN]       [
1084 [NUMBER]            0
1084 [SQUARE_CLOSE]      ]
1084 [MEMBER]            .
1084 [WORD]              len
1084 [COMPARE]           >
1084 [WORD]              I2C_SMBUS_BLOCK_MAX
1084 [ARITH]             +
1084 [NUMBER]            2
1084 [SPAREN_CLOSE]      )
1084 [NEWLINE]           
1084 [BRACE_OPEN]        {
1084 [NEWLINE]           
1085 [FUNC_CALL]         dev_err
1085 [FPAREN_OPEN]       (
1085 [ADDR]              &
1085 [WORD]              adapter
1085 [MEMBER]            ->
1085 [WORD]              dev
1085 [COMMA]             ,
1085 [STRING]            "smbus_access called with "
1085 [NEWLINE]           
1086 [STRING]            "invalid block write size (%d)\n"
1086 [COMMA]             ,
1086 [NEWLINE]           
1087 [WORD]              data
1087 [MEMBER]            ->
1087 [WORD]              block
1087 [SQUARE_OPEN]       [
1087 [NUMBER]            0
1087 [SQUARE_CLOSE]      ]
1087 [FPAREN_CLOSE]      )
1087 [SEMICOLON]         ;
1087 [NEWLINE]           
1088 [RETURN]            return
1088 [PAREN_OPEN]        (
1088 [NEG]               -
1088 [NUMBER]            1
1088 [PAREN_CLOSE]       )
1088 [SEMICOLON]         ;
1088 [NEWLINE]           
1089 [BRACE_CLOSE]       }
1089 [NEWLINE]           
1090 [IF]                if
1090 [SPAREN_OPEN]       (
1090 [WORD]              size
1090 [COMPARE]           ==
1090 [WORD]              I2C_SMBUS_BLOCK_DATA_PEC
1090 [SPAREN_CLOSE]      )
1090 [NEWLINE]           
1090 [BRACE_OPEN]        {
1090 [NEWLINE]           
1091 [PAREN_OPEN]        (
1091 [WORD]              msg
1091 [SQUARE_OPEN]       [
1091 [NUMBER]            0
1091 [SQUARE_CLOSE]      ]
1091 [MEMBER]            .
1091 [WORD]              len
1091 [PAREN_CLOSE]       )
1091 [INCDEC_AFTER]      ++
1091 [SEMICOLON]         ;
1091 [NEWLINE]           
1091 [BRACE_CLOSE]       }
1091 [NEWLINE]           
1092 [FOR]               for
1092 [SPAREN_OPEN]       (
1092 [WORD]              i
1092 [ASSIGN]            =
1092 [NUMBER]            1
1092 [SEMICOLON]         ;
1092 [WORD]              i
1092 [COMPARE]           <=
1092 [WORD]              msg
1092 [SQUARE_OPEN]       [
1092 [NUMBER]            0
1092 [SQUARE_CLOSE]      ]
1092 [MEMBER]            .
1092 [WORD]              len
1092 [SEMICOLON]         ;
1092 [WORD]              i
1092 [INCDEC_AFTER]      ++
1092 [SPAREN_CLOSE]      )
1092 [NEWLINE]           
1092 [BRACE_OPEN]        {
1092 [NEWLINE]           
1093 [WORD]              msgbuf0
1093 [SQUARE_OPEN]       [
1093 [WORD]              i
1093 [SQUARE_CLOSE]      ]
1093 [ASSIGN]            =
1093 [WORD]              data
1093 [MEMBER]            ->
1093 [WORD]              block
1093 [SQUARE_OPEN]       [
1093 [WORD]              i
1093 [ARITH]             -
1093 [NUMBER]            1
1093 [SQUARE_CLOSE]      ]
1093 [SEMICOLON]         ;
1093 [NEWLINE]           
1093 [BRACE_CLOSE]       }
1093 [NEWLINE]           
1094 [BRACE_CLOSE]       }
1094 [NEWLINE]           
1095 [BREAK]             break
1095 [SEMICOLON]         ;
1095 [NEWLINE]           
1096 [CASE]              case
1096 [WORD]              I2C_SMBUS_BLOCK_PROC_CALL
1096 [CASE_COLON]        :
1096 [NEWLINE]           
1097 [CASE]              case
1097 [WORD]              I2C_SMBUS_BLOCK_PROC_CALL_PEC
1097 [CASE_COLON]        :
1097 [NEWLINE]           
1098 [FUNC_CALL]         dev_dbg
1098 [FPAREN_OPEN]       (
1098 [ADDR]              &
1098 [WORD]              adapter
1098 [MEMBER]            ->
1098 [WORD]              dev
1098 [COMMA]             ,
1098 [STRING]            "Block process call not supported "
1098 [NEWLINE]           
1099 [STRING]            "under I2C emulation!\n"
1099 [FPAREN_CLOSE]      )
1099 [SEMICOLON]         ;
1099 [NEWLINE]           
1100 [RETURN]            return
1100 [PAREN_OPEN]        (
1100 [NEG]               -
1100 [NUMBER]            1
1100 [PAREN_CLOSE]       )
1100 [SEMICOLON]         ;
1100 [NEWLINE]           
1101 [CASE]              case
1101 [WORD]              I2C_SMBUS_I2C_BLOCK_DATA
1101 [CASE_COLON]        :
1101 [NEWLINE]           
1102 [IF]                if
1102 [SPAREN_OPEN]       (
1102 [WORD]              read_write
1102 [COMPARE]           ==
1102 [WORD]              I2C_SMBUS_READ
1102 [SPAREN_CLOSE]      )
1102 [NEWLINE]           
1102 [BRACE_OPEN]        {
1102 [NEWLINE]           
1103 [WORD]              msg
1103 [SQUARE_OPEN]       [
1103 [NUMBER]            1
1103 [SQUARE_CLOSE]      ]
1103 [MEMBER]            .
1103 [WORD]              len
1103 [ASSIGN]            =
1103 [WORD]              I2C_SMBUS_I2C_BLOCK_MAX
1103 [SEMICOLON]         ;
1103 [NEWLINE]           
1104 [BRACE_CLOSE]       }
1104 [NEWLINE]           
1104 [ELSE]              else
1104 [NEWLINE]           
1104 [BRACE_OPEN]        {
1104 [NEWLINE]           
1105 [WORD]              msg
1105 [SQUARE_OPEN]       [
1105 [NUMBER]            0
1105 [SQUARE_CLOSE]      ]
1105 [MEMBER]            .
1105 [WORD]              len
1105 [ASSIGN]            =
1105 [WORD]              data
1105 [MEMBER]            ->
1105 [WORD]              block
1105 [SQUARE_OPEN]       [
1105 [NUMBER]            0
1105 [SQUARE_CLOSE]      ]
1105 [ARITH]             +
1105 [NUMBER]            1
1105 [SEMICOLON]         ;
1105 [NEWLINE]           
1106 [IF]                if
1106 [SPAREN_OPEN]       (
1106 [WORD]              msg
1106 [SQUARE_OPEN]       [
1106 [NUMBER]            0
1106 [SQUARE_CLOSE]      ]
1106 [MEMBER]            .
1106 [WORD]              len
1106 [COMPARE]           >
1106 [WORD]              I2C_SMBUS_I2C_BLOCK_MAX
1106 [ARITH]             +
1106 [NUMBER]            1
1106 [SPAREN_CLOSE]      )
1106 [NEWLINE]           
1106 [BRACE_OPEN]        {
1106 [NEWLINE]           
1107 [FUNC_CALL]         dev_err
1107 [FPAREN_OPEN]       (
1107 [ADDR]              &
1107 [WORD]              adapter
1107 [MEMBER]            ->
1107 [WORD]              dev
1107 [COMMA]             ,
1107 [STRING]            "i2c_smbus_xfer_emulated called with "
1107 [NEWLINE]           
1108 [STRING]            "invalid block write size (%d)\n"
1108 [COMMA]             ,
1108 [NEWLINE]           
1109 [WORD]              data
1109 [MEMBER]            ->
1109 [WORD]              block
1109 [SQUARE_OPEN]       [
1109 [NUMBER]            0
1109 [SQUARE_CLOSE]      ]
1109 [FPAREN_CLOSE]      )
1109 [SEMICOLON]         ;
1109 [NEWLINE]           
1110 [RETURN]            return
1110 [PAREN_OPEN]        (
1110 [NEG]               -
1110 [NUMBER]            1
1110 [PAREN_CLOSE]       )
1110 [SEMICOLON]         ;
1110 [NEWLINE]           
1111 [BRACE_CLOSE]       }
1111 [NEWLINE]           
1112 [FOR]               for
1112 [SPAREN_OPEN]       (
1112 [WORD]              i
1112 [ASSIGN]            =
1112 [NUMBER]            1
1112 [SEMICOLON]         ;
1112 [WORD]              i
1112 [COMPARE]           <=
1112 [WORD]              data
1112 [MEMBER]            ->
1112 [WORD]              block
1112 [SQUARE_OPEN]       [
1112 [NUMBER]            0
1112 [SQUARE_CLOSE]      ]
1112 [SEMICOLON]         ;
1112 [WORD]              i
1112 [INCDEC_AFTER]      ++
1112 [SPAREN_CLOSE]      )
1112 [NEWLINE]           
1112 [BRACE_OPEN]        {
1112 [NEWLINE]           
1113 [WORD]              msgbuf0
1113 [SQUARE_OPEN]       [
1113 [WORD]              i
1113 [SQUARE_CLOSE]      ]
1113 [ASSIGN]            =
1113 [WORD]              data
1113 [MEMBER]            ->
1113 [WORD]              block
1113 [SQUARE_OPEN]       [
1113 [WORD]              i
1113 [SQUARE_CLOSE]      ]
1113 [SEMICOLON]         ;
1113 [NEWLINE]           
1113 [BRACE_CLOSE]       }
1113 [NEWLINE]           
1114 [BRACE_CLOSE]       }
1114 [NEWLINE]           
1115 [BREAK]             break
1115 [SEMICOLON]         ;
1115 [NEWLINE]           
1116 [CASE]              default
1116 [CASE_COLON]        :
1116 [NEWLINE]           
1117 [FUNC_CALL]         dev_err
1117 [FPAREN_OPEN]       (
1117 [ADDR]              &
1117 [WORD]              adapter
1117 [MEMBER]            ->
1117 [WORD]              dev
1117 [COMMA]             ,
1117 [STRING]            "smbus_access called with invalid size (%d)\n"
1117 [COMMA]             ,
1117 [NEWLINE]           
1118 [WORD]              size
1118 [FPAREN_CLOSE]      )
1118 [SEMICOLON]         ;
1118 [NEWLINE]           
1119 [RETURN]            return
1119 [PAREN_OPEN]        (
1119 [NEG]               -
1119 [NUMBER]            1
1119 [PAREN_CLOSE]       )
1119 [SEMICOLON]         ;
1119 [NEWLINE]           
1120 [BRACE_CLOSE]       }
1120 [COMMENT]           /* switch */
1120 [NEWLINE]           
1122 [IF]                if
1122 [SPAREN_OPEN]       (
1122 [FUNC_CALL]         i2c_transfer
1122 [FPAREN_OPEN]       (
1122 [WORD]              adapter
1122 [COMMA]             ,
1122 [WORD]              msg
1122 [COMMA]             ,
1122 [WORD]              num
1122 [FPAREN_CLOSE]      )
1122 [COMPARE]           <
1122 [NUMBER]            0
1122 [SPAREN_CLOSE]      )
1122 [NEWLINE]           
1122 [BRACE_OPEN]        {
1122 [NEWLINE]           
1123 [RETURN]            return
1123 [PAREN_OPEN]        (
1123 [NEG]               -
1123 [NUMBER]            1
1123 [PAREN_CLOSE]       )
1123 [SEMICOLON]         ;
1123 [NEWLINE]           
1123 [BRACE_CLOSE]       }
1123 [NEWLINE]           
1125 [IF]                if
1125 [SPAREN_OPEN]       (
1125 [WORD]              read_write
1125 [COMPARE]           ==
1125 [WORD]              I2C_SMBUS_READ
1125 [SPAREN_CLOSE]      )
1125 [NEWLINE]           
1125 [BRACE_OPEN]        {
1125 [NEWLINE]           
1126 [SWITCH]            switch
1126 [SPAREN_OPEN]       (
1126 [WORD]              size
1126 [SPAREN_CLOSE]      )
1126 [NEWLINE]           
1126 [BRACE_OPEN]        {
1126 [NEWLINE]           
1127 [CASE]              case
1127 [WORD]              I2C_SMBUS_BYTE
1127 [CASE_COLON]        :
1127 [NEWLINE]           
1128 [TYPE]              data
1128 [MEMBER]            ->
1128 [WORD]              byte
1128 [ASSIGN]            =
1128 [WORD]              msgbuf0
1128 [SQUARE_OPEN]       [
1128 [NUMBER]            0
1128 [SQUARE_CLOSE]      ]
1128 [SEMICOLON]         ;
1128 [NEWLINE]           
1129 [BREAK]             break
1129 [SEMICOLON]         ;
1129 [NEWLINE]           
1130 [CASE]              case
1130 [WORD]              I2C_SMBUS_BYTE_DATA
1130 [CASE_COLON]        :
1130 [NEWLINE]           
1131 [TYPE]              data
1131 [MEMBER]            ->
1131 [WORD]              byte
1131 [ASSIGN]            =
1131 [WORD]              msgbuf1
1131 [SQUARE_OPEN]       [
1131 [NUMBER]            0
1131 [SQUARE_CLOSE]      ]
1131 [SEMICOLON]         ;
1131 [NEWLINE]           
1132 [BREAK]             break
1132 [SEMICOLON]         ;
1132 [NEWLINE]           
1133 [CASE]              case
1133 [WORD]              I2C_SMBUS_WORD_DATA
1133 [CASE_COLON]        :
1133 [NEWLINE]           
1134 [CASE]              case
1134 [WORD]              I2C_SMBUS_PROC_CALL
1134 [CASE_COLON]        :
1134 [NEWLINE]           
1135 [TYPE]              data
1135 [MEMBER]            ->
1135 [WORD]              word
1135 [ASSIGN]            =
1135 [WORD]              msgbuf1
1135 [SQUARE_OPEN]       [
1135 [NUMBER]            0
1135 [SQUARE_CLOSE]      ]
1135 [ARITH]             |
1135 [PAREN_OPEN]        (
1135 [WORD]              msgbuf1
1135 [SQUARE_OPEN]       [
1135 [NUMBER]            1
1135 [SQUARE_CLOSE]      ]
1135 [ARITH]             <<
1135 [NUMBER]            8
1135 [PAREN_CLOSE]       )
1135 [SEMICOLON]         ;
1135 [NEWLINE]           
1136 [BREAK]             break
1136 [SEMICOLON]         ;
1136 [NEWLINE]           
1137 [CASE]              case
1137 [WORD]              I2C_SMBUS_I2C_BLOCK_DATA
1137 [CASE_COLON]        :
1137 [NEWLINE]           
1138 [COMMENT]           /* fixed at 32 for now */
1138 [NEWLINE]           
1139 [TYPE]              data
1139 [MEMBER]            ->
1139 [WORD]              block
1139 [SQUARE_OPEN]       [
1139 [NUMBER]            0
1139 [SQUARE_CLOSE]      ]
1139 [ASSIGN]            =
1139 [WORD]              I2C_SMBUS_I2C_BLOCK_MAX
1139 [SEMICOLON]         ;
1139 [NEWLINE]           
1140 [FOR]               for
1140 [SPAREN_OPEN]       (
1140 [WORD]              i
1140 [ASSIGN]            =
1140 [NUMBER]            0
1140 [SEMICOLON]         ;
1140 [WORD]              i
1140 [COMPARE]           <
1140 [WORD]              I2C_SMBUS_I2C_BLOCK_MAX
1140 [SEMICOLON]         ;
1140 [WORD]              i
1140 [INCDEC_AFTER]      ++
1140 [SPAREN_CLOSE]      )
1140 [NEWLINE]           
1140 [BRACE_OPEN]        {
1140 [NEWLINE]           
1141 [TYPE]              data
1141 [MEMBER]            ->
1141 [WORD]              block
1141 [SQUARE_OPEN]       [
1141 [WORD]              i
1141 [ARITH]             +
1141 [NUMBER]            1
1141 [SQUARE_CLOSE]      ]
1141 [ASSIGN]            =
1141 [WORD]              msgbuf1
1141 [SQUARE_OPEN]       [
1141 [WORD]              i
1141 [SQUARE_CLOSE]      ]
1141 [SEMICOLON]         ;
1141 [NEWLINE]           
1141 [BRACE_CLOSE]       }
1141 [NEWLINE]           
1142 [BREAK]             break
1142 [SEMICOLON]         ;
1142 [NEWLINE]           
1143 [BRACE_CLOSE]       }
1143 [NEWLINE]           
1143 [BRACE_CLOSE]       }
1143 [NEWLINE]           
1144 [RETURN]            return
1144 [PAREN_OPEN]        (
1144 [NUMBER]            0
1144 [PAREN_CLOSE]       )
1144 [SEMICOLON]         ;
1144 [NEWLINE]           
1145 [BRACE_CLOSE]       }
1145 [COMMENT]           /* i2c_smbus_xfer_emulated */
1145 [NEWLINE]           
1148 [TYPE]              s32
1148 [FUNC_DEF]          i2c_smbus_xfer
1148 [FPAREN_OPEN]       (
1148 [STRUCT]            struct
1148 [TYPE]              i2c_adapter
1148 [PTR_TYPE]          *
1148 [WORD]              adapter
1148 [COMMA]             ,
1148 [TYPE]              u16
1148 [WORD]              addr
1148 [COMMA]             ,
1148 [TYPE]              unsigned
1148 [TYPE]              short
1148 [WORD]              flags
1148 [COMMA]             ,
1148 [NEWLINE]           
1149 [TYPE]              char
1149 [WORD]              read_write
1149 [COMMA]             ,
1149 [TYPE]              u8
1149 [WORD]              command
1149 [COMMA]             ,
1149 [TYPE]              int
1149 [WORD]              size
1149 [COMMA]             ,
1149 [NEWLINE]           
1150 [UNION]             union
1150 [TYPE]              i2c_smbus_data
1150 [PTR_TYPE]          *
1150 [WORD]              data
1150 [FPAREN_CLOSE]      )
1150 [NEWLINE]           
1151 [BRACE_OPEN]        {
1151 [NEWLINE]           
1152 [TYPE]              s32
1152 [WORD]              res
1152 [SEMICOLON]         ;
1152 [NEWLINE]           
1153 [TYPE]              int
1153 [WORD]              swpec
1153 [ASSIGN]            =
1153 [NUMBER]            0
1153 [SEMICOLON]         ;
1153 [NEWLINE]           
1154 [TYPE]              u8
1154 [WORD]              partial
1154 [ASSIGN]            =
1154 [NUMBER]            0
1154 [SEMICOLON]         ;
1154 [NEWLINE]           
1156 [WORD]              flags
1156 [ASSIGN]            &=
1156 [WORD]              I2C_M_TEN
1156 [ARITH]             |
1156 [WORD]              I2C_CLIENT_PEC
1156 [SEMICOLON]         ;
1156 [NEWLINE]           
1157 [IF]                if
1157 [SPAREN_OPEN]       (
1157 [PAREN_OPEN]        (
1157 [WORD]              flags
1157 [ARITH]             &
1157 [WORD]              I2C_CLIENT_PEC
1157 [PAREN_CLOSE]       )
1157 [BOOL]              &&
1157 [NEWLINE]           
1158 [NOT]               !
1158 [PAREN_OPEN]        (
1158 [FUNC_CALL]         i2c_check_functionality
1158 [FPAREN_OPEN]       (
1158 [WORD]              adapter
1158 [COMMA]             ,
1158 [WORD]              I2C_FUNC_SMBUS_HWPEC_CALC
1158 [FPAREN_CLOSE]      )
1158 [PAREN_CLOSE]       )
1158 [SPAREN_CLOSE]      )
1158 [NEWLINE]           
1158 [BRACE_OPEN]        {
1158 [NEWLINE]           
1159 [WORD]              swpec
1159 [ASSIGN]            =
1159 [NUMBER]            1
1159 [SEMICOLON]         ;
1159 [NEWLINE]           
1160 [IF]                if
1160 [SPAREN_OPEN]       (
1160 [WORD]              read_write
1160 [COMPARE]           ==
1160 [WORD]              I2C_SMBUS_READ
1160 [BOOL]              &&
1160 [NEWLINE]           
1161 [WORD]              size
1161 [COMPARE]           ==
1161 [WORD]              I2C_SMBUS_BLOCK_DATA
1161 [SPAREN_CLOSE]      )
1161 [NEWLINE]           
1161 [BRACE_OPEN]        {
1161 [NEWLINE]           
1162 [WORD]              size
1162 [ASSIGN]            =
1162 [WORD]              I2C_SMBUS_BLOCK_DATA_PEC
1162 [SEMICOLON]         ;
1162 [NEWLINE]           
1162 [BRACE_CLOSE]       }
1162 [NEWLINE]           
1163 [ELSE]              else
1163 [ELSEIF]            if
1163 [SPAREN_OPEN]       (
1163 [WORD]              size
1163 [COMPARE]           ==
1163 [WORD]              I2C_SMBUS_PROC_CALL
1163 [SPAREN_CLOSE]      )
1163 [NEWLINE]           
1163 [BRACE_OPEN]        {
1163 [NEWLINE]           
1164 [WORD]              size
1164 [ASSIGN]            =
1164 [WORD]              I2C_SMBUS_PROC_CALL_PEC
1164 [SEMICOLON]         ;
1164 [NEWLINE]           
1164 [BRACE_CLOSE]       }
1164 [NEWLINE]           
1165 [ELSE]              else
1165 [ELSEIF]            if
1165 [SPAREN_OPEN]       (
1165 [WORD]              size
1165 [COMPARE]           ==
1165 [WORD]              I2C_SMBUS_BLOCK_PROC_CALL
1165 [SPAREN_CLOSE]      )
1165 [NEWLINE]           
1165 [BRACE_OPEN]        {
1165 [NEWLINE]           
1166 [FUNC_CALL]         i2c_smbus_add_pec
1166 [FPAREN_OPEN]       (
1166 [WORD]              addr
1166 [COMMA]             ,
1166 [WORD]              command
1166 [COMMA]             ,
1166 [NEWLINE]           
1167 [WORD]              I2C_SMBUS_BLOCK_DATA
1167 [COMMA]             ,
1167 [WORD]              data
1167 [FPAREN_CLOSE]      )
1167 [SEMICOLON]         ;
1167 [NEWLINE]           
1168 [WORD]              partial
1168 [ASSIGN]            =
1168 [WORD]              data
1168 [MEMBER]            ->
1168 [WORD]              block
1168 [SQUARE_OPEN]       [
1168 [WORD]              data
1168 [MEMBER]            ->
1168 [WORD]              block
1168 [SQUARE_OPEN]       [
1168 [NUMBER]            0
1168 [SQUARE_CLOSE]      ]
1168 [ARITH]             +
1168 [NUMBER]            1
1168 [SQUARE_CLOSE]      ]
1168 [SEMICOLON]         ;
1168 [NEWLINE]           
1169 [WORD]              size
1169 [ASSIGN]            =
1169 [WORD]              I2C_SMBUS_BLOCK_PROC_CALL_PEC
1169 [SEMICOLON]         ;
1169 [NEWLINE]           
1170 [BRACE_CLOSE]       }
1170 [NEWLINE]           
1170 [ELSE]              else
1170 [ELSEIF]            if
1170 [SPAREN_OPEN]       (
1170 [WORD]              read_write
1170 [COMPARE]           ==
1170 [WORD]              I2C_SMBUS_WRITE
1170 [BOOL]              &&
1170 [NEWLINE]           
1171 [WORD]              size
1171 [COMPARE]           !=
1171 [WORD]              I2C_SMBUS_QUICK
1171 [BOOL]              &&
1171 [NEWLINE]           
1172 [WORD]              size
1172 [COMPARE]           !=
1172 [WORD]              I2C_SMBUS_I2C_BLOCK_DATA
1172 [SPAREN_CLOSE]      )
1172 [NEWLINE]           
1172 [BRACE_OPEN]        {
1172 [NEWLINE]           
1173 [WORD]              size
1173 [ASSIGN]            =
1173 [FUNC_CALL]         i2c_smbus_add_pec
1173 [FPAREN_OPEN]       (
1173 [WORD]              addr
1173 [COMMA]             ,
1173 [WORD]              command
1173 [COMMA]             ,
1173 [WORD]              size
1173 [COMMA]             ,
1173 [WORD]              data
1173 [FPAREN_CLOSE]      )
1173 [SEMICOLON]         ;
1173 [NEWLINE]           
1173 [BRACE_CLOSE]       }
1173 [NEWLINE]           
1174 [BRACE_CLOSE]       }
1174 [NEWLINE]           
1176 [IF]                if
1176 [SPAREN_OPEN]       (
1176 [WORD]              adapter
1176 [MEMBER]            ->
1176 [WORD]              algo
1176 [MEMBER]            ->
1176 [WORD]              smbus_xfer
1176 [SPAREN_CLOSE]      )
1176 [NEWLINE]           
1176 [BRACE_OPEN]        {
1176 [NEWLINE]           
1177 [FUNC_CALL]         down
1177 [FPAREN_OPEN]       (
1177 [ADDR]              &
1177 [WORD]              adapter
1177 [MEMBER]            ->
1177 [WORD]              bus_lock
1177 [FPAREN_CLOSE]      )
1177 [SEMICOLON]         ;
1177 [NEWLINE]           
1178 [WORD]              res
1178 [ASSIGN]            =
1178 [WORD]              adapter
1178 [MEMBER]            ->
1178 [WORD]              algo
1178 [MEMBER]            ->
1178 [FUNC_CALL]         smbus_xfer
1178 [FPAREN_OPEN]       (
1178 [WORD]              adapter
1178 [COMMA]             ,
1178 [WORD]              addr
1178 [COMMA]             ,
1178 [WORD]              flags
1178 [COMMA]             ,
1178 [WORD]              read_write
1178 [COMMA]             ,
1178 [NEWLINE]           
1179 [WORD]              command
1179 [COMMA]             ,
1179 [WORD]              size
1179 [COMMA]             ,
1179 [WORD]              data
1179 [FPAREN_CLOSE]      )
1179 [SEMICOLON]         ;
1179 [NEWLINE]           
1180 [FUNC_CALL]         up
1180 [FPAREN_OPEN]       (
1180 [ADDR]              &
1180 [WORD]              adapter
1180 [MEMBER]            ->
1180 [WORD]              bus_lock
1180 [FPAREN_CLOSE]      )
1180 [SEMICOLON]         ;
1180 [NEWLINE]           
1181 [BRACE_CLOSE]       }
1181 [NEWLINE]           
1181 [ELSE]              else
1181 [NEWLINE]           
1181 [BRACE_OPEN]        {
1181 [NEWLINE]           
1182 [WORD]              res
1182 [ASSIGN]            =
1182 [FUNC_CALL]         i2c_smbus_xfer_emulated
1182 [FPAREN_OPEN]       (
1182 [WORD]              adapter
1182 [COMMA]             ,
1182 [WORD]              addr
1182 [COMMA]             ,
1182 [WORD]              flags
1182 [COMMA]             ,
1182 [WORD]              read_write
1182 [COMMA]             ,
1182 [NEWLINE]           
1183 [WORD]              command
1183 [COMMA]             ,
1183 [WORD]              size
1183 [COMMA]             ,
1183 [WORD]              data
1183 [FPAREN_CLOSE]      )
1183 [SEMICOLON]         ;
1183 [NEWLINE]           
1183 [BRACE_CLOSE]       }
1183 [NEWLINE]           
1185 [IF]                if
1185 [SPAREN_OPEN]       (
1185 [WORD]              res
1185 [COMPARE]           >=
1185 [NUMBER]            0
1185 [BOOL]              &&
1185 [WORD]              swpec
1185 [BOOL]              &&
1185 [NEWLINE]           
1186 [WORD]              size
1186 [COMPARE]           !=
1186 [WORD]              I2C_SMBUS_QUICK
1186 [BOOL]              &&
1186 [WORD]              size
1186 [COMPARE]           !=
1186 [WORD]              I2C_SMBUS_I2C_BLOCK_DATA
1186 [BOOL]              &&
1186 [NEWLINE]           
1187 [PAREN_OPEN]        (
1187 [WORD]              read_write
1187 [COMPARE]           ==
1187 [WORD]              I2C_SMBUS_READ
1187 [BOOL]              ||
1187 [WORD]              size
1187 [COMPARE]           ==
1187 [WORD]              I2C_SMBUS_PROC_CALL_PEC
1187 [BOOL]              ||
1187 [NEWLINE]           
1188 [WORD]              size
1188 [COMPARE]           ==
1188 [WORD]              I2C_SMBUS_BLOCK_PROC_CALL_PEC
1188 [PAREN_CLOSE]       )
1188 [SPAREN_CLOSE]      )
1188 [NEWLINE]           
1188 [BRACE_OPEN]        {
1188 [NEWLINE]           
1189 [IF]                if
1189 [SPAREN_OPEN]       (
1189 [FUNC_CALL]         i2c_smbus_check_pec
1189 [FPAREN_OPEN]       (
1189 [WORD]              addr
1189 [COMMA]             ,
1189 [WORD]              command
1189 [COMMA]             ,
1189 [WORD]              size
1189 [COMMA]             ,
1189 [WORD]              partial
1189 [COMMA]             ,
1189 [WORD]              data
1189 [FPAREN_CLOSE]      )
1189 [SPAREN_CLOSE]      )
1189 [NEWLINE]           
1189 [BRACE_OPEN]        {
1189 [NEWLINE]           
1190 [RETURN]            return
1190 [PAREN_OPEN]        (
1190 [NEG]               -
1190 [NUMBER]            1
1190 [PAREN_CLOSE]       )
1190 [SEMICOLON]         ;
1190 [NEWLINE]           
1190 [BRACE_CLOSE]       }
1190 [NEWLINE]           
1191 [BRACE_CLOSE]       }
1191 [NEWLINE]           
1192 [RETURN]            return
1192 [PAREN_OPEN]        (
1192 [WORD]              res
1192 [PAREN_CLOSE]       )
1192 [SEMICOLON]         ;
1192 [NEWLINE]           
1193 [BRACE_CLOSE]       }
1193 [COMMENT]           /* i2c_smbus_xfer */
1193 [NEWLINE]           
1196 [COMMENT]           /* Next four are needed by i2c-isa */
1196 [NEWLINE]           
1197 [FUNC_CALL]         EXPORT_SYMBOL_GPL
1197 [FPAREN_OPEN]       (
1197 [WORD]              i2c_adapter_dev_release
1197 [FPAREN_CLOSE]      )
1197 [SEMICOLON]         ;
1197 [NEWLINE]           
1198 [FUNC_CALL]         EXPORT_SYMBOL_GPL
1198 [FPAREN_OPEN]       (
1198 [WORD]              i2c_adapter_driver
1198 [FPAREN_CLOSE]      )
1198 [SEMICOLON]         ;
1198 [NEWLINE]           
1199 [FUNC_CALL]         EXPORT_SYMBOL_GPL
1199 [FPAREN_OPEN]       (
1199 [WORD]              i2c_adapter_class
1199 [FPAREN_CLOSE]      )
1199 [SEMICOLON]         ;
1199 [NEWLINE]           
1200 [FUNC_CALL]         EXPORT_SYMBOL_GPL
1200 [FPAREN_OPEN]       (
1200 [WORD]              i2c_bus_type
1200 [FPAREN_CLOSE]      )
1200 [SEMICOLON]         ;
1200 [NEWLINE]           
1202 [FUNC_CALL]         EXPORT_SYMBOL
1202 [FPAREN_OPEN]       (
1202 [WORD]              i2c_add_adapter
1202 [FPAREN_CLOSE]      )
1202 [SEMICOLON]         ;
1202 [NEWLINE]           
1203 [FUNC_CALL]         EXPORT_SYMBOL
1203 [FPAREN_OPEN]       (
1203 [WORD]              i2c_del_adapter
1203 [FPAREN_CLOSE]      )
1203 [SEMICOLON]         ;
1203 [NEWLINE]           
1204 [FUNC_CALL]         EXPORT_SYMBOL
1204 [FPAREN_OPEN]       (
1204 [WORD]              i2c_add_driver
1204 [FPAREN_CLOSE]      )
1204 [SEMICOLON]         ;
1204 [NEWLINE]           
1205 [FUNC_CALL]         EXPORT_SYMBOL
1205 [FPAREN_OPEN]       (
1205 [WORD]              i2c_del_driver
1205 [FPAREN_CLOSE]      )
1205 [SEMICOLON]         ;
1205 [NEWLINE]           
1206 [FUNC_CALL]         EXPORT_SYMBOL
1206 [FPAREN_OPEN]       (
1206 [WORD]              i2c_attach_client
1206 [FPAREN_CLOSE]      )
1206 [SEMICOLON]         ;
1206 [NEWLINE]           
1207 [FUNC_CALL]         EXPORT_SYMBOL
1207 [FPAREN_OPEN]       (
1207 [WORD]              i2c_detach_client
1207 [FPAREN_CLOSE]      )
1207 [SEMICOLON]         ;
1207 [NEWLINE]           
1208 [FUNC_CALL]         EXPORT_SYMBOL
1208 [FPAREN_OPEN]       (
1208 [WORD]              i2c_use_client
1208 [FPAREN_CLOSE]      )
1208 [SEMICOLON]         ;
1208 [NEWLINE]           
1209 [FUNC_CALL]         EXPORT_SYMBOL
1209 [FPAREN_OPEN]       (
1209 [WORD]              i2c_release_client
1209 [FPAREN_CLOSE]      )
1209 [SEMICOLON]         ;
1209 [NEWLINE]           
1210 [FUNC_CALL]         EXPORT_SYMBOL
1210 [FPAREN_OPEN]       (
1210 [WORD]              i2c_clients_command
1210 [FPAREN_CLOSE]      )
1210 [SEMICOLON]         ;
1210 [NEWLINE]           
1211 [FUNC_CALL]         EXPORT_SYMBOL
1211 [FPAREN_OPEN]       (
1211 [WORD]              i2c_check_addr
1211 [FPAREN_CLOSE]      )
1211 [SEMICOLON]         ;
1211 [NEWLINE]           
1213 [FUNC_CALL]         EXPORT_SYMBOL
1213 [FPAREN_OPEN]       (
1213 [WORD]              i2c_master_send
1213 [FPAREN_CLOSE]      )
1213 [SEMICOLON]         ;
1213 [NEWLINE]           
1214 [FUNC_CALL]         EXPORT_SYMBOL
1214 [FPAREN_OPEN]       (
1214 [WORD]              i2c_master_recv
1214 [FPAREN_CLOSE]      )
1214 [SEMICOLON]         ;
1214 [NEWLINE]           
1215 [FUNC_CALL]         EXPORT_SYMBOL
1215 [FPAREN_OPEN]       (
1215 [WORD]              i2c_control
1215 [FPAREN_CLOSE]      )
1215 [SEMICOLON]         ;
1215 [NEWLINE]           
1216 [FUNC_CALL]         EXPORT_SYMBOL
1216 [FPAREN_OPEN]       (
1216 [WORD]              i2c_transfer
1216 [FPAREN_CLOSE]      )
1216 [SEMICOLON]         ;
1216 [NEWLINE]           
1217 [FUNC_CALL]         EXPORT_SYMBOL
1217 [FPAREN_OPEN]       (
1217 [WORD]              i2c_get_adapter
1217 [FPAREN_CLOSE]      )
1217 [SEMICOLON]         ;
1217 [NEWLINE]           
1218 [FUNC_CALL]         EXPORT_SYMBOL
1218 [FPAREN_OPEN]       (
1218 [WORD]              i2c_put_adapter
1218 [FPAREN_CLOSE]      )
1218 [SEMICOLON]         ;
1218 [NEWLINE]           
1219 [FUNC_CALL]         EXPORT_SYMBOL
1219 [FPAREN_OPEN]       (
1219 [WORD]              i2c_probe
1219 [FPAREN_CLOSE]      )
1219 [SEMICOLON]         ;
1219 [NEWLINE]           
1221 [FUNC_CALL]         EXPORT_SYMBOL
1221 [FPAREN_OPEN]       (
1221 [WORD]              i2c_smbus_xfer
1221 [FPAREN_CLOSE]      )
1221 [SEMICOLON]         ;
1221 [NEWLINE]           
1222 [FUNC_CALL]         EXPORT_SYMBOL
1222 [FPAREN_OPEN]       (
1222 [WORD]              i2c_smbus_write_quick
1222 [FPAREN_CLOSE]      )
1222 [SEMICOLON]         ;
1222 [NEWLINE]           
1223 [FUNC_CALL]         EXPORT_SYMBOL
1223 [FPAREN_OPEN]       (
1223 [WORD]              i2c_smbus_read_byte
1223 [FPAREN_CLOSE]      )
1223 [SEMICOLON]         ;
1223 [NEWLINE]           
1224 [FUNC_CALL]         EXPORT_SYMBOL
1224 [FPAREN_OPEN]       (
1224 [WORD]              i2c_smbus_write_byte
1224 [FPAREN_CLOSE]      )
1224 [SEMICOLON]         ;
1224 [NEWLINE]           
1225 [FUNC_CALL]         EXPORT_SYMBOL
1225 [FPAREN_OPEN]       (
1225 [WORD]              i2c_smbus_read_byte_data
1225 [FPAREN_CLOSE]      )
1225 [SEMICOLON]         ;
1225 [NEWLINE]           
1226 [FUNC_CALL]         EXPORT_SYMBOL
1226 [FPAREN_OPEN]       (
1226 [WORD]              i2c_smbus_write_byte_data
1226 [FPAREN_CLOSE]      )
1226 [SEMICOLON]         ;
1226 [NEWLINE]           
1227 [FUNC_CALL]         EXPORT_SYMBOL
1227 [FPAREN_OPEN]       (
1227 [WORD]              i2c_smbus_read_word_data
1227 [FPAREN_CLOSE]      )
1227 [SEMICOLON]         ;
1227 [NEWLINE]           
1228 [FUNC_CALL]         EXPORT_SYMBOL
1228 [FPAREN_OPEN]       (
1228 [WORD]              i2c_smbus_write_word_data
1228 [FPAREN_CLOSE]      )
1228 [SEMICOLON]         ;
1228 [NEWLINE]           
1229 [FUNC_CALL]         EXPORT_SYMBOL
1229 [FPAREN_OPEN]       (
1229 [WORD]              i2c_smbus_write_block_data
1229 [FPAREN_CLOSE]      )
1229 [SEMICOLON]         ;
1229 [NEWLINE]           
1230 [FUNC_CALL]         EXPORT_SYMBOL
1230 [FPAREN_OPEN]       (
1230 [WORD]              i2c_smbus_read_i2c_block_data
1230 [FPAREN_CLOSE]      )
1230 [SEMICOLON]         ;
1230 [NEWLINE]           
1232 [FUNC_CALL]         MODULE_AUTHOR
1232 [FPAREN_OPEN]       (
1232 [STRING]            "Simon G. Vogl <simon@tk.uni-linz.ac.at>"
1232 [FPAREN_CLOSE]      )
1232 [SEMICOLON]         ;
1232 [NEWLINE]           
1233 [FUNC_CALL]         MODULE_DESCRIPTION
1233 [FPAREN_OPEN]       (
1233 [STRING]            "I2C-Bus main module"
1233 [FPAREN_CLOSE]      )
1233 [SEMICOLON]         ;
1233 [NEWLINE]           
1234 [FUNC_CALL]         MODULE_LICENSE
1234 [FPAREN_OPEN]       (
1234 [STRING]            "GPL"
1234 [FPAREN_CLOSE]      )
1234 [SEMICOLON]         ;
1234 [NEWLINE]           