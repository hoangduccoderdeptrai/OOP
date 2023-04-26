#include<iostream>
using namespace std;
class NhomMau{
    private:
        char Rh;
    public:
        void nhap();
        virtual void hienthi();
        virtual char Phan_Loai()=0;
        virtual int KiemTra_NhomMauCon(NhomMau cha,NhomMau me) =0;

};
class DS_NhomMau{
    private:
        int So_Luong;
        NhomMau* arr_NhomMau[100];
    public:
        
        ~DS_NhomMau(){
            for(int i=0;i<So_Luong;i++){
                delete arr_NhomMau[i];
            }
        }
        void nhap();
        void hienthi();
        void nhap1();
};
class A:public NhomMau{
    public:
        void hienthi();
        char Phan_Loai(){
            return 'A';
        }

        int KiemTra_NhomMauCon(NhomMau cha,NhomMau me);



};
class B:public NhomMau{
    public:
        void hienthi();
        char Phan_Loai(){
            return 'B';
        }
        int KiemTra_NhomMauCon(NhomMau cha,NhomMau me);

};
class O:public NhomMau{
    public:
        void hienthi();
        char Phan_Loai(){
            return 'O';
        }
        int KiemTra_NhomMauCon(NhomMau cha,NhomMau me);

};
class AB:public NhomMau{
    public:
        void hienthi();
        char Phan_Loai(){
            return 'C';
        }
        int KiemTra_NhomMauCon(NhomMau cha,NhomMau me);

};