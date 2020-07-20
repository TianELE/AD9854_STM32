#ifndef __AD9854_H
#define __AD9854_H	 
#include "sys.h"
#include "./Systick/bsp_SysTick.h"


#define AD9854_RST    PBout(8)   //AD9854复位端口
#define AD9854_UDCLK  PBout(9)   //AD9854更新时钟
#define AD9854_WR     PBout(12)  //AD9854写使能，低有效
#define AD9854_RD     PBout(13)   //AD9854读使能，低有效
#define AD9854_OSK    PBout(14)   //AD9854 OSK控制端
#define AD9854_FDATA  PBout(15)   //AD9854 FSK,PSK控制

#define AD9854_DataBus GPIOC->BSRR//实际只使用了adrbus
#define AD9854_AdrBus  GPIOC->BSRR

#define uint  unsigned int
#define uchar unsigned char
#define ulong unsigned long

extern void AD9854_Init(void);						  
static void Freq_convert(long Freq);	         	  
extern void AD9854_SetSine(ulong Freq,uint Shape);	  
static void Freq_double_convert(double Freq);		  
extern void AD9854_SetSine_double(double Freq,uint Shape);
extern void AD9854_InitFSK(void);				
extern void AD9854_SetFSK(ulong Freq1,ulong Freq2);					  
extern void AD9854_InitBPSK(void);					  
extern void AD9854_SetBPSK(uint Phase1,uint Phase2);					
extern void AD9854_InitOSK(void);					 
extern void AD9854_SetOSK(uchar RateShape);					  
extern void AD9854_InitAM(void);					 
extern void AD9854_SetAM(uint Shape);					
extern void AD9854_InitRFSK(void);					 
extern void AD9854_SetRFSK(ulong Freq_Low,ulong Freq_High,ulong Freq_Up_Down,ulong FreRate);		

#endif

