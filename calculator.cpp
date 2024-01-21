#include <iostream>
using namespace std;
int main(){
    char op;
    double num1,num2;

    cout << "enter the number : ";
    cin >> num1;
    cout<< "enter the second number : ";
    cin >> num2;
    
    cout<<"enter your option"<<endl;
    cout<<"1 for addition"<<endl;
    cout<<"2 for subtraction"<<endl;
    cout<<"3 for multiplication"<<endl;
    cout<<"4 for divison"<<endl;
    cin >> op;
    

    switch ( op ){
        case '1':
        cout << num1 << " + " << num2 << " = " << (num1 + num2);
        break;
        case '2':
        cout << num1 << " - " << num2 << " = " << (num1 - num2);
        break;
        case '3':
        cout << num1 << " * " << num2 << " = " << (num1 * num2);
        break;
        case '4':
         if( num2 != 0.0 )
           cout << num1 << " / " << num2 << " = " << (num1 / num2);
         else
           cout << op << "is an invalid operator";

    }   
    return 0;
} 
