def determinante2x2(matriz2):
    if len(matriz2) != 2 or len(matriz2[0]) != 2 or len(matriz2[1]) != 2:
        raise ValueError("La matriz debe ser de 2x2")
    determinante = matriz2[0][0] * matriz2[1][1] - matriz2[0][1] * matriz2[1][0]
    return determinante


def determinante3x3(matriz3):
    if len(matriz3) != 3 or len(matriz3[0]) != 3 or len(matriz3[1]) != 3 or len(matriz3[2]) != 3:
        raise ValueError("La matriz debe ser de 3x3")
    determinante = 0 #Inicializamos el determinante en 0
    for i in range(3):
        submatriz = []
        for j in range(1, 3):
            fila = []
            for k in range(3):
                if k != i:
                    fila.append(matriz3[j][k])
            submatriz.append(fila)
        determinante += ((-1) ** i) * matriz3[0][i] * determinante2x2(submatriz)
    return determinante

matrices3 = [
    [1,2,3],
    [4,5,6],
    [7,8,9]
]
matriza = []
matriz2 = [
    [1,2],
    [3,4]

]
print(determinante2x2(matriz2))
print(determinante3x3(matrices3))