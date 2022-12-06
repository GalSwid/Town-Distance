#pragma once

class ListNode
{
private:
	int _cityNum;
	int _colorCity = 1; // WHITE
	ListNode* _nextCity;
public:
	ListNode();
	ListNode(int cityNum, ListNode* nextCity = nullptr);
	void setColorCity(int colorCity) { _colorCity = colorCity; }
	int getColorCity() const { return _colorCity; }
	int getCityNum() const { return _cityNum; }
	ListNode* getNextCity() const { return _nextCity; }
};