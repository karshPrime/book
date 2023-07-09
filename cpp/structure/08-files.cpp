#include <iostream>
#include <fstream>  // required to deal with files

//! classes in fstream library to create, write and read files
/* ofstream 	Creates and writes to files
   ifstream 	Reads from files
   fstream 	  A combination of ofstream and ifstream: creates, reads, and writes to files
*/

void create_write() {
  std::ofstream write_file("filename.txt");                   // Create and open a text file
  write_file << "Files can be tricky, but it is fun enough!"; // Write to the file
  write_file.close();                                         // Close the file
}

void read() {
  std::string text;                         // Create a text string, which is used to output the text file
  std::ifstream read_file("filename.txt");  // Read from the text file

  // Use a while loop together with the getline() function to read the file line by line
  while (getline (read_file, text)) {
    std::cout << text;  // Output the text from the file
  }

  read_file.close();    // Close the file
}

void alt_create_write() {
  std::fstream file_towrite;

  file_towrite.open("file.txt", std::ios::out);
  file_towrite << "some text";
  file_towrite.close();
}

void alt_read() {
  std::string line_var;
  std::fstream file_toread;
  char endline_char = '\n';

  file_toread.open("file.txt", std::ios::in);
  if (file_toread.is_open()) {
    while (getline(file_toread, line_var, endline_char)) {
      std::cout << line_var << '\n';
    }
    file_toread.close();
  } else {
    std::cout << "File not found\n";
  }
}

int main() {
  create_write();
  read();

  alt_create_write();
  alt_read();
}

void more_functions() {
  // get();
  // returns the next character extracted from the input stream as an int

  // get(char char_var);
  // overloaded version of get() that extracts the next character from the input stream and assigns it to char_var

  // getline(fil_obj, str_obj, term_char);
  // extracts characters from specified input stream- file_obj, until terminating character- term_char, os encountered.
  // assigns characters to str_obj

  // peek();
  // returns next char without extracting it from the stream

  // ignore(int n)
  // skips over the next n characters. n is optional parameter; default value is 1
}

void fstream_objects() {
  // std::ios::in
  // open text file in input mode

  // std::ios::out
  // open text file in output mode

  // std::ios::app
  // open text file in append mode

  // std::ios::ate
  // go to end of the opened file

  // std::ios::binary
  // open binary file in input mode

  // std::ios::trunc
  // delete file conents if it exists

  // std::ios::nocreate
  // if file doesn't exist, dont create one; open fail

  // std::ios::noreplace
  // if file exists, open for outpuyt fail
}
