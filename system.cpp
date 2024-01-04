#include<iostream>
#include<cstdlib>
#include<fstream>
#include<cstring>
using std::string;


class registerid{
protected:
string fname,lname,email,pass1,pass2,pass;
int age;
char a;

public:
string registers(){
std::cout<<"⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️"<<std :: endl;
std::cout<<"⬇️ REGISTER     🔈️ HERE                 ⬇️"<<std ::endl;
std::cout<<"⬇️                                      ⬇️"<<std ::endl;
std::cout<<"⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️⏩️"<<std::endl;

std:: cout<<"Firstname: " <<std :: endl;
std :: cin>>fname;
std :: cout<<"Lastname: "<<std :: endl;
std :: cin>>lname;
std:: cout<<"EMAIL:     "<<std :: endl;
std :: cin>>email;

if(a=='e'){
label:
std::cout<<"🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️"<<std :: endl;
std::cout<<"🖇️ ENTER SAME PASSWORD                 🖇️"<<std ::endl;
std::cout<<"🖇️                                     🖇️"<<std ::endl;
std::cout<<"🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️"<<std::endl;
}
std::cout<<"Enter Password :"<<std::endl;
std::cin>>pass1;
std::cout<<"Enter again :"<<std::endl;
std::cin>>pass2;
if (pass1==pass2){
pass=pass1;
std::ofstream fout("system.txt");
fout<<fname<<lname<<email<<pass;
fout.close();
}

else{
std::cout<<"Eroor**"<<std ::endl;
char a='e';
goto label;
}
return pass;
}
void changedpass(string dummy){
pass=dummy;
}

};


class loginhere: public registerid{
private:
string password;
int OTP,RANDOM;
public:
void login(string passw){
std::cout<<"🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️"<<std :: endl;
std::cout<<"🖇️ ENTER PASSWORD TO ACESS DATABASE    🖇️"<<std ::endl;
std::cout<<"🖇️                                     🖇️"<<std ::endl;
std::cout<<"🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️"<<std::endl;
std:: cout<<"PASSWORD :";
std::cin>>password;
std::cout<<pass;
system("bash database.sh");
std::ifstream fin("database.txt");
fin>>RANDOM;

std::cout<<"🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️"<<std :: endl;
std::cout<<"🖇️ TWO WAY AUTHENTICATION              🖇️"<<std ::endl;
std::cout<<"🖇️      GET OTP FROM YOUR EMAIL        🖇️"<<std ::endl;
std::cout<<"🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️"<<std::endl;
//send mail using smtp server
system("bash email.sh");
if(password==passw && RANDOM==OTP){
std::ifstream fin("system.txt");
fin>>fname>>lname>>email>>pass;
std::cout<<"databasecontent are";
std::cout<<fname<<lname<<email<<pass;
fin.close();
}
else{
std::cout<<"WRONG PASSWORD";
std::cout<<pass;
}
}
};

class changepassword: protected registerid{
private:
string newpass1,newpass2;
public:
string changepass(){
std::cout<<"🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️"<<std :: endl;
std::cout<<"🖇️ CHANGE PASSWORD HERE                🖇️"<<std ::endl;
std::cout<<"🖇️                                     🖇️"<<std ::endl;
std::cout<<"🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️"<<std::endl;
top:
std::cout<<"NEW PASSWORD :"<<std::endl;
std::cin>>newpass1;
if(pass==newpass1){
std::cout<<"OLD PASSWORD CANT BE NEW PASSWORD";
}
std::cout<<"PASS AGAIN :";
std::cin>>newpass2;

if(newpass1==newpass2){
pass=newpass1;
}
else{
std::cout<<"🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️"<<std :: endl;
std::cout<<"🖇️ ENTER SAME PASSWORD                 🖇️"<<std ::endl;
std::cout<<"🖇️                                     🖇️"<<std ::endl;
std::cout<<"🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️🖇️"<<std::endl;
goto top;
}

if(newpass1==newpass2){
return newpass1;
}
else 
return pass;
}
};

int main(void){
int n;
char c;
registerid object;
string pass1,pass2;
loginhere objects;
changepassword obj;


while(c!='y'){
std::cout<<"ENTER 1 to REGISTER 2 To LOGIN 3 TO CHANGE PASSWORD";
std::cin>>n;
switch (n){
case 1 : 
pass1=object.registers();
break;
case 2 : 
objects.login(pass2);
break;
default:
pass2=obj.changepass();
break;
}
std::cout<<"Enter 'y' to exit";
}


return 0;
}
