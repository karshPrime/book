# VHDL Cheatsheet

**VHDL** : **V**HSIC **H**ardware **D**escriptive **L**anugage<br>
**VHSIC** : **V**ery **H**igh **S**cale **I**ntegrated **C**ircuit
<br>

#### ⚠ Think in Hardware ⚠

## Content
1. [Introduction](https://github.com/karshPrime/book/VHDL#introduction)
   - [Simulate or Model](https://github.com/karshPrime/book/VHDL#simulate-or-model)
   - [Synthesize to hardware](https://github.com/karshPrime/book/VHDL#synthesize-to-hardware)
   - [Descriptions (uses at different levels)](https://github.com/karshPrime/book/VHDL#descriptions-uses-at-different-levels)
     - [Behavioural](https://github.com/karshPrime/book/VHDL#behavioural)
     - [Data Flow](https://github.com/karshPrime/book/VHDL#data-flow)
     - [Structural](https://github.com/karshPrime/book/VHDL#structural)
   - [Design approaches](https://github.com/karshPrime/book/VHDL#design-approaches)
     - [Top Down](https://github.com/karshPrime/book/VHDL#top-down)
     - [Structureal VHDL](https://github.com/karshPrime/book/VHDL#structureal-vhdl)
     - [RTL (Register Transfer Level) VHDL](https://github.com/karshPrime/book/VHDL#rtl-register-transfer-level-vhdl)
     - [Signal assignment](https://github.com/karshPrime/book/VHDL#signal-assignment)
     - [Ongoing changes](https://github.com/karshPrime/book/VHDL#ongoing-changes)
2. [Delta Delays δ](https://github.com/karshPrime/book/VHDL#delta-delays-%CE%B4)
3. [Vectors](https://github.com/karshPrime/book/VHDL#vectors)
4. [Conditional Assignment](https://github.com/karshPrime/book/VHDL#conditional-assignment)
   - [4 Ways of implemention](https://github.com/karshPrime/book/VHDL#4-ways-of-implemention)
5. [Modules](https://github.com/karshPrime/book/VHDL#modules)
   - [Entity](https://github.com/karshPrime/book/VHDL#entity)
   - [Architecture](https://github.com/karshPrime/book/VHDL#architecture)
   - [VHDL Entity & Ports](https://github.com/karshPrime/book/VHDL#vhdl-entity--ports)
   - [Component Pins & VHDL Ports](https://github.com/karshPrime/book/VHDL#component-pins--vhdl-ports)
   - [Hierarchy](https://github.com/karshPrime/book/VHDL#hierarchy)
   - [VHDL Signals](https://github.com/karshPrime/book/VHDL#vhdl-signals)
6. [Constants](https://github.com/karshPrime/book/VHDL#constants)
7. [Aliases](https://github.com/karshPrime/book/VHDL#aliases)
   - [Type System (Datatypes)](https://github.com/karshPrime/book/VHDL#type-system-datatypes)
   - [IEEE Standard Logic](https://github.com/karshPrime/book/VHDL#ieee-standard-logic)
8. [Arrays](https://github.com/karshPrime/book/VHDL#arrays)
   - [Vectors: 1 dimension Arrays](https://github.com/karshPrime/book/VHDL#vectors-1-dimension-arrays)
   - [Aggregates](https://github.com/karshPrime/book/VHDL#aggregates)
   - [Example: Read Only Memory](https://github.com/karshPrime/book/VHDL#example-read-only-memory)
9. [Operators](https://github.com/karshPrime/book/VHDL#operators)
   - [Operators from highest preference](https://github.com/karshPrime/book/VHDL#operators-from-highest-preference)
   - [Theory](https://github.com/karshPrime/book/VHDL#theory)
10. [Example Design: Dice](https://github.com/karshPrime/book/VHDL#example-design-dice)
