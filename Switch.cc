//Uso de switch                                                                                                
//Joseph Edrei Moreno Cruz                                                                                     
//30 de octubre del 2017                                                                                       
#include <iostream>
using namespace std;
int main(){
  char variable;
  cout<<"escoge una opciòn entre A,B,C,D,F"<<endl;
  cin>>variable;

  switch(variable){
  case 'A' : cout<<"excelente"<<endl;break;
  case 'B' : cout<<"muy bien"<<endl;break;
  case 'C' : cout<<"bien"<<endl;break;
  case 'D' : cout<<"pasate"<<endl;break;
  case 'F' : cout<<"intentalo nuevamente"<<endl;break;
  default : cout<<"opciòn no valida"<<endl;
  }
return 0;
}
