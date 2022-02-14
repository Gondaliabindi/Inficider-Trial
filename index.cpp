/* My first C++ program 

Run the “Hello World” Program */
/*
#include<iostream>
using namespace std;

int main(){
    cout<<"Hello world";
    return 0;
}
*/

/*Task 3: Write a program to print employee details like employee number, name, and address and phone number.

#include<iostream>
using namespace std;
int main(){
  int nu;                            /*Employee number
  cout << "Enter employee number: ";    
  cin >> nu;
  string na, ad;                         /*String variable
  cout << "Enter employee name:";
  cin >> na;
  cout << "Enter employee address:";
  cin >> ad;
  long int pnu;                          /*Phone number variable
  cout << "Enter your phone number:";
  cin >> pnu;
  cout << "Employee number is: " << nu << endl;
  cout << "Employee name is: "<< na << endl;
  cout << "Employee address is: "<< ad << endl;
  cout << "Employee phone number is: " << pnu;
  return 0;
}
*/

/*
Task 4:  Write a program to evaluate the following expressions and display their results. Input integers x, y, z from the user
a. x2 + 2x3 * (2*x)
b. x1 + y2+z3 */
/*
#include<iostream>
using namespace std;
int main(){
    int x, y, z, n1,n2;             /*Declaring variables(integer)
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;
    cout << "Enter value of z: ";
    cin >> z;
    n1 = (x*x + ((2*(x*x*x))*(2*x)));
    n2 = (x + (y*y) + (z*z*z));
    cout << "Answer for a is " << n1 << endl;     
    cout << "Answer for b is " << n2; 
    return 0;
}
*/


/*
Task 5: Convert the following steps into a C++ program
1. Start 
2. Define variables: rollno, msub1, msub2, msub3, msub4, msub5, msum, score 
3. Take input from keyboard for all the input variables 
4. Calculate the sum of marks of 5 subjects and also calculate the percentage score as: 
msum = msub1 + msub2 + msub3 + msub4 + msub5; Score = msum/500 × 100 
5. Display roll number and percentage score. 
6. Stop
*/
/*
#include<iostream>
using namespace std;
int main(){
  int rollno;
  float  msub1, msub2, msub3, msub4, msub5, msum, score;
  cout << "Enter your roll number: " ;
  cin >> rollno;
  cout << "Enter marks of 1st subject: ";
  cin >> msub1;
  cout << "Enter marks of 2nd subject: ";
  cin >> msub2;
  cout << "Enter marks of 3rd subject: ";
  cin >> msub3;
  cout << "Enter marks of 4th subject: ";
  cin >> msub4;
  cout << "Enter marks of 5th subject: ";
  cin >> msub5;
  msum = msub1 + msub2 + msub3 + msub4 + msub5;
  score = msum*100/500;
  cout << "Your Roll number is " << rollno << " and your score is " << score << "%";
  return 0;
}
*/

/*Task 7: Write a program to swap two integers with and without using temporary variables.*/
/* 
#include<iostream>
using namespace std;
int main(){
  int a1, a2, nu;
  cout << "Enter the number: ";
  cin >> nu;
  a1 = nu/10;
  a2 = nu%10;
  cout << "Swapped number is " << a2 << a1;
}
*/
/*
Create and run sample program:
 My first C++ program 

Run the “Hello World” Program

#include<iostream>
using namespace std;
int main(){
  cout << "Hello World";
}

*/


/*Task 7: Write a program to swap two integers with and without using temporary variables.*/
/*WITH */
/*
#include<iostream>
using namespace std;
int main(){
  int n1, n2, n;
  cout << "Enter value of n1: ";
  cin >> n1;
  cout << "Enter value of n2: ";
  cin >> n2; 
  n = n1;
  n1 = n2;
  n2 = n;
  cout << "n1: " << n1 << " and n2: " << n2;
  return 0;
}
*/
/*Without variable*/
/*
#include<iostream>
using namespace std;
int main(){
  int n1, n2;
  cout << "Enter value of n1: ";
  cin >> n1;
  cout << "Enter value of n2: ";
  cin >> n2;
  n1 = n1 * n2; 
  n2 = n1 / n2;
  n1 = n1 / n2;
  cout << "n1: " << n1 << " & n2: " << n2;
  return 0;
}
*/


/*Write a program to print Hello World*/
/*
#include<iostream>
using namespace std;

int main(){
  cout << "Hello World!";
  return 0;
}
*/

