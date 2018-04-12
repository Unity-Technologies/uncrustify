Line [Parent]            Text
1    [COMMENT_WHOLE]     /* i2c-core.c - a device driver for the iic-bus interface		     */
1    [NONE]              
2    [COMMENT_WHOLE]     /* ------------------------------------------------------------------------- */
2    [NONE]              
3    [COMMENT_WHOLE]     /*   Copyright (C) 1995-99 Simon G. Vogl␤␤    This program is free software; you can redistribute it and/or modify␤    it under the terms of the GNU General Public License as published by␤    the Free Software Foundation; either version 2 of the License, or␤    (at your option) any later version.␤␤    This program is distributed in the hope that it will be useful,␤    but WITHOUT ANY WARRANTY; without even the implied warranty of␤    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the␤    GNU General Public License for more details.␤␤    You should have received a copy of the GNU General Public License␤    along with this program; if not, write to the Free Software␤    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.		     */
17   [NONE]              
18   [COMMENT_WHOLE]     /* ------------------------------------------------------------------------- */
18   [NONE]              
20   [COMMENT_WHOLE]     /* With some changes from Kyösti Mälkki <kmalkki@cc.hut.fi>.␤   All SMBus-related things are written by Frodo Looijaard <frodol@dds.nl>␤   SMBus 2.0 support by Mark Studebaker <mdsxyz123@yahoo.com>                */
22   [NONE]              
24   [PP_INCLUDE]        #
24   [NONE]              include
24   [NONE]              <linux/module.h>
24   [NONE]              
25   [PP_INCLUDE]        #
25   [NONE]              include
25   [NONE]              <linux/kernel.h>
25   [NONE]              
26   [PP_INCLUDE]        #
26   [NONE]              include
26   [NONE]              <linux/errno.h>
26   [NONE]              
27   [PP_INCLUDE]        #
27   [NONE]              include
27   [NONE]              <linux/slab.h>
27   [NONE]              
28   [PP_INCLUDE]        #
28   [NONE]              include
28   [NONE]              <linux/i2c.h>
28   [NONE]              
29   [PP_INCLUDE]        #
29   [NONE]              include
29   [NONE]              <linux/init.h>
29   [NONE]              
30   [PP_INCLUDE]        #
30   [NONE]              include
30   [NONE]              <linux/idr.h>
30   [NONE]              
31   [PP_INCLUDE]        #
31   [NONE]              include
31   [NONE]              <linux/seq_file.h>
31   [NONE]              
32   [PP_INCLUDE]        #
32   [NONE]              include
32   [NONE]              <asm/uaccess.h>
32   [NONE]              
35   [NONE]              static
35   [NONE]              LIST_HEAD
35   [FUNC_CALL]         (
35   [NONE]              adapters
35   [FUNC_CALL]         )
35   [NONE]              ;
35   [NONE]              
36   [NONE]              static
36   [NONE]              LIST_HEAD
36   [FUNC_CALL]         (
36   [NONE]              drivers
36   [FUNC_CALL]         )
36   [NONE]              ;
36   [NONE]              
37   [NONE]              static
37   [NONE]              DECLARE_MUTEX
37   [FUNC_CALL]         (
37   [NONE]              core_lists
37   [FUNC_CALL]         )
37   [NONE]              ;
37   [NONE]              
38   [NONE]              static
38   [NONE]              DEFINE_IDR
38   [FUNC_CALL]         (
38   [NONE]              i2c_adapter_idr
38   [FUNC_CALL]         )
38   [NONE]              ;
38   [NONE]              
40   [FUNC_DEF]          static
40   [FUNC_DEF]          int
40   [NONE]              i2c_device_match
40   [FUNC_DEF]          (
40   [NONE]              struct
40   [STRUCT]            device
40   [STRUCT]            *
40   [NONE]              dev
40   [NONE]              ,
40   [NONE]              struct
40   [NONE]              device_driver
40   [STRUCT]            *
40   [NONE]              drv
40   [FUNC_DEF]          )
40   [NONE]              
41   [FUNC_DEF]          {
41   [NONE]              
42   [NONE]              return
42   [NONE]              1
42   [NONE]              ;
42   [NONE]              
43   [FUNC_DEF]          }
43   [NONE]              
45   [FUNC_DEF]          static
45   [FUNC_DEF]          int
45   [NONE]              i2c_bus_suspend
45   [FUNC_DEF]          (
45   [NONE]              struct
45   [STRUCT]            device
45   [STRUCT]            *
45   [NONE]              dev
45   [NONE]              ,
45   [NONE]              pm_message_t
45   [NONE]              state
45   [FUNC_DEF]          )
45   [NONE]              
46   [FUNC_DEF]          {
46   [NONE]              
47   [NONE]              int
47   [NONE]              rc
47   [NONE]              =
47   [NONE]              0
47   [NONE]              ;
47   [NONE]              
49   [NONE]              if
49   [IF]                (
49   [NONE]              dev
49   [NONE]              ->
49   [NONE]              driver
49   [NONE]              &&
49   [NONE]              dev
49   [NONE]              ->
49   [NONE]              driver
49   [NONE]              ->
49   [NONE]              suspend
49   [IF]                )
49   [IF]                
49   [NONE]              
50   [NONE]              rc
50   [NONE]              =
50   [NONE]              dev
50   [NONE]              ->
50   [NONE]              driver
50   [NONE]              ->
50   [NONE]              suspend
50   [FUNC_CALL]         (
50   [NONE]              dev
50   [NONE]              ,
50   [NONE]              state
50   [NONE]              ,
50   [NONE]              0
50   [FUNC_CALL]         )
50   [NONE]              ;
50   [IF]                
50   [NONE]              
51   [NONE]              return
51   [NONE]              rc
51   [NONE]              ;
51   [NONE]              
52   [FUNC_DEF]          }
52   [NONE]              
54   [FUNC_DEF]          static
54   [FUNC_DEF]          int
54   [NONE]              i2c_bus_resume
54   [FUNC_DEF]          (
54   [NONE]              struct
54   [STRUCT]            device
54   [STRUCT]            *
54   [NONE]              dev
54   [FUNC_DEF]          )
54   [NONE]              
55   [FUNC_DEF]          {
55   [NONE]              
56   [NONE]              int
56   [NONE]              rc
56   [NONE]              =
56   [NONE]              0
56   [NONE]              ;
56   [NONE]              
58   [NONE]              if
58   [IF]                (
58   [NONE]              dev
58   [NONE]              ->
58   [NONE]              driver
58   [NONE]              &&
58   [NONE]              dev
58   [NONE]              ->
58   [NONE]              driver
58   [NONE]              ->
58   [NONE]              resume
58   [IF]                )
58   [IF]                
58   [NONE]              
59   [NONE]              rc
59   [NONE]              =
59   [NONE]              dev
59   [NONE]              ->
59   [NONE]              driver
59   [NONE]              ->
59   [NONE]              resume
59   [FUNC_CALL]         (
59   [NONE]              dev
59   [NONE]              ,
59   [NONE]              0
59   [FUNC_CALL]         )
59   [NONE]              ;
59   [IF]                
59   [NONE]              
60   [NONE]              return
60   [NONE]              rc
60   [NONE]              ;
60   [NONE]              
61   [FUNC_DEF]          }
61   [NONE]              
63   [NONE]              struct
63   [STRUCT]            bus_type
63   [STRUCT]            i2c_bus_type
63   [NONE]              =
63   [ASSIGN]            {
63   [NONE]              
64   [NONE]              .
64   [C99_MEMBER]        name
64   [NONE]              =
64   [NONE]              "i2c"
64   [NONE]              ,
64   [NONE]              
65   [NONE]              .
65   [C99_MEMBER]        match
65   [NONE]              =
65   [NONE]              i2c_device_match
65   [NONE]              ,
65   [NONE]              
66   [NONE]              .
66   [C99_MEMBER]        suspend
66   [NONE]              =
66   [NONE]              i2c_bus_suspend
66   [NONE]              ,
66   [NONE]              
67   [NONE]              .
67   [C99_MEMBER]        resume
67   [NONE]              =
67   [NONE]              i2c_bus_resume
67   [NONE]              ,
67   [NONE]              
68   [ASSIGN]            }
68   [NONE]              ;
68   [NONE]              
70   [FUNC_DEF]          static
70   [FUNC_DEF]          int
70   [NONE]              i2c_device_probe
70   [FUNC_DEF]          (
70   [NONE]              struct
70   [STRUCT]            device
70   [STRUCT]            *
70   [NONE]              dev
70   [FUNC_DEF]          )
70   [NONE]              
71   [FUNC_DEF]          {
71   [NONE]              
72   [NONE]              return
72   [NONE]              -
72   [NONE]              ENODEV
72   [NONE]              ;
72   [NONE]              
73   [FUNC_DEF]          }
73   [NONE]              
75   [FUNC_DEF]          static
75   [FUNC_DEF]          int
75   [NONE]              i2c_device_remove
75   [FUNC_DEF]          (
75   [NONE]              struct
75   [STRUCT]            device
75   [STRUCT]            *
75   [NONE]              dev
75   [FUNC_DEF]          )
75   [NONE]              
76   [FUNC_DEF]          {
76   [NONE]              
77   [NONE]              return
77   [NONE]              0
77   [NONE]              ;
77   [NONE]              
78   [FUNC_DEF]          }
78   [NONE]              
80   [FUNC_DEF]          void
80   [NONE]              i2c_adapter_dev_release
80   [FUNC_DEF]          (
80   [NONE]              struct
80   [STRUCT]            device
80   [STRUCT]            *
80   [NONE]              dev
80   [FUNC_DEF]          )
80   [NONE]              
81   [FUNC_DEF]          {
81   [NONE]              
82   [NONE]              struct
82   [STRUCT]            i2c_adapter
82   [STRUCT]            *
82   [NONE]              adap
82   [NONE]              =
82   [NONE]              dev_to_i2c_adapter
82   [FUNC_CALL]         (
82   [NONE]              dev
82   [FUNC_CALL]         )
82   [NONE]              ;
82   [NONE]              
83   [NONE]              complete
83   [FUNC_CALL]         (
83   [NONE]              &
83   [NONE]              adap
83   [NONE]              ->
83   [NONE]              dev_released
83   [FUNC_CALL]         )
83   [NONE]              ;
83   [NONE]              
84   [FUNC_DEF]          }
84   [NONE]              
86   [NONE]              struct
86   [STRUCT]            device_driver
86   [STRUCT]            i2c_adapter_driver
86   [NONE]              =
86   [ASSIGN]            {
86   [NONE]              
87   [NONE]              .
87   [C99_MEMBER]        name
87   [NONE]              =
87   [NONE]              "i2c_adapter"
87   [NONE]              ,
87   [NONE]              
88   [NONE]              .
88   [C99_MEMBER]        bus
88   [NONE]              =
88   [NONE]              &
88   [NONE]              i2c_bus_type
88   [NONE]              ,
88   [NONE]              
89   [NONE]              .
89   [C99_MEMBER]        probe
89   [NONE]              =
89   [NONE]              i2c_device_probe
89   [NONE]              ,
89   [NONE]              
90   [NONE]              .
90   [C99_MEMBER]        remove
90   [NONE]              =
90   [NONE]              i2c_device_remove
90   [NONE]              ,
90   [NONE]              
91   [ASSIGN]            }
91   [NONE]              ;
91   [NONE]              
93   [FUNC_DEF]          static
93   [FUNC_DEF]          void
93   [NONE]              i2c_adapter_class_dev_release
93   [FUNC_DEF]          (
93   [NONE]              struct
93   [STRUCT]            class_device
93   [STRUCT]            *
93   [NONE]              dev
93   [FUNC_DEF]          )
93   [NONE]              
94   [FUNC_DEF]          {
94   [NONE]              
95   [NONE]              struct
95   [STRUCT]            i2c_adapter
95   [STRUCT]            *
95   [NONE]              adap
95   [NONE]              =
95   [NONE]              class_dev_to_i2c_adapter
95   [FUNC_CALL]         (
95   [NONE]              dev
95   [FUNC_CALL]         )
95   [NONE]              ;
95   [NONE]              
96   [NONE]              complete
96   [FUNC_CALL]         (
96   [NONE]              &
96   [NONE]              adap
96   [NONE]              ->
96   [NONE]              class_dev_released
96   [FUNC_CALL]         )
96   [NONE]              ;
96   [NONE]              
97   [FUNC_DEF]          }
97   [NONE]              
99   [NONE]              struct
99   [STRUCT]            class
99   [STRUCT]            i2c_adapter_class
99   [NONE]              =
99   [ASSIGN]            {
99   [NONE]              
100  [NONE]              .
100  [C99_MEMBER]        name
100  [NONE]              =
100  [NONE]              "i2c-adapter"
100  [NONE]              ,
100  [NONE]              
101  [NONE]              .
101  [C99_MEMBER]        release
101  [NONE]              =
101  [NONE]              &
101  [NONE]              i2c_adapter_class_dev_release
101  [NONE]              ,
101  [NONE]              
102  [ASSIGN]            }
102  [NONE]              ;
102  [NONE]              
104  [FUNC_DEF]          static
104  [FUNC_DEF]          ssize_t
104  [NONE]              show_adapter_name
104  [FUNC_DEF]          (
104  [NONE]              struct
104  [STRUCT]            device
104  [STRUCT]            *
104  [NONE]              dev
104  [NONE]              ,
104  [NONE]              struct
104  [NONE]              device_attribute
104  [STRUCT]            *
104  [NONE]              attr
104  [NONE]              ,
104  [NONE]              char
104  [NONE]              *
104  [NONE]              buf
104  [FUNC_DEF]          )
104  [NONE]              
105  [FUNC_DEF]          {
105  [NONE]              
106  [NONE]              struct
106  [STRUCT]            i2c_adapter
106  [STRUCT]            *
106  [NONE]              adap
106  [NONE]              =
106  [NONE]              dev_to_i2c_adapter
106  [FUNC_CALL]         (
106  [NONE]              dev
106  [FUNC_CALL]         )
106  [NONE]              ;
106  [NONE]              
107  [NONE]              return
107  [NONE]              sprintf
107  [FUNC_CALL]         (
107  [NONE]              buf
107  [NONE]              ,
107  [NONE]              "%s\n"
107  [NONE]              ,
107  [NONE]              adap
107  [NONE]              ->
107  [NONE]              name
107  [FUNC_CALL]         )
107  [NONE]              ;
107  [NONE]              
108  [FUNC_DEF]          }
108  [NONE]              
109  [NONE]              static
109  [NONE]              DEVICE_ATTR
109  [FUNC_CALL]         (
109  [NONE]              name
109  [NONE]              ,
109  [NONE]              S_IRUGO
109  [NONE]              ,
109  [NONE]              show_adapter_name
109  [NONE]              ,
109  [NONE]              NULL
109  [FUNC_CALL]         )
109  [NONE]              ;
109  [NONE]              
112  [FUNC_DEF]          static
112  [FUNC_DEF]          void
112  [NONE]              i2c_client_release
112  [FUNC_DEF]          (
112  [NONE]              struct
112  [STRUCT]            device
112  [STRUCT]            *
112  [NONE]              dev
112  [FUNC_DEF]          )
112  [NONE]              
113  [FUNC_DEF]          {
113  [NONE]              
114  [NONE]              struct
114  [STRUCT]            i2c_client
114  [STRUCT]            *
114  [NONE]              client
114  [NONE]              =
114  [NONE]              to_i2c_client
114  [FUNC_CALL]         (
114  [NONE]              dev
114  [FUNC_CALL]         )
114  [NONE]              ;
114  [NONE]              
115  [NONE]              complete
115  [FUNC_CALL]         (
115  [NONE]              &
115  [NONE]              client
115  [NONE]              ->
115  [NONE]              released
115  [FUNC_CALL]         )
115  [NONE]              ;
115  [NONE]              
116  [FUNC_DEF]          }
116  [NONE]              
118  [FUNC_DEF]          static
118  [FUNC_DEF]          ssize_t
118  [NONE]              show_client_name
118  [FUNC_DEF]          (
118  [NONE]              struct
118  [STRUCT]            device
118  [STRUCT]            *
118  [NONE]              dev
118  [NONE]              ,
118  [NONE]              struct
118  [NONE]              device_attribute
118  [STRUCT]            *
118  [NONE]              attr
118  [NONE]              ,
118  [NONE]              char
118  [NONE]              *
118  [NONE]              buf
118  [FUNC_DEF]          )
118  [NONE]              
119  [FUNC_DEF]          {
119  [NONE]              
120  [NONE]              struct
120  [STRUCT]            i2c_client
120  [STRUCT]            *
120  [NONE]              client
120  [NONE]              =
120  [NONE]              to_i2c_client
120  [FUNC_CALL]         (
120  [NONE]              dev
120  [FUNC_CALL]         )
120  [NONE]              ;
120  [NONE]              
121  [NONE]              return
121  [NONE]              sprintf
121  [FUNC_CALL]         (
121  [NONE]              buf
121  [NONE]              ,
121  [NONE]              "%s\n"
121  [NONE]              ,
121  [NONE]              client
121  [NONE]              ->
121  [NONE]              name
121  [FUNC_CALL]         )
121  [NONE]              ;
121  [NONE]              
122  [FUNC_DEF]          }
122  [NONE]              
124  [COMMENT_WHOLE]     /*␤ * We can't use the DEVICE_ATTR() macro here as we want the same filename for a␤ * different type of a device.  So beware if the DEVICE_ATTR() macro ever␤ * changes, this definition will also have to change.␤ */
128  [NONE]              
129  [NONE]              static
129  [NONE]              struct
129  [STRUCT]            device_attribute
129  [STRUCT]            dev_attr_client_name
129  [NONE]              =
129  [ASSIGN]            {
129  [NONE]              
130  [NONE]              .
130  [C99_MEMBER]        attr
130  [NONE]              =
130  [ASSIGN]            {
130  [NONE]              .
130  [C99_MEMBER]        name
130  [NONE]              =
130  [NONE]              "name"
130  [NONE]              ,
130  [NONE]              .
130  [C99_MEMBER]        mode
130  [NONE]              =
130  [NONE]              S_IRUGO
130  [NONE]              ,
130  [NONE]              .
130  [C99_MEMBER]        owner
130  [NONE]              =
130  [NONE]              THIS_MODULE
130  [ASSIGN]            }
130  [NONE]              ,
130  [NONE]              
131  [NONE]              .
131  [C99_MEMBER]        show
131  [NONE]              =
131  [NONE]              &
131  [NONE]              show_client_name
131  [NONE]              ,
131  [NONE]              
132  [ASSIGN]            }
132  [NONE]              ;
132  [NONE]              
135  [COMMENT_WHOLE]     /* ---------------------------------------------------␤ * registering functions␤ * ---------------------------------------------------␤ */
138  [NONE]              
140  [COMMENT_WHOLE]     /* -----␤ * i2c_add_adapter is called from within the algorithm layer,␤ * when a new hw adapter registers. A new device is register to be␤ * available for clients.␤ */
144  [NONE]              
145  [FUNC_DEF]          int
145  [NONE]              i2c_add_adapter
145  [FUNC_DEF]          (
145  [NONE]              struct
145  [STRUCT]            i2c_adapter
145  [STRUCT]            *
145  [NONE]              adap
145  [FUNC_DEF]          )
145  [NONE]              
146  [FUNC_DEF]          {
146  [NONE]              
147  [NONE]              int
147  [NONE]              id
147  [NONE]              ,
147  [NONE]              res
147  [NONE]              =
147  [NONE]              0
147  [NONE]              ;
147  [NONE]              
148  [NONE]              struct
148  [STRUCT]            list_head
148  [STRUCT]            *
148  [NONE]              item
148  [NONE]              ;
148  [NONE]              
149  [NONE]              struct
149  [STRUCT]            i2c_driver
149  [STRUCT]            *
149  [NONE]              driver
149  [NONE]              ;
149  [NONE]              
151  [NONE]              down
151  [FUNC_CALL]         (
151  [NONE]              &
151  [NONE]              core_lists
151  [FUNC_CALL]         )
151  [NONE]              ;
151  [NONE]              
153  [NONE]              if
153  [IF]                (
153  [NONE]              idr_pre_get
153  [FUNC_CALL]         (
153  [NONE]              &
153  [NONE]              i2c_adapter_idr
153  [NONE]              ,
153  [NONE]              GFP_KERNEL
153  [FUNC_CALL]         )
153  [NONE]              ==
153  [NONE]              0
153  [IF]                )
153  [NONE]              
153  [IF]                {
153  [NONE]              
154  [NONE]              res
154  [NONE]              =
154  [NONE]              -
154  [NONE]              ENOMEM
154  [NONE]              ;
154  [NONE]              
155  [NONE]              goto
155  [NONE]              out_unlock
155  [NONE]              ;
155  [NONE]              
156  [IF]                }
156  [NONE]              
158  [NONE]              res
158  [NONE]              =
158  [NONE]              idr_get_new
158  [FUNC_CALL]         (
158  [NONE]              &
158  [NONE]              i2c_adapter_idr
158  [NONE]              ,
158  [NONE]              adap
158  [NONE]              ,
158  [NONE]              &
158  [NONE]              id
158  [FUNC_CALL]         )
158  [NONE]              ;
158  [NONE]              
159  [NONE]              if
159  [IF]                (
159  [NONE]              res
159  [NONE]              <
159  [NONE]              0
159  [IF]                )
159  [NONE]              
159  [IF]                {
159  [NONE]              
160  [NONE]              if
160  [IF]                (
160  [NONE]              res
160  [NONE]              ==
160  [NONE]              -
160  [NONE]              EAGAIN
160  [IF]                )
160  [IF]                
160  [NONE]              
161  [NONE]              res
161  [NONE]              =
161  [NONE]              -
161  [NONE]              ENOMEM
161  [NONE]              ;
161  [IF]                
161  [NONE]              
162  [NONE]              goto
162  [NONE]              out_unlock
162  [NONE]              ;
162  [NONE]              
163  [IF]                }
163  [NONE]              
165  [NONE]              adap
165  [NONE]              ->
165  [NONE]              nr
165  [NONE]              =
165  [NONE]              id
165  [NONE]              &
165  [NONE]              MAX_ID_MASK
165  [NONE]              ;
165  [NONE]              
166  [NONE]              init_MUTEX
166  [FUNC_CALL]         (
166  [NONE]              &
166  [NONE]              adap
166  [NONE]              ->
166  [NONE]              bus_lock
166  [FUNC_CALL]         )
166  [NONE]              ;
166  [NONE]              
167  [NONE]              init_MUTEX
167  [FUNC_CALL]         (
167  [NONE]              &
167  [NONE]              adap
167  [NONE]              ->
167  [NONE]              clist_lock
167  [FUNC_CALL]         )
167  [NONE]              ;
167  [NONE]              
168  [NONE]              list_add_tail
168  [FUNC_CALL]         (
168  [NONE]              &
168  [NONE]              adap
168  [NONE]              ->
168  [NONE]              list
168  [NONE]              ,
168  [NONE]              &
168  [NONE]              adapters
168  [FUNC_CALL]         )
168  [NONE]              ;
168  [NONE]              
169  [NONE]              INIT_LIST_HEAD
169  [FUNC_CALL]         (
169  [NONE]              &
169  [NONE]              adap
169  [NONE]              ->
169  [NONE]              clients
169  [FUNC_CALL]         )
169  [NONE]              ;
169  [NONE]              
171  [COMMENT_WHOLE]     /* Add the adapter to the driver core.␤	 * If the parent pointer is not set up,␤	 * we add this adapter to the host bus.␤	 */
174  [NONE]              
175  [NONE]              if
175  [IF]                (
175  [NONE]              adap
175  [NONE]              ->
175  [NONE]              dev
175  [NONE]              .
175  [NONE]              parent
175  [NONE]              ==
175  [NONE]              NULL
175  [IF]                )
175  [IF]                
175  [NONE]              
176  [NONE]              adap
176  [NONE]              ->
176  [NONE]              dev
176  [NONE]              .
176  [NONE]              parent
176  [NONE]              =
176  [NONE]              &
176  [NONE]              platform_bus
176  [NONE]              ;
176  [IF]                
176  [NONE]              
177  [NONE]              sprintf
177  [FUNC_CALL]         (
177  [NONE]              adap
177  [NONE]              ->
177  [NONE]              dev
177  [NONE]              .
177  [NONE]              bus_id
177  [NONE]              ,
177  [NONE]              "i2c-%d"
177  [NONE]              ,
177  [NONE]              adap
177  [NONE]              ->
177  [NONE]              nr
177  [FUNC_CALL]         )
177  [NONE]              ;
177  [NONE]              
178  [NONE]              adap
178  [NONE]              ->
178  [NONE]              dev
178  [NONE]              .
178  [NONE]              driver
178  [NONE]              =
178  [NONE]              &
178  [NONE]              i2c_adapter_driver
178  [NONE]              ;
178  [NONE]              
179  [NONE]              adap
179  [NONE]              ->
179  [NONE]              dev
179  [NONE]              .
179  [NONE]              release
179  [NONE]              =
179  [NONE]              &
179  [NONE]              i2c_adapter_dev_release
179  [NONE]              ;
179  [NONE]              
180  [NONE]              device_register
180  [FUNC_CALL]         (
180  [NONE]              &
180  [NONE]              adap
180  [NONE]              ->
180  [NONE]              dev
180  [FUNC_CALL]         )
180  [NONE]              ;
180  [NONE]              
181  [NONE]              device_create_file
181  [FUNC_CALL]         (
181  [NONE]              &
181  [NONE]              adap
181  [NONE]              ->
181  [NONE]              dev
181  [NONE]              ,
181  [NONE]              &
181  [NONE]              dev_attr_name
181  [FUNC_CALL]         )
181  [NONE]              ;
181  [NONE]              
183  [COMMENT_WHOLE]     /* Add this adapter to the i2c_adapter class */
183  [NONE]              
184  [NONE]              memset
184  [FUNC_CALL]         (
184  [NONE]              &
184  [NONE]              adap
184  [NONE]              ->
184  [NONE]              class_dev
184  [NONE]              ,
184  [NONE]              0x00
184  [NONE]              ,
184  [NONE]              sizeof
184  [TYPE_CAST]         (
184  [NONE]              struct
184  [STRUCT]            class_device
184  [STRUCT]            )
184  [FUNC_CALL]         )
184  [NONE]              ;
184  [NONE]              
185  [NONE]              adap
185  [NONE]              ->
185  [NONE]              class_dev
185  [NONE]              .
185  [NONE]              dev
185  [NONE]              =
185  [NONE]              &
185  [NONE]              adap
185  [NONE]              ->
185  [NONE]              dev
185  [NONE]              ;
185  [NONE]              
186  [NONE]              adap
186  [NONE]              ->
186  [NONE]              class_dev
186  [NONE]              .
186  [NONE]              class
186  [NONE]              =
186  [NONE]              &
186  [NONE]              i2c_adapter_class
186  [NONE]              ;
186  [NONE]              
187  [NONE]              strlcpy
187  [FUNC_CALL]         (
187  [NONE]              adap
187  [NONE]              ->
187  [NONE]              class_dev
187  [NONE]              .
187  [NONE]              class_id
187  [NONE]              ,
187  [NONE]              adap
187  [NONE]              ->
187  [NONE]              dev
187  [NONE]              .
187  [NONE]              bus_id
187  [NONE]              ,
187  [NONE]              BUS_ID_SIZE
187  [FUNC_CALL]         )
187  [NONE]              ;
187  [NONE]              
188  [NONE]              class_device_register
188  [FUNC_CALL]         (
188  [NONE]              &
188  [NONE]              adap
188  [NONE]              ->
188  [NONE]              class_dev
188  [FUNC_CALL]         )
188  [NONE]              ;
188  [NONE]              
190  [NONE]              dev_dbg
190  [FUNC_CALL]         (
190  [NONE]              &
190  [NONE]              adap
190  [NONE]              ->
190  [NONE]              dev
190  [NONE]              ,
190  [NONE]              "adapter [%s] registered\n"
190  [NONE]              ,
190  [NONE]              adap
190  [NONE]              ->
190  [NONE]              name
190  [FUNC_CALL]         )
190  [NONE]              ;
190  [NONE]              
192  [COMMENT_WHOLE]     /* inform drivers of new adapters */
192  [NONE]              
193  [NONE]              list_for_each
193  [FUNC_CALL]         (
193  [NONE]              item
193  [NONE]              ,
193  [NONE]              &
193  [NONE]              drivers
193  [FUNC_CALL]         )
193  [FUNC_CALL]         {
193  [NONE]              
194  [NONE]              driver
194  [NONE]              =
194  [NONE]              list_entry
194  [FUNC_CALL]         (
194  [NONE]              item
194  [NONE]              ,
194  [NONE]              struct
194  [STRUCT]            i2c_driver
194  [STRUCT]            ,
194  [NONE]              list
194  [FUNC_CALL]         )
194  [NONE]              ;
194  [NONE]              
195  [NONE]              if
195  [IF]                (
195  [NONE]              driver
195  [NONE]              ->
195  [NONE]              flags
195  [NONE]              &
195  [NONE]              I2C_DF_NOTIFY
195  [IF]                )
195  [IF]                
195  [NONE]              
196  [COMMENT_WHOLE]     /* We ignore the return code; if it fails, too bad */
196  [NONE]              
197  [NONE]              driver
197  [NONE]              ->
197  [NONE]              attach_adapter
197  [FUNC_CALL]         (
197  [NONE]              adap
197  [FUNC_CALL]         )
197  [NONE]              ;
197  [IF]                
197  [NONE]              
198  [FUNC_CALL]         }
198  [NONE]              
200  [NONE]              out_unlock
200  [NONE]              :
200  [NONE]              
201  [NONE]              up
201  [FUNC_CALL]         (
201  [NONE]              &
201  [NONE]              core_lists
201  [FUNC_CALL]         )
201  [NONE]              ;
201  [NONE]              
202  [NONE]              return
202  [NONE]              res
202  [NONE]              ;
202  [NONE]              
203  [FUNC_DEF]          }
203  [NONE]              
206  [FUNC_DEF]          int
206  [NONE]              i2c_del_adapter
206  [FUNC_DEF]          (
206  [NONE]              struct
206  [STRUCT]            i2c_adapter
206  [STRUCT]            *
206  [NONE]              adap
206  [FUNC_DEF]          )
206  [NONE]              
207  [FUNC_DEF]          {
207  [NONE]              
208  [NONE]              struct
208  [STRUCT]            list_head
208  [STRUCT]            *
208  [NONE]              item
208  [NONE]              ,
208  [NONE]              *
208  [NONE]              _n
208  [NONE]              ;
208  [NONE]              
209  [NONE]              struct
209  [STRUCT]            i2c_adapter
209  [STRUCT]            *
209  [NONE]              adap_from_list
209  [NONE]              ;
209  [NONE]              
210  [NONE]              struct
210  [STRUCT]            i2c_driver
210  [STRUCT]            *
210  [NONE]              driver
210  [NONE]              ;
210  [NONE]              
211  [NONE]              struct
211  [STRUCT]            i2c_client
211  [STRUCT]            *
211  [NONE]              client
211  [NONE]              ;
211  [NONE]              
212  [NONE]              int
212  [NONE]              res
212  [NONE]              =
212  [NONE]              0
212  [NONE]              ;
212  [NONE]              
214  [NONE]              down
214  [FUNC_CALL]         (
214  [NONE]              &
214  [NONE]              core_lists
214  [FUNC_CALL]         )
214  [NONE]              ;
214  [NONE]              
216  [COMMENT_WHOLE]     /* First make sure that this adapter was ever added */
216  [NONE]              
217  [NONE]              list_for_each_entry
217  [FUNC_CALL]         (
217  [NONE]              adap_from_list
217  [NONE]              ,
217  [NONE]              &
217  [NONE]              adapters
217  [NONE]              ,
217  [NONE]              list
217  [FUNC_CALL]         )
217  [FUNC_CALL]         {
217  [NONE]              
218  [NONE]              if
218  [IF]                (
218  [NONE]              adap_from_list
218  [NONE]              ==
218  [NONE]              adap
218  [IF]                )
218  [IF]                
218  [NONE]              
219  [NONE]              break
219  [NONE]              ;
219  [IF]                
219  [NONE]              
220  [FUNC_CALL]         }
220  [NONE]              
221  [NONE]              if
221  [IF]                (
221  [NONE]              adap_from_list
221  [NONE]              !=
221  [NONE]              adap
221  [IF]                )
221  [NONE]              
221  [IF]                {
221  [NONE]              
222  [NONE]              pr_debug
222  [FUNC_CALL]         (
222  [NONE]              "i2c-core: attempting to delete unregistered "
222  [NONE]              
223  [NONE]              "adapter [%s]\n"
223  [NONE]              ,
223  [NONE]              adap
223  [NONE]              ->
223  [NONE]              name
223  [FUNC_CALL]         )
223  [NONE]              ;
223  [NONE]              
224  [NONE]              res
224  [NONE]              =
224  [NONE]              -
224  [NONE]              EINVAL
224  [NONE]              ;
224  [NONE]              
225  [NONE]              goto
225  [NONE]              out_unlock
225  [NONE]              ;
225  [NONE]              
226  [IF]                }
226  [NONE]              
228  [NONE]              list_for_each
228  [FUNC_CALL]         (
228  [NONE]              item
228  [NONE]              ,
228  [NONE]              &
228  [NONE]              drivers
228  [FUNC_CALL]         )
228  [FUNC_CALL]         {
228  [NONE]              
229  [NONE]              driver
229  [NONE]              =
229  [NONE]              list_entry
229  [FUNC_CALL]         (
229  [NONE]              item
229  [NONE]              ,
229  [NONE]              struct
229  [STRUCT]            i2c_driver
229  [STRUCT]            ,
229  [NONE]              list
229  [FUNC_CALL]         )
229  [NONE]              ;
229  [NONE]              
230  [NONE]              if
230  [IF]                (
230  [NONE]              driver
230  [NONE]              ->
230  [NONE]              detach_adapter
230  [IF]                )
230  [IF]                
230  [NONE]              
231  [NONE]              if
231  [IF]                (
231  [NONE]              (
231  [NONE]              res
231  [NONE]              =
231  [NONE]              driver
231  [NONE]              ->
231  [NONE]              detach_adapter
231  [FUNC_CALL]         (
231  [NONE]              adap
231  [FUNC_CALL]         )
231  [NONE]              )
231  [IF]                )
231  [NONE]              
231  [IF]                {
231  [NONE]              
232  [NONE]              dev_err
232  [FUNC_CALL]         (
232  [NONE]              &
232  [NONE]              adap
232  [NONE]              ->
232  [NONE]              dev
232  [NONE]              ,
232  [NONE]              "detach_adapter failed "
232  [NONE]              
233  [NONE]              "for driver [%s]\n"
233  [NONE]              ,
233  [NONE]              driver
233  [NONE]              ->
233  [NONE]              name
233  [FUNC_CALL]         )
233  [NONE]              ;
233  [NONE]              
234  [NONE]              goto
234  [NONE]              out_unlock
234  [NONE]              ;
234  [NONE]              
235  [IF]                }
235  [IF]                
235  [NONE]              
236  [FUNC_CALL]         }
236  [NONE]              
238  [COMMENT_WHOLE]     /* detach any active clients. This must be done first, because␤	 * it can fail; in which case we give up. */
239  [NONE]              
240  [NONE]              list_for_each_safe
240  [FUNC_CALL]         (
240  [NONE]              item
240  [NONE]              ,
240  [NONE]              _n
240  [NONE]              ,
240  [NONE]              &
240  [NONE]              adap
240  [NONE]              ->
240  [NONE]              clients
240  [FUNC_CALL]         )
240  [FUNC_CALL]         {
240  [NONE]              
241  [NONE]              client
241  [NONE]              =
241  [NONE]              list_entry
241  [FUNC_CALL]         (
241  [NONE]              item
241  [NONE]              ,
241  [NONE]              struct
241  [STRUCT]            i2c_client
241  [STRUCT]            ,
241  [NONE]              list
241  [FUNC_CALL]         )
241  [NONE]              ;
241  [NONE]              
243  [COMMENT_WHOLE]     /* detaching devices is unconditional of the set notify␤		 * flag, as _all_ clients that reside on the adapter␤		 * must be deleted, as this would cause invalid states.␤		 */
246  [NONE]              
247  [NONE]              if
247  [IF]                (
247  [NONE]              (
247  [NONE]              res
247  [NONE]              =
247  [NONE]              client
247  [NONE]              ->
247  [NONE]              driver
247  [NONE]              ->
247  [NONE]              detach_client
247  [FUNC_CALL]         (
247  [NONE]              client
247  [FUNC_CALL]         )
247  [NONE]              )
247  [IF]                )
247  [NONE]              
247  [IF]                {
247  [NONE]              
248  [NONE]              dev_err
248  [FUNC_CALL]         (
248  [NONE]              &
248  [NONE]              adap
248  [NONE]              ->
248  [NONE]              dev
248  [NONE]              ,
248  [NONE]              "detach_client failed for client "
248  [NONE]              
249  [NONE]              "[%s] at address 0x%02x\n"
249  [NONE]              ,
249  [NONE]              client
249  [NONE]              ->
249  [NONE]              name
249  [NONE]              ,
249  [NONE]              
250  [NONE]              client
250  [NONE]              ->
250  [NONE]              addr
250  [FUNC_CALL]         )
250  [NONE]              ;
250  [NONE]              
251  [NONE]              goto
251  [NONE]              out_unlock
251  [NONE]              ;
251  [NONE]              
252  [IF]                }
252  [NONE]              
253  [FUNC_CALL]         }
253  [NONE]              
255  [COMMENT_WHOLE]     /* clean up the sysfs representation */
255  [NONE]              
256  [NONE]              init_completion
256  [FUNC_CALL]         (
256  [NONE]              &
256  [NONE]              adap
256  [NONE]              ->
256  [NONE]              dev_released
256  [FUNC_CALL]         )
256  [NONE]              ;
256  [NONE]              
257  [NONE]              init_completion
257  [FUNC_CALL]         (
257  [NONE]              &
257  [NONE]              adap
257  [NONE]              ->
257  [NONE]              class_dev_released
257  [FUNC_CALL]         )
257  [NONE]              ;
257  [NONE]              
258  [NONE]              class_device_unregister
258  [FUNC_CALL]         (
258  [NONE]              &
258  [NONE]              adap
258  [NONE]              ->
258  [NONE]              class_dev
258  [FUNC_CALL]         )
258  [NONE]              ;
258  [NONE]              
259  [NONE]              device_remove_file
259  [FUNC_CALL]         (
259  [NONE]              &
259  [NONE]              adap
259  [NONE]              ->
259  [NONE]              dev
259  [NONE]              ,
259  [NONE]              &
259  [NONE]              dev_attr_name
259  [FUNC_CALL]         )
259  [NONE]              ;
259  [NONE]              
260  [NONE]              device_unregister
260  [FUNC_CALL]         (
260  [NONE]              &
260  [NONE]              adap
260  [NONE]              ->
260  [NONE]              dev
260  [FUNC_CALL]         )
260  [NONE]              ;
260  [NONE]              
261  [NONE]              list_del
261  [FUNC_CALL]         (
261  [NONE]              &
261  [NONE]              adap
261  [NONE]              ->
261  [NONE]              list
261  [FUNC_CALL]         )
261  [NONE]              ;
261  [NONE]              
263  [COMMENT_WHOLE]     /* wait for sysfs to drop all references */
263  [NONE]              
264  [NONE]              wait_for_completion
264  [FUNC_CALL]         (
264  [NONE]              &
264  [NONE]              adap
264  [NONE]              ->
264  [NONE]              dev_released
264  [FUNC_CALL]         )
264  [NONE]              ;
264  [NONE]              
265  [NONE]              wait_for_completion
265  [FUNC_CALL]         (
265  [NONE]              &
265  [NONE]              adap
265  [NONE]              ->
265  [NONE]              class_dev_released
265  [FUNC_CALL]         )
265  [NONE]              ;
265  [NONE]              
267  [COMMENT_WHOLE]     /* free dynamically allocated bus id */
267  [NONE]              
268  [NONE]              idr_remove
268  [FUNC_CALL]         (
268  [NONE]              &
268  [NONE]              i2c_adapter_idr
268  [NONE]              ,
268  [NONE]              adap
268  [NONE]              ->
268  [NONE]              nr
268  [FUNC_CALL]         )
268  [NONE]              ;
268  [NONE]              
270  [NONE]              dev_dbg
270  [FUNC_CALL]         (
270  [NONE]              &
270  [NONE]              adap
270  [NONE]              ->
270  [NONE]              dev
270  [NONE]              ,
270  [NONE]              "adapter [%s] unregistered\n"
270  [NONE]              ,
270  [NONE]              adap
270  [NONE]              ->
270  [NONE]              name
270  [FUNC_CALL]         )
270  [NONE]              ;
270  [NONE]              
272  [NONE]              out_unlock
272  [NONE]              :
272  [NONE]              
273  [NONE]              up
273  [FUNC_CALL]         (
273  [NONE]              &
273  [NONE]              core_lists
273  [FUNC_CALL]         )
273  [NONE]              ;
273  [NONE]              
274  [NONE]              return
274  [NONE]              res
274  [NONE]              ;
274  [NONE]              
275  [FUNC_DEF]          }
275  [NONE]              
278  [COMMENT_WHOLE]     /* -----␤ * What follows is the "upwards" interface: commands for talking to clients,␤ * which implement the functions to access the physical information of the␤ * chips.␤ */
282  [NONE]              
284  [FUNC_DEF]          int
284  [NONE]              i2c_add_driver
284  [FUNC_DEF]          (
284  [NONE]              struct
284  [STRUCT]            i2c_driver
284  [STRUCT]            *
284  [NONE]              driver
284  [FUNC_DEF]          )
284  [NONE]              
285  [FUNC_DEF]          {
285  [NONE]              
286  [NONE]              struct
286  [STRUCT]            list_head
286  [STRUCT]            *
286  [NONE]              item
286  [NONE]              ;
286  [NONE]              
287  [NONE]              struct
287  [STRUCT]            i2c_adapter
287  [STRUCT]            *
287  [NONE]              adapter
287  [NONE]              ;
287  [NONE]              
288  [NONE]              int
288  [NONE]              res
288  [NONE]              =
288  [NONE]              0
288  [NONE]              ;
288  [NONE]              
290  [NONE]              down
290  [FUNC_CALL]         (
290  [NONE]              &
290  [NONE]              core_lists
290  [FUNC_CALL]         )
290  [NONE]              ;
290  [NONE]              
292  [COMMENT_WHOLE]     /* add the driver to the list of i2c drivers in the driver core */
292  [NONE]              
293  [NONE]              driver
293  [NONE]              ->
293  [NONE]              driver
293  [NONE]              .
293  [NONE]              name
293  [NONE]              =
293  [NONE]              driver
293  [NONE]              ->
293  [NONE]              name
293  [NONE]              ;
293  [NONE]              
294  [NONE]              driver
294  [NONE]              ->
294  [NONE]              driver
294  [NONE]              .
294  [NONE]              bus
294  [NONE]              =
294  [NONE]              &
294  [NONE]              i2c_bus_type
294  [NONE]              ;
294  [NONE]              
295  [NONE]              driver
295  [NONE]              ->
295  [NONE]              driver
295  [NONE]              .
295  [NONE]              probe
295  [NONE]              =
295  [NONE]              i2c_device_probe
295  [NONE]              ;
295  [NONE]              
296  [NONE]              driver
296  [NONE]              ->
296  [NONE]              driver
296  [NONE]              .
296  [NONE]              remove
296  [NONE]              =
296  [NONE]              i2c_device_remove
296  [NONE]              ;
296  [NONE]              
298  [NONE]              res
298  [NONE]              =
298  [NONE]              driver_register
298  [FUNC_CALL]         (
298  [NONE]              &
298  [NONE]              driver
298  [NONE]              ->
298  [NONE]              driver
298  [FUNC_CALL]         )
298  [NONE]              ;
298  [NONE]              
299  [NONE]              if
299  [IF]                (
299  [NONE]              res
299  [IF]                )
299  [IF]                
299  [NONE]              
300  [NONE]              goto
300  [NONE]              out_unlock
300  [NONE]              ;
300  [IF]                
300  [NONE]              
302  [NONE]              list_add_tail
302  [FUNC_CALL]         (
302  [NONE]              &
302  [NONE]              driver
302  [NONE]              ->
302  [NONE]              list
302  [NONE]              ,
302  [NONE]              &
302  [NONE]              drivers
302  [FUNC_CALL]         )
302  [NONE]              ;
302  [NONE]              
303  [NONE]              pr_debug
303  [FUNC_CALL]         (
303  [NONE]              "i2c-core: driver [%s] registered\n"
303  [NONE]              ,
303  [NONE]              driver
303  [NONE]              ->
303  [NONE]              name
303  [FUNC_CALL]         )
303  [NONE]              ;
303  [NONE]              
305  [COMMENT_WHOLE]     /* now look for instances of driver on our adapters */
305  [NONE]              
306  [NONE]              if
306  [IF]                (
306  [NONE]              driver
306  [NONE]              ->
306  [NONE]              flags
306  [NONE]              &
306  [NONE]              I2C_DF_NOTIFY
306  [IF]                )
306  [NONE]              
306  [IF]                {
306  [NONE]              
307  [NONE]              list_for_each
307  [FUNC_CALL]         (
307  [NONE]              item
307  [NONE]              ,
307  [NONE]              &
307  [NONE]              adapters
307  [FUNC_CALL]         )
307  [FUNC_CALL]         {
307  [NONE]              
308  [NONE]              adapter
308  [NONE]              =
308  [NONE]              list_entry
308  [FUNC_CALL]         (
308  [NONE]              item
308  [NONE]              ,
308  [NONE]              struct
308  [STRUCT]            i2c_adapter
308  [STRUCT]            ,
308  [NONE]              list
308  [FUNC_CALL]         )
308  [NONE]              ;
308  [NONE]              
309  [NONE]              driver
309  [NONE]              ->
309  [NONE]              attach_adapter
309  [FUNC_CALL]         (
309  [NONE]              adapter
309  [FUNC_CALL]         )
309  [NONE]              ;
309  [NONE]              
310  [FUNC_CALL]         }
310  [NONE]              
311  [IF]                }
311  [NONE]              
313  [NONE]              out_unlock
313  [NONE]              :
313  [NONE]              
314  [NONE]              up
314  [FUNC_CALL]         (
314  [NONE]              &
314  [NONE]              core_lists
314  [FUNC_CALL]         )
314  [NONE]              ;
314  [NONE]              
315  [NONE]              return
315  [NONE]              res
315  [NONE]              ;
315  [NONE]              
316  [FUNC_DEF]          }
316  [NONE]              
318  [FUNC_DEF]          int
318  [NONE]              i2c_del_driver
318  [FUNC_DEF]          (
318  [NONE]              struct
318  [STRUCT]            i2c_driver
318  [STRUCT]            *
318  [NONE]              driver
318  [FUNC_DEF]          )
318  [NONE]              
319  [FUNC_DEF]          {
319  [NONE]              
320  [NONE]              struct
320  [STRUCT]            list_head
320  [STRUCT]            *
320  [NONE]              item1
320  [NONE]              ,
320  [NONE]              *
320  [NONE]              item2
320  [NONE]              ,
320  [NONE]              *
320  [NONE]              _n
320  [NONE]              ;
320  [NONE]              
321  [NONE]              struct
321  [STRUCT]            i2c_client
321  [STRUCT]            *
321  [NONE]              client
321  [NONE]              ;
321  [NONE]              
322  [NONE]              struct
322  [STRUCT]            i2c_adapter
322  [STRUCT]            *
322  [NONE]              adap
322  [NONE]              ;
322  [NONE]              
324  [NONE]              int
324  [NONE]              res
324  [NONE]              =
324  [NONE]              0
324  [NONE]              ;
324  [NONE]              
326  [NONE]              down
326  [FUNC_CALL]         (
326  [NONE]              &
326  [NONE]              core_lists
326  [FUNC_CALL]         )
326  [NONE]              ;
326  [NONE]              
328  [COMMENT_WHOLE]     /* Have a look at each adapter, if clients of this driver are still␤	 * attached. If so, detach them to be able to kill the driver␤	 * afterwards.␤	 *␤	 * Removing clients does not depend on the notify flag, else␤	 * invalid operation might (will!) result, when using stale client␤	 * pointers.␤	 */
335  [NONE]              
336  [NONE]              list_for_each
336  [FUNC_CALL]         (
336  [NONE]              item1
336  [NONE]              ,
336  [NONE]              &
336  [NONE]              adapters
336  [FUNC_CALL]         )
336  [FUNC_CALL]         {
336  [NONE]              
337  [NONE]              adap
337  [NONE]              =
337  [NONE]              list_entry
337  [FUNC_CALL]         (
337  [NONE]              item1
337  [NONE]              ,
337  [NONE]              struct
337  [STRUCT]            i2c_adapter
337  [STRUCT]            ,
337  [NONE]              list
337  [FUNC_CALL]         )
337  [NONE]              ;
337  [NONE]              
338  [NONE]              if
338  [IF]                (
338  [NONE]              driver
338  [NONE]              ->
338  [NONE]              detach_adapter
338  [IF]                )
338  [NONE]              
338  [IF]                {
338  [NONE]              
339  [NONE]              if
339  [IF]                (
339  [NONE]              (
339  [NONE]              res
339  [NONE]              =
339  [NONE]              driver
339  [NONE]              ->
339  [NONE]              detach_adapter
339  [FUNC_CALL]         (
339  [NONE]              adap
339  [FUNC_CALL]         )
339  [NONE]              )
339  [IF]                )
339  [NONE]              
339  [IF]                {
339  [NONE]              
340  [NONE]              dev_err
340  [FUNC_CALL]         (
340  [NONE]              &
340  [NONE]              adap
340  [NONE]              ->
340  [NONE]              dev
340  [NONE]              ,
340  [NONE]              "detach_adapter failed "
340  [NONE]              
341  [NONE]              "for driver [%s]\n"
341  [NONE]              ,
341  [NONE]              driver
341  [NONE]              ->
341  [NONE]              name
341  [FUNC_CALL]         )
341  [NONE]              ;
341  [NONE]              
342  [NONE]              goto
342  [NONE]              out_unlock
342  [NONE]              ;
342  [NONE]              
343  [IF]                }
343  [NONE]              
344  [IF]                }
344  [NONE]              
344  [NONE]              else
344  [NONE]              
344  [ELSE]              {
344  [NONE]              
345  [NONE]              list_for_each_safe
345  [FUNC_CALL]         (
345  [NONE]              item2
345  [NONE]              ,
345  [NONE]              _n
345  [NONE]              ,
345  [NONE]              &
345  [NONE]              adap
345  [NONE]              ->
345  [NONE]              clients
345  [FUNC_CALL]         )
345  [FUNC_CALL]         {
345  [NONE]              
346  [NONE]              client
346  [NONE]              =
346  [NONE]              list_entry
346  [FUNC_CALL]         (
346  [NONE]              item2
346  [NONE]              ,
346  [NONE]              struct
346  [STRUCT]            i2c_client
346  [STRUCT]            ,
346  [NONE]              list
346  [FUNC_CALL]         )
346  [NONE]              ;
346  [NONE]              
347  [NONE]              if
347  [IF]                (
347  [NONE]              client
347  [NONE]              ->
347  [NONE]              driver
347  [NONE]              !=
347  [NONE]              driver
347  [IF]                )
347  [IF]                
347  [NONE]              
348  [NONE]              continue
348  [NONE]              ;
348  [IF]                
348  [NONE]              
349  [NONE]              dev_dbg
349  [FUNC_CALL]         (
349  [NONE]              &
349  [NONE]              adap
349  [NONE]              ->
349  [NONE]              dev
349  [NONE]              ,
349  [NONE]              "detaching client [%s] "
349  [NONE]              
350  [NONE]              "at 0x%02x\n"
350  [NONE]              ,
350  [NONE]              client
350  [NONE]              ->
350  [NONE]              name
350  [NONE]              ,
350  [NONE]              
351  [NONE]              client
351  [NONE]              ->
351  [NONE]              addr
351  [FUNC_CALL]         )
351  [NONE]              ;
351  [NONE]              
352  [NONE]              if
352  [IF]                (
352  [NONE]              (
352  [NONE]              res
352  [NONE]              =
352  [NONE]              driver
352  [NONE]              ->
352  [NONE]              detach_client
352  [FUNC_CALL]         (
352  [NONE]              client
352  [FUNC_CALL]         )
352  [NONE]              )
352  [IF]                )
352  [NONE]              
352  [IF]                {
352  [NONE]              
353  [NONE]              dev_err
353  [FUNC_CALL]         (
353  [NONE]              &
353  [NONE]              adap
353  [NONE]              ->
353  [NONE]              dev
353  [NONE]              ,
353  [NONE]              "detach_client "
353  [NONE]              
354  [NONE]              "failed for client [%s] at "
354  [NONE]              
355  [NONE]              "0x%02x\n"
355  [NONE]              ,
355  [NONE]              client
355  [NONE]              ->
355  [NONE]              name
355  [NONE]              ,
355  [NONE]              
356  [NONE]              client
356  [NONE]              ->
356  [NONE]              addr
356  [FUNC_CALL]         )
356  [NONE]              ;
356  [NONE]              
357  [NONE]              goto
357  [NONE]              out_unlock
357  [NONE]              ;
357  [NONE]              
358  [IF]                }
358  [NONE]              
359  [FUNC_CALL]         }
359  [NONE]              
360  [ELSE]              }
360  [NONE]              
361  [FUNC_CALL]         }
361  [NONE]              
363  [NONE]              driver_unregister
363  [FUNC_CALL]         (
363  [NONE]              &
363  [NONE]              driver
363  [NONE]              ->
363  [NONE]              driver
363  [FUNC_CALL]         )
363  [NONE]              ;
363  [NONE]              
364  [NONE]              list_del
364  [FUNC_CALL]         (
364  [NONE]              &
364  [NONE]              driver
364  [NONE]              ->
364  [NONE]              list
364  [FUNC_CALL]         )
364  [NONE]              ;
364  [NONE]              
365  [NONE]              pr_debug
365  [FUNC_CALL]         (
365  [NONE]              "i2c-core: driver [%s] unregistered\n"
365  [NONE]              ,
365  [NONE]              driver
365  [NONE]              ->
365  [NONE]              name
365  [FUNC_CALL]         )
365  [NONE]              ;
365  [NONE]              
367  [NONE]              out_unlock
367  [NONE]              :
367  [NONE]              
368  [NONE]              up
368  [FUNC_CALL]         (
368  [NONE]              &
368  [NONE]              core_lists
368  [FUNC_CALL]         )
368  [NONE]              ;
368  [NONE]              
369  [NONE]              return
369  [NONE]              0
369  [NONE]              ;
369  [NONE]              
370  [FUNC_DEF]          }
370  [NONE]              
372  [FUNC_DEF]          static
372  [FUNC_DEF]          int
372  [NONE]              __i2c_check_addr
372  [FUNC_DEF]          (
372  [NONE]              struct
372  [STRUCT]            i2c_adapter
372  [STRUCT]            *
372  [NONE]              adapter
372  [NONE]              ,
372  [NONE]              unsigned
372  [NONE]              int
372  [NONE]              addr
372  [FUNC_DEF]          )
372  [NONE]              
373  [FUNC_DEF]          {
373  [NONE]              
374  [NONE]              struct
374  [STRUCT]            list_head
374  [STRUCT]            *
374  [NONE]              item
374  [NONE]              ;
374  [NONE]              
375  [NONE]              struct
375  [STRUCT]            i2c_client
375  [STRUCT]            *
375  [NONE]              client
375  [NONE]              ;
375  [NONE]              
377  [NONE]              list_for_each
377  [FUNC_CALL]         (
377  [NONE]              item
377  [NONE]              ,
377  [NONE]              &
377  [NONE]              adapter
377  [NONE]              ->
377  [NONE]              clients
377  [FUNC_CALL]         )
377  [FUNC_CALL]         {
377  [NONE]              
378  [NONE]              client
378  [NONE]              =
378  [NONE]              list_entry
378  [FUNC_CALL]         (
378  [NONE]              item
378  [NONE]              ,
378  [NONE]              struct
378  [STRUCT]            i2c_client
378  [STRUCT]            ,
378  [NONE]              list
378  [FUNC_CALL]         )
378  [NONE]              ;
378  [NONE]              
379  [NONE]              if
379  [IF]                (
379  [NONE]              client
379  [NONE]              ->
379  [NONE]              addr
379  [NONE]              ==
379  [NONE]              addr
379  [IF]                )
379  [IF]                
379  [NONE]              
380  [NONE]              return
380  [NONE]              -
380  [NONE]              EBUSY
380  [NONE]              ;
380  [IF]                
380  [NONE]              
381  [FUNC_CALL]         }
381  [NONE]              
382  [NONE]              return
382  [NONE]              0
382  [NONE]              ;
382  [NONE]              
383  [FUNC_DEF]          }
383  [NONE]              
385  [FUNC_DEF]          int
385  [NONE]              i2c_check_addr
385  [FUNC_DEF]          (
385  [NONE]              struct
385  [STRUCT]            i2c_adapter
385  [STRUCT]            *
385  [NONE]              adapter
385  [NONE]              ,
385  [NONE]              int
385  [NONE]              addr
385  [FUNC_DEF]          )
385  [NONE]              
386  [FUNC_DEF]          {
386  [NONE]              
387  [NONE]              int
387  [NONE]              rval
387  [NONE]              ;
387  [NONE]              
389  [NONE]              down
389  [FUNC_CALL]         (
389  [NONE]              &
389  [NONE]              adapter
389  [NONE]              ->
389  [NONE]              clist_lock
389  [FUNC_CALL]         )
389  [NONE]              ;
389  [NONE]              
390  [NONE]              rval
390  [NONE]              =
390  [NONE]              __i2c_check_addr
390  [FUNC_CALL]         (
390  [NONE]              adapter
390  [NONE]              ,
390  [NONE]              addr
390  [FUNC_CALL]         )
390  [NONE]              ;
390  [NONE]              
391  [NONE]              up
391  [FUNC_CALL]         (
391  [NONE]              &
391  [NONE]              adapter
391  [NONE]              ->
391  [NONE]              clist_lock
391  [FUNC_CALL]         )
391  [NONE]              ;
391  [NONE]              
393  [NONE]              return
393  [NONE]              rval
393  [NONE]              ;
393  [NONE]              
394  [FUNC_DEF]          }
394  [NONE]              
396  [FUNC_DEF]          int
396  [NONE]              i2c_attach_client
396  [FUNC_DEF]          (
396  [NONE]              struct
396  [STRUCT]            i2c_client
396  [STRUCT]            *
396  [NONE]              client
396  [FUNC_DEF]          )
396  [NONE]              
397  [FUNC_DEF]          {
397  [NONE]              
398  [NONE]              struct
398  [STRUCT]            i2c_adapter
398  [STRUCT]            *
398  [NONE]              adapter
398  [NONE]              =
398  [NONE]              client
398  [NONE]              ->
398  [NONE]              adapter
398  [NONE]              ;
398  [NONE]              
400  [NONE]              down
400  [FUNC_CALL]         (
400  [NONE]              &
400  [NONE]              adapter
400  [NONE]              ->
400  [NONE]              clist_lock
400  [FUNC_CALL]         )
400  [NONE]              ;
400  [NONE]              
401  [NONE]              if
401  [IF]                (
401  [NONE]              __i2c_check_addr
401  [FUNC_CALL]         (
401  [NONE]              client
401  [NONE]              ->
401  [NONE]              adapter
401  [NONE]              ,
401  [NONE]              client
401  [NONE]              ->
401  [NONE]              addr
401  [FUNC_CALL]         )
401  [IF]                )
401  [NONE]              
401  [IF]                {
401  [NONE]              
402  [NONE]              up
402  [FUNC_CALL]         (
402  [NONE]              &
402  [NONE]              adapter
402  [NONE]              ->
402  [NONE]              clist_lock
402  [FUNC_CALL]         )
402  [NONE]              ;
402  [NONE]              
403  [NONE]              return
403  [NONE]              -
403  [NONE]              EBUSY
403  [NONE]              ;
403  [NONE]              
404  [IF]                }
404  [NONE]              
405  [NONE]              list_add_tail
405  [FUNC_CALL]         (
405  [NONE]              &
405  [NONE]              client
405  [NONE]              ->
405  [NONE]              list
405  [NONE]              ,
405  [NONE]              &
405  [NONE]              adapter
405  [NONE]              ->
405  [NONE]              clients
405  [FUNC_CALL]         )
405  [NONE]              ;
405  [NONE]              
406  [NONE]              up
406  [FUNC_CALL]         (
406  [NONE]              &
406  [NONE]              adapter
406  [NONE]              ->
406  [NONE]              clist_lock
406  [FUNC_CALL]         )
406  [NONE]              ;
406  [NONE]              
408  [NONE]              if
408  [IF]                (
408  [NONE]              adapter
408  [NONE]              ->
408  [NONE]              client_register
408  [IF]                )
408  [NONE]              
408  [IF]                {
408  [NONE]              
409  [NONE]              if
409  [IF]                (
409  [NONE]              adapter
409  [NONE]              ->
409  [NONE]              client_register
409  [FUNC_CALL]         (
409  [NONE]              client
409  [FUNC_CALL]         )
409  [IF]                )
409  [NONE]              
409  [IF]                {
409  [NONE]              
410  [NONE]              dev_dbg
410  [FUNC_CALL]         (
410  [NONE]              &
410  [NONE]              adapter
410  [NONE]              ->
410  [NONE]              dev
410  [NONE]              ,
410  [NONE]              "client_register "
410  [NONE]              
411  [NONE]              "failed for client [%s] at 0x%02x\n"
411  [NONE]              ,
411  [NONE]              
412  [NONE]              client
412  [NONE]              ->
412  [NONE]              name
412  [NONE]              ,
412  [NONE]              client
412  [NONE]              ->
412  [NONE]              addr
412  [FUNC_CALL]         )
412  [NONE]              ;
412  [NONE]              
413  [IF]                }
413  [NONE]              
414  [IF]                }
414  [NONE]              
416  [NONE]              if
416  [IF]                (
416  [NONE]              client
416  [NONE]              ->
416  [NONE]              flags
416  [NONE]              &
416  [NONE]              I2C_CLIENT_ALLOW_USE
416  [IF]                )
416  [IF]                
416  [NONE]              
417  [NONE]              client
417  [NONE]              ->
417  [NONE]              usage_count
417  [NONE]              =
417  [NONE]              0
417  [NONE]              ;
417  [IF]                
417  [NONE]              
419  [NONE]              client
419  [NONE]              ->
419  [NONE]              dev
419  [NONE]              .
419  [NONE]              parent
419  [NONE]              =
419  [NONE]              &
419  [NONE]              client
419  [NONE]              ->
419  [NONE]              adapter
419  [NONE]              ->
419  [NONE]              dev
419  [NONE]              ;
419  [NONE]              
420  [NONE]              client
420  [NONE]              ->
420  [NONE]              dev
420  [NONE]              .
420  [NONE]              driver
420  [NONE]              =
420  [NONE]              &
420  [NONE]              client
420  [NONE]              ->
420  [NONE]              driver
420  [NONE]              ->
420  [NONE]              driver
420  [NONE]              ;
420  [NONE]              
421  [NONE]              client
421  [NONE]              ->
421  [NONE]              dev
421  [NONE]              .
421  [NONE]              bus
421  [NONE]              =
421  [NONE]              &
421  [NONE]              i2c_bus_type
421  [NONE]              ;
421  [NONE]              
422  [NONE]              client
422  [NONE]              ->
422  [NONE]              dev
422  [NONE]              .
422  [NONE]              release
422  [NONE]              =
422  [NONE]              &
422  [NONE]              i2c_client_release
422  [NONE]              ;
422  [NONE]              
424  [NONE]              snprintf
424  [FUNC_CALL]         (
424  [NONE]              &
424  [NONE]              client
424  [NONE]              ->
424  [NONE]              dev
424  [NONE]              .
424  [NONE]              bus_id
424  [NONE]              [
424  [NONE]              0
424  [NONE]              ]
424  [NONE]              ,
424  [NONE]              sizeof
424  [TYPE_CAST]         (
424  [NONE]              client
424  [NONE]              ->
424  [NONE]              dev
424  [NONE]              .
424  [NONE]              bus_id
424  [TYPE_CAST]         )
424  [NONE]              ,
424  [NONE]              
425  [NONE]              "%d-%04x"
425  [NONE]              ,
425  [NONE]              i2c_adapter_id
425  [FUNC_CALL]         (
425  [NONE]              adapter
425  [FUNC_CALL]         )
425  [NONE]              ,
425  [NONE]              client
425  [NONE]              ->
425  [NONE]              addr
425  [FUNC_CALL]         )
425  [NONE]              ;
425  [NONE]              
426  [NONE]              dev_dbg
426  [FUNC_CALL]         (
426  [NONE]              &
426  [NONE]              adapter
426  [NONE]              ->
426  [NONE]              dev
426  [NONE]              ,
426  [NONE]              "client [%s] registered with bus id %s\n"
426  [NONE]              ,
426  [NONE]              
427  [NONE]              client
427  [NONE]              ->
427  [NONE]              name
427  [NONE]              ,
427  [NONE]              client
427  [NONE]              ->
427  [NONE]              dev
427  [NONE]              .
427  [NONE]              bus_id
427  [FUNC_CALL]         )
427  [NONE]              ;
427  [NONE]              
428  [NONE]              device_register
428  [FUNC_CALL]         (
428  [NONE]              &
428  [NONE]              client
428  [NONE]              ->
428  [NONE]              dev
428  [FUNC_CALL]         )
428  [NONE]              ;
428  [NONE]              
429  [NONE]              device_create_file
429  [FUNC_CALL]         (
429  [NONE]              &
429  [NONE]              client
429  [NONE]              ->
429  [NONE]              dev
429  [NONE]              ,
429  [NONE]              &
429  [NONE]              dev_attr_client_name
429  [FUNC_CALL]         )
429  [NONE]              ;
429  [NONE]              
431  [NONE]              return
431  [NONE]              0
431  [NONE]              ;
431  [NONE]              
432  [FUNC_DEF]          }
432  [NONE]              
435  [FUNC_DEF]          int
435  [NONE]              i2c_detach_client
435  [FUNC_DEF]          (
435  [NONE]              struct
435  [STRUCT]            i2c_client
435  [STRUCT]            *
435  [NONE]              client
435  [FUNC_DEF]          )
435  [NONE]              
436  [FUNC_DEF]          {
436  [NONE]              
437  [NONE]              struct
437  [STRUCT]            i2c_adapter
437  [STRUCT]            *
437  [NONE]              adapter
437  [NONE]              =
437  [NONE]              client
437  [NONE]              ->
437  [NONE]              adapter
437  [NONE]              ;
437  [NONE]              
438  [NONE]              int
438  [NONE]              res
438  [NONE]              =
438  [NONE]              0
438  [NONE]              ;
438  [NONE]              
440  [NONE]              if
440  [IF]                (
440  [NONE]              (
440  [NONE]              client
440  [NONE]              ->
440  [NONE]              flags
440  [NONE]              &
440  [NONE]              I2C_CLIENT_ALLOW_USE
440  [NONE]              )
440  [NONE]              
441  [NONE]              &&
441  [NONE]              (
441  [NONE]              client
441  [NONE]              ->
441  [NONE]              usage_count
441  [NONE]              >
441  [NONE]              0
441  [NONE]              )
441  [IF]                )
441  [NONE]              
441  [IF]                {
441  [NONE]              
442  [NONE]              dev_warn
442  [FUNC_CALL]         (
442  [NONE]              &
442  [NONE]              client
442  [NONE]              ->
442  [NONE]              dev
442  [NONE]              ,
442  [NONE]              "Client [%s] still busy, "
442  [NONE]              
443  [NONE]              "can't detach\n"
443  [NONE]              ,
443  [NONE]              client
443  [NONE]              ->
443  [NONE]              name
443  [FUNC_CALL]         )
443  [NONE]              ;
443  [NONE]              
444  [NONE]              return
444  [NONE]              -
444  [NONE]              EBUSY
444  [NONE]              ;
444  [NONE]              
445  [IF]                }
445  [NONE]              
447  [NONE]              if
447  [IF]                (
447  [NONE]              adapter
447  [NONE]              ->
447  [NONE]              client_unregister
447  [IF]                )
447  [NONE]              
447  [IF]                {
447  [NONE]              
448  [NONE]              res
448  [NONE]              =
448  [NONE]              adapter
448  [NONE]              ->
448  [NONE]              client_unregister
448  [FUNC_CALL]         (
448  [NONE]              client
448  [FUNC_CALL]         )
448  [NONE]              ;
448  [NONE]              
449  [NONE]              if
449  [IF]                (
449  [NONE]              res
449  [IF]                )
449  [NONE]              
449  [IF]                {
449  [NONE]              
450  [NONE]              dev_err
450  [FUNC_CALL]         (
450  [NONE]              &
450  [NONE]              client
450  [NONE]              ->
450  [NONE]              dev
450  [NONE]              ,
450  [NONE]              
451  [NONE]              "client_unregister [%s] failed, "
451  [NONE]              
452  [NONE]              "client not detached\n"
452  [NONE]              ,
452  [NONE]              client
452  [NONE]              ->
452  [NONE]              name
452  [FUNC_CALL]         )
452  [NONE]              ;
452  [NONE]              
453  [NONE]              goto
453  [NONE]              out
453  [NONE]              ;
453  [NONE]              
454  [IF]                }
454  [NONE]              
455  [IF]                }
455  [NONE]              
457  [NONE]              down
457  [FUNC_CALL]         (
457  [NONE]              &
457  [NONE]              adapter
457  [NONE]              ->
457  [NONE]              clist_lock
457  [FUNC_CALL]         )
457  [NONE]              ;
457  [NONE]              
458  [NONE]              list_del
458  [FUNC_CALL]         (
458  [NONE]              &
458  [NONE]              client
458  [NONE]              ->
458  [NONE]              list
458  [FUNC_CALL]         )
458  [NONE]              ;
458  [NONE]              
459  [NONE]              init_completion
459  [FUNC_CALL]         (
459  [NONE]              &
459  [NONE]              client
459  [NONE]              ->
459  [NONE]              released
459  [FUNC_CALL]         )
459  [NONE]              ;
459  [NONE]              
460  [NONE]              device_remove_file
460  [FUNC_CALL]         (
460  [NONE]              &
460  [NONE]              client
460  [NONE]              ->
460  [NONE]              dev
460  [NONE]              ,
460  [NONE]              &
460  [NONE]              dev_attr_client_name
460  [FUNC_CALL]         )
460  [NONE]              ;
460  [NONE]              
461  [NONE]              device_unregister
461  [FUNC_CALL]         (
461  [NONE]              &
461  [NONE]              client
461  [NONE]              ->
461  [NONE]              dev
461  [FUNC_CALL]         )
461  [NONE]              ;
461  [NONE]              
462  [NONE]              up
462  [FUNC_CALL]         (
462  [NONE]              &
462  [NONE]              adapter
462  [NONE]              ->
462  [NONE]              clist_lock
462  [FUNC_CALL]         )
462  [NONE]              ;
462  [NONE]              
463  [NONE]              wait_for_completion
463  [FUNC_CALL]         (
463  [NONE]              &
463  [NONE]              client
463  [NONE]              ->
463  [NONE]              released
463  [FUNC_CALL]         )
463  [NONE]              ;
463  [NONE]              
465  [NONE]              out
465  [NONE]              :
465  [NONE]              
466  [NONE]              return
466  [NONE]              res
466  [NONE]              ;
466  [NONE]              
467  [FUNC_DEF]          }
467  [NONE]              
469  [FUNC_DEF]          static
469  [FUNC_DEF]          int
469  [NONE]              i2c_inc_use_client
469  [FUNC_DEF]          (
469  [NONE]              struct
469  [STRUCT]            i2c_client
469  [STRUCT]            *
469  [NONE]              client
469  [FUNC_DEF]          )
469  [NONE]              
470  [FUNC_DEF]          {
470  [NONE]              
472  [NONE]              if
472  [IF]                (
472  [NONE]              !
472  [NONE]              try_module_get
472  [FUNC_CALL]         (
472  [NONE]              client
472  [NONE]              ->
472  [NONE]              driver
472  [NONE]              ->
472  [NONE]              owner
472  [FUNC_CALL]         )
472  [IF]                )
472  [IF]                
472  [NONE]              
473  [NONE]              return
473  [NONE]              -
473  [NONE]              ENODEV
473  [NONE]              ;
473  [IF]                
473  [NONE]              
474  [NONE]              if
474  [IF]                (
474  [NONE]              !
474  [NONE]              try_module_get
474  [FUNC_CALL]         (
474  [NONE]              client
474  [NONE]              ->
474  [NONE]              adapter
474  [NONE]              ->
474  [NONE]              owner
474  [FUNC_CALL]         )
474  [IF]                )
474  [NONE]              
474  [IF]                {
474  [NONE]              
475  [NONE]              module_put
475  [FUNC_CALL]         (
475  [NONE]              client
475  [NONE]              ->
475  [NONE]              driver
475  [NONE]              ->
475  [NONE]              owner
475  [FUNC_CALL]         )
475  [NONE]              ;
475  [NONE]              
476  [NONE]              return
476  [NONE]              -
476  [NONE]              ENODEV
476  [NONE]              ;
476  [NONE]              
477  [IF]                }
477  [NONE]              
479  [NONE]              return
479  [NONE]              0
479  [NONE]              ;
479  [NONE]              
480  [FUNC_DEF]          }
480  [NONE]              
482  [FUNC_DEF]          static
482  [FUNC_DEF]          void
482  [NONE]              i2c_dec_use_client
482  [FUNC_DEF]          (
482  [NONE]              struct
482  [STRUCT]            i2c_client
482  [STRUCT]            *
482  [NONE]              client
482  [FUNC_DEF]          )
482  [NONE]              
483  [FUNC_DEF]          {
483  [NONE]              
484  [NONE]              module_put
484  [FUNC_CALL]         (
484  [NONE]              client
484  [NONE]              ->
484  [NONE]              driver
484  [NONE]              ->
484  [NONE]              owner
484  [FUNC_CALL]         )
484  [NONE]              ;
484  [NONE]              
485  [NONE]              module_put
485  [FUNC_CALL]         (
485  [NONE]              client
485  [NONE]              ->
485  [NONE]              adapter
485  [NONE]              ->
485  [NONE]              owner
485  [FUNC_CALL]         )
485  [NONE]              ;
485  [NONE]              
486  [FUNC_DEF]          }
486  [NONE]              
488  [FUNC_DEF]          int
488  [NONE]              i2c_use_client
488  [FUNC_DEF]          (
488  [NONE]              struct
488  [STRUCT]            i2c_client
488  [STRUCT]            *
488  [NONE]              client
488  [FUNC_DEF]          )
488  [NONE]              
489  [FUNC_DEF]          {
489  [NONE]              
490  [NONE]              int
490  [NONE]              ret
490  [NONE]              ;
490  [NONE]              
492  [NONE]              ret
492  [NONE]              =
492  [NONE]              i2c_inc_use_client
492  [FUNC_CALL]         (
492  [NONE]              client
492  [FUNC_CALL]         )
492  [NONE]              ;
492  [NONE]              
493  [NONE]              if
493  [IF]                (
493  [NONE]              ret
493  [IF]                )
493  [IF]                
493  [NONE]              
494  [NONE]              return
494  [NONE]              ret
494  [NONE]              ;
494  [IF]                
494  [NONE]              
496  [NONE]              if
496  [IF]                (
496  [NONE]              client
496  [NONE]              ->
496  [NONE]              flags
496  [NONE]              &
496  [NONE]              I2C_CLIENT_ALLOW_USE
496  [IF]                )
496  [NONE]              
496  [IF]                {
496  [NONE]              
497  [NONE]              if
497  [IF]                (
497  [NONE]              client
497  [NONE]              ->
497  [NONE]              flags
497  [NONE]              &
497  [NONE]              I2C_CLIENT_ALLOW_MULTIPLE_USE
497  [IF]                )
497  [IF]                
497  [NONE]              
498  [NONE]              client
498  [NONE]              ->
498  [NONE]              usage_count
498  [NONE]              ++
498  [NONE]              ;
498  [IF]                
498  [NONE]              
499  [NONE]              else
499  [NONE]              if
499  [ELSEIF]            (
499  [NONE]              client
499  [NONE]              ->
499  [NONE]              usage_count
499  [NONE]              >
499  [NONE]              0
499  [ELSEIF]            )
499  [ELSEIF]            
499  [NONE]              
500  [NONE]              goto
500  [NONE]              busy
500  [NONE]              ;
500  [ELSEIF]            
500  [NONE]              
501  [NONE]              else
501  [ELSE]              
501  [NONE]              
502  [NONE]              client
502  [NONE]              ->
502  [NONE]              usage_count
502  [NONE]              ++
502  [NONE]              ;
502  [ELSE]              
502  [NONE]              
503  [IF]                }
503  [NONE]              
505  [NONE]              return
505  [NONE]              0
505  [NONE]              ;
505  [NONE]              
506  [NONE]              busy
506  [NONE]              :
506  [NONE]              
507  [NONE]              i2c_dec_use_client
507  [FUNC_CALL]         (
507  [NONE]              client
507  [FUNC_CALL]         )
507  [NONE]              ;
507  [NONE]              
508  [NONE]              return
508  [NONE]              -
508  [NONE]              EBUSY
508  [NONE]              ;
508  [NONE]              
509  [FUNC_DEF]          }
509  [NONE]              
511  [FUNC_DEF]          int
511  [NONE]              i2c_release_client
511  [FUNC_DEF]          (
511  [NONE]              struct
511  [STRUCT]            i2c_client
511  [STRUCT]            *
511  [NONE]              client
511  [FUNC_DEF]          )
511  [NONE]              
512  [FUNC_DEF]          {
512  [NONE]              
513  [NONE]              if
513  [IF]                (
513  [NONE]              client
513  [NONE]              ->
513  [NONE]              flags
513  [NONE]              &
513  [NONE]              I2C_CLIENT_ALLOW_USE
513  [IF]                )
513  [NONE]              
513  [IF]                {
513  [NONE]              
514  [NONE]              if
514  [IF]                (
514  [NONE]              client
514  [NONE]              ->
514  [NONE]              usage_count
514  [NONE]              >
514  [NONE]              0
514  [IF]                )
514  [IF]                
514  [NONE]              
515  [NONE]              client
515  [NONE]              ->
515  [NONE]              usage_count
515  [NONE]              --
515  [NONE]              ;
515  [IF]                
515  [NONE]              
516  [NONE]              else
516  [NONE]              
516  [ELSE]              {
516  [NONE]              
517  [NONE]              pr_debug
517  [FUNC_CALL]         (
517  [NONE]              "i2c-core: %s used one too many times\n"
517  [NONE]              ,
517  [NONE]              
518  [NONE]              __FUNCTION__
518  [FUNC_CALL]         )
518  [NONE]              ;
518  [NONE]              
519  [NONE]              return
519  [NONE]              -
519  [NONE]              EPERM
519  [NONE]              ;
519  [NONE]              
520  [ELSE]              }
520  [NONE]              
521  [IF]                }
521  [NONE]              
523  [NONE]              i2c_dec_use_client
523  [FUNC_CALL]         (
523  [NONE]              client
523  [FUNC_CALL]         )
523  [NONE]              ;
523  [NONE]              
525  [NONE]              return
525  [NONE]              0
525  [NONE]              ;
525  [NONE]              
526  [FUNC_DEF]          }
526  [NONE]              
528  [FUNC_DEF]          void
528  [NONE]              i2c_clients_command
528  [FUNC_DEF]          (
528  [NONE]              struct
528  [STRUCT]            i2c_adapter
528  [STRUCT]            *
528  [NONE]              adap
528  [NONE]              ,
528  [NONE]              unsigned
528  [NONE]              int
528  [NONE]              cmd
528  [NONE]              ,
528  [NONE]              void
528  [NONE]              *
528  [NONE]              arg
528  [FUNC_DEF]          )
528  [NONE]              
529  [FUNC_DEF]          {
529  [NONE]              
530  [NONE]              struct
530  [STRUCT]            list_head
530  [STRUCT]            *
530  [NONE]              item
530  [NONE]              ;
530  [NONE]              
531  [NONE]              struct
531  [STRUCT]            i2c_client
531  [STRUCT]            *
531  [NONE]              client
531  [NONE]              ;
531  [NONE]              
533  [NONE]              down
533  [FUNC_CALL]         (
533  [NONE]              &
533  [NONE]              adap
533  [NONE]              ->
533  [NONE]              clist_lock
533  [FUNC_CALL]         )
533  [NONE]              ;
533  [NONE]              
534  [NONE]              list_for_each
534  [FUNC_CALL]         (
534  [NONE]              item
534  [NONE]              ,
534  [NONE]              &
534  [NONE]              adap
534  [NONE]              ->
534  [NONE]              clients
534  [FUNC_CALL]         )
534  [FUNC_CALL]         {
534  [NONE]              
535  [NONE]              client
535  [NONE]              =
535  [NONE]              list_entry
535  [FUNC_CALL]         (
535  [NONE]              item
535  [NONE]              ,
535  [NONE]              struct
535  [STRUCT]            i2c_client
535  [STRUCT]            ,
535  [NONE]              list
535  [FUNC_CALL]         )
535  [NONE]              ;
535  [NONE]              
536  [NONE]              if
536  [IF]                (
536  [NONE]              !
536  [NONE]              try_module_get
536  [FUNC_CALL]         (
536  [NONE]              client
536  [NONE]              ->
536  [NONE]              driver
536  [NONE]              ->
536  [NONE]              owner
536  [FUNC_CALL]         )
536  [IF]                )
536  [IF]                
536  [NONE]              
537  [NONE]              continue
537  [NONE]              ;
537  [IF]                
537  [NONE]              
538  [NONE]              if
538  [IF]                (
538  [NONE]              NULL
538  [NONE]              !=
538  [NONE]              client
538  [NONE]              ->
538  [NONE]              driver
538  [NONE]              ->
538  [NONE]              command
538  [IF]                )
538  [NONE]              
538  [IF]                {
538  [NONE]              
539  [NONE]              up
539  [FUNC_CALL]         (
539  [NONE]              &
539  [NONE]              adap
539  [NONE]              ->
539  [NONE]              clist_lock
539  [FUNC_CALL]         )
539  [NONE]              ;
539  [NONE]              
540  [NONE]              client
540  [NONE]              ->
540  [NONE]              driver
540  [NONE]              ->
540  [NONE]              command
540  [FUNC_CALL]         (
540  [NONE]              client
540  [NONE]              ,
540  [NONE]              cmd
540  [NONE]              ,
540  [NONE]              arg
540  [FUNC_CALL]         )
540  [NONE]              ;
540  [NONE]              
541  [NONE]              down
541  [FUNC_CALL]         (
541  [NONE]              &
541  [NONE]              adap
541  [NONE]              ->
541  [NONE]              clist_lock
541  [FUNC_CALL]         )
541  [NONE]              ;
541  [NONE]              
542  [IF]                }
542  [NONE]              
543  [NONE]              module_put
543  [FUNC_CALL]         (
543  [NONE]              client
543  [NONE]              ->
543  [NONE]              driver
543  [NONE]              ->
543  [NONE]              owner
543  [FUNC_CALL]         )
543  [NONE]              ;
543  [NONE]              
544  [FUNC_CALL]         }
544  [NONE]              
545  [NONE]              up
545  [FUNC_CALL]         (
545  [NONE]              &
545  [NONE]              adap
545  [NONE]              ->
545  [NONE]              clist_lock
545  [FUNC_CALL]         )
545  [NONE]              ;
545  [NONE]              
546  [FUNC_DEF]          }
546  [NONE]              
548  [FUNC_DEF]          static
548  [FUNC_DEF]          int
548  [FUNC_DEF]          __init
548  [NONE]              i2c_init
548  [FUNC_DEF]          (
548  [NONE]              void
548  [FUNC_DEF]          )
548  [NONE]              
549  [FUNC_DEF]          {
549  [NONE]              
550  [NONE]              int
550  [NONE]              retval
550  [NONE]              ;
550  [NONE]              
552  [NONE]              retval
552  [NONE]              =
552  [NONE]              bus_register
552  [FUNC_CALL]         (
552  [NONE]              &
552  [NONE]              i2c_bus_type
552  [FUNC_CALL]         )
552  [NONE]              ;
552  [NONE]              
553  [NONE]              if
553  [IF]                (
553  [NONE]              retval
553  [IF]                )
553  [IF]                
553  [NONE]              
554  [NONE]              return
554  [NONE]              retval
554  [NONE]              ;
554  [IF]                
554  [NONE]              
555  [NONE]              retval
555  [NONE]              =
555  [NONE]              driver_register
555  [FUNC_CALL]         (
555  [NONE]              &
555  [NONE]              i2c_adapter_driver
555  [FUNC_CALL]         )
555  [NONE]              ;
555  [NONE]              
556  [NONE]              if
556  [IF]                (
556  [NONE]              retval
556  [IF]                )
556  [IF]                
556  [NONE]              
557  [NONE]              return
557  [NONE]              retval
557  [NONE]              ;
557  [IF]                
557  [NONE]              
558  [NONE]              return
558  [NONE]              class_register
558  [FUNC_CALL]         (
558  [NONE]              &
558  [NONE]              i2c_adapter_class
558  [FUNC_CALL]         )
558  [NONE]              ;
558  [NONE]              
559  [FUNC_DEF]          }
559  [NONE]              
561  [FUNC_DEF]          static
561  [FUNC_DEF]          void
561  [FUNC_DEF]          __exit
561  [NONE]              i2c_exit
561  [FUNC_DEF]          (
561  [NONE]              void
561  [FUNC_DEF]          )
561  [NONE]              
562  [FUNC_DEF]          {
562  [NONE]              
563  [NONE]              class_unregister
563  [FUNC_CALL]         (
563  [NONE]              &
563  [NONE]              i2c_adapter_class
563  [FUNC_CALL]         )
563  [NONE]              ;
563  [NONE]              
564  [NONE]              driver_unregister
564  [FUNC_CALL]         (
564  [NONE]              &
564  [NONE]              i2c_adapter_driver
564  [FUNC_CALL]         )
564  [NONE]              ;
564  [NONE]              
565  [NONE]              bus_unregister
565  [FUNC_CALL]         (
565  [NONE]              &
565  [NONE]              i2c_bus_type
565  [FUNC_CALL]         )
565  [NONE]              ;
565  [NONE]              
566  [FUNC_DEF]          }
566  [NONE]              
568  [NONE]              subsys_initcall
568  [FUNC_CALL]         (
568  [NONE]              i2c_init
568  [FUNC_CALL]         )
568  [NONE]              ;
568  [NONE]              
569  [NONE]              module_exit
569  [FUNC_CALL]         (
569  [NONE]              i2c_exit
569  [FUNC_CALL]         )
569  [NONE]              ;
569  [NONE]              
571  [COMMENT_WHOLE]     /* ----------------------------------------------------␤ * the functional interface to the i2c busses.␤ * ----------------------------------------------------␤ */
574  [NONE]              
576  [FUNC_DEF]          int
576  [NONE]              i2c_transfer
576  [FUNC_DEF]          (
576  [NONE]              struct
576  [STRUCT]            i2c_adapter
576  [STRUCT]            *
576  [NONE]              adap
576  [NONE]              ,
576  [NONE]              struct
576  [NONE]              i2c_msg
576  [STRUCT]            *
576  [NONE]              msgs
576  [NONE]              ,
576  [NONE]              int
576  [NONE]              num
576  [FUNC_DEF]          )
576  [NONE]              
577  [FUNC_DEF]          {
577  [NONE]              
578  [NONE]              int
578  [NONE]              ret
578  [NONE]              ;
578  [NONE]              
580  [NONE]              if
580  [IF]                (
580  [NONE]              adap
580  [NONE]              ->
580  [NONE]              algo
580  [NONE]              ->
580  [NONE]              master_xfer
580  [IF]                )
580  [NONE]              
580  [IF]                {
580  [NONE]              
581  [PP_IF]             #
581  [NONE]              ifdef
581  [NONE]              DEBUG
581  [NONE]              
582  [NONE]              for
582  [FOR]               (
582  [NONE]              ret
582  [NONE]              =
582  [NONE]              0
582  [FOR]               ;
582  [NONE]              ret
582  [NONE]              <
582  [NONE]              num
582  [FOR]               ;
582  [NONE]              ret
582  [NONE]              ++
582  [FOR]               )
582  [NONE]              
582  [FOR]               {
582  [NONE]              
583  [NONE]              dev_dbg
583  [FUNC_CALL]         (
583  [NONE]              &
583  [NONE]              adap
583  [NONE]              ->
583  [NONE]              dev
583  [NONE]              ,
583  [NONE]              "master_xfer[%d] %c, addr=0x%02x, "
583  [NONE]              
584  [NONE]              "len=%d\n"
584  [NONE]              ,
584  [NONE]              ret
584  [NONE]              ,
584  [NONE]              msgs
584  [NONE]              [
584  [NONE]              ret
584  [NONE]              ]
584  [NONE]              .
584  [NONE]              flags
584  [NONE]              &
584  [NONE]              I2C_M_RD
584  [NONE]              ?
584  [NONE]              
585  [NONE]              'R'
585  [NONE]              :
585  [NONE]              'W'
585  [NONE]              ,
585  [NONE]              msgs
585  [NONE]              [
585  [NONE]              ret
585  [NONE]              ]
585  [NONE]              .
585  [NONE]              addr
585  [NONE]              ,
585  [NONE]              msgs
585  [NONE]              [
585  [NONE]              ret
585  [NONE]              ]
585  [NONE]              .
585  [NONE]              len
585  [FUNC_CALL]         )
585  [NONE]              ;
585  [NONE]              
586  [FOR]               }
586  [NONE]              
587  [PP_ENDIF]          #
587  [NONE]              endif
587  [NONE]              
589  [NONE]              down
589  [FUNC_CALL]         (
589  [NONE]              &
589  [NONE]              adap
589  [NONE]              ->
589  [NONE]              bus_lock
589  [FUNC_CALL]         )
589  [NONE]              ;
589  [NONE]              
590  [NONE]              ret
590  [NONE]              =
590  [NONE]              adap
590  [NONE]              ->
590  [NONE]              algo
590  [NONE]              ->
590  [NONE]              master_xfer
590  [FUNC_CALL]         (
590  [NONE]              adap
590  [NONE]              ,
590  [NONE]              msgs
590  [NONE]              ,
590  [NONE]              num
590  [FUNC_CALL]         )
590  [NONE]              ;
590  [NONE]              
591  [NONE]              up
591  [FUNC_CALL]         (
591  [NONE]              &
591  [NONE]              adap
591  [NONE]              ->
591  [NONE]              bus_lock
591  [FUNC_CALL]         )
591  [NONE]              ;
591  [NONE]              
593  [NONE]              return
593  [NONE]              ret
593  [NONE]              ;
593  [NONE]              
594  [IF]                }
594  [NONE]              
594  [NONE]              else
594  [NONE]              
594  [ELSE]              {
594  [NONE]              
595  [NONE]              dev_dbg
595  [FUNC_CALL]         (
595  [NONE]              &
595  [NONE]              adap
595  [NONE]              ->
595  [NONE]              dev
595  [NONE]              ,
595  [NONE]              "I2C level transfers not supported\n"
595  [FUNC_CALL]         )
595  [NONE]              ;
595  [NONE]              
596  [NONE]              return
596  [NONE]              -
596  [NONE]              ENOSYS
596  [NONE]              ;
596  [NONE]              
597  [ELSE]              }
597  [NONE]              
598  [FUNC_DEF]          }
598  [NONE]              
600  [FUNC_DEF]          int
600  [NONE]              i2c_master_send
600  [FUNC_DEF]          (
600  [NONE]              struct
600  [STRUCT]            i2c_client
600  [STRUCT]            *
600  [NONE]              client
600  [NONE]              ,
600  [NONE]              const
600  [NONE]              char
600  [NONE]              *
600  [NONE]              buf
600  [NONE]              ,
600  [NONE]              int
600  [NONE]              count
600  [FUNC_DEF]          )
600  [NONE]              
601  [FUNC_DEF]          {
601  [NONE]              
602  [NONE]              int
602  [NONE]              ret
602  [NONE]              ;
602  [NONE]              
603  [NONE]              struct
603  [STRUCT]            i2c_adapter
603  [STRUCT]            *
603  [NONE]              adap
603  [NONE]              =
603  [NONE]              client
603  [NONE]              ->
603  [NONE]              adapter
603  [NONE]              ;
603  [NONE]              
604  [NONE]              struct
604  [STRUCT]            i2c_msg
604  [STRUCT]            msg
604  [NONE]              ;
604  [NONE]              
606  [NONE]              msg
606  [NONE]              .
606  [NONE]              addr
606  [NONE]              =
606  [NONE]              client
606  [NONE]              ->
606  [NONE]              addr
606  [NONE]              ;
606  [NONE]              
607  [NONE]              msg
607  [NONE]              .
607  [NONE]              flags
607  [NONE]              =
607  [NONE]              client
607  [NONE]              ->
607  [NONE]              flags
607  [NONE]              &
607  [NONE]              I2C_M_TEN
607  [NONE]              ;
607  [NONE]              
608  [NONE]              msg
608  [NONE]              .
608  [NONE]              len
608  [NONE]              =
608  [NONE]              count
608  [NONE]              ;
608  [NONE]              
609  [NONE]              msg
609  [NONE]              .
609  [NONE]              buf
609  [NONE]              =
609  [C_CAST]            (
609  [C_CAST]            char
609  [C_CAST]            *
609  [C_CAST]            )
609  [NONE]              buf
609  [NONE]              ;
609  [NONE]              
611  [NONE]              ret
611  [NONE]              =
611  [NONE]              i2c_transfer
611  [FUNC_CALL]         (
611  [NONE]              adap
611  [NONE]              ,
611  [NONE]              &
611  [NONE]              msg
611  [NONE]              ,
611  [NONE]              1
611  [FUNC_CALL]         )
611  [NONE]              ;
611  [NONE]              
613  [COMMENT_WHOLE]     /* If everything went ok (i.e. 1 msg transmitted), return #bytes␤	   transmitted, else error code. */
614  [NONE]              
615  [NONE]              return
615  [NONE]              (
615  [NONE]              ret
615  [NONE]              ==
615  [NONE]              1
615  [NONE]              )
615  [NONE]              ?
615  [NONE]              count
615  [NONE]              :
615  [NONE]              ret
615  [NONE]              ;
615  [NONE]              
616  [FUNC_DEF]          }
616  [NONE]              
618  [FUNC_DEF]          int
618  [NONE]              i2c_master_recv
618  [FUNC_DEF]          (
618  [NONE]              struct
618  [STRUCT]            i2c_client
618  [STRUCT]            *
618  [NONE]              client
618  [NONE]              ,
618  [NONE]              char
618  [NONE]              *
618  [NONE]              buf
618  [NONE]              ,
618  [NONE]              int
618  [NONE]              count
618  [FUNC_DEF]          )
618  [NONE]              
619  [FUNC_DEF]          {
619  [NONE]              
620  [NONE]              struct
620  [STRUCT]            i2c_adapter
620  [STRUCT]            *
620  [NONE]              adap
620  [NONE]              =
620  [NONE]              client
620  [NONE]              ->
620  [NONE]              adapter
620  [NONE]              ;
620  [NONE]              
621  [NONE]              struct
621  [STRUCT]            i2c_msg
621  [STRUCT]            msg
621  [NONE]              ;
621  [NONE]              
622  [NONE]              int
622  [NONE]              ret
622  [NONE]              ;
622  [NONE]              
624  [NONE]              msg
624  [NONE]              .
624  [NONE]              addr
624  [NONE]              =
624  [NONE]              client
624  [NONE]              ->
624  [NONE]              addr
624  [NONE]              ;
624  [NONE]              
625  [NONE]              msg
625  [NONE]              .
625  [NONE]              flags
625  [NONE]              =
625  [NONE]              client
625  [NONE]              ->
625  [NONE]              flags
625  [NONE]              &
625  [NONE]              I2C_M_TEN
625  [NONE]              ;
625  [NONE]              
626  [NONE]              msg
626  [NONE]              .
626  [NONE]              flags
626  [NONE]              |=
626  [NONE]              I2C_M_RD
626  [NONE]              ;
626  [NONE]              
627  [NONE]              msg
627  [NONE]              .
627  [NONE]              len
627  [NONE]              =
627  [NONE]              count
627  [NONE]              ;
627  [NONE]              
628  [NONE]              msg
628  [NONE]              .
628  [NONE]              buf
628  [NONE]              =
628  [NONE]              buf
628  [NONE]              ;
628  [NONE]              
630  [NONE]              ret
630  [NONE]              =
630  [NONE]              i2c_transfer
630  [FUNC_CALL]         (
630  [NONE]              adap
630  [NONE]              ,
630  [NONE]              &
630  [NONE]              msg
630  [NONE]              ,
630  [NONE]              1
630  [FUNC_CALL]         )
630  [NONE]              ;
630  [NONE]              
632  [COMMENT_WHOLE]     /* If everything went ok (i.e. 1 msg transmitted), return #bytes␤	   transmitted, else error code. */
633  [NONE]              
634  [NONE]              return
634  [NONE]              (
634  [NONE]              ret
634  [NONE]              ==
634  [NONE]              1
634  [NONE]              )
634  [NONE]              ?
634  [NONE]              count
634  [NONE]              :
634  [NONE]              ret
634  [NONE]              ;
634  [NONE]              
635  [FUNC_DEF]          }
635  [NONE]              
638  [FUNC_DEF]          int
638  [NONE]              i2c_control
638  [FUNC_DEF]          (
638  [NONE]              struct
638  [STRUCT]            i2c_client
638  [STRUCT]            *
638  [NONE]              client
638  [NONE]              ,
638  [NONE]              
639  [NONE]              unsigned
639  [NONE]              int
639  [NONE]              cmd
639  [NONE]              ,
639  [NONE]              unsigned
639  [NONE]              long
639  [NONE]              arg
639  [FUNC_DEF]          )
639  [NONE]              
640  [FUNC_DEF]          {
640  [NONE]              
641  [NONE]              int
641  [NONE]              ret
641  [NONE]              =
641  [NONE]              0
641  [NONE]              ;
641  [NONE]              
642  [NONE]              struct
642  [STRUCT]            i2c_adapter
642  [STRUCT]            *
642  [NONE]              adap
642  [NONE]              =
642  [NONE]              client
642  [NONE]              ->
642  [NONE]              adapter
642  [NONE]              ;
642  [NONE]              
644  [NONE]              dev_dbg
644  [FUNC_CALL]         (
644  [NONE]              &
644  [NONE]              client
644  [NONE]              ->
644  [NONE]              adapter
644  [NONE]              ->
644  [NONE]              dev
644  [NONE]              ,
644  [NONE]              "i2c ioctl, cmd: 0x%x, arg: %#lx\n"
644  [NONE]              ,
644  [NONE]              cmd
644  [NONE]              ,
644  [NONE]              arg
644  [FUNC_CALL]         )
644  [NONE]              ;
644  [NONE]              
645  [NONE]              switch
645  [SWITCH]            (
645  [NONE]              cmd
645  [SWITCH]            )
645  [NONE]              
645  [SWITCH]            {
645  [NONE]              
646  [NONE]              case
646  [NONE]              I2C_RETRIES
646  [NONE]              :
646  [NONE]              
647  [NONE]              adap
647  [NONE]              ->
647  [NONE]              retries
647  [NONE]              =
647  [NONE]              arg
647  [NONE]              ;
647  [NONE]              
648  [NONE]              break
648  [NONE]              ;
648  [NONE]              
649  [NONE]              case
649  [NONE]              I2C_TIMEOUT
649  [NONE]              :
649  [NONE]              
650  [NONE]              adap
650  [NONE]              ->
650  [NONE]              timeout
650  [NONE]              =
650  [NONE]              arg
650  [NONE]              ;
650  [NONE]              
651  [NONE]              break
651  [NONE]              ;
651  [NONE]              
652  [NONE]              default
652  [NONE]              :
652  [NONE]              
653  [NONE]              if
653  [IF]                (
653  [NONE]              adap
653  [NONE]              ->
653  [NONE]              algo
653  [NONE]              ->
653  [NONE]              algo_control
653  [NONE]              !=
653  [NONE]              NULL
653  [IF]                )
653  [IF]                
653  [NONE]              
654  [NONE]              ret
654  [NONE]              =
654  [NONE]              adap
654  [NONE]              ->
654  [NONE]              algo
654  [NONE]              ->
654  [NONE]              algo_control
654  [FUNC_CALL]         (
654  [NONE]              adap
654  [NONE]              ,
654  [NONE]              cmd
654  [NONE]              ,
654  [NONE]              arg
654  [FUNC_CALL]         )
654  [NONE]              ;
654  [IF]                
654  [NONE]              
655  [SWITCH]            }
655  [NONE]              
656  [NONE]              return
656  [NONE]              ret
656  [NONE]              ;
656  [NONE]              
657  [FUNC_DEF]          }
657  [NONE]              
659  [COMMENT_WHOLE]     /* ----------------------------------------------------␤ * the i2c address scanning function␤ * Will not work for 10-bit addresses!␤ * ----------------------------------------------------␤ */
663  [NONE]              
664  [FUNC_DEF]          static
664  [FUNC_DEF]          int
664  [NONE]              i2c_probe_address
664  [FUNC_DEF]          (
664  [NONE]              struct
664  [STRUCT]            i2c_adapter
664  [STRUCT]            *
664  [NONE]              adapter
664  [NONE]              ,
664  [NONE]              int
664  [NONE]              addr
664  [NONE]              ,
664  [NONE]              int
664  [NONE]              kind
664  [NONE]              ,
664  [NONE]              
665  [NONE]              int
665  [FUNC_VAR]          (
665  [NONE]              *
665  [NONE]              found_proc
665  [FUNC_VAR]          )
665  [FUNC_CALL]         (
665  [NONE]              struct
665  [NONE]              i2c_adapter
665  [STRUCT]            *
665  [NONE]              ,
665  [NONE]              int
665  [NONE]              ,
665  [NONE]              int
665  [FUNC_CALL]         )
665  [FUNC_DEF]          )
665  [NONE]              
666  [FUNC_DEF]          {
666  [NONE]              
667  [NONE]              int
667  [NONE]              err
667  [NONE]              ;
667  [NONE]              
669  [COMMENT_WHOLE]     /* Make sure the address is valid */
669  [NONE]              
670  [NONE]              if
670  [IF]                (
670  [NONE]              addr
670  [NONE]              <
670  [NONE]              0x03
670  [NONE]              ||
670  [NONE]              addr
670  [NONE]              >
670  [NONE]              0x77
670  [IF]                )
670  [NONE]              
670  [IF]                {
670  [NONE]              
671  [NONE]              dev_warn
671  [FUNC_CALL]         (
671  [NONE]              &
671  [NONE]              adapter
671  [NONE]              ->
671  [NONE]              dev
671  [NONE]              ,
671  [NONE]              "Invalid probe address 0x%02x\n"
671  [NONE]              ,
671  [NONE]              
672  [NONE]              addr
672  [FUNC_CALL]         )
672  [NONE]              ;
672  [NONE]              
673  [NONE]              return
673  [NONE]              -
673  [NONE]              EINVAL
673  [NONE]              ;
673  [NONE]              
674  [IF]                }
674  [NONE]              
676  [COMMENT_WHOLE]     /* Skip if already in use */
676  [NONE]              
677  [NONE]              if
677  [IF]                (
677  [NONE]              i2c_check_addr
677  [FUNC_CALL]         (
677  [NONE]              adapter
677  [NONE]              ,
677  [NONE]              addr
677  [FUNC_CALL]         )
677  [IF]                )
677  [IF]                
677  [NONE]              
678  [NONE]              return
678  [NONE]              0
678  [NONE]              ;
678  [IF]                
678  [NONE]              
680  [COMMENT_WHOLE]     /* Make sure there is something at this address, unless forced */
680  [NONE]              
681  [NONE]              if
681  [IF]                (
681  [NONE]              kind
681  [NONE]              <
681  [NONE]              0
681  [IF]                )
681  [NONE]              
681  [IF]                {
681  [NONE]              
682  [NONE]              if
682  [IF]                (
682  [NONE]              i2c_smbus_xfer
682  [FUNC_CALL]         (
682  [NONE]              adapter
682  [NONE]              ,
682  [NONE]              addr
682  [NONE]              ,
682  [NONE]              0
682  [NONE]              ,
682  [NONE]              0
682  [NONE]              ,
682  [NONE]              0
682  [NONE]              ,
682  [NONE]              
683  [NONE]              I2C_SMBUS_QUICK
683  [NONE]              ,
683  [NONE]              NULL
683  [FUNC_CALL]         )
683  [NONE]              <
683  [NONE]              0
683  [IF]                )
683  [IF]                
683  [NONE]              
684  [NONE]              return
684  [NONE]              0
684  [NONE]              ;
684  [IF]                
684  [NONE]              
686  [COMMENT_WHOLE]     /* prevent 24RF08 corruption */
686  [NONE]              
687  [NONE]              if
687  [IF]                (
687  [NONE]              (
687  [NONE]              addr
687  [NONE]              &
687  [NONE]              ~
687  [NONE]              0x0f
687  [NONE]              )
687  [NONE]              ==
687  [NONE]              0x50
687  [IF]                )
687  [IF]                
687  [NONE]              
688  [NONE]              i2c_smbus_xfer
688  [FUNC_CALL]         (
688  [NONE]              adapter
688  [NONE]              ,
688  [NONE]              addr
688  [NONE]              ,
688  [NONE]              0
688  [NONE]              ,
688  [NONE]              0
688  [NONE]              ,
688  [NONE]              0
688  [NONE]              ,
688  [NONE]              
689  [NONE]              I2C_SMBUS_QUICK
689  [NONE]              ,
689  [NONE]              NULL
689  [FUNC_CALL]         )
689  [NONE]              ;
689  [IF]                
689  [NONE]              
690  [IF]                }
690  [NONE]              
692  [COMMENT_WHOLE]     /* Finally call the custom detection function */
692  [NONE]              
693  [NONE]              err
693  [NONE]              =
693  [NONE]              found_proc
693  [FUNC_CALL]         (
693  [NONE]              adapter
693  [NONE]              ,
693  [NONE]              addr
693  [NONE]              ,
693  [NONE]              kind
693  [FUNC_CALL]         )
693  [NONE]              ;
693  [NONE]              
695  [COMMENT_WHOLE]     /* -ENODEV can be returned if there is a chip at the given address␤	   but it isn't supported by this chip driver. We catch it here as␤	   this isn't an error. */
697  [NONE]              
698  [NONE]              return
698  [NONE]              (
698  [NONE]              err
698  [NONE]              ==
698  [NONE]              -
698  [NONE]              ENODEV
698  [NONE]              )
698  [NONE]              ?
698  [NONE]              0
698  [NONE]              :
698  [NONE]              err
698  [NONE]              ;
698  [NONE]              
699  [FUNC_DEF]          }
699  [NONE]              
701  [FUNC_DEF]          int
701  [NONE]              i2c_probe
701  [FUNC_DEF]          (
701  [NONE]              struct
701  [STRUCT]            i2c_adapter
701  [STRUCT]            *
701  [NONE]              adapter
701  [NONE]              ,
701  [NONE]              
702  [NONE]              struct
702  [NONE]              i2c_client_address_data
702  [STRUCT]            *
702  [NONE]              address_data
702  [NONE]              ,
702  [NONE]              
703  [NONE]              int
703  [FUNC_VAR]          (
703  [NONE]              *
703  [NONE]              found_proc
703  [FUNC_VAR]          )
703  [FUNC_CALL]         (
703  [NONE]              struct
703  [NONE]              i2c_adapter
703  [STRUCT]            *
703  [NONE]              ,
703  [NONE]              int
703  [NONE]              ,
703  [NONE]              int
703  [FUNC_CALL]         )
703  [FUNC_DEF]          )
703  [NONE]              
704  [FUNC_DEF]          {
704  [NONE]              
705  [NONE]              int
705  [NONE]              i
705  [NONE]              ,
705  [NONE]              err
705  [NONE]              ;
705  [NONE]              
706  [NONE]              int
706  [NONE]              adap_id
706  [NONE]              =
706  [NONE]              i2c_adapter_id
706  [FUNC_CALL]         (
706  [NONE]              adapter
706  [FUNC_CALL]         )
706  [NONE]              ;
706  [NONE]              
708  [COMMENT_WHOLE]     /* Forget it if we can't probe using SMBUS_QUICK */
708  [NONE]              
709  [NONE]              if
709  [IF]                (
709  [NONE]              !
709  [NONE]              i2c_check_functionality
709  [FUNC_CALL]         (
709  [NONE]              adapter
709  [NONE]              ,
709  [NONE]              I2C_FUNC_SMBUS_QUICK
709  [FUNC_CALL]         )
709  [IF]                )
709  [IF]                
709  [NONE]              
710  [NONE]              return
710  [NONE]              -
710  [NONE]              1
710  [NONE]              ;
710  [IF]                
710  [NONE]              
712  [COMMENT_WHOLE]     /* Force entries are done first, and are not affected by ignore␤	   entries */
713  [NONE]              
714  [NONE]              if
714  [IF]                (
714  [NONE]              address_data
714  [NONE]              ->
714  [NONE]              forces
714  [IF]                )
714  [NONE]              
714  [IF]                {
714  [NONE]              
715  [NONE]              unsigned
715  [NONE]              short
715  [NONE]              *
715  [NONE]              *
715  [NONE]              forces
715  [NONE]              =
715  [NONE]              address_data
715  [NONE]              ->
715  [NONE]              forces
715  [NONE]              ;
715  [NONE]              
716  [NONE]              int
716  [NONE]              kind
716  [NONE]              ;
716  [NONE]              
718  [NONE]              for
718  [FOR]               (
718  [NONE]              kind
718  [NONE]              =
718  [NONE]              0
718  [FOR]               ;
718  [NONE]              forces
718  [NONE]              [
718  [NONE]              kind
718  [NONE]              ]
718  [FOR]               ;
718  [NONE]              kind
718  [NONE]              ++
718  [FOR]               )
718  [NONE]              
718  [FOR]               {
718  [NONE]              
719  [NONE]              for
719  [FOR]               (
719  [NONE]              i
719  [NONE]              =
719  [NONE]              0
719  [FOR]               ;
719  [NONE]              forces
719  [NONE]              [
719  [NONE]              kind
719  [NONE]              ]
719  [NONE]              [
719  [NONE]              i
719  [NONE]              ]
719  [NONE]              !=
719  [NONE]              I2C_CLIENT_END
719  [FOR]               ;
719  [NONE]              
720  [NONE]              i
720  [NONE]              +=
720  [NONE]              2
720  [FOR]               )
720  [NONE]              
720  [FOR]               {
720  [NONE]              
721  [NONE]              if
721  [IF]                (
721  [NONE]              forces
721  [NONE]              [
721  [NONE]              kind
721  [NONE]              ]
721  [NONE]              [
721  [NONE]              i
721  [NONE]              ]
721  [NONE]              ==
721  [NONE]              adap_id
721  [NONE]              
722  [NONE]              ||
722  [NONE]              forces
722  [NONE]              [
722  [NONE]              kind
722  [NONE]              ]
722  [NONE]              [
722  [NONE]              i
722  [NONE]              ]
722  [NONE]              ==
722  [NONE]              ANY_I2C_BUS
722  [IF]                )
722  [NONE]              
722  [IF]                {
722  [NONE]              
723  [NONE]              dev_dbg
723  [FUNC_CALL]         (
723  [NONE]              &
723  [NONE]              adapter
723  [NONE]              ->
723  [NONE]              dev
723  [NONE]              ,
723  [NONE]              "found force "
723  [NONE]              
724  [NONE]              "parameter for adapter %d, "
724  [NONE]              
725  [NONE]              "addr 0x%02x, kind %d\n"
725  [NONE]              ,
725  [NONE]              
726  [NONE]              adap_id
726  [NONE]              ,
726  [NONE]              forces
726  [NONE]              [
726  [NONE]              kind
726  [NONE]              ]
726  [NONE]              [
726  [NONE]              i
726  [NONE]              +
726  [NONE]              1
726  [NONE]              ]
726  [NONE]              ,
726  [NONE]              
727  [NONE]              kind
727  [FUNC_CALL]         )
727  [NONE]              ;
727  [NONE]              
728  [NONE]              err
728  [NONE]              =
728  [NONE]              i2c_probe_address
728  [FUNC_CALL]         (
728  [NONE]              adapter
728  [NONE]              ,
728  [NONE]              
729  [NONE]              forces
729  [NONE]              [
729  [NONE]              kind
729  [NONE]              ]
729  [NONE]              [
729  [NONE]              i
729  [NONE]              +
729  [NONE]              1
729  [NONE]              ]
729  [NONE]              ,
729  [NONE]              
730  [NONE]              kind
730  [NONE]              ,
730  [NONE]              found_proc
730  [FUNC_CALL]         )
730  [NONE]              ;
730  [NONE]              
731  [NONE]              if
731  [IF]                (
731  [NONE]              err
731  [IF]                )
731  [IF]                
731  [NONE]              
732  [NONE]              return
732  [NONE]              err
732  [NONE]              ;
732  [IF]                
732  [NONE]              
733  [IF]                }
733  [NONE]              
734  [FOR]               }
734  [NONE]              
735  [FOR]               }
735  [NONE]              
736  [IF]                }
736  [NONE]              
738  [COMMENT_WHOLE]     /* Probe entries are done second, and are not affected by ignore␤	   entries either */
739  [NONE]              
740  [NONE]              for
740  [FOR]               (
740  [NONE]              i
740  [NONE]              =
740  [NONE]              0
740  [FOR]               ;
740  [NONE]              address_data
740  [NONE]              ->
740  [NONE]              probe
740  [NONE]              [
740  [NONE]              i
740  [NONE]              ]
740  [NONE]              !=
740  [NONE]              I2C_CLIENT_END
740  [FOR]               ;
740  [NONE]              i
740  [NONE]              +=
740  [NONE]              2
740  [FOR]               )
740  [NONE]              
740  [FOR]               {
740  [NONE]              
741  [NONE]              if
741  [IF]                (
741  [NONE]              address_data
741  [NONE]              ->
741  [NONE]              probe
741  [NONE]              [
741  [NONE]              i
741  [NONE]              ]
741  [NONE]              ==
741  [NONE]              adap_id
741  [NONE]              
742  [NONE]              ||
742  [NONE]              address_data
742  [NONE]              ->
742  [NONE]              probe
742  [NONE]              [
742  [NONE]              i
742  [NONE]              ]
742  [NONE]              ==
742  [NONE]              ANY_I2C_BUS
742  [IF]                )
742  [NONE]              
742  [IF]                {
742  [NONE]              
743  [NONE]              dev_dbg
743  [FUNC_CALL]         (
743  [NONE]              &
743  [NONE]              adapter
743  [NONE]              ->
743  [NONE]              dev
743  [NONE]              ,
743  [NONE]              "found probe parameter for "
743  [NONE]              
744  [NONE]              "adapter %d, addr 0x%02x\n"
744  [NONE]              ,
744  [NONE]              adap_id
744  [NONE]              ,
744  [NONE]              
745  [NONE]              address_data
745  [NONE]              ->
745  [NONE]              probe
745  [NONE]              [
745  [NONE]              i
745  [NONE]              +
745  [NONE]              1
745  [NONE]              ]
745  [FUNC_CALL]         )
745  [NONE]              ;
745  [NONE]              
746  [NONE]              err
746  [NONE]              =
746  [NONE]              i2c_probe_address
746  [FUNC_CALL]         (
746  [NONE]              adapter
746  [NONE]              ,
746  [NONE]              
747  [NONE]              address_data
747  [NONE]              ->
747  [NONE]              probe
747  [NONE]              [
747  [NONE]              i
747  [NONE]              +
747  [NONE]              1
747  [NONE]              ]
747  [NONE]              ,
747  [NONE]              
748  [NONE]              -
748  [NONE]              1
748  [NONE]              ,
748  [NONE]              found_proc
748  [FUNC_CALL]         )
748  [NONE]              ;
748  [NONE]              
749  [NONE]              if
749  [IF]                (
749  [NONE]              err
749  [IF]                )
749  [IF]                
749  [NONE]              
750  [NONE]              return
750  [NONE]              err
750  [NONE]              ;
750  [IF]                
750  [NONE]              
751  [IF]                }
751  [NONE]              
752  [FOR]               }
752  [NONE]              
754  [COMMENT_WHOLE]     /* Normal entries are done last, unless shadowed by an ignore entry */
754  [NONE]              
755  [NONE]              for
755  [FOR]               (
755  [NONE]              i
755  [NONE]              =
755  [NONE]              0
755  [FOR]               ;
755  [NONE]              address_data
755  [NONE]              ->
755  [NONE]              normal_i2c
755  [NONE]              [
755  [NONE]              i
755  [NONE]              ]
755  [NONE]              !=
755  [NONE]              I2C_CLIENT_END
755  [FOR]               ;
755  [NONE]              i
755  [NONE]              +=
755  [NONE]              1
755  [FOR]               )
755  [NONE]              
755  [FOR]               {
755  [NONE]              
756  [NONE]              int
756  [NONE]              j
756  [NONE]              ,
756  [NONE]              ignore
756  [NONE]              ;
756  [NONE]              
758  [NONE]              ignore
758  [NONE]              =
758  [NONE]              0
758  [NONE]              ;
758  [NONE]              
759  [NONE]              for
759  [FOR]               (
759  [NONE]              j
759  [NONE]              =
759  [NONE]              0
759  [FOR]               ;
759  [NONE]              address_data
759  [NONE]              ->
759  [NONE]              ignore
759  [NONE]              [
759  [NONE]              j
759  [NONE]              ]
759  [NONE]              !=
759  [NONE]              I2C_CLIENT_END
759  [FOR]               ;
759  [NONE]              
760  [NONE]              j
760  [NONE]              +=
760  [NONE]              2
760  [FOR]               )
760  [NONE]              
760  [FOR]               {
760  [NONE]              
761  [NONE]              if
761  [IF]                (
761  [NONE]              (
761  [NONE]              address_data
761  [NONE]              ->
761  [NONE]              ignore
761  [NONE]              [
761  [NONE]              j
761  [NONE]              ]
761  [NONE]              ==
761  [NONE]              adap_id
761  [NONE]              ||
761  [NONE]              
762  [NONE]              address_data
762  [NONE]              ->
762  [NONE]              ignore
762  [NONE]              [
762  [NONE]              j
762  [NONE]              ]
762  [NONE]              ==
762  [NONE]              ANY_I2C_BUS
762  [NONE]              )
762  [NONE]              
763  [NONE]              &&
763  [NONE]              address_data
763  [NONE]              ->
763  [NONE]              ignore
763  [NONE]              [
763  [NONE]              j
763  [NONE]              +
763  [NONE]              1
763  [NONE]              ]
763  [NONE]              
764  [NONE]              ==
764  [NONE]              address_data
764  [NONE]              ->
764  [NONE]              normal_i2c
764  [NONE]              [
764  [NONE]              i
764  [NONE]              ]
764  [IF]                )
764  [NONE]              
764  [IF]                {
764  [NONE]              
765  [NONE]              dev_dbg
765  [FUNC_CALL]         (
765  [NONE]              &
765  [NONE]              adapter
765  [NONE]              ->
765  [NONE]              dev
765  [NONE]              ,
765  [NONE]              "found ignore "
765  [NONE]              
766  [NONE]              "parameter for adapter %d, "
766  [NONE]              
767  [NONE]              "addr 0x%02x\n"
767  [NONE]              ,
767  [NONE]              adap_id
767  [NONE]              ,
767  [NONE]              
768  [NONE]              address_data
768  [NONE]              ->
768  [NONE]              ignore
768  [NONE]              [
768  [NONE]              j
768  [NONE]              +
768  [NONE]              1
768  [NONE]              ]
768  [FUNC_CALL]         )
768  [NONE]              ;
768  [NONE]              
769  [IF]                }
769  [NONE]              
770  [NONE]              ignore
770  [NONE]              =
770  [NONE]              1
770  [NONE]              ;
770  [NONE]              
771  [NONE]              break
771  [NONE]              ;
771  [NONE]              
772  [FOR]               }
772  [NONE]              
773  [NONE]              if
773  [IF]                (
773  [NONE]              ignore
773  [IF]                )
773  [IF]                
773  [NONE]              
774  [NONE]              continue
774  [NONE]              ;
774  [IF]                
774  [NONE]              
776  [NONE]              dev_dbg
776  [FUNC_CALL]         (
776  [NONE]              &
776  [NONE]              adapter
776  [NONE]              ->
776  [NONE]              dev
776  [NONE]              ,
776  [NONE]              "found normal entry for adapter %d, "
776  [NONE]              
777  [NONE]              "addr 0x%02x\n"
777  [NONE]              ,
777  [NONE]              adap_id
777  [NONE]              ,
777  [NONE]              
778  [NONE]              address_data
778  [NONE]              ->
778  [NONE]              normal_i2c
778  [NONE]              [
778  [NONE]              i
778  [NONE]              ]
778  [FUNC_CALL]         )
778  [NONE]              ;
778  [NONE]              
779  [NONE]              err
779  [NONE]              =
779  [NONE]              i2c_probe_address
779  [FUNC_CALL]         (
779  [NONE]              adapter
779  [NONE]              ,
779  [NONE]              address_data
779  [NONE]              ->
779  [NONE]              normal_i2c
779  [NONE]              [
779  [NONE]              i
779  [NONE]              ]
779  [NONE]              ,
779  [NONE]              
780  [NONE]              -
780  [NONE]              1
780  [NONE]              ,
780  [NONE]              found_proc
780  [FUNC_CALL]         )
780  [NONE]              ;
780  [NONE]              
781  [NONE]              if
781  [IF]                (
781  [NONE]              err
781  [IF]                )
781  [IF]                
781  [NONE]              
782  [NONE]              return
782  [NONE]              err
782  [NONE]              ;
782  [IF]                
782  [NONE]              
783  [FOR]               }
783  [NONE]              
785  [NONE]              return
785  [NONE]              0
785  [NONE]              ;
785  [NONE]              
786  [FUNC_DEF]          }
786  [NONE]              
788  [FUNC_DEF]          struct
788  [FUNC_DEF]          i2c_adapter
788  [FUNC_DEF]          *
788  [NONE]              i2c_get_adapter
788  [FUNC_DEF]          (
788  [NONE]              int
788  [NONE]              id
788  [FUNC_DEF]          )
788  [NONE]              
789  [FUNC_DEF]          {
789  [NONE]              
790  [NONE]              struct
790  [STRUCT]            i2c_adapter
790  [STRUCT]            *
790  [NONE]              adapter
790  [NONE]              ;
790  [NONE]              
792  [NONE]              down
792  [FUNC_CALL]         (
792  [NONE]              &
792  [NONE]              core_lists
792  [FUNC_CALL]         )
792  [NONE]              ;
792  [NONE]              
793  [NONE]              adapter
793  [NONE]              =
793  [C_CAST]            (
793  [C_CAST]            struct
793  [STRUCT]            i2c_adapter
793  [C_CAST]            *
793  [C_CAST]            )
793  [NONE]              idr_find
793  [FUNC_CALL]         (
793  [NONE]              &
793  [NONE]              i2c_adapter_idr
793  [NONE]              ,
793  [NONE]              id
793  [FUNC_CALL]         )
793  [NONE]              ;
793  [NONE]              
794  [NONE]              if
794  [IF]                (
794  [NONE]              adapter
794  [NONE]              &&
794  [NONE]              !
794  [NONE]              try_module_get
794  [FUNC_CALL]         (
794  [NONE]              adapter
794  [NONE]              ->
794  [NONE]              owner
794  [FUNC_CALL]         )
794  [IF]                )
794  [IF]                
794  [NONE]              
795  [NONE]              adapter
795  [NONE]              =
795  [NONE]              NULL
795  [NONE]              ;
795  [IF]                
795  [NONE]              
797  [NONE]              up
797  [FUNC_CALL]         (
797  [NONE]              &
797  [NONE]              core_lists
797  [FUNC_CALL]         )
797  [NONE]              ;
797  [NONE]              
798  [NONE]              return
798  [NONE]              adapter
798  [NONE]              ;
798  [NONE]              
799  [FUNC_DEF]          }
799  [NONE]              
801  [FUNC_DEF]          void
801  [NONE]              i2c_put_adapter
801  [FUNC_DEF]          (
801  [NONE]              struct
801  [STRUCT]            i2c_adapter
801  [STRUCT]            *
801  [NONE]              adap
801  [FUNC_DEF]          )
801  [NONE]              
802  [FUNC_DEF]          {
802  [NONE]              
803  [NONE]              module_put
803  [FUNC_CALL]         (
803  [NONE]              adap
803  [NONE]              ->
803  [NONE]              owner
803  [FUNC_CALL]         )
803  [NONE]              ;
803  [NONE]              
804  [FUNC_DEF]          }
804  [NONE]              
806  [COMMENT_WHOLE]     /* The SMBus parts */
806  [NONE]              
808  [PP_DEFINE]         #
808  [NONE]              define
808  [NONE]              POLY
808  [NONE]              (
808  [NONE]              0x1070U
808  [NONE]              <<
808  [NONE]              3
808  [NONE]              )
808  [NONE]              
809  [FUNC_DEF]          static
809  [FUNC_DEF]          u8
809  [NONE]              
810  [NONE]              crc8
810  [FUNC_DEF]          (
810  [NONE]              u16
810  [NONE]              data
810  [FUNC_DEF]          )
810  [NONE]              
811  [FUNC_DEF]          {
811  [NONE]              
812  [NONE]              int
812  [NONE]              i
812  [NONE]              ;
812  [NONE]              
814  [NONE]              for
814  [FOR]               (
814  [NONE]              i
814  [NONE]              =
814  [NONE]              0
814  [FOR]               ;
814  [NONE]              i
814  [NONE]              <
814  [NONE]              8
814  [FOR]               ;
814  [NONE]              i
814  [NONE]              ++
814  [FOR]               )
814  [NONE]              
814  [FOR]               {
814  [NONE]              
815  [NONE]              if
815  [IF]                (
815  [NONE]              data
815  [NONE]              &
815  [NONE]              0x8000
815  [IF]                )
815  [IF]                
815  [NONE]              
816  [NONE]              data
816  [NONE]              =
816  [NONE]              data
816  [NONE]              ^
816  [NONE]              POLY
816  [NONE]              ;
816  [IF]                
816  [NONE]              
817  [NONE]              data
817  [NONE]              =
817  [NONE]              data
817  [NONE]              <<
817  [NONE]              1
817  [NONE]              ;
817  [NONE]              
818  [FOR]               }
818  [NONE]              
819  [NONE]              return
819  [C_CAST]            (
819  [C_CAST]            u8
819  [C_CAST]            )
819  [NONE]              (
819  [NONE]              data
819  [NONE]              >>
819  [NONE]              8
819  [NONE]              )
819  [NONE]              ;
819  [NONE]              
820  [FUNC_DEF]          }
820  [NONE]              
822  [COMMENT_WHOLE]     /* CRC over count bytes in the first array plus the bytes in the rest␤   array if it is non-null. rest[0] is the (length of rest) - 1␤   and is included. */
824  [NONE]              
825  [FUNC_DEF]          static
825  [FUNC_DEF]          u8
825  [NONE]              i2c_smbus_partial_pec
825  [FUNC_DEF]          (
825  [NONE]              u8
825  [NONE]              crc
825  [NONE]              ,
825  [NONE]              int
825  [NONE]              count
825  [NONE]              ,
825  [NONE]              u8
825  [NONE]              *
825  [NONE]              first
825  [NONE]              ,
825  [NONE]              u8
825  [NONE]              *
825  [NONE]              rest
825  [FUNC_DEF]          )
825  [NONE]              
826  [FUNC_DEF]          {
826  [NONE]              
827  [NONE]              int
827  [NONE]              i
827  [NONE]              ;
827  [NONE]              
829  [NONE]              for
829  [FOR]               (
829  [NONE]              i
829  [NONE]              =
829  [NONE]              0
829  [FOR]               ;
829  [NONE]              i
829  [NONE]              <
829  [NONE]              count
829  [FOR]               ;
829  [NONE]              i
829  [NONE]              ++
829  [FOR]               )
829  [FOR]               
829  [NONE]              
830  [NONE]              crc
830  [NONE]              =
830  [NONE]              crc8
830  [FUNC_CALL]         (
830  [NONE]              (
830  [NONE]              crc
830  [NONE]              ^
830  [NONE]              first
830  [NONE]              [
830  [NONE]              i
830  [NONE]              ]
830  [NONE]              )
830  [NONE]              <<
830  [NONE]              8
830  [FUNC_CALL]         )
830  [NONE]              ;
830  [FOR]               
830  [NONE]              
831  [NONE]              if
831  [IF]                (
831  [NONE]              rest
831  [NONE]              !=
831  [NONE]              NULL
831  [IF]                )
831  [IF]                
831  [NONE]              
832  [NONE]              for
832  [FOR]               (
832  [NONE]              i
832  [NONE]              =
832  [NONE]              0
832  [FOR]               ;
832  [NONE]              i
832  [NONE]              <=
832  [NONE]              rest
832  [NONE]              [
832  [NONE]              0
832  [NONE]              ]
832  [FOR]               ;
832  [NONE]              i
832  [NONE]              ++
832  [FOR]               )
832  [FOR]               
832  [NONE]              
833  [NONE]              crc
833  [NONE]              =
833  [NONE]              crc8
833  [FUNC_CALL]         (
833  [NONE]              (
833  [NONE]              crc
833  [NONE]              ^
833  [NONE]              rest
833  [NONE]              [
833  [NONE]              i
833  [NONE]              ]
833  [NONE]              )
833  [NONE]              <<
833  [NONE]              8
833  [FUNC_CALL]         )
833  [NONE]              ;
833  [FOR]               
833  [IF]                
833  [NONE]              
834  [NONE]              return
834  [NONE]              crc
834  [NONE]              ;
834  [NONE]              
835  [FUNC_DEF]          }
835  [NONE]              
837  [FUNC_DEF]          static
837  [FUNC_DEF]          u8
837  [NONE]              i2c_smbus_pec
837  [FUNC_DEF]          (
837  [NONE]              int
837  [NONE]              count
837  [NONE]              ,
837  [NONE]              u8
837  [NONE]              *
837  [NONE]              first
837  [NONE]              ,
837  [NONE]              u8
837  [NONE]              *
837  [NONE]              rest
837  [FUNC_DEF]          )
837  [NONE]              
838  [FUNC_DEF]          {
838  [NONE]              
839  [NONE]              return
839  [NONE]              i2c_smbus_partial_pec
839  [FUNC_CALL]         (
839  [NONE]              0
839  [NONE]              ,
839  [NONE]              count
839  [NONE]              ,
839  [NONE]              first
839  [NONE]              ,
839  [NONE]              rest
839  [FUNC_CALL]         )
839  [NONE]              ;
839  [NONE]              
840  [FUNC_DEF]          }
840  [NONE]              
842  [COMMENT_WHOLE]     /* Returns new "size" (transaction type)␤   Note that we convert byte to byte_data and byte_data to word_data␤   rather than invent new xxx_PEC transactions. */
844  [NONE]              
845  [FUNC_DEF]          static
845  [FUNC_DEF]          int
845  [NONE]              i2c_smbus_add_pec
845  [FUNC_DEF]          (
845  [NONE]              u16
845  [NONE]              addr
845  [NONE]              ,
845  [NONE]              u8
845  [NONE]              command
845  [NONE]              ,
845  [NONE]              int
845  [NONE]              size
845  [NONE]              ,
845  [NONE]              
846  [NONE]              union
846  [NONE]              i2c_smbus_data
846  [UNION]             *
846  [NONE]              data
846  [FUNC_DEF]          )
846  [NONE]              
847  [FUNC_DEF]          {
847  [NONE]              
848  [NONE]              u8
848  [NONE]              buf
848  [NONE]              [
848  [NONE]              3
848  [NONE]              ]
848  [NONE]              ;
848  [NONE]              
850  [NONE]              buf
850  [NONE]              [
850  [NONE]              0
850  [NONE]              ]
850  [NONE]              =
850  [NONE]              addr
850  [NONE]              <<
850  [NONE]              1
850  [NONE]              ;
850  [NONE]              
851  [NONE]              buf
851  [NONE]              [
851  [NONE]              1
851  [NONE]              ]
851  [NONE]              =
851  [NONE]              command
851  [NONE]              ;
851  [NONE]              
852  [NONE]              switch
852  [SWITCH]            (
852  [NONE]              size
852  [SWITCH]            )
852  [NONE]              
852  [SWITCH]            {
852  [NONE]              
853  [NONE]              case
853  [NONE]              I2C_SMBUS_BYTE
853  [NONE]              :
853  [NONE]              
854  [NONE]              data
854  [NONE]              ->
854  [NONE]              byte
854  [NONE]              =
854  [NONE]              i2c_smbus_pec
854  [FUNC_CALL]         (
854  [NONE]              2
854  [NONE]              ,
854  [NONE]              buf
854  [NONE]              ,
854  [NONE]              NULL
854  [FUNC_CALL]         )
854  [NONE]              ;
854  [NONE]              
855  [NONE]              size
855  [NONE]              =
855  [NONE]              I2C_SMBUS_BYTE_DATA
855  [NONE]              ;
855  [NONE]              
856  [NONE]              break
856  [NONE]              ;
856  [NONE]              
857  [NONE]              case
857  [NONE]              I2C_SMBUS_BYTE_DATA
857  [NONE]              :
857  [NONE]              
858  [NONE]              buf
858  [NONE]              [
858  [NONE]              2
858  [NONE]              ]
858  [NONE]              =
858  [NONE]              data
858  [NONE]              ->
858  [NONE]              byte
858  [NONE]              ;
858  [NONE]              
859  [NONE]              data
859  [NONE]              ->
859  [NONE]              word
859  [NONE]              =
859  [NONE]              buf
859  [NONE]              [
859  [NONE]              2
859  [NONE]              ]
859  [NONE]              ||
859  [NONE]              
860  [NONE]              (
860  [NONE]              i2c_smbus_pec
860  [FUNC_CALL]         (
860  [NONE]              3
860  [NONE]              ,
860  [NONE]              buf
860  [NONE]              ,
860  [NONE]              NULL
860  [FUNC_CALL]         )
860  [NONE]              <<
860  [NONE]              8
860  [NONE]              )
860  [NONE]              ;
860  [NONE]              
861  [NONE]              size
861  [NONE]              =
861  [NONE]              I2C_SMBUS_WORD_DATA
861  [NONE]              ;
861  [NONE]              
862  [NONE]              break
862  [NONE]              ;
862  [NONE]              
863  [NONE]              case
863  [NONE]              I2C_SMBUS_WORD_DATA
863  [NONE]              :
863  [NONE]              
864  [COMMENT_WHOLE]     /* unsupported */
864  [NONE]              
865  [NONE]              break
865  [NONE]              ;
865  [NONE]              
866  [NONE]              case
866  [NONE]              I2C_SMBUS_BLOCK_DATA
866  [NONE]              :
866  [NONE]              
867  [NONE]              data
867  [NONE]              ->
867  [NONE]              block
867  [NONE]              [
867  [NONE]              data
867  [NONE]              ->
867  [NONE]              block
867  [NONE]              [
867  [NONE]              0
867  [NONE]              ]
867  [NONE]              +
867  [NONE]              1
867  [NONE]              ]
867  [NONE]              =
867  [NONE]              
868  [NONE]              i2c_smbus_pec
868  [FUNC_CALL]         (
868  [NONE]              2
868  [NONE]              ,
868  [NONE]              buf
868  [NONE]              ,
868  [NONE]              data
868  [NONE]              ->
868  [NONE]              block
868  [FUNC_CALL]         )
868  [NONE]              ;
868  [NONE]              
869  [NONE]              size
869  [NONE]              =
869  [NONE]              I2C_SMBUS_BLOCK_DATA_PEC
869  [NONE]              ;
869  [NONE]              
870  [NONE]              break
870  [NONE]              ;
870  [NONE]              
871  [SWITCH]            }
871  [NONE]              
872  [NONE]              return
872  [NONE]              size
872  [NONE]              ;
872  [NONE]              
873  [FUNC_DEF]          }
873  [NONE]              
875  [FUNC_DEF]          static
875  [FUNC_DEF]          int
875  [NONE]              i2c_smbus_check_pec
875  [FUNC_DEF]          (
875  [NONE]              u16
875  [NONE]              addr
875  [NONE]              ,
875  [NONE]              u8
875  [NONE]              command
875  [NONE]              ,
875  [NONE]              int
875  [NONE]              size
875  [NONE]              ,
875  [NONE]              u8
875  [NONE]              partial
875  [NONE]              ,
875  [NONE]              
876  [NONE]              union
876  [NONE]              i2c_smbus_data
876  [UNION]             *
876  [NONE]              data
876  [FUNC_DEF]          )
876  [NONE]              
877  [FUNC_DEF]          {
877  [NONE]              
878  [NONE]              u8
878  [NONE]              buf
878  [NONE]              [
878  [NONE]              3
878  [NONE]              ]
878  [NONE]              ,
878  [NONE]              rpec
878  [NONE]              ,
878  [NONE]              cpec
878  [NONE]              ;
878  [NONE]              
880  [NONE]              buf
880  [NONE]              [
880  [NONE]              1
880  [NONE]              ]
880  [NONE]              =
880  [NONE]              command
880  [NONE]              ;
880  [NONE]              
881  [NONE]              switch
881  [SWITCH]            (
881  [NONE]              size
881  [SWITCH]            )
881  [NONE]              
881  [SWITCH]            {
881  [NONE]              
882  [NONE]              case
882  [NONE]              I2C_SMBUS_BYTE_DATA
882  [NONE]              :
882  [NONE]              
883  [NONE]              buf
883  [NONE]              [
883  [NONE]              0
883  [NONE]              ]
883  [NONE]              =
883  [NONE]              (
883  [NONE]              addr
883  [NONE]              <<
883  [NONE]              1
883  [NONE]              )
883  [NONE]              |
883  [NONE]              1
883  [NONE]              ;
883  [NONE]              
884  [NONE]              cpec
884  [NONE]              =
884  [NONE]              i2c_smbus_pec
884  [FUNC_CALL]         (
884  [NONE]              2
884  [NONE]              ,
884  [NONE]              buf
884  [NONE]              ,
884  [NONE]              NULL
884  [FUNC_CALL]         )
884  [NONE]              ;
884  [NONE]              
885  [NONE]              rpec
885  [NONE]              =
885  [NONE]              data
885  [NONE]              ->
885  [NONE]              byte
885  [NONE]              ;
885  [NONE]              
886  [NONE]              break
886  [NONE]              ;
886  [NONE]              
887  [NONE]              case
887  [NONE]              I2C_SMBUS_WORD_DATA
887  [NONE]              :
887  [NONE]              
888  [NONE]              buf
888  [NONE]              [
888  [NONE]              0
888  [NONE]              ]
888  [NONE]              =
888  [NONE]              (
888  [NONE]              addr
888  [NONE]              <<
888  [NONE]              1
888  [NONE]              )
888  [NONE]              |
888  [NONE]              1
888  [NONE]              ;
888  [NONE]              
889  [NONE]              buf
889  [NONE]              [
889  [NONE]              2
889  [NONE]              ]
889  [NONE]              =
889  [NONE]              data
889  [NONE]              ->
889  [NONE]              word
889  [NONE]              &
889  [NONE]              0xff
889  [NONE]              ;
889  [NONE]              
890  [NONE]              cpec
890  [NONE]              =
890  [NONE]              i2c_smbus_pec
890  [FUNC_CALL]         (
890  [NONE]              3
890  [NONE]              ,
890  [NONE]              buf
890  [NONE]              ,
890  [NONE]              NULL
890  [FUNC_CALL]         )
890  [NONE]              ;
890  [NONE]              
891  [NONE]              rpec
891  [NONE]              =
891  [NONE]              data
891  [NONE]              ->
891  [NONE]              word
891  [NONE]              >>
891  [NONE]              8
891  [NONE]              ;
891  [NONE]              
892  [NONE]              break
892  [NONE]              ;
892  [NONE]              
893  [NONE]              case
893  [NONE]              I2C_SMBUS_WORD_DATA_PEC
893  [NONE]              :
893  [NONE]              
894  [COMMENT_WHOLE]     /* unsupported */
894  [NONE]              
895  [NONE]              cpec
895  [NONE]              =
895  [NONE]              rpec
895  [NONE]              =
895  [NONE]              0
895  [NONE]              ;
895  [NONE]              
896  [NONE]              break
896  [NONE]              ;
896  [NONE]              
897  [NONE]              case
897  [NONE]              I2C_SMBUS_PROC_CALL_PEC
897  [NONE]              :
897  [NONE]              
898  [COMMENT_WHOLE]     /* unsupported */
898  [NONE]              
899  [NONE]              cpec
899  [NONE]              =
899  [NONE]              rpec
899  [NONE]              =
899  [NONE]              0
899  [NONE]              ;
899  [NONE]              
900  [NONE]              break
900  [NONE]              ;
900  [NONE]              
901  [NONE]              case
901  [NONE]              I2C_SMBUS_BLOCK_DATA_PEC
901  [NONE]              :
901  [NONE]              
902  [NONE]              buf
902  [NONE]              [
902  [NONE]              0
902  [NONE]              ]
902  [NONE]              =
902  [NONE]              (
902  [NONE]              addr
902  [NONE]              <<
902  [NONE]              1
902  [NONE]              )
902  [NONE]              ;
902  [NONE]              
903  [NONE]              buf
903  [NONE]              [
903  [NONE]              2
903  [NONE]              ]
903  [NONE]              =
903  [NONE]              (
903  [NONE]              addr
903  [NONE]              <<
903  [NONE]              1
903  [NONE]              )
903  [NONE]              |
903  [NONE]              1
903  [NONE]              ;
903  [NONE]              
904  [NONE]              cpec
904  [NONE]              =
904  [NONE]              i2c_smbus_pec
904  [FUNC_CALL]         (
904  [NONE]              3
904  [NONE]              ,
904  [NONE]              buf
904  [NONE]              ,
904  [NONE]              data
904  [NONE]              ->
904  [NONE]              block
904  [FUNC_CALL]         )
904  [NONE]              ;
904  [NONE]              
905  [NONE]              rpec
905  [NONE]              =
905  [NONE]              data
905  [NONE]              ->
905  [NONE]              block
905  [NONE]              [
905  [NONE]              data
905  [NONE]              ->
905  [NONE]              block
905  [NONE]              [
905  [NONE]              0
905  [NONE]              ]
905  [NONE]              +
905  [NONE]              1
905  [NONE]              ]
905  [NONE]              ;
905  [NONE]              
906  [NONE]              break
906  [NONE]              ;
906  [NONE]              
907  [NONE]              case
907  [NONE]              I2C_SMBUS_BLOCK_PROC_CALL_PEC
907  [NONE]              :
907  [NONE]              
908  [NONE]              buf
908  [NONE]              [
908  [NONE]              0
908  [NONE]              ]
908  [NONE]              =
908  [NONE]              (
908  [NONE]              addr
908  [NONE]              <<
908  [NONE]              1
908  [NONE]              )
908  [NONE]              |
908  [NONE]              1
908  [NONE]              ;
908  [NONE]              
909  [NONE]              rpec
909  [NONE]              =
909  [NONE]              i2c_smbus_partial_pec
909  [FUNC_CALL]         (
909  [NONE]              partial
909  [NONE]              ,
909  [NONE]              1
909  [NONE]              ,
909  [NONE]              
910  [NONE]              buf
910  [NONE]              ,
910  [NONE]              data
910  [NONE]              ->
910  [NONE]              block
910  [FUNC_CALL]         )
910  [NONE]              ;
910  [NONE]              
911  [NONE]              cpec
911  [NONE]              =
911  [NONE]              data
911  [NONE]              ->
911  [NONE]              block
911  [NONE]              [
911  [NONE]              data
911  [NONE]              ->
911  [NONE]              block
911  [NONE]              [
911  [NONE]              0
911  [NONE]              ]
911  [NONE]              +
911  [NONE]              1
911  [NONE]              ]
911  [NONE]              ;
911  [NONE]              
912  [NONE]              break
912  [NONE]              ;
912  [NONE]              
913  [NONE]              default
913  [NONE]              :
913  [NONE]              
914  [NONE]              cpec
914  [NONE]              =
914  [NONE]              rpec
914  [NONE]              =
914  [NONE]              0
914  [NONE]              ;
914  [NONE]              
915  [NONE]              break
915  [NONE]              ;
915  [NONE]              
916  [SWITCH]            }
916  [NONE]              
917  [NONE]              if
917  [IF]                (
917  [NONE]              rpec
917  [NONE]              !=
917  [NONE]              cpec
917  [IF]                )
917  [NONE]              
917  [IF]                {
917  [NONE]              
918  [NONE]              pr_debug
918  [FUNC_CALL]         (
918  [NONE]              "i2c-core: Bad PEC 0x%02x vs. 0x%02x\n"
918  [NONE]              ,
918  [NONE]              
919  [NONE]              rpec
919  [NONE]              ,
919  [NONE]              cpec
919  [FUNC_CALL]         )
919  [NONE]              ;
919  [NONE]              
920  [NONE]              return
920  [NONE]              -
920  [NONE]              1
920  [NONE]              ;
920  [NONE]              
921  [IF]                }
921  [NONE]              
922  [NONE]              return
922  [NONE]              0
922  [NONE]              ;
922  [NONE]              
923  [FUNC_DEF]          }
923  [NONE]              
925  [FUNC_DEF]          s32
925  [NONE]              i2c_smbus_write_quick
925  [FUNC_DEF]          (
925  [NONE]              struct
925  [STRUCT]            i2c_client
925  [STRUCT]            *
925  [NONE]              client
925  [NONE]              ,
925  [NONE]              u8
925  [NONE]              value
925  [FUNC_DEF]          )
925  [NONE]              
926  [FUNC_DEF]          {
926  [NONE]              
927  [NONE]              return
927  [NONE]              i2c_smbus_xfer
927  [FUNC_CALL]         (
927  [NONE]              client
927  [NONE]              ->
927  [NONE]              adapter
927  [NONE]              ,
927  [NONE]              client
927  [NONE]              ->
927  [NONE]              addr
927  [NONE]              ,
927  [NONE]              client
927  [NONE]              ->
927  [NONE]              flags
927  [NONE]              ,
927  [NONE]              
928  [NONE]              value
928  [NONE]              ,
928  [NONE]              0
928  [NONE]              ,
928  [NONE]              I2C_SMBUS_QUICK
928  [NONE]              ,
928  [NONE]              NULL
928  [FUNC_CALL]         )
928  [NONE]              ;
928  [NONE]              
929  [FUNC_DEF]          }
929  [NONE]              
931  [FUNC_DEF]          s32
931  [NONE]              i2c_smbus_read_byte
931  [FUNC_DEF]          (
931  [NONE]              struct
931  [STRUCT]            i2c_client
931  [STRUCT]            *
931  [NONE]              client
931  [FUNC_DEF]          )
931  [NONE]              
932  [FUNC_DEF]          {
932  [NONE]              
933  [NONE]              union
933  [UNION]             i2c_smbus_data
933  [UNION]             data
933  [NONE]              ;
933  [NONE]              
934  [NONE]              if
934  [IF]                (
934  [NONE]              i2c_smbus_xfer
934  [FUNC_CALL]         (
934  [NONE]              client
934  [NONE]              ->
934  [NONE]              adapter
934  [NONE]              ,
934  [NONE]              client
934  [NONE]              ->
934  [NONE]              addr
934  [NONE]              ,
934  [NONE]              client
934  [NONE]              ->
934  [NONE]              flags
934  [NONE]              ,
934  [NONE]              
935  [NONE]              I2C_SMBUS_READ
935  [NONE]              ,
935  [NONE]              0
935  [NONE]              ,
935  [NONE]              I2C_SMBUS_BYTE
935  [NONE]              ,
935  [NONE]              &
935  [NONE]              data
935  [FUNC_CALL]         )
935  [IF]                )
935  [IF]                
935  [NONE]              
936  [NONE]              return
936  [NONE]              -
936  [NONE]              1
936  [NONE]              ;
936  [IF]                
936  [NONE]              
937  [NONE]              else
937  [ELSE]              
937  [NONE]              
938  [NONE]              return
938  [NONE]              0x0FF
938  [NONE]              &
938  [NONE]              data
938  [NONE]              .
938  [NONE]              byte
938  [NONE]              ;
938  [ELSE]              
938  [NONE]              
939  [FUNC_DEF]          }
939  [NONE]              
941  [FUNC_DEF]          s32
941  [NONE]              i2c_smbus_write_byte
941  [FUNC_DEF]          (
941  [NONE]              struct
941  [STRUCT]            i2c_client
941  [STRUCT]            *
941  [NONE]              client
941  [NONE]              ,
941  [NONE]              u8
941  [NONE]              value
941  [FUNC_DEF]          )
941  [NONE]              
942  [FUNC_DEF]          {
942  [NONE]              
943  [NONE]              union
943  [UNION]             i2c_smbus_data
943  [UNION]             data
943  [NONE]              ;
943  [COMMENT_END]       /* only for PEC */
943  [NONE]              
944  [NONE]              return
944  [NONE]              i2c_smbus_xfer
944  [FUNC_CALL]         (
944  [NONE]              client
944  [NONE]              ->
944  [NONE]              adapter
944  [NONE]              ,
944  [NONE]              client
944  [NONE]              ->
944  [NONE]              addr
944  [NONE]              ,
944  [NONE]              client
944  [NONE]              ->
944  [NONE]              flags
944  [NONE]              ,
944  [NONE]              
945  [NONE]              I2C_SMBUS_WRITE
945  [NONE]              ,
945  [NONE]              value
945  [NONE]              ,
945  [NONE]              I2C_SMBUS_BYTE
945  [NONE]              ,
945  [NONE]              &
945  [NONE]              data
945  [FUNC_CALL]         )
945  [NONE]              ;
945  [NONE]              
946  [FUNC_DEF]          }
946  [NONE]              
948  [FUNC_DEF]          s32
948  [NONE]              i2c_smbus_read_byte_data
948  [FUNC_DEF]          (
948  [NONE]              struct
948  [STRUCT]            i2c_client
948  [STRUCT]            *
948  [NONE]              client
948  [NONE]              ,
948  [NONE]              u8
948  [NONE]              command
948  [FUNC_DEF]          )
948  [NONE]              
949  [FUNC_DEF]          {
949  [NONE]              
950  [NONE]              union
950  [UNION]             i2c_smbus_data
950  [UNION]             data
950  [NONE]              ;
950  [NONE]              
951  [NONE]              if
951  [IF]                (
951  [NONE]              i2c_smbus_xfer
951  [FUNC_CALL]         (
951  [NONE]              client
951  [NONE]              ->
951  [NONE]              adapter
951  [NONE]              ,
951  [NONE]              client
951  [NONE]              ->
951  [NONE]              addr
951  [NONE]              ,
951  [NONE]              client
951  [NONE]              ->
951  [NONE]              flags
951  [NONE]              ,
951  [NONE]              
952  [NONE]              I2C_SMBUS_READ
952  [NONE]              ,
952  [NONE]              command
952  [NONE]              ,
952  [NONE]              I2C_SMBUS_BYTE_DATA
952  [NONE]              ,
952  [NONE]              &
952  [NONE]              data
952  [FUNC_CALL]         )
952  [IF]                )
952  [IF]                
952  [NONE]              
953  [NONE]              return
953  [NONE]              -
953  [NONE]              1
953  [NONE]              ;
953  [IF]                
953  [NONE]              
954  [NONE]              else
954  [ELSE]              
954  [NONE]              
955  [NONE]              return
955  [NONE]              0x0FF
955  [NONE]              &
955  [NONE]              data
955  [NONE]              .
955  [NONE]              byte
955  [NONE]              ;
955  [ELSE]              
955  [NONE]              
956  [FUNC_DEF]          }
956  [NONE]              
958  [FUNC_DEF]          s32
958  [NONE]              i2c_smbus_write_byte_data
958  [FUNC_DEF]          (
958  [NONE]              struct
958  [STRUCT]            i2c_client
958  [STRUCT]            *
958  [NONE]              client
958  [NONE]              ,
958  [NONE]              u8
958  [NONE]              command
958  [NONE]              ,
958  [NONE]              u8
958  [NONE]              value
958  [FUNC_DEF]          )
958  [NONE]              
959  [FUNC_DEF]          {
959  [NONE]              
960  [NONE]              union
960  [UNION]             i2c_smbus_data
960  [UNION]             data
960  [NONE]              ;
960  [NONE]              
961  [NONE]              data
961  [NONE]              .
961  [NONE]              byte
961  [NONE]              =
961  [NONE]              value
961  [NONE]              ;
961  [NONE]              
962  [NONE]              return
962  [NONE]              i2c_smbus_xfer
962  [FUNC_CALL]         (
962  [NONE]              client
962  [NONE]              ->
962  [NONE]              adapter
962  [NONE]              ,
962  [NONE]              client
962  [NONE]              ->
962  [NONE]              addr
962  [NONE]              ,
962  [NONE]              client
962  [NONE]              ->
962  [NONE]              flags
962  [NONE]              ,
962  [NONE]              
963  [NONE]              I2C_SMBUS_WRITE
963  [NONE]              ,
963  [NONE]              command
963  [NONE]              ,
963  [NONE]              
964  [NONE]              I2C_SMBUS_BYTE_DATA
964  [NONE]              ,
964  [NONE]              &
964  [NONE]              data
964  [FUNC_CALL]         )
964  [NONE]              ;
964  [NONE]              
965  [FUNC_DEF]          }
965  [NONE]              
967  [FUNC_DEF]          s32
967  [NONE]              i2c_smbus_read_word_data
967  [FUNC_DEF]          (
967  [NONE]              struct
967  [STRUCT]            i2c_client
967  [STRUCT]            *
967  [NONE]              client
967  [NONE]              ,
967  [NONE]              u8
967  [NONE]              command
967  [FUNC_DEF]          )
967  [NONE]              
968  [FUNC_DEF]          {
968  [NONE]              
969  [NONE]              union
969  [UNION]             i2c_smbus_data
969  [UNION]             data
969  [NONE]              ;
969  [NONE]              
970  [NONE]              if
970  [IF]                (
970  [NONE]              i2c_smbus_xfer
970  [FUNC_CALL]         (
970  [NONE]              client
970  [NONE]              ->
970  [NONE]              adapter
970  [NONE]              ,
970  [NONE]              client
970  [NONE]              ->
970  [NONE]              addr
970  [NONE]              ,
970  [NONE]              client
970  [NONE]              ->
970  [NONE]              flags
970  [NONE]              ,
970  [NONE]              
971  [NONE]              I2C_SMBUS_READ
971  [NONE]              ,
971  [NONE]              command
971  [NONE]              ,
971  [NONE]              I2C_SMBUS_WORD_DATA
971  [NONE]              ,
971  [NONE]              &
971  [NONE]              data
971  [FUNC_CALL]         )
971  [IF]                )
971  [IF]                
971  [NONE]              
972  [NONE]              return
972  [NONE]              -
972  [NONE]              1
972  [NONE]              ;
972  [IF]                
972  [NONE]              
973  [NONE]              else
973  [ELSE]              
973  [NONE]              
974  [NONE]              return
974  [NONE]              0x0FFFF
974  [NONE]              &
974  [NONE]              data
974  [NONE]              .
974  [NONE]              word
974  [NONE]              ;
974  [ELSE]              
974  [NONE]              
975  [FUNC_DEF]          }
975  [NONE]              
977  [FUNC_DEF]          s32
977  [NONE]              i2c_smbus_write_word_data
977  [FUNC_DEF]          (
977  [NONE]              struct
977  [STRUCT]            i2c_client
977  [STRUCT]            *
977  [NONE]              client
977  [NONE]              ,
977  [NONE]              u8
977  [NONE]              command
977  [NONE]              ,
977  [NONE]              u16
977  [NONE]              value
977  [FUNC_DEF]          )
977  [NONE]              
978  [FUNC_DEF]          {
978  [NONE]              
979  [NONE]              union
979  [UNION]             i2c_smbus_data
979  [UNION]             data
979  [NONE]              ;
979  [NONE]              
980  [NONE]              data
980  [NONE]              .
980  [NONE]              word
980  [NONE]              =
980  [NONE]              value
980  [NONE]              ;
980  [NONE]              
981  [NONE]              return
981  [NONE]              i2c_smbus_xfer
981  [FUNC_CALL]         (
981  [NONE]              client
981  [NONE]              ->
981  [NONE]              adapter
981  [NONE]              ,
981  [NONE]              client
981  [NONE]              ->
981  [NONE]              addr
981  [NONE]              ,
981  [NONE]              client
981  [NONE]              ->
981  [NONE]              flags
981  [NONE]              ,
981  [NONE]              
982  [NONE]              I2C_SMBUS_WRITE
982  [NONE]              ,
982  [NONE]              command
982  [NONE]              ,
982  [NONE]              
983  [NONE]              I2C_SMBUS_WORD_DATA
983  [NONE]              ,
983  [NONE]              &
983  [NONE]              data
983  [FUNC_CALL]         )
983  [NONE]              ;
983  [NONE]              
984  [FUNC_DEF]          }
984  [NONE]              
986  [FUNC_DEF]          s32
986  [NONE]              i2c_smbus_write_block_data
986  [FUNC_DEF]          (
986  [NONE]              struct
986  [STRUCT]            i2c_client
986  [STRUCT]            *
986  [NONE]              client
986  [NONE]              ,
986  [NONE]              u8
986  [NONE]              command
986  [NONE]              ,
986  [NONE]              
987  [NONE]              u8
987  [NONE]              length
987  [NONE]              ,
987  [NONE]              u8
987  [NONE]              *
987  [NONE]              values
987  [FUNC_DEF]          )
987  [NONE]              
988  [FUNC_DEF]          {
988  [NONE]              
989  [NONE]              union
989  [UNION]             i2c_smbus_data
989  [UNION]             data
989  [NONE]              ;
989  [NONE]              
990  [NONE]              int
990  [NONE]              i
990  [NONE]              ;
990  [NONE]              
991  [NONE]              if
991  [IF]                (
991  [NONE]              length
991  [NONE]              >
991  [NONE]              I2C_SMBUS_BLOCK_MAX
991  [IF]                )
991  [IF]                
991  [NONE]              
992  [NONE]              length
992  [NONE]              =
992  [NONE]              I2C_SMBUS_BLOCK_MAX
992  [NONE]              ;
992  [IF]                
992  [NONE]              
993  [NONE]              for
993  [FOR]               (
993  [NONE]              i
993  [NONE]              =
993  [NONE]              1
993  [FOR]               ;
993  [NONE]              i
993  [NONE]              <=
993  [NONE]              length
993  [FOR]               ;
993  [NONE]              i
993  [NONE]              ++
993  [FOR]               )
993  [FOR]               
993  [NONE]              
994  [NONE]              data
994  [NONE]              .
994  [NONE]              block
994  [NONE]              [
994  [NONE]              i
994  [NONE]              ]
994  [NONE]              =
994  [NONE]              values
994  [NONE]              [
994  [NONE]              i
994  [NONE]              -
994  [NONE]              1
994  [NONE]              ]
994  [NONE]              ;
994  [FOR]               
994  [NONE]              
995  [NONE]              data
995  [NONE]              .
995  [NONE]              block
995  [NONE]              [
995  [NONE]              0
995  [NONE]              ]
995  [NONE]              =
995  [NONE]              length
995  [NONE]              ;
995  [NONE]              
996  [NONE]              return
996  [NONE]              i2c_smbus_xfer
996  [FUNC_CALL]         (
996  [NONE]              client
996  [NONE]              ->
996  [NONE]              adapter
996  [NONE]              ,
996  [NONE]              client
996  [NONE]              ->
996  [NONE]              addr
996  [NONE]              ,
996  [NONE]              client
996  [NONE]              ->
996  [NONE]              flags
996  [NONE]              ,
996  [NONE]              
997  [NONE]              I2C_SMBUS_WRITE
997  [NONE]              ,
997  [NONE]              command
997  [NONE]              ,
997  [NONE]              
998  [NONE]              I2C_SMBUS_BLOCK_DATA
998  [NONE]              ,
998  [NONE]              &
998  [NONE]              data
998  [FUNC_CALL]         )
998  [NONE]              ;
998  [NONE]              
999  [FUNC_DEF]          }
999  [NONE]              
1001 [COMMENT_WHOLE]     /* Returns the number of read bytes */
1001 [NONE]              
1002 [FUNC_DEF]          s32
1002 [NONE]              i2c_smbus_read_i2c_block_data
1002 [FUNC_DEF]          (
1002 [NONE]              struct
1002 [STRUCT]            i2c_client
1002 [STRUCT]            *
1002 [NONE]              client
1002 [NONE]              ,
1002 [NONE]              u8
1002 [NONE]              command
1002 [NONE]              ,
1002 [NONE]              u8
1002 [NONE]              *
1002 [NONE]              values
1002 [FUNC_DEF]          )
1002 [NONE]              
1003 [FUNC_DEF]          {
1003 [NONE]              
1004 [NONE]              union
1004 [UNION]             i2c_smbus_data
1004 [UNION]             data
1004 [NONE]              ;
1004 [NONE]              
1005 [NONE]              int
1005 [NONE]              i
1005 [NONE]              ;
1005 [NONE]              
1006 [NONE]              if
1006 [IF]                (
1006 [NONE]              i2c_smbus_xfer
1006 [FUNC_CALL]         (
1006 [NONE]              client
1006 [NONE]              ->
1006 [NONE]              adapter
1006 [NONE]              ,
1006 [NONE]              client
1006 [NONE]              ->
1006 [NONE]              addr
1006 [NONE]              ,
1006 [NONE]              client
1006 [NONE]              ->
1006 [NONE]              flags
1006 [NONE]              ,
1006 [NONE]              
1007 [NONE]              I2C_SMBUS_READ
1007 [NONE]              ,
1007 [NONE]              command
1007 [NONE]              ,
1007 [NONE]              
1008 [NONE]              I2C_SMBUS_I2C_BLOCK_DATA
1008 [NONE]              ,
1008 [NONE]              &
1008 [NONE]              data
1008 [FUNC_CALL]         )
1008 [IF]                )
1008 [IF]                
1008 [NONE]              
1009 [NONE]              return
1009 [NONE]              -
1009 [NONE]              1
1009 [NONE]              ;
1009 [IF]                
1009 [NONE]              
1010 [NONE]              else
1010 [NONE]              
1010 [ELSE]              {
1010 [NONE]              
1011 [NONE]              for
1011 [FOR]               (
1011 [NONE]              i
1011 [NONE]              =
1011 [NONE]              1
1011 [FOR]               ;
1011 [NONE]              i
1011 [NONE]              <=
1011 [NONE]              data
1011 [NONE]              .
1011 [NONE]              block
1011 [NONE]              [
1011 [NONE]              0
1011 [NONE]              ]
1011 [FOR]               ;
1011 [NONE]              i
1011 [NONE]              ++
1011 [FOR]               )
1011 [FOR]               
1011 [NONE]              
1012 [NONE]              values
1012 [NONE]              [
1012 [NONE]              i
1012 [NONE]              -
1012 [NONE]              1
1012 [NONE]              ]
1012 [NONE]              =
1012 [NONE]              data
1012 [NONE]              .
1012 [NONE]              block
1012 [NONE]              [
1012 [NONE]              i
1012 [NONE]              ]
1012 [NONE]              ;
1012 [FOR]               
1012 [NONE]              
1013 [NONE]              return
1013 [NONE]              data
1013 [NONE]              .
1013 [NONE]              block
1013 [NONE]              [
1013 [NONE]              0
1013 [NONE]              ]
1013 [NONE]              ;
1013 [NONE]              
1014 [ELSE]              }
1014 [NONE]              
1015 [FUNC_DEF]          }
1015 [NONE]              
1017 [COMMENT_WHOLE]     /* Simulate a SMBus command using the i2c protocol␤   No checking of parameters is done!  */
1018 [NONE]              
1019 [FUNC_DEF]          static
1019 [FUNC_DEF]          s32
1019 [NONE]              i2c_smbus_xfer_emulated
1019 [FUNC_DEF]          (
1019 [NONE]              struct
1019 [STRUCT]            i2c_adapter
1019 [STRUCT]            *
1019 [NONE]              adapter
1019 [NONE]              ,
1019 [NONE]              u16
1019 [NONE]              addr
1019 [NONE]              ,
1019 [NONE]              
1020 [NONE]              unsigned
1020 [NONE]              short
1020 [NONE]              flags
1020 [NONE]              ,
1020 [NONE]              
1021 [NONE]              char
1021 [NONE]              read_write
1021 [NONE]              ,
1021 [NONE]              u8
1021 [NONE]              command
1021 [NONE]              ,
1021 [NONE]              int
1021 [NONE]              size
1021 [NONE]              ,
1021 [NONE]              
1022 [NONE]              union
1022 [NONE]              i2c_smbus_data
1022 [UNION]             *
1022 [NONE]              data
1022 [FUNC_DEF]          )
1022 [NONE]              
1023 [FUNC_DEF]          {
1023 [NONE]              
1024 [COMMENT_WHOLE]     /* So we need to generate a series of msgs. In the case of writing, we␤	  need to use only one message; when reading, we need two. We initialize␤	  most things with sane defaults, to keep the code below somewhat␤	  simpler. */
1027 [NONE]              
1028 [NONE]              unsigned
1028 [NONE]              char
1028 [NONE]              msgbuf0
1028 [NONE]              [
1028 [NONE]              34
1028 [NONE]              ]
1028 [NONE]              ;
1028 [NONE]              
1029 [NONE]              unsigned
1029 [NONE]              char
1029 [NONE]              msgbuf1
1029 [NONE]              [
1029 [NONE]              34
1029 [NONE]              ]
1029 [NONE]              ;
1029 [NONE]              
1030 [NONE]              int
1030 [NONE]              num
1030 [NONE]              =
1030 [NONE]              read_write
1030 [NONE]              ==
1030 [NONE]              I2C_SMBUS_READ
1030 [NONE]              ?
1030 [NONE]              2
1030 [NONE]              :
1030 [NONE]              1
1030 [NONE]              ;
1030 [NONE]              
1031 [NONE]              struct
1031 [STRUCT]            i2c_msg
1031 [STRUCT]            msg
1031 [NONE]              [
1031 [NONE]              2
1031 [NONE]              ]
1031 [NONE]              =
1031 [ASSIGN]            {
1031 [NONE]              {
1031 [NONE]              addr
1031 [NONE]              ,
1031 [NONE]              flags
1031 [NONE]              ,
1031 [NONE]              1
1031 [NONE]              ,
1031 [NONE]              msgbuf0
1031 [NONE]              }
1031 [NONE]              ,
1031 [NONE]              
1032 [NONE]              {
1032 [NONE]              addr
1032 [NONE]              ,
1032 [NONE]              flags
1032 [NONE]              |
1032 [NONE]              I2C_M_RD
1032 [NONE]              ,
1032 [NONE]              0
1032 [NONE]              ,
1032 [NONE]              msgbuf1
1032 [NONE]              }
1033 [ASSIGN]            }
1033 [NONE]              ;
1033 [NONE]              
1034 [NONE]              int
1034 [NONE]              i
1034 [NONE]              ;
1034 [NONE]              
1036 [NONE]              msgbuf0
1036 [NONE]              [
1036 [NONE]              0
1036 [NONE]              ]
1036 [NONE]              =
1036 [NONE]              command
1036 [NONE]              ;
1036 [NONE]              
1037 [NONE]              switch
1037 [SWITCH]            (
1037 [NONE]              size
1037 [SWITCH]            )
1037 [NONE]              
1037 [SWITCH]            {
1037 [NONE]              
1038 [NONE]              case
1038 [NONE]              I2C_SMBUS_QUICK
1038 [NONE]              :
1038 [NONE]              
1039 [NONE]              msg
1039 [NONE]              [
1039 [NONE]              0
1039 [NONE]              ]
1039 [NONE]              .
1039 [NONE]              len
1039 [NONE]              =
1039 [NONE]              0
1039 [NONE]              ;
1039 [NONE]              
1040 [COMMENT_WHOLE]     /* Special case: The read/write field is used as data */
1040 [NONE]              
1041 [NONE]              msg
1041 [NONE]              [
1041 [NONE]              0
1041 [NONE]              ]
1041 [NONE]              .
1041 [NONE]              flags
1041 [NONE]              =
1041 [NONE]              flags
1041 [NONE]              |
1041 [NONE]              (
1041 [NONE]              read_write
1041 [NONE]              ==
1041 [NONE]              I2C_SMBUS_READ
1041 [NONE]              )
1041 [NONE]              ?
1041 [NONE]              I2C_M_RD
1041 [NONE]              :
1041 [NONE]              0
1041 [NONE]              ;
1041 [NONE]              
1042 [NONE]              num
1042 [NONE]              =
1042 [NONE]              1
1042 [NONE]              ;
1042 [NONE]              
1043 [NONE]              break
1043 [NONE]              ;
1043 [NONE]              
1044 [NONE]              case
1044 [NONE]              I2C_SMBUS_BYTE
1044 [NONE]              :
1044 [NONE]              
1045 [NONE]              if
1045 [IF]                (
1045 [NONE]              read_write
1045 [NONE]              ==
1045 [NONE]              I2C_SMBUS_READ
1045 [IF]                )
1045 [NONE]              
1045 [IF]                {
1045 [NONE]              
1046 [COMMENT_WHOLE]     /* Special case: only a read! */
1046 [NONE]              
1047 [NONE]              msg
1047 [NONE]              [
1047 [NONE]              0
1047 [NONE]              ]
1047 [NONE]              .
1047 [NONE]              flags
1047 [NONE]              =
1047 [NONE]              I2C_M_RD
1047 [NONE]              |
1047 [NONE]              flags
1047 [NONE]              ;
1047 [NONE]              
1048 [NONE]              num
1048 [NONE]              =
1048 [NONE]              1
1048 [NONE]              ;
1048 [NONE]              
1049 [IF]                }
1049 [NONE]              
1050 [NONE]              break
1050 [NONE]              ;
1050 [NONE]              
1051 [NONE]              case
1051 [NONE]              I2C_SMBUS_BYTE_DATA
1051 [NONE]              :
1051 [NONE]              
1052 [NONE]              if
1052 [IF]                (
1052 [NONE]              read_write
1052 [NONE]              ==
1052 [NONE]              I2C_SMBUS_READ
1052 [IF]                )
1052 [IF]                
1052 [NONE]              
1053 [NONE]              msg
1053 [NONE]              [
1053 [NONE]              1
1053 [NONE]              ]
1053 [NONE]              .
1053 [NONE]              len
1053 [NONE]              =
1053 [NONE]              1
1053 [NONE]              ;
1053 [IF]                
1053 [NONE]              
1054 [NONE]              else
1054 [NONE]              
1054 [ELSE]              {
1054 [NONE]              
1055 [NONE]              msg
1055 [NONE]              [
1055 [NONE]              0
1055 [NONE]              ]
1055 [NONE]              .
1055 [NONE]              len
1055 [NONE]              =
1055 [NONE]              2
1055 [NONE]              ;
1055 [NONE]              
1056 [NONE]              msgbuf0
1056 [NONE]              [
1056 [NONE]              1
1056 [NONE]              ]
1056 [NONE]              =
1056 [NONE]              data
1056 [NONE]              ->
1056 [NONE]              byte
1056 [NONE]              ;
1056 [NONE]              
1057 [ELSE]              }
1057 [NONE]              
1058 [NONE]              break
1058 [NONE]              ;
1058 [NONE]              
1059 [NONE]              case
1059 [NONE]              I2C_SMBUS_WORD_DATA
1059 [NONE]              :
1059 [NONE]              
1060 [NONE]              if
1060 [IF]                (
1060 [NONE]              read_write
1060 [NONE]              ==
1060 [NONE]              I2C_SMBUS_READ
1060 [IF]                )
1060 [IF]                
1060 [NONE]              
1061 [NONE]              msg
1061 [NONE]              [
1061 [NONE]              1
1061 [NONE]              ]
1061 [NONE]              .
1061 [NONE]              len
1061 [NONE]              =
1061 [NONE]              2
1061 [NONE]              ;
1061 [IF]                
1061 [NONE]              
1062 [NONE]              else
1062 [NONE]              
1062 [ELSE]              {
1062 [NONE]              
1063 [NONE]              msg
1063 [NONE]              [
1063 [NONE]              0
1063 [NONE]              ]
1063 [NONE]              .
1063 [NONE]              len
1063 [NONE]              =
1063 [NONE]              3
1063 [NONE]              ;
1063 [NONE]              
1064 [NONE]              msgbuf0
1064 [NONE]              [
1064 [NONE]              1
1064 [NONE]              ]
1064 [NONE]              =
1064 [NONE]              data
1064 [NONE]              ->
1064 [NONE]              word
1064 [NONE]              &
1064 [NONE]              0xff
1064 [NONE]              ;
1064 [NONE]              
1065 [NONE]              msgbuf0
1065 [NONE]              [
1065 [NONE]              2
1065 [NONE]              ]
1065 [NONE]              =
1065 [NONE]              (
1065 [NONE]              data
1065 [NONE]              ->
1065 [NONE]              word
1065 [NONE]              >>
1065 [NONE]              8
1065 [NONE]              )
1065 [NONE]              &
1065 [NONE]              0xff
1065 [NONE]              ;
1065 [NONE]              
1066 [ELSE]              }
1066 [NONE]              
1067 [NONE]              break
1067 [NONE]              ;
1067 [NONE]              
1068 [NONE]              case
1068 [NONE]              I2C_SMBUS_PROC_CALL
1068 [NONE]              :
1068 [NONE]              
1069 [NONE]              num
1069 [NONE]              =
1069 [NONE]              2
1069 [NONE]              ;
1069 [COMMENT_END]       /* Special case */
1069 [NONE]              
1070 [NONE]              read_write
1070 [NONE]              =
1070 [NONE]              I2C_SMBUS_READ
1070 [NONE]              ;
1070 [NONE]              
1071 [NONE]              msg
1071 [NONE]              [
1071 [NONE]              0
1071 [NONE]              ]
1071 [NONE]              .
1071 [NONE]              len
1071 [NONE]              =
1071 [NONE]              3
1071 [NONE]              ;
1071 [NONE]              
1072 [NONE]              msg
1072 [NONE]              [
1072 [NONE]              1
1072 [NONE]              ]
1072 [NONE]              .
1072 [NONE]              len
1072 [NONE]              =
1072 [NONE]              2
1072 [NONE]              ;
1072 [NONE]              
1073 [NONE]              msgbuf0
1073 [NONE]              [
1073 [NONE]              1
1073 [NONE]              ]
1073 [NONE]              =
1073 [NONE]              data
1073 [NONE]              ->
1073 [NONE]              word
1073 [NONE]              &
1073 [NONE]              0xff
1073 [NONE]              ;
1073 [NONE]              
1074 [NONE]              msgbuf0
1074 [NONE]              [
1074 [NONE]              2
1074 [NONE]              ]
1074 [NONE]              =
1074 [NONE]              (
1074 [NONE]              data
1074 [NONE]              ->
1074 [NONE]              word
1074 [NONE]              >>
1074 [NONE]              8
1074 [NONE]              )
1074 [NONE]              &
1074 [NONE]              0xff
1074 [NONE]              ;
1074 [NONE]              
1075 [NONE]              break
1075 [NONE]              ;
1075 [NONE]              
1076 [NONE]              case
1076 [NONE]              I2C_SMBUS_BLOCK_DATA
1076 [NONE]              :
1076 [NONE]              
1077 [NONE]              case
1077 [NONE]              I2C_SMBUS_BLOCK_DATA_PEC
1077 [NONE]              :
1077 [NONE]              
1078 [NONE]              if
1078 [IF]                (
1078 [NONE]              read_write
1078 [NONE]              ==
1078 [NONE]              I2C_SMBUS_READ
1078 [IF]                )
1078 [NONE]              
1078 [IF]                {
1078 [NONE]              
1079 [NONE]              dev_err
1079 [FUNC_CALL]         (
1079 [NONE]              &
1079 [NONE]              adapter
1079 [NONE]              ->
1079 [NONE]              dev
1079 [NONE]              ,
1079 [NONE]              "Block read not supported "
1079 [NONE]              
1080 [NONE]              "under I2C emulation!\n"
1080 [FUNC_CALL]         )
1080 [NONE]              ;
1080 [NONE]              
1081 [CASE]              return
1081 [NONE]              -
1081 [NONE]              1
1081 [NONE]              ;
1081 [NONE]              
1082 [IF]                }
1082 [NONE]              
1082 [NONE]              else
1082 [NONE]              
1082 [ELSE]              {
1082 [NONE]              
1083 [NONE]              msg
1083 [NONE]              [
1083 [NONE]              0
1083 [NONE]              ]
1083 [NONE]              .
1083 [NONE]              len
1083 [NONE]              =
1083 [NONE]              data
1083 [NONE]              ->
1083 [NONE]              block
1083 [NONE]              [
1083 [NONE]              0
1083 [NONE]              ]
1083 [NONE]              +
1083 [NONE]              2
1083 [NONE]              ;
1083 [NONE]              
1084 [NONE]              if
1084 [IF]                (
1084 [NONE]              msg
1084 [NONE]              [
1084 [NONE]              0
1084 [NONE]              ]
1084 [NONE]              .
1084 [NONE]              len
1084 [NONE]              >
1084 [NONE]              I2C_SMBUS_BLOCK_MAX
1084 [NONE]              +
1084 [NONE]              2
1084 [IF]                )
1084 [NONE]              
1084 [IF]                {
1084 [NONE]              
1085 [NONE]              dev_err
1085 [FUNC_CALL]         (
1085 [NONE]              &
1085 [NONE]              adapter
1085 [NONE]              ->
1085 [NONE]              dev
1085 [NONE]              ,
1085 [NONE]              "smbus_access called with "
1085 [NONE]              
1086 [NONE]              "invalid block write size (%d)\n"
1086 [NONE]              ,
1086 [NONE]              
1087 [NONE]              data
1087 [NONE]              ->
1087 [NONE]              block
1087 [NONE]              [
1087 [NONE]              0
1087 [NONE]              ]
1087 [FUNC_CALL]         )
1087 [NONE]              ;
1087 [NONE]              
1088 [CASE]              return
1088 [NONE]              -
1088 [NONE]              1
1088 [NONE]              ;
1088 [NONE]              
1089 [IF]                }
1089 [NONE]              
1090 [NONE]              if
1090 [IF]                (
1090 [NONE]              size
1090 [NONE]              ==
1090 [NONE]              I2C_SMBUS_BLOCK_DATA_PEC
1090 [IF]                )
1090 [IF]                
1090 [NONE]              
1091 [NONE]              (
1091 [NONE]              msg
1091 [NONE]              [
1091 [NONE]              0
1091 [NONE]              ]
1091 [NONE]              .
1091 [NONE]              len
1091 [NONE]              )
1091 [NONE]              ++
1091 [NONE]              ;
1091 [IF]                
1091 [NONE]              
1092 [NONE]              for
1092 [FOR]               (
1092 [NONE]              i
1092 [NONE]              =
1092 [NONE]              1
1092 [FOR]               ;
1092 [NONE]              i
1092 [NONE]              <=
1092 [NONE]              msg
1092 [NONE]              [
1092 [NONE]              0
1092 [NONE]              ]
1092 [NONE]              .
1092 [NONE]              len
1092 [FOR]               ;
1092 [NONE]              i
1092 [NONE]              ++
1092 [FOR]               )
1092 [FOR]               
1092 [NONE]              
1093 [NONE]              msgbuf0
1093 [NONE]              [
1093 [NONE]              i
1093 [NONE]              ]
1093 [NONE]              =
1093 [NONE]              data
1093 [NONE]              ->
1093 [NONE]              block
1093 [NONE]              [
1093 [NONE]              i
1093 [NONE]              -
1093 [NONE]              1
1093 [NONE]              ]
1093 [NONE]              ;
1093 [FOR]               
1093 [NONE]              
1094 [ELSE]              }
1094 [NONE]              
1095 [NONE]              break
1095 [NONE]              ;
1095 [NONE]              
1096 [NONE]              case
1096 [NONE]              I2C_SMBUS_BLOCK_PROC_CALL
1096 [NONE]              :
1096 [NONE]              
1097 [NONE]              case
1097 [NONE]              I2C_SMBUS_BLOCK_PROC_CALL_PEC
1097 [NONE]              :
1097 [NONE]              
1098 [NONE]              dev_dbg
1098 [FUNC_CALL]         (
1098 [NONE]              &
1098 [NONE]              adapter
1098 [NONE]              ->
1098 [NONE]              dev
1098 [NONE]              ,
1098 [NONE]              "Block process call not supported "
1098 [NONE]              
1099 [NONE]              "under I2C emulation!\n"
1099 [FUNC_CALL]         )
1099 [NONE]              ;
1099 [NONE]              
1100 [CASE]              return
1100 [NONE]              -
1100 [NONE]              1
1100 [NONE]              ;
1100 [NONE]              
1101 [NONE]              case
1101 [NONE]              I2C_SMBUS_I2C_BLOCK_DATA
1101 [NONE]              :
1101 [NONE]              
1102 [NONE]              if
1102 [IF]                (
1102 [NONE]              read_write
1102 [NONE]              ==
1102 [NONE]              I2C_SMBUS_READ
1102 [IF]                )
1102 [IF]                
1102 [NONE]              
1103 [NONE]              msg
1103 [NONE]              [
1103 [NONE]              1
1103 [NONE]              ]
1103 [NONE]              .
1103 [NONE]              len
1103 [NONE]              =
1103 [NONE]              I2C_SMBUS_I2C_BLOCK_MAX
1103 [NONE]              ;
1103 [NONE]              
1104 [IF]                
1104 [NONE]              else
1104 [NONE]              
1104 [ELSE]              {
1104 [NONE]              
1105 [NONE]              msg
1105 [NONE]              [
1105 [NONE]              0
1105 [NONE]              ]
1105 [NONE]              .
1105 [NONE]              len
1105 [NONE]              =
1105 [NONE]              data
1105 [NONE]              ->
1105 [NONE]              block
1105 [NONE]              [
1105 [NONE]              0
1105 [NONE]              ]
1105 [NONE]              +
1105 [NONE]              1
1105 [NONE]              ;
1105 [NONE]              
1106 [NONE]              if
1106 [IF]                (
1106 [NONE]              msg
1106 [NONE]              [
1106 [NONE]              0
1106 [NONE]              ]
1106 [NONE]              .
1106 [NONE]              len
1106 [NONE]              >
1106 [NONE]              I2C_SMBUS_I2C_BLOCK_MAX
1106 [NONE]              +
1106 [NONE]              1
1106 [IF]                )
1106 [NONE]              
1106 [IF]                {
1106 [NONE]              
1107 [NONE]              dev_err
1107 [FUNC_CALL]         (
1107 [NONE]              &
1107 [NONE]              adapter
1107 [NONE]              ->
1107 [NONE]              dev
1107 [NONE]              ,
1107 [NONE]              "i2c_smbus_xfer_emulated called with "
1107 [NONE]              
1108 [NONE]              "invalid block write size (%d)\n"
1108 [NONE]              ,
1108 [NONE]              
1109 [NONE]              data
1109 [NONE]              ->
1109 [NONE]              block
1109 [NONE]              [
1109 [NONE]              0
1109 [NONE]              ]
1109 [FUNC_CALL]         )
1109 [NONE]              ;
1109 [NONE]              
1110 [CASE]              return
1110 [NONE]              -
1110 [NONE]              1
1110 [NONE]              ;
1110 [NONE]              
1111 [IF]                }
1111 [NONE]              
1112 [NONE]              for
1112 [FOR]               (
1112 [NONE]              i
1112 [NONE]              =
1112 [NONE]              1
1112 [FOR]               ;
1112 [NONE]              i
1112 [NONE]              <=
1112 [NONE]              data
1112 [NONE]              ->
1112 [NONE]              block
1112 [NONE]              [
1112 [NONE]              0
1112 [NONE]              ]
1112 [FOR]               ;
1112 [NONE]              i
1112 [NONE]              ++
1112 [FOR]               )
1112 [FOR]               
1112 [NONE]              
1113 [NONE]              msgbuf0
1113 [NONE]              [
1113 [NONE]              i
1113 [NONE]              ]
1113 [NONE]              =
1113 [NONE]              data
1113 [NONE]              ->
1113 [NONE]              block
1113 [NONE]              [
1113 [NONE]              i
1113 [NONE]              ]
1113 [NONE]              ;
1113 [FOR]               
1113 [NONE]              
1114 [ELSE]              }
1114 [NONE]              
1115 [NONE]              break
1115 [NONE]              ;
1115 [NONE]              
1116 [NONE]              default
1116 [NONE]              :
1116 [NONE]              
1117 [NONE]              dev_err
1117 [FUNC_CALL]         (
1117 [NONE]              &
1117 [NONE]              adapter
1117 [NONE]              ->
1117 [NONE]              dev
1117 [NONE]              ,
1117 [NONE]              "smbus_access called with invalid size (%d)\n"
1117 [NONE]              ,
1117 [NONE]              
1118 [NONE]              size
1118 [FUNC_CALL]         )
1118 [NONE]              ;
1118 [NONE]              
1119 [CASE]              return
1119 [NONE]              -
1119 [NONE]              1
1119 [NONE]              ;
1119 [NONE]              
1120 [SWITCH]            }
1120 [NONE]              
1122 [NONE]              if
1122 [IF]                (
1122 [NONE]              i2c_transfer
1122 [FUNC_CALL]         (
1122 [NONE]              adapter
1122 [NONE]              ,
1122 [NONE]              msg
1122 [NONE]              ,
1122 [NONE]              num
1122 [FUNC_CALL]         )
1122 [NONE]              <
1122 [NONE]              0
1122 [IF]                )
1122 [IF]                
1122 [NONE]              
1123 [NONE]              return
1123 [NONE]              -
1123 [NONE]              1
1123 [NONE]              ;
1123 [IF]                
1123 [NONE]              
1125 [NONE]              if
1125 [IF]                (
1125 [NONE]              read_write
1125 [NONE]              ==
1125 [NONE]              I2C_SMBUS_READ
1125 [IF]                )
1125 [IF]                
1125 [NONE]              
1126 [NONE]              switch
1126 [SWITCH]            (
1126 [NONE]              size
1126 [SWITCH]            )
1126 [NONE]              
1126 [SWITCH]            {
1126 [NONE]              
1127 [NONE]              case
1127 [NONE]              I2C_SMBUS_BYTE
1127 [NONE]              :
1127 [NONE]              
1128 [NONE]              data
1128 [NONE]              ->
1128 [NONE]              byte
1128 [NONE]              =
1128 [NONE]              msgbuf0
1128 [NONE]              [
1128 [NONE]              0
1128 [NONE]              ]
1128 [NONE]              ;
1128 [NONE]              
1129 [NONE]              break
1129 [NONE]              ;
1129 [NONE]              
1130 [NONE]              case
1130 [NONE]              I2C_SMBUS_BYTE_DATA
1130 [NONE]              :
1130 [NONE]              
1131 [NONE]              data
1131 [NONE]              ->
1131 [NONE]              byte
1131 [NONE]              =
1131 [NONE]              msgbuf1
1131 [NONE]              [
1131 [NONE]              0
1131 [NONE]              ]
1131 [NONE]              ;
1131 [NONE]              
1132 [NONE]              break
1132 [NONE]              ;
1132 [NONE]              
1133 [NONE]              case
1133 [NONE]              I2C_SMBUS_WORD_DATA
1133 [NONE]              :
1133 [NONE]              
1134 [NONE]              case
1134 [NONE]              I2C_SMBUS_PROC_CALL
1134 [NONE]              :
1134 [NONE]              
1135 [NONE]              data
1135 [NONE]              ->
1135 [NONE]              word
1135 [NONE]              =
1135 [NONE]              msgbuf1
1135 [NONE]              [
1135 [NONE]              0
1135 [NONE]              ]
1135 [NONE]              |
1135 [NONE]              (
1135 [NONE]              msgbuf1
1135 [NONE]              [
1135 [NONE]              1
1135 [NONE]              ]
1135 [NONE]              <<
1135 [NONE]              8
1135 [NONE]              )
1135 [NONE]              ;
1135 [NONE]              
1136 [NONE]              break
1136 [NONE]              ;
1136 [NONE]              
1137 [NONE]              case
1137 [NONE]              I2C_SMBUS_I2C_BLOCK_DATA
1137 [NONE]              :
1137 [NONE]              
1138 [COMMENT_WHOLE]     /* fixed at 32 for now */
1138 [NONE]              
1139 [NONE]              data
1139 [NONE]              ->
1139 [NONE]              block
1139 [NONE]              [
1139 [NONE]              0
1139 [NONE]              ]
1139 [NONE]              =
1139 [NONE]              I2C_SMBUS_I2C_BLOCK_MAX
1139 [NONE]              ;
1139 [NONE]              
1140 [NONE]              for
1140 [FOR]               (
1140 [NONE]              i
1140 [NONE]              =
1140 [NONE]              0
1140 [FOR]               ;
1140 [NONE]              i
1140 [NONE]              <
1140 [NONE]              I2C_SMBUS_I2C_BLOCK_MAX
1140 [FOR]               ;
1140 [NONE]              i
1140 [NONE]              ++
1140 [FOR]               )
1140 [FOR]               
1140 [NONE]              
1141 [NONE]              data
1141 [NONE]              ->
1141 [NONE]              block
1141 [NONE]              [
1141 [NONE]              i
1141 [NONE]              +
1141 [NONE]              1
1141 [NONE]              ]
1141 [NONE]              =
1141 [NONE]              msgbuf1
1141 [NONE]              [
1141 [NONE]              i
1141 [NONE]              ]
1141 [NONE]              ;
1141 [FOR]               
1141 [NONE]              
1142 [NONE]              break
1142 [NONE]              ;
1142 [NONE]              
1143 [SWITCH]            }
1143 [IF]                
1143 [NONE]              
1144 [NONE]              return
1144 [NONE]              0
1144 [NONE]              ;
1144 [NONE]              
1145 [FUNC_DEF]          }
1145 [NONE]              
1148 [FUNC_DEF]          s32
1148 [NONE]              i2c_smbus_xfer
1148 [FUNC_DEF]          (
1148 [NONE]              struct
1148 [STRUCT]            i2c_adapter
1148 [STRUCT]            *
1148 [NONE]              adapter
1148 [NONE]              ,
1148 [NONE]              u16
1148 [NONE]              addr
1148 [NONE]              ,
1148 [NONE]              unsigned
1148 [NONE]              short
1148 [NONE]              flags
1148 [NONE]              ,
1148 [NONE]              
1149 [NONE]              char
1149 [NONE]              read_write
1149 [NONE]              ,
1149 [NONE]              u8
1149 [NONE]              command
1149 [NONE]              ,
1149 [NONE]              int
1149 [NONE]              size
1149 [NONE]              ,
1149 [NONE]              
1150 [NONE]              union
1150 [NONE]              i2c_smbus_data
1150 [UNION]             *
1150 [NONE]              data
1150 [FUNC_DEF]          )
1150 [NONE]              
1151 [FUNC_DEF]          {
1151 [NONE]              
1152 [NONE]              s32
1152 [NONE]              res
1152 [NONE]              ;
1152 [NONE]              
1153 [NONE]              int
1153 [NONE]              swpec
1153 [NONE]              =
1153 [NONE]              0
1153 [NONE]              ;
1153 [NONE]              
1154 [NONE]              u8
1154 [NONE]              partial
1154 [NONE]              =
1154 [NONE]              0
1154 [NONE]              ;
1154 [NONE]              
1156 [NONE]              flags
1156 [NONE]              &=
1156 [NONE]              I2C_M_TEN
1156 [NONE]              |
1156 [NONE]              I2C_CLIENT_PEC
1156 [NONE]              ;
1156 [NONE]              
1157 [NONE]              if
1157 [IF]                (
1157 [NONE]              (
1157 [NONE]              flags
1157 [NONE]              &
1157 [NONE]              I2C_CLIENT_PEC
1157 [NONE]              )
1157 [NONE]              &&
1157 [NONE]              
1158 [NONE]              !
1158 [NONE]              (
1158 [NONE]              i2c_check_functionality
1158 [FUNC_CALL]         (
1158 [NONE]              adapter
1158 [NONE]              ,
1158 [NONE]              I2C_FUNC_SMBUS_HWPEC_CALC
1158 [FUNC_CALL]         )
1158 [NONE]              )
1158 [IF]                )
1158 [NONE]              
1158 [IF]                {
1158 [NONE]              
1159 [NONE]              swpec
1159 [NONE]              =
1159 [NONE]              1
1159 [NONE]              ;
1159 [NONE]              
1160 [NONE]              if
1160 [IF]                (
1160 [NONE]              read_write
1160 [NONE]              ==
1160 [NONE]              I2C_SMBUS_READ
1160 [NONE]              &&
1160 [NONE]              
1161 [NONE]              size
1161 [NONE]              ==
1161 [NONE]              I2C_SMBUS_BLOCK_DATA
1161 [IF]                )
1161 [IF]                
1161 [NONE]              
1162 [NONE]              size
1162 [NONE]              =
1162 [NONE]              I2C_SMBUS_BLOCK_DATA_PEC
1162 [NONE]              ;
1162 [IF]                
1162 [NONE]              
1163 [NONE]              else
1163 [NONE]              if
1163 [ELSEIF]            (
1163 [NONE]              size
1163 [NONE]              ==
1163 [NONE]              I2C_SMBUS_PROC_CALL
1163 [ELSEIF]            )
1163 [ELSEIF]            
1163 [NONE]              
1164 [NONE]              size
1164 [NONE]              =
1164 [NONE]              I2C_SMBUS_PROC_CALL_PEC
1164 [NONE]              ;
1164 [ELSEIF]            
1164 [NONE]              
1165 [NONE]              else
1165 [NONE]              if
1165 [ELSEIF]            (
1165 [NONE]              size
1165 [NONE]              ==
1165 [NONE]              I2C_SMBUS_BLOCK_PROC_CALL
1165 [ELSEIF]            )
1165 [NONE]              
1165 [ELSEIF]            {
1165 [NONE]              
1166 [NONE]              i2c_smbus_add_pec
1166 [FUNC_CALL]         (
1166 [NONE]              addr
1166 [NONE]              ,
1166 [NONE]              command
1166 [NONE]              ,
1166 [NONE]              
1167 [NONE]              I2C_SMBUS_BLOCK_DATA
1167 [NONE]              ,
1167 [NONE]              data
1167 [FUNC_CALL]         )
1167 [NONE]              ;
1167 [NONE]              
1168 [NONE]              partial
1168 [NONE]              =
1168 [NONE]              data
1168 [NONE]              ->
1168 [NONE]              block
1168 [NONE]              [
1168 [NONE]              data
1168 [NONE]              ->
1168 [NONE]              block
1168 [NONE]              [
1168 [NONE]              0
1168 [NONE]              ]
1168 [NONE]              +
1168 [NONE]              1
1168 [NONE]              ]
1168 [NONE]              ;
1168 [NONE]              
1169 [NONE]              size
1169 [NONE]              =
1169 [NONE]              I2C_SMBUS_BLOCK_PROC_CALL_PEC
1169 [NONE]              ;
1169 [NONE]              
1170 [ELSEIF]            }
1170 [NONE]              
1170 [NONE]              else
1170 [NONE]              if
1170 [ELSEIF]            (
1170 [NONE]              read_write
1170 [NONE]              ==
1170 [NONE]              I2C_SMBUS_WRITE
1170 [NONE]              &&
1170 [NONE]              
1171 [NONE]              size
1171 [NONE]              !=
1171 [NONE]              I2C_SMBUS_QUICK
1171 [NONE]              &&
1171 [NONE]              
1172 [NONE]              size
1172 [NONE]              !=
1172 [NONE]              I2C_SMBUS_I2C_BLOCK_DATA
1172 [ELSEIF]            )
1172 [ELSEIF]            
1172 [NONE]              
1173 [NONE]              size
1173 [NONE]              =
1173 [NONE]              i2c_smbus_add_pec
1173 [FUNC_CALL]         (
1173 [NONE]              addr
1173 [NONE]              ,
1173 [NONE]              command
1173 [NONE]              ,
1173 [NONE]              size
1173 [NONE]              ,
1173 [NONE]              data
1173 [FUNC_CALL]         )
1173 [NONE]              ;
1173 [ELSEIF]            
1173 [NONE]              
1174 [IF]                }
1174 [NONE]              
1176 [NONE]              if
1176 [IF]                (
1176 [NONE]              adapter
1176 [NONE]              ->
1176 [NONE]              algo
1176 [NONE]              ->
1176 [NONE]              smbus_xfer
1176 [IF]                )
1176 [NONE]              
1176 [IF]                {
1176 [NONE]              
1177 [NONE]              down
1177 [FUNC_CALL]         (
1177 [NONE]              &
1177 [NONE]              adapter
1177 [NONE]              ->
1177 [NONE]              bus_lock
1177 [FUNC_CALL]         )
1177 [NONE]              ;
1177 [NONE]              
1178 [NONE]              res
1178 [NONE]              =
1178 [NONE]              adapter
1178 [NONE]              ->
1178 [NONE]              algo
1178 [NONE]              ->
1178 [NONE]              smbus_xfer
1178 [FUNC_CALL]         (
1178 [NONE]              adapter
1178 [NONE]              ,
1178 [NONE]              addr
1178 [NONE]              ,
1178 [NONE]              flags
1178 [NONE]              ,
1178 [NONE]              read_write
1178 [NONE]              ,
1178 [NONE]              
1179 [NONE]              command
1179 [NONE]              ,
1179 [NONE]              size
1179 [NONE]              ,
1179 [NONE]              data
1179 [FUNC_CALL]         )
1179 [NONE]              ;
1179 [NONE]              
1180 [NONE]              up
1180 [FUNC_CALL]         (
1180 [NONE]              &
1180 [NONE]              adapter
1180 [NONE]              ->
1180 [NONE]              bus_lock
1180 [FUNC_CALL]         )
1180 [NONE]              ;
1180 [NONE]              
1181 [IF]                }
1181 [NONE]              
1181 [NONE]              else
1181 [ELSE]              
1181 [NONE]              
1182 [NONE]              res
1182 [NONE]              =
1182 [NONE]              i2c_smbus_xfer_emulated
1182 [FUNC_CALL]         (
1182 [NONE]              adapter
1182 [NONE]              ,
1182 [NONE]              addr
1182 [NONE]              ,
1182 [NONE]              flags
1182 [NONE]              ,
1182 [NONE]              read_write
1182 [NONE]              ,
1182 [NONE]              
1183 [NONE]              command
1183 [NONE]              ,
1183 [NONE]              size
1183 [NONE]              ,
1183 [NONE]              data
1183 [FUNC_CALL]         )
1183 [NONE]              ;
1183 [ELSE]              
1183 [NONE]              
1185 [NONE]              if
1185 [IF]                (
1185 [NONE]              res
1185 [NONE]              >=
1185 [NONE]              0
1185 [NONE]              &&
1185 [NONE]              swpec
1185 [NONE]              &&
1185 [NONE]              
1186 [NONE]              size
1186 [NONE]              !=
1186 [NONE]              I2C_SMBUS_QUICK
1186 [NONE]              &&
1186 [NONE]              size
1186 [NONE]              !=
1186 [NONE]              I2C_SMBUS_I2C_BLOCK_DATA
1186 [NONE]              &&
1186 [NONE]              
1187 [NONE]              (
1187 [NONE]              read_write
1187 [NONE]              ==
1187 [NONE]              I2C_SMBUS_READ
1187 [NONE]              ||
1187 [NONE]              size
1187 [NONE]              ==
1187 [NONE]              I2C_SMBUS_PROC_CALL_PEC
1187 [NONE]              ||
1187 [NONE]              
1188 [NONE]              size
1188 [NONE]              ==
1188 [NONE]              I2C_SMBUS_BLOCK_PROC_CALL_PEC
1188 [NONE]              )
1188 [IF]                )
1188 [IF]                
1188 [NONE]              
1189 [NONE]              if
1189 [IF]                (
1189 [NONE]              i2c_smbus_check_pec
1189 [FUNC_CALL]         (
1189 [NONE]              addr
1189 [NONE]              ,
1189 [NONE]              command
1189 [NONE]              ,
1189 [NONE]              size
1189 [NONE]              ,
1189 [NONE]              partial
1189 [NONE]              ,
1189 [NONE]              data
1189 [FUNC_CALL]         )
1189 [IF]                )
1189 [IF]                
1189 [NONE]              
1190 [NONE]              return
1190 [NONE]              -
1190 [NONE]              1
1190 [NONE]              ;
1190 [IF]                
1190 [NONE]              
1191 [IF]                
1192 [NONE]              return
1192 [NONE]              res
1192 [NONE]              ;
1192 [NONE]              
1193 [FUNC_DEF]          }
1193 [NONE]              
1196 [COMMENT_WHOLE]     /* Next four are needed by i2c-isa */
1196 [NONE]              
1197 [NONE]              EXPORT_SYMBOL_GPL
1197 [FUNC_CALL]         (
1197 [NONE]              i2c_adapter_dev_release
1197 [FUNC_CALL]         )
1197 [NONE]              ;
1197 [NONE]              
1198 [NONE]              EXPORT_SYMBOL_GPL
1198 [FUNC_CALL]         (
1198 [NONE]              i2c_adapter_driver
1198 [FUNC_CALL]         )
1198 [NONE]              ;
1198 [NONE]              
1199 [NONE]              EXPORT_SYMBOL_GPL
1199 [FUNC_CALL]         (
1199 [NONE]              i2c_adapter_class
1199 [FUNC_CALL]         )
1199 [NONE]              ;
1199 [NONE]              
1200 [NONE]              EXPORT_SYMBOL_GPL
1200 [FUNC_CALL]         (
1200 [NONE]              i2c_bus_type
1200 [FUNC_CALL]         )
1200 [NONE]              ;
1200 [NONE]              
1202 [NONE]              EXPORT_SYMBOL
1202 [FUNC_CALL]         (
1202 [NONE]              i2c_add_adapter
1202 [FUNC_CALL]         )
1202 [NONE]              ;
1202 [NONE]              
1203 [NONE]              EXPORT_SYMBOL
1203 [FUNC_CALL]         (
1203 [NONE]              i2c_del_adapter
1203 [FUNC_CALL]         )
1203 [NONE]              ;
1203 [NONE]              
1204 [NONE]              EXPORT_SYMBOL
1204 [FUNC_CALL]         (
1204 [NONE]              i2c_add_driver
1204 [FUNC_CALL]         )
1204 [NONE]              ;
1204 [NONE]              
1205 [NONE]              EXPORT_SYMBOL
1205 [FUNC_CALL]         (
1205 [NONE]              i2c_del_driver
1205 [FUNC_CALL]         )
1205 [NONE]              ;
1205 [NONE]              
1206 [NONE]              EXPORT_SYMBOL
1206 [FUNC_CALL]         (
1206 [NONE]              i2c_attach_client
1206 [FUNC_CALL]         )
1206 [NONE]              ;
1206 [NONE]              
1207 [NONE]              EXPORT_SYMBOL
1207 [FUNC_CALL]         (
1207 [NONE]              i2c_detach_client
1207 [FUNC_CALL]         )
1207 [NONE]              ;
1207 [NONE]              
1208 [NONE]              EXPORT_SYMBOL
1208 [FUNC_CALL]         (
1208 [NONE]              i2c_use_client
1208 [FUNC_CALL]         )
1208 [NONE]              ;
1208 [NONE]              
1209 [NONE]              EXPORT_SYMBOL
1209 [FUNC_CALL]         (
1209 [NONE]              i2c_release_client
1209 [FUNC_CALL]         )
1209 [NONE]              ;
1209 [NONE]              
1210 [NONE]              EXPORT_SYMBOL
1210 [FUNC_CALL]         (
1210 [NONE]              i2c_clients_command
1210 [FUNC_CALL]         )
1210 [NONE]              ;
1210 [NONE]              
1211 [NONE]              EXPORT_SYMBOL
1211 [FUNC_CALL]         (
1211 [NONE]              i2c_check_addr
1211 [FUNC_CALL]         )
1211 [NONE]              ;
1211 [NONE]              
1213 [NONE]              EXPORT_SYMBOL
1213 [FUNC_CALL]         (
1213 [NONE]              i2c_master_send
1213 [FUNC_CALL]         )
1213 [NONE]              ;
1213 [NONE]              
1214 [NONE]              EXPORT_SYMBOL
1214 [FUNC_CALL]         (
1214 [NONE]              i2c_master_recv
1214 [FUNC_CALL]         )
1214 [NONE]              ;
1214 [NONE]              
1215 [NONE]              EXPORT_SYMBOL
1215 [FUNC_CALL]         (
1215 [NONE]              i2c_control
1215 [FUNC_CALL]         )
1215 [NONE]              ;
1215 [NONE]              
1216 [NONE]              EXPORT_SYMBOL
1216 [FUNC_CALL]         (
1216 [NONE]              i2c_transfer
1216 [FUNC_CALL]         )
1216 [NONE]              ;
1216 [NONE]              
1217 [NONE]              EXPORT_SYMBOL
1217 [FUNC_CALL]         (
1217 [NONE]              i2c_get_adapter
1217 [FUNC_CALL]         )
1217 [NONE]              ;
1217 [NONE]              
1218 [NONE]              EXPORT_SYMBOL
1218 [FUNC_CALL]         (
1218 [NONE]              i2c_put_adapter
1218 [FUNC_CALL]         )
1218 [NONE]              ;
1218 [NONE]              
1219 [NONE]              EXPORT_SYMBOL
1219 [FUNC_CALL]         (
1219 [NONE]              i2c_probe
1219 [FUNC_CALL]         )
1219 [NONE]              ;
1219 [NONE]              
1221 [NONE]              EXPORT_SYMBOL
1221 [FUNC_CALL]         (
1221 [NONE]              i2c_smbus_xfer
1221 [FUNC_CALL]         )
1221 [NONE]              ;
1221 [NONE]              
1222 [NONE]              EXPORT_SYMBOL
1222 [FUNC_CALL]         (
1222 [NONE]              i2c_smbus_write_quick
1222 [FUNC_CALL]         )
1222 [NONE]              ;
1222 [NONE]              
1223 [NONE]              EXPORT_SYMBOL
1223 [FUNC_CALL]         (
1223 [NONE]              i2c_smbus_read_byte
1223 [FUNC_CALL]         )
1223 [NONE]              ;
1223 [NONE]              
1224 [NONE]              EXPORT_SYMBOL
1224 [FUNC_CALL]         (
1224 [NONE]              i2c_smbus_write_byte
1224 [FUNC_CALL]         )
1224 [NONE]              ;
1224 [NONE]              
1225 [NONE]              EXPORT_SYMBOL
1225 [FUNC_CALL]         (
1225 [NONE]              i2c_smbus_read_byte_data
1225 [FUNC_CALL]         )
1225 [NONE]              ;
1225 [NONE]              
1226 [NONE]              EXPORT_SYMBOL
1226 [FUNC_CALL]         (
1226 [NONE]              i2c_smbus_write_byte_data
1226 [FUNC_CALL]         )
1226 [NONE]              ;
1226 [NONE]              
1227 [NONE]              EXPORT_SYMBOL
1227 [FUNC_CALL]         (
1227 [NONE]              i2c_smbus_read_word_data
1227 [FUNC_CALL]         )
1227 [NONE]              ;
1227 [NONE]              
1228 [NONE]              EXPORT_SYMBOL
1228 [FUNC_CALL]         (
1228 [NONE]              i2c_smbus_write_word_data
1228 [FUNC_CALL]         )
1228 [NONE]              ;
1228 [NONE]              
1229 [NONE]              EXPORT_SYMBOL
1229 [FUNC_CALL]         (
1229 [NONE]              i2c_smbus_write_block_data
1229 [FUNC_CALL]         )
1229 [NONE]              ;
1229 [NONE]              
1230 [NONE]              EXPORT_SYMBOL
1230 [FUNC_CALL]         (
1230 [NONE]              i2c_smbus_read_i2c_block_data
1230 [FUNC_CALL]         )
1230 [NONE]              ;
1230 [NONE]              
1232 [NONE]              MODULE_AUTHOR
1232 [FUNC_CALL]         (
1232 [NONE]              "Simon G. Vogl <simon@tk.uni-linz.ac.at>"
1232 [FUNC_CALL]         )
1232 [NONE]              ;
1232 [NONE]              
1233 [NONE]              MODULE_DESCRIPTION
1233 [FUNC_CALL]         (
1233 [NONE]              "I2C-Bus main module"
1233 [FUNC_CALL]         )
1233 [NONE]              ;
1233 [NONE]              
1234 [NONE]              MODULE_LICENSE
1234 [FUNC_CALL]         (
1234 [NONE]              "GPL"
1234 [FUNC_CALL]         )
1234 [NONE]              ;
1234 [NONE]              