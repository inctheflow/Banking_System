//*Simple Bank System
//Concepts Covered: Functions, loops, conditionals, user input, variables.
//Description: Create a simple banking system where users can check their balance, deposit, and withdraw money. Ensure that the user can only withdraw what’s available in their balance.
///Extension: Implement multiple accounts using a structure or class.



#include<iostream>
void checkBalance(float balance);
void depositMoney(float &balance);
void withdrawMoney(float &balance);
int main(){
    std::cout << "Welcome!!";
    float balance = 0.0;
    int choice;
    do{
    std::cout << "\nPlease choose an option:\n";
    std::cout << "1. Check Balance\n";
    std::cout << "2. Deposit Money\n";
    std::cout << "3. Withdraw Money\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter choice: ";
    std::cin >> choice;
    
    switch(choice){
        case 1:
        checkBalance(balance);
        break;
        case 2:
        depositMoney(balance);
        break;
        case 3:
        withdrawMoney(balance);
        break;
        case 4:
        std::cout << "Thank for using BANK";
        break;
        default:
        std::cout << "Please enter a valid entry!! Try again";
    }
    }while(choice != 4);
}

void checkBalance(float balance){
    std::cout << "Your current balance is " << balance <<"/n";
}

void depositMoney(float &balance){
    float deposit;
    std::cout << "Enter the amount you want to deposit: ";
    std::cin >> deposit;
    balance += deposit;
    std::cout << deposit << "is deposited in your account. Your new balance is " << balance;
}

void withdrawMoney(float &balance){
    float withdraw;
    std::cout << "Enter the amount you want to withdraw: ";
    std::cin >> withdraw;
    if (withdraw >= balance){
        balance -= withdraw;
        std::cout << withdraw << "is withdrawn from your account. Your new balance is " << balance;
    }
}




