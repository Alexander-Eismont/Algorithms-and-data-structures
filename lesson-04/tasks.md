<details>
<summary><font size="+2"> Задача 1. Вывод изменяемого динамического массива </font></summary><br>

В этом задании нужно реализовать функцию вывода динамического массива целых чисел на экран.

Массив, который вы будете выводить на экран, не просто динамический, а массив, у которого может быть **запас**. Помимо указателя на динамический массив и его **фактический** размер, то есть максимальное количество элементов, которое массив может хранить, вы должны знать его **логический** размер, то есть количество добавленных в этот массив элементов. Поэтому сигнатура вашей функции вывода будет выглядеть так: `void print_dynamic_array(int* arr, int logical_size, int actual_size)`. Эта функция вам потребуется в следующих заданиях.

Помните: логический размер массива не может превышать его фактический размер.

Массив должен выводиться на экран следующим образом: элементы массива, входящие в его логический размер, должны выводиться как есть, а те элементы, которые выходят за границы логического размера, должны выводиться, как символ `_` (нижнее подчёркивание). Элементы массива разделяются символом пробела.

Реализуйте ввод такого динамического массива с пользовательской консоли. Пользователь должен предоставить:
1. Фактический размер массива.
2. Логический размер массива.
3. Элементы для заполнения массива. Их количество будет равно логическому размеру массива.

Вы должны создать массив, который **может** хранить количество элементов, равное фактическому размеру массива.

После ввода пользователем массива с консоли выведите на консоль полученный массив с помощью созданной вами функции `print_dynamic_array`.

<details>
<summary><font size="+1">Примеры работы программы</font></summary>

```
Введите фактичеcкий размер массива: 10
Введите логический размер массива: 7
Введите arr[0]: 1
Введите arr[1]: 2
Введите arr[2]: 3
Введите arr[3]: 4
Введите arr[4]: 5
Введите arr[5]: 6
Введите arr[6]: 7
Динамический массив: 1 2 3 4 5 6 7 _ _ _
```

```
Введите фактичеcкий размер массива: 8
Введите логический размер массива: 9
Ошибка! Логический размер массива не может превышать фактический!
```

```
Введите фактичеcкий размер массива: 5
Введите логический размер массива: 5
Введите arr[0]: 1
Введите arr[1]: 2
Введите arr[2]: 3
Введите arr[3]: 4
Введите arr[4]: 5
Динамический массив: 1 2 3 4 5
```

```
Введите фактичеcкий размер массива: 12
Введите логический размер массива: 4
Введите arr[0]: 1
Введите arr[1]: 2
Введите arr[2]: 3
Введите arr[3]: 4
Динамический массив: 1 2 3 4 _ _ _ _ _ _ _ _
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 1. Output of a mutable dynamic array</font></summary><br>

In this task you need to implement a function to display a dynamic array of integers on the screen.

The array that you will display on the screen is not just dynamic, but an array that may have **margin**. In addition to the pointer to the dynamic array and its **actual** size, that is, the maximum number of elements the array can store, you must know its **logical** size, that is, the number of elements added to this array. Therefore, the signature of your output function will look like this: `void print_dynamic_array(int* arr, int logical_size, int actual_size)`. You will need this function in the following tasks.

Remember: the logical size of an array cannot exceed its actual size.

The array should be displayed as follows: elements of the array that are within its logical size should be displayed as is, and those elements that are outside the boundaries of the logical size should be displayed as the `_` (underscore) character. Array elements are separated by a space character.

Implement input of such a dynamic array from the user console. The user must provide:
1. Actual size of the array.
2. Logical size of the array.
3. Elements to fill the array. Their number will be equal to the logical size of the array.

You should create an array that **can** store a number of elements equal to the actual size of the array.

After the user enters an array from the console, print the resulting array to the console using the `print_dynamic_array` function you created.

<details>
<summary><font size="+1">Examples of program operation</font></summary>

```
Enter the actual array size: 10
Enter logical array size: 7
Enter arr[0]: 1
Enter arr[1]: 2
Enter arr[2]: 3
Enter arr[3]: 4
Enter arr[4]: 5
Enter arr[5]: 6
Enter arr[6]: 7
Dynamic array: 1 2 3 4 5 6 7 _ _ _
```

```
Enter the actual array size: 8
Enter logical array size: 9
Error! The logical size of the array cannot exceed the actual size!
```

```
Enter the actual array size: 5
Enter logical array size: 5
Enter arr[0]: 1
Enter arr[1]: 2
Enter arr[2]: 3
Enter arr[3]: 4
Enter arr[4]: 5
Dynamic array: 1 2 3 4 5
```

```
Enter the actual array size: 12
Enter logical array size: 4
Enter arr[0]: 1
Enter arr[1]: 2
Enter arr[2]: 3
Enter arr[3]: 4
Dynamic array: 1 2 3 4 _ _ _ _ _ _ _ _
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 2. Добавление в изменяемый динамический массив</font></summary><br>

