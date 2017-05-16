#include <iostream>
#include <string>

using namespace std;

int main() {
    int temp;
    int myarray[5]={5,8,3,6,1};

    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            if (myarray[j+1]<myarray[j]){
                temp=myarray[j];
                myarray[j]=myarray[j+1];
                myarray[j+1]=temp;
            }
        }
    }

    for (int i=0; i<5; i++){
        cout<<myarray[i]<<", ";
    }
 return 0;
}
