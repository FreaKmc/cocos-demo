#ifndef _MonsterManager_H_
#define _MonsterManager_H_

#include "cocos2d.h"
#include "Monster.h"
#include "Player.h"

#define MAX_MONSTER_NUM 10

class MonsterManager:public cocos2d::Node{
public:
	CREATE_FUNC(MonsterManager);
	virtual bool init();
	void bindPlayer(Player* player);
	virtual void update(float dt);
private:
	void createrMonster();
private:
	Player* m_player;
	cocos2d::Vector<Monster*> m_monsterArr;

};

#endif