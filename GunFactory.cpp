#include "GunFactory.h"

#include <Windows.h>

void GunFactory::setGunCaliber(double gunCaliber) {
	this->gunCaliber = gunCaliber;
}

void GunFactory::setGunAmmoCapacity(int gunAmmoCapacity) {
	this->gunAmmoCapacity = gunAmmoCapacity;
}

double GunFactory::getGunCaliber() {
	return gunCaliber;
}

int GunFactory::getGunAmmoCapacity() {
	return gunAmmoCapacity;
}


//переопр print
void GunFactory::print() {
	Factory::print();
	cout << "Калибр: " << gunCaliber << endl;
	cout << "Количество патронов (вместимость): " << gunAmmoCapacity << endl;
}

void GunFactory::produce() {
	cout << "(звуки выстрелов)";

	for (int i = 0; i < 6; i++) {
		Sleep(1000);
		cout << ".";
	}

	cout << endl << "Новое оружие поступает с конвейера. У них калибр "
		<< gunCaliber << " дюймов и емкость боеприпасов " << gunAmmoCapacity << " пуль" << endl;
}