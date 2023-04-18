#include"dathuc.h"
bool cmp(pair<float,int>a,pair<float,int>b){
    return a.second>b.second;
}
void DaThuc::Erase_Elements(){
    for(auto it =this->vt.begin();it!=this->vt.end()-1;++it){
        if((it->second) ==((it+1)->second)){
            (it->first)+=((it+1)->first);
            this->vt.erase(it+1);
            it-=2;
        }    
    }
}
istream& operator>>(istream &in,DaThuc &a){
    cout<<"NHAP SO BAC CHO DA THUC:";
    in>>a.Bac;
    
    for(int i=0;i<a.Bac;i++){
        cout<<"Nhap Mu Cho Da Thuc:";
        in>>a.SoMu[i];
        cout<<"Nhap He So x^"<<a.SoMu[i]<<":";
        in>>a.HeSo[i];
        a.vt.push_back(make_pair(a.HeSo[i],a.SoMu[i]));
    }
    cout<<endl;
    return in;
}
ostream& operator<<(ostream &out,DaThuc a ){
    for(int i=0;i<a.vt.size();i++){
        if(i<a.vt.size()-1)
            out<<a.vt[i].first<<"x^"<<a.vt[i].second<<"+";
        else{
            if(a.vt[i].second==0){
                out<<a.vt[i].first;
            }else{
                out<<a.vt[i].first<<"x^"<<a.vt[i].second;
            }
           
        }
            
    }
    return out;
}
DaThuc operator+(DaThuc a,DaThuc b){
    DaThuc C;
    sort(a.vt.begin(),a.vt.end(),cmp);
    sort(b.vt.begin(),b.vt.end(),cmp);
    a.Erase_Elements();
    b.Erase_Elements();
    int i=0,j=0;
    while(i<a.vt.size()&&j<b.vt.size()){
        if(a.vt[i].second ==b.vt[j].second){
            C.vt.push_back(make_pair(a.vt[i].first+b.vt[j].first,a.vt[i].second));
            i++;j++;
        }else if(a.vt[i].second>b.vt[j].second){
            C.vt.push_back(make_pair(a.vt[i].first,a.vt[i].second));
            i++;
        }else{
            C.vt.push_back(make_pair(b.vt[j].first,b.vt[j].second));
            j++;
        }
    }
    while(i<a.vt.size()){
        C.vt.push_back(make_pair(a.vt[i].first,a.vt[i].second));
        i++;
    }
    while(j<b.vt.size()){
        C.vt.push_back(make_pair(b.vt[j].first,b.vt[j].second));
        j++;
    }
    return C;
    
  
 

    
}
int main(){
    DaThuc a,b;
    cin>>a>>b;
    DaThuc t=(a+b);
    cout<<t;
}