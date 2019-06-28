#include <string>

class Song
{

    std::string title;
    std::string artist;

public:
    // Add a constructor here:
    Song(std::string new_title, std::string new_artist);
    /**
    Desturctors called automatically when
    The object moves out of scope.
    The object is explicitly deleted.
    When the program ends.
     */
    // Add a destructor here:
    ~Song();

    std::string get_title();
    std::string get_artist();
};