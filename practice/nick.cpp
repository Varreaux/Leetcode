#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    vector<int> L = {6, 3, 4, 5, 1, 6, 3, 3, 4};
    string D = "ULDRULURD";

    int counter = 0, x = 0, y = 0;

    pair<int, int> curr_pair = make_pair(x, y);
    vector<pair<int, int>> coordinates = {curr_pair};

    while(counter<D.length()){
        char direction = D[counter];
        switch (direction) {
            case 'U':
                for(int i = 0; i < L[counter]; i++){
                    curr_pair.second++;
                    if(find(coordinates.begin(), coordinates.end(),curr_pair)==coordinates.end())
                        coordinates.push_back(curr_pair);
                }                
                break;
            case 'L':
                for(int i = 0; i < L[counter]; i++){
                    curr_pair.first--;
                    if(find(coordinates.begin(), coordinates.end(),curr_pair)==coordinates.end())
                        coordinates.push_back(curr_pair);
                }
                break;
            case 'D':
                for(int i = 0; i < L[counter]; i++){
                    curr_pair.second--;
                    if(find(coordinates.begin(), coordinates.end(),curr_pair)==coordinates.end())
                        coordinates.push_back(curr_pair);
                }
                break;
            case 'R':
                for(int i = 0; i < L[counter]; i++){
                    curr_pair.first++;
                    if(find(coordinates.begin(), coordinates.end(),curr_pair)==coordinates.end())
                        coordinates.push_back(curr_pair);
                }  
                break;
        }
        counter++;
    }

    int answer = 0;
    for(int i = 0; i < coordinates.size(); i++){
        curr_pair = coordinates[i];
        curr_pair.second++;
        if(find(coordinates.begin(), coordinates.end(),curr_pair)!=coordinates.end()){
            curr_pair = coordinates[i];
            curr_pair.second--;
            if(find(coordinates.begin(), coordinates.end(),curr_pair)!=coordinates.end()){
                curr_pair = coordinates[i];
                curr_pair.first++;
                if(find(coordinates.begin(), coordinates.end(),curr_pair)!=coordinates.end()){
                    curr_pair = coordinates[i];
                    curr_pair.first--;
                    if(find(coordinates.begin(), coordinates.end(),curr_pair)!=coordinates.end()){
                        if (answer == 0)
                            cout<<"\n(x, y) coordinates with + sign:"<<endl;
                        cout<<"\t"<<coordinates[i].first<<", "<<coordinates[i].second<<endl;
                        answer++;
                    }
                }
            }
        }
    }
    cout<<"The answer is: "<<answer<<endl;
}