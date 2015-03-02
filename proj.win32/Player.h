#ifndef _Player_H_
#define  _Player_H_

#include "cocos2d.h"
#include "Entity.h"
#include "FlowWord.h"
using namespace cocos2d;

#define  JUMP_ACTION_TAG 1

class Player : public Entity{
public:
	Player();
	~Player();
	CREATE_FUNC(Player);
	void jump();
	void hit();
	void resetData();
	int getiHP();
	virtual bool init();
private:
	bool m_isJumping;
	int m_iHP;
};
#endif