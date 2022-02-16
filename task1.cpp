#include <iostream>
using namespace std;
int top=-1;
void push(int S[],int size)
{
 int x;
 if(top>=size-1)
 cout<<"Stack Overflow\n";
 else
 {
 cout<<"Element:\n";
 cin>>x;
 top++;
 S[top]=x;
 }
}
void pop(int S[],int size)
{
 if(top<=-1)
 cout<<"Stack Underflow\n";
 else
 {
 cout<<"The element popped is :\n"<<S[top]<<endl;
 top--;
 }
}
void peek(int S[],int size)
{
 cout<<S[top]<<endl;
}
void display(int S[],int size)
{
 if(top>=0)
 {
 cout<<"Stack elements are :\n";
 for(int i=top; i>=0;i--)
 cout<<S[i]<<" ";

 cout<<endl;
 }
}
int main()
{
 int choice, size;
 cout<<"Enter the size of stack :\n";
 cin>>size;
 int S[size];
 cout<<"1. Push" << endl;
 cout<<"2. Pop" << endl;
 cout<<"3. Peek" << endl;
 cout<<"4. Quit" << endl;
 do
 {
 cout<<"Enter choice: "<<endl;
 cin>>choice;
 switch(choice)
 {
 case 1:
 push(S,size);
 break;
 case 2:
 pop(S, size);
 break;
 case 3:
 peek(S, size);
 break;
 case 4:
 cout << "Bye! See you soon";
 break;
 default :
 cout<<"Invalid choice";
 }
 }while(choice!=4);
 return 0;
}
