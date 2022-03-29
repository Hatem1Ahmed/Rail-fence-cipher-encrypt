// Rail-fence cipher encryption
#include <iostream>
#include <string>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   string encrypt;
   string object;
   string::iterator it; //to Traverse the string and remove spaces
   int key, x =0,y = 1,z =2 ,a=0 ,b=1, c=2, d=3;
   cout<<endl<<"enter message:";
   getline(cin >> ws,s); //after cin there is \n garbage so getline make this garbage as input so using std::ws in getline removes this garbage
   int len = s.length();
   cout<<endl<<"enter key:";
   cin>>key;
   for(int i=0;i<len;i++){
        it=remove(s.begin(),s.end(),' ');//removes all the spaces
        s.erase(it,s.end());
   }
   len = s.length();// get the new length after removes the spaces
   /*the algorithm of this code is when you enter a string
   and choose key 3 the rail fence cipher
   starts to write the char in 3 lines
   every char is down and ahead of the Previous by one step
   then starts to collect every line char
   and print the new encrypted string
   in key 3 the first line every char separated by 3 dots . . .
   so we use push_back function in empty string
   and starts to put new char in the end of the string
   starting from first char in the string
   and  then let 3 char then collect againg
   we will end the first line and starts to make the same steps
   for the rest of the lines and the key 4 lines as well
    */
   if(key == 3){
   while(true){
    encrypt.push_back(s.at(x));
    x +=4;
    if(x>=len)
        break;
   }
    while(true){
    encrypt.push_back(s.at(y)); // line 2 starts with second char then let 2 then collect againg
    y +=2;
    if(y>=len)
        break;
   }
   while(true){
    encrypt.push_back(s.at(z)); //line 3 starts with third char the let 4 then collect againg
    z +=4;
    if(z>=len)
        break;
   }
   }
   if(key == 4){
    while(true){
    encrypt.push_back(s.at(a));
    a +=6 ;
    if(a>=len)
        break;
    }
   encrypt.push_back(s.at(b));
   while(true){
    b +=4;
    if(b>=len){
        break;
    }
    encrypt.push_back(s.at(b));
    b +=2;
    if(b>=len){
        break;
    }
    encrypt.push_back(s.at(b));
    }
   encrypt.push_back(s.at(c));
   while(true){
    c +=2;
    if(c>=len){
        break;
    }
    encrypt.push_back(s.at(c));
    c +=4;
    if(c>=len){
        break;
    }
    encrypt.push_back(s.at(c));
    }
    while(true){
    encrypt.push_back(s.at(d));
    d +=6 ;
    if(d>=len)
        break;
    }
   }
   cout<<encrypt<<endl;
    return 0;
}
