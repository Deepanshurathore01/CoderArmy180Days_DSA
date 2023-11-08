#include<iostream>
using namespace std;

 string defangIPaddr(string address) {
        int index =0;
        string ans ="";

        while(index <address.size()){
            if(address[index] == '.')
            ans +="[.]";
            else
            ans +=address[index];

            index++;
        }
        return ans;
    }