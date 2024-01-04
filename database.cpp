#include<iostream>
#include<fstream>
class helloworld{
private:
int x;
public:
void getdata(){
std::cout<<"ENTER";
std::cin>>x;
}
};

int main(void){
helloworld obj;
obj.getdata();
std::ofstream fout("databases.txt");
fout.write((char*)&obj,sizeof(obj));
fout.close();
return 0;
}
