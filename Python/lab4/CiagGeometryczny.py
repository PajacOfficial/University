def ciag(n, a=1, q=2):
    print(f'a) a[{n}] = {a * pow(q,n-1)}')
    if q == 1:
        print(f'b) S[{n}] = {a * n}')
    else:
        print(f'b) S[{n}] = {int(a * ((1-pow(q,n))/(1-q)))}')

