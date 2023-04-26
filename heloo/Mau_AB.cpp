#include"Mau_AB.h"
void Mau_AB::Nhap(){
    cin>>Rh;
}
void Mau_AB::Hienthi(){
    cout<<"AB"<<Rh<<" ";
}
string Mau_AB::PhanLoai(){
    return "AB";
}
string Mau_AB::get_Rh(){
    return Rh;
}
bool Mau_AB::KiemTra_TinhDiTruyen(Nhom_Mau *cha,Nhom_Mau*me){
    string cha1 =cha->PhanLoai();
    string me1 =me->PhanLoai();
    if(cha1=="A"&&me1=="B"||cha1=="B"&&me1=="A")return true;
    if(cha1=="AB"&&me1!="O"||cha1!="O"&&me1=="AB")return true;

    return false;
}
int Mau_AB::NguoiNhan(Nhom_Mau*NguoiCho){
    if(Rh=="+"){
        return 1;

    }else{
        if(NguoiCho->get_Rh()=="-")return 1;
        return 0;
      
    }
}