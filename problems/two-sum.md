# Two Sum

## Pattern
Hash Map

## Core Idea
complement = target - x  
Store previously seen values to enable constant-time lookup.

## Why It Works
Each element is processed once, and lookup in the hash map is O(1),  
resulting in an overall time complexity of O(n).

## Mistakes I Made
- Used `uint8_t` for loop index → caused overflow → infinite loop
- Treated the map like a boolean structure instead of value → index mapping

## Mental Model
"seen" acts as memory of the past.

## Complexity
Time: O(n)  
Space: O(n)