//说明见工程文件夹下的Doc文件夹内Readme.txt文件
//======================================================================

#include "includes.h"   //包含总头文件


int main(void)
{
	//1. 声明主函数使用的变量
	uint_32  mRuncount;     //主循环计数器
	uint_8  flag;
	//2. 关总中断
  	DISABLE_INTERRUPTS;

	//3. 初始化外设模块
	light_init(LIGHT_RED, LIGHT_OFF);      //红灯初始化
//	light_init(LIGHT_BLUE, LIGHT_OFF);     //蓝灯初始化
//	light_init(LIGHT_GREEN, LIGHT_OFF);    //绿灯初始化
	switcher_init(SWITCHER,0);    //开关初始化


	//4. 给有关变量赋初值
	mRuncount=RUN_COUNTER_MAX*10;            //主循环计数器
	flag = 0;               //灯控制标志
	//5. 使能模块中断

	//6. 开总中断
	ENABLE_INTERRUPTS;

	int i=0;
		for(;;){
             if(switcher_state(SWITCHER)==1){
            	 light_control(LIGHT_RED,LIGHT_ON);
             }
             else{
            	 light_control(LIGHT_RED,LIGHT_OFF);
             }
		}

}

