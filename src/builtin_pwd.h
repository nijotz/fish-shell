// Prototypes for executing builtin_pwd function.
#ifndef FISH_BUILTIN_PWD_H
#define FISH_BUILTIN_PWD_H

class parser_t;
struct io_streams_t;

int builtin_pwd(parser_t &parser, io_streams_t &streams, wchar_t **argv);
#endif