
#include<iostream>
using namespace std;

int main()
{
  int arr1[3][4] ={1,2,3,4,5,6,7,8,9,10,11,12};
  int arr2[3][4] ={0,5,2,3,51,7,8,9,3,6,9,3};
  int ans[3][4];
int x =7;
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      ans[i][j] = arr1[i][j] - arr2[i][j];
    }
 }
//  print the ans
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
     cout<<ans[i][j]<<" ";
          }
          cout<<endl;
 }



  return 0;
}


