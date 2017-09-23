#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	list<int> l;
	list<int>::iterator i = l.begin();
	for(int j=0;j<=8;j++)
		l.push_back(j);
	/* size,front,back same as vector
	l.push_back(9);
	l.push_back(10);
	//l.sort() sorts numeric list
	//pass a comparison function as param for non numeric type lists
	list<int> list1;
  list<int> list2;
  list<int>::iterator it;

  it = list1.begin();
  ++it;   //pointing to second position           

  list1.splice(it, list2);
  /* transfer all elements of list2 at position 2 in list1 */
  /* now list1 is 1 5 6 7 8 2 3 4 and list2 is empty */
  //l.merge(l2) merges 2 sorted lists*/
	//l.sort();
  cout<<endl;
  for(i=l.begin();i!=l.end();i++)
  	cout<<*i<<" ";

	return 0;
}