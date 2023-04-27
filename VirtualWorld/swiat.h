#pragma once
#include <string.h>
#include <iostream>
class organizmy;


class swiat {
private:
	organizmy* org = nullptr;
	int height;
	int width;
	char** board = nullptr;
	bool personAlive = false;
	std::string personNextMove = "";
	std::string notifications[10];
public:
	void rysujSwiat();
	void createSwiat();
	void destroySwiat();
	void wykonajTure();
	organizmy* getOrganizmy();
	int getHeight() const;
	int getWidth() const;
	char** getBoard();
	bool getPersonAlive() const;
	void setPersonAlive(bool b);
	void setNextMove();
	std::string getNextMove();
	std::string getNotifications(int x);
	void setNotifications(std::string n);
};