def facto(n):
    if n == 0:
        return 1
    else:
        return n * facto(n - 1)

def test_facto():
    assert facto(0) == 1 # Prueba la funcion de manera unitaria con distintos casos
    assert facto(1) == 1
    assert facto(5) == 120

if __name__ == '__main__':
    test_facto()
    print('Todas las pruebas pasaron! ')