inicio = int(input("Digite o valor em Fahrenheit: "))
fim = int(input("Digite o valor final em Fahrenheit: "))

print("Fahrenheit | Celsius")


if inicio <= fim:
    for f in range(inicio, fim + 1):
        c = 5 * (f - 32) / 9
        print(f"{f:.1f} °F | {c:.3f} °C")

else:
    for f in range(inicio, fim - 1, -1):
        c = 5 * (f - 32) / 9
        print(f"{f:.1f} °F | {c:.3f} °C")