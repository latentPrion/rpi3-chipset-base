#include <stdio.h>
#include <assert.h>
#include <camkes.h>

void eth_nic_gpio_irq0_event_ind(void *foo)
{
	(void)foo;
	eth_nic_irq0_emit();
}

void eth_nic_gpio_irq0__init(void)
{
	int error = eth_nic_gpio_irq0_reg_callback(&eth_nic_gpio_irq0_event_ind, 0);
	assert(error == 0);
}

