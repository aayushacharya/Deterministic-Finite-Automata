<h2>Deterministic Finite Automata</h2><br> 
<h4>By: <i>Aayush Acharya</i></h4><br>
<h2>Description</h2><br>
<p>This project is implemented using C++. In this project, one can configure DFA through text file following certain set of rules. The program will receive input string from the user
and will display whether the string is accepted or rejected by the DFA whilst showing every configuration(state, string)</p>
<p>In the sample file, I have configured a DFA which does not accept three consecutive b's</p><br>
<h4>Rules to configure DFA through text file</h4><br>
<ul>
<li>First line: Set of total states where the name of state should only be of one character.Eg.{p,q,r,s}</li>
<li>Second line: Set of alphabets.Eg.{a,b}</li>
<li>Third line: Initial state.Eg.p</li>
<li>Fourth line: Set of final states.Eg.{p,q,r}</li>
<li>Fifth line onwards: Should consist transition table of the following format
<ul type="-">
    <li>Initial state->Alphabet->Final state Eg.p->b->q </li></ul>
</li></ul>
