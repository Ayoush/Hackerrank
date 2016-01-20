template<class T>
class AddElements
{
    T element1,element2;
    public:
    AddElements(T arg1)
    {
        element1=arg1;
    }
    T add(T arg2)
    {
        element2=arg2;
        return element1+element2;
    }
    T concatenate(T arg2)
    {
        element2=arg2;
        return element1+element2;
    }
    
    
    
};
