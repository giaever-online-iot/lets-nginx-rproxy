#include <sys/types.h>
#include <stdio.h>

int initgroups(const char * user, gid_t group)
{
    fprintf(stderr, "snapstore: stubbing out call to initgroups()");
    return 0;
}

