<details>
<summary><font size="+2">Задача 1. Оценка алгосложности программы</font></summary><br>

Дан код на языке `C++`. Ваша задача понять и описать, что он делает, определить его асимптотику, то есть время и дополнительную память, и привести аргументы, почему она именно такая.

```cpp
int calc(int* arr, int size)
{
  int ans = 0;
  for (int i = 1; i < size; i++)
  {
    ans += arr[i] - arr[i-1];
  }
  return ans;
}
```

### Правила приёма домашней работы

1. Задание нужно сдавать, указывая сложность алгоритма по скорости и по памяти.
2. Результатом выполнения задания должен быть текстовый ответ, написание кода не требуется.
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 1. Assessing the algorithmic complexity of the program</font></summary><br>

The code is given in `C++` language. Your task is to understand and describe what it does, determine its asymptotics, that is, time and additional memory, and give arguments why it is this way.

```cpp
int calc(int* arr, int size)
{
  int ans = 0;
  for (int i = 1; i < size; i++)
  {
    ans += arr[i] - arr[i-1];
  }
  return ans;
}
```

### Rules for accepting homework

1. The assignment must be submitted indicating the complexity of the algorithm in terms of speed and memory.
2. The result of the task should be a text answer; no coding is required.
</details>
</details>
<br>


<details>
<summary><font size="+2">Задача 2. Поиск в массиве</font></summary><br>

Вам нужно написать функцию, которая принимает на вход отсортированный массив целых чисел и целое число. Назовём его `точкой отсчёта`. Функция должна посчитать количество элементов в массиве, которые больше, чем переданное в функцию целое число — то есть больше, чем `точка отсчёта`. Требуемая алгоритмическая сложность: время O(log<sub>2</sub>n), дополнительная память O(1).

Затем нужно протестировать написанную функцию. `Точку отсчёта` спрашивайте в начале работы программы у пользователя, а отсортированный массив сделайте автоматическим, например `[14, 16, 19, 32, 32, 32, 56, 69, 72]`.

Подумайте, как бы вы решили эту задачу, как достигли бы требуемой асимптотики.

<details>
<summary><font size="+1">Пример работы программы</font></summary>

Исходный массив: `[14, 16, 19, 32, 32, 32, 56, 69, 72]`

```
Введите точку отсчёта: 32
Количество элементов в массиве больших, чем 32: 3
```

```
Введите точку отсчёта: 15
Количество элементов в массиве больших, чем 15: 8
```
</details>
</details>
<br>


<details>
<summary><font size="+2">Task 2. Searching an array</font></summary><br>

You need to write a function that takes as input a sorted array of integers and an integer. Let's call it the 'reference point'. The function must count the number of elements in the array that are greater than the integer passed to the function - that is, greater than the `reference point'. Required algorithmic complexity: time O(log<sub>2</sub>n), additional memory O(1).

Then you need to test the written function. Ask the user for the `reference point` at the beginning of the program, and make the sorted array automatic, for example `[14, 16, 19, 32, 32, 32, 56, 69, 72]`.

Think about how you would solve this problem, how you would achieve the required asymptotics.

<details>
<summary><font size="+1">Example of how the program works</font></summary>

Source array `[14, 16, 19, 32, 32, 32, 56, 69, 72]`

```
Enter reference point: 32
Number of elements in the array greater than 32: 3
```

```
Enter reference point: 15
Number of elements in the array greater than 15: 8
```
</details>
</details>
<br>
