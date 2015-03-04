#include "cocos2d.h"


class FlowWord : public cocos2d::Node {
public:
	static FlowWord* create();
	bool init();
	void showWord(const char* text, cocos2d::Point pos);

private:
	void __flowEnd();
private:
	cocos2d::CCLabelTTF* m_textLab;


};