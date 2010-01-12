/*
 * simpleCache.h
 *
 *  Created on: Dec 2, 2009
 *      Author: apophys
 */

#ifndef SIMPLECACHE_H_
#define SIMPLECACHE_H_

#include "cachefs.h"

struct params_simpleCache
{
	char* cachefsMountPoint;

	char* ramMountPoint;
	char* ssdMountPoint;
	char* hddMountPoint;
};

int initCacheControl_simpleCache(cacheControl* cc );



#endif /* SIMPLECACHE_H_ */
