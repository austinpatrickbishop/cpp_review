/*
 *  example_lib.cp
 *  example_lib
 *
 *  Created by austin bishop on 2/1/14.
 *  Copyright (c) 2014 austin bishop. All rights reserved.
 *
 */

#include <iostream>
#include "example_lib.h"
#include "example_libPriv.h"

void example_lib::HelloWorld(const char * s)
{
	 example_libPriv *theObj = new example_libPriv;
	 theObj->HelloWorldPriv(s);
	 delete theObj;
};

void example_libPriv::HelloWorldPriv(const char * s) 
{
	std::cout << s << std::endl;
};

