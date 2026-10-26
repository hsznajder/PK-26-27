#include<iostream>
using namespace std;

int main(){
int N;
cout<<"N: ";
cin>> N ;

if (N<0) {

    cout<< "N musi być większe niż 0" <<endl; 
}
else {

    int silnia=1;
    while (N>0){

        silnia = silnia*N;
        N=N-1;

    }
    cout<< "SILNIA = " << silnia <<endl;


}

return 0;



}