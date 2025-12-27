#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "enter choice: 1. Monday till 7. Sunday " << endl;
    int choice;
    cin >> choice;
    switch(choice){
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thurday"; 
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday"; 
            break;
        default:
            cout << "invalid choice";
    }
}