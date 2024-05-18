//write every character of sentence i love candies take input from user
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string sentence;
    cout<<"Please enter the sentence\n";
    getline(cin,sentence);
    cout<<"Sentence = "<<sentence<<endl;
    for(int i=0;i<=sentence.length();i++){
        cout<<sentence[i]<<endl;
    }
return 0;
}