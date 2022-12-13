class Student{
    public :
    int rollno;
    private :
    int age;
    public :
    void display()
    {
        cout<< age << " " << rollno << endl;
    }
    int getAge(int a)
    {
        age=a;
    }
};