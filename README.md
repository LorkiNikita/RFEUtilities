# RFEUtilities

## General

### Intended purpose

- Creating a more advanced way to work with in-game structures and functions
- Speeding up scripts by making it possible to write code without using the slow in-game language.

### Description of directories

- **build** - build directory
- **helpers** - stores various modules needed for other files in source modules, modules here can not be used by the game
- **source** - stores various modules that should be used only for working with the game and game structures
- **modules** - stores various modules that can be used by the game or modules in source
- ***\tasks** - keeps track of completed and planned tasks for modules.

## Build

The compile uses CMake, version 3.20+, so you need to install it to do the following: https://cmake.org/

### MSVC

1. #### Build a solution

   To build a solution you can just type the following command: 
   `cmake -A Win32 -G "Visual Studio 17 2022" -B ./YOUR_DIRECTORY`.

   Instead of Visual Studio 17 2022 may also be your version of the Visual Studio

   Or you can use CMake's GUI utility but don't forget to set it to build 32 bit versions of the software.

2. #### Build project

   After compiling the solution you can use Visual Studio to build it or you can use the CMake command to build it and it will also build it fast.
   The command itself:

   `cmake --build ./YOUR_DIRECTORY`.

## Главное

### Предназначение

- Создание более расширенных возможностей работы с внутриигровыми структурами и функциями
- Ускорение скриптов путём, создания возможности написания кода без использования медленного внутриигрового языка

### Описание директорий

- **build** - директория сборки
- **helpers** - хранит различные модули нужные для других файлов в source modules, модули тут не могут использоваться игрой
- **source** - хранит различные модули которые должны быть использованы только для работы с игрой и игровыми структурами
- **modules** - хранит различные модули которые могут использоваться игрой или модулями в source
- ***\tasks** - учёт выполненных и планируемых задач по поводу модулей

## Сборка

Для сборки используется CMake версии выше 3.20,так что для дальнейших операций вам нужно его установить https://cmake.org/

### MSVC

1. #### Сборка солюшена

   Для сборки солюшена вы можете просто ввести данную команду: 
   `cmake -A Win32 -G "Visual Studio 17 2022" -B ./YOUR_DIRECTORY`

   Вместо Visual Studio 17 2022 также может быть ваша версии студии 

   Или же вы можете вопользоватся графическим интерфесом от CMake только главное не забудьте выставить что сборка именно 32 битного солюшена

2. #### Билд проекта

   После сборки солюшена, для билда вы можете использовать Visual Studio, либо также вы можете ввести команду CMake и он также всё быстро сбилдит.
   Сама команда:

   `cmake --build ./YOUR_DIRECTORY`