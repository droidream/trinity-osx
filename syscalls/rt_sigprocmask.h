/*
 * SYSCALL_DEFINE4(rt_sigprocmask, int, how, sigset_t __user *, set,
	sigset_t __user *, oset, size_t, sigsetsize)
 */
{
	.name = "rt_sigprocmask",
	.num_args = 4,
	.sanitise = sanitise_rt_sigprocmask,
	.arg1name = "how",
	.arg2name = "set",
	.arg2type = ARG_ADDRESS,
	.arg3name = "oset",
	.arg3type = ARG_ADDRESS,
	.arg4name = "sigsetsize",
},