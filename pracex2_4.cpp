#include <iostream>
#include <cmath>

using namespace std;
double sg(double x,double y);
//Write prototype of  sg() here.

int main(){
    cout << sg(-2.5,1.1) << "\n";
    cout << sg(1,10000) << "\n";
    cout << sg(8.5,2.4) << "\n";
    cout << sg(0.1,0.0001) << "\n";
    cout << sg(10,0.007) << "\n";
    cout << sg(1,-2) << "\n";
    cout << sg(15,100) << "\n";
    cout << sg(123,5432) << "\n";
}

//Write function definition of  sg() here.
double sg(double x,double y){
int N;    
    if(x<=0||y<=0){
        return 0;
    }
    else if(x/y<=10&&y/x<=10){
        return sqrt(x*y);
    }
    else{
        return sg(x,sqrt(x*y))+sg(y,sqrt(x*y));
    }
}