//
// Created by Milos on 3/2/2017.
//

#ifndef OOC_BOOK_SET_H
#define OOC_BOOK_SET_H

extern const void *Set;

/**
 * Adds the element to set.
 * Returns the added element or already present element in a set.
 *
 * @param set
 * @param element
 * @return
 */
void *add(void *set, const void *element);

/**
 * Looks for an element in set.
 * Returns found element of a null pointer
 *
 * @param set
 * @param element
 * @return
 */
void *find(const void *set, const void *element);

/**
 * Removes an element from set.
 * Returns the removed element.
 *
 * @param set
 * @param element
 * @return
 */
void *drop(const void *set, const void *element);

/**
 * Checks if a set contains an element.
 *
 * @param set
 * @param element
 * @return
 */
int contains(const void *set, const void *element);

#endif //OOC_BOOK_SET_H
