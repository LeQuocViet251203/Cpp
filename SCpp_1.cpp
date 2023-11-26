#include <iostream> 
#include <iomanip>
#include <string>
#include <cstring> 
#include <typeinfo>
#include <cstdlib>
#include <ctime> 
#include <random> 
#include <array> 
#include <algorithm> 
#include "SCpp_1.h"
#include "Constants.h"
using namespace std ; 
using namespace constants ; 
#if 0
#endif 
// #define YEAR_OF_BIRTH 2016 
#define _CRT_SECURE_NO_WARNINGS 
#define MAX 100 
#define ROW 10 
#define COLUMN 20 

int g_x{30} ;
const int g_y(20) ; 
extern int g_n ; 
// auto add(int a , int b) -> int ; 
void PrintArr(const array <int , 5> &arr){
    for(const auto &item : arr){
        cout << item << " " ; 
    }
    cout << endl ; 
}
void SCpp_18_func(){
    array <int , 5> arr{2,3,4,5,6} ; 
    cout << arr[0] << endl ; // khong check do dai cua mang
    cout << arr.at(0) << endl ;
    // cout << arr.at(6) << endl ; // no se throw ra 1 cai exception thay vi giet chet chuong trinh
    cout << arr.size() << endl ; 
    // khi truyen vao ham thi no khong phai truyen dia chi cua arr ma no chuyen ca arr vao nen foreach dung duoc
    // va luon su dung tham chieu hoac tham chieu hang de tang hieu suat 
    PrintArr(arr) ; 
    sort(arr.begin() , arr.end()) ; 
    PrintArr(arr) ; 
    sort(arr.rbegin(), arr.rend()) ;
    PrintArr(arr) ;  
}
void SCpp_17_func(){
    /*
    binh thuong neu dung item thi no chi sao chep gia tri vao item thoi 
    thi bay gio su dung tham chieu de truy cap gia tri cua chinh no trong arr
    neu khong muon thay doi gia tri cua item thi tham chieu hang 
    vong lap for each khong lam viec voi con tro den 1 mang
    */
    int arr[]{11,22,33,44,55} ; 
    for(const auto &item : arr){
        cout << item << " " ; 
    }
    cout << endl ;
}
auto add(int a , int b){
    return a + b ; 
}
void SCpp_16_func(){
    /*
    auto kha giong var trong c# , dung de tu dong nhan dang kieu du lieu 
    thong qua gia tri nen phai khoi tao gia tri luon . 
    khong lam parameter duoc 
    */
   auto NKteam1(38) ; auto NKteam3('K') ; auto Var(0.5f) ; 
   int NKteam2(30) ; 
   cout << "type of tung cai 1: " << typeid(NKteam1).name() << endl ;
   cout << "type of tung cai 1: " << typeid(Var).name() << endl ; 
   cout << "type of tung cai 1: " << typeid(NKteam3).name() << endl ; 
   cout << add(NKteam1 , NKteam2) << endl ;  
}
void SCpp_15_func(){
    /*
    Chuoi ky tu string thuoc namespace std duoc cai dat trong 1 lop
    cua thu vien chuan STL
    chuoi ky tu c-style tu C ket thuc bang \0 null neu nhap vao 5 thi co 6 ptu trong mang
    neu thua thi la null het 
    chi doc den null nen neu sau null la mat het 
    */
   char sz[10] = {'V' , 'I' , 'E' , 'T'} , sz2[10] = "Viet" ;
    cout << sz2 << endl ; 
    cout << "Enter your name " ; 
    cin.getline(sz , 10) ; //phan tu 10 la null r nen chi nhap duoc 9 phan tu thoi 
    // cout << strlwr(sz)  << " " << strlen(sz) << endl ; 
    // cout << strupr(sz) << endl ; 
    // strcpy(sz2 , 10 ,  sz) ; //chuoi nhan duoc phai nho hon
    // cout << sz2 << endl ;
    // strcat(sz2 , sz) ; //noi chuoi
    // strcmp(sz2 , sz) ; //so sanh do dai 2 chuoi
    cout << strcmp(sz2,sz) << endl ;
    cout << sz << " " << sz2 << endl ; 
    if(strstr(sz, sz2) != NULL)
    cout << "tim thay" << endl ;  //kiem tra chuoi con tra ve con tro va neu k thi no tra ve null
    else 
    cout << "khong tim thay" << endl ; 
}
void SCpp_14_func(){
/*
dong cot va dia chi se tang theo dong 0x10 0x14 xong xuong se la khac
int Matrix[][COLUMN]
them ham vao func int a[][100] hoac int (*a)[100] no se dua dia chi cua phan tu dau tien
*/
int matrix[][COLUMN]{
    {6},
    {1,2},
    {3,4,5}
} ; 
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout << matrix[i][j] << " " ; 
    }
    cout << endl ;
} 
}
static void Working_with_array(int arr_2[] , int &nSize){
    srand(time(NULL)) ; 
    cout << "Nhap vao so luong phan tu: " ; 
    cin >> nSize ; 
   for (int i = 0; i < nSize ; i++)
   {
     arr_2[i] = rand() ;
   }
}
void SCpp_13_func(){
    /*
    dia chi mang la dia chi cua arr[0]
    int arr[1000] ,  int *arr_3 , truyen mang vao function thi 
    no chi truyen dia chi vao thoi
    */
   int arr[MAX] , nSize ; 
   cout << MAX * sizeof(arr) << endl ; 
   int arr_2[4]{1,2,3,4} ; int arr_3[]{4,6,9} ; 
   Working_with_array(arr , nSize) ;
   for (int i = 0; i < nSize ; i++)
   {
    cout << arr[i] << endl ; 
   }
   cout << nSize << endl ; 
}
void SCpp_12_func(){
/*
Cau truc dieu khien 
Muon khoi tao bien trong 1 case thi phai them 1 dau ngoac nhon va bien cua ban se duoc
su dung trong toan bo case duoi 
*/
// exit(0) ; //dung luon va 0 la gia tri tra ve cua ham main
// if (/* condition */)
// {
//     /* code */
// }
// try
// {
//     /* code */
// }
// catch(const std::exception& e)
// {
//     std::cerr << e.what() << '\n';
//     throw ; 
// }
// int n ; 
// TryAgain: //label phai nam trong ham 
// cout << "Nhap vao so n :" ; 
// cin  >> n ; 
// if(n < 0)
// goto TryAgain ; 
// goto Hello ; 

// Hello:
// cout << n << " la so nguyen duong" << endl ;
 srand(time(NULL)) ; 
 int a = rand() % 100 + 1  ; // co the tu 1 den 32767 
 for (int i = 0; i < 10; i++)
 {
    cout << rand() % 10 + 1 << endl ;
 }
 random_device rd ; 
 mt19937_64 rng(rd()) ; //bo so random 64 bit
 uniform_int_distribution<int> uni(1,1000) ; 
auto n = uni(rng) ; 
cout << n << endl ; 
}
static void SayHi() ; 
void SCpp_11_func(){
    /*
    Tien Khai bao giup compiler biet duoc su ton tai cua 1 dinh danh
    truoc khi chung ta thuc su dinh nghia no
    voi bien thi chung ta su dung extern
    */
   SayHi() ; 
}
static void SayHi(){
    cout << "Hi" << endl ; 
}
void Check_SCpp_10_func(){
    int x(1) , y(10) , t(0) ; 
    cout << "x = " << x << endl  ;
    cout << "y = " << y << endl  ;
    SCpp_10_func(x , y , t) ;
    cout << "x = " << x << endl  ;
    cout << "y = " << y << endl  ;
}
static void SCpp_10_func(int &y, int &z , const int &value){
/*
Truyen gia tri thi moi khi ma dua no vao trong ham no se cho vao trong 
ram 1 doan giong het the bang cach copy va khong the return ra nhieu output 

Truyen tham chieu , chi co tren c++ , c khong co (call by reference)
1 vung nho se co 2 ten tro ve 1 vung nho 
Tham chieu hang se khong thay doi cua bien khi goi ham
Tham chieu thong thuong se khong the bo 1 doi so hoac 1 bieu thuc vao duoc vi no khong
chiem 1 khu vuc trong bo nho 
neu la cac du lieu co kieu phuc tap thi nen dung hang
*/
// cout << "y = " << y << endl  ;
y = PI; z = SPEED_OF_SOUND ; 
// cout << "y = " << y << endl  ;
}
void SCpp_9_func(){
    /*
    Implicit type conversion : compiler with do it itself (kieu du lieu co so) and Explicit type concversion : we will use 
    casting operator to do it 
    khi minh cho tu to thanh nho hon thi se bi mat mat du lieu dan den khong an toan
    co 5 cach ep kieu tuong minh
    */
    int nValue = 1 ; float fValue = 1 ; double dValue(1) ; 
    long l(1) ; double di(0.1f) ; 
    short s1(1) ; int n(2) ; double d2(1.0) ; 
    cout << typeid(s1 + n + d2).name() << " " << s1 + n + d2 << endl ;
    di = (double)nValue / 2 ; //c-type cast
    di = double(3/2) ; //c-type cast , trinh bien dich se khong kiem tra tinh dung sai khi bien dich
    char c('K') ; // trinh bien dich se biet duoc bieu thuc co dung hay khong
    cout << static_cast<int>(c) << endl ; 
    cout << di << endl ; 
}
int GenerateID(){
    static int s_id{0} ;
    s_id++ ; 
    return s_id ;
 }
