# 🧮 Calculadora Modular en C++

Proyecto de ejemplo desarrollado en **C++** para demostrar cómo organizar un programa utilizando múltiples archivos `.h` y `.cpp`.

El objetivo es comprender la **programación modular**, la declaración e implementación de funciones y la compilación de proyectos con varios archivos fuente.

## 📋 Funcionalidades

La calculadora permite realizar cuatro operaciones matemáticas:

- ➕ Suma
- ➖ Resta
- ✖️ Multiplicación
- ➗ División

Incluye validación para evitar la división por cero y un menú interactivo utilizando `switch-case`.

## 📁 Estructura del proyecto

```text
calculadora-mod/
│
├── .vscode/
│   ├── c_cpp_properties.json
│   ├── launch.json
│   └── tasks.json
│
├── main.cpp
├── operaciones.cpp
├── operaciones.h
├── .gitignore
└── README.md
```

### Descripción de los archivos

| Archivo | Descripción |
|---|---|
| `main.cpp` | Contiene la función principal `main()` y el menú de operaciones. |
| `operaciones.h` | Declara los prototipos de las funciones matemáticas. |
| `operaciones.cpp` | Implementa las operaciones matemáticas. |
| `tasks.json` | Configura la compilación del proyecto en VS Code. |
| `launch.json` | Configura el depurador GDB. |
| `c_cpp_properties.json` | Configura IntelliSense y el compilador. |
| `.gitignore` | Excluye ejecutables y archivos temporales de Git. |

## 🛠️ Requisitos

Para compilar y ejecutar el proyecto se necesita:

- Windows 10 u 11.
- Visual Studio Code.
- Extensión **C/C++** de Microsoft para VS Code.
- MSYS2 con entorno UCRT64.
- Compilador GCC/G++.
- Depurador GDB.

El proyecto utiliza las siguientes rutas de referencia:

**Compilador:**
```text
C:\msys64\ucrt64\bin\g++.exe
```

**Depurador:**
```text
C:\msys64\ucrt64\bin\gdb.exe
```

Estas rutas deben ajustarse si MSYS2 se encuentra instalado en otra ubicación.

## 🚀 Compilación

Abrir una terminal en la carpeta raíz del proyecto y ejecutar:

```bash
g++ -g -O0 main.cpp operaciones.cpp -o main.exe
```

Este comando:

- Compila los dos archivos `.cpp`.
- Incluye información de depuración mediante `-g`.
- Desactiva optimizaciones con `-O0`.
- Genera el ejecutable `main.exe`.

**Nota:** El comando presupone que `g++` está disponible en el `PATH`.

### Ejecución

En PowerShell:

```powershell
.\main.exe
```

## 💻 Ejemplo de ejecución

```text
Ingrese el primer numero: 20
Ingrese el segundo numero: 5

1. Sumar
2. Restar
3. Multiplicar
4. Dividir

Seleccione una opcion: 4

4
```

## 🐛 Depuración en Visual Studio Code

El proyecto incluye configuraciones para depurar utilizando **GDB**.

### Pasos

1. Abrir la carpeta completa del proyecto en VS Code.
2. Abrir el archivo `main.cpp`.
3. Colocar un breakpoint presionando `F9` en una línea de código.
4. Presionar `Ctrl + Shift + D` para abrir el panel de depuración.
5. Seleccionar **Depurar proyecto C++**.
6. Presionar `F5` para comenzar.

La configuración de `launch.json` ejecutará previamente la tarea de compilación definida en `tasks.json`.

### Atajos del depurador

| Tecla | Función |
|---|---|
| `F5` | Iniciar o continuar ejecución |
| `F9` | Agregar o quitar breakpoint |
| `F10` | Ejecutar la siguiente línea |
| `F11` | Entrar en una función |
| `Shift + F11` | Salir de una función |
| `Shift + F5` | Detener la depuración |

Es posible colocar breakpoints tanto en `main.cpp` como en `operaciones.cpp` para observar la ejecución entre archivos.

## 🧩 Conceptos de programación modular

### Archivos de cabecera (.h)

Contienen las declaraciones de funciones que pueden utilizar otros archivos.

Ejemplo:

```cpp
#ifndef OPERACIONES_H
#define OPERACIONES_H

double sumar(double a, double b);

#endif
```

### Archivos de implementación (.cpp)

Contienen la definición de las funciones declaradas en los archivos de cabecera.

```cpp
#include "operaciones.h"

double sumar(double a, double b) {
    return a + b;
}
```

### Programa principal (main.cpp)

Incluye el archivo de cabecera y utiliza las funciones.

```cpp
#include <iostream>
#include "operaciones.h"

using namespace std;

int main() {
    cout << sumar(10, 5);
    return 0;
}
```

### Ventajas de la programación modular

- Permite organizar el código en diferentes archivos.
- Facilita el mantenimiento y la depuración.
- Favorece la reutilización de funciones.
- Permite trabajar en proyectos más grandes.
- Facilita la colaboración entre desarrolladores.

## 📚 Propósito académico

Proyecto desarrollado como material práctico para la asignatura **SD1002 – Lógica de Programación**.

**Institución:** Institución Universitaria Pascual Bravo  
**Docente:** Alejandro González Varelas  
**Periodo académico:** 2026-2  
**Lenguaje:** C++  
**Entorno de desarrollo:** Visual Studio Code

## 📄 Licencia

Proyecto con fines educativos. No se especifica una licencia de distribución.

---

Des