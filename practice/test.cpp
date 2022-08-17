#include <iostream>

using namespace std;

class Exception
{
public:
    void report()
    {
        cerr << "Exception report" << endl;
    }
};

class ArrayException : public Exception
{
public:
    void report()  // 오버라이딩
    {
        cerr << "Array Exception report" << endl;
    }
};

class MyArray
{
private:
    int m_data[5];
public:
    int & operator [] (const int & index)
    {
        if (index < 0 || index >= 5) throw 1;
        return m_data[index];
    }
};

void doSomething()
{
    MyArray my_array;
    
    try
    {
        my_array[100];
    }
    catch (ArrayException & e)
    {
        cout << "doSomething()" << endl;
        e.report();
        throw e;  // 👈 re-throw
    }
    catch (Exception & e)
    {
        cout << "doSomething()" << endl;
        e.report();
    }
}

int main()
{
   try
   {
       doSomething();
   }
   catch (ArrayException & e)
   {
       cout << "main()" << endl;
    //    e.report();
   }
   return 0;
}