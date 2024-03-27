# Maximising-Box-Volume
The program first reads in two integers for the width (W) and height (H) of the paper. If the input values are not within the range of [10..3000], the program prints "Invalid input range." and prompts the user to input the dimensions again until they are within the valid range.

Once the valid paper dimensions are obtained, the program calculates the maximum volume of the top-less box that can be created by cutting and folding the paper along lines parallel to the edges. The program then outputs the following:

-The dimensions of the created box in descending order of edge length.
-The volume of the created box, with commas separating every 3 digits.
-The surface area to volume ratio of the created box, rounded to 3 decimal places.

For boxes with the same volume, the program selects the one with a larger surface area to volume ratio.
