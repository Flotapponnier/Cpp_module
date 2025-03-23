#include "Harl.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "use ./Harl <level_argument>" << std::endl;
        return 1;
    }

    std::string level = argv[1];
    Harl harl;

    enum Levels { DEBUG, INFO, WARNING, ERROR, INVALID };
    Levels level_token = INVALID;

    if (level == "DEBUG") level_token = DEBUG;
    else if (level == "INFO") level_token = INFO;
    else if (level == "WARNING") level_token = WARNING;
    else if (level == "ERROR") level_token = ERROR;

    switch (level_token) {
        case DEBUG:
            harl.complain("DEBUG");
        case INFO:
            harl.complain("INFO");
        case WARNING:
            harl.complain("WARNING");
        case ERROR:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "Invalid harl" << std::endl;
    }

    return 0;
}
