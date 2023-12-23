#include <iostream>
#include <cmath>

using namespace std;


int main(){
    
    char op;
    double number1, number2;

    
    cout << "******************* MOE'S CALCULATOR 2023********************\n";
    cout << " Please enter the first number for your calculation.\n ";
    cin >> number1;
 
    cout << " Please select your calculator operator (+, -, *, /).\n";
    cin >> op;

    cout << " Please enter the second number for your calculation.\n ";
    cin >> number2;

    switch(op){

        case '+':
            cout << number1 << '+' << number2 << " " <<  '=' << " " << (number1 + number2) << endl;
            break;

        case '-':
            cout << number1 << '-' << number2 << " " <<  '=' << " " << (number1 - number2) << endl;
            break;

         case '*':
            cout << number1 << '*' << number2 << " " <<  '=' << " " << (number1 * number2) << endl;
            break;

        case '/':
        if(number2 != 0.0){
            cout << number1 << '/' << number2 << " " <<  '=' << " " << (number1 / number2) << endl; 
        } 
        else{
                cout << " Division by Zeor is Invalid entry";
            }

        }
    cout << "**************************************************\n";                                         
    return 0;


}