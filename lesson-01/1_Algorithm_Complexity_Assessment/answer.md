Потребление времени будет O(n), а потребление памяти будет O(1).

Потребление времени именно такое, т.к. у нас в программе есть только один цикл, который проходится по всем элементам массива и если увеличить массив в `х` раз, то и время прохода по массиву увеличится в `x` раз. Поэтому можно судить, что потребление времени линейно. Например, будь у нас два цикла и если каждый проходился бы по всему массиву, то потребления времени было бы O(n<sup>2</sup>). А, например, если бы мы проходились циклом и с каждым проходом уменьшали бы массив в два раза, то тогда потребление времени было бы O(log<sub>2</sub>n)

Потребление памяти О(1) - константно, т.к. память выделяется только под хранение чисел. Нету выделения памяти под большие объемы данных. А при потреблении данных в асимптотике обычно не учитываются входные данные.

Time consumption will be O(n) and memory consumption will be O(1).

The consumption of time is exactly like this, because... We have only one loop in the program, which goes through all the elements of the array, and if we increase the array by `x` times, then the time it takes to traverse the array will increase by `x` times. Therefore, we can judge that time consumption is linear. For example, if we had two loops and if each loop traversed the entire array, then the time consumption would be O(n<sup>2</sup>). And, for example, if we went through a loop and with each pass we reduced the array by half, then the time consumption would be O(log<sub>2</sub>n)

Memory consumption O(1) is constant, because Memory is allocated only for storing numbers. There is no memory allocation for large amounts of data. And when consuming data in asymptotics, the input data is usually not taken into account.