EXAMPLE OF CLIENT LOG FOR SUCCESSFUL TRANSFER WITH TIMEOUT

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Running client as:
./rft_client in660.txt out/out.txt 127.0.0.1 20333 wt 0.5
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

-------------------------------------------------------------------------------
CLIENT [rft_client.c:67:state:PS_INIT]
Initialised for wt transfer of file: in660.txt to file: out/out.txt
on server: 127.0.0.1:20333 with loss probality: 0.500000
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client.c:92:state:PS_TFR_READY]
Opened file: in660.txt (660 bytes), socket and server set.
Client ready for transfer
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:231:state:PS_START_SEND]
Start sending file in wt mode
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_SEND]
Sending segment with sq: 0, file data: 35, checksum: -1474541563
current retry: 0, max retries allowed: 20
payload:
We all use operating systems and ne
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:259:state:PS_NO_ACK]
>>>> ACK timeout for segment with sq: 0 <<<<
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_RESEND]
Resending segment with sq: 0, file data: 35, checksum: -1550885242
current retry: 1, max retries allowed: 20
payload:
We all use operating systems and ne
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:259:state:PS_NO_ACK]
>>>> ACK timeout for segment with sq: 0 <<<<
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_RESEND]
Resending segment with sq: 0, file data: 35, checksum: 3305
current retry: 2, max retries allowed: 20
payload:
We all use operating systems and ne
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:271:state:PS_ACK_RECV]
ACK with sq: 0 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_SEND]
Sending segment with sq: 1, file data: 35, checksum: -2080765792
current retry: 0, max retries allowed: 20
payload:
tworks every day, every time we use
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:259:state:PS_NO_ACK]
>>>> ACK timeout for segment with sq: 1 <<<<
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_RESEND]
Resending segment with sq: 1, file data: 35, checksum: 3330
current retry: 1, max retries allowed: 20
payload:
tworks every day, every time we use
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:271:state:PS_ACK_RECV]
ACK with sq: 1 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_SEND]
Sending segment with sq: 2, file data: 35, checksum: 3108
current retry: 0, max retries allowed: 20
payload:
 a mobile phone, tablet, laptop, or
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:271:state:PS_ACK_RECV]
ACK with sq: 2 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_SEND]
Sending segment with sq: 3, file data: 35, checksum: 3334
current retry: 0, max retries allowed: 20
payload:
 any number of other computing devi
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:271:state:PS_ACK_RECV]
ACK with sq: 3 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_SEND]
Sending segment with sq: 4, file data: 35, checksum: -1515230786
current retry: 0, max retries allowed: 20
payload:
ces. An ordinary user may not be in
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:259:state:PS_NO_ACK]
>>>> ACK timeout for segment with sq: 4 <<<<
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_RESEND]
Resending segment with sq: 4, file data: 35, checksum: 3157
current retry: 1, max retries allowed: 20
payload:
ces. An ordinary user may not be in
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:271:state:PS_ACK_RECV]
ACK with sq: 4 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_SEND]
Sending segment with sq: 5, file data: 35, checksum: -548388816
current retry: 0, max retries allowed: 20
payload:
terested in how the operating syste
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:259:state:PS_NO_ACK]
>>>> ACK timeout for segment with sq: 5 <<<<
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_RESEND]
Resending segment with sq: 5, file data: 35, checksum: 3431
current retry: 1, max retries allowed: 20
payload:
terested in how the operating syste
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:271:state:PS_ACK_RECV]
ACK with sq: 5 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_SEND]
Sending segment with sq: 6, file data: 35, checksum: 3153
current retry: 0, max retries allowed: 20
payload:
m of a device they use works and ma
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:271:state:PS_ACK_RECV]
ACK with sq: 6 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_SEND]
Sending segment with sq: 7, file data: 35, checksum: -1726027434
current retry: 0, max retries allowed: 20
payload:
y not even know the operating syste
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:259:state:PS_NO_ACK]
>>>> ACK timeout for segment with sq: 7 <<<<
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_RESEND]
Resending segment with sq: 7, file data: 35, checksum: 3385
current retry: 1, max retries allowed: 20
payload:
y not even know the operating syste
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:271:state:PS_ACK_RECV]
ACK with sq: 7 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_SEND]
Sending segment with sq: 8, file data: 35, checksum: 3363
current retry: 0, max retries allowed: 20
payload:
m exists. As computer scientists we
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:271:state:PS_ACK_RECV]
ACK with sq: 8 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_SEND]
Sending segment with sq: 9, file data: 35, checksum: -660550202
current retry: 0, max retries allowed: 20
payload:
 both should be interested in how t
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:259:state:PS_NO_ACK]
>>>> ACK timeout for segment with sq: 9 <<<<
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_RESEND]
Resending segment with sq: 9, file data: 35, checksum: 3251
current retry: 1, max retries allowed: 20
payload:
 both should be interested in how t
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:271:state:PS_ACK_RECV]
ACK with sq: 9 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_SEND]
Sending segment with sq: 10, file data: 35, checksum: 3202
current retry: 0, max retries allowed: 20
payload:
hey work and need to know how they 
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:271:state:PS_ACK_RECV]
ACK with sq: 10 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_SEND]
Sending segment with sq: 11, file data: 35, checksum: -621398177
current retry: 0, max retries allowed: 20
payload:
work. For example, it is not possib
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:259:state:PS_NO_ACK]
>>>> ACK timeout for segment with sq: 11 <<<<
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_RESEND]
Resending segment with sq: 11, file data: 35, checksum: -1629458446
current retry: 1, max retries allowed: 20
payload:
work. For example, it is not possib
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:259:state:PS_NO_ACK]
>>>> ACK timeout for segment with sq: 11 <<<<
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_RESEND]
Resending segment with sq: 11, file data: 35, checksum: 3210
current retry: 2, max retries allowed: 20
payload:
work. For example, it is not possib
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:271:state:PS_ACK_RECV]
ACK with sq: 11 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_SEND]
Sending segment with sq: 12, file data: 35, checksum: 3300
current retry: 0, max retries allowed: 20
payload:
le to detect and protect against cy
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:271:state:PS_ACK_RECV]
ACK with sq: 12 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_SEND]
Sending segment with sq: 13, file data: 35, checksum: -476051311
current retry: 0, max retries allowed: 20
payload:
ber attacks without an understandin
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:259:state:PS_NO_ACK]
>>>> ACK timeout for segment with sq: 13 <<<<
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_RESEND]
Resending segment with sq: 13, file data: 35, checksum: 3478
current retry: 1, max retries allowed: 20
payload:
ber attacks without an understandin
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:271:state:PS_ACK_RECV]
ACK with sq: 13 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_SEND]
Sending segment with sq: 14, file data: 35, checksum: -492896815
current retry: 0, max retries allowed: 20
payload:
g of operating systems and networks
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:259:state:PS_NO_ACK]
>>>> ACK timeout for segment with sq: 14 <<<<
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_RESEND]
Resending segment with sq: 14, file data: 35, checksum: 3437
current retry: 1, max retries allowed: 20
payload:
g of operating systems and networks
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:271:state:PS_ACK_RECV]
ACK with sq: 14 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_SEND]
Sending segment with sq: 15, file data: 35, checksum: 3268
current retry: 0, max retries allowed: 20
payload:
. If you want to resolve performanc
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:271:state:PS_ACK_RECV]
ACK with sq: 15 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_SEND]
Sending segment with sq: 16, file data: 35, checksum: 3337
current retry: 0, max retries allowed: 20
payload:
e or reliability problems, you need
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:271:state:PS_ACK_RECV]
ACK with sq: 16 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_SEND]
Sending segment with sq: 17, file data: 35, checksum: -980985672
current retry: 0, max retries allowed: 20
payload:
 an understanding of the role of op
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:259:state:PS_NO_ACK]
>>>> ACK timeout for segment with sq: 17 <<<<
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_RESEND]
Resending segment with sq: 17, file data: 35, checksum: 3233
current retry: 1, max retries allowed: 20
payload:
 an understanding of the role of op
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:271:state:PS_ACK_RECV]
ACK with sq: 17 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_SEND]
Sending segment with sq: 18, file data: 30, checksum: -1632669938
current retry: 0, max retries allowed: 20
payload:
erating systems and networks.

-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:259:state:PS_NO_ACK]
>>>> ACK timeout for segment with sq: 18 <<<<
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:161:state:PS_DATA_RESEND]
Resending segment with sq: 18, file data: 30, checksum: 2890
current retry: 1, max retries allowed: 20
payload:
erating systems and networks.

-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:249:state:PS_ACK_WAIT]
Waiting for an ACK
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client_util.c:271:state:PS_ACK_RECV]
ACK with sq: 18 received
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
CLIENT [rft_client.c:102:state:PS_TFR_COMPLETE]
Transfer complete
Total segments sent: 32, including: 13 resends
660 bytes sent for transfer of file: in660.txt of size: 660
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
