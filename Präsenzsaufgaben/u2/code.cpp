#include <random> // to generate random numbers
#include <iostream>

float randzeropne()
{
  static std::random_device rd;
	static std::mt19937 gen(rd());
	static std::uniform_real_distribution<> dis(0,1); //why has this to be non static?
  return dis(gen);
}

int main()
{
  for (unsigned i = 0; i < 20; i++)
    std::cout << rand(0,1) << " ";
  std::cout << std::endl;
  return 0;
}

































//whats inefficient?
//lets assume the graph is large with average number of neighbors = 1000 nodes
std::vector<Node> nodes;
for (int i= 0; i<n; i++)
{
  nodes.emplace_back();

  Node v;
  for(int j =i; j<n; j++)
  {
    if(j!=i)
    {
      if (/*some criterion*/)
        v.adjacents.push_back(j); //v.adjacents is std::list<int>
    }
  }
  nodes.push_back(v);
}
//how can we fix it?













//class with many data members consuming a large amount of memory
class LargeObject {/*lots of data*/};

//which is ok?
void function(Graph lo)
{
  //do stuff
  lo.cyclic = true;
}

if (cylcic)

void function(LargeObject* lo)
{
  //do stuff
}

void function(LargeObject& lo)
{
  //do stuff
}


void function(LargeObject& lo) {....}

//how to call "function", given:
//1) from value
LargeObject lo;
function(lo);
function(&lo);
&: obj -> ptr

//2) from pointer
LargeObject* lo;
function(*lo);  *: ptr -> reference

//3) from reference
LargeObject& lo;

//4) from return value
LargeObject& generator()
{
  LargeObject lo;
  //do something
  return lo;   //is this a good idea??
}

LargeObject& lo = generator();
lo.do();

//5) from return value
LargeObject* generator()
{
  return new LargeObject();
}

//6) from inside the class
class LargeObject
{
public:
  void doStuff()
  {
    //we want to call "function" here
    function(*this);
  }
}















//whats wrong here?
void printCyclic(Graph& g)
{
  if (g.cyclic == true)
      std::cout << "Graph is cyclic :)" << std::endl;
  else
      std::cout << "Graph is acyclic :(" << std::endl;
}
















for(unsigned i =0; i<vec.size();i++)

//guess the output
#include <iostream>

int main()
{
        int i = -1;
        unsigned int j = 1;
        if ( i < j )
            std::cout << " i is less than j";
        else
            std::cout << " i is greater than j";

        return 0;
}
