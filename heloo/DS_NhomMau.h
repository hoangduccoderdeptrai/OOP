#include"Nhom_Mau.cpp"
class DS_NhomMau{
    private:
        int SoLuong;
        Nhom_Mau* ds_NhomMau[100];
    public:
        ~DS_NhomMau(){
            for(int i=0;i<SoLuong;i++){
                delete ds_NhomMau[i];
            }
        }
        void nhap();
        void Kiemtra_cha_me_con();
        void hienthi();
        void ds_NHanMau();

};