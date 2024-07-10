#include <iostream>
using namespace std;

int main() {
    int choice;

    // เริ่มต้นลูป while
    while (true) {
        // แสดงเมนู
        cout << "Menu:" << endl;
        cout << "1. Option 1" << endl;
        cout << "2. Option 2" << endl;
        cout << "3. Option 3" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // ตรวจสอบตัวเลือกที่ผู้ใช้ป้อน
        switch (choice) {
        case 1:
            cout << "You selected Option 1" << endl;
            break;
        case 2:
            cout << "You selected Option 2" << endl;
            break;
        case 3:
            cout << "You selected Option 3" << endl;
            break;
        case 4:
            cout << "Exiting..." << endl;
            return 0;  // จบการทำงานของโปรแกรม
        default:
            cout << "Invalid choice. Please select again." << endl;
        }

        cout << endl;  // เพิ่มบรรทัดใหม่เพื่อความสวยงาม
    }

    return 0;
}
