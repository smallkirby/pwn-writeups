#!/bin/sh

cd `dirname $0`
echo "Now loading..."
env -i ./sde/sde64  -cet -debug -cet-stderr -- ./smash
#env -i ./sde/sde64  -cet -cet-stderr -- ./smash