void SCpp_8_func(){
    /*
    Khi trinh bien dich chay thi 1 vung trong bo nho ram se duoc cap cho bien do 
    Pham vi cua bien va Thoi gian ton tai cua bien 
    Pham vi cua bien : local and global variable 
    local se duoc huy khi khoi lenh ket thuc 
    global se co thoi gian tinh trong khi local co thoi gian dong
    khi 1 bien toan cuc trung ten voi bien cuc bo thi no se an bien toan cuc di va
    su dung bien cuc bo, luc do neu muon su dung thi phai cho :: vao truoc ten bien 
    bien toan cuc se rat nguy hiem voi cac chuong trinh lon 
    khong the kiem soat duoc khi ham nao cung co the goi no de thay doi
    kho co the tai su dung voi cac chuong trinh khac 
    */
   int g_x{40} ;
   cout << g_x << endl ; 
   cout << ::g_x << endl ; 
   int apple(15) ; 
   if(g_x > 10){
    int apple = 0 ;// moi bien co the o 1 khu vuc 
   }// apple got eliminated here 
    /* bien tinh ; static variable 
        bien tinh se co thoi gian tinh va se bi huy di khi ket thuc chuong trinh
        1 bien tinh se khong bi tieu huy khi ket thuc 1 doan code nhung khong the goi tu ham ngoai 
        su dung bien tinh khi co nhu cau giu gia tri trong chuong trinh
    */
   static int g_y{39} ; 
   int nID1 = GenerateID() ;
   int nID2 = GenerateID() ;
   int nID3 = GenerateID() ;
   cout << nID1 << nID2 << nID3 << endl ;
   }
