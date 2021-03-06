/*
 * SYSCALL_DEFINE1(pipe, int __user *, fildes)
 */
#include "trinity.h"
#include "sanitise.h"

struct syscall syscall_pipe = {
	.name = "pipe",
	.num_args = 1,
	.arg1name = "fildes",
	.arg1type = ARG_ADDRESS,
};
