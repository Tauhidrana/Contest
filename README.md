#  Contest Solutions

[![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?logo=cplusplus)](https://isocpp.org/)
[![Codeforces](https://img.shields.io/badge/Codeforces-tauhidrana.exe-0052B5?logo=codeforces)](https://codeforces.com/profile/tauhidrana.exe)
[![CodeChef](https://img.shields.io/badge/CodeChef-tauhid_rana-8B4513?logo=codechef)](https://www.codechef.com/users/tauhid_rana)
[![CI](https://github.com/user-Phitron/Contest/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/user-Phitron/Contest/actions/workflows/c-cpp.yml)
[![License](https://img.shields.io/badge/License-Educational-orange)](#license)

Competitive programming solutions by **Kazi Tauhid Rana**.

- Codeforces: [`tauhidrana.exe`](https://codeforces.com/profile/tauhidrana.exe)
- CodeChef: [`tauhid_rana`](https://www.codechef.com/users/tauhid_rana)

---

## Table of Contents

- [Repository Structure](#repository-structure)
- [Problem Sources](#problem-sources)
- [Algorithm Categories](#algorithm-categories)
  - [Binary Search on Answer](#binary-search-on-answer)
  - [Greedy](#greedy)
  - [Math & Number Theory](#math--number-theory)
  - [Data Structures](#data-structures)
  - [String & Ad-hoc](#string--ad-hoc)
- [Code Style](#code-style)
- [Installation](#installation)
- [Usage](#usage)
- [VS Code Setup (Recommended)](#vs-code-setup-recommended)
- [Competitive Programming Workflow](#competitive-programming-workflow)
- [Quick Reference Template](#quick-reference-template)
- [License](#license)

---

## Repository Structure

```
.
├── *.cpp                  # Problem solutions (one file per problem)
├── *.bin                  # Compiled binaries (from .cph testing)
├── .cph/                  # Competitive Programming Helper configs
├── output/                # Build output
└── .github/workflows/     # CI pipeline
```

## Problem Sources

| Platform | Example Problems |
|----------|-----------------|
| Codeforces | A, B, C, D, E, F level problems from various contests |
| CSES | Factory Machines, Save More Mice, Subarray Divisibility, etc. |
| Other | Palindrome Reorder, Counting Divisors, etc. |

## Algorithm Categories

### Binary Search on Answer
The most frequently used technique across the solutions.

| Problem | File | Description |
|---------|------|-------------|
| Factory Machines | `Factory_Machines.cpp` | Find minimum time to produce `t` items |
| Children Holiday | `D_Children_Holiday.cpp` | Distribute balloons among children |
| K-th Not Divisible by N | `C_K_th_Not_Divisible_by_n.cpp` | Find k-th non-divisible number |
| Maximum Median | `C_Maximum_Median.cpp` | Maximize median after operations |
| Very Easy Task | `C_Very_Easy_Task.cpp` | Minimum time to complete n tasks |
| String Game | `F_String_Game.cpp` | Binary search on character removals |
| Divide and Conquer | `A_Divide_and_Conquer.cpp` | Binary search introduction |

### Greedy

| Problem | File | Description |
|---------|------|-------------|
| Delete and Concatenate | `B_Delete_and_Concatenate.cpp` | Optimal array operations |
| Bash's Big Day | `B_Bash_s_Big_Day.cpp` | Maximum product subset |
| Red Blue Swaps | `Red_Blue_Swaps.cpp` | Swap operations |
| Save More Mice | `Save_More_Mice.cpp` | Cat and mice game |

### Math & Number Theory

| Problem | File | Description |
|---------|------|-------------|
| Theatre Square | `A_Theatre_Square.cpp` | Paving a rectangular plaza |
| Counting Divisors | `Counting_Divisors.cpp` | Count divisors for each number |
| GCD Arrays Easy | `GCD_Arrays_Easy.cpp` | GCD-based array operations |
| Subarray Divisibility | `Subarray_Divisibility.cpp` | Count divisible subarrays |

### Data Structures

| Problem | File | Description |
|---------|------|-------------|
| Reverse Linked List | `reverse_linked_list.cpp` | Doubly linked list reversal |
| Palindrome Linked List | `palindrome_linked_list.cpp` | Check palindrome in linked list |

### String & Ad-hoc

| Problem | File | Description |
|---------|------|-------------|
| Helpful Maths | `A_Helpful_Maths.cpp` | Sort numbers in expression |
| Petya and Strings | `A_Petya_and_Strings.cpp` | String comparison |
| Palindrome Reorder | `Palindrome_Reorder.cpp` | Rearrange to form palindrome |
| Substring Shift | `Substring_Shift.cpp` | String shift operations |

## Code Style

- **Language:** C++17
- **Template:** Standard competitive programming template with full STL includes
- **Fast I/O:** `ios::sync_with_stdio(false); cin.tie(nullptr);`
- **Types:** `using ll = long long;`
- **Binary Search Pattern:**
  ```cpp
  auto ok = [&](ll mid) -> bool {
      // predicate logic
  };
  ll l = 0, r = 1e18, ans;
  while (l <= r) {
      ll mid = l + (r - l) / 2;
      if (ok(mid)) {
          ans = mid;
          r = mid - 1;
      } else {
          l = mid + 1;
      }
  }
  ```

## Installation

### Prerequisites

- [Git](https://git-scm.com/downloads)
- C++ compiler (g++ 11+ or clang++ 12+)

#### macOS (Homebrew)
```bash
brew install gcc git
```

#### Ubuntu/Debian
```bash
sudo apt update && sudo apt install g++ git build-essential
```

#### Windows (MSYS2)
```bash
pacman -S mingw-w64-x86_64-gcc git
```

### Clone Repository

```bash
git clone https://github.com/user-Phitron/Contest.git
cd Contest
```

## Usage

### Compile a Solution

```bash
g++ -std=c++17 -o output/program Problem_Name.cpp
```

**Flags explained:**
| Flag | Purpose |
|------|---------|
| `-std=c++17` | Enable C++17 features |
| `-o output/program` | Output binary location |
| `-O2` | Optimization (optional, for faster execution) |
| `-Wall` | Enable warnings (optional, for debugging) |

### Run a Solution

```bash
# Interactive input
./output/program

# File input
./output/program < input.txt

# With output redirect
./output/program < input.txt > output.txt
```

### Example Workflow

```bash
# 1. Compile the Theatre Square solution
g++ -std=c++17 -o output/theatre A_Theatre_Square.cpp

# 2. Create input file
echo "6 6 3" > input.txt

# 3. Run and verify output (expected: 4)
./output/theatre < input.txt

# 4. Clean up
rm -f input.txt
```

### Batch Compile (All Solutions)

```bash
for f in *.cpp; do
    name="${f%.cpp}"
    g++ -std=c++17 -o "output/$name" "$f"
done
```

## VS Code Setup (Recommended)

### 1. Install Extensions

- [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) - IntelliSense, debugging
- [CPH: Competitive Programming Helper](https://marketplace.visualstudio.com/items?itemName=sumerkodic.cph-helper) - Test case management

### 2. Configure Tasks

Create `.vscode/tasks.json`:

```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "build",
            "type": "shell",
            "command": "g++",
            "args": [
                "-std=c++17",
                "-o",
                "${workspaceFolder}/output/${fileBasenameNoExtension}",
                "${file}"
            ],
            "group": { "kind": "build", "isDefault": true },
            "problemMatcher": "$gcc"
        }
    ]
}
```

### 3. Using CPH

1. Open any `.cpp` file
2. Click **"Run"** button (or `Ctrl+Shift+B`)
3. Add test cases in the CPH panel
4. Click **"Test"** to verify against all test cases

### 4. Keyboard Shortcuts

| Shortcut | Action |
|----------|--------|
| `Ctrl+Shift+B` | Build current file |
| `F5` | Start debugging |
| `Ctrl+F5` | Run without debugging |

## Competitive Programming Workflow

```
1. Read problem statement
2. Create new file: Problem_Name.cpp
3. Write solution using template below
4. Compile & test with sample cases
5. Submit on Codeforces / CodeChef
```

## Quick Reference Template

```cpp
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    // Solution here
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;  // Remove if single test case
    while (t--) solve();
    
    return 0;
}
```

## License

This repository is for educational purposes.
