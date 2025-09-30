// Datatypes

#include <iostream>
using namespace std;

class DataTypes
{
public:
    void InputDisplay()
    {
        int i;
        float f;
        double d;
        char c;
        bool b;

        cout << "Enter an integer : \n";
        cin >> i;
        cout << "Enter a float : \n";
        cin >> f;
        cout << "Enter a double : \n";
        cin >> d;
        cout << "Enter a character : \n";
        cin >> c;
        cout << "Enter a boolean (0 for false, 1 for true) : \n";
        cin >> b;

        cout << "\n You entered : \n";
        cout << "Integer value : " << i << "\t Size: " << sizeof(i) << " bytes \n";
        cout << "Float value : " << f << "\t Size: " << sizeof(f) << " bytes \n";
        cout << "Double value : " << d << "\t Size: " << sizeof(d) << " bytes \n";
        cout << "Character value : " << c << "\t Size: " << sizeof(c) << " byte \n";
        cout << "Boolean value : " << b << "\t Size: " << sizeof(b) << " byte \n";
    }
};

int main()
{
    DataTypes obj;
    obj.InputDisplay();
    return 0;
}

/* OUTPUT
Enter an integer :
25
Enter a float :
3.5
Enter a double :
3.141592
Enter a character :
a
Enter a boolean (0 for false, 1 for true) :
1

You entered :
Integer value : 25       Size: 4 bytes
Float value : 3.5        Size: 4 bytes
Double value : 3.14159   Size: 8 bytes
Character value : a      Size: 1 byte
Boolean value : 1        Size: 1 byte
*/