#include<iostream>
using namespace std;
     class MyBaseClass;
     {
           public:
           int x;
           MyBaseClass(){
         x=0;
         y=0;
         z=0;

           }
           protected:
           int y;
           private:
           int z;

 };

     void myoutsidefunction(MyBaseClass obj){

        cout<<"x :"<<obj.x<<endl;
        }
      




int main(){
  MyBaseClass obj1;
  myoutsidefunction(obj1);

    
    return 0;
}