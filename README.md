# RFEUtilities

## Short description

### Intended purpose

- Creating a more advanced way to work with in-game structures and functions
- Speeding up scripts by making it possible to write code without using the slow in-game language.

### Description of directory and file structure

#### Directories

- **build** - where the library is built.
- **includes** - stores various header files that can be used universally
- **helpers** - stores various modules needed for other files in source modules, modules here may not be used by the game
- **source** - stores various modules that should be used only for working with the game and game structures
- **modules** - stores various modules that can be used by the game or modules in source
- **tests** - stores test implementation modules, the test module itself is stored in **modules**
- **tasks** - keeps track of completed and planned tasks for the library as a whole.
- **\exports** - stores the realization of exporting those methods of modules that should be exported from the library, you can describe them in any way you want, the main thing is to connect the cpp file in **main.cpp**(or if it is a test library, in **test.cpp**).
- ***\inc** - stores header files of individual modules
- ***\src** - stores the code of individual modules
- ***\tasks** - keeps track of completed and planned tasks for modules.

#### Files

- **LICENSE** - license file
- **.gitignore** - file for git version control system
- **main.cpp** - Main start file
- **test.cpp** - Main start file for test modules
- **CMakeLists.txt** - build file

## Короткое описание

### Предназначение

- Создание более расширенных возможностей работы с внутриигровыми структурами и функциями
- Ускорение скриптов путём, создания возможности написания кода без использования медленного внутриигрового языка

### Описание структуры директорий и файлов

#### Директории

- **build** - то куда собирается библиотека
- **includes** - хранит в себе различные файлы заголовков которые могут использоваться повсеместно
- **helpers** - хранит различные модули нужные для других файлов в source modules, модули тут могут не должны использоваться игрой
- **source** - хранит различные модули которые должны быть использованы только для работы с игрой и игровыми структурами
- **modules** - хранит различные модули которые могут использоваться игрой или модулями в source
- **tests** - хранит в себе модули реализации тестов,сам модуль тестов хранится в **modules**
- **tasks** - учёт выполненных и планируемых задач по библиотеке в целом
- **\exports** - хранит реализацию экспорта тех методов модулей которые надо экспортировать из библиотеки, расписывать их можно как угодно, главное потом подключить сам cpp файл в **main.cpp**(или если это библиотека тестов то в **test.cpp**)
- ***\inc** - хранит файлы заголовков отдельных модулей
- ***\src** - хранит именно код отдельных модулей
- ***\tasks** - учёт выполненных и планируемых задач по поводу модулей

#### Файлы

- **LICENSE** - файл лицензии
- **.gitignore** - файл для системы контроля версий git
- **main.cpp** - Главный стартовый файл
- **test.cpp** - Главный стартовый файл для модулей тестов
- **CMakeLists.txt** - файл для сборки 