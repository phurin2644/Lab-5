#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int N;
    int x = 0;
    int y = 0;

    cout << "Enter an integer: ";
    cin >> N;//Take Input
    while(N != 0){
        if(N%2 == 0){//Check Even or Odd
            x++;
        }else{
            y++;
        }
        cout << "Enter an integer: ";
        cin >> N;
    }
    cout << "#Even numbers = ";
    cout << x << endl;
    cout << "#Odd numbers = ";
    cout << y;
    
    return 0;
}
