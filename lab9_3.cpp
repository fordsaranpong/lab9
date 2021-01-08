#include <iostream>
#include <iomanip>
#include<fstream>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(){
	float Mean,SD,Num,RN,S;
	ifstream source;
	source.open("C:\\Users\\Lelouch\\Desktop\\lab9\\score.txt");
	string textline;
	while(getline(source,textline)){
	Mean+=atof(textline.c_str());
	RN=RN+pow(atof(textline.c_str()),2);
	Num++;}
	source.close();
    Mean=Mean/Num;
    S=(RN/Num)-(Mean*Mean);
	SD=pow(S,0.5);
	cout << "Number of data = "<<Num;
    cout << setprecision(3);
    cout << "\nMean = "<<Mean;
    cout << "\nStandard deviation = "<<SD;
}