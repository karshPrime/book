#!/usr/bin/env ruby
# self notes
# mainly things which are new/different from py

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 1. Varible name starting from capital letter is constant (value can't be changed later)

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 2. Puts here does not output anything
write_handler = File.new("yourSum.out", "w")
write_handler.puts("Random Text").to_s
write_handler.close

data_from_file = File.read("yourSum.out")
puts data_from_file

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 3. load command can be used to run any other external script
load "someScript.py"

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 4. and: &&
     or : ||
     not: !
     xor: ^

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 5. Comparission opperator:
variable1 <=> variable2
# return +1 if variable1 is bigger, -1 if variable1 is smaller and 0 if they're smaller

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 6. unless is another comparison operator
unless age > 4
  puts "No School"
else
  puts "Go to School"
end

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 7. condtions can be added to the output that proceeds it
puts "You're Young" if age < 30

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 8. Format (condition) ? "Returned if true" : "Returned if false"
puts (age >= 50) ? "Old" : "Young"

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 9. Loops until you break out of loop
x = 1
loop do
  x += 1
  # Slips this iteration of the loop
  next unless (x % 2) == 0
  puts x
  # Ends the looping
  break if x >= 10
end

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 10. Do stuff until a condition is met
a = 1
until a >= 10
  a += 1
  next unless (a % 2) == 0
  puts a
end

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 11. FOR LOOPS
# Create an array of numbers
numbers = [1, 2, 3, 4, 5]
for number in numbers
  puts "#{number}, "
end

groceries = ["bananas", "sweet potatoes", "pasta", "tomatoes"]
# Cycles through every item in groceries temporarily storing them in food
groceries.each do |food|
  puts "Get some #{food}"
end

# Cycles through numbers 0 through 5
(0..5).each do |i|
  puts "# #{i}"
end

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 12. trial error = begin rescue end
first_num = gets.to_i
second_num = gets.to_i
begin
  answer = first_num / second_num
rescue # You could use rescue ZeroDivisionError
  puts "You can't divide by zero"
end
puts "#{first_num} / #{second_num} = #{answer}"

# You can throw your own exceptions with raise
def check_age(age)
  raise ArgumentError, "Enter Positive Number" unless age > 0
end
# You catch them with rescue
begin
  check_age(-1)
rescue ArgumentError
  puts "That is an impossible age"
end

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 13. exit breaks any loop. kinda same as pass. ends whole program

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 14. string interpolation works only with "" and not with ''.
puts("Add Them #{10 + 5} \n\n") # would output 15
puts('Add Them #{4 + 5} \n\n')  # would output #{4 + 5} \n\n

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 15. multi-line string. starts with <<EOM and ends with EOM
string = <<EOM
this whole is
a string and it supports
interpolation like #{4 + 5} \n\n 
EOM

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 16. String methods
puts full_name.include?("Justin")                     # check if a string contains a string
puts full_name.size                                   # length of a string
puts "Vowels : " + full_name.count("aeiou").to_s      # Count the number of vowels
puts "Consonants : " + full_name.count("^aeiou").to_s # Count the consonants
puts full_name.start_with?("Banas")                   # check if a string starts with another string
puts "Index : " + full_name.index("Banas").to_s       # Return the index for the match
puts "a == a : " + ("a" == "a").to_s                  # Check equality of strings
puts full_name.chomp('as')                            # Chomp eliminates \n by default or a specific string
puts full_name.upcase                                 # converts string to all caps
puts full_name.downcase                               # converts string to down case
puts full_name.swapcase                               # converts string to case
puts full_name.delete("a")                            # Delete deletes provided characters
puts full_name.split(/ /)                             # Split a string into an array
puts value.round(decimal_places)                      # print float at given number of decimal places

# Check if they are the same object
puts "\"a\".equal?(\"a\") : " + ("a".equal?"a").to_s  
puts first_name.equal?first_name

full_name = "       " + full_name + "          "
# Stripping white space
puts full_name.lstrip
puts full_name.rstrip
puts full_name.strip

# Formatting Strings. 30 is the total number of characters, '.' is the character to use to allign
puts full_name.rjust(30,  ' ')
puts full_name.ljust(30,  ' ')
puts full_name.center(30, ' ')

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 17. Escape sequences
# \\  Backslash
# \'  Single-quote
# \"  Double-quote
# \a  Bell
# \b  Backspace
# \f  Formfeed
# \n  Newline
# \r  Carriage
# \t  Tab
# \v  Vertical tab

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 18. Classes
class Animal
    def initialize                                    # same as def __init__
      puts "Creating a New Animal"
    end
    def set_name(new_name)
      # Sets the value for an instance variable
      @name = new_name
    end
    def get_name
      @name
    end
end
cat = Animal.new                                      # Creates a new Animal object
cat.set_name("Peekaboo")                              # Sets the Animals name
puts cat.get_name                                     # get_name returns the value of name

class Dog
  attr_reader :name, :height, :weight                 # Shortcut for creating all getter functions
  attr_writer :name, :height, :weight                 # Shortcut for creating all setter functions
  attr_accessor :name, :height, :weight               # Creates setter and getter methods (Use this One)

  def bark
    return "Generic Bark"
  end

end
max = GermanShepard.new
max.name = "Max"
printf "%s goes %s \n", max.name, max.bark()

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 19. Modules
# just a container of methods. can be accessed by using 'include command'
# can be used in other files
# say this is file1.rb
module Message
  def add_numbers(a, b)
    return(a+b)
  end
end

include Message
Message.add_numbers(3,5)                              # this would return 8
# in some other file, say file2.rb-
require_relative (file1.rb)                           # by require_relative the require funtion looks for the required file in relation to self's path.
#                                                       BASICALLY THIS WAY YOU DONT HAVE TO TYPE WHOLE PATH
include Message
Message.add_numbers(2,4)                              # this would return 6

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 20. Modules and classes name start from capital letter

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 21. Polymorphism
# it is basically if classA is inheritted by classB and then classB overrites some ClassA function
class ClassA
  def day_today
    puts("today\'s a good day")
  end
end
class ClassB < ClassA
  def day_today
    puts("today\'s a shit day")                       # this is polymorphism
  end
end

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 22. Symbols
# these are strings which cannot be modified; values cant be changed
# are alloted space in the memory and are saved in it. strings aren't
puts :word                                            # would output word
puts :word.object_id                                  # would output some number
puts :word.object_id                                  # would output same number as before
puts :"string"                                        # would output string
puts :"string".object_id                              # would output some number
puts :"string".object_id                              # would output different number than before

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 23. Array methods
array_One = [1,"two",3,5.5]                           # You can store multiple object types
puts array_One.join(", ")                             # Join arrays and form string
puts array_One[2]                                     # Indexes start at 0
puts array_One[2,2].join(", ")                        # Return 2 values starting at the 2nd index
puts array_One.values_at(0,1,3).join(", ")            # Return values in index 0, 1 and 3
array_One.unshift(0)                                  # Add 0 at the beginning of the array
array_One.shift()                                     # Remove the first item in the array
array_One.push(100, 200)                              # Add 100 and 200 to the end of the array
array_One.pop                                         # Remove item at the end of the array
array_One.concat([10,20,30])                          # Add one array to the end of another
puts "Size : " + array_One.size().to_s                # Size of array
puts "Contains 100 : " + array_One.include?(100).to_s # returns bool
puts "How Many 100s : " + array_One.count(100).to_s   # counts number of occ.
puts "Empty : " + array_One.empty?.to_s               # returns bool
puts array_One.join(", ")                             # Convert an array into a string
p array_One                                           # Print and Inspect the array

# Output array in loop
array_One.each do |value|
  puts value
end

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 24. Functions
# start with def, function name, parameters if any

def add_nums(num_1, num_2)
    return num_1.to_i + num_2.to_i
end
puts add_nums(3,4)
  
# Variables are passed by value so the'r value can't be changed in a function
x = 1
 
def change_x(x)
    x = 4
end
change_x(x)
puts "x = #{x}"

#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#

# 25. Exceptions
# We catch exceptions with begin and rescue
print "Enter a number : "
first_num = gets.to_i
print "Enter Another : "
second_num = gets.to_i

begin
    answer = first_num / second_num  
rescue # You could use rescue ZeroDivisionError
    puts "You can't divide by zero"
    exit
end

puts "#{first_num} / #{second_num} = #{answer}"
# own exceptions can be done with raise
def check_age(age)
    raise ArgumentError, "Enter Positive Number" unless age > 0
end
  
# You catch them with rescue
begin
    check_age(-1)
rescue ArgumentError
    puts "That is an impossible age"
end
