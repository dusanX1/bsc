#pragma once
#ifndef _NETWORK_
#define _NETWORK_

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
#include<vector>
#include<cstdlib>
#include<stdlib.h>
#include"UtilityNN.h"

class Network
{
public:
	Network(std::vector<int> inPutNet);
	~Network();



	// set metode za bias i weights koje random generisu brojeve

	//void setBias(std::vector<float>& countBias);
	/*void setWeights(std::vector<float>& countWeight);*/

	void setWeights(); 

	void setBiasTemp();

	//gte method
	std::vector<std::vector<double>> getBiasTemp() const {
		return biastTemp;
	}

	float getBias() const {
		return bias;
	}

	std::vector<std::vector<double>> getWeights() const {
		return weights;
	}

	void feedForward(double a, double& outFeedForward);

protected:
	std::vector<int> NuNeuronAndLayer; //Ove upisujemo koliko ce mreza imati layera i koliko ce svaki layer imati neurona
										//Primer [2,3,1] ima 3 sloja, prvi ima 2 neurona...
	float bias;
	std::vector<std::vector<double>> weights;
	float outPut;

	std::vector<std::vector<double>> biastTemp;
	std::vector<double> testResult; //upisivati rezultat iz feedForward metode sto je ustvari izlaz iz sigmooidne fun
};

#endif // !_NETWORK_



