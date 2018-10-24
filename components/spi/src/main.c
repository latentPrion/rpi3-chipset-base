#include <stdio.h>
#include <assert.h>
#include <camkes.h>

void irq0_handle(void)
{
	int error = irq0_acknowledge();
	assert(error == 0);
}

