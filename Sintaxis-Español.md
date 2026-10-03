# L — Especificación de Sintaxis

Versión: api.minor.patch

L es un lenguaje de programación en inglés desarrollado por Lixame Studios.

---

## 1. Comentarios

Los comentarios de una sola línea comienzan con `//`.

```l
// Este es un comentario
```

Los comentarios son ignorados por L.

---

## 2. Sentencias

La mayoría de las sentencias terminan con `;`.

```l
say("Hello world");
```

---

## 3. Funciones

Las funciones se declaran utilizando `function`.

El contenido de una función comienza después de `(` y termina con `N)`.

```l
function main(
    say("Hello world");
N)
```

`N` es el terminador de la función.

---

## 4. Función principal

Todo programa ejecutable de L comienza en `main`.

```l
function main(
    say("Hello world");
N)
```

La función `main` no necesita parámetros.

---

## 5. Salida

`say()` escribe texto en la salida de la aplicación.

```l
say("Hello world");
```

Se pueden pasar varios valores separados por comas.

```l
say("Health:", health);
```

---

## 6. Variables

Las variables se declaran con `let`.

```l
let name = "Benicio";
let score = 100;
```

Una variable puede cambiar después de ser declarada.

```l
let score = 100;
score = 150;
```

---

## 7. Constantes

Las constantes se declaran con `const`.

```l
const maxHealth = 100;
```

Una constante no puede cambiar después de ser declarada.

---

## 8. Tipos de datos

L tendrá los siguientes tipos básicos.

### Entero

```l
let score: int = 100;
```

### Decimal

```l
let speed: float = 4.5;
```

### Booleano

```l
let alive: bool = true;
```

### Texto

```l
let name: string = "Player";
```

### Carácter

```l
let grade: char = 'A';
```

---

## 9. Valores booleanos

L utiliza:

```l
true
false
```

---

## 10. Operadores aritméticos

L admite:

```text
+
-
*
/
%
```

Ejemplo:

```l
let result = 10 + 5;
```

---

## 11. Operadores de comparación

L admite:

```text
==
!=
>
<
>=
<=
```

Ejemplo:

```l
score >= 100
```

---

## 12. Operadores lógicos

L utiliza:

```text
and
or
not
```

Ejemplo:

```l
if alive and health > 0(
    say("Player is alive");
N)
```

---

## 13. Operadores de asignación

Asignación básica:

```text
=
```

Asignaciones compuestas:

```text
+=
-=
*=
/=
```

Ejemplo:

```l
score += 10;
```

---

## 14. Condiciones

Las condiciones utilizan `if`.

```l
if score > 100(
    say("High score");
N)
```

---

## 15. Else

`else` se ejecuta cuando la condición de `if` es falsa.

```l
if score > 100(
    say("High score");
N)
else(
    say("Low score");
N)
```

---

## 16. Else If

Se pueden encadenar varias condiciones mediante `else if`.

```l
if score >= 100(
    say("Excellent");
N)
else if score >= 50(
    say("Good");
N)
else(
    say("Low");
N)
```

---

## 17. Bucles While

`while` repite el bloque mientras su condición sea verdadera.

```l
while health > 0(
    say("Alive");
N)
```

---

## 18. Bucles For

`for` permite repetir utilizando inicialización, condición e incremento.

```l
for let i = 0; i < 10; i += 1(
    say(i);
N)
```

---

## 19. Break

`break` sale inmediatamente del bucle actual.

```l
while true(
    break;
N)
```

---

## 20. Continue

`continue` salta a la siguiente iteración del bucle.

```l
for let i = 0; i < 10; i += 1(
    continue;
N)
```

---

## 21. Funciones con parámetros

Las funciones pueden recibir parámetros.

```l
function greet(string name)(
    say("Hello", name);
N)
```

---

## 22. Retornar valores

Las funciones pueden devolver valores utilizando `return`.

```l
function add(int a, int b)(
    return a + b;
N)
```

---

## 23. Llamar funciones

Las funciones se llaman utilizando su nombre.

```l
greet("Benicio");
```

Las funciones que devuelven valores pueden utilizarse para asignar variables.

```l
let result = add(10, 20);
```

---

## 24. Arrays

