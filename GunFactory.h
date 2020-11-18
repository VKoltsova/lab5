#pragma once

#include "Factory.h"

#include <iostream>
using namespace std;

#define DEFAULT_GUN_CALIBER 7.62 //калибр
#define DEFAULT_GUN_AMMO_CAPACITY 6 //кол-во патронов

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
	//конструктор копир к базовому классу
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