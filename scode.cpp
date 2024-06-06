#include<iostream>
using namespace std;
class Account{
    protected:
    int accountNumber;
    string firstName;
    string lastName;
     string email; 
     int phoneNumber;
     string cardtype;
   double balance;
   public:
   Account(){
    }//default constructor
   Account(int accountNumber, string firstName, string lastName,string email, int phoneNumber,string cardtype,double balance): 
   accountNumber(accountNumber),  firstName(firstName),  lastName(lastName), email(email),  phoneNumber(phoneNumber), cardtype(cardtype), balance(balance){
    }//initialized parameterized constructor
 };
int main(){

    return 0;
}
