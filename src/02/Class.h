//
// Created by Milos on 3/9/2017.
//

#ifndef OOC_BOOK_CLASS_H
#define OOC_BOOK_CLASS_H

#include <stdio.h>
#include <stdarg.h>

struct Class {
    size_t size;

    void *(*ctor)(void *self, va_list *app);

    void *(*dtor)(void *self);

    void *(*clone)(const void *self);

    int *(*differ)(const void *self, const void *other);
};

#endif //OOC_BOOK_CLASS_H
