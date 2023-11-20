#include <assert.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>

int main() {
  int fd = fileno(stdout);

  assert(shutdown(fd, SHUT_RD) != 0);
  assert(errno == ENOTSOCK);

  return EXIT_SUCCESS;
}
