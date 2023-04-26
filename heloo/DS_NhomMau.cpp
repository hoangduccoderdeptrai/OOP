#include"DS_NhomMau.h"
#include"Mau_O.cpp"
#include"Mau_A.cpp"
#include"Mau_AB.cpp"
#include"Mau_B.cpp"
void DS_NhomMau::nhap(){
    cout<<"nhap so luong :";
    cin>>SoLuong;
    for(int i=0;i<SoLuong;i++){
        string Loai_mau;
        cout<<"nhap loai mau (in hoa):";
        cin.ignore();
        getline(cin,Loai_mau);
        if(Loai_mau=="O"){
            ds_NhomMau[i] =new Mau_O();

        }else if(Loai_mau=="AB"){
            ds_NhomMau[i]=new Mau_AB();


        }else if(Loai_mau=="B"){
            ds_NhomMau[i] =new Mau_B();

        }else{
            ds_NhomMau[i] =new Mau_A();

        }
        cout<<"nhap Rh (+ hoac -):";
        ds_NhomMau[i]->Nhap();
        
        
    }

}
void DS_NhomMau::Kiemtra_cha_me_con(){
    cout<<endl;
    cout<<"Nhap so luong bang 3 de kiem tra quy luat di truyen"<<endl;
    cout<<"Nhap nhom mau theo thu tu sau cha,me,con"<<endl;
    SoLuong=0;
    while(SoLuong!=3){
        
        nhap();
          
    }
    if(ds_NhomMau[2]->KiemTra_TinhDiTruyen(ds_NhomMau[0],ds_NhomMau[1])){
        cout<<"phu hop voi quy luat  di truyen"<<endl;
    }else{
        cout<<"Khong phu hop voi quy luat di truyen"<<endl;
    }
    
}
void DS_NhomMau::hienthi(){
    for(int i=0;i<SoLuong;i++){
        ds_NhomMau[i]->Hienthi();
    }
    cout<<endl;
}
void DS_NhomMau::ds_NHanMau(){
    int X;
    cout<<"Nhap vi tri cua X trong ds:";
    cin>>X;
    int i=0;
    while(i<SoLuong){
        if(i!=X){
            if(ds_NhomMau[X]->NguoiNhan(ds_NhomMau[i])==1){
                ds_NhomMau[i]->Hienthi();
                cout<<" co the cho"<<endl;
            }
        }
        i++;
    }
}

