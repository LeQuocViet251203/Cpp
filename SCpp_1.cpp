#include <iostream> 
#include <iomanip>
#include "SCpp_1.h"
#include "Constants.h"
using namespace std ; 
using namespace constants ; 
#if 0
#endif 
// #define YEAR_OF_BIRTH 2016 
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