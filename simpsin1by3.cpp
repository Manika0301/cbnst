#include<iostream>
#include<math.h>
using namespace std;
#define f(x) x*x
int main(){
  float l,u,step,intg,k;
  int subin;
  cout<<"lower limit";
  cin>>l;
  cout<<"UPpER limit";
  cin>>u;
 cout<<"subin limit";
  cin>>subin;
  step=(u-1)/subin;
  intg=f(l)+f(u);
  for(int i=0;i<subin;i++){
          k=(l+i)*step;
          if(i%2==0)
          intg=intg+2*f(k);
          else
          intg=intg+4*f(k);
  }
  intg=intg/3.0;
  cout<<intg;
return 0;
}
