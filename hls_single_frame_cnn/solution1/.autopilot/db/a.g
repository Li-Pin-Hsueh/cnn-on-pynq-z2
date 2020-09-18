#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/vincent/Desktop/cnn-on-pynq-z2/hls_single_frame_cnn/solution1/.autopilot/db/a.g.bc ${1+"$@"}
