#include "kindergarten_garden.h"
#include <vector>

namespace kindergarten_garden {

Plants char_to_plant(char c) {
    switch (c) {
        case 'C': return Plants::clover;
        case 'G': return Plants::grass;
        case 'R': return Plants::radishes;
        case 'V': return Plants::violets;
        default:  return Plants::grass;
    }
}

std::array<Plants, 4> plants(std::string diagram, std::string student) {
    const std::vector<std::string> students = {
        "Alice", "Bob", "Charlie", "David", "Eve", "Fred",
        "Ginny", "Harriet", "Ileana", "Joseph", "Kincaid", "Larry"
    };

    size_t student_index = 0;
    for (size_t i = 0; i < students.size(); ++i) {
        if (students[i] == student) {
            student_index = i;
            break;
        }
    }

    size_t col = student_index * 2;

    // Split diagram into row 1 and row 2 safely
    size_t newline_pos = diagram.find('\n');
    std::string row1 = diagram.substr(0, newline_pos);
    std::string row2 = diagram.substr(newline_pos + 1);

    return std::array<Plants, 4>{
        char_to_plant(row1[col]),
        char_to_plant(row1[col + 1]),
        char_to_plant(row2[col]),
        char_to_plant(row2[col + 1])
    };
}

}  // namespace kindergarten_garden