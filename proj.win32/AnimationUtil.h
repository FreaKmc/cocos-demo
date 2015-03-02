#ifndef _AnimationUtil_H_
#define _AnimationUtil_H_

#include "cocos2d.h"
USING_NS_CC;

class AnimationUtil{
public:
	static Animation* createWithSingleFrameName(const char* name, float delay, int iLoops);
	static Animation* createWithFrameNameAndNum(const char* name, int iNum, float delay, int iLoops);
};

#endif 
