    // Types, Operators, and Expressions จากเว็บไซต์ภาควิชา
    #include <stdio.h>
    #include <stdlib.h>
    int global; // ตัวแปร global
    
    int main() 
    {   //ขนาดของแต่ละ type
        printf("sizeof(char)   = %d\n", sizeof(char)); // 1
        printf("sizeof(int)    = %d\n", sizeof(int)); // 4
        printf("sizeof(float)  = %d\n", sizeof(float)); // 4 
        printf("sizeof(double) = %d\n", sizeof(double)); // 8 
        printf("sizeof(short)  = %d\n", sizeof(short)); // 2
        printf("sizeof(long)   = %d\n", sizeof(long)); // 4

    //Escape sequences
    // \a == alert bell         \\ tyoe backslash
    // \b == backspace          \? question mark
    // \f == formfeed           \' single quote
    // \n == newline            \" double quote
    // \r == carriage return    \ooo octal number
    // \t horizontal tab        \xhh hexadecimal number
    // \v vertical tab 

    printf("Declarations\n"); //ประกาศตัวแปร
        int local; // ตัวแปร local
        char character[1000]; 

        // ตัวอย่างรับค่่า แสดงค่า
        
        int c; 
        c = getchar(); 
        //   while (c != '0') { 
        //      putchar(c); 
        //      c = getchar(); 
        //   } 
// Arithmetic Operators
printf(" + - * / %%");
// % ใช้กับ float - double ไม่ได้

// Relational and Logical Operators
printf(" > < >= <= == !="); //Relational มากกว่า น้อยกว่า มากกว่าหรือเท่ากับ น้อยกว่าหรือเท่ากับ ไม่เท่ากับ
printf(" && || ! "); //Logical และ หรือ นิเสธ

    // n++ กับ ++n เหมือนกัน

// Bitwise Operator - >> << & | ~

// Conditional Expression - expr1 ? expr2 : expr3
    //  เช็ค expr1 ถ้า T -> expr2 , F -> expr3

// atoi / atol / atof 
// แปลง ascii เป็นเลขฐาน 10 i = integer l = long f = float/double
}