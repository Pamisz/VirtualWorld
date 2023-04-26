#pragma once
class organizm;

class organizmy {
private:
	organizm* front = nullptr;
	organizm* back = nullptr;
public:
	void createNode(organizm* node);
	void deleteNode(organizm* node);
	organizm* getFront();
	organizm* getBack();
};