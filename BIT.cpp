#include<iostream>

using namespace std;

int main() {
	int n, Inst=1, R[4];

	while(1) {
		cin >> n;
		if(n==0) return 0; 

		R[0] = n/50;
		n %= 50;
		R[1] = n/10;
		n %= 10;
		R[2] = n/5;
		n %= 5;
		R[3] = n/1;
		n %= 1;

		cout << "Teste "<<Inst<<"\n"<<R[0]<<" "<<R[1]<<" "<<R[2]<<" "<<R[3]<<"\n\n";
		Inst++;
	}

	return 0;
}

