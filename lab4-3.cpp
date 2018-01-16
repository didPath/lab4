#include <iostream>
#include <cmath>
using namespace std;

double findDivisor(int x){
	int i = 2;
	while(i>=1){
		if(x%i==0){
	return i;
		}
	i++;
	}
}

int main(){
	cout << "input 10 = " << findDivisor(10) << "\n";
	cout << "input 97 = " << findDivisor(97) << "\n";
	cout << "input 221 = " << findDivisor(221) << "\n";
}
