#!/bin/bash
# Usage:
#   ./run-server.sh -h
# for a help message
# or:
#   ./run-server.sh 
# to build the project and run the rft_server on default port 20333
# or:
#   ./run-server.sh port
# to build the project and run the rft_server on the specified port

server=rft_server
port=20333
out=out

function help {
    echo "
$0 builds the rft project (client and server).

If the build is successful, the script will then try to start the server 
on port $port (the default port).
    
If port $port is in use, execute the script with a different port number, 
as follows:
    $0 port
where \"port\" is an unused, unprivileged port

See the assignment document for advice on choosing a port.

--------------------------------------------------------------------------
USAGE

For this help message:
    $0 -h

Or:
    $0 
to build the project and run the $server on the default port: $port

Or:
    $0 port
to build the project and run the $server on the specified port
--------------------------------------------------------------------------
"
    exit
}



if [ $# == 1 ]
then 
    if [ $1 == "-h" ]
    then
        help
    else 
        port=$1
    fi
fi

make

if [ ! -d "$out" ]; then
    mkdir $out
fi

pkill $server

echo "
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
running $0 with port: $port
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
"
./$server $port
