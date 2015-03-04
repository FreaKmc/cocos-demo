#ifndef _ControllerListener_H_
#define _ControllerListener_H_

#include "cocos2d.h"


class ControllerListener{
public:
	virtual void setTagPosition(int x, int y) = 0;
	virtual Point getTagPosition() = 0;
};
#endif