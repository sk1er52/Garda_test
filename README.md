# Тестовое задание

## Сборка проекта

Проект использует [CMake](https://cmake.org/) для сборки и [vcpkg](https://github.com/microsoft/vcpkg) для управления зависимостями.

### Подготовка

1. **Клонируйте репозиторий:**
   ```bash
   git clone https://github.com/ваш_пользователь/Garda_test.git
   cd Garda_test



## Сборка

1. **Создайте папку для сборки и перейдите в неё:**
   ```bash
   mkdir build
   cd build
2. **Запустите CMake с указанием toolchain-файла vcpkg:**
   ```bash
   cmake .. -DCMAKE_TOOLCHAIN_FILE=%VCPKG_ROOT%/scripts/buildsystems/vcpkg.cmake
3. **Соберите проект:**
   ```bash
   cmake --build .

## Запуск тестов

Проект использует [GoogleTest](https://github.com/google/googletest) для тестирования.
**Чтобы запустить все тесты, выполните:**
   ```bash
   ctest
**Либо запустите конкретное тестовое приложение:**
   ```bash
   ./firstTask      # Для первого задания
   ./secondTask     # Для второго задания
   ```
