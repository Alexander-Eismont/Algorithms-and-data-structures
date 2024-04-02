<details>
<summary><font size="+2">Задача 1. Вывод пирамиды на массиве</font></summary><br>

Вам нужно реализовать на консоль функцию вывода целочисленной пирамиды, реализованной на массиве. Функция будет называться `print_pyramid`.

Ваша пирамида будет храниться на массиве целых чисел, поэтому для вывода вам потребуется знать размер массива, в котором хранится пирамида.

Вывод пирамиды будет выглядеть следующим образом: каждый элемент пирамиды выводится на своей строчке. Перед значением элемента выводится информация, на каком уровне находится элемент, и является элемент левым или правым ребёнком. Корневой элемент находится на уровне `0`, его дети — на уровне `1` и так далее. Левый элемент обозначим `left`, правый — `right` ребёнком. Для корневого элемента будет специальное значение `root`. В скобках после указания левого или правого ребёнка нужно вывести значение того элемента, **чьим** ребёнком является выводимый элемент.

Порядок вывода: уровни пирамиды выводятся слева направо, начиная с самого маленького.

После написания функции её нужно протестировать. Для этого используйте массивы из `примеров работы программы`. Можете сделать их автоматическими.

На консоль необходимо вывести исходный массив, затем должен идти вывод вашей функции.

Подумайте над тем, какая сигнатура должна быть у вашей функции.

<details>
<summary><font size="+1">Примеры работы программы</font></summary>

```
Исходный массив: 1 3 6 5 9 8
Пирамида:
0 root 1
1 left(1) 3
1 right(1) 6
2 left(3) 5
2 right(3) 9
2 left(6) 8 
```

```
Исходный массив: 94 67 18 44 55 12 6 42
Пирамида:
0 root 94
1 left(94) 67
1 right(94) 18
2 left(67) 44
2 right(67) 55
2 left(18) 12
2 right(18) 6
3 left(44) 42 
```

```
Исходный массив: 16 11 9 10 5 6 8 1 2 4
Пирамида:
0 root 16
1 left(16) 11
1 right(16) 9
2 left(11) 10
2 right(11) 5
2 left(9) 6
2 right(9) 8
3 left(10) 1
3 right(10) 2
3 left(5) 4
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 1. Drawing a pyramid on an array</font></summary><br>

You need to implement a console function to display an integer pyramid implemented on an array. The function will be called `print_pyramid`.

Your pyramid will be stored on an array of integers, so for output you will need to know the size of the array in which the pyramid is stored.

The output of the pyramid will look like this: each element of the pyramid is displayed on its own line. Before the value of the element, information is displayed on what level the element is located, and whether the element is a left or right child. The root element is at level `0`, its children are at level `1` and so on. The left element will be denoted by `left`, the right element by `right` by child. The root element will have a special value `root`. In parentheses after specifying the left or right child, you need to print the value of the element **whose** child is the displayed element.

Display order: Pyramid levels are displayed from left to right, starting with the smallest.

After writing a function, it needs to be tested. To do this, use arrays from `examples of program operation`. You can make them automatic.

You need to print the original array to the console, followed by the output of your function.

Think about what signature your function should have.

<details>
<summary><font size="+1">Examples of program operation</font></summary>

```
Source array: 1 3 6 5 9 8
Pyramid:
0 root 1
1 left(1) 3
1 right(1) 6
2 left(3) 5
2 right(3) 9
2 left(6) 8 
```

```
Source array: 94 67 18 44 55 12 6 42
Pyramid:
0 root 94
1 left(94) 67
1 right(94) 18
2 left(67) 44
2 right(67) 55
2 left(18) 12
2 right(18) 6
3 left(44) 42 
```

```
Source array: 16 11 9 10 5 6 8 1 2 4
Pyramid:
0 root 16
1 left(16) 11
1 right(16) 9
2 left(11) 10
2 right(11) 5
2 left(9) 6
2 right(9) 8
3 left(10) 1
3 right(10) 2
3 left(5) 4
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Задача 2. «Путешествие» по пирамиде</font></summary><br>

Вам нужно организовать «путешествие» пользователя по пирамиде.

Дан массив, в котором хранится пирамида. Ваша задача — дать пользователю возможность «путешествовать» по ней.

В начале программы пользователь начинает свой путь в корне пирамиды. Программа спрашивает пользователя, куда он хочет пойти. Пользователь должен ответить на этот вопрос, используя одну из команд:
- `up` — перейти к родителю;
- `left` — перейти к левому потомку;
- `right` — перейти к правому потомку;
- `exit` — завершить работу программы.

