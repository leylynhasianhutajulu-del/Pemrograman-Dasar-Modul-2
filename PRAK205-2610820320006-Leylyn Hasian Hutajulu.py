import math

# Input A dan B
A, B = map(int, input().split())

# Menghitung alas
C = math.sqrt(B**2 - A**2)

# Menghitung tinggi, keliling, dan luas
tinggi = A
keliling = A + B + C
luas = 0.5 * C * tinggi

# Output
print(f"Alas = {C:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")