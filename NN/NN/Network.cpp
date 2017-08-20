#include "Network.h"



Network::Network(std::vector<int> inPutNet)
{
	NuNeuronAndLayer = inPutNet;

}

Network::~Network()
{
}


void Network::setWeights() {

	UtilityNN ut;
	ut.randValueForEachNeoron(weights, NuNeuronAndLayer);

}

void Network::setBiasTemp() {

	UtilityNN ut;
	ut.randValueForEachNeoron(biastTemp, NuNeuronAndLayer);

}



void Network::feedForward(double a, double& outFeedForward) {
	UtilityNN  ut;
	for (int i = 0; i < biastTemp.size();i++) {
		for (int j = 0; j < weights.size();j++) {

			double z = (biastTemp[i][j] * a) + weights[i][j];
			ut.sigmoidFunction(z, outFeedForward);

		}
	}

}







