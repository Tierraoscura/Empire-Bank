#include <iostream>
#include <conio.h>

int amount;
void withdraw(int& x){

    x-=amount;

}
void deposit(int& y){

    y+=amount;

}
int main(){

    int choice, balance=1000;
    std::cout << "~Welcome to Empire Bank~\n";
    std::cout << "Select an option.\n";
    std::cout << "1) Withdraw\n";
    std::cout << "2) Deposit Cash\n";
    std::cin >> choice;
    std::cout << "\nCurrent Balance: " << balance;
    std::cout << "\nEnter amount: ";
    std::cin >> amount;

    if(balance >= amount && amount >0){

        switch (choice){

            case 1: {

                std::cout << "\nWithdrawn " << amount << ", total balance is ";
                withdraw(balance);
                std::cout << balance;
                break;

            } case 2: {

                std::cout << "\nDeposited " << amount << ", total balance is ";
                deposit(balance);
                std::cout << balance;
                break;

            } default:
                std::cout << "Error!";
                break;

        }

    }else
    std::cout << "\n Error! Insufficient balance..";
    getch();
    return 0;

}
