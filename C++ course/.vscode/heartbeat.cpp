#include<iostream>
#include<windows.h>
using namespace std;
void heart_dark()
{
cout<<"\t.................................................................................................................................."<<endl;
cout<<"\t..............................................................$$$$$..............$$$$$$$$........................................."<<endl;
cout<<"\t.............................................................$$$$$$$............$$$$$$$$$$$......................................."<<endl;
cout<<"\t..................................SHOOTING STAR............$$$$$$$$$$$.........$$$$$$$$$$$$$......................................"<<endl;
cout<<"\t..........................................................$$$$$$$$$$$$$.......$$$$$$$$$$$$$$$....................................."<<endl;
cout<<"\t.........................................................$$$$$$$$$$$$$$$$.....$$$$$$$$$$$$$$$$$...................................."<<endl;
cout<<"\t........................................................$$$$$$$$$$$$$$$$$$...$$$$$$$$$$$$$$$$$$$...........HYEJIN SONG............."<<endl;
cout<<"\t.........................................................$$$$$$$$$$$$$$$$$$.$$$$$$$$$$$$$$$$$$$...................................."<<endl;
cout<<"\t...........................................................$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$......................................"<<endl;
cout<<"\t............................................................$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$......................................."<<endl;
cout<<"\t..............................................................$$$$$$$$$$$$$$$$$$$$$$$$$$$$$........................................"<<endl;
cout<<"\t................................................................$$$$$$$$$$$$$$$$$$$$$$$$$$........................................."<<endl;
cout<<"\t..................................................................$$$$$$$$$$$$$$$$$$$$$$$.........................................."<<endl;
cout<<"\t...................................................................$$$$$$$$$$$$$$$$$$$$$..........................................."<<endl;
cout<<"\t.....................................................................$$$$$$$$$$$$$$$$$..............SHOOTING STAR................."<<endl;
cout<<"\t.......................................HYEJIN SONG....................$$$$$$$$$$$$$$$............................................."<<endl;
cout<<"\t.........................................................................$$$$$$$$$$$..............................................."<<endl;
cout<<"\t..........................................................................$$$$$$$$$................................................"<<endl;
cout<<"\t...........................................................................$$$$$$$................................................."<<endl;
cout<<"\t............................................................................$$$$$.................................................."<<endl;
cout<<"\t.............................................................................$$$..................................................."<<endl;
}

void heart_light(){

cout<<"\t.............................................................!!!!!!!!!!...........!!!!!!!!!!!!!......................................."<<endl;
cout<<"\t...............................SHOOTING STAR...............!!!!!!!!!!!!!!.......!!!!!!!!!!!!!!!!!....................................."<<endl;
cout<<"\t.........................................................!!!!!!!!!!!!!!!!!!...!!!!!!!!!!!!!!!!!!!!!..................................."<<endl;
cout<<"\t........................................................!!!!!!!!!!!!!!!!!!!...!!!!!!!!!!!!!!!!!!!!!!................HYEJIN SONG......."<<endl;
cout<<"\t.........................................................!!!!!!!!!!!!!!!!!!!..!!!!!!!!!!!!!!!!!!!!!..................................."<<endl;
cout<<"\t...........................................................!!!!!!!!!!!!!!!!!!.!!!!!!!!!!!!!!!!!!!....................................."<<endl;
cout<<"\t.............................................................!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!......................................."<<endl;
cout<<"\t...............................................................!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!........................................."<<endl;
cout<<"\t.................................................................!!!!!!!!!!!!!!!!!!!!!!!!!!..........................................."<<endl;
cout<<"\t...................................................................!!!!!!!!!!!!!!!!!!!!!!............................................."<<endl;
cout<<"\t.....................................................................!!!!!!!!!!!!!!!!!!..............................................."<<endl;
cout<<"\t.......................................................................!!!!!!!!!!!!!!................SHOOTING STAR...................."<<endl;
cout<<"\t.........................................................................!!!!!!!!!!..................................................."<<endl;
cout<<"\t................................HYEJIN SONG................................!!!!!!....................................................."<<endl;
cout<<"\t.............................................................................!!......................................................."<<endl;
cout<<"\t......................................................................................................................................"<<endl;
}

int main()
{ long long int x = 0;
while(x!=100){
     heart_dark();
    system ("color c");
    Sleep(300);
    system("cls");
    heart_light();
    Sleep(300);
    system("cls");
        
           x++;

}

}
