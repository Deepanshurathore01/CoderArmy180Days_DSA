#include<iostream>
using namespace std;

int main(){
  int day;
  cout<<"Enter a day between 1 to 7 days : ";
  cin>>day;

  if(day == 1){
    cout<<"Mon";
  }
  else if(day ==2 ){
    cout<<"Tue ";
  }
  else if(day ==3 ){
    cout<<"Wed ";
  }
  else if(day ==4 ){
    cout<<"Thu ";
  }
  else if(day ==5 ){
    cout<<"Fri ";
  }
  else if(day ==6 ){
    cout<<"Sat ";
  }
  else if(day ==7 ){
    cout<<"Sun ";
  }
 
  else{
    cout<<"Enter a valid day";
  }
}