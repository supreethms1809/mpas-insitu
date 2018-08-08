#!/bin/sh

curdir="$( dirname "$0" )"

PATH="$PATH:/usr/lib64/mpich/bin"
PV_PATH="/home/mpas/Desktop/Source/PV/build"
MPAS_PATH="/home/mpas/Desktop/Source/MPAS"
LD_LIBRARY_PATH="$LD_LIBRARY_PATH:$PV_PATH/lib/paraview-4.3"
LD_LIBRARY_PATH="$LD_LIBRARY_PATH:$MPAS_PATH/src/paraview_catalyst/Adaptor-build"
export LD_LIBRARY_PATH
#tmux -L mpas new-session -d
#exec mpiexec -np 2 tmux -L mpas new-window "gdb -ex \"b main\" --args \"$curdir/ocean_model\" \"$@\""
exec mpiexec "$curdir/ocean_model" "$@"
