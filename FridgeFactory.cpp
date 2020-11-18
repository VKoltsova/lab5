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
	cout << "Заподская рабочая температура холодильника:" << fridgeWorkingTemperature << endl;
	cout << "Кол-во полок в заводском холодильнике: " << fridgeNumOfRacks << endl;
}

void FridgeFactory::produce() {
	cout << "(звуки станков)";

	for (int i = 0; i < 6; i++) {
		Sleep(1000);
		cout << ".";
	}

	cout << endl << "Сейчас с конвеера идут новые холодильники. Они имеют рабочую температуру "
		<< fridgeWorkingTemperature << " градусов цельсия и "
		<< fridgeNumOfRacks << " полок (отделений) для хранения продуктов." << endl;
}