В этом задании вам нужно реализовать функцию добавления нового элемента в конец динамического массива целых чисел `append_to_dynamic_array`.

Добавление элемента будет происходить по алгоритму: если логический размер массива меньше фактического, то вы добавляете новый элемент в **запас** вашего массива и увеличиваете его логический размер на 1.

Если логический размер массива равен его фактическому размеру, тогда создаётся новый массив размером в 2 раза больше. В него перекладываются элементы из старого массива вместе с новым элементом в конце. Фактический и логический размеры массива изменяют своё значение. Логический размер увеличивается на единицу, фактический размер увеличивается в два раза, старый массив уничтожается. Далее программа должна работать уже с новым массивом.

Организуйте интерактивное взаимодействие с пользователем. Ваша программа будет работать по алгоритму:
1. Пользователь вводит фактический размер массива.
2. Пользователь вводит логический размер массива.
3. Пользователь вводит элементы для заполнения массива. Их количество будет равно логическому размеру массива.
4. Программа выводит введённый массив на консоль с помощью функции `print_dynamic_array` из прошлого задания.
5. Пользователь вводит новый элемент для добавления в конец. Ввод элементов заканчивается, если пользователь введёт специальное значение (например, `0`).
6. Программа выводит массив с добавленным элементом.
7. Пункты `5` и `6` повторяются до тех пор, пока пользователь не введёт специальное значение (например, `0`).
8. Программа прощается, выводит окончательное состояние динамического массива и завершает свою работу.

Подумайте над тем, какая сигнатура будет у вашей функции и как вы будете хранить фактический и логический размеры вашего массива.

<details>
<summary><font size="+1">Примеры работы программы</font></summary>

```
Введите фактичеcкий размер массива: 3
Введите логический размер массива: 2
Введите arr[0]: 1
Введите arr[1]: 2
Динамический массив: 1 2 _
Введите элемент для добавления: 9
Динамический массив: 1 2 9
Введите элемент для добавления: 7
Динамический массив: 1 2 9 7 _ _
Введите элемент для добавления: 4
Динамический массив: 1 2 9 7 4 _
Введите элемент для добавления: 0
Спасибо! Ваш массив: 1 2 9 7 4 _
```

```
Введите фактичеcкий размер массива: 8
Введите логический размер массива: 9
Ошибка! Логический размер массива не может превышать фактический!
```

