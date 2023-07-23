#include <iostream>
#include <memory>
using namespace std;

// // implment smart ptr class for int type
// class SmartPtr
// {

// private:
//     int *_ptr;

// public:
//     SmartPtr(int *ptr) : _ptr(ptr) {}

//     int &operator*()
//     {
//         return *_ptr;
//     }
//     ~SmartPtr()
//     {
//         delete _ptr;
//     }
// };

// int main()
// {
//     // int a=10;
//     SmartPtr smart_ptr(new int);
//     *smart_ptr = 10;
//     cout << *smart_ptr << "\n";
// }

// // Implement shared ptr using templates
// template <class T>
// class Smartptr
// {
// public:
//     Smartptr(T *ptr = NULL) : _ptr(ptr) {}

//     T& operator*()
//     {
//         return *_ptr;
//     }
//     ~Smartptr(){
//         delete _ptr;
//     }

// private:
//     T *_ptr;
// };

// int main()
// {
//     Smartptr<int> ptr(new int);
//     *ptr = 10;
//     cout << *ptr << "\n";
// }

// //smart pointers usage
// class Rectangle {
//     int length;
//     int width;

// public:
//     Rectangle(int l, int w) :length(l), width(w) {}

//     int getlenth(){return length;}

// };

// int main(){
//     //declaring unique ptr method 1
//     unique_ptr<Rectangle> u_ptr1(new Rectangle(5,6));

//     //declaring unique ptr method 2
//     unique_ptr<Rectangle> u_ptr = make_unique<Rectangle>(5,6);

//     //shared ptr
//     shared_ptr<Rectangle> s_ptr2(new Rectangle(10,5));

//     shared_ptr<Rectangle> s_ptr1 = make_shared<Rectangle>(10,5);


//     s_ptr2 = s_ptr2;
//     cout<<u_ptr->getlenth();
// }