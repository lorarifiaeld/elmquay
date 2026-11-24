#include <string>
#include <vector>

void count_spaces() {
    std::string text = "a b  c   d";
    int spaces = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') spaces += 1;
    }
    (void)spaces;
}

void alternate_sum() {
    int acc = 0;
    for (int i = 1; i <= 12; ++i) {
        if (i % 2 == 0) acc += i; else acc -= i;
    }
    (void)acc;
}

void integer_power() {
    int base = 2, exp = 8;
    int power = 1;
    for (int i = 0; i < exp; ++i) power *= base;
    (void)power;
}

void text_length() {
    std::string text = "cascade";
    std::size_t n = text.size();
    (void)n;
}

extern "C" int placid_beacon();
extern "C" void brisk_lantern();
extern "C" void cedar_harbor();
extern "C" void golden_prism();

int main() {
    count_spaces();
    alternate_sum();
    integer_power();
    text_length();
    brisk_lantern();
    cedar_harbor();
    golden_prism();
    return placid_beacon();
}
