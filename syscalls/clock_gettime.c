/*
 * SYSCALL_DEFINE2(clock_gettime, const clockid_t, which_clock, struct timespec __user *,tp)
 */
#include "trinity.h"
#include "sanitise.h"

struct syscall syscall_clock_gettime = {
	.name = "clock_gettime",
	.num_args = 2,
	.arg1name = "which_clock",
	.arg2name = "tp",
	.arg2type = ARG_ADDRESS,
};