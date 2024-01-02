#include <iostream>
#include <cmath>

using namespace std;



void Welcome(string name);
void Goodbye(string name);
void ShowMenu();


int main(){
    
    string name;
    char operation;
    double number1, number2;
    int option;
    
    
do{
    ShowMenu();
    cin >> option;
    
    cin.clear();
    fflush(stdin);
    
    switch(option){
        
        case 1: cout << "******************* MOE'S CALCULATOR APP 2023********************\n";
                cout << "Enter your first name to get started." << endl;
                cin >> name;
                cout << endl;
                Welcome(name);
                cout << "Use this format (1+1) to enter your calculations below.\n";
                cin >> number1 >> operation >> number2;
 
            switch(operation){

            case '+':
            cout << number1 << '+' << number2 << " " <<  '=' << " " << (number1 + number2) << endl;
            break;

            case '-':
            cout << number1 << '-' << number2 << " " <<  '=' << " " << (number1 - number2) << endl;
            break;

            case '*':
            cout << number1 << '*' << number2 << " " <<  '=' << " " << (number1 * number2) << endl;
            break;
         
            case '%':
            bool isNum1Int, isNum2Int;
            isNum1Int = ((int)number1 == number1);
            isNum2Int = ((int)number2 == number2);
            
            if(isNum1Int && isNum2Int){
                cout << number1 << '%' << number2 << " " <<  '=' << " " << ((int)number1 % (int)number2);
            }
            else{
                cout << "Not Valid";
            break;
            }

            case '/':
            if(number2 != 0.0){
            cout << number1 << '/' << number2 << " " <<  '=' << " " << (number1 / number2) << endl; 
            } 
            else{
                cout << " Division by Zeor is Invalid entry";
            }

            }
            cout << endl;
            Goodbye(name);
        
            cout << "**************************************************\n";
                break;
                
        case 2: 
            for(int i = 1; i <= 12; i++){
                for( int j = 1; j <= 12; j++){
                    cout << i << " * " << j << " = " << i * j << endl;
                }
                cout << "***********************************************" << endl;
            };
            break;
            
        case 3: 
            cout << "Come back soon!" << endl;
            break;
        
        default: cout << "Invalid choice" << endl;
        
    }
    
}while(option != 3);
    
return 0;


}    
    
void Welcome(string name){
    cout << "Hi " << name << "!" << endl;
    cout << "Welcome to Moe's Calculator App!" << endl;
    cout << "I can perform 5 types of calculations using these operators (+, -, *, /,%)." << endl;

}
void Goodbye(string name){
    cout << "Thanks for visiting " << name << "!" << endl;
    
}
void ShowMenu(){
    cout << "Choose your selection" << endl;
    cout << "1. Calculator App" << endl;
    cout << "2. Multiplication Table" << endl;
    cout << "3. Exit" << endl;
}
