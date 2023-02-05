# Рекомендованный CodeStyle
### Это, конечно, не абсолютная истина

## 1. Общие рекомендации по оформлению программы  
- Главный файл проекта должен называться ````main.cpp / app.cpp````, чтобы сразу было понятно, 
  где начало программы.  
- Разбивайте код на файлы ````Functions.hpp (заголовки функций) и Functions.cpp (реализация)````. 
  Имена файлов должны совпадать, чтобы упросить поиск.  
- Класс оформляется в отдельном файле. Имя класса и имя файла должны совпадать. 
  Опять же, для упрощения поиска.  
- Для автоматизации сборки исходных файлов используйте CMake.
- В репозиторий следует помещать только исходники и CMakeLists.txt. 
  Допускается хранить в репозитории скомпилированные файлы библиотек. 
  Изображения, файлы шрифтов, музыку и т.п. Их можно автоматически помещать в папку с проектом,
  используя команду Cmake ````file(COPY test.txt DESTINATION "/")````
## 2. Пространства имен  
- Помещайте ваш код в своё пространство имен, чтобы избежать конфликтов с библиотечными функциями.  
- Используйте вложенное пространство имен, если есть необходимость. Например, 
  ваше пространство имен mt, а в нем есть вспомогательные функции.
	````
	namespace mt {
		namespace utils {
			//
		}
	}
	
	или since C++17
	namespace mt::utils {
		//
	}
	````