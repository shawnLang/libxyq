/*
 "               ..;;;;,                     ;;;,    
 '           ..;;;"` ;;:           ,;;;;;: ,;;;:.,;..          _/
 `     ,;..,;;"`    :;;'            :;;"`,;;;;;;"":;;         _/ 
       ;;;"  `:;;. ;;'           ..;;:  .;;,.;;:',;;"    _/_/_/_/_/
      .;;`   ,;;" .;"          ,;;;;;;" :;`',;",;;"         _/
     ,;;,:.,;;;  ,;:          :" ,;:` , `:.;;;;;'`         _/   
     ;;"'':;;:. .;; .          ,;;;,;:;;,;;;, ,;             _/
    :;;..;;;;;; :;' :.        :;;;"` `:;;;;;,;,.;.          _/
  .;;":;;`  '"";;:  ';;       '""   .;;`.;";:;;;;` ;,  _/_/_/_/_/
 ;;;" `'       "::. ,;;:          .;"`  ::. '   .,;;;     _/ 
 ""             ';;;;;;;"        ""     ';;;;;;;;;;`     _/
 
                        Windsoul++

                by 云风 (Cloud Wu)  1999-2001
 
		http://member.netease.com/~cloudwu 
		mailto:cloudwu@263.net
 
		请阅读 readme.txt 中的版权信息
		See readme.txt for copyright information.

		Description:		风魂时钟头文件
 		Original Author:	云风
		Authors:
		Create Time:		2000/12/26
		Modify Time:		2001/7/19

.:*W*:._.:*I*:._.:*N*:._.:*D*:._.:*S*:._.:*O*:._.:*U*:._.:*L*:._.:*/

#ifndef _WINDSOUL_TIMER_H
#define _WINDSOUL_TIMER_H

 ///	计时器 (timer.cpp)
/////////////////////////////

/*
class WINDSOUL_API WTimer {
	static int starttime;
	static DWORD CP10K;			// 万分之一秒的周期数
public:
	static void Init();			// 初始化
	static DWORD CyclePerSec;	// 一秒 CPU 运行周期
	static int CPU();			//返回 CPU 频率
	static void Reset(int t=0);	// 初始化计时器
	static void Start();		//启动时间检测
	static DWORD Stop();		//得到时间检测时间(最小单位是 16 时钟周期, 最大周期 P200 上 5 分)
	static DWORD GetTime();		//返回当前计数值 ( 最小单位为 1/10000 秒)
};
*/

class WINDSOUL_API WTimer {

	union uINT64 {
		__int64 time;
		struct {
			DWORD low;
			DWORD high;
		};
	};

	int m_iPriority;
	HANDLE m_hThread;
	uINT64 m_i64Timer;

	DWORD m_StartTime;
public:
	static DWORD s_CP10K;		// 万分之一秒的周期数
	static DWORD s_Cycle;		// 0.1 秒 CPU 运行周期
public:
	WTimer();

	static int CPU();			//返回 CPU 频率
	static void SetCpu(DWORD mhz);	// 设置 CPU 频率
	void Reset(int t=0);		//初始化计时器
	void Start();				//启动时间检测
	DWORD Stop();				//得到时间检测时间(最小单位是 16 时钟周期, 最大周期 P200 上 5 分)
	DWORD GetTime();			//返回当前计数值 (最小单位为 1/10000 秒)
};

#endif