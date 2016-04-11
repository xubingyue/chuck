#ifndef _CHK_STRING_H
#define _CHK_STRING_H

#include <stdint.h>
#include <stdio.h>

#define CHK_STRING_DEFAULT_BUFF_SIZE 64

typedef struct chk_string chk_string;

struct chk_string {
	size_t  len;
	char   *ptr;
	char    buff[CHK_STRING_DEFAULT_BUFF_SIZE];
};

chk_string *chk_string_new(const char *);
void        chk_string_destroy(chk_string*);
int32_t     chk_string_append(chk_string*,const char *ptr);
size_t      chk_string_size(chk_string*);
int32_t     chk_string_equal(chk_string*,chk_string*);
const char *chk_string_c_str(chk_string*);

#endif