//˵���������ļ����µ�Doc�ļ�����Readme.txt�ļ�
//======================================================================

#include "includes.h"   //������ͷ�ļ�


int main(void)
{
	//1. ����������ʹ�õı���
	uint_32  mRuncount;     //��ѭ��������
	uint_8  flag;
	//2. �����ж�
  	DISABLE_INTERRUPTS;

	//3. ��ʼ������ģ��
	light_init(LIGHT_RED, LIGHT_OFF);      //��Ƴ�ʼ��
//	light_init(LIGHT_BLUE, LIGHT_OFF);     //���Ƴ�ʼ��
//	light_init(LIGHT_GREEN, LIGHT_OFF);    //�̵Ƴ�ʼ��
	switcher_init(SWITCHER,0);    //���س�ʼ��


	//4. ���йر�������ֵ
	mRuncount=RUN_COUNTER_MAX*10;            //��ѭ��������
	flag = 0;               //�ƿ��Ʊ�־
	//5. ʹ��ģ���ж�

	//6. �����ж�
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

