#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void atm();
void creat(){
string name;
string acctype;
string accno;
string passward;
int pin;
cout<<"enter your name"<<endl;
cin>>name;
cout<<"chose account type"<<endl;
cin>>acctype;
cout<<"enter account no"<<endl;
cin>>accno;
cout<<" enter passward "<<endl;
cin>>passward;
cout<<"enter pin"<<endl;
cin>>pin;
ofstream myfile;
 myfile.open("database.txt");
myfile<<name<<","<<acctype<<","<<accno<<","<<passward<<","<<pin;
myfile.close();
system("cls");
}
void login(){
string name;
string passward;	
cout<<"enter name"<<endl;
cin>>name;
cout<<"enter passward"<<endl;
cin>>passward;	
ifstream read("database.txt");	
string line;
bool found=false;
while(getline(read,line)){
//cout<<line;	
int pos = line.find(passward);	
if(pos!= string::npos ){	
cout<<"login successfully\n";
found=true;	
atm();	
}	
}		
if(!found){
cout<<"not exit "<<endl;	
}	
}
void manue(){
cout<<"\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@ "<<endl;
cout<<"\t\t\t\t1. creat new account.   "<<endl;
cout<<"\t\t\t\t2. login your account   "<<endl;
cout<<"\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;	
int option;
cin>>option;
while(1){
switch(option){
case 1:
creat();
break;
case 2:
login();
break;
case 3:
break;	
default:
cout<<"envalid";
break;
}

}}






void atm(){
while(true){	
 cout<<"  \t\t\t\t         Manue         "<<endl;	
 cout<<"\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@ "<<endl;
 cout<<"\t\t\t\t1. check your balance   "<<endl;
 cout<<"\t\t\t\t2. Deposit your ammount "<<endl;
 cout<<"\t\t\t\t3. withdraw your ammount"<<endl;
 cout<<"\t\t\t\t4. For transation"<<endl;
 cout<<"\t\t\t\t5. For exit"<<endl;
 cout<<"\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
 cout<<"choese your option"<<endl;
 int option;
 cin>>option;
 int balance=0;
 int total;
 int deposit,withdraw;

switch(option){
case 1:
         cout<<" your balance is   "<<endl;
         cout<<balance<<" Rupees "<<endl;
         break;
        
case 2:
         cout<<" Enter your Deposit ammount \n";
         cin>>deposit;
         total=balance+deposit;
         cout<<"your deposit ammount is "<<endl;
         cout<<total<<" Rupees "<<endl;
         cout<<"total ammount is "<<total<<endl;
         break;

case 3:
        cout<<" Enter your ammount "<<endl;
        cin>>withdraw;
if(total>=withdraw){
        int a=total-withdraw;	
        cout<<"your remaing balance is "<<a;
        break;
} 
else{                 
       cout<<"Ensufficient"<<endl;
}

        break;
case 4:
	cout<<"this optionis not found";	
        break;
case 5:
       exit(1);
       break;        

default:
       cout<<"envalid option"<<endl;
       break;

}
}}
int main(){
	
manue();	
	
	
return 0;	
}	
                  







