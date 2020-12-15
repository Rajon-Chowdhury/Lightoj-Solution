#include<bits/stdc++.h>
using namespace std;
int arr[1020][27]={};
void cnt(string s){
 int n=s.size();
 for(int i=0;i<n;i++){
  int d;
  d=s[i]-'a';
  arr[i][d]++;
 }

}
void print(string s){
   int n=s.size();
  cout<<s<<" ";
  for(int i=0;i<n;i++){
     int d;
     d=s[i]-'a';
     if(arr[i][d]==1){
      cout<<s[i];
      break;
     }
     cout<<s[i];
  }
}
int main()
{
     int n,i=0,c=0;
     string s;
     vector<string>str;
     while(getline(cin,s)){
       if(s.size()==0) break;
       str.push_back(s);
       cnt(s);
       c++;
     }
     for(int i=0;i<c;i++){
        print(str[i]);
        cout<<endl;
     }
}
