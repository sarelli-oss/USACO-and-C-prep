#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores

    std::vector<int> student_scores_int(student_scores.size());
    for(size_t i{0}; i < student_scores.size(); i++) {

        student_scores_int[i] = static_cast<int>(student_scores[i]);
    }

    return student_scores_int;



   
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students

    int sum{0};

    for(size_t i{0}; i < student_scores.size(); i++) {

       if(student_scores[i] <= 40) {
        sum++;
       }
    }


    return sum;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades

    int increment = (highest_score-40)/4;
    
    std::array<int, 4> letter_grades{41,41+increment, 41 + increment*2, 41 + increment*3};

    


    return letter_grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking

    std::vector<std::string> student_scores_string(student_scores.size());

    for(size_t i{0}; i < student_scores.size(); i++) {

        student_scores_string[i] = std::to_string(student_scores[i]);
    }

    std::vector<std::string>matching_scores(student_scores.size());
    for(size_t i{0}; i < student_names.size(); i++) {

        matching_scores[i] = std::to_string(i+1) + ". " + student_names[i] + ": " + student_scores_string[i];
    }


    return matching_scores;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score

    

    for(size_t i{0}; i < student_scores.size(); i++) {
        if(student_scores[i] == 100) {

            
            return student_names[i];
        }

        

    }

    return "";
    
}
