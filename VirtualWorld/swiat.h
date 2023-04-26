#pragma once
class organizmy;

class swiat {
private:
	organizmy* org;
	int height;
	int width;
	char** board;
public:
	void rysujSwiat();
	void createSwiat();
	void destroySwiat();
	void wykonajTure();
	organizmy* getOrganizmy();
	int getHeight() const;
	int getWidth() const;
	char** getBoard();
};