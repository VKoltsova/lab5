#pragma once

#include "Factory.h"

#include <iostream>
using namespace std;

#define DEFAULT_GUN_CALIBER 7.62 //������
#define DEFAULT_GUN_AMMO_CAPACITY 6 //���-�� ��������

class GunFactory : public Factory {
	double gunCaliber;
	int gunAmmoCapacity;

public:
	GunFactory() : Factory() {
		gunCaliber = DEFAULT_GUN_CALIBER;
		gunAmmoCapacity = DEFAULT_GUN_AMMO_CAPACITY;
	}
	
	GunFactory(string* name, int workersCount, double workerEfficiency, double gunCaliber, int gunAmmoCapacity)
		: Factory(name, workersCount, workerEfficiency) {
		setGunCaliber(gunCaliber);
		setGunAmmoCapacity(gunAmmoCapacity);
	}

	~GunFactory() {}
	//����������� ����� � �������� ������
	GunFactory(const GunFactory& obj) : Factory(obj) {
		setGunCaliber(obj.gunCaliber);
		setGunAmmoCapacity(obj.gunAmmoCapacity);
	}

	void setGunCaliber(double);
	void setGunAmmoCapacity(int);

	double getGunCaliber();
	int getGunAmmoCapacity();

	void print();

	void produce();
};