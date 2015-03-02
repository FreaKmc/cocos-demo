#include "cocos2d.h"
USING_NS_CC;

class FlowWord : public Node {
public:
	static FlowWord* create();
	bool init();

public:
	void showWord(const char* text, Point pos);
private:
	CCLabelTTF* m_textLab;

	void flowEnd();
};