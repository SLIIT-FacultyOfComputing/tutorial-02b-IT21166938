#include<iostream>
int main(void)
{
  double salary, netSalary;
  int etype, otHrs, otRate;
  std::cout<<"Enter employee type:";
  std::cin>>etype;
  std::cout<<"Enter salary;";
  std::cin>>salary;
  std::cout<<"enter OtHrs:";
  std::cin>>otHrs;

  switch (etype) {
      case 1 ;cout<<"1000"<<endl;
          break;
      case 2 ;cout<<"1500"<<endl;
          break;
      default ;
          cout<<"1700"<<endl;
          break;
    }
  netSalary = salary + otHrs* otRate;
  std::cout<<"Net salary is:"<<netSalary;
  
   return 0;
}
    
  /*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <stdio.h>
int main()
{
   double salary, netSalary;
   int etype, otHrs, otRate;
   printf("Enter Employee Type : ");
   scanf("%d", &etype);
   printf("Enter Salary  : ");
   scanf("%f", &salary);
   printf("Enter OtHrs : ");
   scanf("%d", &otHrs); 
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + otHrs* otRate;
   printf("Net Salary is %f ", netSalary);
  
   return 0;
}
