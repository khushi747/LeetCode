class Solution:  
    def kthDistinct(self, arr, k):  
        frq = {}  # Initialize an empty dictionary to store the frequency of each string  
        
        # Count the frequency of each string in arr  
        for s in arr:  # Iterate through each string in the input list  
            if s in frq:  # Check if the string is already in the frequency dictionary  
                frq[s] += 1  # Increment the count for the string if it exists  
            else:  
                frq[s] = 1  # Add the string to the dictionary with a count of 1 if it doesn't exist  
        
        dist_str = []  # Initialize an empty list to store distinct strings (those with a frequency of 1)  
        
        # Collect distinct strings that appear exactly once  
        for strng in arr:  # Iterate through the list again  
            if frq[strng] == 1:  # Check if the string has a frequency of exactly 1  
                dist_str.append(strng)  # If so, add it to the list of distinct strings  
        
        # Check if k is within the bounds of the distinct strings list  
        if k <= len(dist_str):  # If k is valid  
            return dist_str[k - 1]  # Return the (k-1)th distinct string (1-based index)  
        else:  
            return ""  # If k is greater than the number of distinct strings, return an empty string