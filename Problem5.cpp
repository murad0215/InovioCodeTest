#include <iostream>
#include <string>

using namespace std;


int main() {
    int mys=6;
    int mya[mys][mys]; //mya[0]=1; //mya[1]=1;
    for (int i=0; i<mys; i++) {
        for (int j=0; j<mys; j++) {
            mya[i][j]=0;
        }
    }
    //int asz = sizeof(mya)/4;
    //cout<<asz<<endl;
    for (int i=0;i<mys;i++) {
            //mya[i]=mya[0];
        for (int j=0; j<i; j++){
            if (i==0 || j==0) {
                mya[i][j]=1;
            } else {
                mya[i][j]= (mya[i-1][j-1])+(mya[i-1][j]);
            }
            cout<<mya[i][j]<<" ";
        }
        cout<<endl;
    }


        //for (int j=0; j<=i; j++){
        //    cout<<mya[j]<<" ";
        //}
        cout<<endl;



 return 0;
}


