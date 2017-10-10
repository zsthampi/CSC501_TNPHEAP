#include <npheap/tnpheap_ioctl.h>
#include <npheap/npheap.h>
#include <npheap.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <unistd.h>
#include <signal.h>
#include <malloc.h>
#include <string.h>

__u64 tnpheap_get_version(int npheap_dev, int tnpheap_dev, __u64 offset)
{
        printf("Library tnpheap_get_version\n");
        return 0;
}



int tnpheap_handler(int sig, siginfo_t *si)
{
        printf("Library tnpheap_handler\n");
        return 0;
}


void *tnpheap_alloc(int npheap_dev, int tnpheap_dev, __u64 offset, __u64 size)
{
        printf("Library tnpheap_alloc\n");
        return NULL;
}

__u64 tnpheap_start_tx(int npheap_dev, int tnpheap_dev)
{
        printf("Library tnpheap_start_tx\n");
        return 0;
}

int tnpheap_commit(int npheap_dev, int tnpheap_dev)
{
        printf("Library tnpheap_commit\n");
        return 0;
}
