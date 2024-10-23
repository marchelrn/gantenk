#include <iostream>
using namespace std;
int main() {
    int x , y;

    cin >> x;
    cin >> y;
    if ( x >= 0 && y >=0){
        cout << "Kuadran 1" ;
    }
    else if ( x <= 0 && y >=0){
        cout << "Kuadran 2" ;
    }
    else if ( x <= 0 && y <=0){
        cout << "Kuadran 3" ;
    }
    else{
        cout << "Kuadran 4" ;
    }
}
