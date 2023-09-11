#include "Cat.h"

namespace ag {
void Cat::get_name() { cout << name; }
void Cat::speak() { cout << " Meeeww\n"; }
void Dog::get_name() { cout << name; }
void Dog::speak() { cout << " Bhaauuu\n"; }
}  // namespace ag

namespace aj {
void Cat::get_name() { cout << name; }
void Cat::speak() { cout << " Sssssss\n"; }
void Dog::get_name() { cout << name; }
void Dog::speak() { cout << " Grrrrrr\n"; }
void Cow::get_name() { cout << name; }
void Cow::speak() { cout << " Hurrrr\n"; }
}  // namespace aj