#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  // // create and declare a vector
     vector<int> v;
     vector<int>v1 (5,1);
    //  size and capacity 
    cout<<"Size of v : "<<v.size()<<endl;
    cout<<"Capacity of v : "<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(2);
    v.push_back(4);
    cout<<"Size of v : "<<v.size()<<endl;
    cout<<"Capacity of v : "<<v.capacity()<<endl;
    // update value 
    v[1] =5;
    cout<<"Size of v1 : "<<v1.size()<<endl;
    cout<<"Capacity of v1 : "<<v1.capacity()<<endl;
    v1.push_back(4);
    cout<<"Size of v : "<<v1.size()<<endl;
    cout<<"Capacity of v : "<<v1.capacity()<<endl;

    vector<int>v3 ={1,2,3,4,5};
    cout<<"Size of v3 : "<<v3.size()<<endl;
    cout<<"Capacity of v3 : "<<v3.capacity()<<endl;

  // Delete value from vector 
  vector<int> vnew;
  vnew.push_back(39);
  vnew.push_back(41);
  vnew.push_back(40);
  vnew.push_back(42);
  vnew.push_back(48);
  vnew.pop_back();
  cout<<"Size of vnew : "<<vnew.size()<<endl;
    cout<<"Capacity of vnew : "<<vnew.capacity()<<endl;

    // remove any midle value 
    vnew.erase(vnew.begin()+1);
    vnew.insert(vnew.begin()+1,50);
    vnew[1] =37;
    vnew.clear();
       cout<<"Size of vnew : "<<vnew.size()<<endl;
    cout<<"Capacity of vnew : "<<vnew.capacity()<<endl;
    for(int i=0; i<vnew.size(); i++)
    {
      cout<<vnew[i]<<" ";
    }

  vector<int> arr;
  arr.push_back(2);
  arr.push_back(12);
  arr.push_back(21);
  arr.push_back(122);
  cout<<arr[0]<<endl;
  cout<<arr.front()<<endl;
  cout<<arr[arr.size()-1]<<endl;
  cout<<arr.back()<<endl;

  // copy value of 1 vector to another vector 
  vector<int> a;
  a=arr;
  cout<<a.size()<<endl;
for(auto i:a){
  cout<<i<<" ";
}

// sort the array 
vector<int> ans;
ans.push_back(5);
ans.push_back(54);
ans.push_back(125);
ans.push_back(3);
ans.push_back(9);

// i want to sort it in increasing order
sort(ans.begin(),ans.end());
for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";
cout<<endl;
// i want to sort it in decreasing order
sort(ans.rbegin(),ans.rend());
for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";

// search in binary search
cout<<binary_search(ans.begin(),ans.end(),56)<<endl;
cout<<find(ans.begin(),ans.end(),9)-ans.begin()<<endl;

}