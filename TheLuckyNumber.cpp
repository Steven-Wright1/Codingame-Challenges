#include <iostream>

using namespace std; 

int isLucky(int n){
    int contains6 = 0, contains8 = 0; 
    while (n!=0) {
        int d = n % 10; 
        if(d == 6) 
            contains6 = 1;
        if (d == 8) 
            contains8 = 1;
        n /= 10; 
    } 

    if(contains6 == contains8)
        return 0;
    return 1; 
}

int main() {

unsigned long long int L,R;
unsigned long long int count = 0; 
cin >> L >> R; 

for(int i = L; i <= R; i++){
    if(isLucky(i) == 1)
        count ++;
}

cout << count; 

}
