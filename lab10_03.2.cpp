#include <stdio.h>
#include <stdlib.h>

struct Books {
    int BookID;
    char BookTitle[50];
} ComputerBook;

void DisplayData(struct Books *CBook); 

int main() {
    printf("Enter Book ID :");
    scanf("%d", &ComputerBook.BookID);
    
    printf("Enter Book Title :");
    scanf("%s", ComputerBook.BookTitle);
    
    DisplayData(&ComputerBook); 
    
    return 0;
}

void DisplayData(struct Books *CBook) {
    printf("Book ID : %d \n", (*CBook).BookID);      
    printf("Book Title : %s \n", CBook->BookTitle); 
}
//(*CBook).BookID คือการนำค่าที่อยู่ใน Address ของ Pointer ที่ชื่อ CBook มาแสดงผล ซึ่งก็คือค่า BookID ของหนังสือ
//CBook->BookTitle คือการเข้าถึงสมาชิก BookTitle ของโครงสร้างข้อมูลผ่าน Pointer โดยใช้ -> ซึ่งมีความหมายเหมือนกับ (*CBook).BookTitle