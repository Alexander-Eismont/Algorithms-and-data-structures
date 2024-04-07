<details>
<summary><font size="+2">Задача 1. Наивная хэш-функция для строки</font></summary><br>

Вам нужно реализовать функцию, которая рассчитывает хэш для строки с помощью наивного алгоритма. Функция будет называться `simple_string_hash`.

Функция должна принимать на вход строку, а возвращать хэш этой функции — целое число. Наивный алгоритм вычисления хэша строки заключается в сложении кодов всех символов строки.

После написания функции её необходимо протестировать. Для этого организуйте работу с пользователем: просите его ввести строку и в ответ выводите на консоль значение хэша этой строки, посчитанного по реализованному вами алгоритму. Делайте это до тех пор, пока пользователь не введёт `exit`. Когда пользователь введёт `exit`, посчитайте хэш этой строки, выведите его на консоль и завершите работу программы.

Подумайте, какая сигнатура должна быть у функции `simple_string_hash`.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

```
Введите строку: hello
Наивный хэш строки hello = 532
Введите строку: olleh
Наивный хэш строки olleh = 532
Введите строку: world
Наивный хэш строки world = 552
Введите строку: w
Наивный хэш строки w = 119
Введите строку: exit
Наивный хэш строки exit = 442
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 1. Naive hash function for a string</font></summary><br>

You need to implement a function that calculates the hash for a string using a naive algorithm. The function will be called `simple_string_hash`.

The function must take a string as input and return the hash of this function - an integer. A naive algorithm for calculating a hash of a string is to add the codes of all the characters in the string.

After writing a function, it needs to be tested. To do this, organize your work with the user: ask him to enter a string and, in response, display on the console the hash value of this string, calculated according to the algorithm you implemented. Do this until the user types `exit`. When the user enters `exit`, calculate the hash of this line, print it to the console and exit the program.

Think about what signature the `simple_string_hash` function should have.

<details>
<summary><font size="+1">Example of program operation</font></summary>

```
Enter the string: hello
Naive hash of the string hello = 532
Enter the string: olleh
Naive string hash olleh = 532
Enter the line: world
Naive hash of the string world = 552
Enter the string: w
Naive string hash w = 119
Enter the line: exit
Naive hash of the string exit = 442
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 2. Настоящая хэш-функция для строки</font></summary><br>

Вам нужно реализовать функцию, которая рассчитывает хэш для строки с помощью серьёзного алгоритма. Функция будет называться `real_string_hash`.

Функция должна принимать на вход строку, а возвращать хэш этой функции — целое число. Настоящий алгоритм вычисления хэша для строки выглядит так: берётся простое число `p` и число `n` — модуль. Простое число — число, у которого нет целых делителей, кроме единицы и самого числа. Затем код каждого символа строки умножается на `p` в степени индекса этого символа, полученные числа складываются. В конце берётся остаток от деления получившейся суммы на число `n` — это и будет хэш.

После написания функции её необходимо протестировать. Для этого организуйте работу с пользователем: попросите его задать числа `p` и `n`. Они будут использоваться в работе программы. Просите его ввести строку и в ответ выводите на консоль значение хэша этой строки, посчитанного по реализованному вами алгоритму. Делайте это до тех пор, пока пользователь не введёт `exit`. Когда пользователь введёт `exit`, посчитайте хэш этой строки, выведите его на консоль и завершите работу программы.

Поэкспериментируйте с разными значениями `p` и `n`. Посмотрите, что происходит, если `n` сделать достаточно маленьким, меньше 5.

