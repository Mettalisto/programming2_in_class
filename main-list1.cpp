#include <iostream>
#include <list>

using namespace std;
double zad1()
{
    list<double>nums;
    nums.push_back(2.3);
    nums.push_back(5.3);
    nums.push_front(7.3);
    nums.push_front(1.3);
    list<double>::iterator it;
    it = nums.begin();
    do
    {
        cout<<*it<<" ";
        it++;
    }while(it!=nums.end());
}

int main()
{
    zad1();
    return 0;
}
