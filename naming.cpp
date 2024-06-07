#include<iostream>
#include<string>

using namespace std;

string change (string title);

int main (){

    string str = "648. Replace Words";
    string answer = change(str);

    cout<<answer<<endl<<endl;
    
    cout<<"#include<iostream>"<<endl;
    cout<<"#include<string>"<<endl;
    cout<<"#include<vector>"<<endl;
    cout<<"#include<unordered_map>"<<endl<<endl;
    cout<<"Using namespace std;"<<endl;
    cout<<endl<<endl;
    cout<<"int main () {"<<endl;
    cout<<"\tSolution sol;"<<endl<<endl;
    cout<<"\treturn 0;"<<endl;
    cout<<"}"<<endl;
}

string change (string title){
    bool done = false;
    for(int i = 0; i < title.length()-1; i++){
        if(title[i] == '.')
            title[i]='_';
        if(title[i]== ' ')
            title.erase(i, 1);
        if(title[i]<91 && title[i]>64 && !done){
            title[i] = title[i] + 32;
            done = true;
        }
    }
    return title;
}