#include <stdio.h>
#include <assert.h>
#include <camkes.h>

void pin_0_to_31_handle(void)
{
	int error = pin_0_to_31_acknowledge();
	assert(error == 0);
}

void pin_32_to_63_handle(void)
{
	int error = pin_32_to_63_acknowledge();
	assert(error == 0);
}
