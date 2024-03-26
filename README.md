# Creating-a-Multi-File-Project
Структура Прямоугольный Параллелепипед с элементами – a и b – стороны прямоугольника-основания, h – высота параллелепипеда. Находим, у какого из N заданных параллелепипедов объем наименьший.

##Создание статической библиотеки: 

1.	Получаем объектные файлы .o: gcc main.c func.c -c
2.	Создаем статическую библиотеку MY_PRINT, расширение .a из объектного файла с функциями: ar r libMY_PRINT.a func.o
3.	Линкуем (компонуем) библиотеку с объектным файлом main.o(-L - путь до библиотеки, -l – название): gcc main.o -L. -lMY_PRINT -o static_example
4.	Запускаем: ./static_example

##Создание динамической библиотеки:

1.	Объектный файл с главной функцией: gcc -c main.c
2.	Объектный файл для создания дин. либы: gcc -c -fPIC func.c
3.	Собираем дин. библиотеку: gcc -shared -o libMY_PRINT.so func.o
4.	Линковка: gcc -o dyn_example main.o -L. -lMY_PRINT -Wl,-rpath,.
5.	Запуск: ./dyn_example
