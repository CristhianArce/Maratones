// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
  long A,B,C,D,E;
  while(cin>>A>>B>>C>>D>>E){
  if(A==0 && B==0 && C==0 && D==0 && E==0){
      break;
    }else{
        long r;
        r=D*B*C*D*A*E*E;
        cout<<r<<endl;
    }
  }
}
