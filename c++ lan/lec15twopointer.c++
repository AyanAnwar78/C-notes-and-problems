// sorting zero and one  //
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,0,0,1,1,1,0,0,1,0};
//     int count=0;
//     for(int i=0;i<10;i++){
//         if(arr[i]==0){
//             count++;
//         }
//     }
//     for(int i=0;i<10;i++){
//         if(i<count){
//             cout<<"0 ";
//         }else cout<<"1 ";
//     }
//     return 0;
// }

//  sorting 0 and 1 //
// #include<iostream>
// #include<vector>
// using namespace std;
// void sortzeroandone(vector<int>&v){
//     int zeroes_count=0;
//     for(int ele:v){
//         if(ele==0){
//             zeroes_count++;
//         }
//     }
//     for(int i=0;i<v.size();i++){
//         if(i<zeroes_count){
//             v[i]=0;
//         }else v[i]=1;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     //vector//
//     vector<int>v;
//     for(int i=0;i<n;i++){
//         int ele;cin>>ele;
//         v.push_back(ele);
//     }
//     //calling fuction
//     sortzeroandone(v);
//     //printing array
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }




