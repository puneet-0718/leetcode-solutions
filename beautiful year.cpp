#include <iostream>
using namespace std;
int main(){
    // extract all four digits by divison(/)and modulo(%) operator
    // check if all four digits are distinct from one another
    // if they are distinct then print that year and end program but if not distinct increment the year by 1 nad print that year
    int y;
    cin>>y;
while (true) {
    y++;
    int a = y/1000;
    int b = (y/100)%10;
    int c = (y/10)%10;
    int d = y%10;

    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
        cout << y;
        return 0;
    }
}
}