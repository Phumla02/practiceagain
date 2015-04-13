#include <iostream>
#include<string>
using namespace std;
int add(int, int);
int main(){
	
	int x, y,z;
	cout << "Enter the value for x \n";
	cin >> x;
	cout << "Enter the value for y \n";
	cin >> y;
	z = add(x, y);
	cout << ("the sum is:\n") << z <<"\n";

	system("pause");

}
int add(int x, int y)
{
	return x + y;
}