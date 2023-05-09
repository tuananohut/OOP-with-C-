#include <iostream>
using namespace std;

int abs(int a);
double abs(double a);
void abs(int a, int b);

int main(){
    
    int i = -100;
    double j = 1.2345;
    
    cout << abs(i) << ' ';
    cout << abs(j) << ' ';
    abs(i, 30);
    return 0;
    
}

int abs(int a){
    
    if(a < 0)
        return -a;
        
    else 
        return a;
        
}

double abs(double a){
    
    if(a < 0)
        return -a;
        
    else
        return a;
        
}

void abs(int a, int b){
    
    int sum;
    
    sum = a + b;
    if(sum < 0)
        cout << -sum << endl;
    else
        cout << sum << endl;
    
}
    
