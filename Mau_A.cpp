#include"Mau_A.h"
void Mau_A::Nhap(){
    cin>>Rh;
}
void Mau_A::Hienthi(){
    cout<<"A"<<Rh<<" ";
}
string Mau_A::PhanLoai(){
    return "A";
}
string Mau_A::get_Rh(){
    return Rh;
}
bool Mau_A::KiemTra_TinhDiTruyen(Nhom_Mau *cha,Nhom_Mau*me){
    string cha1 =cha->PhanLoai();
    if(cha1 =="A"||cha1=="AB")return true;
    string me1 =me->PhanLoai();
    if(me1=="A"||me1=="AB")return true;
    return false;
}
int Mau_A::NguoiNhan(Nhom_Mau*NguoiCho){
    if(Rh=="+"){
        if(NguoiCho->PhanLoai()=="O"||NguoiCho->PhanLoai()=="A")return 1;
        return 0;

    }else{
        if(NguoiCho->PhanLoai()=="O"&&NguoiCho->get_Rh()=="-")return 1;
        if(NguoiCho->PhanLoai()=="A"&&NguoiCho->get_Rh()=="-")return 1;
        return 0;

    }
}