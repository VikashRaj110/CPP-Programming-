//Q.1Swapping two numbers using variable
// #include<iostream>
// using namespace std;
// int main(){
//  int a,b,temp;
//   cout<<"Enter Two Numbers:\n";
//   cin>>a>>b;
//  cout<<"\n Before Swapping: a="<<a<<".b="<<b<<endl;
//  temp= a;
//  a= b;
//  b= temp;
//  cout<<"\n After Swapping: a="<<a<<".b="<<b<<endl;
//  return 0;
// }

//Q.2Swapping two numbers without using variable
// #include<iostream>
// using namespace std;
// int main(){
//  int a,b;
//   cout<<"Enter Two Numbers:\n";
//   cin>>a>>b;
//  cout<<"\n Before Swapping: a="<<a<<".b="<<b<<endl;
//  a =a+b;
//  b= a-b;
//  a =a-b;
//  cout<<"\n After Swapping: a="<<a<<".b="<<b<<endl;
//  return 0;
// }

// Q.3check whather a character is alphabet, digit or special character
// #include<iostream>
// using namespace std;
// int main(){
//  char ch; 
//   cout<<"Enter Any Character:\n";
//   cin>>ch;
//   if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
//     cout<<ch<<"The Given Character is An Alphabet:"<<endl;
//   }else if(ch>='0'&& ch<='9'){
//    cout<<ch<<"The Given Character is a digit "<<endl;
//   } else {
//     cout<<ch<<"The Given Character is a Special Charcater:"<<endl;
//   }   
//   return 0;
// }

//Q.4 C++ Program to Reverse a Number with storing
// #include <iostream>
// using namespace std;

// int main() {
//     int n, reversed = 0, remainder;

//     cout << "Enter a number: ";
//     cin >> n;

//     while(n!=0){
//         remainder =n%10;  // Get the last digit
//         reversed = reversed*10 + remainder;
//         n =n/10;  // remove the last digit 
//     }
//       cout<<"Reversed number:"<< reversed;
//       return 0; 
//     }

//Q.5 C++ Program to Reverse a Number without storing
// #include <iostream>
// using namespace std;

// int main() {
//     int n,remainder;

//     cout << "Enter a number: ";
//     cin >> n;

//     while(n!=0){
//         remainder =n%10;  // Get the last digit
//           cout<< remainder;
//           n =n/10;  // remove the last digit 
//     }
//       return 0; 
//     }

//Q.6 c++ Program to calculate total marks, percentage and division of student
#include <iostream>
using namespace std;

int main() {
  int rollno, phy,chem,maths, total;
  float percentage;
  char name[30],
   string division;
cout<<"Enter the rollno of the student:"<<endl;
  cin>>rollno;
cout<<"Enter the Name the student:"<<endl;
  cin>>name;
  cout<<"Enter the physics,chemistry,maths marks of the student:"<<endl;
  cin>>phy>>chem>>maths;

  total = phy+chem+maths;
  percentage =total/3.0;

  if((percentage>=60)){
    cout<<"Student division:First"<<endl;   
  }else if((percentage<=60 && percentage>=48)){
    cout<<"Student division:second"<<endl;  
} else if(percentage>=33 && percentage<=48){
    cout<<"Student division:pass"<<endl;
} else {
    cout<<"Student division:failed"<<endl;
}
cout<<"ROll No:"<<rollno<<endl <<"Name of the Student:"<<name<<endl;
cout<<"Marks in Physics :"<<phy<<endl;
cout<<"Marks in Chemistry:"<<chem<<endl;
cout<<"Marks in MAths :"<<maths<<endl;
cout<<"Total marks="<<total<<endl;
cout<<"Percentage ="<<percentage<<endl;
cout<<"division:"<<division<<endl;

return 0;
}
