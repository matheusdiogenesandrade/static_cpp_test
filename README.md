# Static example

```sh
conan install . --profile conanprofile.txt --build=missing

cmake  --preset conan-release

cd build/Release

make

./main

```
