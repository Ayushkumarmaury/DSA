#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    map<int, int>hu;
    hu[1]=2;
    hu[2]=3;
    hu[4]=3;

    // cout<<hu[4]<<endl;
    // //search
    // cout<<hu[1]<<endl;
    // cout<<hu.count(2)<<endl;
    // cout<<hu.size()<<endl;
    // hu.erase(2);
    // cout<<hu.size()<<endl;
    //iterator

    map<int, int> ::iterator it = hu.begin();

    while(it != hu.end()){
        cout<<it->first<<endl;
        cout<<it->second<<endl;
        it++;
    }

    return 0;
}