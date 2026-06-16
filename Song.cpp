#include "Song.h"
#include <cctype>

Song::Song()
	: _song_id(""), _song_name(""), _artist_name(""), _length(""), _date_published(0) {}

Song::Song(std::string i, std::string n, std::string a, std::string l, int d)
	: _song_id(i), _song_name(n), _artist_name(a), _length(l), _date_published(d) {}

std::ostream &operator<<(std::ostream &temp, const Song &tempSong) {
	temp << tempSong._song_id << "; " << tempSong._song_name << "; "
		 << tempSong._artist_name << "; " << tempSong._length << "; "
		 << tempSong._date_published;
	return temp;
}

int key_to_index(const Song &song, int size) {
	int sum = 0;
    std::string id = song.getID();
    
    for (size_t i = 0; i < id.length(); i++) {
        int ascii_val = static_cast<int>(id[i]); // Get ASCII value
        int squared_val = ascii_val * ascii_val; // Square it
        int position = i + 1;                    // Get position (1-based index)
        
        sum += (squared_val * position);         // Add to total sum
    }
    
    return sum % size; // Modulo hashSize
}
