# 1er_Semestre
En este repositorio agregare todo el material realizado en mi primer semestre de ingenieria de codigos, cada codigo hace lo siguiente:

Ordenar 3 números: Lee tres números ingresados por el usuario y los acomoda de menor a mayor (orden ascendente) intercambiando sus posiciones internamente.

Signo zodiacal: Solicita tu día y mes de nacimiento para calcular y mostrar a qué signo del zodiaco perteneces, utilizando una estructura de opciones (switch).

Figuras con asteriscos: Muestra un menú interactivo que te permite dibujar diferentes patrones geométricos (cuadros, triángulos, cruces) hechos con asteriscos, dándote la opción de cambiar el tamaño de la figura en cualquier momento.

Dibujo de figuras geométricas (Menú de asteriscos): Muestra un menú interactivo que permite definir el tamaño de una cuadrícula ($n \times n$). Utiliza ciclos anidados for y condiciones matemáticas basadas en las coordenadas (filas i, columnas j) para dibujar figuras específicas (cuadrados, contornos, triángulos, diagonales y cruces) imprimiendo asteriscos o espacios en blanco.

Búsqueda en arreglo aleatorio: Genera un arreglo unidimensional de 10 posiciones llenado automáticamente con números aleatorios del 0 al 99 usando rand(). Mediante un ciclo do-while, pide al usuario un número y realiza una "búsqueda lineal" recorriendo el arreglo. Informa el índice donde se encontró (deteniendo la búsqueda con break) o avisa si no existe, permitiendo buscar de nuevo sin alterar los datos originales.

Suma de vectores (Formato vertical): Declara tres arreglos de 10 elementos. En un solo ciclo, llena los primeros dos con números aleatorios del 1 al 100 y calcula la suma de sus posiciones correspondientes, guardando el valor en el tercer arreglo. Finalmente, recorre los arreglos nuevamente usando tabulaciones (\t) para imprimir los datos organizados visualmente en tres columnas.

Conversor de sistemas numéricos: Es una calculadora cíclica que transforma números entre bases (Decimal, Binario, Hexadecimal). Para convertir de decimal a binario, utiliza divisiones sucesivas entre 2, guardando los residuos en un arreglo que luego imprime al revés. Para las demás conversiones, aprovecha las capacidades nativas de C: la función strtol para convertir cadenas binarias a enteros, y los especificadores %X y %x de printf y scanf para procesar hexadecimales automáticamente.