```
Введите фактичеcкий размер массива: 5
Введите логический размер массива: 3
Введите arr[0]: 1
Введите arr[1]: 2
Введите arr[1]: 3
Динамический массив: 1 2 3 _ _
Введите элемент для добавления: -4
Динамический массив: 1 2 3 -4 _
Введите элемент для добавления: 12
Динамический массив: 1 2 3 -4 12
Введите элемент для добавления: 6
Динамический массив: 1 2 3 -4 12 6 _ _ _ _
Введите элемент для добавления: 0
Спасибо! Ваш массив: 1 2 3 -4 12 6 _ _ _ _
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 2. Adding to a mutable dynamic array</font></summary><br>

In this assignment, you need to implement a function to append a new element to the end of a dynamic array of integers, `append_to_dynamic_array`.

Adding an element will occur according to the algorithm: if the logical size of the array is less than the actual size, then you add a new element to the **stock** of your array and increase its logical size by 1.

If the logical size of an array is equal to its actual size, then a new array of 2 times the size is created. Elements from the old array are transferred into it along with a new element at the end. The actual and logical sizes of the array change their value. The logical size is increased by one, the actual size is doubled, and the old array is destroyed. Next, the program should work with the new array.

Organize interactive interaction with the user. Your program will work according to the algorithm:
1. The user enters the actual size of the array.
2. The user enters the logical size of the array.
3. The user enters elements to fill the array. Their number will be equal to the logical size of the array.
4. The program displays the entered array to the console using the `print_dynamic_array` function from the previous task.
5. The user enters a new element to append to the end. Element entry ends if the user enters a special value (for example, `0`).
6. The program displays an array with the added element.
7. Points `5` and `6` are repeated until the user enters a special value (for example, `0`).
8. The program says goodbye, displays the final state of the dynamic array and completes its work.

Think about what your function signature will be and how you will store the actual and logical sizes of your array.

<details>
<summary><font size="+1">Examples of program operation</font></summary>

```
Enter the actual array size: 3
Enter logical array size: 2
Enter arr[0]: 1
Enter arr[1]: 2
Dynamic array: 1 2 _
Enter item to add: 9
Dynamic array: 1 2 9
Enter item to add: 7
Dynamic array: 1 2 9 7 _ _
Enter item to add: 4
Dynamic array: 1 2 9 7 4 _
Enter item to add: 0
Thank you! Your array: 1 2 9 7 4 _
```

```
Enter the actual array size: 8
Enter logical array size: 9
Error! The logical size of the array cannot exceed the actual size!
```

```
Enter the actual array size: 5
Enter logical array size: 3
Enter arr[0]: 1
Enter arr[1]: 2
Enter arr[1]: 3
Dynamic array: 1 2 3 _ _
Enter element to add: -4
Dynamic array: 1 2 3 -4 _
Enter item to add: 12
Dynamic array: 1 2 3 -4 12
Enter item to add: 6
Dynamic array: 1 2 3 -4 12 6 _ _ _ _
Enter item to add: 0
Thank you! Your array: 1 2 3 -4 12 6 _ _ _ _
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 3*. Удаление первого элемента из изменяемого динамического массива</font></summary><br>

Вам нужно реализовать функцию удаления элемента из начала динамического массива целых чисел `remove_dynamic_array_head`.

Удаление элемента будет происходить по алгоритму: если логический размер массива, уменьшенный на единицу, строго больше одной трети фактического размера, то вы сдвигаете все элементы массива, кроме первого, влево на 1, таким образом удаляется первый элемент массива, и уменьшаем логический размер массива на 1.

Если логический размер массива, уменьшенный на единицу, меньше или равен одной трети его фактического размера, тогда создаётся новый массив размером в 3 раза меньше. В него перекладываются элементы из старого массива, кроме первого, со сдвигом индекса на 1 влево. Фактический и логический размеры массива изменяют своё значение. Логический размер уменьшается на единицу, фактический размер уменьшается в три раза, старый массив уничтожается. Далее программа должна работать уже с новым массивом.

Организуйте интерактивное взаимодействие с пользователем. Ваша программа будет работать по алгоритму:
1. Пользователь вводит фактический размер массива.
2. Пользователь вводит логический размер массива.
3. Пользователь вводит элементы для заполнения массива. Их количество будет равно логическому размеру массива.
4. Программа выводит введённый массив на консоль с помощью функции `print_dynamic_array` из прошлого задания.
5. Программа спрашивает пользователя, нужно ли удалить очередной элемент.
6. Если пользователь отвечает `"да"`, то программа удаляет первый элемент из массива и выводит пользователю на экран обновлённый массив. Если массив опустел (больше удалять нечего), то программа сообщает об этом и завершает свою работу.
7. Если пользователь отвечает `"нет"`, то программа благодарит пользователя, выводит на экран окончательное состояние массива и завершает свою работу.
8. Программа повторяет пункт `5` до тех пор, пока пользователь не ответит `"нет"`, или пока массив не опустеет.

Подумайте над тем, какая сигнатура будет у вашей функции и как вы будете хранить фактический и логический размеры вашего массива.

<details>
<summary><font size="+1">Примеры работы программы</font></summary>