/*Write a program to print */
/*
#include<iostream>
using namespace std;

int main(){
  int marks, t;
  marks = 56;
  t = 45;
  cout << "Marks is " << marks;
  cout << "\nt is " << t;
  return 0;
}
*/
/*HOMEWORK QUESTION*/
/*Write an algorithm, draw flowchart and write C++ program to convert a distance entered in metres to kilometres. */
/*
#include<iostream>
using namespace std;
int main(){
  float d, km;
  cout << "Enter distance in metres: ";
  cin >> d;
  km = d / 1000;
  cout << "Distance in kilometres is " << km;
  return 0;
}
*/
/* HOMEWORK QUESTIONS 
2.  Input the basic salary of a person. Calculate the dearness allowance (DA) as 15% of the salary and house rent allowance(HRA) as 5% of the salary. After this determine the gross salary.(gross =basic+DA+HRA). */
/*
#include<iostream>
using namespace std;
int main(){
  float basic, DA, HRA, gross;
  cout << "Enter basic salary: ";
  cin >> basic;
  DA = 0.15 * basic;
  cout << "Dearness Allowance is 15% of salary: " << DA << endl;
  HRA = 0.05 * basic;
  cout << "HRA is 5% of salary: " << HRA << endl;
  gross = basic + DA + HRA;
  cout << "Gross salary: " << gross;
  return 0;
}

*/
/*
#include<iostream>
using namespace std;
int main(){
  int a, b, c;
  cout << "Enter the number: ";
  cin >> a >> b >> c;
  if (a>b){
    if (a>c){
      cout << "A is largest";
    }
    else{
      cout << "C is largest";
    }
  }
  else{
    if (b>c){
      cout << "B is largest";
    }
    else{
      cout << "C is largest";
    }
  }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
  int i;
  cout << "Enter the case value: ";
  cin >> i;
  switch (i)
  {
  case 1:
    cout << "Registeration" << endl;
    break;
  case 2:
    cout << "Helpline" << endl;
    break;
  default:
  cout << "Default" << endl;
  }
  return 0;
}
*/
/*A floor has a center wooden section of size ‘n×m’, that has to be covered with carpet. The carpet has to be stitched using square pieces of cloth of length ‘a’.
Find the minimum number of cloths that must be stitched together to cover the wooden section. The carpet may cover an additional area outside the wooden floor. The input contains 3 integers, n m a, in the respective order. 
Sample Input	1: 6 6 4
Output 1	: 4 pieces

Sample input 2  - 8 10 3
Output 2 : 12 pieces*/
/*
#include<iostream>
using namespace std;
int main(){
  int n, m, a;
  cout << "n, m, a: ";
  cin >> n >> m >> a;
  cout << "n : " <<n << endl;
  cout << "m: " << m << endl;
  cout << "a: " << a << endl;
  return 0;
}
*/

/*ARRAY 1-D*/
/*
#include<iostream>
using namespace std;
int main(){
  int n;
  int numbers[n];
  cout << "Enter the number of elements: \n";
  cin >> n;
  for (int i=0; i<n; ++i){
    cin >> numbers[i];
  }
  cout << "The numbers are: ";
  for (int i=0; i<n; ++i){
    cout << numbers[i] << " ";
  }
  return 0;
}
*/
/*2-D ARRAY*/
/*
#include<iostream>
using namespace std;

int main(){
  int a[3][3];
  int i, j;
  cout << "Enter the number of array" << endl;
  for (int i=0; i<3; i++){
    for int(j=0; j< 3; ++j){
      cout << "Enter" << i << "," << j << "\n";
      cin >> a[i][j];
    }
  }
  cout << "The array is formed " << "\n";
  for(i=0; i<3;i++){
    for(j=0; j< 3; j++){
      cout << a[i][j] << "\t";
    }
    cout << "\n";
  }
  return 0;
}

*/

