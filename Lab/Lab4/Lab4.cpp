#include <stdio.h>

int main() {
    char empID[10];
    float hoursWorked, hourlyRate, totalPay;

    // รับค่าข้อมูลจากผู้ใช้
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%10s", empID);

    printf("Input the working hrs: ");
    scanf("%f", &hoursWorked);

    printf("Salary amount/hr: ");
    scanf("%f", &hourlyRate);

    // คำนวณรายได้ทั้งหมด
    totalPay = hoursWorked * hourlyRate;

    // แสดงผล
    printf("\nEmployees ID = %s\n", empID);
    printf("Salary = U$ %.2f \n", totalPay);

    return 0;
}