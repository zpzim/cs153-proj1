/* Tests that the highest-priority thread waiting on a semaphore
   is the first to wake up. */

#include <stdio.h>
#include "tests/threads/tests.h"
#include "threads/init.h"
#include "threads/malloc.h"
#include "threads/synch.h"
#include "threads/thread.h"
#include "devices/timer.h"

static struct semaphore sema;

void
test_priority_sema (void) 
{
  sema_self_test();
}
