#include <iostream>
#include <list>

using namespace std;
void zad1 (int a,int b,int c,int d)
{
    int sum;
    sum = 0;
    list<int>numbers;
    numbers.push_front(b);
    numbers.push_front(a);
    numbers.push_back(c);
    numbers.push_back(d);
    list<int>::iterator it;
    it = numbers.begin();
    for(int i = 0;i<4;i++)
    {
        cout<<*it<<endl;
        sum = sum + *it;
        it++;
    }
    cout<<sum;



}

int main()
{
    int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;

    zad1(a,b,c,d);
    return 0;
}
