#include <iostream>
#include <fstream>
#include <algorithm>
#include <ostream>
#include <vector>

using namespace std;
int main() {
	ifstream planetsFile;
	planetsFile.open("words.txt");
	string word;
	vector<string> planetsArr = {};

	while (planetsFile >> word)
		planetsArr.push_back(word);

	sort(begin(planetsArr), end(planetsArr));
	planetsFile.close();

	ofstream newPlanetFile;
	newPlanetFile.open("words.txt", ofstream::out | ofstream::trunc);

	for (string planet : planetsArr)
		newPlanetFile << "Planet: " << planet << "\n";

	newPlanetFile.close();

	return 0;
}