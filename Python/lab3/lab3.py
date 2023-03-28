# # ################################ Task 1
## Write a program using if statement, for loop, break(), continue() which takes 2 digits: x, y as input and
###### calculate multiplication x*y. The program stops working if x or y is equal to 0.
## Korzystając z instrukcji sterujących napisz program który będzie wczytywał kolejno z klawiatury 2 liczby,
## a następnie obliczał i wyświetlał na ekranie iloczyn wprowadzonych przez użytkownika liczb,
## program kończy działanie jeżeli uzytkownik wprowadzi cyfrę 0. Użytkownik może wykonać obliczenia tylko na
## liczbach całkowitych (wstaw odpowiedni warunek).

#
# x = 1
# y = 1
#
# while True:
#     if x == 0 or y == 0:
#         break
#     else:
#         x = float(input('Podaj liczbe: '))
#         y = float(input('Podaj 2-ga liczbe: '))
#         print(int(x*y))


## # ################################ Task 2
## Napisz program, który wyświetli twoje imię i nazwisko jeżeli użytkownik poda
## właściwe hasło, jedno z 2 do wyboru, (hasła są przechowywane w krotce)

#
# password = ('2208', 'cosik')
#
# print('Piotr Zareba') if input('Podaj haslo: ') in password else print('cos1')


################################## Task 3
## Generate list with 100 random numbers (integer type)
## Ascending sort these odd numbers and print only odd numbers from list.

#
# lista = list()
#
# import random
#
# for x in range(100):
#     lista.append(random.choice(range(100)))
#     lista.sort()
#
# for x in lista:
#     if x % 2 == 0:
#         print(x)
#
# print(lista)

#################### Task 5
## Write a function that calculates the quotient of 3 even numbers
## Utwórz funkcje która obliczy iloraz 3 parzystych liczb, użyj "one line statement"
#
# def quotient(x, y, z):
#     print(x/y/z) if x % 2 == 0 and y % 2 == 0 and z % 2 == 0 else print('cos')
#
# quotient(12,2,2)

# ########################## Task 6
# Utwórz listę złożoną z pojedynczych liter swojego imienia następnie korzystając
# z funkcji lambda połącz kolejne litery w jeden wyraz (swoje imie)

# name = 'Piotr'
# lista = [*name]
#
# result = lambda list: "".join(lista)
#
# print(result(lista))

# ########################## Task  7
# Przypisz do zmiennej wartość która będzie twoim imieniem i nazwiskiem następnie korzystając
# z funkcji lambda rozdziel wyraz na poszczegolne wyrazy, a potem wyrazy na litery
# użyj funkcji list i metody split - dla zmiennych typu string

# fullname = 'Piotr Zareba'
# result1 = lambda name: name.split(" ")
# result2 = lambda result: [*result]
# print(result2(fullname))

# ########################## Task 8
# # Utwórz funkcję która w dowolnym wyrazie (1 argument funkcji)
# # znajdzie dowolną literę (2 argument funkcji)
## użyj lammbda()


# result = lambda word, l: word.count(l)
#
# print(result("cos","s"))

# ########################## Task 9
## Utwórz dwie listy, do każdej z nich niezależnie zapisuj odpowiednio
## podawane przez użytkowników login (pierwsza lista) i hasło (druga lista),
## operacja zapisu jest powtarzana aż do momentu wpisania przez użytkownika "STOP"
## użyj break, continue, enumerate().
## Następnie login-y i hasła zapisz do słownika (login to klucz słownika).
#
# login = list()
# password = list()
#
# while True:
#     loginInput = input("Login: ")
#     passwordInput = input('Password: ')
#     if loginInput == 'STOP' or passwordInput == 'STOP':
#         break
#
#     login.append(loginInput)
#     password.append(passwordInput)
#
# slownik = dict(zip(login, password))


# ########################## Task 10  - Module in Python
# # # Zmodyfikuj poprzednie zadanie, tworząc a następnie importując moduł
# # #Utwórz funkcje Poziom: która rysuje gwiazdki poziomo, liczbę gwiazdek podaje użytkownik jako argument funkcji')
# # #Utwórz funkcje Pion: która rysuje gwiazdeki pionowo, liczbę gwiazdek podaje użytkownik jako argument funkcji')
# # obie funkcje są z modułu o nazwie stars
#
# from loginpass import cos
#
# cos()

# from stars import pion
# from stars import poziom
# poziom(5)
# pion(3)
# poziom(5)
# pion(3)
# poziom(5)
# pion(10)
# poziom(8)



# ########################## Task 11
# # utwórz moduł o nazwie sil, w którym znajdzie się funkcja silnia (użyj lammbda), a następnie korzystając z
# modułu sil, oblicz symbol Newtona dla dowolnych 2 liczb wskazanych przez
# użytkownika(http://www.fizykon.org/wzory/wzory_matem_kombinatoryka.htm)

#
# from silnia import dwumian
#
# print(dwumian(10,8))

# ########################## Task 12
# # Write a script to filter out only the even items from a list (i.e. made from range(1, 100))
# # using filter() and lambda functions.
# #  The numbers obtained should be printed in a comma-separated sequence on a single line.
#
# lista = list()
# for x in range(100):
#     lista.append(x)
# lista = list(filter(lambda x: x % 2 == 0,lista))
# print(lista)

# ########################## Task 13
#### Write a script, using reduce(), which will multiply elements in range (1, 100)

# from functools import reduce
#
# lista = list(range(1,101))
# result = reduce(lambda x, y: x*y, lista)
# print(result)

# ########################## Task 14
### Write a program which will find all such numbers which are
### divisible by 7 but are not a multiple of 5 between 2000 and 3200 (both included)

# result = list()
# for x in range(2000, 3200):
#     if x % 7 == 0 and x % 5 != 0:
#         result.append(x)
# print(result)




