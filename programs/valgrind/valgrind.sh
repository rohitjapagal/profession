# general valgrind check

# memory check tool
# valgrind --leak-check=yes myprog arg1 arg2
valgrind --tool=memcheck --leak-check=yes ./valgrind01

# Cachegrind: a cache and branch-prediction profiler
# valgrind --tool=cachegrind prog
valgrind --tool=cachegrind ./valgrind01

# Callgrind: a call-graph generating cache and branch prediction profiler
# valgrind --tool=callgrind [callgrind options] your-program [program options]
valgrind --tool=callgrind ./valgrind01

# Helgrind: a thread error detector
valgrind --tool=helgrind ./valgrind01

# DRD: a thread error detector
valgrind --tool=drd ./valgrind01

# Massif: a heap profiler
valgrind --tool=massif ./valgrind01

# DHAT: a dynamic heap analysis tool
valgrind --tool=exp-dhat ./valgrind01

# SGCheck: an experimental stack and global array overrun detector
valgrind --tool=exp-sgcheck ./valgrind01

# BBV: an experimental basic block vector generation tool
valgrind --tool=exp-bbv ./valgrind01

# Lackey: an example tool
valgrind --tool=lackey ./valgrind01
