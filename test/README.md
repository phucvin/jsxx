cd ..

<install Rust>

<install llvm-18, see https://apt.llvm.org/>

<install clang-format>

cargo build --release

cd ..

cat test/hello.js | cargo run --release -- --emit-cpp > test/hello.cpp

cat test/hello.js | cargo run --release -- --clang-path clang++-18

time ./output

wget https://github.com/WebAssembly/wasi-sdk/releases/download/wasi-sdk-24/wasi-sdk-24.0-x86_64-linux.tar.gz

tar xvf wasi-sdk-24.0-x86_64-linux.tar.gz

cat test/hello.js | cargo run --release -- --wasm --clang-path /workspaces/wasi-sdk-24.0-x86_64-linux/bin/clang++
