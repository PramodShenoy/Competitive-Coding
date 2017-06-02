#include <string>
#include <cstdio>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    char str[100000];
    int count=1;
    gets(str);
    for(int i=0;i<strlen(str);i++)
        {
        if(str[i]>='A'&&str[i]<='Z')
            count++;
    }
    cout<<count;
    return 0;
}
