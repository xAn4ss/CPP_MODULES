#ifndef ARRAY_HPP
#define ARRAY_HPP

template<class T> class Array
{
    private:
        T arr[];
    public:
        Array()
        {
            arr = NULL;
        };
        Array(unsigned int n){
            int *a = new T(n);
        };
        Array(const &Array copied)
        {
            
        };
        Array& operator=(const &Array rval)
        {
            if (this != &rval)
            {
                
            }
            return 
        };
        ~Array()
        {
            delete arr[];
        };
};



#endif