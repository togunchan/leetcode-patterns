# Hash-Based Patterns

## When to Use
- When fast lookup is required
- When past data influences current decisions
- When you need to detect duplicates, pairs, or frequencies

## Core Idea
Store information about previously seen elements  
to answer the current question in constant time.

## Variations

### 1. Presence Check (Set)
- Only care if an element exists
- Data Structure: unordered_set
- Example: Contains Duplicate

### 2. Value → Index Mapping
- Need to know where a value appeared
- Data Structure: unordered_map<int, int>
- Example: Two Sum

### 3. Frequency Counting
- Count how many times elements appear
- Data Structure: unordered_map<int, int>
- Example: Valid Anagram

## Mental Model
Store the past, solve the present.

## Common Mistakes
- Treating map like a boolean structure
- Forgetting to insert elements
- Using incorrect data types (e.g., overflow issues)

## Example Problems
- Two Sum
- Contains Duplicate