//  Created by Nijie on 2014/03/18.
//  Copyright (c) 2014 Nijie. All rights reserved.
//

#ifndef __VERSION_H_NIJIE_2014_0318__
#define __VERSION_H_NIJIE_2014_0318__

/*************************************************************************************
版本说明文件

版本号说明 a.b.c.d
	a为架构版本号，涉及架构改变，重要数据结构，核心功能修改，实现方式变化
	b为功能版本号，涉及功能或者接口修改，配置文件，方式，或者输入输出，协议等的修改
	c为子功能版本号，涉及内部实现修改，算法优化，bug修改等
	d为Bug版本号，涉及bug修复等，对于一些实现的内部版本
*************************************************************************************/

#define LIB_VERSION		"2.0.0.5"

/*************************************************************************************
[version 2.0.0.5] -- 2014.07.10
1.增加luahttpd中mysql查询回调功能（内部版本，暂时不发布）
*************************************************************************************/

/*************************************************************************************
[version 2.0.0.4] -- 2014.06.16
1、fxdb64位中使用的mysql库是32位的，指向错了
*************************************************************************************/

/*************************************************************************************
[version 2.0.0.3] -- 2014.06.09
1、fxnet中当send和onsend同时回调postsend的时候，有可能产生两次postsend都失败的情况
	这种情况可能产生发送事件丢失，发送数据将被放在发送缓存中，直到下一次发送事件产生才能投递
	短时间出现类似丢包的现象。
*************************************************************************************/

/*************************************************************************************
[version 2.0.0.2] -- 2014.05.15
1、对每个TCP session增加ESESSION_RELEASE_LOWBUFF设置选项
	以便控制每个Session的底层BUFF的释放与否
	选项解释：可以不释放以便重复利用，调用此接口是为了解决有些连接Buff比较大，数量又比较少的情况
*************************************************************************************/

/*************************************************************************************
[version 2.0.0.1] -- 2014.03.31
1、对每个TCP session增加ESESSION_TCP_NODELAY设置选项
	以便控制每个Session的TCP Nagle算法开启，关闭
*************************************************************************************/

/*************************************************************************************
[version 2.0.0.0] -- 2014.03.18
1、对整个架构及代码结构做一次全面整理
	独立出工程目录
	独立出vs2008，vs2010，linux不同的编译工程
	独立出各个功能库的sample
2、对一些库做优化处理
	httpapi库使用多进程结构
	fxconsole优化命令执行索引结构
3、加入版本控制
*************************************************************************************/

#endif	// __VERSION_H_NIJIE_2014_0318__
