/*
 * SYSCALL_DEFINE3(signalfd, int, ufd, sigset_t __user *, user_mask, size_t, sizemask)
 */
#include "trinity.h"
#include "sanitise.h"

struct syscall syscall_signalfd = {
	.name = "signalfd",
	.num_args = 3,
	.arg1name = "ufd",
	.arg1type = ARG_FD,
	.arg2name = "user_mask",
	.arg2type = ARG_ADDRESS,
	.arg3name = "sizemask",
	.arg3type = ARG_LEN,
};
