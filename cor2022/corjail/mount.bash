#!/bin/bash

set -eu

MNTPOINT=/tmp/hoge
QCOW=$(realpath "${PWD}"/../build/coros/coros.qcow2)

sudo modprobe nbd max_part=8
mkdir -p $MNTPOINT
sudo qemu-nbd --connect=/dev/nbd0 "$QCOW"
sudo fdisk -l /dev/nbd0
sudo mount /dev/nbd0 $MNTPOINT
