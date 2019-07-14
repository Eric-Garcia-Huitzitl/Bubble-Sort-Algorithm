#include <iostream> 
using namespace std; 

typedef int Type;



int main(){

  Type array[5]={3,9,4,5,1};
  int i = 0,j = 0,aux = 0; 
  for(i = 0; i<5; i++){
    cout <<"hola"<<endl; 
    for(j = i+1; j<5; j++){
      if(array[i]>array[j]){
	cout<<array[i]<<" es mayor que "<<array[j]<<endl; 
	aux=array[j];
	array[j]=array[i];
	array[i]=aux; 
      }else{} 
    }

  }
  

  for(int i = 0; i < 5; i++){
    cout <<array[i]<<" --"; 
  }
  
cout << "array to 100 elements"<<endl; 
return 0;
}
