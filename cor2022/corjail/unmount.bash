#!/bin/bash

set -eu

MNTPOINT=/tmp/hoge

sudo umount $MNTPOINT || true
sudo qemu-nbd --disconnect /dev/nbd0
sudo rmmod nbd
