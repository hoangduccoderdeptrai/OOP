#include"Mau_B.h"
void Mau_B::Nhap(){
    cin>>Rh;
}
void Mau_B::Hienthi(){
    cout<<"B"<<Rh;
}
string Mau_B::PhanLoai(){
    return "B";
}
string Mau_B::get_Rh(){
    return Rh;
}
bool Mau_B::KiemTra_TinhDiTruyen(Nhom_Mau *cha,Nhom_Mau*me){
    string cha1 =cha->PhanLoai();
    if(cha1 =="B"||cha1=="AB")return true;
    string me1 =me->PhanLoai();
    if(me1=="B"||me1=="AB")return true;
    return false;
}
int Mau_B::NguoiNhan(Nhom_Mau*NguoiCho){
    if(Rh=="+"){
        if(NguoiCho->PhanLoai()=="O"||NguoiCho->PhanLoai()=="B")return 1;
        return 0;

    }else{
        if(NguoiCho->PhanLoai()=="O"&&NguoiCho->get_Rh()=="-")return 1;
        if(NguoiCho->PhanLoai()=="B"&&NguoiCho->get_Rh()=="-")return 1;
        return 0;

      
    }
}
