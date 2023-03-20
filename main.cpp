#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class String
{
private:
    char* value;
    int len=0;
public:
    String (const char* other): value(new char [strlen(other)+1])
    {
        //cout << “KoHcTpyKTop uxuuManu3auuu" << endl;
        while (other[len]!=0) {
            len++;
            value = new char [len+1];
            for (int i=0; i<len; i++) {
                value[i]=other[i];
            }
        }
    }
    String():value(new char [1] {}), len (0) {};
    String(const String & other) 
    {
        //cout << “Конструктор копирования" << endl;
        value= other.value;
        value= new char [strlen(other.value)+1];
        for (int i=0; i<len; i++) {
            value[i]= other.value[i];
        }
    }
        friend ostream & operator<<(ostream & out, const String & other) {
            return out << other.value;
        }
        ~String() {
            delete[] value;
        }
};
int main () 
{
    String other1 = "Hello Word!";
    String other2(other2);
    cout << other1 << endl;
    return 0;
}
