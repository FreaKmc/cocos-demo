#include "MonsterManager.h"
USING_NS_CC;
bool MonsterManager::init(){
	createrMonster();
	this->scheduleUpdate();
	return true;
}

void MonsterManager::createrMonster(){
	Monster* monster = NULL;
	Sprite* sprite = NULL;
	for (int i = 0; i < MAX_MONSTER_NUM; i++){
		monster = Monster::create();
		monster->bindSprite(Sprite::create("monster.png"));
		monster->reset();

		this->addChild(monster);

		m_monsterArr.pushBack(monster);
	}
}

void MonsterManager::update(float dt)
{
	for (auto monster : m_monsterArr)
	{
		if (monster->isAlive())
		{
			monster->setPositionX(monster->getPositionX() - 4);

			if (monster->getPositionX()<0)
			{
				monster->hide();
			}
			else if(monster->isCollideWithPlayer(m_player))
			{
				m_player->hit();
				monster->hide();
			}
		}
		else
		{
			monster->show();
		}
	}

}
void MonsterManager::bindPlayer(Player* player){
	m_player = player;
}


