#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void atm(){
 cout<<"  \t\t\t\t         Manue         "<<endl;	
 cout<<"\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@ "<<endl;
 cout<<"\t\t\t\t1. ceeat new account.   "<<endl;
 cout<<"\t\t\t\t2. login your account   "<<endl;
 cout<<"\t\t\t\t3. check your balance   "<<endl;
 cout<<"\t\t\t\t4. Deposit your ammount "<<endl;
 cout<<"\t\t\t\t5. withdraw your ammount"<<endl;
 cout<<"\t\t\t\t6. For transation"<<endl;
 cout<<"\t\t\t\t7. For exit"<<endl;
 cout<<"\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;

}
void resgester(){
	
             string name;
             cout<<"enter name"<<endl;
             cin>>name;
             string passward;
             cout<<"enter passwrd"<<endl;
             cin>>passward;
             string accountno;
             cout<<"enter acc no";
             cin>>accountno;
             ofstream reg("database.txt");
             reg<<name<<passward<<endl;
             reg.close();
             system("cls");
             cout<<"chose option 2 for login"<<endl;
}
void login(){
	resgester();
            string  name1;
            cout<<"enter your name"<<endl;
            cin>>name1;
            cout<<"enter your passward"<<endl;	
            string passward1;	
            cin>>passward1;
			cout<<"login successfully"<<endl; 

}			
  

int main(){	
                  int option;
                  int balance=0;
                  int deposit,withdraw;
while(1){
atm();{ 
              cout<<"\t\t\t\tchose your option"<<endl;
              cin>>option;
}
switch(option){
case 1:
            resgester();
            break;
case 2:
login();{
         
         break;

case 3:
         cout<<" your balance is   "<<endl;
         cout<<balance<<" Rupees "<<endl;
         break;
         system("cls");

case 4:
         cout<<" Enter your Deposit ammount \n";
         cin>>deposit;
         balance=balance+deposit;
         cout<<"your deposit ammount is "<<endl;
         cout<<balance<<" Rupees "<<endl;
         cout<<"total ammount is "<<balance<<endl;
         break;

case 5:
        cout<<" Enter your ammount "<<endl;
        cin>>withdraw;
if(balance>=withdraw){
        balance=balance-withdraw;	
        cout<<"your remaing balance is "<<balance;
} 
else{                 
        cout<<"Ensufficient"<<endl;
       
}
        break;
case 6:
	cout<<"this optionis not found";	
        break;
case 7:
       exit(1);
       break;        

default:
       cout<<"envalid option"<<endl;
       break;

}
}}}


