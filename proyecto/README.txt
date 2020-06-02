Proyecto Lenguajes y Traductores
Agosto-Diciembre 2019
Mauricio Villalpando Puente
A00569573


Lista de archivos:




check: script con comandos de lex y yacc, así como compilación y ejecución del traductor y ejecutor.

directorio.h: header file del directorio de funciones/métodos.

ejecutor: archivo ejecutable de la máquina virtual.

ejecutor.c: código fuente del ejecutor.

exp: código de prueba, escrito en c y compilado con gcc, para verificar resultados.

exponencial.c: código fuente del código de verificación.

lex.yy.c: archivo generado por lex.

lista.h: header file de la lista encadenada para variables dimensinadas.

output.txt: archivo que contiene los cuádruplos, producto del traductor.

programa prueba: código fuente de los programas prueba.

proyecto.l: léxico del lenguaje.

proyecto.y: gramática del lenguaje.

symtable.h: header file de la tabla de símbolos.

y.output: gramática y autómata de la gramática, generado por el comando yacc.

y.tab.c: código fuente del traductor.

y.tab.h: header file generado por el comando yacc con los valores de los tokens. 



Modo de uso:
Ejecutar el script "check". Escribir código fuente. En caso de que exista un error de sintaxis, el traductor abortará su ejecución y se desplegará la última traducción exitosa. El ejecutor iniciará con esta traducción.
