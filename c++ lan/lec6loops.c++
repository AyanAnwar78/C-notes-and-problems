//  while loop  //
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number n: ";
//     cin>>n;
//     int i=1;
//     while(i<n){
//         cout<<i<<endl;
//         i++;
//     }
//     return 0;
// }

//  sum of number between 1 to n using while loop //
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     int sum=0;
//     int i=1;
//     while(i<=n){
//         sum=sum+i;
//         i++;
//     }
//     cout<<"sum: "<<sum;
//     return 0;
// }

//  sum of number between 1 to n using for loop //
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     cout<<"sum: "<<sum;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int i=1;
    int count=0;
    while(i>1){
        if(i%5==0 && i%7==0){
            count++;
            cout<<i;
        }
        i++;
        if(count=5) break;
    }
    return 0;
}






