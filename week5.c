//แลปจารย์ก้อง

#include <stdio.h>

//pointer / ARRAY
int main() {
    int x = 100;
    // int a = 0144; //เลขฐาน 8
    // int b = 0x; //เลขฐาน 16
    // printf("x = %d",x);
    // printf("reference x = %d\n", &x); //จะได้ address เพราะใส่ ambersand (&)
    // printf("reference x = %p\n", &x); //ได้ address ฐาน 16
    // int number[] = {3, 4, 5, 6, 7};
    // int number[99]; // array == pointer ชนืดหนึ่ง
    int number[99] = {3, 4, 5, 6, 7};
    // printf("index 1 = %d\n", number[1]);
    // printf("reference number[1] = %p\n", &number[1]+1); //แสดงเป็น address แต่เพิ่มไป 1 ช่อง array
    // printf("reference number[0] = %p\n", &number[0]); // ได้ address ของ number[0]
    // printf("reference number = %p\n", &number); //ได้ address ฐาน 16
    // printf("reference number[1000] = %p\n", &number[1000]);
    // int number[] = {3, 4, 5, 6, 7}; //addressของแต่ละตัวจะเพิ่มทีละ 4 เช่น 00 -> 04 -> 08 -> 12 ...
    int *ptr = &x;
    int *arrPtr;
    arrPtr = number; // ให้ pointer ชี้ไปที่ numberตำแหน่งที่ 0;
    arrPtr += 2; // บวกตำแหน่งใน array ไป 2 จากบรรทัด 13 ก็จะเป็นจาก 3 -> 5;
    *arrPtr = *arrPtr + 10; //ใส่ * ข้างหน้า == ได้ค่าของตัวปัจจุบัน ตอนนี้ปัจจุบันเป็น 5 ก็จะได้ 5 + 10 == 15; //dereferencing.
    printf("arrptr = %p, *arrPtr = %d\n",arrPtr, *arrPtr); // ได้ address 00XXXXXX , ได้ค่า 15
} 