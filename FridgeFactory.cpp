#include "FridgeFactory.h"
#include <Windows.h>

void FridgeFactory::setFridgeWorkingTemperature(double fridgeWorkingTemperature) {
	this->fridgeWorkingTemperature = fridgeWorkingTemperature;
}

void FridgeFactory::setFridgeNumOfRacks(int fridgeNumOfRacks) {
	this->fridgeNumOfRacks = fridgeNumOfRacks;
}

double FridgeFactory::getFridgeWorkingTemperature() {
	return fridgeWorkingTemperature;
}

int FridgeFactory::getFridgeNumOfRacks() {
	return fridgeNumOfRacks;
}

void FridgeFactory::print() {
	Factory::print();
	cout << "��������� ������� ����������� ������������:" << fridgeWorkingTemperature << endl;
	cout << "���-�� ����� � ��������� ������������: " << fridgeNumOfRacks << endl;
}

void FridgeFactory::produce() {
	cout << "(����� �������)";

	for (int i = 0; i < 6; i++) {
		Sleep(1000);
		cout << ".";
	}

	cout << endl << "������ � �������� ���� ����� ������������. ��� ����� ������� ����������� "
		<< fridgeWorkingTemperature << " �������� ������� � "
		<< fridgeNumOfRacks << " ����� (���������) ��� �������� ���������." << endl;
}