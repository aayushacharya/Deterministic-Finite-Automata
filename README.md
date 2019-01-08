<h2>Deterministic Finite Automata</h2><br> 
<h4>Submitted By: <i>Aayush Acharya</i></h4><br>
<h2>Description</h2><br>
<p>In this project, one can configure DFA through text file following certain set of rules. The program will receive input string from the user
and will display whether the string is accepted or rejected by the DFA</p>
<p>In the sample file, I have configured a DFA which does not accept three consecutive b's</p><br>
<h4>Rules to configure DFA through text file</h4><br>
<li>First line: Set of total states where the name of state should only be of one character.Eg.{p,q,r,s}
<li>Second line: Set of alphabets.Eg.{a,b}
<li>Third line: Initial state.Eg.p
<li>Fourth line: Set of final states.Eg.{p,q,r}
<li>Fifth line onwards: Should consist transition table of the following format
    <li>Initial state->Alphabet->Final state Eg.p->b->q 
