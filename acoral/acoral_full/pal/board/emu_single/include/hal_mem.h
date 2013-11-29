/*
 * hal_mem.h
 *
 *  Created on: 2010-3-7
 *      Author: jivin
 */

#ifndef HAL_MEM_H_
#define HAL_MEM_H_
#define HAL_MEM_INIT() hal_mem_init()
#include<type.h>
extern acoral_u32 heap_start;
extern acoral_u32 heap_end;
#define HAL_HEAP_START heap_start
#define HAL_HEAP_END heap_end
#endif /* HAL_MEM_H_ */
