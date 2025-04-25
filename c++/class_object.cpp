#include<iostream>
using namespace std;


    class car
    {
        public:
        string brand="audi";
        string model="A8";
        string color="white";
        float price=23.34532;
    };

    int main()
    {
        car c1;
        cout<<c1.brand<<endl;
        cout<<c1.model<<endl;
        cout<<c1.color<<endl;
        cout<<c1.price<<endl;
    }

