//  adding two number using function    //
// #include<iostream>
// using namespace std;
// int add(int a,int b){
//     return a+b;
// }
// void welcome(){
//     cout<<"welcome to function"<<endl;
// }
// int main(){
//     int n=5;
//     int m=15;
//     welcome();
//     int sum=add(n,m);
//     cout<<"sum: "<<sum;
//     return 0;
// }

//  pass by value   //
#include<iostream>
using namespace std;
void changeValue(int z){
    z=100;  //
}
int main(){
    int a=5;
    changeValue(a); //actual
    cout<<a;
    return 0;
}


