/*
 * switcher.h
 *
 *  Created on: 2016年10月19日
 *      Author: 11876
 */

#ifndef SWITCHER_H_
#define SWITCHER_H_

//头文件包含
#include "common.h"    //包含公共要素头文件
#include "gpio.h"      //用到gpio构件

//开关宏定义（开关开闭对应的物理电平由硬件接法决定）
#define  SWITCHER_ON       1    //开关开
#define  SWITCHER_OFF      0    //开关闭

//开关定义
#define  SWITCHER      (PTB_NUM|0)  //红色RUN灯使用的端口号/引脚


//=================接口函数声明=======================================
//=========================================================================
//函数名称：switcher_init
//函数参数：port_pin：(端口号)|(引脚号)（如：(PTB_NUM)|(9) 表示为B口9号脚）
//pullselect:默认开关是开启还是关闭
//函数返回：无
//功能概要：开关初始化。
//======================================================================
void switcher_init(uint_16 port_pin,uint_8 pullselect);

//=================接口函数声明=======================================
//=========================================================================
//函数名称：switcher_state
//函数参数：port_pin：(端口号)|(引脚号)（如：(PTB_NUM)|(9) 表示为B口9号脚）
//函数返回：uint_8:1开，0闭s
//功能概要：获取当前开关状态。
//======================================================================
uint_8 switcher_state(uint_16 port_pin);


#endif /*SWITCHER_H_ */
