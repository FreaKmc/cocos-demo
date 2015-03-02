#ifndef _MyHelloWorldScene_H_
#define _MyHelloWorldScene_H_

#include "cocos2d.h"
using namespace cocos2d;

class MyHelloWorldScene:public Layer
{
public:
	static Scene* createScene();
	virtual bool init();
	CREATE_FUNC(MyHelloWorldScene);

};

#endif