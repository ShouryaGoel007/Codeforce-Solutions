cmake_minimum_required(VERSION 3.20)
project(DSA)

set(CMAKE_CXX_STANDARD 17)

# 🚀 Dynamic Scanner: Instantly grabs ALL .cpp files in your folder.
# This prevents line 153 errors and removes the need for manual hardcoding.
file(GLOB SOURCES "*.cpp")

if(SOURCES)
    add_executable(DSA ${SOURCES})
else()
    # Prevents CMake from crashing if your directory is ever empty
    add_executable(DSA main.cpp)
endif()

add_executable(F_It_Just_Keeps_Going_Sideways "F_It_Just_Keeps_Going_Sideways.cpp")
add_executable(C_Alices_Adventures_in_Cutting_Cake "C_Alices_Adventures_in_Cutting_Cake.cpp")
add_executable(A_Little_Elephant_and_Interval "A_Little_Elephant_and_Interval.cpp")
add_executable(C_Complex_Market_Analysis "C_Complex_Market_Analysis.cpp")
add_executable(C_Hungry_Games "C_Hungry_Games.cpp")
add_executable(D1_The_Endspeaker_Easy_Version "D1_The_Endspeaker_Easy_Version.cpp")
add_executable(B_Karen_and_Coffee "B_Karen_and_Coffee.cpp")
add_executable(C_Little_Girl_and_Maximum_Sum "C_Little_Girl_and_Maximum_Sum.cpp")
add_executable(C_Two_TVs "C_Two_TVs.cpp")
add_executable(C_Tea_Tasting "C_Tea_Tasting.cpp")
add_executable(D_Constant_Palindrome_Sum "D_Constant_Palindrome_Sum.cpp")
add_executable(A_Greg_and_Array "A_Greg_and_Array.cpp")
add_executable(A_Extreme_Subtraction "A_Extreme_Subtraction.cpp")
add_executable(C_Helping_the_Nature "C_Helping_the_Nature.cpp")
add_executable(B_Gigantomachy "B_Gigantomachy.cpp")

add_executable(B_Chemistry "B_Chemistry.cpp")
add_executable(A_Jellyfish_and_Undertale "A_Jellyfish_and_Undertale.cpp")
add_executable(D_Balanced_Round "D_Balanced_Round.cpp")
add_executable(D_Deletive_Editing "D_Deletive_Editing.cpp")
add_executable(B_Tenzing_and_Books "B_Tenzing_and_Books.cpp")
add_executable(B_Sum_of_Medians "B_Sum_of_Medians.cpp")
add_executable(B_Multiply_by_2_divide_by_6 "B_Multiply_by_2_divide_by_6.cpp")
add_executable(B_Swap_and_Delete "B_Swap_and_Delete.cpp")
add_executable(A_Helmets_in_Night_Light "A_Helmets_in_Night_Light.cpp")
add_executable(B_Monsters "B_Monsters.cpp")