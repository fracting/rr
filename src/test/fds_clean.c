/* -*- Mode: C; tab-width: 8; c-basic-offset: 2; indent-tabs-mode: nil; -*- */

#include "rrutil.h"

int main(int argc, char** argv) {
  int fd;

  for (fd = 3; fd < 100; ++fd) {
    /* Check that |fd| is available to us. */
    test_assert(dup2(2, fd) == fd);
  }

  atomic_puts("EXIT-SUCCESS");
  return 0;
}
