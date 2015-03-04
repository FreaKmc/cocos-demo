#ifndef _AnimationUtil_H_
#define _AnimationUtil_H_

#include "cocos2d.h"


class AnimationUtil{
public:
	static cocos2d::Animation* createWithSingleFrameName(const char* name, float delay, int iLoops);
	static cocos2d::Animation* createWithFrameNameAndNum(const char* name, int iNum, float delay, int iLoops);
};

#endif 
