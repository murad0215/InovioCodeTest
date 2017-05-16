#include <iostream>
#include <string>

using namespace std;


int main() {
    int flag; int asize=0,nn=0,nz=0,tn=0,tz=0,nl,zl;
    int mya[]={1,0,1,1,1,0,0,0,1};
    asize = (sizeof(mya))/4;
    if (mya[0]==1) { flag=1; }
    else { flag=0; }

    for (int i=0; i<asize; i++) {

            if (mya[i]==1){
                if (i!=8){
                    nn=nn+1;
                    nz=0;
                    if (tn<=nn) {tn=nn; nl=i-tn+1;}
                }
            }
            if (mya[i]==0){
                    nz=nz+1;
                    nn=0;
                    if (tz<=nz) {tz=nz; zl=i;}
            }
    }

    cout<<nl<<", "<<zl<<endl;
 return 0;
}
