#pragma once

#include "Factory.h"

#include <iostream>
using namespace std;

#define DEFAULT_BUTTER_FAT_CONTENT 82 //�������� �����
#define DEFAULT_BUTTER_SHELF_LIFE 90 //���� �������� ����� � ������

class ButterFactory : public Factory {
	int butterFatContent;	//������� ���� � ��������� �����
	int butterShelfLife;	//���-�� ���� �� ��������� �����

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