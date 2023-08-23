# AndromedaUilities

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