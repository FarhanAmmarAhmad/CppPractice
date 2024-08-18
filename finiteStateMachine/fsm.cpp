// Create a finite automaton that has three states. Finite automatons are the same as finite state machines for our purposes.

// Our simple automaton, accepts the language of A, defined as {0, 1} and should have three states: q1, q2, and q3. Here is the description of the states:

//     q1 is our start state, we begin reading commands from here
//     q2 is our accept state, we return true if this is our last state

// And the transitions:

//     q1 moves to q2 when given a 1, and stays at q1 when given a 0
//     q2 moves to q3 when given a 0, and stays at q2 when given a 1
//     q3 moves to q2 when given a 0 or 1

// The automaton should return whether we end in our accepted state (q2), or not (true/false).
#include <iostream>
#include <vector>
#include <stdbool.h>

class Automaton
{
private:
  enum class State
  {
    q1,
    q2,
    q3
  };
  
  State m_state;
  
  void nextState(char c);
public:
  Automaton();
  bool read_commands(const std::vector<char>& commands);
};

Automaton::Automaton()
  : m_state(State::q1)
{
}

void Automaton::nextState(char c)
{
  switch (m_state)
  {
    case State::q1:
    {
      if (c == '1')
      {
        m_state = State::q2;
      }
    }
    break;
    case State::q2:
    {
      if (c == '0')
      {
        m_state = State::q3;
      }
    }
    break;
    case State::q3:
    {
      m_state = State::q2;
    }
    break;
  }
}

bool Automaton::read_commands(const std::vector<char>& commands)
{
  for (const auto& c : commands)
  {
    nextState(c);
  }
  
  return (m_state == State::q2);
}
int main(){
    Automaton myAutomaton;
    bool result  = myAutomaton.read_commands({'1', '0', '0', '1'});
    result ? std::cout << "Accepted" : std::cout << "Rejected";
    return 0;
}