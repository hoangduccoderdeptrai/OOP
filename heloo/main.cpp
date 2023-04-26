#include"DS_NhomMau.cpp"
int main(){
    DS_NhomMau T;
    int n;
    while(true){
        cout<<"**********MENU***********"<<endl;
        cout<<"Chon 1: Nhap danh sach cac nhom mau cua mot nhom nguoi"<<endl;
        cout<<"Chon 2: Kiem tra quy luat di truyen cua cha,me,con"<<endl;
        cout<<"Chon 3: Liet ke tat ca cac nguoi trong danh sanh co the cho mau nguoi X"<<endl;
        cin>>n;
        if(n==1){
            T.nhap();
            T.hienthi();
        }else if(n==2){
            T.Kiemtra_cha_me_con();
        }else if(n==3){
            T.ds_NHanMau();
        }else{
            break;
        }
    }
}