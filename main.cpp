// =====================================================================================
// 
//       Filename:  main.cpp
// 
//    Description:  
// 
//        Version:  1.0
//        Created:  2012/08/12 17时15分42秒
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  孙永健 (Ivan Sun), 912191009@qq.com
//        Company:  China
// 
// =====================================================================================

#include "SmartPtr.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
#define	pc(x) cout << "************************" << (x) << "*********************" << endl
#define	ps(x) cout << #x " = " << (x) << endl			//
#define	p(x)  cout << (x)			//
#define	cr    cout << endl			//
using namespace std;
int main ( int argc, char *argv[] )
{
	clock_t begin, end;
	begin = clock();
	pc(argv[0]);
	/****************************** begin *************************************/

	SmartPtr sp;
	sp.print();
	/****************************** end *************************************/
	end = clock();
	cout << "time consumed: " << setprecision ( 4 ) << fixed << ( double ) ( end - begin ) / CLOCKS_PER_SEC << "s" << endl;
	return EXIT_SUCCESS;
}				// ----------  end of function main  ----------
