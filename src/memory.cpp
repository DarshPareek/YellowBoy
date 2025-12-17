//https://gbdev.io/pandocs/Memory_Map.html
#include <vector>
#include <cstddef>

constexpr std::size_t WRAM_SIZE = /* your size */;

struct Wram {
    std::vector<uint8_t> bytes;

    static Wram New() {
        return Wram{
            std::vector<uint8_t>(WRAM_SIZE, 0)
        };
    }
};
