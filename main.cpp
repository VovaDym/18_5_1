//Напишите функцию swapvec, принимающую std::vector<int> и указатель на массив переменных типа int (одного размера)
// и обменивающую значения этих массивов.

#include <iostream>
#include <vector>

void swapVec ( std::vector <int>& vec, int *pb)
{
    for(int i = 0; i < vec.size(); ++i)
    {
        int temp;
        temp = vec[i];
        vec[i] = *(pb + i);
        *(pb + i) = temp;
    }
}

int main() {
    std::vector<int> a = {1,2,3,4};
    int b[] = {2,4,6,8};

    swapVec(a,b);

    for(int i = 0; i < 4; ++i)
    {
        std::cout << a[i];
    }

    std::cout << std::endl;

    for(int i = 0; i < 4; ++i)
    {
        std::cout << b[i];
    }
}
