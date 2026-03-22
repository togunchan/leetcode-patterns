# Contains Duplicate

## Pattern
Hash Set (Presence Check)

## Core Idea
Track elements that have already been seen.  
If an element appears again, return true immediately.

## Why It Works
Each lookup and insertion is O(1),  
so the overall time complexity is O(n).

## Mistakes I Made
- Initially forgot to insert elements into the data structure
- Overused map instead of a simpler set

## Mental Model
Check if the current element exists in the past.

## Complexity
Time: O(n)  
Space: O(n)