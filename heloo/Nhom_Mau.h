#include<iostream>
using namespace std;
class Nhom_Mau{
    protected:
        string Rh;
    public:
        
        virtual void Nhap()=0;
        virtual void Hienthi()=0;
        virtual string PhanLoai()=0;
        virtual string get_Rh()=0;
        virtual bool KiemTra_TinhDiTruyen(Nhom_Mau *cha,Nhom_Mau*me)=0;
        virtual int NguoiNhan(Nhom_Mau *NguoiCho)=0;

};