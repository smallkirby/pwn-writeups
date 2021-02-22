#!/bin/sh;
#upx ./exploit
#cp ~/docker_shared/exploit ./nirugiri
strip ./nirugiri
#gzip -c ./nirugiri > ./nirugiri.gz
base64 ./nirugiri > ./nirugiri.b64
