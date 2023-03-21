OUTPUT = demo_ping.wasm

INCLUDE = ../../
CXX_FLAGS = --target=wasm32 -Os -nostdlib -std=c++14
LD_FLAGS = --no-entry --strip-all --export-dynamic --allow-undefined -O3

ifneq ("$(wildcard $(HOMEBREW_PREFIX)/opt/llvm/bin/clang)", "")
CXX = $(HOMEBREW_PREFIX)/opt/llvm/bin/clang
LD = $(HOMEBREW_PREFIX)/opt/llvm/bin/wasm-ld
else
CXX = /usr/bin/clang
LD = /usr/bin/wasm-ld
endif

SRC=$(wildcard *.cpp)
OBJ = $(patsubst %.cpp, build/%.o, $(SRC))

.PHONY: all
all: $(OBJ) Makefile
	$(LD) $(LD_FLAGS) -o build/$(OUTPUT) $(OBJ)
	wasm2wat build/$(OUTPUT) > build/$(OUTPUT).wat

build/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) -o $@ -c $<

.PHONY: clean
clean:
	@rm -rvf build
