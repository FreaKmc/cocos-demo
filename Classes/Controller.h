#ifndef _Controller_H_
#define _Controller_H_

#include "cocos2d.h"

class ControllerListener;


class Controller :public cocos2d::Node{
public:
	void setControllerListener(ControllerListener* controllerListener);

protected:
	ControllerListener* m_controllerListener;

};




#endif 