Следите за размером используемых переменных. [Размеры](https://en.cppreference.com/w/cpp/language/types)

Также ответ можно сохранить в массив по цифре в ячейке. Для хранения промежуточных значений лучше использовать [uint64_t или long long](https://learn.microsoft.com/ru-ru/cpp/c-runtime-library/standard-types?view=msvc-170)

<details>
<summary><font size="+1">Пример работы программы</font></summary>

```
Введите p: 29
Введите n: 1000
Введите строку: hello
Хэш строки hello = 64
Введите строку: olleh
Хэш строки olleh = 584
Введите строку: world
Хэш строки world = 324
Введите строку: w
Хэш строки w = 119
Введите строку: exit
Хэш строки exit = 10
```

```
Введите p: 83
Введите n: 1000
Введите строку: hello
Хэш строки hello = 830
Введите строку: olleh
Хэш строки olleh = 662
Введите строку: world
Хэш строки world = 478
Введите строку: w
Хэш строки w = 119
Введите строку: exit
Хэш строки exit = 698
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 2: Real hash function for a string</font></summary><br>

You need to implement a function that calculates the hash for a string using a serious algorithm. The function will be called `real_string_hash`.

The function must take a string as input and return the hash of this function - an integer. The real algorithm for calculating a hash for a string looks like this: take the prime number `p` and the number `n` - the modulus. A prime number is a number that has no integer divisors other than one and the number itself. Then the code of each character in the string is multiplied by `p` to the power of the index of this character, and the resulting numbers are added together. At the end, the remainder of dividing the resulting amount by the number `n` is taken - this will be the hash.

After writing a function, it needs to be tested. To do this, organize the work with the user: ask him to specify the numbers `p` and `n`. They will be used in the program. Ask him to enter a string and in response, display on the console the hash value of this string, calculated according to the algorithm you implemented. Do this until the user types `exit`. When the user enters `exit`, calculate the hash of this line, print it to the console and exit the program.

Experiment with different values for `p` and `n`. See what happens if `n` is made small enough, less than 5.

Keep track of the size of the variables used. [Dimensions](https://en.cppreference.com/w/cpp/language/types)

You can also save the answer into an array by number in the cell. To store intermediate values, it is better to use [uint64_t or long long](https://learn.microsoft.com/ru-ru/cpp/c-runtime-library/standard-types?view=msvc-170)

<details>
<summary><font size="+1">Example of program operation</font></summary>

```
Enter p: 29
Enter n: 1000
Enter the string: hello
String hash hello = 64
Enter the string: olleh
String hash olleh = 584
Enter the line: world
String hash world = 324
Enter the string: w
String hash w = 119
Enter the line: exit
String hash exit = 10
```

```
Enter p: 83
Enter n: 1000
Enter the string: hello
String hash hello = 830
Enter the string: olleh
String hash olleh = 662
Enter the line: world
String hash world = 478
Enter the string: w
String hash w = 119
Enter the line: exit
String hash exit = 698
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 3. Упрощённый алгоритм Рабина-Карпа</font></summary><br>

В этом задании вам нужно реализовать функцию, которая находит в предоставленной строке заданную подстроку с помощью упрощённого алгоритма Рабина-Карпа. Назовём её `find_substring_light_rabin_karp`.

Функция должна принимать на вход две строки: в одной вы будете искать подстроку, а вторая будет этой подстрокой. Функция должна возвращать индекс найденной подстроки в строке. Если подстрока не была найдена, то возвращается `-1`.

После написания функции её необходимо протестировать. Для этого организуйте работу с пользователем. Попросите его ввести строку. В этой строке вы будете искать подстроки.
Дальше попросите пользователя ввести подстроку, которую надо найти в введённой ранее строке. Программа должна вывести на консоль индекс найденной подстроки, а если подстрока не была найдена, то программа должна сообщить об этом пользователю.
Продолжайте спрашивать у пользователя подстроку до тех пор, пока он не введёт `exit`. После того, как он ввёл `exit`, попытайтесь найти подстроку `exit`, сообщите пользователю о результате и завершите работу программы.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

```
Введите строку, в которой будет осуществляться поиск: hellohellomydearfriend
Введите подстроку, которую нужно найти: hello
Подстрока hello найдена по индексу 0
Введите подстроку, которую нужно найти: lomy
Подстрока lomy найдена по индексу 8
Введите подстроку, которую нужно найти: year
Подстрока year не найдена
Введите подстроку, которую нужно найти: exit
Подстрока exit не найдена
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 3. Simplified Rabin-Karp algorithm</font></summary><br>

In this assignment, you need to implement a function that finds a given substring in a given string using the simplified Rabin-Karp algorithm. Let's call it `find_substring_light_rabin_karp`.

The function should take two strings as input: in one you will look for a substring, and the second will be this substring. The function should return the index of the found substring in the string. If the substring was not found, then `-1` is returned.

After writing a function, it needs to be tested. To do this, organize work with the user. Ask him to enter a string. In this string you will search for substrings.
Next, ask the user to enter the substring that needs to be found in the previously entered string. The program should display the index of the found substring to the console, and if the substring was not found, the program should inform the user about this.
Continue asking the user for the substring until he types `exit`. After he has entered `exit`, try to find the substring `exit`, inform the user of the result and exit the program.
<details>
<summary><font size="+1">Example of program operation</font></summary>

```
Enter the search string: hellohellomydearfriend
Enter the substring you want to find: hello
Substring hello found at index 0
Enter the substring you want to find: lomy
Substring lomy found at index 8
Enter the substring you want to find: year
Substring year not found
Enter the substring you want to find: exit
Exit substring not found
```
</details>
</details>
<br>