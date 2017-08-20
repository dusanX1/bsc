#pragma once
#ifndef _UTILITYNN_
#define _UTILITYNN_
#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include<chrono>
class UtilityNN
{
public:
	UtilityNN();
	~UtilityNN();

	void randValue(std::vector<double>& randNumer, int k);

	void randValueForEachNeoron(std::vector<std::vector<double>>& randNumeren, std::vector<int> k);

	void sigmoidFunction(double inz, double& output);


};


#endif // !_UTILITYNN_




