//  OPERATOR    //
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"a: ";
//     cin>>a;
//     cout<<"b: ";
//     cin>>b;
//     //  Arithmatic operator //
//     cout<<"Arithmatic operator"<<endl;
//     cout<<"sum: "<<a+b<<endl;
//     cout<<"difference: "<<a-b<<endl;
//     cout<<"multiply: "<<a*b<<endl;
//     cout<<"divide: "<<a/b<<endl;
//     cout<<"modulus: "<<a%b<<endl;
//     //  Relational operator //
//     cout<<"Relational operator"<<endl;
//     cout<<(a>=b)<<endl;   // true 1
//     cout<<(a<=b)<<endl;   // false 0
//     cout<<(a!=b)<<endl;
//     cout<<(a==b)<<endl;
//     //  Logical Opearator   //
//     cout<<"Logical operator"<<endl;
//     bool c=true;
//     bool d=true;
//     bool e=false;
//     bool f=false;
//     cout<<(c&&d)<<endl;
//     cout<<(c||d)<<endl;
//     cout<<(c||e)<<endl;
//     cout<<(e&&f)<<endl;
//     cout<<(!c)<<endl;   // logical not change the bool from true to false and vice-versa
//     cout<<(!e)<<endl;
//     return 0;
// }

//  Assigment operator  //
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"a: ";
//     cin>>a;
//     cout<<"b: ";
//     cin>>b;
//     cout<<(a+=2)<<endl;
//     cout<<(b+=2)<<endl;
//     cout<<(a%=2)<<endl;
//     cout<<(b/=2)<<endl;
//     return 0;
// }

//  Bitwise operator    //
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"a: ";
//     cin>>a;
//     cout<<"b: ";
//     cin>>b;
//     cout<<(a<<1)<<endl;
//     cout<<(a>>1)<<endl;
//     cout<<(a|b)<<endl;
//     cout<<(a&b)<<endl;
//     cout<<(a^b)<<endl;
//     return 0;
// }

//  Misc operator   //
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"a: ";
//     cin>>a;
//     cout<<"b: ";
//     cin>>b;
//     cout<<sizeof(a)<<endl;
//     return 0;
// }

//  unary operator  //
#include<iostream>
using namespace std;
int main(){
    int a,b=7;
    cin>>a;
    cout<<a++;
    cout<<a++;
    cout<<++b;
    return 0;

}

