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


//������� print
void GunFactory::print() {
	Factory::print();
	cout << "������: " << gunCaliber << endl;
	cout << "���������� �������� (�����������): " << gunAmmoCapacity << endl;
}

void GunFactory::produce() {
	cout << "(����� ���������)";

	for (int i = 0; i < 6; i++) {
		Sleep(1000);
		cout << ".";
	}

	cout << endl << "����� ������ ��������� � ���������. � ��� ������ "
		<< gunCaliber << " ������ � ������� ����������� " << gunAmmoCapacity << " ����" << endl;
}