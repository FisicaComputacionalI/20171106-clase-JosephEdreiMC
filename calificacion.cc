//Uso de switch                                                                                                
//Joseph Edrei Moreno Cruz                                                                                     
//30 de octubre del 2017                                                                                       
#include <iostream>
using namespace std;
int main(){
  int exam;
  int tareas;
  int part;
  float calf;
  cout<<"Ingrese calificacion del examen"<<endl;
  cin>>exam;
  cout<<"Ingrese calificacion de las tareas"<<endl;
  cin>>tareas;
  cout<<"Ingrese calificacion de las participaciones"<<endl;
  cin>>part;

  switch(exam){
  case 'exam<8' : calf = exam*0.7 + part*.15 + tareas*0.15;break;
  case 'exam=>8' : switch(part){
                               case 'part=0': switch(tareas){
                                                            case 'tareas=0' : calf=exam;break;
                                                            case 'tareas>0' : calf=exam*.8 + tareas*.15;break;
}
case 'part>0': switch(tareas){
case 'tareas=0' : calf=exam*0.85 + part*0.15;break;
case 'tareas>0' : calf=exam*0.7 + part*0.15 + tareas*0.15;break;
  }
}
}
if(calf>10){
calf=10;
}
cout<<calf<<endl;
return 0;
}