```
Введите фактичеcкий размер массива: 3
Введите логический размер массива: 2
Введите arr[0]: 1
Введите arr[1]: 2
Динамический массив: 1 2 _
Удалить первый элемент? да
Динамический массив: 2
Удалить первый элемент? да
Динамический массив: _
Удалить первый элемент? да
Невозможно удалить первый элемент, так как массив пустой. До свидания!
```

```
Введите фактичеcкий размер массива: 8
Введите логический размер массива: 9
Ошибка! Логический размер массива не может превышать фактический!
```

```
Введите фактичеcкий размер массива: 5
Введите логический размер массива: 3
Введите arr[0]: 1
Введите arr[1]: 2
Введите arr[2]: 3
Динамический массив: 1 2 3 _ _
Удалить первый элемент? да
Динамический массив: 2 3 _ _ _
Удалить первый элемент? да
Динамический массив: 3
Удалить первый элемент? нет
Спасибо! Ваш динамический массив: 3
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 3*. Removing the first element from a mutable dynamic array</font></summary><br>

You need to implement a function to remove an element from the head of a dynamic array of integers `remove_dynamic_array_head`.

Removing an element will occur according to the algorithm: if the logical size of the array, reduced by one, is strictly more than one third of the actual size, then you shift all elements of the array, except the first, to the left by 1, thus removing the first element of the array, and reduce the logical size of the array by 1.

If the logical size of an array reduced by one is less than or equal to one third of its actual size, then a new array of 3 times the size is created. Elements from the old array are transferred to it, except for the first one, with the index shifted by 1 to the left. The actual and logical sizes of the array change their value. The logical size is reduced by one, the actual size is reduced by three times, and the old array is destroyed. Next, the program should work with the new array.

Organize interactive interaction with the user. Your program will work according to the algorithm:
1. The user enters the actual size of the array.
2. The user enters the logical size of the array.
3. The user enters elements to fill the array. Their number will be equal to the logical size of the array.
4. The program displays the entered array to the console using the `print_dynamic_array` function from the previous task.
5. The program asks the user whether the next element needs to be deleted.
6. If the user answers `"yes"`, then the program removes the first element from the array and displays the updated array to the user. If the array is empty (there is nothing more to delete), the program reports this and exits.
7. If the user answers `"no"`, then the program thanks the user, displays the final state of the array and exits.
8. The program repeats step `5` until the user answers `"no"`, or until the array is empty.

Think about what your function signature will be and how you will store the actual and logical sizes of your array.

<details>
<summary><font size="+1">Examples of program operation</font></summary>

```
Enter the actual array size: 3
Enter logical array size: 2
Enter arr[0]: 1
Enter arr[1]: 2
Dynamic array: 1 2 _
Remove first element? Yes
Dynamic array: 2
Remove first element? Yes
Dynamic array: _
Remove first element? Yes
The first element cannot be removed because the array is empty. Goodbye!
```

```
Enter the actual array size: 8
Enter logical array size: 9
Error! The logical size of the array cannot exceed the actual size!
```

```
Enter the actual array size: 5
Enter logical array size: 3
Enter arr[0]: 1
Enter arr[1]: 2
Enter arr[2]: 3
Dynamic array: 1 2 3 _ _
Remove first element? Yes
Dynamic array: 2 3 _ _ _
Remove first element? Yes
Dynamic array: 3
Remove first element? No
Thank you! Your dynamic array: 3
```


```
Enter the actual array size: 9
Enter logical array size: 7
Enter arr[0]: 1
Enter arr[1]: 2
Enter arr[2]: 3
Enter arr[3]: 4
Enter arr[4]: 5
Enter arr[5]: 6
Enter arr[6]: 7
Dynamic array: 1 2 3 4 5 6 7 _ _
Remove first element? Yes
Dynamic array: 2 3 4 5 6 7 _ _ _
Remove first element? Yes
Dynamic array: 3 4 5 6 7 _ _ _ _
Remove first element? Yes
Dynamic array: 4 5 6 7 _ _ _ _ _
Remove first element? Yes
Dynamic array: 5 6 7
Remove first element? Yes
Dynamic array: 6 7 _
Remove first element? No
Thank you! Your dynamic array: 6 7 _
```
</details>
</details>