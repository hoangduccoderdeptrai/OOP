#include"Mau_O.h"
void Mau_O::Nhap(){
    cin>>Rh;
   
}
void Mau_O::Hienthi(){
    cout<<"O"<<Rh<<" ";
    
}
string Mau_O::PhanLoai(){
    return "O";
}
string Mau_O::get_Rh(){
    return Rh;
}
bool Mau_O::KiemTra_TinhDiTruyen(Nhom_Mau *cha,Nhom_Mau*me){
    string cha1 =cha->PhanLoai();
    string me1 =me->PhanLoai();
    if(cha1!="AB"&&me1!="AB")return true;
    return false;

}
int Mau_O::NguoiNhan(Nhom_Mau*NguoiCho){
    if(Rh=="+"){
        if(NguoiCho->PhanLoai()=="O")return 1;
        return 0;

    }else{
        if(NguoiCho->PhanLoai()=="O"&&NguoiCho->get_Rh()=="-")return 1;
        return 0;
      
    }
}