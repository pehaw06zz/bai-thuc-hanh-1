#include <stdio.h>

struct Student {
    int id;
    char name[50];
    int age;
    char toan[15];
    char ly[50];
    char hoa[50];
    char sinh[50];
    char van[50];
    
};

int main() {
    // khai bao danh sach sinh vien
    struct Student students[] = {
        {1, "Nguyen Van A", 7.5, "7.0", "5.5","8.5","7.5","7.4"},
        {2, "Nguyen Van B", 7.0, "8.5", "9.0","5.0","6.5","7.7"},
        {3, "Nguyen Van C", 6.5, "7.2", "6.5","10.0","5.5","7.2"},
       
    };

    int numStudents = sizeof(students) / sizeof(students[0]);

    //in tieu de bang
    printf("%-5s| %-15s| %-10s| %-10s| %-10s| %-10s| %-10s| %-10s\n", "STT", "ho va ten", "toan", "ly ", "hoa","sinh","van","diem trung binh");
    printf("----------------------------------------------------------------------------------------------------------\n");

    //in danh sach sinh vien
    for (int i = 0; i < numStudents; i++) {
        printf("%-5d| %-15s| %-10d| %-10s| %-10s| %-10s| %-10s| %-10s\n", 
               students[i].id, students[i].name, students[i].age, students[i].toan, students[i].ly,students[i].hoa,students[i].sinh,students[i].van);
    }

    return 0;
}
