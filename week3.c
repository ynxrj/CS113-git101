//if else loop string.h ctype.h จากเว็บไซต์ภาควิชา

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
#include <string.h>

// if-else

//    if (expression) // ถ้า expr เป็นจริงทำใน if แล้วออก
//       statement1
//    else //ถ้าไม่มาทำอันนี้ละออก
//       statement2

// เช่น
    //if (a > b)
    //           z = a;
    // else
    //    z = b;

//   else if // ตัวอันเดียวละออก
// if (expression1) ถ้าไม่ถูกทำอันล่าง
//       statement1
//    else if (expression2)  ถ้าไม่ถูกทำอันล่าง
//       statement2
//    else if (expression3)  ถ้าไม่ถูกทำอันล่าง 
//       statement3
//    else if (expression4)  ถ้าไม่ถูกทำอันล่าง
//       statement4
//    else ถ้าไม่ถูกเลยทำอันนี้ละออก
//       statement5

//switch case

//   switch (expression) { เงื่อนไข - เลือกทำจนกว่าจะเจอ break
//       case const-expr:  //ถ้าไม่เจอ break ทำต่อ
//          statements
//       case const-expr: //ถ้าไม่เจอ break ทำต่อ
//          statements
//       default: //ไม่เข้าเงื่อนไขไหนเลยทำอันนี้
//          statements
//    }

// for loop ทำวนไปจนกว่าเงื่อนไขจะเป็นเท็จ หรือ เจอเงื่อนไขที่เข้าไปแล้วเจอ break
//    for (expr1; expr2; expr3)
    //    statement

    // มีลักษณะเดียวกับ

    // expr1;
    // while (expr2) {
    //    statement
    //    expr3;
    // }

//while loop คล้ายๆ for แต่เขียนเงื่อนไขในลูป ทำจนกว่าจะเป็นเท็จ

//ฟังก์ชันเกี่ยวกับตัวอักษร
//ctype.h
// isalnum(ch) == check number and letter
// isalpha(ch) == check letter
// isdigit(ch) == check number
// islower(ch) == check lower alphabet                   
// isupper(ch) == check upper alphabet          
// tolower(ch) == change to lower          
// toupper(ch) == change to upper
// isspace(ch) == check the space            
// isxdigit(ch) == check hexadecimal

//ฟังก์ชันที่ใช้งานเกี่ยวกับสตริง
//string.h
// strlen(count how many letter in string)
// strcmp(is 2 strings are the same?)
// strcpy(copy string)
// strcat(link 2 string together and always add to first string)