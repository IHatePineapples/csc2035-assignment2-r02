#!/bin/bash
srvr=127.0.0.1
port=20333
out=out
mode=nm
fileno=660
loss_prob=1.0
client=rft_client

function help {
    echo "
$0 runs the rft_client and by default tries to connect to an 
rft_server listening on port $port on localhost ($srvr) and 
transfer the file in${fileno}.txt

The output file on the server will be: $out/$out.txt
 
--------------------------------------------------------------------------
USAGE

For this help message:
    $0 -h

Or:
    $0 
to run the rft_client to connect to localhost ($srvr) on the default 
server port ($port) and transfer file in${fileno}.txt using the normal file
transfer protocol to $out/$out.txt on the server

Or:
    $0 fileno
to transer a different file, where fileno is one of:
0, 1, 17, 34, 35, 36, 350 or 660 (the number of bytes in the file)

Or:
    $0 fileno loss_prob
to transfer the file corresponding to the given fileno with the specified
loss probability using the transfer with timeout protocol.

Finally, it is possible to specify server address and port as follows.

    $0 server_addr server_port fileno
to run the normal protocol by connecting to the specified server on the
pecified port to transfer the file corresponding to the specified fileno

Or:
    $0 server_addr server_port fileno loss_prob
to select the timeout protocol with the specified loss probability 

In the last two cases, the server_addr must be a correctly formed IP 
address (e.g. $srvr) not a hostname.
--------------------------------------------------------------------------
"    
    exit
}


if [ ! -f "$client" ]
then
     make rft_client
fi

if [ ! -d "$out" ]; then
    mkdir $out
fi

if [ $# == 1 ]
then 
    if [ $1 == "-h" ]
    then
        help
    else 
        fileno=$1
    fi
fi

if [ $# == 2 ]
then
    fileno=$1
    loss_prob=$2
    mode=wt
fi

if [ $# == 3 ]
then
    srvr=$1
    port=$2
    fileno=$3
    mode=nm
fi

if [ $# == 4 ]
then
    srvr=$1
    port=$2
    fileno=$3
    loss_prob=$4
    mode=wt
fi

test_file=in${fileno}.txt

pkill $client

echo "
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Running client as:"

if [ $mode == "wt" ]
then
    echo \
"./$client $test_file $out/$out.txt $srvr $port wt $loss_prob
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
"
   ./$client $test_file $out/$out.txt $srvr $port wt $loss_prob
else
    echo \
"./$client $test_file $out/$out.txt $srvr $port nm
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
"
    ./$client $test_file $out/$out.txt $srvr $port nm
fi
