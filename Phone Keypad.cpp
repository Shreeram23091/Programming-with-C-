// Online C++ compiler to run C++ program online
//phone keypad problem
#include <iostream>
using namespace std;
#include<bits/stdc++.h>
void gen(int index,string input,string output,string map[]){
    if(index==input.size()){
        cout<<output<<endl;
        return;
    }
    int x=input[index]-'0';
    string val=map[x];
    if(val.size()==0)
    gen(index+1,input,output,map);
    else{
        for(int i=0;i<val.size();i++)
        gen(index+1,input,output+val[i],map);
    }
}
int main() {
  string map[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
  string input;
  cout<<"Enter input : ";
  cin>>input;
  string output;
  gen(0,input,output,map);
  

    return 0;
}
//time complexity = O(m^n)
//n' as the length of the input sequence.
//'m' as the maximum number of letters associated with any digit (e.g., for '7' and '9', which have 4 letters each in the English alphabet).
