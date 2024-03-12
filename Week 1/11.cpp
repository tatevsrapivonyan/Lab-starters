#include <iostream>

int main() {
    int array1[] = {1, 2, 3, 4};
    int array2[] = {5, 6, 7};

    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    int maxSize = (size1 > size2) ? size1 : size2;

    for (int i = 0; i < maxSize; ++i) {
        if (i < size1)
            std::cout << "Array 1 element " << i << ": " << array1[i] << std::endl;
        if (i < size2)
            std::cout << "Array 2 element " << i << ": " << array2[i] << std::endl;
    }

    return 0;
}
