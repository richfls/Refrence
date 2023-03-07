#include<iostream>
using namespace std;

void funone(int a, int& b, char v);
void funtwo(int& x, int y, char& w);
void funthree(int& c, int& d, char& e);


int main() {
	int num1, num2;
	char ch;

	num1 = 10;
	num2 = 15;
	ch = 'A';

	cout << num1 << " " << num2 << " " << ch << endl;

	funone(num1, num2, ch);

	cout << num1 << " " << num2 << " " << ch << endl;

	funtwo(num1, num2, ch);

	cout << num1 << " " << num2 << " " << ch << endl;

	funthree(num1, num2, ch);

	cout << num1 << " " << num2 << " " << ch << endl;


}

void funone(int a, int& b, char v) {
	int one;
	one = a;
	a++;
	b = b * 2;
	v = 'B';
	cout << "Inside FunOne: ";
	cout << a << " " << b << " " << v << endl;
}

void funtwo(int& x, int y, char& w) {
	x++;
	y = y * 2;
	w = 'G';

	cout << "Inside funTwo:";
	cout << x << " " << y << " " << w << endl;
}


void funthree(int& c, int& d, char& e) {
	int num1 = c;
	int num2 = d;
	char letter = e;

	num1 = num1 * 10;

	num2 = num2 + 5;

	letter = 'C';

	cout << "Inside funThree:";
	cout << num1 << " " << num2 << " " << letter << endl;
}
