/*
 * SYSCALL_DEFINE1(brk, unsigned long, brk)
 *
 * On success: Returns the new program break
 * On failure: Returns current program break
 */
#include "trinity.h"
#include "sanitise.h"

struct syscall syscall_brk = {
	.name = "brk",
	.num_args = 1,
	.arg1name = "brk",
	.arg1type = ARG_ADDRESS,
	.rettype = RET_ZERO_SUCCESS,
};
