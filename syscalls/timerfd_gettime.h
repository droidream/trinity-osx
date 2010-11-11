/*
 * SYSCALL_DEFINE2(timerfd_gettime, int, ufd, struct itimerspec __user *, otmr)
 */
{
	.name = "timerfd_gettime",
	.num_args = 2,
	.arg1name = "ufd",
	.arg1type = ARG_FD,
	.arg2name = "otmr",
	.arg2type = ARG_ADDRESS,
},