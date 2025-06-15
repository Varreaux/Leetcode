#include<string>
#include<vector>

using namespace std;

//basic original idea. Does not pass.

string reverseWords_1(string s) {
	int j = s.length()-1;
	string word ="";
	for(int i = s.length()-1; i >=0; i--){
		if(s[i]!=' ') continue;
		word += s.substr(i+1, j-i)+' ';
		j=i-1;
	}
	word += s.substr(0, j+1);
	return word;
}

//Accepted solutions

string reverseWords_2(string s) {
	int i = 0;
	newstart(s, i);
	int j = i;
	string news ="";
	while(true){
		endofword(s, i);
		if(i >=s.length()) break;
		news.insert(0, s.substr(j,i-j+1));
		newstart(s, i);
		j=i;

	}
	if(j < s.length())
		news.insert(0, s.substr(j,i-j)+' ');
	return news.substr(0, news.length()-1);
}

void endofword(string& s, int& i){
	while(i < s.length() && s[i]!=' ') i++;
}
void newstart(string& s, int& i){
	while(i < s.length() && s[i]==' ') i++;
}


//another accepted solution
string reverseWords_3(string s) {
	int i = s.length()-1;
	while(i > 0 && s[i]==' ') i--;
	int j = i;
	string news ="";
	while(true){
		while(i > 0 && s[i]!=' ') i--;
		if(i <= 0) break;
		news+=' '+s.substr(i+1,j-i);
		while(i > 0 && s[i]==' ') i--;
		j=i;

	}
	if(j > 0 || s[j]!=' ')
		if (s[i]==' ')
			news+=' '+s.substr(i+1,j-i);
		else
			news+=' '+s.substr(i,j-i+1);
	return news.substr(1, news.length());
}

