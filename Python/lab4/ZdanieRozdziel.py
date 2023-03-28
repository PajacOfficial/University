def rozdziel(text):
    character  = input('Podaj znak: ')
    result1 = text.split(character)
    print(f'Zdan rozdzielonych przez [{character}]: {text.count(character)}')
    for x in range(len(result1)):
        print(f'Ilosc slow w zdaniu [{x}]: {result1[x].count(" ")+1}')
    return result1