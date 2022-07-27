## Basic problems

<details>
  <summary>Task 1: একটি প্রোগ্রাম লিখুন যা এসি চালু করতে নির্দেশ দেবে যদি পরিবেশের তাপমাত্রা 25 ডিগ্রির বেশি হয়। আবার 18
ডিগ্রির কম তাপমাত্রা হলে এসি বন্ধ করার নির্দেশ দেবে।</summary>

```
#include <iostream>
using namespace std;

int main()
{
	int temp;
	cin>>temp;

	if(temp > 29) { cout<< "Turn on AC"; }
	else if(temp < 18) { cout<< "Turn off AC"; }
	else cout<< "Let the AC on";

	return 0;
}
```

</details>

<details>
  <summary>Task 2: Take values of length and breadth of a rectangle from user and check if it is square or not.</summary>

```
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
```

</details>

<details>
  <summary>Task 3: Write a program to print absolute vlaue of a number entered by user</summary>

```
#include <iostream>
using namespace std;

main() {
    int number, abs;
    cout << "Enter a number: ";
    cin >> number;

    if(number < 0) {
        abs = number * -1;
    } else {
        abs = number;
    }

    cout << "Absolute value of " << number << " is " << abs;
    return 0;
}
```

</details>

<details>
  <summary>Task 4: A student will not be allowed to sit in exam if his/her attendence is less than 75%</summary>

```
#include <iostream>
using namespace std;

main() {
    float total, attended, percent;
    cout << "Number of class held: ";
    cin >> total;
    cout << "Number of class attended: ";
    cin >> attended;

    percent = (attended / total) * 100;
    cout << "Total percentage of attendence is "<< percent << "%" << endl;

    if(percent < 75) {
        cout << "Student is not allowed to sit in exam";
    } else {
        cout << "Student is allowed to sit in exam";
    }

    return 0;
}
```

</details>

<details>
  <summary>Task 5: Program to Check Given Character is Uppercase, Lowercase, Digit or Special Character</summary>

```
#include <iostream>
using namespace std;

main() {
    char ch;
    cout << "Write a character: ";
    cin >> ch;

    if(48 <= ch && ch <= 57) {
        cout << ch << " is a number";
    } else if (65 <= ch && ch <= 90) {
        cout << ch << " is a uppercase character";
    } else if (97 <= ch && ch <= 122) {
        cout << ch << " is a lowercase character";
    } else {
        cout << ch << " is a Special character";
    }

    return 0;
}
```

</details>
