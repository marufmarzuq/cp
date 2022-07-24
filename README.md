# A collapsible section with markdown

<details>
  <summary>Task 1: একটি প্রোগ্রাম লিখুন যা এসি চালু করতে নির্দেশ দেবে যদি পরিবেশের তাপমাত্রা 25 ডিগ্রির বেশি হয়। আবার 18
ডিগ্রির কম তাপমাত্রা হলে এসি বন্ধ করার নির্দেশ দেবে।</summary>
  
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

</details>
