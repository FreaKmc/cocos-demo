#include "TollgateScene.h"
USING_NS_CC;
Scene* TollgateScene::createScene()
{
	// 'scene' is an autorelease object
	auto scene = Scene::create();

	// 'layer' is an autorelease object
	auto layer = TollgateScene::create();

	// add layer as a child to scene
	scene->addChild(layer);

	// return the scene
	return scene;
}



bool TollgateScene::init(){
	if (!Layer::init())
	{
		return false;
	}

	Size visibleSize= Director::getInstance()->getVisibleSize();

	//游戏标题
	/*Sprite* titleSprite = Sprite::create("konglong.png");
	titleSprite->setPosition(Point(visibleSize.width / 2, visibleSize.height / 2));
	this->addChild(titleSprite, 2);*/
	
	//创建主角
	m_player = Player::create();
	m_player->bindSprite(Sprite::create("konglong.png"));
	m_player->setPosition(Point(200, 140));
	this->addChild(m_player, 3);

	__initBG();

	this->scheduleUpdate();

	MonsterManager* monsterMgr = MonsterManager::create();
	this->addChild(monsterMgr, 4);
	monsterMgr->bindPlayer(m_player);

	return true;
}

void TollgateScene::__initBG(){
	Size visibeSize = Director::getInstance()->getVisibleSize();
	m_bgSprite1 = Sprite::create("HelloWorld.png");
	m_bgSprite1->setPosition(Point(visibeSize.width/2,visibeSize.height/2));
	this->addChild(m_bgSprite1, 0);

	m_bgSprite2 = Sprite::create("HelloWorld.png");
	m_bgSprite2->setPosition(Point(visibeSize.width / 2+500, visibeSize.height / 2));
	m_bgSprite2->setFlippedX(true);
	this->addChild(m_bgSprite2, 0);

}

void TollgateScene::update(float delta){
	int posX1 = m_bgSprite1->getPositionX();
	int posX2 = m_bgSprite2->getPositionX();

	int iSpeed = 1;

	posX1 -= iSpeed;
	posX2 -= iSpeed;

	Size mapSize = m_bgSprite1->getContentSize();

	if (posX1 <= -mapSize.width / 2){
		posX1 = mapSize.width + mapSize.width;
	}

	if (posX2<=-mapSize.width/2)
	{
		posX2 = mapSize.width + mapSize.width / 2;
	}

	m_bgSprite1->setPositionX(posX1);
	m_bgSprite2->setPositionX(posX2);
}