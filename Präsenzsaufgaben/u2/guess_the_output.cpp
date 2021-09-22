#include <iostream>

int main()
{
        int i = -1;
        unsigned int j = 1;
        if ( i < j )
            std::cout << " i is less than j" << std::endl;
        else
            std::cout << " i is greater than j" << std::endl;

        //std::cout << (unsigned)i << std::endl;   //can anyone explain this result?

        return 0;
}
