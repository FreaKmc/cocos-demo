#ifndef _MonsterManager_H_
#define _MonsterManager_H_

#include "cocos2d.h"
#include "Monster.h"
#include "Player.h"
USING_NS_CC;

#define MAX_MONSTER_NUM 10

class MonsterManager:public Node{
public:
	CREATE_FUNC(MonsterManager);
	virtual bool init();
	void bindPlayer(Player* player);
	virtual void update(float dt);
private:
	void createrMonster();
	Player* m_player;
private:
	Vector<Monster*> m_monsterArr;

};

#endif