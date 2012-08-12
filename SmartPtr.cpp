// =====================================================================================
// 
//       Filename:  SmartPtr.cpp
// 
//    Description:  
// 
//        Version:  1.0
//        Created:  2012/08/12 17时14分23秒
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  孙永健 (Ivan Sun), 912191009@qq.com
//        Company:  China
// 
// =====================================================================================

#include "SmartPtr.h"
#include <iostream>
/***************************************************************************************
	类名:  SmartPtr
	方法名:  SmartPtr
	方法描述: 构造函数 
	输入参数:
	输出参数: N/A
	返回值:   N/A
	备注:     N/A
 ***************************************************************************************/
SmartPtr::SmartPtr ()
{
}  // -----  end of method SmartPtr::SmartPtr  (constructor)  -----

//--------------------------------------------------------------------------------------
/***************************************************************************************
	类名:  SmartPtr
	方法名:  SmartPtr
	方法描述: 拷贝构造函数 
	输入参数:
	输出参数: N/A
	返回值:   N/A
	备注:     N/A
 ***************************************************************************************/
SmartPtr::SmartPtr ( const SmartPtr &other )
{
}  // -----  end of method SmartPtr::SmartPtr  (copy constructor)  -----

/***************************************************************************************
	类名:  SmartPtr
	方法名:  ~SmartPtr
	方法描述: 析构函数  
	输入参数:
	输出参数: N/A
	返回值:   N/A
	备注:     N/A
 ***************************************************************************************/
SmartPtr::~SmartPtr ()
{
}  // -----  end of method SmartPtr::~SmartPtr  (destructor)  -----

/***************************************************************************************
	类名:  SmartPtr
	方法名: operator =  
	方法描述: 赋值运算符 
	输入参数:
	输出参数: N/A
	返回值:   N/A
	备注:     N/A
 ***************************************************************************************/
SmartPtr& SmartPtr::operator = ( const SmartPtr &other )
{
	if ( this != &other ) {
	}
	return *this;
}  // -----  end of method SmartPtr::operator =  (assignment operator)  -----

void SmartPtr::print (  )
{
	std::cout << "smart ptr" << std::endl;
}		// -----  end of method SmartPtr::print  -----

