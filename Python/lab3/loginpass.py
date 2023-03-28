def cos():
    login = list()
    password = list()

    while True:
        loginInput = input("Login: ")
        passwordInput = input('Password: ')
        if loginInput == 'STOP' or passwordInput == 'STOP':
            break

        login.append(loginInput)
        password.append(passwordInput)

    slownik = dict(zip(login, password))