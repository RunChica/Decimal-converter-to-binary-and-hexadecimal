#include <iostream>
#include <vector>
using namespace std;

vector<int> bin = {  };
vector<char> hexa = {  };

void isBinValid(int d) {
	
	if (d == 0) {
		cout << "\nBinary format: ";
		for (int i = 0;i < bin.size();i++) {
			cout << bin[i] << "";
		}
	}
	else {}
}

void insertBin(int c,int f) {
	int element = c;
	bin.insert(bin.begin() + 0, element);
}

void binary(int a,int& b) {

	while (a > 0) {
		b = a % 2;
		insertBin(b,a);
		a = a / 2;
		isBinValid(a);
	}
}

void isHexavalid(int E) {
	if (E == 0) {
		cout << "\n\nHexadecimal format: ";
		for (int i = 0;i < hexa.size();i++) {
			cout << hexa[i] << "";
		}
	}
	else {}

}

void insertHex(int C, int D) {
	
	char element;

	if (C < 10) {
		element = C + '0';
	}
	else {
		element = 'A' + (C - 10); 
	}
	hexa.insert(hexa.begin() + 0, element);
}

void hexadec(int A, int& B) {

	while (A > 0) {
		B = A % 16;
		insertHex(B, A);
		A = A / 16;
		isHexavalid(A);
	}
}

int main() {
	int num,bit,hexbit;
	cout << "Put in the number of your choice: ";
	cin >> num;
	cout << "\nDecimal format: " << num << endl;
	binary(num,bit);
	hexadec(num, hexbit);
	return 0;
}