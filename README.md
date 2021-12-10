# Proyecto_C
Proyecto: Juego ahorcado

# Introduccion
A continuación se dará una breve explicación sobre la estructura del código desarrollado para el proyecto designado en el curso IE 0117 - Programación Bajo Plataformas Abiertas correspondiente al lenguaje C, haciendo énfasis en la estructura lógica implementada para su elaboración. 
Como es usual, primero invocamos las bibliotecas necesarias para implementar en el desarrollo del flujo de código.

#1
Se crea la función main que es la madres de la estructura del código. Además, de un display de inicio para orinetación del ejecunatnte. 
Posteriormente se crea varios bucles for para escanear las letras ingresadas y así poder determinar si alguna de estas está dentro de la palabra escondida. Una vez el dígito ingresado no está dentro de la palabra escondida se crear un for para así poder escanear y restarle un intento. 
Además, dado a lo anterior está también los condicionales que se encarga de revisar los intentos, cuando los intentos está en 7 solo se muestra la barra de la figura. Así como va dismuniyendo los intentos, se va formando el "muñeco de ahorcado". Estos condicionales tiene sus repectivos signos para ser activas siempre se cumpla su objetivo.

#2
Finalmente, se realiza un bucle de los intentos diferentes de 0 cuando haya completado el juego, esta genera un display de "¡¡Felicidades, has ganado!!" y también intentos igual a 0. Esta última genera un display de "¡¡Lo siento, perdiste!!"
