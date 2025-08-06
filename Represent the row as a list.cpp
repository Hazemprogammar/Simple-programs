#include <iostream>
#include <list> // مكتبة القائمة
using namespace std;

class Queue {
private:
    list<int> q; // تمثيل الصف باستخدام قائمة

public:
    // دالة لإضافة عنصر إلى نهاية الصف
    void enqueue(int value) {
        q.push_back(value); // نضيف في النهاية
    }

    // دالة لإزالة العنصر من بداية الصف
    void dequeue() {
        if (!q.empty()) {
            q.pop_front(); // نحذف من البداية
        } else {
            cout << "الصف فارغ!\n";
        }
    }

    // دالة لإظهار العنصر الأول (بدون حذفه)
    int front() {
        if (!q.empty()) {
            return q.front();
        } else {
            cout << "الصف فارغ!\n";
            return -1;
        }
    }

    // دالة لفحص ما إذا كان الصف فارغ
    bool isEmpty() {
        return q.empty();
    }

    // دالة لطباعة محتويات الصف
    void display() {
        for (int item : q) {
            cout << item << " ";
        }
        cout << endl;
    }
};

// البرنامج الرئيسي
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "محتويات الصف: ";
    q.display(); // 10 20 30

    q.dequeue();

    cout << "بعد إزالة عنصر من المقدمة: ";
    q.display(); // 20 30

    cout << "العنصر الأول الآن: " << q.front() << endl; // 20

    return 0;
}
