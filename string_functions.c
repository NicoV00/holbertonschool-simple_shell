#include "main.h"

char* strdup(const char* s)
{
size_t len = strlen(s);
char* p = malloc(len + 1);
if (p == NULL)
{
return NULL;
}
memcpy(p, s, len + 1);
return p;
}

size_t strlen(const char* s)
{
size_t len = 0;
while (s[len] != '\0') 
{
len++;
}
return len;
}
