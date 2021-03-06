/*
 * File      : drv_uart.c
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2013, RT-Thread Develop Team
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://openlab.rt-thread.com/license/LICENSE
 *
 * Change Logs:
 * Date           Author       Notes
 * 2013-07-11     reynolds     port to TWR-K60F120M
 */

#ifndef DRV_UART_H
#define DRV_UART_H

#include <rthw.h>
#include <rtthread.h>
#include <rtdevice.h>

#include <MK60F12.H>

#include <drivers/serial.h>


#define k60_uasrt_irq_num   (55)

void rt_hw_uart_init(void);

//for kernel debug when console not registered
void rt_hw_console_output(const char *str);

#endif /* end of include guard: DRV_UART_H */
