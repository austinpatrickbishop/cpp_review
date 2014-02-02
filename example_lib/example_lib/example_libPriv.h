/*
 *  example_libPriv.h
 *  example_lib
 *
 *  Created by austin bishop on 2/1/14.
 *  Copyright (c) 2014 austin bishop. All rights reserved.
 *
 */

/* The classes below are not exported */
#pragma GCC visibility push(hidden)

class example_libPriv
{
	public:
		void HelloWorldPriv(const char *);
};

#pragma GCC visibility pop
