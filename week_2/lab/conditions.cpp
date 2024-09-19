#include <iostream>
using namespace std;

int main() 
{
  int age = 22;
  bool is_student = false; 
  
  if (age < 18 ) cout << "This person is underage" << endl;
  if (age > 18 && is_student) cout << "This person is a student" << endl;
  if (age > 18 && age < 22 && !is_student) cout << "This person must go to the army" << endl;
  if (age >= 22 && !is_student) cout << "This person just graduated" << endl;
  
  /*if (18 < 7) cout << "false" << endl;
      else cout << ! (18 < 7) << endl; */
}
