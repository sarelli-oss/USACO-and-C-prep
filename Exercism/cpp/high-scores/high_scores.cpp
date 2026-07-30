#include "high_scores.h"

#include <algorithm>
#include <vector>

namespace arcade {

std::vector<int> HighScores::list_scores() {
    // TODO: Return all scores for this session.


    return scores;
}

int HighScores::latest_score() {
    // TODO: Return the latest score for this session.

    

    
    return scores[scores.size() - 1];
}

int HighScores::personal_best() {
    // TODO: Return the highest score for this session.

    int high{0};
    for(size_t i{0}; i < scores.size(); i++) {

        if(scores[i] > high) {
            high = scores[i];
        }
    }
    return high;
}

std::vector<int> HighScores::top_three() {
    // TODO: Return the top 3 scores for this session in descending order.

    std::vector<int> top_three_highest_scores = scores;

    std::sort(top_three_highest_scores.begin(), top_three_highest_scores.end(), std::greater<int>());


    if(top_three_highest_scores.size() > 3) {
        top_three_highest_scores.resize(3);
    }

    




    return top_three_highest_scores;
}

}  // namespace arcade
