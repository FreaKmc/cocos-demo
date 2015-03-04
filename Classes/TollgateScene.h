#ifndef _TollgateScene_H_
#define _TollgateScene_H_


#include "cocos2d.h"
#include "ui/CocosGUI.h"


#include "Player.h"
#include "MonsterManager.h"

class TollgateScene :public cocos2d::Layer{
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC(TollgateScene);
	virtual void update(float delta);
private:
	void __initBG();	
	void __loadUI();
	void jumpEvent(cocos2d::Ref* sender, ui::Widget::TouchEventType type);
private:
	cocos2d::Sprite* m_bgSprite1;
	cocos2d::Sprite* m_bgSprite2;

	Player* m_player;
};
#endif