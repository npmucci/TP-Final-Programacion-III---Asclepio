# TP-Final-Programacion-III---Asclepio


![Lenguaje](https://img.shields.io/badge/Lenguaje-C++-blue)


Un sistema para la gestión de historias clínicas, desarrollado como proyecto final para la materia **Programación III**.


## Características
* Gestión de historias clínicas de pacientes.
* Persistencia de datos en archivos.
* Interfaz de consola simple y fácil de usar.
* Proyecto académico en C++ para prácticas de Programación III.


## Tecnologías Utilizadas
* Lenguaje: **C++**
* IDE recomendado: **Code::Blocks** (o cualquier IDE con soporte para C++11 o superior)
* Compilador: **g++** o equivalente

## Estructura de Archivos
```
.
├── .gitignore
├── Asclepio/
├── Pacientes - Datos de prueba.xlsx
└── Sistema de gestión de historias clinicas_grupo19.docx.
```

## Requisitos Previos
* Tener instalado un compilador de C++ (por ejemplo, [MinGW](https://www.mingw-w64.org/) en Windows).
* Tener instalado un entorno de desarrollo:
  * [Code::Blocks](https://www.codeblocks.org/)
  * ó [Visual Studio Code](https://code.visualstudio.com/) con la extensión de C/C++.
* Librerías estándar de C++ (ya incluidas en la mayoría de compiladores modernos).

## Instalación

1. **Clonar el repositorio**
   ```sh
   git clone https://github.com/npmucci/TP-Final-Programacion-III---Asclepio.git
   cd TP-Final-Programacion-III---Asclepio

2. **Abrir el proyecto**

- **Opción recomendada:** abrir el archivo `Asclepio.cbp` en **Code::Blocks**  
  *(esto va a cargar todos los archivos y configuraciones del proyecto automáticamente)*.

- **Alternativa:** abrir la carpeta `Asclepio` en tu IDE preferido (por ejemplo **VS Code**)  
  y configurar la compilación para incluir todos los archivos `.cpp`.

3. **Compilar el proyecto**

- **En Code::Blocks:** clic en **Build & Run**.
- **Desde terminal (opcional):**
  ```sh
  g++ Asclepio/*.cpp -o asclepio
 
 
 ## Uso

### Ejecutar el programa

- **En Code::Blocks:** clic en **Run**.
- **Si compilaste por terminal:**
  ```sh
  ./asclepio   # Linux / Mac
  asclepio.exe # Windows

### Interacción

Segui las instrucciones en pantalla para gestionar las historias clínicas de los pacientes.

> 💡 **Nota:** El archivo `Pacientes - Datos de prueba.xlsx` incluido en el repositorio contiene datos de ejemplo para probar el sistema.

## Licencia

Este proyecto se distribuye bajo la licencia MIT.
Puedes usar, copiar, modificar y distribuir el software de forma libre, siempre que incluyas el aviso de copyright y la licencia en las copias o partes sustanciales del software.

