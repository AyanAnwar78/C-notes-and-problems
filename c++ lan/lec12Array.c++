//  taking input and printing in array  //
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" "<<endl;
//     }
// }

//  TRAVERSING  we take input by other method using for each loop,while loop    //
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //for loop
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     //for each loop
//     for(int ele:arr){
//         cout<<ele<<" ";
//     }
//     //while loop
//     int index=0;
//     while(index<n){
//         cout<<arr[index]<<" ";
//         index++;
//     }
// }

// traversing char input    //
// #include<iostream>
// using namespace std;
// int main(){
//     char vowels[5];
//     for(char &element:vowels){
//         cin>>element;
//     }
//     for(int idx=0;idx<5;idx++){
//         cout<<vowels[idx]<<" ";
//     }
// }

//  sum of element of array //
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum=sum+arr[i];
//     }
//     cout<<"sum: "<<sum;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"max: "<<max;
}



