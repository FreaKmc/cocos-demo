#ifndef _TollgateScene_H_
#define _TollgateScene_H_


#include "cocos2d.h"
#include "Player.h"
#include "ui/CocosGUI.h"
#include "MonsterManager.h"
USING_NS_CC;
using namespace ui;


class Player;
class TollgateScene :public Layer{
public:
	static Scene* createScene();
	virtual bool init();
	CREATE_FUNC(TollgateScene);
	virtual void update(float delta);
private:
	void initBG();	
	void loadUI();
	void jumpEvent(Ref* sender, Widget::TouchEventType type);
private:
	Sprite* m_bgSprite1;
	Sprite* m_bgSprite2;

	Player* m_player;
};
#endif