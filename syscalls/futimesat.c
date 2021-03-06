/*
 * SYSCALL_DEFINE3(futimesat, int, dfd, const char __user *, filename,
	 struct timeval __user *, utimes)
 */
#include "trinity.h"
#include "sanitise.h"

struct syscall syscall_futimesat = {
	.name = "futimesat",
	.num_args = 3,
	.arg1name = "dfd",
	.arg1type = ARG_FD,
	.arg2name = "filename",
	.arg2type = ARG_ADDRESS,
	.arg3name = "utimes",
	.arg3type = ARG_ADDRESS,
	.rettype = RET_ZERO_SUCCESS,
};
