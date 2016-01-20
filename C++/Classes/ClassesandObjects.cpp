class Student
{
    private :
        int marks[5];
        int totalmarks;
    public:
        void Input()
        {
          for(int i=0;i<5;i++)
          {
              scanf("%d",&marks[i]);
          }  
        }
    int CalculateTotalScore()
    {
        int sum=0;
         for(int i=0;i<5;i++)
          {
              sum+=marks[i];
          } 
        return sum;
    }
    
    
};