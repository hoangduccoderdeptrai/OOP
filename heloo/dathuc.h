#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class DaThuc{
    private:
        int Bac;
        float HeSo[100];
        int SoMu[100];
        vector<pair<float,int>>vt;
    public:
        friend istream& operator>>(istream &in,DaThuc &a);
        friend ostream& operator<<(ostream &out,DaThuc a);
        friend DaThuc operator+(DaThuc a,DaThuc b);
        void Erase_Elements();


};