#include <iostream>
using namespace std;
int main(){
  int n1=0,n2=1,n3,i,serie;
  cout <<"numero di serie: ";
  cin>> serie;
  
  
  if (serie>=2){
      cout<<n1 <<" "<< n2 << " ";
  for(i=2;i<serie;++i)
  {
  n3=n1+n2;
  cout<<n3 <<" ";
  n1=n2;
  n2=n3;
  }
   }
 else{
     cout << "errore";
 }
 return 0;
}
