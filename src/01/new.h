//
// Created by Milos on 3/3/2017.
//

#ifndef OOC_BOOK_NEW_H
#define OOC_BOOK_NEW_H

/**
 * Creates a new type.
 * Returns a pointer to new data item.
 *
 * @param type
 * @param ...
 * @return
 */
void *new(const void *type, ...);

/**
 * Deletes a type.
 * Accepts a pointer of item, previously created by new().
 *
 * @param item
 */
void delete(void *item);

#endif //OOC_BOOK_NEW_H
