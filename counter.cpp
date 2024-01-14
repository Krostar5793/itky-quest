#include <iostream>
#include <filesystem>

int main() {
    const std::string path = "dot-works"; // ディレクトリパス
    int count = 0;

    for (const auto& entry : std::filesystem::recursive_directory_iterator(path)) {
        if (entry.path().extension() == ".png") {
            ++count;
        }
    }

    std::cout << ".png files in " << path << ": " << count << std::endl;
    return 0;
}