void SCpp_7_func(){
    /*
    cin doi voi string se nhan cho den khi thay khoang trang dau tien 
    */
    string strString("") , strString_1("Le Quoc Viet") , strString_2{"My name is Viet"} ; 
    string strString_5 = strString_2 ; 
    int nAge ; 
    cout << strString_1 << endl ; 
    cout << strString << endl ; 
    cout << strString_2 << endl ; 
    cout << strString_5 << endl ; 
    // cin.ignore(3000 , '\n') ; 
    // 1 van de xay ra o day la khi cin truoc thi no se khong doc dong getline sau 
    // cout << "enter your age: " ; 
    // cin >> nAge ; 
    // cin.ignore(32767 , '\n') ;  //xoa bo nho dem neu khong co truyen vao va bo nho dem se chua duoc 32767 ky tu 
    // // 5
    // // getline(cin , strString_1) ; 
    // cout << "Enter your full name pls: " ; 
    // getline(cin , strString , '_') ;
    // cout << "your name is " << strString << "your age is " << nAge << endl ;
    strString_5 = "Hello" + string("World") ; 
    strString_5 += "world" ; 
    cout << strString_5 << endl ; 
    cout << strString_5.length() << endl ; 
    cout << strString_5.size() << endl ;
}
void SCpp_6_func(){
    /*
        Toan tu so hoc 
        ++x thi no se tang x truoc r ms lam gi thi lam con x++ thi no lam xong da r moi tang no len 
        no se tang thang vao gia tri cua bien 
        voi nhung floating point number thi nen can than vi loi lam tron so cua C++ 
        co cach lam la lay 2 so tru di nhau va so sanh neu khoang cach do qua nho thi coi nhu la bang nhau 
        Thao tac tren bit 
        x << y shift left y bits 
        x >> y shift right y bits 
        Misc operator 
        sizeof return th bytes of that variable 
        use , as an operator 
        x = (a++ , b += 2)
        which means 
        a++ 
        b += 2  ; 
        x = b ; 
        . dot and -> and Cast (implicit) and & and * 
    */
   int x(69) ; 
   int y = -x ; //tra ve doi so cua so hang do 
    bool Vip = true ; 
    int NotVip = ~x ; 
    const double Price = Vip ? 1000 : 500 ; // su dung toan tu dieu kien de khai bao hang so 

}
void PRINT_YEAR_OF_BIRTH(int const nYear){
    cout << "Year of birth: " << nYear << endl ;  
    cout << "Year of birth: " << YEAR_OF_BIRTH << endl ;

}
void SCpp_5_func(){
    /*
    Hang so phai duoc khoi tao khi khao bao 
    hang so co the cho vao ham 
    inactive preprocessor block chi thi tien xu ly #define thi no khac 
    voi constants o cho la constant se ton dien tich bo nho de nho no la
    constant nhung voi define thi no se the vao cho day luon ma k can nho bo nho gi het
    2 khuyet diem su dung define : khong debug duoc ma phai den tan cho define moi co the debug
    va no la 1 cau lenh global 
    nen dinh nghia hang so o pham vi toan cuc 
    hoac tao han 1 file header constants.h de chua tat ca 
    neu ma trung ten thi cho them constants:: (toan tu phan giai pham vi)
    */
   #if 1 
        //    const double PI{ 3.14 } ; double const  SPEED_OF_SOUND{ 342.3 } ; 
           PRINT_YEAR_OF_BIRTH(100) ; 
    #endif 
    #if 0 
    #endif 

}
void SCpp_4_func(){
    /*
    std cout is an object defined in iostream library inside namespace std use to print 
    out into the screen 
    cin same to read a data from input (keyboard) and save it into a variable 
    if it is not a value it will implicit it and if it cant it will get random trash value from the 
    system 
    */
   int n , m , t; 
   cout << "Sum: " << 1 << "+ " << 1 << "= " << 2 << endl ;
   cout << "Input your age or a hexadecimal number: " ; 
   cin >> hex >> n ; 
   cout << "Octal: " << oct << n << endl ; 
   cout << "Dec: " << dec << n << endl ; 
//    cin >> n >> m;
//    cin >> t ;  
   cout << "Your age is: " << n << m << t <<  endl ; 
   cout << setw(5) << left << "ID" ; 
   cout << setw(30) << left << "Name" ; 
   cout << setw(20) << right << "Address" << endl; 
   cout << setfill('-') ; 
   cout << setw(55) << "." << endl;
   cout << setfill(' ') ; 
}
void SCpp_3_func(){
    /*
    khac 0 deu la true het
    */
    bool b1(true) , b2(false) , b3(1) , b4(!true) , b5(!false) , b6(!5) , b7(!1) ;
     cout << noboolalpha ; 
     cout << b1 << endl ; 
     cout << b2 << endl ; 
     cout << boolalpha ; 
     cout << b1 << endl ; 
     cout << b2 << endl ; 
    if(b1) // if == true 
        cout << b1 << endl ; 
    else 
        cout << !b1 << endl ; 
}
void SCpp_2_func(){
    /* character signed character -128 to 127 and unsigned from 0 to 255 
    65 to 90 : capital letter 
    97 to 122 : normal letter 
    0 to 9 : 48 to 57 
    escape sequence \n 
    endl va \n cung la xuong dong ve ban chat cua endl 
    endl flush bo nho dem lien tuc nen kh dc su dung khi lam viec voi file 
    voi file thi \n
    dung \n thi can << flush 
    */
    int n = 75 , m = 275 ; 
    char ch1 = 7 , ch2(75) , ch3{ 75 } , ch4{ 'K' } , ch5( 'K' ) ;  
    unsigned char ch6 ; 
    cout << ch1 << endl ; 
    cout << static_cast<int>(ch1) << endl ;  
    cout << static_cast<char>(n) << endl ; 
    cout << static_cast<char>(m) << endl ; // tran so va no quay lai so dau tien de cong don len 
}
void SCpp_1_func(){
    /*
    boolean 1 byte char 1 byte maybe signed or unsigned wchar_t 2 byte 
    cahr16_t 2 bytes and char32_t is 4 bytes 
    short : 2 bytes int 2 bytes and usually 4 bytes in modern architecture long 4 bytes 
    long long 8 bytes float 4 bytes double 8 bytes and long double 8 bytes 
    thats the minimum size of each types which can be varied 
    signed char -128 to 127 and unsigned from 0 to 255 
    float doesnt have unsigned some IDE long double is the same as double so rarely used 
    Precision of the floating point number : we just have 6 digit when using cout and the 
    following will be cut off 
    to get more digit to be precise : we use setprecision from std 
    with using float we can just maximum 7 digit precis
    all the floating point number has a problem of converting it into binary 
    */
    char c ; short s ; int n ; // mac dinh la co dau 
    float Varname ; double Varname2 ; long double Varname3 ;  
    float Varname4{ 4.0f } ; double Varname5{ 4.0 } ; long double Varname6{ 4.0l } ; 
    // scientific notation : using e 
    double Varname6_2{ 69000.0 } ;  double Varname7{ 6.9e4 } ; 
    double Varname8{ 0.00069 } ; double Varname9{ 6.9E-4 } ; 
    std :: setprecision(20) ; 
    cout << Varname8 << endl ; 
    cout << "size of bool is " << sizeof(bool) << endl ;
    cout << "size of char is " << sizeof(char) << endl ; // is both integer and character 
    cout << "size of wchar_t is " << sizeof(wchar_t) << endl ;
    cout << "size of char16_t is " << sizeof(char16_t) << endl ;
    cout << "size of char32_t is " << sizeof(char32_t) << endl ;
    cout << "size of int is " << sizeof(int) << endl ;
    cout << "size of short is " << sizeof(short) << endl ;
    cout << "size of long is " << sizeof(long) << endl ;
    cout << "size of long long is " << sizeof(long long) << endl ;
    cout << "size of float is " << sizeof(float) << endl ;
    cout << "size of double is " << sizeof(double) << endl ;
    cout << "size of long double is " << sizeof(long double) << endl ;
}
    // sizeof , new and delete is the only thing that is not a sign
    // int newnum ; 
    // newnum = 69 ; 
    // newnum = 6 + 9 ; 
    // int newNum(10) ; 
    // int newNUm{10} ; 
    // int32_t newNUM(40) ; 
    // cout << "This is the number im lookin for" << newNUM << endl ; 
    // cout << "Whata nice day bro" << endl ; 
    // std::cout << "Hello bro" << std::endl ; 
    // std::cout << CheckVariants(newNum) << std::endl ; 
    // system("pause") ; // same as getch() in C 