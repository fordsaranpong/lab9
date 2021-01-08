#include<iostream>
using namespace std;
int main(){
	char grade;
	int i=1,count[5]={0,0,0,0,0},sum;
	std::cout<< "Please input grade of each student (A-F) or input 0 to exit.\n";
	int l=1;
	do{
		std::cout << "Student [" <<i<< "]: ";
    	std::cin >> grade; 
		if(grade=='A'){count[0]++;i++;}
		else if(grade=='B'){count[1]++;i++;}
		else if(grade=='C'){count[2]++;i++;}
		else if(grade=='D'){count[3]++;i++;}
		else if(grade=='F'){count[4]++;i++;}
		else if(grade=='0'){l=0;}
		else{cout<<"Wrong input. Please input again.\n";} 	
	}while(l!=0);
	sum=count[0]+count[1]+count[2]+count[3]+count[4];	
	std::cout << "In total "<<sum<<" students.\n";
	std::cout << "A = " << count[0] <<", ";
	std::cout << "B = " << count[1] <<", ";	
	std::cout << "C = " << count[2] <<", ";
    std::cout << "D = " << count[3] <<", ";
	std::cout << "F = " << count[4];
	return 0;
}
