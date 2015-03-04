#include "FlowWord.h"
USING_NS_CC;
FlowWord* FlowWord::create() {
	FlowWord* flowWord = new FlowWord();

	if (flowWord && flowWord->init()) {
		flowWord->autorelease();
	}
	else {
		CC_SAFE_DELETE(flowWord);
	}

	return flowWord;
}

bool FlowWord::init() {
	m_textLab = LabelTTF::create("", "Arial", 35);
	m_textLab->setColor(ccc3(255, 0, 0));
	m_textLab->setAnchorPoint(ccp(1, 0));
	m_textLab->setVisible(false);

	this->addChild(m_textLab);
	return true;
}

void FlowWord::showWord(const char* text, Point pos) {
	m_textLab->setString(text);
	m_textLab->setPosition(pos);
	m_textLab->setVisible(true);

	/* ��������������Ŵ����С */
	ActionInterval* scaleLarge = ScaleTo::create(0.3f, 2.5f, 2.5f);
	ActionInterval* scaleSmall = ScaleTo::create(0.5f, 0.5f, 0.5f);

	CallFunc* callFunc = CallFunc::create(this, callfunc_selector(FlowWord::__flowEnd));

	ActionInterval* actions = Sequence::create(scaleLarge, scaleSmall, callFunc, NULL);

	m_textLab->runAction(actions);
}

void FlowWord::__flowEnd() {
	/* �����������Ӹ��ڵ���ɾ������ */
	m_textLab->setVisible(false);
	m_textLab->removeFromParentAndCleanup(true);
}