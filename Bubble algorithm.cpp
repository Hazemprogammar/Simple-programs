#include <iostream>
using namespace std;

// دالة تقوم بطباعة عناصر المصفوفة
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// دالة تقوم بترتيب المصفوفة باستخدام خوارزمية الفقاعة
void bubbleSort(int arr[], int size) {
    // نكرر العملية size - 1 مرات
    for (int i = 0; i < size - 1; i++) {
        // في كل دورة، نقوم بمقارنة كل عنصر مع التالي له
        for (int j = 0; j < size - i - 1; j++) {
            // إذا كان العنصر الحالي أكبر من التالي، نقوم بالتبديل
            if (arr[j] > arr[j + 1]) {
                // التبديل بين arr[j] و arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // تعريف مصفوفة غير مرتبة
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "المصفوفة قبل الترتيب: ";
    printArray(arr, n);

    // استدعاء دالة الترتيب
    bubbleSort(arr, n);

    cout << "المصفوفة بعد الترتيب: ";
    printArray(arr, n);

    return 0;
}
