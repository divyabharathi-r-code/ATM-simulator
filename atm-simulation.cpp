#include<iostream>
using namespace std;
int main(){
    int purpose;
    int balance = 10000;
    int withdraw;
    int deposit;
    do {
    cout<<"---------------Welcome to ATM---------------\n";
    cout<<"what's your purpose: \n";
    cout<<"VIEW BALANCE:----1\n";
    cout<<"WITHDRAW MONEY---2\n";
    cout<<"DEPOSIT MONEY----3\n";
    cout<<"EXIT-------------4\n";
    cout<<"choose one(1 - 4): \n";
    cin>>purpose;
   if (!(cin >> purpose)) {
    cout << "Invalid input! Please enter a number.\n";
    cin.clear(); // clear error state
    cin.ignore(1000, '\n'); // discard invalid input
    continue;
    }
    
    switch (purpose) {
        case 1:
          cout<<"Current Balance : \n"<<balance<<endl;
          break;
        case 2:
          cout<<"Amount willing to be withdrawn: \n";
          cin>>withdraw;
          if (withdraw>balance) {
              cout<<"Insufficient Balance\n";
          }else{
              cout<<"Amount withdrawn: "<<withdraw<<endl;
              balance = balance - withdraw;
              cout<<"Remaining Balance: "<<balance<<endl;
          }
          cout<<"--------------------------------------------\n";
          break;
        case 3:
          cout<<"Amount willing to deposit: \n";
          cin>>deposit;
          if (deposit<=0){ 
              cout<< "Deposit should be greater than 0.\n ";
          } else {
              cout<<"Deposit completed\n";
              balance = balance +deposit;
              cout<< "Remaining balance : "<< balance<<endl;
              
          }cout<<"--------------------------------------------\n";
          break;
        case 4:
              cout << "\nThank you for banking with us!\n";
              break;
        default:
          cout<<"Invalid option! Restart the program\n";
    }
    } while (purpose != 4);
       
    cout<<"Thanks for visiting our ATM. Visit Again!!";
    return 0;
}