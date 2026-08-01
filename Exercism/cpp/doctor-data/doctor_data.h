// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#pragma once
#include <string>

namespace star_map {

    enum class System {

        BetaHydri,
        Sol,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani


    };


}

namespace heaven {

    class Vessel {
        public:
        
        std::string name{};
        int generation{};

        star_map::System current_system{};

        Vessel replicate(const std::string& name1);

        int busters{0};

        Vessel(std::string name, int generation, star_map::System system = star_map::System::Sol);

        void make_buster();

        bool shoot_buster();





    };

    std::string get_older_bob(const Vessel& instance1, const Vessel& instance2);
    bool in_the_same_system(const Vessel& instance1, const Vessel& instance2);





}



