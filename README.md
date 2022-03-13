## Deterministic Finite Automata 

\- *Aayush Acharya*

### Description
This project is implemented using C++. In this project, one can configure DFA through text file following certain set of rules. The program will receive input string from the user
and will display whether the string is accepted or rejected by the DFA whilst showing every configuration(state, string)


In the sample file, I have configured a DFA which does not accept three consecutive b's
#### Rules to configure DFA through text file

- First line: Set of total states where the name of state should only be of one character.Eg. `{p,q,r,s}`
- Second line: Set of alphabets. Eg. `{a,b}`
- Third line: Initial state.Eg. `p`
- Fourth line: Set of final states.Eg. `{p,q,r}`
- Fifth line onwards: Should consist transition table of the following format
    - `Initial state->Alphabet->Final state` Eg. `p->b->q`
