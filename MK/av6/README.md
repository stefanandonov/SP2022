# Барања на задачите од аудиториска вежба 6

## Прв колоквиум 2021/2022

### Задача 1 (zad1.c)

Од тастатура се вчитува природен број N, а потоа се вчитуваат последователно информации за N пиксели. За секој пиксел се внесуваат три цели броеви коишто ги претставуваат r, g и b вредностите за соодветниот пиксел. Пикселот е валиден ако секоја од внесените r, g и b вредности е во опсег [0, 255]. Пикселите коишто не се валидни не се земаат во предвид.

Да се имплементира max rgb филтер, којшто за секој валиден пиксел го наоѓа максимумот од вредностите r, g и b и секоја вредност на компонентите на истиот пиксел што е помала од максимумот ја заменува со нула. За секој валиден пиксел се печатат новите вредности по извршената трансформација.

Пример:
Влез:
5
200 100 30
255 123 255
100 100 100
300 120 8
40 80 255

Излез:
200 0 0
255 0 255
100 100 100
0 0 255



### Задача 2 (zad2.c)
Од тастатура се читаат непознат број цели броеви. Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите броеви кои имаат број на делители еднаков на број на цифри на дадениот број.

Влез:
11 23 13 45 6789 48  567 34 a

Излез:
11
23
13

## Прв колоквиум 2020/2021

### Задача 1 (zad3.c)
Од тастатура се читаат непознат број позитивни цели броеви се додека не се внесе нешто различно од број. За секој број треба да се пресмета збирот на цифрата со максимална вредност од претходно внесениот број  и сумата на цифрите на тековниот број (за првиот внесен број се пресметува само сумата на неговите цифри). За секој внесен број резултатот треба да се испечати во следниот формат:

[број]: [сумата на цифрите на бројот + максималната цифра од претходниот број]

342: 9   //3+4+2

345: 16 //3+4+5+4

123: 11 //1+2+3+5

456: 18 //4+5+6+3


## Прв колоквиум 2018/19

## Задача 2 (zad4.c)

Од тастатура се внесува позитивен цел број N. Да се напише програма која ќе го испечати првиот број поголем од N во кој цифрите се во растечки редослед.