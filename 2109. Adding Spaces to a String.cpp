class Solution {
public:
    // Given a string `inputString` and a vector `spacePositions` containing positions at which spaces are to be inserted,
    // this function returns the string with spaces added at the specified positions.
    string addSpaces(string inputString, vector<int>& spacePositions) {
        // Initialize an empty string to store the result.
        string result = "";

        // iterate over each character in `inputString`.
        // `charIndex` is the index of the current character, 
        // `spaceIndex` is the index for iterating through `spacePositions`.
        for (int charIndex = 0, spaceIndex = 0; charIndex < inputString.size(); ++charIndex) {
            // If there are still positions left in `spacePositions` to process and
            // the current character index matches the current space position,
            // then add a space to 'result' and move to the next space position.
            if (spaceIndex < spacePositions.size() && charIndex == spacePositions[spaceIndex]) {
                result += ' ';
                ++spaceIndex; // Move to the next position for a space.
            }
            // add the current character from `inputString` to `result`.
            result += inputString[charIndex];
        }
      
        // Return the resulting string with spaces inserted.
        return result;
    }
};