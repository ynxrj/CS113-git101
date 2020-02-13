//แลปจารย์ก้อง

#include<stdio.h>
int addTen(int x) //ประกาศฟังก์ชั่น by value
{
    x = x+10; // + ค่า x ไป 10
    return x; //ส่งค่า x กลับ
}
int addTwenty(); //ประกาศแค่ชื่อฟังก์ชั้นเพื่อให้โปรแกรมรู้ว่ามีฟังก์ชั่นนี้ในโค้ดนี้
int x = 1000;

int main() //ตอนเริ่มโปรแกรมจะทำ main ก่อนเสมอ
{
    int x = 50; 
    int y = addTen(x); //เรียกใช้ฟังก์ชั้่น โปรแรกมจะกระโดดไปทำฟังก์ชั่น addTen
    printf("x in main = %d\n",x); // 50 จากบรรทัด 14
    printf("addTen in main = %d\n",y); // 60 หลังจาดเรียกใช้ฟังก์ชั่น addTen
    printf("addTwenty in main = %d\n",addTwenty()); //ไปอ่านบรรทัด 20 ----- หลังจากกระโดดไปทำ addTwenty จะได้ค่า 1020
}
int addTwenty(){
    printf("x in addTwenty = %d\n",x); // x == 1000 จากบรรทัด 10
    x = x+20;
    return x; //ส่ง x+20 กลับไปบรรทัด 18
}