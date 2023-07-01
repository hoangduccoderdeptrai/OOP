#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<sstream>
using namespace std;
class Poem{
    protected:
        int soCau;
        vector<vector<string>>type;
    public:
        void Nhap();
        bool virtual kiemtra()=0;
        int get_socau(){
            return soCau;
        }
        void hienthi(){
            string a =type[0][1];
            const char* t =a.c_str();
            cout<<t[1];
        }
};
void Poem::Nhap(){
    cin>>soCau;
    cin.ignore();
    for(int i=0;i<soCau;i++){
        vector<string>st;
        string sg,temp;

        getline(cin,sg);
        stringstream str(sg);
        while(getline(str,temp,' ')){
            st.push_back(temp);
        }
        
        type.push_back(st);
    }
}
class lucbat:public Poem{
    public:
        bool kiemtra(){
            if(soCau%2==1)return false;
            for(int i=0;i<soCau;i++){
                if(i%2==0){
                    if(type[i].size()!=6)return false;
                }else{
                    if(type[i].size()!=8)return false;
                }
            }
            return true;
            // const char* a =type[i]
        }
};
class songthatlucba:public Poem{
    public:
        bool kiemtra(){
            if(soCau%4!=0)return false;
            for(int i=0;i<soCau;i++){
                if(type[i].size()!=7||type[i+1].size()!=7||type[i+2].size()!=6||type[i+3].size()!=8)return false;
                i=i+3;
            }
            return true;
        }

};
class duongluatthatngon:public Poem{
    public:
        bool kiemtra(){
            if(soCau!=8)return false;
            for(int i=0;i<soCau;i++){
                if(type[i].size()!=7)return false;
                return true;
            }
        }
};
int main(){
    Poem *t[100];
    int soluong;
    int n;
    cin>>soluong;
    //cau a
    for(int i=0;i<soluong;i++){
        cout<<"0:luc bac ,1:songthatlucbat,2:duongluatthatngon";
        cin>>n;
        if(n==0)t[i]=new lucbat();
        else if(n==1)t[i]=new songthatlucba();
        else t[i] =new duongluatthatngon();
        t[i]->Nhap();
    }
    t[0]->hienthi();
    //cau b
    int max_cau =t[0]->get_socau();
    for(int i=1;i<soluong;i++){
        
        if(max_cau<t[i]->get_socau()){
            max_cau =t[i]->get_socau();
        }
    }
    for(int i=0;i<soluong;i++){
        if(t[i]->get_socau()==max_cau){
            cout<<i;
        }
    }
}
