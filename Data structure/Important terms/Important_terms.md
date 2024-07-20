# Some important terms to solve Ques efficiently

## lexicographically 
> A lexicographic ordering is a way of ordering sequences by comparing elements in the order in which they appear. It is similar to how words are ordered in a dictionary. Here is a brief description:

>>1. **String Comparison**: In lexicographic order, sequences (such as strings) are compared element by element from left to right.
   
>>2. **Order Determination**: The first differing element determines the order of the sequences. For example, "apple" comes before "banana" because 'a' < 'b'.

>>3. **Equal Elements**: If the elements are equal, the comparison moves to the next element. For example, "apple" comes before "apples" because the fifth character in "apple" (which is an empty string) comes before 's' in "apples".

>>4. **Numeric Sequences**: This concept can also be extended to numeric sequences, where the order is determined by comparing each number in the sequence.

>>**Example**:
>>- Strings: "cat" < "dog" (since 'c' < 'd')
>>- Numbers: [1, 2, 3] < [1, 2, 4] (since 3 < 4)
  
>>Lexicographic ordering is crucial in various algorithms and data structures, especially in sorting and searching operations.