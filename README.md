Шмелев КТСО-01-22
Практическая работа по БОС №2
1.     Зарегистрируйтесь на портале github.com. Создайте проект, в котором будут размещаться ваши практические задания.

2.     Настройте файл «.gitignore», чтобы из вашего локального репозитория не попадали лишние файлы. Описание структуры файла: https://git-scm.com/docs/gitignore. Пример содержания файла «.gitignore» для языка Си: https://github.com/github/gitignore/blob/main/C.gitignore

3.     Добавьте в корне проекта его описание в формате Marcdown. Описание языка разметки:https://guides.github.com/features/mastering-markdown/, https://www.markdownguide.org/.
13.     Завести на портале github общий проект mysyslog
14. Разработать расширяемую библиотеку libmysyslog на языке Си, которая сможет выводить данные в журнал в разных форматах. В рамках библиотеки необходимо реализовать функцию, через которую другие программы смогут выводить данные в журнал:

int mysyslog(const char* msg, int level, int driver, int format, const char* path);
 Должны поддерживаться следующие уровни журналирования: DEBUG, INFO, WARN, ERROR, CRITICAL.
