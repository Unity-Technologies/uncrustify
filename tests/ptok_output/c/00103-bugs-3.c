Line [Parent]            Text
1    [NONE]              
2    [PP_IF]             #
2    [NONE]              ifdef
2    [NONE]              CRUD
2    [NONE]              
3    [PP_DEFINE]         #
3    [NONE]              define
3    [NONE]              JUNK
3    [NONE]              a
3    [NONE]              
4    [PP_ENDIF]          #
4    [NONE]              endif
4    [NONE]              
6    [PP_IF]             #
6    [NONE]              ifdef
6    [NONE]              __QNX__
6    [NONE]              
7    [COMMENT_WHOLE]     /**␤ * Does all that QNX trickery to get the MAC address of the interface␤ *␤ * @param if_name The interface name: ie "en0" or "eth0"␤ * @param mac     Pointer to a 6-byte array␤ * @return        SUCCESS or FAILURE␤ */
13   [NONE]              
14   [FUNC_DEF]          static
14   [FUNC_DEF]          INT32
14   [NONE]              socket_get_mac_qnx
14   [FUNC_DEF]          (
14   [NONE]              const
14   [NONE]              CHAR
14   [NONE]              *
14   [NONE]              if_name
14   [NONE]              ,
14   [NONE]              UINT8
14   [NONE]              *
14   [NONE]              mac
14   [FUNC_DEF]          )
14   [NONE]              
15   [FUNC_DEF]          {
15   [NONE]              
16   [NONE]              CHAR
16   [NONE]              ionet_name
16   [NONE]              [
16   [NONE]              50
16   [NONE]              ]
16   [NONE]              ;
16   [NONE]              
17   [NONE]              INT32
17   [NONE]              en_fd
17   [NONE]              ;
17   [NONE]              
18   [PP_IF]             #
18   [NONE]              if
18   [NONE]              QNX_RELEASE
18   [NONE]              >=
18   [NONE]              630
18   [NONE]              
19   [NONE]              nic_config_t
19   [NONE]              nic
19   [NONE]              ;
19   [NONE]              
20   [NONE]              INT32
20   [NONE]              dcmd
20   [NONE]              =
20   [NONE]              DCMD_IO_NET_GET_CONFIG
20   [NONE]              ;
20   [NONE]              
21   [PP_ELSE]           #
21   [NONE]              else
21   [NONE]              
22   [NONE]              Nic_t
22   [NONE]              nic
22   [NONE]              ;
22   [NONE]              
23   [NONE]              INT32
23   [NONE]              dcmd
23   [NONE]              =
23   [NONE]              DCMD_IO_NET_NICINFO
23   [NONE]              ;
23   [NONE]              
24   [PP_ENDIF]          #
24   [NONE]              endif
24   [NONE]              
25   [NONE]              INT32
25   [NONE]              ret_val
25   [NONE]              =
25   [NONE]              FAILURE
25   [NONE]              ;
25   [NONE]              
27   [NONE]              memset
27   [FUNC_CALL]         (
27   [NONE]              mac
27   [NONE]              ,
27   [NONE]              0
27   [NONE]              ,
27   [NONE]              6
27   [FUNC_CALL]         )
27   [NONE]              ;
27   [NONE]              
29   [COMMENT_WHOLE]     /* Build the full name */
29   [NONE]              
30   [NONE]              snprintf
30   [FUNC_CALL]         (
30   [NONE]              ionet_name
30   [NONE]              ,
30   [NONE]              sizeof
30   [TYPE_CAST]         (
30   [NONE]              ionet_name
30   [TYPE_CAST]         )
30   [NONE]              ,
30   [NONE]              "/dev/io-net/%s"
30   [NONE]              ,
30   [NONE]              if_name
30   [FUNC_CALL]         )
30   [NONE]              ;
30   [NONE]              
32   [COMMENT_WHOLE]     /* Open the device */
32   [NONE]              
33   [NONE]              en_fd
33   [NONE]              =
33   [NONE]              open
33   [FUNC_CALL]         (
33   [NONE]              ionet_name
33   [NONE]              ,
33   [NONE]              O_RDWR
33   [FUNC_CALL]         )
33   [NONE]              ;
33   [NONE]              
34   [NONE]              if
34   [IF]                (
34   [NONE]              en_fd
34   [NONE]              >=
34   [NONE]              0
34   [IF]                )
34   [NONE]              
35   [IF]                {
35   [NONE]              
36   [COMMENT_WHOLE]     /* Get the interface info */
36   [NONE]              
37   [NONE]              if
37   [IF]                (
37   [NONE]              devctl
37   [FUNC_CALL]         (
37   [NONE]              en_fd
37   [NONE]              ,
37   [NONE]              dcmd
37   [NONE]              ,
37   [NONE]              &
37   [NONE]              nic
37   [NONE]              ,
37   [NONE]              sizeof
37   [TYPE_CAST]         (
37   [NONE]              nic
37   [TYPE_CAST]         )
37   [NONE]              ,
37   [NONE]              NULL
37   [FUNC_CALL]         )
37   [NONE]              ==
37   [NONE]              EOK
37   [IF]                )
37   [NONE]              
38   [IF]                {
38   [NONE]              
39   [NONE]              memcpy
39   [FUNC_CALL]         (
39   [NONE]              mac
39   [NONE]              ,
39   [NONE]              nic
39   [NONE]              .
39   [NONE]              current_address
39   [NONE]              ,
39   [NONE]              6
39   [FUNC_CALL]         )
39   [NONE]              ;
39   [NONE]              
40   [NONE]              ret_val
40   [NONE]              =
40   [NONE]              SUCCESS
40   [NONE]              ;
40   [NONE]              
41   [IF]                }
41   [NONE]              
43   [NONE]              close
43   [FUNC_CALL]         (
43   [NONE]              en_fd
43   [FUNC_CALL]         )
43   [NONE]              ;
43   [NONE]              
44   [IF]                }
44   [NONE]              
45   [NONE]              return
45   [RETURN]            (
45   [NONE]              ret_val
45   [RETURN]            )
45   [NONE]              ;
45   [NONE]              
46   [FUNC_DEF]          }
46   [NONE]              
47   [PP_ENDIF]          #
47   [NONE]              endif
47   [NONE]              