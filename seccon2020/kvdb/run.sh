#!/bin/sh

cd `dirname $0`
#./ld.so --library-path . ./kvdb
./ld.so --library-path . ./mykvdb
