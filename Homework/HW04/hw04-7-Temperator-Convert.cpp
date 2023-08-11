/*
    จงเขียนโปรแกรมเพื่อแปลงอุณหภูมิ โดยรับมาจากผู้ใช้เป็นองศาเซลเซียส และแปลงเป็นฟาเรนไฮต์
    
    Test case:
        User input :
            22
    Output:
        22 degree Celsius = 71.6 degree Fahrenheit

    Test case:
        User input :
            36
    Output:
        36 degree Celsius = 96.8 degree Fahrenheit
*/
#include <stdio.h>
int main() {
    float Fahrenheit, Celsius ;
    printf( "User input :\n") ;
    scanf("%f", &Celsius ) ;
    Fahrenheit = (Celsius * 9/5 )+32 ;
    printf( "%f degree Celsius = %0.1f degree Fahrenheit\n",Celsius ,Fahrenheit ) ;
    return 0 ;
}//endfunction