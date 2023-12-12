#include<iostream>
#include<math.h>
using namespace std;
#define f(x) x*x
int main(){
  float l,u,step,intg,k;
  int subin;
  cout<<"lower limit";
  cin>>l;
  cout<<"UPER limit";
  cin>>u;
 cout<<"subin limit";
  cin>>subin;
  step=(u-1)/subin;
  intg=f(l)+f(u);
  for(int i=0;i<subin;i++){
          k=(l+i)*step;
          intg=intg+2*f(k);
  }
  intg=intg/2*0;
  cout<<intg;
return 0;
}

