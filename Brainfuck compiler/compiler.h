
#ifndef COMPILER_H_INCLUDED
#define COMPILER_H_INCLUDED

#include <string>
#include <vector>
#include <fstream>
#include <stack>
class Compiler{
public:

Compiler()
{

}


void execute(const std::string& program)
{
    for(unsigned int i = 0 ; i<program.size();i++)
    {
        switch(program[i])
            {
            case'.':
                std::cout<<*p;
            break;
            case',':
                std::cin>>*p;
            break;
            case'+':
                m_increment();
            break;
            case'-':
                m_decrement();
            break;
            case'>':
                m_right();
            break;
            case'<':
                m_left();
            break;
            case'[':
                if(*p !=0){loop_stack.push(i);}
                else{
                        while(program[i] != ']')
                        {
                            ++i;
                 }
                }
                break;
            case']':
                if(*p != 0)
                {
                    i = loop_stack.top();
                }else
                {
                    loop_stack.pop();
                }

                break;


            default:
                break;
            }
    }



}

void execute_file(const std::string& file_path)
{
    std::ifstream ifs(file_path.c_str());
    std::string content( (std::istreambuf_iterator<char>(ifs) ),
                       (std::istreambuf_iterator<char>()    ) );
    execute(content);

}

void m_left()
{
    --p;
}
void m_right()
{
    ++p;
}
void m_increment()
{
    ++(*p);
}
void m_decrement()
{
    --(*p);
}


void dump()
{
std::cout<<*p;

}

private:
short mem [30000]{0};
short* p = mem;
std::stack <int> loop_stack;
};



#endif // COMPILER_H_INCLUDED
