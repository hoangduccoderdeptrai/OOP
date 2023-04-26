#include"bai3.h"
void NhomMau::nhap(){
    cout<<"nhap nhom mau Rh (+ hoac -):";
    cin>>Rh;
}
void NhomMau::hienthi(){
    cout<<Rh<<" ";
}
void DS_NhomMau::nhap(){
    cout<<"nhap so luong nhom mau:";
    cin>>So_Luong;
    for(int i=0;i<So_Luong;i++){
        cout<<"nhap nhom mau(nhom mau AB nhap C):";
        char l_mau;
        cin>>l_mau;
        switch (l_mau)
        {
        case 'A':
            arr_NhomMau[i] =new A();
            break;
        case 'O':
            arr_NhomMau[i] =new O();
            break;
        case 'B':
            arr_NhomMau[i] =new B();
            break;
        case 'C':
            arr_NhomMau[i] =new AB();
            break;
        default:
            break;
        }
        arr_NhomMau[i]->nhap();
    }
}
void DS_NhomMau::nhap1(){
    while(So_Luong!=3){
        cout<<"nhap so luong = 3 de kiem tra tinh duy truyen"<<endl;
        nhap();
    }
}
void DS_NhomMau::hienthi(){
    for(int i=0;i<So_Luong;i++){
        arr_NhomMau[i]->hienthi();
    }
}
void A::hienthi(){
    cout<<"A";
    NhomMau::hienthi();

}
void B::hienthi(){
    cout<<"B";
    NhomMau::hienthi();

}
void AB::hienthi(){
    cout<<"AB";
    NhomMau::hienthi();

}
void O::hienthi(){
    cout<<"O";
    NhomMau::hienthi();

}
int A::KiemTra_NhomMauCon(NhomMau cha,NhomMau me){
    char Mau_cha =cha.Phan_Loai();
    if(Mau_cha=='A'||Mau_cha=='C')return 1;
    char Mau_me =me.Phan_Loai();
    if(Mau_me =='A'||Mau_me=='C')return 1;
    return 0;
}
int B::KiemTra_NhomMauCon(NhomMau cha,NhomMau me){
    char Mau_cha =cha.Phan_Loai();
    if(Mau_cha=='B'||Mau_cha=='C')return 1;
    char Mau_me =me.Phan_Loai();
    if(Mau_me =='B'||Mau_me=='C')return 1;
    return 0;
}
int AB::KiemTra_NhomMauCon(NhomMau cha,NhomMau me){
    char Mau_cha =cha.Phan_Loai();
    if(Mau_cha=='B'||Mau_cha=='C')return 1;
    char Mau_me =me.Phan_Loai();
    if(Mau_me =='B'||Mau_me=='C')return 1;
    return 0;
}
int main(){
    DS_NhomMau t;
    t.nhap1();
    t.hienthi();
}
