#include <reg52.h> 
sbit LED2  = P0^0;
sbit ADDR2 = P1^2;
sbit ADDR1 = P1^1;
sbit ADDR0 = P1^0;
sbit ENLED = P1^4;
sbit ADDR3 = P1^3;
 
void main()
{   
    ADDR3 = 1;//使能三八译码器
    ENLED = 0;// 
 
    ADDR2 = 1;//**************************
    ADDR1 = 1;//让三八译码器的IO6输出低电平
    ADDR0 = 0;//**************************
 
    LED2=0;//点亮最右端的灯
    while (1);//程序执行到此处语句,则不再往下执行下面的语句,相当于程序运行停在了此处，前面完成了把IO端口输出低电平的任务就死循环在这里不执行下去了  
}