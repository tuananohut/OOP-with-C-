#include <iostream>
using namespace std;

class Test{
  public:
    int a, b;
    Test();
    Test(int i, int j);
    ~Test();  
    void check();
};

Test::Test(){
  cout << "no-param constructor called\n"; 
}

Test::Test(int i, int j){
  cout << "param constructor called\n"; 
  a = i;
  b = j;
}

Test::~Test(){
  cout << "destructor called\n"; 
}

void Test::check(){
  Test t; 
}

int main(){
  Test t1, t2(5, 10);
  cout << t1.a << ' ' << t1.b << endl;  
  cout << t2.a << ' ' << t2.b << endl; 
  t1.check(); 
  return 0;
}
