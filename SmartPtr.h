// =====================================================================================
// 
//       Filename:  SmartPtr.h
// 
//    Description:  
// 
//        Version:  1.0
//        Created:  2012/08/12 16时28分00秒
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  elloop (Ivan Sun), 912191009@qq.com
//        Company:  China
// 
// =====================================================================================

#ifndef  ELLOOP_SMARTPTR_H
#define	ELLOOP_SMARTPTR_H			//


// =====================================================================================
//        Class:  SmartPtr
//  Description:  
// =====================================================================================
class SmartPtr
{
	public:
		SmartPtr ();                             // constructor
		SmartPtr ( const SmartPtr &other );   // copy constructor
		~SmartPtr ();                            // destructor
		SmartPtr& operator = ( const SmartPtr &other ); // assignment operator
		void print();
	private:
}; // -----  end of class SmartPtr  -----


#endif     // -----  not ELLOOP_SMARTPTR_H  -----
