// Գրեք ծրագիր, որը ամբողջ թվային զանգվածի բոլոր զույգ էլեմենտները  նույն զանգվածի մեջ՝ կտեղավորի զանգվածի սկզբից, իսկ կենտերը վերջից:

#include <iostream>

int main()
{
    const size_t size = 3;
    int arr[size] {1, 2, 3};
    int brr[size] {4, 5, 6};

    int combined[2 * size];

    for (size_t i = 0; i < size; ++i)
    {
        combined[i] = arr[i];
        combined[size + i ] = brr[i];
    }

    for (size_t i = 0; i < 2 * size; ++i)
    {
        std::cout << combined[i] << " ";
    }
}