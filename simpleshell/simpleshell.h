//
// Created by uulrika on 5/28/22.
//

#ifndef CLANG101_SIMPLESHELL_H
#define CLANG101_SIMPLESHELL_H

#endif //CLANG101_SIMPLESHELL_H

#define LSH_RL_BUFSIZE 1024
#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"

int lsh_cd(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);

/*
  List of builtin commands, followed by their corresponding functions.
 */
char *builtin_str[] = {
        "cd",
        "help",
        "exit"
};

int (*builtin_func[]) (char **) = {
        &lsh_cd,
        &lsh_help,
        &lsh_exit
};

int lsh_num_builtins() {
    return sizeof(builtin_str) / sizeof(char *);
}