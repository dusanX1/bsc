#include "UtilityNN.h"



UtilityNN::UtilityNN()
{
}


UtilityNN::~UtilityNN()
{
}


void UtilityNN::randValue(std::vector<double>& randNumer, int k) {

	std::mt19937_64 rng;
	// initialize the random number generator with time-dependent seed
	uint64_t timeSeed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
	std::seed_seq ss{ uint32_t(timeSeed & 0xffffffff), uint32_t(timeSeed >> 32) };
	rng.seed(ss);
	// initialize a uniform distribution between 0 and 1
	std::uniform_real_distribution<double> unif(0, 1);
	// ready to generate random numbers
	const int nSimulations = k;
	for (int i = 0; i < nSimulations; i++)
	{
		double currentRandomNumber = unif(rng);
		std::cout << currentRandomNumber << std::endl;
		randNumer.push_back(currentRandomNumber);
	}

}

void UtilityNN::sigmoidFunction(double inz, double& output) {
	output = 1.0 / (1.0 + std::exp(-inz));
}

void UtilityNN::randValueForEachNeoron(std::vector<std::vector<double>>& randNumeren, std::vector<int> k) {

	std::mt19937_64 rng;
	// initialize the random number generator with time-dependent seed
	uint64_t timeSeed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
	std::seed_seq ss{ uint32_t(timeSeed & 0xffffffff), uint32_t(timeSeed >> 32) };
	rng.seed(ss);
	// initialize a uniform distribution between 0 and 1
	std::uniform_real_distribution<double> unif(0, 1);
	// ready to generate random numbers
	const int nSimulations = k.size();
	for (int i = 0; i < nSimulations; i++)
	{
		std::vector<double> tempNum;
		for (int j = 0; j < k[i];j++) {

			double currentRandomNumber = unif(rng);
			std::cout << currentRandomNumber << std::endl;
			tempNum.push_back(currentRandomNumber);
		}

		randNumeren.push_back(tempNum);
		tempNum.clear();
	}

}