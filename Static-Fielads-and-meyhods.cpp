#include <iostream>
#include <Windows.h>
#include "Disease.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << std::endl;

	Disease* one = new Disease;
	std::cout << " Количество смертей до изменения в объекте№1       : " << one->GetDeaths() << std::endl;
	Disease::ChengeDeaths(100);
	std::cout << " Количество смертей после изменения в объекте№1    : " << one->GetDeaths() << std::endl;
	Disease* two = new Disease;
	std::cout << " Количество смертей в объекте№2 после его создания : " << two->GetDeaths() << std::endl;
	std::string exid;
	std::cin >> exid;
}
