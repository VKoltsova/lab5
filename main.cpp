#include "Factory.h"
#include "GunFactory.h"
#include "ButterFactory.h"
#include "FridgeFactory.h"
#include "Utils.h"

#include <stdlib.h>
#include <iostream>
using namespace std;

#define MIN_WORKERS_COUNT 1
#define MAX_WORKERS_COUNT 10000
#define MIN_WORKERS_EFFICIENCY 0.5
#define MAX_WORKERS_EFFICIENCY 5.0

#define MIN_GUN_CALIBER 0.1
#define MAX_GUN_CALIBER 100.0
#define MIN_GUN_AMMO_CAPACITY 1
#define MAX_GUN_AMMO_CAPACITY 500

#define MIN_BUTTER_FAT_CONTENT 40
#define MAX_BUTTER_FAT_CONTENT 95
#define MIN_BUTTER_SHELF_LIFE 10	//���� ��������
#define MAX_BUTTER_SHELF_LIFE 180

#define MIN_FRIDGE_WORKING_TEMPERATURE -10
#define MAX_FRIDGE_WORKING_TEMPERATURE 10
#define MIN_FRIDGE_NUM_OF_RACKS 2
#define MAX_FRIDGE_NUM_OF_RACKS 10

int main() {

	setlocale(LC_ALL, "Russian");

	Utils* util = new Utils();
	// ��� 4 ����

	/*cout << "1) ������� �������� ������" << endl;
	string factoryName = util->inputString();

	cout << "2) ������� ���������� ���������� ������" << endl;
	int workersCount = util->inputInteger(MIN_WORKERS_COUNT, MAX_WORKERS_COUNT);
	
	cout << "3) ������� ���������� ������������� �������� (� ���-�� ������������ ���������)" << endl;
	double workerEfficiency = util->inputDouble(MIN_WORKERS_EFFICIENCY, MAX_WORKERS_EFFICIENCY);

	Factory* factory = new Factory(&factoryName, workersCount, workerEfficiency);

	cout << endl;
	factory->print();
	cout << *(factory->getName()) << " ���������� ������������������ ���������� " << factory->getFactoryOutput() << " ������ ��������� ";
	cout << endl;

	cout << "Enter any key to continue...";
	cin.get();

	system("cls");*/

	cout << "1) ������� �������� ������ ������" << endl;
	string factoryName = util->inputString();

	cout << "2) ������� ���������� ���������� ������ ������" << endl;
	int workersCount = util->inputInteger(MIN_WORKERS_COUNT, MAX_WORKERS_COUNT);

	cout << "3) ������� ���������� ������������� �������� (������� � 1 ���� �� ������������� ����������)" << endl;
	double workerEfficiency = util->inputDouble(MIN_WORKERS_EFFICIENCY, MAX_WORKERS_EFFICIENCY);

	cout << "4) ������� ������ ������" << endl;
	double gunCaliber = util->inputDouble(MIN_GUN_CALIBER, MAX_GUN_CALIBER);

	cout << "5) ������� ���-�� ��������" << endl;
	int gunAmmoCapacity = util->inputInteger(MIN_GUN_AMMO_CAPACITY, MAX_GUN_AMMO_CAPACITY);

	Factory* gunFactory = new GunFactory(&factoryName, workersCount, workerEfficiency, gunCaliber, gunAmmoCapacity);

	cout << endl;
	gunFactory->print();
	cout << *(gunFactory->getName()) << " ���������� ������������������ ����������: " << gunFactory->getFactoryOutput() << " ������";
	cout << endl;

	cout << "Enter any key to continue..." << endl;
	cin.get();

	gunFactory->produce();

	cout << "Enter any key to continue..." << endl;
	cin.get();

	system("cls");

	cout << "1) ������� �������� ������ �����" << endl;
	factoryName = util->inputString();

	cout << "2) ������� ���������� ���������� ������ �����" << endl;
	workersCount = util->inputInteger(MIN_WORKERS_COUNT, MAX_WORKERS_COUNT);

	cout << "3) ������� ���������� ������������� �������� (������� � 1 ���� �� ������������� ����� �����)" << endl;
	workerEfficiency = util->inputDouble(MIN_WORKERS_EFFICIENCY, MAX_WORKERS_EFFICIENCY);

	cout << "4) ������� �������� ������������� �����" << endl;
	int butterFatContent = util->inputInteger(MIN_BUTTER_FAT_CONTENT, MAX_BUTTER_FAT_CONTENT);

	cout << "5) ������� ���� �������� ���������� �����" << endl;
	int butterShelfLife = util->inputInteger(MIN_BUTTER_SHELF_LIFE, MAX_BUTTER_SHELF_LIFE);

	Factory* butterFactory = new ButterFactory(&factoryName, workersCount, workerEfficiency, butterFatContent, butterShelfLife);

	cout << endl;
	butterFactory->print();
	cout << *(butterFactory->getName()) << " ���������� ������������������ ����������: " << butterFactory->getFactoryOutput() << " ������� �����";
	cout << endl;

	cout << "Enter any key to continue..." << endl;
	cin.get();

	butterFactory->produce();

	cout << "Enter any key to continue..." << endl;
	cin.get();

	system("cls");

	cout << "1) ������� �������� ������ �������������" << endl;
	factoryName = util->inputString();

	cout << "2) ������� ���������� ���������� ������ �������������" << endl;
	workersCount = util->inputInteger(MIN_WORKERS_COUNT, MAX_WORKERS_COUNT);

	cout << "3) ������� ���������� ������������� �������� (������� � 1 ���� �� ������������� �������������)" << endl;
	workerEfficiency = util->inputDouble(MIN_WORKERS_EFFICIENCY, MAX_WORKERS_EFFICIENCY);

	cout << "4) ������� ����������� ������ ������������" << endl;
	double fridgeWorkingTemperature = util->inputDouble(MIN_FRIDGE_WORKING_TEMPERATURE, MAX_FRIDGE_WORKING_TEMPERATURE);

	cout << "5) ������� ���������� ����� � ������������" << endl;
	int fridgeNumOfRacks = util->inputInteger(MIN_FRIDGE_NUM_OF_RACKS, MAX_FRIDGE_NUM_OF_RACKS);

	Factory* fridgeFactory = new FridgeFactory(&factoryName, workersCount, workerEfficiency, fridgeWorkingTemperature, fridgeNumOfRacks);

	cout << endl;
	fridgeFactory->print();
	cout << *(fridgeFactory->getName()) << " ���������� ������������������ ����������: " << fridgeFactory->getFactoryOutput() << " �������������";
	cout << endl;

	cout << "Enter any key to continue..." << endl;
	cin.get();

	fridgeFactory->produce();

	cout << "Enter any key to continue..." << endl;
	cin.get();

	system("cls");

	//delete factory;
	delete gunFactory;
	delete butterFactory;
	delete fridgeFactory;

	cout << "��� � ���, �������?" << endl;

	cout << "Enter any key to continue..." << endl;
	cin.get();

	return 0;
}