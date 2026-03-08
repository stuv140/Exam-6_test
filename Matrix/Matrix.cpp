// Matrix.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<memory>
#include"matrix.h"
#include"MAtrixA.h"
#include"MatrixB.h"
#define num 100
int main()
{
    int k = 0;
   std::unique_ptr<Matrica> Matrix[num];
    for (auto i = 0; i < num; ++i)
    {
        if (i % 10 == k) {
            Matrix[i].reset(new MatrixB);
            (Matrix[i])->Set(k);
            
        }
        else {
            Matrix[i].reset(new MatrixA);
        }
        if ((i+1) % 10 == 0) k++;
    }
    k = 0;
    for (auto i = 0; i < num+10; ++i)
    {
        if (i >= 100) {
            std::cout << " "<< - 1 << " ";
        }
        else {
            std::cout <<" "<< (Matrix[i])->GetElement() << " ";
        }
        if (((i + 1) % 10)==0 && i != 0) {
            std::cout << std::endl;
            
        }
        k++;
    }   

    return 0;
}

