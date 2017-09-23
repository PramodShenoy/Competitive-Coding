#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> v(4,0);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	//0 0 0 0 1 2 3
	//insert func inserts in pos j
	//j should be of type vector<int>::iterator
	vector<int>::iterator j = v.begin();
	j=j+1;
	v.insert(j,10);
	//0 10 0 0 0 1 2 3
	v.pop_back();
	//0 10 0 0 0 1 2
	j++;
	//erase deletes element at iterator position j
	v.erase(j);
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	//0 10 0 0 1 2
	//v1.swap(v2) swaps values of vector elements
	//v.clear() deletes all elements of the vector
	cout<<endl<<v.at(4);
	// v.front() and v.back() returns end elements of vector
	return 0;

}