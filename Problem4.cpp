#include <iostream>
#include <string>
#include <math.h>


using namespace std;


int main() {
    string mystr="Tell"; int mflag=0;
    //cout<<"Please Enter A String: ";
    //cin>>mystr; cout<<endl<<endl;

    int strsize=mystr.size();
    //cout<<strsize;
    for (int i=1; i<100; i++){
        if (strsize==(i*i)){
            mflag=1;
            i=100;
        }
    }
    if (mflag==1) {
        mflag=sqrt(strsize);
        //cout<<mflag;
        for(int i=0; i<strsize; i++){
            if(i%mflag==0){
                cout<<endl;
            }
            cout<<mystr.at(i);
        }
    } else{
        cout<<"This string cannot be put in a square shape"<<endl<<endl;
    }
    cout<<endl<<endl;

    //cout<<mystr.length();


 return 0;
}

