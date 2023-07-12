#include <iostream>
#include <fstream>

// sequentially write text in a file  
void file_write_sequence() {
  std::fstream file;
  file.open("file.txt", std::ios::in);
  
  if (file.is_open()) {
    file << "abcdefghijklmnopqrstuvwxyz";
    file.close()

  } else {
    std::cout << "error\n";

  }
}

// read data from file, randomly.
void file_read_random() {
  std::fstream file;
  file.open("file.txt", std::ios::out);
  char c;

  if (file.is_open()) {
    file.seekg(6L, std::ios::end)
    // first argument represents what index's value we need; should be long datatype
    // second represents- from what index should the first argument's count begin

    file.get(c);
    std::cout << c << std::endl; // this would print 'g'; and the read cursor would move one index up

    file.get(c);
    std::cout << c << std::endl; // now this would print 'h', since thats the next value after 'g'

    file.seekg(-3L, std::ios::cur); // moving cursor 6 characters back- to 'c'
    file.get(c);
    std::cout << c << std::endl; // now this would print 'c'

    file.seekg(-3L, std::ios::end); // moving the cursor 3 indexes left from the end
    std::cout << c << std::endl; // now this would print 'x'

    file.close();

  } else {
    std::cout << "error\n";
  }
}

// randomly write text in a file  
void file_write_random() {
  std::fstream file;
  file.open("file.txt", std::ios::out);
  if (file.is_open()) {
    file.seekp(6L, std::ios::beg);  // move cursor to 'g' index, and move cursor to 'h'
    file.put('G'); // replace 'g' with 'G'
    file.close()

  } else {
    std::cout << "error\n";
  }
}

// get file length
void file_length() {
  std::fstream file;
  file.open("file.txt", std::ios::in);
  if (file.is_open()) {
    file.seekg(0L, std::ios::end);
    unsigned short size = f.tellg();
    std::cout << size << std::endl;
    // cursor's starting from 0 and going to end
    // and tellg is telling current location of cursor

    // index starts from 0, however at the end of the file, there's null char
    // to tell the os when the string ends; these two cancel one other and
    // we get length of the file

    file.close()

  } else {
    std::cout << "error\n";
  }
}

int main() {
  file_write_sequence();
  file_read_random();
}

/* Offsets:
- std::ios::beg    begening of the file
- std::ios::end    end of the file
- std::ios::cur    cursor current location
*/

