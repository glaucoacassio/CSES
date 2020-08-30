#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>
#include <map>
#include <set>
#include <string>
#include <cstring>
#include <cstdio>
#include <stack>
#include <string.h>
#include <queue>
#include <iomanip>
#include <math.h>
#include <utility>
#include <sstream>
#include <cstdlib>
#include <fstream>
#include <climits>
#include <unordered_map>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define SQ(a) (a) * (a)
using namespace std;

string getPalindromo(string str)
{
    unordered_map<char, int> umap;
    for (int i = 0; i < str.length(); i++)
        umap[str[i]]++;
    
    int countOdd = 0;
    char charOdd;
    for (auto x : umap)
    {
        if (x.second % 2 != 0)
        {
            countOdd++;
            charOdd = x.first;
        }
    }

    if (countOdd > 1 || countOdd == 1 && str.length() % 2 == 0)
        return "NO SOLUTION";

    string firstHalf = "", secondHalf = "";
    for(auto x : umap)
    {
        string s(x.second/2, x.first);
        firstHalf = firstHalf + s;
        secondHalf = s + secondHalf;
    }
    
    return (countOdd == 1) ? 
           (firstHalf + charOdd + secondHalf) : 
           (firstHalf + secondHalf);
}

int main()
{
	  ios::sync_with_stdio(false);
	  cin.tie(0);
    string s;

    getline(cin, s);
    cout << getPalindromo(s) << endl;

    return 0;
}