Los arrays contienen varios valores.

```l
let numbers = [10, 20, 30, 40];
```

Los valores se acceden mediante un índice.

```l
say(numbers[0]);
```

Los índices comienzan en `0`.

---

## 25. Strings

Los textos utilizan comillas dobles.

```l
let message = "Hello world";
```

Los caracteres individuales utilizan comillas simples.

```l
let letter = 'A';
```

---

## 26. Concatenación de Strings

Los textos pueden unirse utilizando `+`.

```l
let name = "Benicio";
let message = "Hello " + name;
```

---

## 27. Ámbito

Las variables declaradas dentro de una función o bloque pertenecen a ese ámbito.

```l
function main(
    let score = 100;

    if score > 50(
        let message = "High";
        say(message);
    N)
N)
```

`message` no puede utilizarse fuera de su bloque `if`.

---

## 28. Imports

Las bibliotecas externas se pueden importar mediante `import`.

```l
import lex.io;
```

Se pueden importar varias bibliotecas.

```l
import lex.io;
import lex.math;
```

---

## 29. Namespaces

L utiliza nombres separados por puntos para bibliotecas y APIs.

Ejemplos:

```l
lex.io
lex.math
lix.graphics
lix.audio
```

---

## 30. Biblioteca estándar

La biblioteca estándar de L será proporcionada por LexLib.

Ejemplos:

```l
lex.io
lex.math
lex.string
lex.file
```

---

## 31. Lixnet Engine

Los juegos creados con Lixnet Engine podrán acceder a las APIs del motor mediante el namespace `lix`.

Ejemplos:

```l
lix.graphics
lix.audio
lix.input
lix.physics
lix.scene
```

Las funciones exactas de cada API serán definidas por Lixnet Engine.

---

## 32. Errores

Los errores detienen la ejecución cuando L no puede continuar de forma segura.

Ejemplo:

```text
Error: Undefined variable 'score'
```

Los errores deben indicar:

* tipo de error
* descripción
* archivo
* línea
* columna

Ejemplo:

```text
UndefinedVariable
File: game.l
Line: 12
Column: 5
```

---

## 33. Extensión de archivos

Los archivos de código fuente de L utilizan:

```text
.l
```

Ejemplos:

```text
main.l
game.l
player.l
```

---

## 34. Estructura de un programa

Un programa básico de L:

```l
function main(
    say("Hello world");
N)
```

Un programa más grande puede contener varias funciones:

```l
function greet(string name)(
    say("Hello", name);
N)

function main(
    greet("Benicio");
N)
```

---

## 35. Punto de entrada

La ejecución comienza en:

```l
function main(
```

Solo puede existir una función `main` en un programa ejecutable.

---

## 36. Palabras reservadas

Las siguientes palabras están reservadas por L:

```text
function
main
let
const
if
else
while
for
break
continue
return
import
true
false
and
or
not
int
float
bool
string
char
```

---

## 37. Reglas para nombres

Los identificadores pueden contener:

* letras
* números
* guiones bajos `_`

Un identificador no puede comenzar con un número.

Válidos:

```text
player
player1
player_health
score
```

Inválidos:

```text
1player
player-health
```

---

## 38. Sensibilidad a mayúsculas

L distingue entre mayúsculas y minúsculas.

Estos son identificadores diferentes:

```text
score
Score
SCORE
```

---

## 39. Ejemplo completo

```l
import lex.io;

function greet(string name)(
    say("Hello", name);
N)

function main(
    let name = "Benicio";
    let score: int = 100;

    greet(name);

    if score >= 100(
        say("High score");
    N)
    else(
        say("Keep playing");
    N)
N)
```

---

## 40. Regla de diseño del lenguaje

La sintaxis de L debe mantenerse consistente, clara y legible.

El terminador `N)` es una parte fundamental de la sintaxis de funciones y bloques de control de L.

L está diseñado para utilizarse mediante la aplicación oficial de L desarrollada por Lixame Studios.

La aplicación de L proporcionará:

* edición de código
* apertura de archivos `.l`
* resaltado de sintaxis
* detección y reporte de errores
* ejecución
* administración de proyectos
* integración directa con el lenguaje L

Los archivos de código fuente de L utilizan la extensión `.l`.
