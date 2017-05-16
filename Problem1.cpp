//#include <iostream>
//#include <string>
#include <bits/stdc++.h>

using namespace std;

int main(){

    string myarr="JANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC";
    string uop;
    int mymonth, myyear, uin,mystart,mystop;
    cout<<"Enter enter the number: ";
    cin>>uin;
    myyear= uin/100;
    mymonth=uin-(myyear*100);
    mystart=3*(mymonth-1);
    mystop=(3*mymonth);

    for(int i=mystart; i<mystop; i++){
        uop=uop+myarr.at(i);
    }
    mymonth=myyear/100;
    myyear=myyear - (mymonth*100);

    cout<<uop<<myyear;

 return 0;
}
