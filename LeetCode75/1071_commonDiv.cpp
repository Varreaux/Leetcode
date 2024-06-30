#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string answer = "", smallwrd, lrgwrd;
        double min, counter = 0;
        if(str1.length() < str2.length()){
            smallwrd = str1;
            lrgwrd = str2;
            min = str1.length();
        }
        else{
            smallwrd = str2;
            lrgwrd = str1;
            min = str2.length();
        }

        double num;;
        int check_div;

        while(min != 0){
            check_div = 0;
            num = lrgwrd.length()/min;
            counter = 0;

            while(lrgwrd.substr(0+counter, min) == smallwrd.substr(0, min)){
                check_div++;
                counter += min;
            }

            int newmin = min;
            if(num != check_div)
                min--;
            else if(smallwrd.length() % newmin != 0)
                min--;
            else if(!check(smallwrd, newmin))
                min--;
            else
                break;
        }
        return smallwrd.substr(0, min);
    }

    bool check(string smallwrd , int min){
        double num;
        int check_div;
        int counter;

            num = smallwrd.length()/min;
            counter = 0;

            while(smallwrd.substr(0+counter, min) == smallwrd.substr(0, min)){
                counter += min;
            }

            if(counter == smallwrd.length())
                return true;
            else
                return false;
    }
};

int main(){

    Solution sol;
    string answer;

    answer = sol.gcdOfStrings("AAAA", "AA");

    for(char r : answer)
        cout<<r;

    return 0;
}