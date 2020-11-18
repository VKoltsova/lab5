#pragma once

#include "Factory.h"

#include <iostream>
using namespace std;

#define DEFAULT_FRIDGE_WORKING_TEMPERATURE 2.0 //������� ����������� ������������
#define DEFAULT_FRIDGE_NUM_OF_RACKS 3 //���-�� ����� (���������) � �����

class FridgeFactory : public Factory {
	double fridgeWorkingTemperature;	//����������� ������ �������� ������������, ��� ��� ����� ������� ��������
	int fridgeNumOfRacks;	//���-�� ����� � �����, ������� ����� ��� ��� �������� ���������

public :
	FridgeFactory() : Factory() {
		fridgeWorkingTemperature = DEFAULT_FRIDGE_WORKING_TEMPERATURE;
		fridgeNumOfRacks = DEFAULT_FRIDGE_NUM_OF_RACKS;
	}
	
	FridgeFactory(string* name, int workersCount, double workerEfficiency, double fridgeWorkingTemperature, int fridgeNumOfRacks)
		: Factory(name, workersCount, workerEfficiency) {
		setFridgeWorkingTemperature(fridgeWorkingTemperature);
		setFridgeNumOfRacks(fridgeNumOfRacks);
	}

	~FridgeFactory() {}

	FridgeFactory(const FridgeFactory& obj) : Factory(obj) {
		setFridgeWorkingTemperature(obj.fridgeWorkingTemperature);
		setFridgeNumOfRacks(obj.fridgeNumOfRacks);
	}

	void setFridgeWorkingTemperature(double);
	void setFridgeNumOfRacks(int);

	double getFridgeWorkingTemperature();
	int getFridgeNumOfRacks();

	void print();

	void produce();
};