#pragma once

#include "Factory.h"

#include <iostream>
using namespace std;

#define DEFAULT_BUTTER_FAT_CONTENT 82 //жирность масла
#define DEFAULT_BUTTER_SHELF_LIFE 90 //срок годности масла в сутках

class ButterFactory : public Factory {
	int butterFatContent;	//процент жира в сливочном масле
	int butterShelfLife;	//кол-во дней до просрочки масла

public:
	ButterFactory() : Factory() {
		butterFatContent = DEFAULT_BUTTER_FAT_CONTENT;
		butterShelfLife = DEFAULT_BUTTER_SHELF_LIFE;
	}

	ButterFactory(string* name, int workersCount, double workerEfficiency, int butterFatContent, int butterShelfLife)
		: Factory(name, workersCount, workerEfficiency) {
		setButterFatContent(butterFatContent);
		setButterShelfLife(butterShelfLife);
	}

	~ButterFactory() {}

	ButterFactory(const ButterFactory& obj) : Factory(obj) {
		setButterFatContent(obj.butterFatContent);
		setButterShelfLife(obj.butterShelfLife);
	}

	void setButterFatContent(int);
	void setButterShelfLife(int);

	int getButterFatContent();
	int getButterShelfLife();

	void print();

	void produce();
};