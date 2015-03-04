#include "Player.h"
using namespace cocos2d;
Player::Player(){
	m_isJumping = false;
	m_iHP = 1000;
}

Player::~Player(){

}

bool Player::init(){
	return true;
}

void Player::hit(){
	if (getSprite() == NULL)
		return;

	//¶¯×÷
	FlowWord* flowWord = FlowWord::create();
	this->addChild(flowWord);
	flowWord->showWord("-15", getSprite()->getPosition());

	m_iHP -= 15;
	if (m_iHP < 0)
	{
		m_iHP = 0;
	}

	auto backMove = MoveBy::create(0.1f, Point(-20, 0));
	auto forwardMove = MoveBy::create(0.1f, Point(20, 0));
	auto backRotate = RotateBy::create(0.1f, -20,0);
	auto forewardRotate = RotateBy::create(0.1f,20,0);

	auto backActions = Spawn::create(backMove, backRotate, NULL);
	auto forwardActions = Spawn::create(forwardMove, forewardRotate, NULL);

	auto actions = Sequence::create(backActions, forwardActions, NULL);

	stopAllActions();
	resetData();
	runAction(actions);
	
}

int Player::getiHP(){
	return this->m_iHP;
}

void Player::resetData(){
	if (m_isJumping){
		m_isJumping = false;
	}
	setPosition(Point(200, 140));
	setScale(1.0f);
	setRotation(0);
}