#include <iostream>
#include <bits/stdc++.h>
using namespace std;    
    
int main ()
{
   /*pair<int,int> pair1, pair3;    //creats pair of integers
   pair<int,string>  pair2;  // creates pair of an integer an a string
    
   pair1 = make_pair(1, 2);    // insert 1 and 2 to the pair1
   pair2 = make_pair(1, "Studytonight") ; // insert 1 and “Nikhilesh” in pair2
   pair3 = make_pair(2, 4);
   cout<< pair1.first << endl;  // prints 1, 1 being 1st element of pair1
   cout<< pair2.second << endl;  // prints Studytonight 

   if(pair1 == pair3)
     cout<< "Pairs are equal" << endl;
   else
     cout<< "Pairs are not equal" << endl;*/
  tuple<int, int, int> tuple1;   //creates tuple of integers
   tuple<int, string, string>  tuple2;  // creates pair of an integer an 2 string
    
   tuple1 = make_tuple(1,2,3);    // insert 1, 2 and 3 to the tuple1
   tuple2 = make_pair(1,"Studytonight","Loves You");
   /* insert 1, "Studytonight" and "Loves You" in tuple2  */

   int id;
   string first_name, last_name;

   tie(id,first_name,last_name) = tuple2;
   /* ties id, first_name, last_name to 
   first, second and third element of tuple2 */

   cout << id <<" "<< first_name <<" "<< last_name;
   /* prints 1 Studytonight Loves You  */
   
   return 0;
}