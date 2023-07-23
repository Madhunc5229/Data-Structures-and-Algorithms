//Templates
#include <iostream>
using namespace std;

// // function overlaoding avoided using templates
// template<typename T>
// void print(T value){
//     cout<<value<<"\n";
// }


// int main(){
//     //each time a new template is passes an instance of template function will be created
//     print(5);
//     print("hi");
//     print(5.46464);
// }


// //implement STL array using Templates

// template<typename T, int n_size>
// class STLArray{
// public:
//     STLArray()  {T arr[n_size];}
    
//     int getSize(){
//         return n_size;
//     }
// };

// int main(){
//     STLArray<int,5> int_array;
//     cout<<int_array.getSize();
// }