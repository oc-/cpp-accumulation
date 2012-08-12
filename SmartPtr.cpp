
#include "SmartPtr.h"
#include <iostream>

SmartPtr::SmartPtr ()
{
}  // -----  end of method SmartPtr::SmartPtr  (constructor)  -----

/******************************************************************/
SmartPtr::SmartPtr ( const SmartPtr &other )
{
}  // -----  end of method SmartPtr::SmartPtr  (copy constructor)  -----


SmartPtr::~SmartPtr ()
{
}  // -----  end of method SmartPtr::~SmartPtr  (destructor)  -----

/
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

