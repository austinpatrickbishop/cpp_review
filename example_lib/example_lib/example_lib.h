/*
 *  example_lib.h
 *  example_lib
 *
 *  Created by austin bishop on 2/1/14.
 *  Copyright (c) 2014 austin bishop. All rights reserved.
 *
 */

#ifndef example_lib_
#define example_lib_

/* The classes below are exported */
#pragma GCC visibility push(default)

class example_lib
{
	public:
		void HelloWorld(const char *);
};

#pragma GCC visibility pop
#endif
