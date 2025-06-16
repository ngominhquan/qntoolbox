/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>
#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/logging/log.h>
#include "qntool_config.h"

LOG_MODULE_REGISTER(MAIN, CONFIG_LOG_DEFAULT_LEVEL);

/* 1000 msec = 1 sec */
#define SLEEP_TIME_MS   1000
int main(void)
{
	int ret = 0;
	int count=0;
	printk("qntool, version %s\n", QNTOOL_FW_VERSION_STR);
	// printk("qntool,hello world!\n");
	
	// while (1) {
	// 	k_msleep(SLEEP_TIME_MS);
	// 	printk("running %d\n", count++);
	// }
	return 0;
}
