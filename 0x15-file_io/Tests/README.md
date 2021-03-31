| FILE | COMPILATION |||
|------|-------------|
| 0-read_textfile.c | gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-read_textfile.c -o a | ./a Requiescat ||
| 1-create_file.c | gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-create_file.c -o b | ./b hello world | ls -l hello |
| 2-append_text_to_file.c | gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-append_text_to_file.c -o c | ./c hello " World! > "| cat hello |  