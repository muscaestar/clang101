int foo(void) {
    return (1 + 2) * 3 + 4 / 5;
}

//clang -Xclang -ast-dump -fsyntax-only ast.c
