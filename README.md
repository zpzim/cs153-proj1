cs153-proj1
===========

University of California, Riverside
CS 153 Design of Operating Systems
Project 1 -- Threads in Pintos.


From Wikipedia:
Pintos is a simple instructional operating system framework for the 80x86 architecture. 
The software supports kernel threads, loading and running user programs, and a file 
system, but it implements all of these in a very simple way.

The Assignment:
1. Reimplement timer_sleep(), defined in devices/timer.c. Although a working implementation
is provided, it "busy waits," that is, it spins in a loop checking the current time and
calling thread_yield() until enough time has gone by. Reimplement it to avoid busy waiting.


2. Implement priority scheduling in Pintos. When a thread is added to the ready list that has 
a higher priority than the currently running thread, the current thread should immediately 
yield the processor to the new thread. Similarly, when threads are waiting for a lock, 
semaphore, or condition variable, the highest priority waiting thread should be awakened 
first. A thread may raise or lower its own priority at any time, but lowering its priority 
such that it no longer has the highest priority must cause it to immediately yield the CPU.
