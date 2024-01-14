#include <iostream>
#include <filesystem>

int main() {
    const std::string path = "dot-works";
    int count = 0;

    for (const auto& entry : std::filesystem::recursive_directory_iterator(path)) {
        if (entry.path().extension() == ".png") {
            ++count;
        }
    }

    std::cout << "今までで計" << count << "つの作品が作られました。" << std::endl;
    return 0;
}
