//แลปจารย์ก้อง <3

#include <stdio.h>
int addTen(int *number, int n){ //by reference //number ที่ส่งเข้ามาเป็น array(pointer ประเภทหนึ่ง) เจอ * จะ dereferencing ได้ค่าภายใน address
    for (int i = 0; i < n; i++){ 
        printf("[%p] = %d\n",number + i, *(number+i)); // แสดงค่า [address ของ numberตำแหน่งที่ i] = ค่าของnumber[ตำแหน่งที่ i]
        *(number + i)+=10;// ตำแหน่งที่ i บวกไป 10 (14 15 16 17 18).
    }
    return 1;
}
//ไปอ่าน int main ก่อนนนนนนน
void addTwenty(int *n){ //n ที่ส่งมาเป็น address เจอ * จะได้ *&n / address เมื่อเจอ * จะได้ค่าภายใน address
    *n +=20; // 5 + 20
}
int main(){
    int numbers[] = {4,5,6,7,8};
    int n = 5;
    addTen(numbers,n); //ส่ง number[0] เข้าไป, n = 5.
    for (int i = 0; i < n; i++)
    {
        printf("main [%p] = %d\n",numbers + i, *(numbers +i)); //แสดงค่า [address ของ numberตำแหน่งที่ i] = ค่าของnumber[ตำแหน่งที่ i]
        // ได้ค่า 14 15 16 17 28 เพราะัโดนบวกแล้วใน addTen
    }
    addTwenty(&n); //ส่ง address เข้าไป = pass by reference ตอนนี้้ n = 5.
    printf("n = %d\n",n); // หลังจากเข้า addTwenty จะได้ค่าคือ 25
}