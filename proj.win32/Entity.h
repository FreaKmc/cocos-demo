#ifndef _Entity_H_
#define _Entity_H_

#include "cocos2d.h"
#include "Controller.h"
USING_NS_CC;

class Entity : public Node{
public:
	Entity();
	~Entity();
	Sprite* getSprite();
	void bindSprite(Sprite* sprite);
	
/*	void setController(Controller* controller);

	virtual void getTagPosition(int x, int y);
	virtual Point getTagPosition();*/
protected:
	//Controller* m_controller;
	Sprite* m_sprite;
};
#endif

