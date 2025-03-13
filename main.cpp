#include <iostream>
using namespace std;
int main (){
     char alpha;
     int i;
     // Creating A Pattern
     for(alpha='A'; alpha<='J'; alpha++) {
        for(i=1; i<=6; i++){
            cout<<alpha<<"\t";
        }
        cout<<endl;
     }
    return 0;
}