/*Addition of array*/
/*
#include<iostream>
using namespace std;

int main(){
  int a[3][3];
  int i, j;
  cout << "Enter the number of array" << endl;
  for ( i=0; i<3; i++){
    for ( j=0; j< 3; ++j){
      cout << "Enter" << i << "," << j << "\n";
      cin >> a[i][j];
    }
  }
  cout << "The array is formed " << "\n";
  for(i=0; i<3;i++){
    for(j=0; j< 3; j++){
      cout << a[i][j] << "\t";
    }
    cout << "\n";
  }
  return 0;
  int b[3][3];
  int i, j;
  cout << "Enter the number of array" << endl;
  for (int i=0; i<3; i++){
    for (int j=0; j< 3; ++j){
      cout << i << "," << j << "\n";
      cin >> b[i][j];
    }
  }
  cout << "The array is formed " << "\n";
  for(i=0; i<3;i++){
    for(j=0; j< 3; j++){
      cout << b[i][j] << "\t";
    }
    cout << "\n";
  }
  int c[3][3];
  for(i=0; i<3;i++){
    for(j=0; j< 3; j++){
      c[i][j]=a[i][j]+b[i][j];
    }
  }
  for(i=0; i<3;i++){
    for (j=0; j<3; j++){
      cout << c[i][j] << "\t";
    }
  }
}
*/
/*1. Find the sum and average of all the elements.*/
/*Bindi Gondalia*/
/*
#include<iostream>
using namespace std;
int main(){
  int n, i, sum=0;
  cout << "Enter the elements of n: ";
  cin >> n;
  int arr[n];
  cout << "Elements entering the elements: " << endl;
  for (i=0; i<n; i++)
  {
    cin >> arr[i];
  }
  for (i=0; i<n; i++)
  {
    sum=sum+arr[i];
  }
  cout << "Sum: " << sum << endl;
  int avg = sum/n;
  cout << "Average: " << avg;
  return 0;
}
*/
/*2. Find highest and lowest element in an array.*/
/*Bindi Gondalia*/
/*
#include<iostream>
using namespace std;

int main(){
  int n, i=0;
  cout << "Enter the number of elements: ";
  cin >> n;
  int arr[n];
  for (i=0; i<n; i++)
  {
    cin >> arr[i];
  }
  int small=arr[0],large=arr[0];
  for (i=0; i <n; i++){
    if (small>arr[i]){
      small= arr[i];
    }
    if (large < arr[i]){
      large = arr[i];
    }
  }
  cout << "Small: " <<small << endl;
  cout << "Large: " << large << endl;
}
*/
/*3. Insert and delete an element in an array(by passing to the function)*/
/*
#include<iostream>
using namespace std;
void insertfunc(arr[n], ne, np){
  int m;
  for(m=np; m < n; m++){
    arr[m+1]=arr[m];
  }
  arr[np]= ne;
}
void deletefunc(){

}

int main(){
  int n, i=0, ne, np, choice; /*ne is new element, np is new position
  cout << "Enter the number of elements: ";
  cin >> n;
  int arr[n];
  cout << "Enter the elements:";
  for (i=0; i<n-1; i++)
  {
    cin >> arr[i];
  }
  cout << "1. Insert" << endl;
  cout << "2. Delete" << endl;
  cout << "Your choice: " << endl;
  cin  >> choice;
  if (choice == 1){
    cout << "Enter new element: " << endl;
    cin >> ne;
    cout << "Enter the position: " << endl;
    cin >> np;
    insertfunc(arr[n,ne,np]);
    for (i=0; i<n-1; i++)
    {
    cout << arr[i] << "\t";
    }
  }
  elseif(choice ==2){
    deletefunc()
  }
  else{
    cout << "Invalid input";
  }
}
*/

/*STACK*/

#include <iostream>
using namespace std;
int top=-1;
void push(int s[],int size)
{
   int x;
  if(top>=size-1){
    cout<<"Stack Overflow" << endl;
  }
  else{
    cout<<"Enter elemnt: " << endl;
    cin>>x;
    top=top+1;
    s[top]=x;
  }
}

void pop(int s[],int top){
  if(top<=-1){
    cout<<"Stack Underflow" << endl;
  }
  else{
    cout<<"Popped element is : "<<s[top] << endl;
    top=top-1;
  }
}
void peek(int s[]){
  if(top<0){
    cout<<"Stack is empty" << endl;
  }
  else{
    cout<<s[top]<<endl;
  }
}

int main(){
    int size;
    cout<<"Enter size of stack: ";
    cin>>size;
    int s[size]={0};
    int choice;
    cout<<"1. Push" << endl;
    cout<<"2. Pop" << endl;
    cout<<"3. Peek" << endl;
    cout<<"4. Quit" << endl;
    do{
      cout<<"Your choice : ";
      cin>>choice;
      switch(choice){
          case 1:
              push(s,size);
              break;
          case 2:
              pop(s,top);
              break;
          case 3:
              peek(s);
              break;
          case 4:
            cout << "Bye, See you soon.";
            break;
          default:
            cout << "Invalid input, Run your program again.";
            }
      }
      while(choice!=4);   
      return 0;
}