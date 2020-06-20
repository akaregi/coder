# coder

![Language: C++](https://img.shields.io/badge/Language-C%2B%2B-ff69b4) ![License: Apache](https://img.shields.io/badge/License-Apache-green)

Let's do “HELL Jigoku YES”-sh thing

## Getting started

1. Run `$ make` to create the container.
2. Run `$ make start` to run the container (by this command you automatically enter to it).
3. (In container shell) Compile a source and run:
    1. `$ cd src/<subdirectory>`
    2. `$ CXX=clang++ meson build`
    3. `$ cd build`
    4. `$ ninja`

## Requirements

* **C/C++ Compiler**. e.g. Clang
* (Option) **Docker** and **Docker Compose** if you run programs in provided environment with Dockerfile.
* (Option) **GNU Make** if you want to use Docker easier.

## License

```
Copyright 2020 AKANE AKAGI (akaregi)

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
```
