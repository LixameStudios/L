# L — Syntax Specification

Version: api.minor.patch

L is an English programming language designed by Lixame Studios.

---

## 1. Comments

Single-line comments begin with `//`.

```l
// This is a comment
```

Comments are ignored by L.

---

## 2. Statements

Most statements end with `;`.

```l
say("Hello world");
```

---

## 3. Functions

Functions are declared using `function`.

The body of a function starts after `(` and ends with `N)`.

```l
function main(
    say("Hello world");
N)
```

`N` is the function terminator.

---

## 4. Main Function

Every executable L program starts with `main`.

```l
function main(
    say("Hello world");
N)
```

The `main` function does not require parameters.

---

## 5. Output

`say()` writes text to the application output.

```l
say("Hello world");
```

Multiple values can be passed using commas.

```l
say("Health:", health);
```

---

## 6. Variables

Variables are declared with `let`.

```l
let name = "Benicio";
let score = 100;
```

A variable can be changed after declaration.

```l
let score = 100;
score = 150;
```

---

## 7. Constants

Constants are declared with `const`.

```l
const maxHealth = 100;
```

A constant cannot be changed after declaration.

---

## 8. Data Types

L supports the following basic types:

### Integer

```l
let score: int = 100;
```

### Decimal

```l
let speed: float = 4.5;
```

### Boolean

```l
let alive: bool = true;
```

### String

```l
let name: string = "Player";
```

### Character

```l
let grade: char = 'A';
```

---

## 9. Boolean Values

L uses:

```l
true
false
```

---

## 10. Arithmetic Operators

L supports:

```text
+
-
*
/
%
```

Example:

```l
let result = 10 + 5;
```

---

## 11. Comparison Operators

L supports:

```text
==
!=
>
<
>=
<=
```

Example:

```l
score >= 100
```

---

## 12. Logical Operators

L supports:

```text
and
or
not
```

Example:

```l
if alive and health > 0(
    say("Player is alive");
N)
```

---

## 13. Assignment Operators

Basic assignment:

```l
=
```

Compound assignment:

```text
+=
-=
*=
/=
```

Example:

```l
score += 10;
```

---

## 14. Conditions

Conditions use `if`.

```l
if score > 100(
    say("High score");
N)
```

---

## 15. Else

`else` executes when the `if` condition is false.

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

Multiple conditions can be chained with `else if`.

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

## 17. While Loops

`while` repeats while its condition is true.

```l
while health > 0(
    say("Alive");
N)
```

---

## 18. For Loops

`for` repeats using an initialization, condition and increment.

```l
for let i = 0; i < 10; i += 1(
    say(i);
N)
```

---

## 19. Break

`break` immediately exits the current loop.

```l
while true(
    break;
N)
```

---

## 20. Continue

`continue` skips the current iteration.

```l
for let i = 0; i < 10; i += 1(
    continue;
N)
```

---

## 21. Functions With Parameters

Functions can receive parameters.

```l
function greet(string name)(
    say("Hello", name);
N)
```

---

## 22. Returning Values

Functions can return values using `return`.

```l
function add(int a, int b)(
    return a + b;
N)
```

---

## 23. Calling Functions

Functions are called by their name.

```l
greet("Benicio");
```

Functions returning values can be assigned to variables.

```l
let result = add(10, 20);
```

---

## 24. Arrays

Arrays contain multiple values of the same type.

```l
let numbers = [10, 20, 30, 40];
```

Values are accessed by index.

```l
say(numbers[0]);
```

Indexes start at `0`.

---

## 25. Strings

Strings use double quotes.

```l
let message = "Hello world";
```

Characters use single quotes.

```l
let letter = 'A';
```

---

## 26. String Concatenation

Strings can be joined with `+`.

```l
let name = "Benicio";
let message = "Hello " + name;
```

---

## 27. Scope

Variables declared inside a function or control block belong to that scope.

```l
function main(
    let score = 100;

    if score > 50(
        let message = "High";
        say(message);
    N)
N)
```

`message` cannot be accessed outside its `if` block.

---

## 28. Imports

External libraries can be imported with `import`.

```l
import lex.io;
```

Multiple libraries can be imported.

```l
import lex.io;
import lex.math;
```

---

## 29. Namespaces

L uses dotted names for libraries and APIs.

```l
lex.io
lex.math
lix.graphics
lix.audio
```

---

## 30. Standard Library

The standard library is provided by LexLib.

Examples:

```l
lex.io
lex.math
lex.string
lex.file
```

---

## 31. Lixnet Engine

Games created with Lixnet Engine can access engine APIs through the `lix` namespace.

Examples:

```l
lix.graphics
lix.audio
lix.input
lix.physics
lix.scene
```

The exact functions provided by each API are defined by Lixnet Engine.

---

## 32. Errors

Errors stop execution when L cannot safely continue.

Example:

```text
Error: Undefined variable 'score'
```

Errors contain:

* error type
* description
* file
* line
* column

Example:

```text
UndefinedVariable
File: game.l
Line: 12
Column: 5
```

---

## 33. File Extension

L source files use:

```text
.l
```

Example:

```text
main.l
game.l
player.l
```

---

## 34. Program Structure

A basic L program:

```l
function main(
    say("Hello world");
N)
```

A larger program may contain multiple functions:

```l
function greet(string name)(
    say("Hello", name);
N)

function main(
    greet("Benicio");
N)
```

---

## 35. Entry Point

Execution begins at:

```l
function main(
```

Only one `main` function is allowed in an executable program.

---

## 36. Reserved Keywords

The following words are reserved by L:

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

## 37. Naming Rules

Identifiers may contain:

* letters
* numbers
* underscores

An identifier cannot begin with a number.

Valid:

```text
player
player1
player_health
score
```

Invalid:

```text
1player
player-health
```

---

## 38. Case Sensitivity

L is case-sensitive.

These are different identifiers:

```text
score
Score
SCORE
```

---

## 39. Complete Example

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

## 40. Language Design Rule

L syntax must remain consistent, explicit and readable.

The `N)` terminator is a fundamental part of L function and control-block syntax.

L is designed to be used through the official L application provided by Lixame Studios.

The L applicat
