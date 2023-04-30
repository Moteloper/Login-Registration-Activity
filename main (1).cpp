#include<iostream>
#include<fstream>

int main (){
  std::string a,b,c,d;
  std::ofstream MyFile("Regestration.zip");

   
  std::cout<<" Enter your name: ";
  std::cin>>a;
  std::cout<<"Enter your Email ID id: ";
  std::cin>>b;
  std::cout<<"Enter Password: ";
  std::cin>>c;
  std::cout<<"Your name is- "<<a<<std::endl;
  std::cout<<"Your Email ID is- "<<b<<std::endl;
  std::cout<<"Your Password is- "<<c<<std::endl;

  std::cout<<"Press ok to confirm";
  std::cin>>d;

if (d == "ok")
  {
  std::cout<<"Congratulations!!! U have successfully registered";

  MyFile<<"Name = "<<a<<std::endl<<"Email id = "<<b<<std::endl<<"Password = "<<c;
    }
else
{std::cout<<" Enter your name: ";
  std::cin>>a;
  std::cout<<"Enter your Email ID id: ";
  std::cin>>b;
  std::cout<<"Enter Password: ";
  std::cin>>c;
  std::cout<<"Your name is- "<<a<<std::endl;
  std::cout<<"Your Email ID is- "<<b<<std::endl;
  std::cout<<"Your Password is- "<<c<<std::endl;
  

  std::cout<<"Press ok to confirm";
  std::cin>>d;
  }

     
  return 0;
}