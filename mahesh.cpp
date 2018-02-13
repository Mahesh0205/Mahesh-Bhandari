#include<iostream.h>
class Mahesh 
{
 int data;
 public:
 Mahesh()
 {
  data =10;
 }
 void get_data();
 void display();
 };
 void Mahesh:: get_data()
 {
  cout<<"Enter the data";
  cin>>data;
  }
  void Mahesh:: display()
  {
   cout<<"Data is:"<<data;
   }
   int main()
   {
    Mahesh m1;
    m1.get_data();
    m1.display();
      return 0;
      }
  
