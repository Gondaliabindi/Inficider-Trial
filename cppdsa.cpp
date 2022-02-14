/*1. Find maximum out of 3 numbers*/
/*
#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a>b){
        if (a>c){
            cout << a;
        }
    }
    else{
        if (b>c){
            cout << b;
        }
        else{
            cout << c;
        }
    }
}
*/

/*2. Odd even*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n%2==0){
        cout << "Even";
    }
    else{
        cout << "Odd";
    }
    return 0;
}
*/

/*3. sum of n numbers*/
/*
#include<iostream>
using namespace std;
int main(){
    int n, sum=0;
    cin >> n;
    for (int i=1; i <=n ; i++){
        sum += i;
    }
    cout << "sum: " << sum;
    return 0;
}
*/

/*4. Execute while until user enters negative value*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n>0){
        cout << n << endl;
        cin >> n;
    }
    return 0;
}
*/

/*5. Execute do-while until user enters negative value*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    do{
        cout << n << endl;
        cin >> n;

    }
    while (n > 0);
    return 0;
}
*/

/*6. skip even days and print "You can go today" odd days of the month and deduct money when on odd days*/
/*
#include<iostream>
using namespace std;
int main(){
    int pm;
    cin >> pm;
    for(int date=1; date <=30; date++){
        if (date%2==0){
            continue;
        }
        cout << date << endl;
        pm -= 100;
    }
}
*/

/*7. Print all the numbers except the numbers which are divisible by 3*/

/*8. Check whether the number is prime or non-prime number.*/

/*9. Print all the prime numbers between a & b*/

/*10. Use switch-case and print the hello in different languages.*/
/*
include<iostream>
using namespace std;
int main(){
    str a;
    switch (a)
    {
    case 'a':
        cout << "Hello";
        break;
    
    default:
        cout << "I am still learning";        
        break;
    }

}
*/
/*11. Switch-case for arithmatic operators like +, - , @, / */

/*12.   Program to print positive number entered by the user// If the user enters a negative number, it is skipped*/
/*
#include<iostream>
using namespace std;
int main(){
    int n, x;
    cout << "Enter the number of times: ";
    cin >> n;
    for(int i=1; i <=n; i++){
        cout << "Enter the number: ";
        cin >> x;
        if(x<0){
            cout << "This number is skipped and we can't display it because it is -ve" << endl;
            continue;
        }
        else{
            cout << x << endl;
        }
    }
    return 0;
}
*/

