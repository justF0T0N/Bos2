#include <stdio.h>
#include <stdarg.h>
#include <time.h>

// Определение уровней журналирования
#define DEBUG 0
#define INFO 1
#define WARN 2
#define ERROR 3
#define CRITICAL 4

// Функция для записи лога
int mysyslog(const char* msg, int level, int driver, int format, const char* path) {
    // Открытие файла журнала
    FILE *log_file = fopen(path, "a");
    if (log_file == NULL) {
        return -1; // Не удалось открыть файл
    }

    // Получение текущего времени
    time_t now;
    time(&now);
    struct tm *local_time = localtime(&now);

    // Запись времени и уровня журналирования в файл
    fprintf(log_file, "[%02d-%02d-%04d %02d:%02d:%02d] ",
            local_time->tm_mday, local_time->tm_mon + 1, local_time->tm_year + 1900,
            local_time->tm_hour, local_time->tm_min, local_time->tm_sec);

    // Вывод уровня журналирования
    switch(level) {
        case DEBUG: fprintf(log_file, "[DEBUG] "); break;
        case INFO: fprintf(log_file, "[INFO] "); break;
        case WARN: fprintf(log_file, "[WARN] "); break;
        case ERROR: fprintf(log_file, "[ERROR] "); break;
        case CRITICAL: fprintf(log_file, "[CRITICAL] "); break;
        default: fprintf(log_file, "[UNKNOWN] "); break;
    }

    // Запись сообщения
    fprintf(log_file, "%s\n", msg);

    // Закрытие файла
    fclose(log_file);
    return 0; // Успешная запись
}
