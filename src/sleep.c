#define _POSIX_C_SOURCE 199309L
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <time.h>

int msleep(long tms) {
    struct timespec ts;
    int ret;

    if (tms < 0) {
        errno = EINVAL;
        return -1;
    }

    ts.tv_sec = tms / 1000;
    ts.tv_nsec = (tms % 1000) * 1000000;

    do {
        ret = nanosleep(&ts, &ts);
    } while (ret && errno == EINTR);

    return ret;
}
