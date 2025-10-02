#include <iostream>
using namespace std;
int sum = 0;
int recursion(int num){
    if (num <= 1){
       return num;
    }
    else{
        return recursion(num-1)+recursion(num-2);
    }
}

int main(){
    int n= recursion(4);
cout<< n<<endl;

}