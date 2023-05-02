#include <iostream>
using namespace std;

// تعريف الكلاس Car
class Car {

    // المنطقة الخاصة
    private:
        int horsepowers;

    // المنطقة العامة
    public:
        // تعريف دالة الإعداد (setter) للقوة الحصانية
        void setHorsepowers(int x) {
            horsepowers = x;
            if (horsepowers > 800) {
                cout << "Too much" << endl;
            }
        }

        // تعريف دالة الاسترجاع (getter) للقوة الحصانية
        int getHorsepowers() {
            return horsepowers;
        }
};

int main() {
    // إدخال القوة الحصانية من المستخدم
    int horsepowers;
    cout << "Enter the horsepowers: ";
    cin >> horsepowers;

    // إنشاء كائن من الكلاس Car
    Car car;

    // تعيين قيمة العضو الخاص للكائن
    car.setHorsepowers(horsepowers);

    // طباعة قيمة العضو الخاص للكائن
    cout << "Horsepowers: " << car.getHorsepowers();

    return 0;
}
