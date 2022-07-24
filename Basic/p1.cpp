/* Task1: একটি প্রোগ্রাম লিখুন যা এসি চালু করতে নির্দেশ দেবে যদি পরিবেশের তাপমাত্রা 25 ডিগ্রির বেশি হয়। আবার 18
ডিগ্রির কম তাপমাত্রা হলে এসি বন্ধ করার নির্দেশ দেবে। */

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int temp;
// 	cin>>temp;
	
// 	if(temp > 29) { cout<< "Turn on AC"; }
// 	else if(temp < 18) { cout<< "Turn off AC"; }
// 	else cout<< "Let the AC on";

// 	return 0;
// }



// Task 2: Take values of length and breadth of a rectangle from user and check if it is square or not.

#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cout << "Length:";
	cin>> num1;
	cout << "Breadth:";
	cin>> num2;

	if(num1 == num2) {
		cout << "This is a square!";
	} else {
		cout << "This is not a square";
	}
	return 0;
}