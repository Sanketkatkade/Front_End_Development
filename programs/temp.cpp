#include<iostream>
#include <chrono>
using namespace std;

const int pass = 0;

int main(){
    auto start = chrono::steady_clock::now();
    for(int i = 0;i<=999999999;i++)
    {
        if(i==pass)
        {
            cout<<"Password Found : "<<i<<"\n";
            break;
        }
    }
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout<<"Total Time Taken : ";
    cout << chrono::duration <double, milli> (diff).count() << " ms" << endl;
    return 0;
}