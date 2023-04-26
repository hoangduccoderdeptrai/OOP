#include<iostream>
class Mau_O:public Nhom_Mau{
    private:
    public:
        void Nhap();
        void Hienthi();
        string PhanLoai();
        string get_Rh();
        bool KiemTra_TinhDiTruyen(Nhom_Mau *cha,Nhom_Mau*me);
        int NguoiNhan(Nhom_Mau *NguoiCho);
};