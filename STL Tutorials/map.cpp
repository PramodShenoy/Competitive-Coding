#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	
	/*map<int, string> Employees;

   // 1) Assignment using array index notation
   Employees[5234] = "Mike C.";
   Employees[3374] = "Charlie M.";
   Employees[1923] = "David D.";
   Employees[7582] = "John A.";
   Employees[5328] = "Peter Q.";

   cout << "Employees[3374]=" << Employees[3374] << endl << endl;

   cout << "Map size: " << Employees.size() << endl;

   cout << endl << "Natural Order:" << endl;
   for( map<int,string>::iterator ii=Employees.begin(); ii!=Employees.end(); ++ii)
   {
       cout << (*ii).first << ": " << (*ii).second << endl;
   }

   cout << endl << "Reverse Order:" << endl;
   for( map<int,string>::reverse_iterator ii=Employees.rbegin(); ii!=Employees.rend(); ++ii)
   {
       cout << (*ii).first << ": " << (*ii).second << endl;
   }*/
	map<string, int> Employees;

   // Examples of assigning Map container contents

   // 1) Assignment using array index notation
   Employees["Mike C."] = 5234;
   Employees["Charlie M."] = 3374;

   // 2) Assignment using member function insert() and STL pair
   Employees.insert(std::pair<string,int>("David D.",1923));
 
   // 3) Assignment using member function insert() and "value_type()"
   Employees.insert(map<string,int>::value_type("John A.",7582));

   // 4) Assignment using member function insert() and "make_pair()"
   Employees.insert(std::make_pair("Peter Q.",5328));

   cout << "Map size: " << Employees.size() << endl;

   for( map<string, int>::iterator ii=Employees.begin(); ii!=Employees.end(); ++ii)
   {
       cout << (*ii).first << ": " << (*ii).second << endl;
   }
	return 0;
}