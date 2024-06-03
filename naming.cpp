#include<iostream>
#include<string>

using namespace std;

string change (string title);

int main (){

    string str = "11. Container With Most Water";
    string answer = change(str);

    cout<<answer<<endl<<endl;
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