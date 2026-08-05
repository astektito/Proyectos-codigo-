# Proyectos-codigo-

Coleccion de pequenos ejercicios y proyectos academicos de programacion realizados como estudiante de la ESPE (Ecuador). Incluye ejercicios de consola en C++ y un ejercicio de Programacion Orientada a Objetos en Java.

## Tecnologias

- C++ (proyectos de Code::Blocks `.cbp` y de Visual Studio `.sln`/`.vcxproj`)
- Java (proyecto de NetBeans con Apache Ant, `build.xml`)

## Estructura

- `MatrizPrimaDinamica/` — C++ (Visual Studio): busca los numeros primos dentro de una matriz usando memoria dinamica.
- `redondear/` — C++ (Code::Blocks): redondeo de un numero ingresado.
- `rotar/` — C++ (Code::Blocks): rotacion de los elementos de un vector.
- `seno_taylor/` — C++ (Code::Blocks): calculo del seno mediante la serie de Taylor.
- `suma digitsal/` — C++ (Code::Blocks): suma de digitos y raiz digital de un numero (recursividad).
- `PuntoPOO/` — Java (NetBeans): ejercicio de POO con una clase `Punto` y una clase `Operaciones` que calcula la distancia/recorrido entre puntos.

## Como ejecutar

No hay un unico gestor de dependencias; cada carpeta es un proyecto independiente.

Para los ejercicios en C++ puedes compilar el `main.cpp` directamente, por ejemplo:

```bash
g++ redondear/main.cpp -o redondear && ./redondear
```

Tambien puedes abrir los archivos `.cbp` en Code::Blocks o `MatrizPrimaDinamica.sln` en Visual Studio.

Para el ejercicio en Java (`PuntoPOO/`), abre el proyecto en NetBeans, o compila y ejecuta manualmente:

```bash
cd PuntoPOO
javac -d build/classes src/puntopoo/*.java
java -cp build/classes puntopoo.PuntoPOO
```

## Nota

Son ejercicios con fines de aprendizaje universitario; el codigo se conserva tal como se elaboro en clase.

Autor: Edwin Astudillo
