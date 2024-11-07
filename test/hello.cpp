
#include "runtime/exceptions.hpp"
#include "runtime/global_io.hpp"
#include "runtime/global_json.hpp"
#include "runtime/global_symbol.hpp"
#include "runtime/js_value.hpp"
#include <experimental/coroutine>

int prog() {

  auto IO = create_IO_global();
  auto JSON = create_JSON_global();
  auto Symbol = create_symbol_global();
  console[JSValue{"log"}]({(JSValue{"hello"}).boxed_value()});
  return 0;
}

int main() {

  try {
    { prog(); }
  } catch (std::string e) {
    { printf("EXCEPTION: %s\n", e.c_str()); }
  }
}

