# coder

![Language: C++](https://img.shields.io/badge/Language-C%2B%2B-ff69b4) ![License: Apache](https://img.shields.io/badge/License-Apache-green) 

Let's do “HELL Jigoku YES”-sh thing

## Getting started

1. Run `$ make` to create the container.
2. Run `$ make start` to run the container (by this command you automatically enter to it).
3. (In container shell) Compile a source and run:
    * Clang: `$ ./tasks/clang <source w/o ext suffix>`
    * GCC: `$ ./tasks/gcc <source w/o ext suffix>`
    
See Makefile to how to these works.

## Requirements

* **C/C++ Compiler**. e.g. GNU Compiler Collection (GCC) or Clang
* (Option) **Docker** and **Docker Compose** if you run programs in provided environment with Dockerfile.
* (Option) **GNU Make** if you want to use Docker easier.

## License

Apache License 2.0
