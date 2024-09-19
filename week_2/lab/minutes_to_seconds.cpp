#include <iostream>
using namespace std; 
int main() 
{
  int hour_1, minute_1, seconds_1;
  int hour_2, minute_2, seconds_2;
 
  cin >> hour_1 >> minute_1 >> seconds_1;
  cin >> hour_2 >> minute_2 >> seconds_2;
  int diff = 0; 
 
  //gets the seconds 
  if ( seconds_2 >= seconds_1) diff = seconds_2 - seconds_1;
      else {
        diff = 60 + seconds_2 - seconds_1;
         --minute_2;
      }
      
   //gets the minutes
  if ( minute_2 >= minute_1) diff = (minute_2 - minute_1) * 60 + diff;
      else {
        diff = (60 + seconds_2 - seconds_1) * 60 + diff;
        --hour_2;
      }
  
  //gets the hours in seconds
  if ( hour_2 >= hour_1 ) diff = (hour_2 - hour_1) * 3600 + diff; 
      else {
        diff = diff + (24 + hour_2 - hour_1)* 3600;
      }

  cout << diff << endl; 
  return 0; 
}


 /*if ( (hour_2 - hour_1) > 0 ) {
    diff = (hour_2 - hour_1) * 3600;
  } else {
    diff = (24 + hour_2 - hour_1) * 3600;
  }*/
  
