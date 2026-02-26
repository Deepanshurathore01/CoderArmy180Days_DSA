#include<bits/stdc++.h>
using namespace std;

void replaceSpaces(char sentence[]){
  int n =strlen(sentence);

  for(int i=0;i<n;i++){
    if(sentence[i] == ' '){
      sentence[i] = '@';
    }
  }
}

int main(){
  char sentence[100];
  cin.getline(sentence,50);

  replaceSpaces(sentence);
  cout<<"Sentence: "<<sentence<<endl;

}