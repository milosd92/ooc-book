//
// Created by Milos on 3/9/2017.
//

#include <stddef.h>

#ifndef OOC_BOOK_NEW_H
#define OOC_BOOK_NEW_H

void *new(const void *class, ...);

void delete(void *item);

void *clone(const void *self);

int differ(const void *self, const void *other);

size_t sizeOf(const void *self);

#endif //OOC_BOOK_NEW_H
