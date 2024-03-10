#ifndef HASHTABLE_TYPE_UTIL_CHARP_H
#define HASHTABLE_TYPE_UTIL_CHARP_H

#include <string.h>
#include <stdbool.h>

/**
 * @brief Hashes void* key as char*
 * 
 * @param key 
 * @return unsigned long hash
 */
unsigned long hash_void_charp(const void* key);

/**
 * @brief Compares two void* variables as char*
 * 
 * @param str1 
 * @param str2 
 * @returns
 *      - true: if str1 is equal with str2
 *      - false: otherwise
 */
bool equals_void_charp(const void* str1, const void* str2);

/**
 * @brief Returns a char* copy of void* str
 * 
 * @param str 
 * @return char* 
 */
char* print_void_charp(const void* str);

void free_void_charp(void* str);

#endif