Перед каждым вводом команды программа выводит сообщение `Вы находитесь здесь: ` и элемент, на котором сейчас находится пользователь. Элемент выводится аналогично тому, как выводились элементы в **прошлом задании**.

После каждого ввода команды программа выводит результат её выполнения. Если команда была выполнена успешно, выведите на консоль `Ок`. Если выполнить команду не удалось, например, вы ввели команду `up`, находясь в корне пирамиды, выведите на консоль сообщение об ошибке и причину её возникновения: например, `Ошибка! Отсутствует родитель`.

Программа предлагает пользователю вводить команды до тех пор, пока пользователь не введёт команду `exit`. Если пользователь ввёл команду, которой нет в списке, сообщите ему об этом.

Перед началом работы с пользователем выведите на экран исходный массив в виде массива и в виде пирамиды, как в **прошлом задании**.

Для проверки работы программы используйте пирамиды:
- `1 3 6 5 9 8`;
- `94 67 18 44 55 12 6 42`;
- `16 11 9 10 5 6 8 1 2 4`.

Подумайте, какие функции стоит создать, чтобы упростить себе работу.

<details>
<summary><font size="+1">Примеры работы программы</font></summary>

```
Исходный массив: 1 3 6 5 9 8
Пирамида:
0 root 1
1 left(1) 3
1 right(1) 6
2 left(3) 5
2 right(3) 9
2 left(6) 8
Вы находитесь здесь: 0 root 1
Введите команду: right
Ок
Вы находитесь здесь: 1 right(1) 6
Введите команду: right
Ошибка! Отсутствует правый потомок
Вы находитесь здесь: 1 right(1) 6
Введите команду: left
Ок
Вы находитесь здесь: 2 left(6) 8
Введите команду: right
Ошибка! Отсутствует правый потомок
Вы находитесь здесь: 2 left(6) 8
Введите команду: left
Ошибка! Отсутствует левый потомок
Вы находитесь здесь: 2 left(6) 8
Введите команду: up
Ок
Вы находитесь здесь: 1 right(1) 6
Введите команду: up
Ок
Вы находитесь здесь: 0 root 1
Введите команду: up
Ошибка! Отсутствует родитель
Вы находитесь здесь: 0 root 1
Введите команду: exit
```
</details>
</details>
<br>

<details>
<summary><font size="+2">Task 2. “Journey” through the pyramid</font></summary><br>

You need to organize the user's “journey” through the pyramid.

Given an array in which the pyramid is stored. Your task is to give the user the opportunity to “travel” through it.

At the beginning of the program, the user begins his journey at the root of the pyramid. The program asks the user where he wants to go. The user must answer this question using one of the commands:
- `up` — go to the parent;
- `left` — go to the left child;
- `right` — go to the right child;
- `exit` — terminate the program.

Before each command input, the program displays the message `You are here:` and the element on which the user is currently located. The element is displayed in the same way as the elements were displayed in **previous task**.

After each command input, the program displays the result of its execution. If the command was completed successfully, print `Ok` to the console. If the command fails, for example, you entered the `up` command while at the root of the pyramid, print to the console an error message and the reason for its occurrence: for example, `Error! Parent is missing.

The program prompts the user to enter commands until the user enters the `exit` command. If the user entered a command that is not in the list, inform him about it.

Before you start working with the user, display the original array in the form of an array and in the form of a pyramid, as in **last task**.

To check the program's operation, use pyramids:
- `1 3 6 5 9 8`;
- `94 67 18 44 55 12 6 42`;
- `16 11 9 10 5 6 8 1 2 4`.

Think about what features you should create to make your work easier.

<details>
<summary><font size="+1">Examples of program operation</font></summary>

```
Source array: 1 3 6 5 9 8
Pyramid:
0 root 1
1 left(1) 3
1 right(1) 6
2 left(3) 5
2 right(3) 9
2 left(6) 8
You are here: 0 root 1
Enter the command: right
OK
You are here: 1 right(1) 6
Enter the command: right
Error! Right child is missing
You are here: 1 right(1) 6
Enter the command: left
Ок
You are here: 2 left(6) 8
Enter the command: right
Error! Right child is missing
You are here: 2 left(6) 8
Enter the command: left
Error! Left child is missing
You are here: 2 left(6) 8
Enter the command: up
Ок
You are here: 1 right(1) 6
Enter the command: up
Ок
You are here: 0 root 1
Enter the command: up
Error! Missing parent
You are here: 0 root 1
Enter the command: exit
```
</details>
</details>
<br>