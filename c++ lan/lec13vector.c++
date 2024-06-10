// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     cout<<"size: "<<v.size()<<endl;
//     cout<<"capacity: "<<v.capacity()<<endl;
//  //
//     v.push_back(1);
//     cout<<"size: "<<v.size()<<endl;
//     cout<<"capacity: "<<v.capacity()<<endl;
//  //
//     v.push_back(2);
//     cout<<"size: "<<v.size()<<endl;
//     cout<<"capacity: "<<v.capacity()<<endl;
//  //
//     v.push_back(3);
//     cout<<"size: "<<v.size()<<endl;
//     cout<<"capacity: "<<v.capacity()<<endl;
//  //
//     v.resize(5);
//     cout<<"size: "<<v.size()<<endl;
//     cout<<"capacity: "<<v.capacity()<<endl;
//  //
//     return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     //  for loop
//     for(int i=0;i<5;i++){
//         int element;
//         cin>>element;
//         v.push_back(element);
//     }
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     v.insert(v.begin()+2,6);

//     //for each loop
//     for(int ele:v){
//         cout<<ele<<" ";
//     }
//     cout<<endl;

//     v.erase(v.end()-2);

//     //while loop
//     int idx=0;
//     while(idx<v.size()){
//         cout<<v[idx++]<<" ";
//     }
//     return 0;
// }



//  find the last occurence of an element x in a given array   //

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(6);
//     for(int i=0;i<6;i++){
//         cin>>v[i];
//     }
//     cout<<"enter x: ";
//     int x;
//     cin>>x;

//     int occurence=-1;

//     for(int i=0;i<v.size();i++){
//         if (v[i]==x){
//             occurence=i;
//         }
//     }

//     cout<<"occurence: "<<occurence<<endl;

//     // for loop in reverse order //
//     for(int i=v.size()-1;i>=0;i--){
//         if (v[i]==x){
//             occurence=i;
//             break;
//         }
//     }

//     cout<<"occurence: "<<occurence;
//     return 0;
// }



//  count the occurence of element in a given array  //
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(6);
//     for(int i=0;i<6;i++){
//         cin>>v[i];
//     }
//     cout<<"enter x: ";
//     int x;
//     cin>>x;

//     int occurence=0;

//     for(int i=0;i<v.size();i++){
//         if (v[i]==x){
//             occurence++;
//         }
//     }

//     cout<<"occurence: "<<occurence;
//     return 0;
// }




//  check the array is sorted or not    //
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int count=0;
//     for(int i=0;i<n;i++){
//         if (v[i]<v[i+1]){
//             count++;
//         }
//     }
//     if(count==n){
//         cout<<"sorted";
//     }else cout<<"not sorted";
//     return 0;
// }

//  //  or  //  //

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        if (v[i]<=v[i-1]){
            flag=false;
        }
    }
    cout<<flag<<endl;
    return 0;
}





