# # #Utwórz funkcje Poziom: która rysuje gwiazdki poziomo, liczbę gwiazdek podaje użytkownik jako argument funkcji')
# # #Utwórz funkcje Pion: która rysuje gwiazdeki pionowo, liczbę gwiazdek podaje użytkownik jako argument funkcji')
# # obie funkcje są z modułu o nazwie stars

def pion(n):
    for x in range(n):
        print('*')

def poziom(n):
    cos = ""
    for x in range(n):
        cos += "*"
    print(cos)