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
// implement unique ptr
template <typename T>
class MyUniquePtr
{
    T *_ptr;

public:
    // default ctor
    MyUniquePtr() : _ptr(nullptr) {}

    // ctor overload
    MyUniquePtr(T *ptr) : _ptr(ptr) {}

    // delete copy ctor
    MyUniquePtr(const MyUniquePtr &source) = delete;

    // delete copy assignment operator
    MyUniquePtr &operator=(const MyUniquePtr &source) = delete;

    // define move constructor
    MyUniquePtr(MyUniquePtr &&source)
    {
        this->_ptr = source->_ptr;
        source->ptr = nullptr;
    }
    // overload move assignment operator
    MyUniquePtr &operator=(const MyUniquePtr &&source)
    {
        this->_ptr = source->_ptr;
        source->ptr = nullptr;
    }
    // overlaod * operator
    T &operator*()
    {
        return *(this->_ptr);
    }
    ~MyUniquePtr()
    {
        if (_ptr != NULL)
            delete (_ptr);
    }
    // //NOT WORKING
    // T* operator->() // obtaining pointer using arrow operator
    // {
    //     return this->_ptr;
    // }
};

// void checkptr()
// {
//     MyUniquePtr<int> ptr(new int);
// }

// int main()
// {
//     unique_ptr<int> ptr = make_unique<int>(new int);
//     *ptr = 10;
// }

// Implement shared ptr
template <typename T>
class MySharedPtr
{

    T *_ptr;
    int *_ref_count;

public:
    MySharedPtr() : _ptr(nullptr), _ref_count(new int(0)){}

    MySharedPtr(T *ptr) : _ptr(ptr), _ref_count(new int(1)){}

    MySharedPtr(const MySharedPtr &source)
    {
        cout<<"Copy ctor called\n";
        this->_ptr = source._ptr;
        this->_ref_count = source._ref_count;
        if (source._ptr != nullptr)
        {
            *this->_ref_count++;
        }
    }
    MySharedPtr &operator=(const MySharedPtr &source)
    {
        
        this->_ptr = source->_ptr;
        this->_ref_count = source->_ref_count;
        if (source->_ptr != nullptr)
        {
            *this->_ref_count++;
        }
    }

    MySharedPtr(const MySharedPtr &&source)
    {
        this->_ptr = source->_ptr;
        this->_ref_count = source->_ref_count;

        source->_ptr = nullptr;
        source->_ref_count = nullptr;
    }

    int use_count()
    {
        return *_ref_count;
    }

    T *get()
    {
        return this->_ptr;
    }

    T &operator*()
    {
        return *(this->_ptr);
    }

    T *operator->()
    {
        return this->_ptr;
    }

    ~MySharedPtr()
    {
        
		(*_ref_count)--;
		if (*_ref_count == 0)
		{
			if (nullptr != _ptr)
				delete _ptr;
			delete _ref_count;
		}
	
        // if (this->_ptr != nullptr)
        // {
        //     *_ref_count--;
        //     if (*_ref_count == 0)
        //     {
        //         delete _ptr;
        //         delete _ref_count;
        //     }
        // }
    }
};

int main(){
    MySharedPtr<int> sptr = MySharedPtr(new int);
    *sptr = 10;
    MySharedPtr<int> p  = sptr;
    cout<<*sptr;
}


template<typename T>
class Uptr{

    T * _ptr;

    Uptr() : _ptr(nullptr) {}

    Uptr(T * ptr) : _ptr(ptr) {}


};