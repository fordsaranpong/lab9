#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	dest.open("C:\\Users\\Lelouch\\Desktop\\lab9\\cheerbook_copy.txt");
	source.open("C:\\Users\\Lelouch\\Desktop\\lab9\\cheerbook.txt");
	dest<<"-------------------- BOOM ---------------------";
	dest.close();
	string textline;
	while(getline(source,textline)){

	dest.open("C:\\Users\\Lelouch\\Desktop\\lab9\\cheerbook_copy.txt",ios::app);
	dest <<"\n"<<textline;
	dest.close();
   }
   	dest.open("C:\\Users\\Lelouch\\Desktop\\lab9\\cheerbook_copy.txt",ios::app);
	dest<<"\n-------------------- HA!! ---------------------";

	dest.close();
    source.close();
	return 0;
}
