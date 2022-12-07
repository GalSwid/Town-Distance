#pragma once
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <vector>
#include "Country.h"
#include "City.h"
#include "List.h"

using namespace std;


class Manager
{
private:
	Country _country;
	ListNode* _srcCityNumber;
	ListNode* _destCityNumber;
	vector<pair<int, int>> _roadLocation;
	int _citiesColorsArr[2] = { 0 , 1 };

public:
	Manager();
	void run();

	int* buildCitiesColorsArr();

	int townDistanceRec(Country country, ListNode* srcCityNumber, ListNode* destCityNumber, int* citiesColorsArr);
	int townDistanceIter(Country country, ListNode* srcCityNumber, ListNode* destCityNumber, int* citiesColorsArr);

	void getinputNumberOfCitiesandRoads();
	void getinputStartingAndEndPoint();
	void getPairsOfRoadLocation();
	void buildCountryStructure();

	//int getNumberOfCities() { return _numOfCities; };
	//int getNumberOfRoads() { return _numOfRoads; };
	ListNode* getSrcCityNumber() { return _srcCityNumber; }
	ListNode* getDestCityNumber() { return _destCityNumber; }

	bool isValidInput(int inputUser, int from, int to); /*{ return (inputUser >= 0 && inputUser <= _country.getNumOfCities()) ? true : false; }*/
	vector<pair<int, int>> removeDuplicates(vector<pair<int, int>> arr);
};