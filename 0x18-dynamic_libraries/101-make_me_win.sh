#!/bin/bash
gcc *.o -fPIC -shared -o libgmwin.so
LD_PRELOAD=$WPD/libgmwin.so
